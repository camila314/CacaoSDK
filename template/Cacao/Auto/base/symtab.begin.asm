extern _base
%macro getaddr 1
	mov r11, [rel _base]
	add r11,  %1
%endmacro
%macro relcall 1
	getaddr %1
	call r11
%endmacro

%macro pushallnorax 0
	push rbx
	push rdi
	push rsi
	push rdx
	push rcx
	push r8
	push r9
	push r10
	push r11
	push r12
	push r13
	push r14
	push r15
%endmacro

%macro popallnorax 0
	pop r15
	pop r14
	pop r13
	pop r12
	pop r11
	pop r10
	pop r9
	pop r8
	pop rcx
	pop rdx
	pop rsi
	pop rdi
	pop rbx
%endmacro


%macro pushmm 1
	sub rsp, 16
	movss [rsp], %1
%endmacro

%macro popmm 1
	movss %1, [rsp]
	add rsp, 16
%endmacro

%macro pushallxmm 0
	pushmm xmm0
	pushmm xmm1
	pushmm xmm2
	pushmm xmm3
	; pushmm xmm4
	; pushmm xmm5
	; pushmm xmm6
	; pushmm xmm7
%endmacro

%macro popallxmm 0
	;popmm xmm7
	;popmm xmm6
	;popmm xmm5
	;popmm xmm4
	popmm xmm3
	popmm xmm2
	popmm xmm1
	popmm xmm0
%endmacro

extern __Z7getBasev
extern _memcpy
%macro defit 2
global %1
%1:
	push rbp
	mov rbp, rsp
	pushallnorax
	pushallxmm
	push rsi
	push rdi

	call __Z7getBasev
	add rax, %2

	pop rdi
	pop rsi
	popallxmm
	popallnorax
	pop rbp
	jmp rax
%endmacro

%macro virt 2
global %1
%1:
	push rbp
	mov rbp, rsp
	mov rax, [rdi]
	call [rax+%2]
	pop rbp
	ret
%endmacro

%macro classvar 2
global %1
%1:
	push rbp
	mov rbp, rsp
	mov rax, [rdi+%2]
	pop rbp
	ret
%endmacro

%macro typeinfo 3
	call __Z7getBasev
	add rax, %2
	mov rsi, rax
	lea rdi, [rel %1]
	mov rdx, %3
	call _memcpy
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

; ; my own modification
; global __ZN15CCTextInputNode11getString_sEv
; __ZN15CCTextInputNode11getString_sEv:
; 	push rbp
; 	mov rbp, rsp
; 	mov rdi, [rdi+0x1c0]
; 	mov rax, [rdi]
; 	call [rax+0x4b8]
; 	pop rbp
; 	ret

global __Z14setupTypeinfosv
__Z14setupTypeinfosv:
	push rbp
	mov rbp, rsp
	;call __Z7getBasev
	;add rax, 0x624f70
	;mov [rel __ZTIN7cocos2d6CCNodeE], rax
	;typeinfo __ZTI12FLAlertLayer, 0x65d870, 40
	pop rbp
	ret

%macro addvtable 2
	call __Z7getBasev
	lea rax, [rax + %2]
	mov %1, rax
%endmacro

; ; haha funny optimizations
; global __ZN12FLAlertLayerC2Ev
; __ZN12FLAlertLayerC2Ev:
; 	push rbp
; 	mov rbp, rsp
; 	push rbx
	
; 	mov rbx, rdi
; 	call __ZN7cocos2d12CCLayerColorC2Ev

; 	addvtable [rbx], 0x65d200
; 	addvtable [rbx+0x120], 0x65d6f8
; 	addvtable [rbx+0x130], 0x65d770
; 	addvtable [rbx+0x138], 0x65d790

; 	pop rbx
; 	pop rbp
; 	ret

%macro thunk 3
global %1
%1:
	push rbp
	mov rbp, rsp

	add rdi, -%3

	pop rbp
	jmp %2
%endmacro

%macro nul 1
	global %1
	%1: resq 1
%endmacro


