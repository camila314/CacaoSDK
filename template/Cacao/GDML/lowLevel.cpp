//
//  lowLevel.cpp
//  GDML
//
//  Created by Full Name on 7/17/20.
//  almost none of this code belongs to me.
//

#include <lowLevel.hpp>
#include <Zydis/Zydis.h>

void* _follow_jmp(void* addr) {
#ifdef CAC_VERBOSE
    printf("Follow jump %p\n", addr);
#endif
    ZydisDecoder decoder;
    ZydisDecoderInit(&decoder,
                    ZYDIS_MACHINE_MODE_LONG_64,
                    ZYDIS_ADDRESS_WIDTH_64);
    ZydisDecodedInstruction instruction;

    if (ZYAN_SUCCESS(ZydisDecoderDecodeBuffer(
                        &decoder, 
                        addr, 
                        32, 
                        &instruction))
    ) {
        if (instruction.mnemonic == ZYDIS_MNEMONIC_JMP) { // follow the jump
#ifdef CAC_VERBOSE
            printf("go deeper uwu\n");
#endif
            return _follow_jmp(*reinterpret_cast<void**>((long)addr + instruction.length));
        } else {
            return addr;
        }
    } else {
        RDErrorLog("Could not parse assembly at %p, this really shouldnt happen wtf", addr);
        return addr;
    }
}

int dupe(void *function, void **duplicate)
{
#ifdef CAC_VERBOSE
    printf("dupe %p to %p\n", function, duplicate);
#endif
    if (!function || !duplicate) {
        return (KERN_INVALID_ARGUMENT);
    }

    void *image = NULL;
    mach_vm_size_t image_slide = 0;

    function = _follow_jmp(function);

    /* Obtain the macho header image which contains the function */
    Dl_info image_info = {0};
    if (dladdr(function, &image_info)) {
        image = image_info.dli_fbase;
    }
    if (!image) {
        RDErrorLog("Could not found a loaded mach-o image containing the given function.");
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
                _island_jump_back(function, *duplicate);
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
        kern_return_t err = _remap_image(image, image_slide, &target);
        if (KERN_SUCCESS != err) {
            RDErrorLog("Failed to remap segements of the image. See error messages above.");
            return (err);
        }
        /* Backup an original function implementation if needed */
        if (duplicate) {
            *duplicate = (void *)(target + ((mach_vm_address_t)function - (mach_vm_address_t)image));
            _island_jump_back(function, *duplicate);
        }

        target;
    });

    history_size = new_size;

    return KERN_SUCCESS;
}

kern_return_t _remap_image(void *image, mach_vm_size_t image_slide, mach_vm_address_t *new_location)
{
    assert(image);
    assert(new_location);

    mach_vm_address_t data_segment_offset = 0;
    mach_vm_size_t image_size = _image_size(image, image_slide, &data_segment_offset);

    kern_return_t err = KERN_FAILURE;
    /*
     * On x86_64 for some images __DATA segment is mapped far from other segments.
     * To handle it we need to allocate a memory zone that has enough capacity
     * for both __DATA's island and the rest of the image.
     *
     * Since __DATA is mapped even *before* the actual image, we are going to have
     * a "safety zone" (the space between __TEXT and __DATA segments) by skipping
     * the first data_segment_offset bytes. Thus, __DATA will be remapped into a
     * valid (i.e. owned by user) memory space.
     * Here's a map of whole memory zone:
     *                                               image_size bytes
     *                                            ---------------------
     *        __DATA island                      /                     \
     *            /   \                         /                       \
     *  >--------*-----*-----------------------*------(...)------*-------*--->
     *           |                             |                 |
     *           |                             |                 |
     *        __DATA                        __TEXT          __LINKEDIT
     *           |                             |
     *           |                             |
     *      *new_location        *new_location + data_segment_offset
     *
     * NOTE: vmaddr(__TEXT) - vmaddr(__DATA) = const, so we can't remap __DATA
     * into any place we want.
     */
    *new_location = 0;
    err = mach_vm_allocate(mach_task_self(), new_location,
                          (image_size + data_segment_offset), VM_FLAGS_ANYWHERE);
    *new_location += data_segment_offset;

    if (KERN_SUCCESS != err) {
        RDErrorLog("Failed to allocate a memory region for the function copy - mach_vm_allocate() returned 0x%x\n", err);
        return (err);
    }

    const mach_header_t *header = (mach_header_t *)image;
    struct load_command *cmd = (struct load_command *)(header + 1);

    /**
     * Remap each segment of the mach-o image into a new location.
     * New location is:
     * -> target_image + segment.offset_in_image;
     */
    for (uint32_t i = 0; (i < header->ncmds); i++, cmd = (struct load_command*)((long)cmd + cmd->cmdsize)) {
        if (cmd->cmd != LC_SEGMENT_ARCH_INDEPENDENT) continue;

        segment_command_t *segment = (segment_command_t *)cmd;
        mach_vm_address_t vmaddr = segment->vmaddr;
        mach_vm_size_t    vmsize = segment->vmsize;

        if (vmsize == 0) continue;

        mach_vm_address_t seg_source = vmaddr + image_slide;
        mach_vm_address_t seg_target = *new_location + (seg_source - (mach_vm_address_t)header);

        vm_prot_t cur_protection, max_protection;

        err = mach_vm_remap(
            /* Target information */
            mach_task_self(), &seg_target, vmsize, 0x0,
            /* Flags */
            (VM_FLAGS_FIXED | 0x4000 ),
            /* Source information */
            mach_task_self(), seg_source,
            /* Should we copy this region? (it will be directly mapped otherwise) */
            true,
            /* The initial protection for the new region */
            &cur_protection, &max_protection,
            /* The inheritance attribute */
            VM_INHERIT_SHARE);
    }

    if (KERN_SUCCESS != err) {
        RDErrorLog("Failed to remap the function implementation to the new address - mach_vm_remap() returned 0x%x\n", err);
    }

    return (err);
}

mach_vm_size_t _image_size(void *image, mach_vm_size_t image_slide, mach_vm_address_t *data_segment_offset)
{
    assert(image);

    const mach_header_t *header = (mach_header_t *)image;
    struct load_command *cmd = (struct load_command *)(header + 1);

    mach_vm_address_t image_addr = (mach_vm_address_t)image - image_slide;
    mach_vm_address_t image_end = image_addr;
    mach_vm_address_t data_vmaddr = 0, text_vmaddr = 0;

    for (uint32_t i = 0; (i < header->ncmds); i++, cmd = (struct load_command *)((long)cmd + cmd->cmdsize)) {
        if (cmd->cmd != LC_SEGMENT_ARCH_INDEPENDENT) continue;

        segment_command_t *segment = (segment_command_t *)cmd;
        if (0 == strcmp("__DATA", segment->segname)) {
            data_vmaddr = segment->vmaddr;
        }  else if (0 == strcmp("__TEXT", segment->segname)) {
            text_vmaddr = segment->vmaddr;
        }

        if ((segment->vmaddr + segment->vmsize) > image_end) {
            image_end = segment->vmaddr + segment->vmsize;
        }
    }

    if (data_vmaddr < text_vmaddr) {
        *data_segment_offset = text_vmaddr - data_vmaddr;
    }

    return (image_end - image_addr);
}

kern_return_t _island_jump_back(void* to, void* from) {
    int jmp_back_offset = 16;
    ZydisDecoder decoder;
    ZydisDecoderInit(&decoder,
                     ZYDIS_MACHINE_MODE_LONG_64,
                     ZYDIS_ADDRESS_WIDTH_64);

    int offset = 0;
    char data[64];
    memcpy(&data, from, 64);

    bool success = false;
    ZydisDecodedInstruction instruction;
    while (ZYAN_SUCCESS(ZydisDecoderDecodeBuffer(&decoder, data + offset,
      (jmp_back_offset+15) - offset, &instruction))) {
        offset += instruction.length;
        if (offset >= jmp_back_offset) {
          success = true;
          jmp_back_offset = offset;
          break;
        }
    }

    if (success) {
      kern_return_t ret = _get_jmp_bytes(
        (void*)((uintptr_t)to + jmp_back_offset),
        &data[offset]);

      if (ret == KERN_SUCCESS) {
        ret = _protectProcessMemory((mach_vm_address_t)from, 64,
          VM_PROT_WRITE | VM_PROT_READ | VM_PROT_EXECUTE);

        if (ret == KERN_SUCCESS) {
            memcpy(from, &data, 64);
#ifdef CAC_VERBOSE
            printf("Patched %p + %d with a jump to %p\n", from, jmp_back_offset, (void*)((uintptr_t)to + jmp_back_offset + 4));
#endif
            return KERN_SUCCESS;
        } else {
#ifdef CAC_VERBOSE
            printf("Jump back didn't work, reason is %s ; code %d ; patched to %p\n", mach_error_string(ret), ret, from);
#endif
            return 3;
        }
      } else {
        return 3;
      }
    } else {
      RDErrorLog("Could not parse assembly at %p, this really shouldnt happen wtf", from);
      return 3;
    }
}

kern_return_t _get_jmp_bytes(void* to, char* buf)
{
    //assert(to);
    /**
     * We are going to use an absolute JMP instruction for x86_64
     * and a relative one for i386.
     */
#if defined (__x86_64__)
    mach_msg_type_number_t size_of_jump = (sizeof(uintptr_t) * 2);
#else
    mach_msg_type_number_t size_of_jump = (sizeof(int) + 1);
#endif

    kern_return_t err = KERN_SUCCESS;
    uint8_t opcodes[size_of_jump];
#if defined(__x86_64__)
    opcodes[0] = 0xFF;
    opcodes[1] = 0x25;
    *((int*)&opcodes[2]) = 0;
    *((uintptr_t*)&opcodes[6]) = (uintptr_t)to;
    memcpy(buf, &opcodes, size_of_jump);
    //err = _patch_memory((void *)where, size_of_jump, opcodes);
    
#else
    int offset = (int)(to - where - size_of_jump);
    opcodes[0] = 0xE9;
    *((int*)&opcodes[1]) = offset;
    err = _patch_memory((void *)where, size_of_jump, opcodes);
#endif

    return (err);
}

kern_return_t readPM(mach_vm_address_t address, size_t length, char* bytes) {
    uint32_t placehoolder;
    return mach_vm_read(mach_task_self(), address, length,(vm_offset_t*)bytes,&placehoolder);
}


kern_return_t _protectProcessMemory(mach_vm_address_t address, size_t length, vm_prot_t protection) {
    return mach_vm_protect(mach_task_self(), address, length, FALSE, protection);
}

kern_return_t writePM(mach_vm_address_t address, size_t length, char* bytes) {
    kern_return_t ret = _protectProcessMemory(address, length, 7);
    if(ret != KERN_SUCCESS)
        return ret;
    
    return mach_vm_write(mach_task_self(), address, (vm_offset_t)bytes, (mach_msg_type_number_t)length);
}
