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