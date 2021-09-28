// 
// Copyright rd_route 2015.
// almost none of this code belongs to us.
//
#include "Route.hpp"

void* followJMP(void* addr) {
    ZydisDecoder decoder;
    ZydisDecoderInit(&decoder, ZYDIS_MACHINE_MODE_LONG_64, ZYDIS_ADDRESS_WIDTH_64);
    ZydisDecodedInstruction instruction;

    if (ZYAN_SUCCESS(ZydisDecoderDecodeBuffer(&decoder, addr, 32, &instruction))) {
        if (instruction.mnemonic == ZYDIS_MNEMONIC_JMP) { // follow the jump
            return followJMP(*reinterpret_cast<void**>((long)addr + instruction.length));
        } else {
            return addr;
        }
    } else {
        RouteError("Could not parse assembly at %p, this really shouldnt happen wtf", addr);
        return addr;
    }
}

int duplicateFunction(void *function, void **duplicate) {
    RouteLog("dupe %p to %p\n", function, duplicate);
    if (!function || !duplicate) {
        return (KERN_INVALID_ARGUMENT);
    }

    void *image = NULL;
    mach_vm_size_t image_slide = 0;

    function = followJMP(function);

    /* Obtain the macho header image which contains the function */
    Dl_info image_info = {0};
    if (dladdr(function, &image_info)) {
        image = image_info.dli_fbase;
    }
    if (!image) {
        RouteError("Could not found a loaded mach-o image containing the given function.");
        return KERN_FAILURE;
    }

    for (uint32_t i = 0; i < _dyld_image_count(); i++) {
        if (image == _dyld_get_image_header(i)) {
            image_slide = _dyld_get_image_vmaddr_slide(i);
            break;
        }
    }

    static rd_injection_t *injection_history = NULL;
    static uint16_t history_size = 0;
    /* Look up the injection history if we already have this image remapped. */
    for (uint16_t i = 0; i < history_size; i++) {
        if (injection_history[i].injected_mach_header == (mach_vm_address_t)image) {
            if (duplicate) {
                *duplicate = reinterpret_cast<void*>((char*)injection_history[i].target_address + (reinterpret_cast<char*>(function) - reinterpret_cast<char*>(image)));
                jumpBackIsland(function, *duplicate);
            }
            return KERN_SUCCESS;
        }
    }

    /**
     * Take a note that we have already remapped this mach-o image, so won't do this
     * again when routing another function from the image.
     */
    size_t new_size = history_size + 1;
    injection_history = static_cast<rd_injection_t*>(realloc(injection_history, sizeof(*injection_history) * new_size));
    injection_history[history_size].injected_mach_header = (mach_vm_address_t)image;
    injection_history[history_size].target_address = ({
        mach_vm_address_t target = 0;
        kern_return_t err = remapImage(image, image_slide, &target);
        if (KERN_SUCCESS != err) {
            RouteError("Failed to remap segments of the image. See error messages above.");
            return (err);
        }
        /* Backup an original function implementation if needed */
        if (duplicate) {
            *duplicate = (void *)(target + ((mach_vm_address_t)function - (mach_vm_address_t)image));
            jumpBackIsland(function, *duplicate);
        }

        target;
    });

    history_size = new_size;

    return KERN_SUCCESS;
}

kern_return_t remapImage(void *image, mach_vm_size_t image_slide, mach_vm_address_t *new_location) {
    assert(image);
    assert(new_location);

    mach_vm_address_t data_segment_offset = 0;
    mach_vm_size_t image_size = imageSize(image, image_slide, &data_segment_offset);

    kern_return_t err = KERN_FAILURE;

    *new_location = 0;
    err = mach_vm_allocate(mach_task_self(), new_location,
                          (image_size + data_segment_offset), VM_FLAGS_ANYWHERE);
    *new_location += data_segment_offset;

    return (err);
}

kern_return_t jumpBackIsland(void* to, void* from) {
    int jmp_back_offset = 16;
    ZydisDecoder decoder;
    ZydisDecoderInit(&decoder, ZYDIS_MACHINE_MODE_LONG_64, ZYDIS_ADDRESS_WIDTH_64);

    int offset = 0;
    char data[64];
    memcpy(&data, from, 64);

    bool success = false;
    ZydisDecodedInstruction instruction;
    while (ZYAN_SUCCESS(ZydisDecoderDecodeBuffer(&decoder, data + offset, (jmp_back_offset+15) - offset, &instruction))) {
        offset += instruction.length;
        if (offset >= jmp_back_offset) {
            success = true;
            jmp_back_offset = offset;
            break;
        }
    }

    if (success) {
        kern_return_t ret = getJMPBytes((void*)((uintptr_t)to + jmp_back_offset), &data[offset]);

        if (ret == KERN_SUCCESS) {
            ret = protectPM((mach_vm_address_t)from, 64, VM_PROT_WRITE | VM_PROT_READ | VM_PROT_EXECUTE);

            if (ret == KERN_SUCCESS) {
                memcpy(from, &data, 64);
                RouteLog("Patched %p + %d with a jump to %p\n", from, jmp_back_offset, (void*)((uintptr_t)to + jmp_back_offset + 4));
                return KERN_SUCCESS;
            } else {
                RouteLog("Jump back didn't work, reason is %s ; code %d ; patched to %p\n", mach_error_string(ret), ret, from);
                return 3;
            }
        } else {
            return 3;
        }
    } else {
        RouteError("Could not parse assembly at %p, this really shouldnt happen wtf", from);
        return 3;
    }
}




/**
 * JMP implements by your dearest alk
 */
constexpr mach_msg_type_number_t sizeofJMP = (sizeof(int) + 1);

mach_vm_address_t followJMP(mach_vm_address_t at) {
    assert(at);
    mach_vm_address_t follow = 0;
    mach_vm_address_t next;

    // why
    while (next = readJMP(follow)) follow = next;

    return follow;
}

mach_vm_address_t readJMP(mach_vm_address_t at) {
    assert(at);

    kern_return_t err = KERN_FAILURE;
    uint8_t opcodes[sizeofJMP];

    err = readPM(at, sizeofJMP, opcodes);

    if (err == KERN_FAILURE) {
        RouteError("Couldn't read jmp instruction at %p - returned %p", (void*)at, (void*)err);
        return 0;
    }
    if (opcodes[0] != 0xE9) {
        return 0;
    }

    int offset = *((int*)&opcodes[1]);
    return at + sizeofJMP + offset;
}

void writeJMP(mach_vm_address_t at, mach_vm_address_t to) {
    assert(at);
    assert(to);

    /**
     * No we are going to use a relative jump for x86_64 because of things:
     * No need to fix the relative instructions we overwrite (5 instead of 14, highly unlikely to clash with an relative instruction)
     * That's mostly it.
     * oh and otherwise i cri
     */

    kern_return_t err = KERN_FAILURE;
    uint8_t opcodes[sizeofJMP];

    int offset = (int)(to - at - sizeofJMP);
    opcodes[0] = 0xE9;
    *((int*)&opcodes[1]) = offset;

    err = writePM(at, sizeofJMP, opcodes);

    if (err == KERN_FAILURE) {
        RouteError("Couldn't write jmp instruction at %p to %p - returned %p", (void*)at, (void*)to, (void*)err);
    }
    RouteLog("Created a jmp instruction at %p to %p", (void*)at, (void*)to); 
}

/**
 * uwu stuff
 */
kern_return_t duplicateFunction(void* function, void** duplicate) {
    RouteLog("Duplicate function %p to %p\n", function, duplicate);
    if (!function || !duplicate) return KERN_INVALID_ARGUMENT;

    function = followJMP(function);

    

    return KERN_SUCCESS;
}



/**
 * Some nerd stuff i no understand
 */
mach_vm_address_t allocateVM(size_t length) {
    kern_return_t err = KERN_FAILURE;

    mach_vm_address_t alloc;
    err = mach_vm_allocate(mach_task_self(), &alloc, length, VM_FLAGS_ANYWHERE);

    if (err == KERN_FAILURE) {
        RouteError("Failed to allocate a memory region - returned %p", (void*)err);
        return 0;
    }
    RouteLog("Allocated a memory region at %p with size %d", (void*)alloc, length); 
    return alloc;
}

kern_return_t readPM(mach_vm_address_t address, size_t length, char* bytes) {
    uint32_t placeholder;
    return mach_vm_read(mach_task_self(), address, length, (vm_offset_t*)bytes, &placeholder);
}

kern_return_t protectPM(mach_vm_address_t address, size_t length, vm_prot_t protection) {
    return mach_vm_protect(mach_task_self(), address, length, FALSE, protection);
}

kern_return_t writePM(mach_vm_address_t address, size_t length, char* bytes) {
    kern_return_t ret = protectPM(address, length, VM_PROT_WRITE | VM_PROT_READ | VM_PROT_EXECUTE);
    if (ret != KERN_SUCCESS) return ret;
    return mach_vm_write(mach_task_self(), address, (vm_offset_t)bytes, (mach_msg_type_number_t)length);
}



