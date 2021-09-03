extern _base
%macro defit 2
global %1
%1:
    mov rax, [rel _base]
    add rax, %2
    jmp rax
%endmacro

global __ZN5GDObj9valOffsetEl
__ZN5GDObj9valOffsetEl:
    lea rax, [rdi+rsi]
    ret

global __ZN5GDObj12setValOffsetElPv
__ZN5GDObj12setValOffsetElPv:
    mov [rdi+rsi], rdx
    ret

global __ZN11GameManager7manFileEv
__ZN11GameManager7manFileEv:
    lea rax, [rdi+0x120]
    ret


global __ZN7cocos2d2ui6MarginC1Ev
__ZN7cocos2d2ui6MarginC1Ev:
    push rbp
    mov rbp, rsp
    pop rbp
    ret

global __ZN11GameManager17setSecondColorIdxEi
__ZN11GameManager17setSecondColorIdxEi:
    mov [rdi+0x260], esi
    mov dword [rdi+0x264], 0
    ret
global __ZN11GameManager16setFirstColorIdxEi
__ZN11GameManager16setFirstColorIdxEi:
    mov [rdi+0x254], esi
    mov dword [rdi+0x258], 0
    ret

%macro thunk 3
global %1
%1:
    add rdi, -%3
    jmp %2
%endmacro

%macro nul 1
    global %1
    %1: resb 1
%endmacro
