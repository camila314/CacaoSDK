//
//  lowLevel.hpp
//  GDML
//
//  Created by Camden on 7/17/20.
//  this isn't copyright its pretty much taken from rd_route
//

#ifndef lowLevel_hpp
#define lowLevel_hpp

#include <stdlib.h>         // realloc()
#include <libgen.h>         // basename()
#include <assert.h>         // assert()
#include <stdio.h>          // fprintf()
#include <dlfcn.h>        // dladdr()
#include <mach/mach_vm.h> // mach_vm_*

#include <mach-o/dyld.h>    // _dyld_*
#include <mach-o/nlist.h>   // nlist/nlist_64
#include <mach/mach_init.h> // mach_task_self()

typedef struct mach_header_64     mach_header_t;
typedef struct segment_command_64 segment_command_t;
#define LC_SEGMENT_ARCH_INDEPENDENT   LC_SEGMENT_64
typedef struct nlist_64 nlist_t;

typedef struct rd_injection {
    mach_vm_address_t injected_mach_header;
    mach_vm_address_t target_address;
} rd_injection_t;

#define RDErrorLog(format, ...) fprintf(stderr, "%s:%d:\n\terror: " format"\n", \
__FILE__, __LINE__, ##__VA_ARGS__)

mach_vm_size_t _image_size(void *image, mach_vm_size_t image_slide, mach_vm_address_t *data_segment_offset);
kern_return_t  _remap_image(void *image,  mach_vm_size_t image_slide, mach_vm_address_t *new_location);
kern_return_t  _get_jmp_bytes(void* to, char* buf);
kern_return_t  _patch_memory(void *address, mach_msg_type_number_t count, uint8_t *new_bytes);
void*          _function_ptr_from_name(const char *function_name, const char *suggested_image_name);
void*          _function_ptr_within_image(const char *function_name, void *macho_image_header, uintptr_t vm_image_slide);
int dupe(void *function, void **duplicate);

int rd_duplicate_function(void *function, void **duplicate);

kern_return_t readPM(mach_vm_address_t address, size_t length, char* bytes);
kern_return_t writePM(mach_vm_address_t address, size_t length, char* bytes);
#endif /* lowLevel_hpp */
