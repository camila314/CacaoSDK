%include "asminclude.asm"
extern __Z7getBasev
extern _memcpy
%macro defit 2
global %1
%1:
	push rbp
	mov rbp, rsp
	pushallnorax
	pushmm xmm0
	pushmm xmm1
	push rsi
	push rdi

	call __Z7getBasev
	add rax, %2

	pop rdi
	pop rsi
	popmm xmm1
	popmm xmm0
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

defit __ZN7cocos2d12CCDictionary12objectForKeyEl, 0x190bb0
defit __ZN7cocos2d12CCDictionary5countEv, 0x190430

defit __ZN15GJBaseGameLayer14updateCountersEii, 0xb9bc0

defit __ZN15GJEffectManager11toggleGroupEib, 0xb75f0
defit __ZN15GJEffectManager19countChangedForItemEi, 0x185a40

defit __ZN15GJBaseGameLayer20toggleGroupTriggeredEib, 0xb75a0
defit __ZN15GJBaseGameLayer10pushButtonEib, 0xb9920
defit __ZN15GJBaseGameLayer13releaseButtonEib, 0xb9a00

defit __ZN11GameManager18getIntGameVariableEPKc, 0x1cd1d0

defit __ZN8EditorUI12scaleObjectsEPN7cocos2d7CCArrayEfNS0_7CCPointE, 0x252e0
defit __ZN8EditorUI10moveObjectEP10GameObjectN7cocos2d7CCPointE, 0x24b10

defit __ZN10GameObject17updateCustomScaleEf, 0x335eb0

defit __ZNK7cocos2d7CCPointmlEf, 0x137180

defit __ZNK7cocos2d6CCSizedvEf, 0x1374e0

defit __ZN7cocos2d18CCSpriteFrameCache22sharedSpriteFrameCacheEv, 0x198970
defit __ZN7cocos2d18CCSpriteFrameCache17spriteFrameByNameEPKc, 0x19a7e0
defit __ZN7cocos2d18CCSpriteFrameCache23addSpriteFramesWithFileEPKc, 0x199a10

defit __ZN12LoadingLayer10loadAssetsEv, 0x1dfb20

defit __ZN15CCTextInputNode24setLabelPlaceholderScaleEf, 0x5da70

defit __ZN7cocos2d9extension21CCControlColourPicker13setColorValueERKNS_10_ccColor3BE, 0x1aac10

defit __ZN7cocos2d10CCDrawNode12getBlendFuncERKNS_12_ccBlendFuncE, 0x379ea0
defit __ZN7cocos2d10CCDrawNode12setBlendFuncERKNS_12_ccBlendFuncE, 0x379eb0

defit __ZN7cocos2d7CCArray16fastRemoveObjectEPNS_8CCObjectE, 0x41a520
defit __ZN7cocos2d7CCArray23fastRemoveObjectAtIndexEj, 0x41a500
defit __ZN7cocos2d7CCArray26fastRemoveObjectAtIndexNewEj, 0x41a510
