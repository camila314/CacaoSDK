// 
// Copyright rd_route 2015.
// its pretty much taken from rd_route
// 
#pragma once

#include <stdlib.h>         // realloc()
#include <libgen.h>         // basename()
#include <assert.h>         // assert()
#include <stdio.h>          // fprintf()
#include <dlfcn.h>          // dladdr()
#include <mach/mach_vm.h>   // mach_vm_*
#include <mach/mach.h>

#include <mach-o/dyld.h>    // _dyld_*
#include <mach-o/nlist.h>   // nlist/nlist_64
#include <mach/mach_init.h> // mach_task_self()

#include <Zydis/Zydis.h>    // disassembler

typedef struct mach_header_64     mach_header_t;
typedef struct segment_command_64 segment_command_t;
#define LC_SEGMENT_ARCH_INDEPENDENT   LC_SEGMENT_64
typedef struct nlist_64 nlist_t;

typedef struct rd_injection {
    mach_vm_address_t injected_mach_header;
    mach_vm_address_t target_address;
} rd_injection_t;

#define RouteError(format, ...) fprintf(stderr, "%s:%d:\nerror: " format"\n", __FILE__, __LINE__, ##__VA_ARGS__)
#define RouteLog(format, ...) fprintf(stdout, "%s:%d:\nlog: " format"\n", __FILE__, __LINE__, ##__VA_ARGS__)

kern_return_t   protectProcessMemory(mach_vm_address_t address, size_t length, vm_prot_t protection);
kern_return_t   jumpBackIsland(void* to, void* from);
mach_vm_size_t  imageSize(void *image, mach_vm_size_t image_slide, mach_vm_address_t *data_segment_offset);
kern_return_t   remapImage(void *image,  mach_vm_size_t image_slide, mach_vm_address_t *new_location);
kern_return_t   getJMPBytes(void* to, char* buf);
kern_return_t   patchMemory(void *address, mach_msg_type_number_t count, uint8_t *new_bytes);
int             duplicateFunction(void *function, void **duplicate);
kern_return_t   readPM(mach_vm_address_t address, size_t length, char* bytes);
kern_return_t   writePM(mach_vm_address_t address, size_t length, char* bytes);
void*           followJMP(void* addr);

