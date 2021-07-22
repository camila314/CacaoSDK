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

; AnimatedGameObject::playAnimation(int)
defit __ZN18AnimatedGameObject13playAnimationEi, 0xc93d0

; AnimatedGameObject::updateChildSpriteColor(cocos2d::_ccColor3B)
defit __ZN18AnimatedGameObject22updateChildSpriteColorEN7cocos2d10_ccColor3BE, 0xc8450

; AppDelegate::bgScale()
defit __ZN11AppDelegate7bgScaleEv, 0x3aaab0

; AppDelegate::get()
defit __ZN11AppDelegate3getEv, 0x3aab10

; AudioEffectsLayer::audioStep(float)
defit __ZN17AudioEffectsLayer9audioStepEf, 0x271f40

; AudioEffectsLayer::create(std::string)
defit __ZN17AudioEffectsLayer6createESs, 0x271a00

; AudioEffectsLayer::resetAudioVars()
defit __ZN17AudioEffectsLayer14resetAudioVarsEv, 0x271ee0

; BoomScrollLayer::BoomScrollLayer()
defit __ZN15BoomScrollLayerC1Ev, 0x1e42f0

; ButtonSprite::updateBGImage(char const*)
defit __ZN12ButtonSprite13updateBGImageEPKc, 0x502d0

; CCAnimatedSprite::runAnimation(std::string)
defit __ZN16CCAnimatedSprite12runAnimationESs, 0x1a6430

; CCAnimatedSprite::tweenToAnimation(std::string, float)
defit __ZN16CCAnimatedSprite16tweenToAnimationESsf, 0x1a65b0

; CCCircleWave::create(float, float, float, bool)
defit __ZN12CCCircleWave6createEfffb, 0xbd270

; CCCircleWave::create(float, float, float, bool, bool)
defit __ZN12CCCircleWave6createEfffbb, 0xbd290

; CCCircleWave::followObject(cocos2d::CCNode*, bool)
defit __ZN12CCCircleWave12followObjectEPN7cocos2d6CCNodeEb, 0xbd670

; CCCircleWave::updatePosition(float)
defit __ZN12CCCircleWave14updatePositionEf, 0xbd630

; CCLightFlash::create()
defit __ZN12CCLightFlash6createEv, 0x295870

; CCLightFlash::playEffect(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float)
defit __ZN12CCLightFlash10playEffectEN7cocos2d7CCPointENS0_10_ccColor3BEffffffffffffffibbf, 0x295900

; CCMenuItemToggler::toggle(bool)
defit __ZN17CCMenuItemToggler6toggleEb, 0x38950

; CCMoveCNode::create()
defit __ZN11CCMoveCNode6createEv, 0x1842a0

; CCMoveCNode::~CCMoveCNode()
defit __ZN11CCMoveCNodeD2Ev, 0x18b2c0

; CCMoveCNode::~CCMoveCNode()
defit __ZN11CCMoveCNodeD1Ev, 0x18b310

; CCMoveCNode::~CCMoveCNode()
defit __ZN11CCMoveCNodeD0Ev, 0x18b360

; CCNodeContainer::create()
defit __ZN15CCNodeContainer6createEv, 0xb1090

; CCNodeContainer::init()
defit __ZN15CCNodeContainer4initEv, 0xba950

; CCNodeContainer::visit()
defit __ZN15CCNodeContainer5visitEv, 0xba960

; CCNodeContainer::~CCNodeContainer()
defit __ZN15CCNodeContainerD1Ev, 0xba9b0

; CCNodeContainer::~CCNodeContainer()
defit __ZN15CCNodeContainerD0Ev, 0xba9c0

; CCSpritePlus::initWithSpriteFrameName(char const*)
defit __ZN12CCSpritePlus23initWithSpriteFrameNameEPKc, 0x248670

; CCTextInputNode::create(float, float, char const*, char const*, int, char const*)
defit __ZN15CCTextInputNode6createEffPKcS1_iS1_, 0x5cd00

; CCTextInputNode::refreshLabel()
defit __ZN15CCTextInputNode12refreshLabelEv, 0x5d730

; CCTextInputNode::setLabelPlaceholderColor(cocos2d::_ccColor3B)
defit __ZN15CCTextInputNode24setLabelPlaceholderColorEN7cocos2d10_ccColor3BE, 0x5da90

; CCTextInputNode::setLabelPlaceholderScale(float)
defit __ZN15CCTextInputNode24setLabelPlaceholderScaleEf, 0x5da70

; CCTextInputNode::setString(std::string)
defit __ZN15CCTextInputNode9setStringESs, 0x5d3e0

; CheckpointObject::create()
defit __ZN16CheckpointObject6createEv, 0x7e7d0

; CheckpointObject::getObject()
defit __ZN16CheckpointObject9getObjectEv, 0x7ef50

; CollisionBlockPopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN19CollisionBlockPopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x130010

; CollisionTriggerAction::createFromString(std::string)
defit __ZN22CollisionTriggerAction16createFromStringESs, 0x176ee0

; ColorAction::getSaveString()
defit __ZN11ColorAction13getSaveStringEv, 0x17d080

; ColorAction::setupFromDict(cocos2d::CCDictionary*)
defit __ZN11ColorAction13setupFromDictEPN7cocos2d12CCDictionaryE, 0x17f310

; ColorAction::setupFromString(std::string)
defit __ZN11ColorAction15setupFromStringESs, 0x17f270

; ColorChannelSprite::updateValues(ColorAction*)
defit __ZN18ColorChannelSprite12updateValuesEP11ColorAction, 0x16e2e0

; ColorSelectPopup::ColorSelectPopup()
defit __ZN16ColorSelectPopupC1Ev, 0x41eb80

; ColorSelectPopup::colorValueChanged(cocos2d::_ccColor3B)
defit __ZN16ColorSelectPopup17colorValueChangedEN7cocos2d10_ccColor3BE, 0x423320

; ColorSelectPopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN16ColorSelectPopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x41eb70

; ColorSelectPopup::init(EffectGameObject*, cocos2d::CCArray*, ColorAction*)
defit __ZN16ColorSelectPopup4initEP16EffectGameObjectPN7cocos2d7CCArrayEP11ColorAction, 0x41ee70

; ColorSelectPopup::onDefault(cocos2d::CCObject*)
defit __ZN16ColorSelectPopup9onDefaultEPN7cocos2d8CCObjectE, 0x4220e0

; ColorSelectPopup::onMultiTrigger(cocos2d::CCObject*)
defit __ZN16ColorSelectPopup14onMultiTriggerEPN7cocos2d8CCObjectE, 0x422680

; ColorSelectPopup::onPlayerColor1(cocos2d::CCObject*)
defit __ZN16ColorSelectPopup14onPlayerColor1EPN7cocos2d8CCObjectE, 0x422500

; ColorSelectPopup::onPlayerColor2(cocos2d::CCObject*)
defit __ZN16ColorSelectPopup14onPlayerColor2EPN7cocos2d8CCObjectE, 0x4225c0

; ColorSelectPopup::onSpawnedByTrigger(cocos2d::CCObject*)
defit __ZN16ColorSelectPopup18onSpawnedByTriggerEPN7cocos2d8CCObjectE, 0x4227f0

; ColorSelectPopup::onToggleHSVMode(cocos2d::CCObject*)
defit __ZN16ColorSelectPopup15onToggleHSVModeEPN7cocos2d8CCObjectE, 0x4227b0

; ColorSelectPopup::onTouchTriggered(cocos2d::CCObject*)
defit __ZN16ColorSelectPopup16onTouchTriggeredEPN7cocos2d8CCObjectE, 0x4228b0

; ColorSelectPopup::show()
defit __ZN16ColorSelectPopup4showEv, 0x423570

; ColorSelectPopup::sliderChanged(cocos2d::CCObject*)
defit __ZN16ColorSelectPopup13sliderChangedEPN7cocos2d8CCObjectE, 0x421ca0

; ColorSelectPopup::updateCopyColor()
defit __ZN16ColorSelectPopup15updateCopyColorEv, 0x423b70

; ColorSelectPopup::updateCopyColorTextInputLabel()
defit __ZN16ColorSelectPopup29updateCopyColorTextInputLabelEv, 0x422ed0

; ColorSelectPopup::updateDurLabel()
defit __ZN16ColorSelectPopup14updateDurLabelEv, 0x421eb0

; ColorSelectPopup::updateHSVMode()
defit __ZN16ColorSelectPopup13updateHSVModeEv, 0x422e00

; ColorSelectPopup::updateOpacityLabel()
defit __ZN16ColorSelectPopup18updateOpacityLabelEv, 0x422000

; ColorSelectPopup::updateTouchTriggered()
defit __ZN16ColorSelectPopup20updateTouchTriggeredEv, 0x423020

; ColorSelectPopup::~ColorSelectPopup()
defit __ZN16ColorSelectPopupD0Ev, 0x41e960

;([long param_1@RDI:8])
; ColorSelectPopup::~ColorSelectPopup()
;defit __ZN16ColorSelectPopupD0Ev, 0x41eae0
; ColorSelectPopup::~ColorSelectPopup()
;defit __ZN16ColorSelectPopupD1Ev, 0x41eae0
; ColorSelectPopup::~ColorSelectPopup()
;defit __ZN16ColorSelectPopupD2Ev, 0x41eae0

; CountTriggerAction::createFromString(std::string)
defit __ZN18CountTriggerAction16createFromStringESs, 0x1754f0

; CustomizeObjectLayer::colorSelectClosed(cocos2d::CCNode*)
defit __ZN20CustomizeObjectLayer17colorSelectClosedEPN7cocos2d6CCNodeE, 0xe1050

; CustomizeObjectLayer::create(GameObject*, cocos2d::CCArray*)
defit __ZN20CustomizeObjectLayer6createEP10GameObjectPN7cocos2d7CCArrayE, 0xdd340

; CustomizeObjectLayer::init(GameObject*, cocos2d::CCArray*)
defit __ZN20CustomizeObjectLayer4initEP10GameObjectPN7cocos2d7CCArrayE, 0xdd560

; CustomizeObjectLayer::textChanged(CCTextInputNode*)
defit __ZN20CustomizeObjectLayer11textChangedEP15CCTextInputNode, 0xe1470

; CustomizeObjectLayer::textInputClosed(CCTextInputNode*)
defit __ZN20CustomizeObjectLayer15textInputClosedEP15CCTextInputNode, 0xe1430

;([undefined[16] * * param_1@RDI:8])
; DS_Dictionary::DS_Dictionary()
;defit __ZN13DS_DictionaryC1Ev, 0xbe9a0
; DS_Dictionary::DS_Dictionary()
;defit __ZN13DS_DictionaryC2Ev, 0xbe9a0

; DelayedSpawnNode::create()
defit __ZN16DelayedSpawnNode6createEv, 0x9b360

; DialogLayer::create(DialogObject*, int)
defit __ZN11DialogLayer6createEP12DialogObjecti, 0x2047c0

; DialogObject::create(std::string, std::string, int, float, bool, cocos2d::_ccColor3B)
defit __ZN12DialogObject6createESsSsifbN7cocos2d10_ccColor3BE, 0x204410

; DrawGridLayer::addPlayer2Point(cocos2d::CCPoint, bool)
defit __ZN13DrawGridLayer15addPlayer2PointEN7cocos2d7CCPointEb, 0xa25b0

; DrawGridLayer::addPlayerPoint(cocos2d::CCPoint)
defit __ZN13DrawGridLayer14addPlayerPointEN7cocos2d7CCPointE, 0xa39c0

; DrawGridLayer::create(cocos2d::CCNode*, LevelEditorLayer*)
defit __ZN13DrawGridLayer6createEPN7cocos2d6CCNodeEP16LevelEditorLayer, 0x920c0

; DrawGridLayer::updateTimeMarkers()
defit __ZN13DrawGridLayer17updateTimeMarkersEv, 0x92950

; EditorOptionsLayer::onButtonsPerRow(cocos2d::CCObject*)
defit __ZN18EditorOptionsLayer15onButtonsPerRowEPN7cocos2d8CCObjectE, 0x147b30

;([undefined * * param_1@RDI:8])
; EditorUI::EditorUI()
;defit __ZN8EditorUIC1Ev, 0x32220
; EditorUI::EditorUI()
;defit __ZN8EditorUIC2Ev, 0x32220

; EditorUI::constrainGameLayerPosition()
defit __ZN8EditorUI26constrainGameLayerPositionEv, 0x1c6d0

; EditorUI::create(LevelEditorLayer*)
defit __ZN8EditorUI6createEP16LevelEditorLayer, 0x8a80

; EditorUI::editButtonUsable()
defit __ZN8EditorUI16editButtonUsableEv, 0x28f30

; EditorUI::editObject(cocos2d::CCObject*)
defit __ZN8EditorUI10editObjectEPN7cocos2d8CCObjectE, 0x195a0

; EditorUI::getGroupCenter(cocos2d::CCArray*, bool)
defit __ZN8EditorUI14getGroupCenterEPN7cocos2d7CCArrayEb, 0x23470

; EditorUI::getSelectedObjects()
defit __ZN8EditorUI18getSelectedObjectsEv, 0x23f30

; EditorUI::moveObject(GameObject*, cocos2d::CCPoint)
defit __ZN8EditorUI10moveObjectEP10GameObjectN7cocos2d7CCPointE, 0x24b10

; EditorUI::playtestStopped()
defit __ZN8EditorUI15playtestStoppedEv, 0x24790

; EditorUI::scaleChanged(float)
defit __ZN8EditorUI12scaleChangedEf, 0x25490

; EditorUI::scaleObjects(cocos2d::CCArray*, float, cocos2d::CCPoint)
defit __ZN8EditorUI12scaleObjectsEPN7cocos2d7CCArrayEfNS0_7CCPointE, 0x252e0

; EditorUI::updateSlider()
defit __ZN8EditorUI12updateSliderEv, 0x18a90

;([undefined * * param_1@RDI:8])
; EffectGameObject::EffectGameObject()
;defit __ZN16EffectGameObjectC1Ev, 0xdc2d0
; EffectGameObject::EffectGameObject()
;defit __ZN16EffectGameObjectC2Ev, 0xdc2d0

; EffectGameObject::create(char const*)
defit __ZN16EffectGameObject6createEPKc, 0xc9790

; EffectGameObject::getTargetColorIndex()
defit __ZN16EffectGameObject19getTargetColorIndexEv, 0xca1f0

; EffectGameObject::triggerObject(GJBaseGameLayer*)
defit __ZN16EffectGameObject13triggerObjectEP15GJBaseGameLayer, 0xc9870

;([undefined * * param_1@RDI:8])
; EndLevelLayer::EndLevelLayer()
;defit __ZN13EndLevelLayerC1Ev, 0x27be40
; EndLevelLayer::EndLevelLayer()
;defit __ZN13EndLevelLayerC2Ev, 0x27be40

; EndLevelLayer::create()
defit __ZN13EndLevelLayer6createEv, 0x2787d0

; EndPortalObject::create()
defit __ZN15EndPortalObject6createEv, 0x1da8f0

; EndPortalObject::updateColors(cocos2d::_ccColor3B)
defit __ZN15EndPortalObject12updateColorsEN7cocos2d10_ccColor3BE, 0x1dacb0

; FLAlertLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN12FLAlertLayer12ccTouchBeganEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x25ee40

; FLAlertLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN12FLAlertLayer12ccTouchBeganEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x25eed0

; FLAlertLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN12FLAlertLayer16ccTouchCancelledEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x25f020

; FLAlertLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN12FLAlertLayer16ccTouchCancelledEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x25f060

; FLAlertLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN12FLAlertLayer12ccTouchEndedEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x25ef60

; FLAlertLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN12FLAlertLayer12ccTouchEndedEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x25efc0

; FLAlertLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN12FLAlertLayer12ccTouchMovedEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x25f0a0

; FLAlertLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN12FLAlertLayer12ccTouchMovedEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x25f0e0

; FLAlertLayer::keyDown(cocos2d::enumKeyCodes)
defit __ZN12FLAlertLayer7keyDownEN7cocos2d12enumKeyCodesE, 0x25ece0

; FLAlertLayer::keyDown(cocos2d::enumKeyCodes)
defit __ZN12FLAlertLayer7keyDownEN7cocos2d12enumKeyCodesE, 0x25ed70

; FLAlertLayer::onEnter()
defit __ZN12FLAlertLayer7onEnterEv, 0x25f350

; FLAlertLayer::registerWithTouchDispatcher()
defit __ZN12FLAlertLayer27registerWithTouchDispatcherEv, 0x25f2e0

; FLAlertLayer::show()
defit __ZN12FLAlertLayer4showEv, 0x25f120

;([undefined * * param_1@RDI:8])
; FLAlertLayer::~FLAlertLayer()
;defit __ZN12FLAlertLayerD0Ev, 0x25da90
; FLAlertLayer::~FLAlertLayer()
;defit __ZN12FLAlertLayerD1Ev, 0x25da90
; FLAlertLayer::~FLAlertLayer()
;defit __ZN12FLAlertLayerD2Ev, 0x25da90

; FMODAudioEngine::fadeBackgroundMusic(bool, float)
defit __ZN15FMODAudioEngine19fadeBackgroundMusicEbf, 0x20fd50

; FMODAudioEngine::getBackgroundMusicVolume()
defit __ZN15FMODAudioEngine24getBackgroundMusicVolumeEv, 0x2104a0

; FMODAudioEngine::isBackgroundMusicPlaying()
defit __ZN15FMODAudioEngine24isBackgroundMusicPlayingEv, 0x20feb0

; FMODAudioEngine::pauseAllEffects()
defit __ZN15FMODAudioEngine15pauseAllEffectsEv, 0x210420

; FMODAudioEngine::pauseBackgroundMusic()
defit __ZN15FMODAudioEngine20pauseBackgroundMusicEv, 0x20fdd0

; FMODAudioEngine::resumeAllEffects()
defit __ZN15FMODAudioEngine16resumeAllEffectsEv, 0x210440

; FMODAudioEngine::resumeBackgroundMusic()
defit __ZN15FMODAudioEngine21resumeBackgroundMusicEv, 0x20fdf0

; FMODAudioEngine::setBackgroundMusicTime(float)
defit __ZN15FMODAudioEngine22setBackgroundMusicTimeEf, 0x20fe10

; FMODAudioEngine::sharedEngine()
defit __ZN15FMODAudioEngine12sharedEngineEv, 0x20ef80

; FollowRewardPage::create()
defit __ZN16FollowRewardPage6createEv, 0x22f140

; GJBaseGameLayer::addObjectCounter(LabelGameObject*, int)
defit __ZN15GJBaseGameLayer16addObjectCounterEP15LabelGameObjecti, 0xb9eb0

; GJBaseGameLayer::addToGroup(GameObject*, int, bool)
defit __ZN15GJBaseGameLayer10addToGroupEP10GameObjectib, 0xb77f0

; GJBaseGameLayer::addToGroups(GameObject*, bool)
defit __ZN15GJBaseGameLayer11addToGroupsEP10GameObjectb, 0xb7780

; GJBaseGameLayer::addToSection(GameObject*)
defit __ZN15GJBaseGameLayer12addToSectionEP10GameObject, 0xb7b70

; GJBaseGameLayer::atlasValue(int)
defit __ZN15GJBaseGameLayer10atlasValueEi, 0xb21e0

; GJBaseGameLayer::bumpPlayer(PlayerObject*, GameObject*)
defit __ZN15GJBaseGameLayer10bumpPlayerEP12PlayerObjectP10GameObject, 0xb6860

; GJBaseGameLayer::calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)
defit __ZN15GJBaseGameLayer20calculateColorValuesEP16EffectGameObjectS1_ifP17ColorActionSpriteP15GJEffectManager, 0xba9a0

; GJBaseGameLayer::calculateOpacityValues(EffectGameObject*, EffectGameObject*, float, GJEffectManager*)
defit __ZN15GJBaseGameLayer22calculateOpacityValuesEP16EffectGameObjectS1_fP15GJEffectManager, 0xb5be0

; GJBaseGameLayer::checkSpawnObjects()
defit __ZN15GJBaseGameLayer17checkSpawnObjectsEv, 0xb6f90

; GJBaseGameLayer::collectItem(int, int)
defit __ZN15GJBaseGameLayer11collectItemEii, 0xb9e20

; GJBaseGameLayer::collectedObject(EffectGameObject*)
defit __ZN15GJBaseGameLayer15collectedObjectEP16EffectGameObject, 0xb9b60

; GJBaseGameLayer::createMoveCommand(cocos2d::CCPoint, int, float, int, float, bool, bool, int)
defit __ZN15GJBaseGameLayer17createMoveCommandEN7cocos2d7CCPointEififbbi, 0xb73a0

; GJBaseGameLayer::createTextLayers()
defit __ZN15GJBaseGameLayer16createTextLayersEv, 0xb5260

; GJBaseGameLayer::damagingObjectsInRect(cocos2d::CCRect)
defit __ZN15GJBaseGameLayer21damagingObjectsInRectEN7cocos2d6CCRectE, 0xb6140

; GJBaseGameLayer::enableHighCapacityMode()
defit __ZN15GJBaseGameLayer22enableHighCapacityModeEv, 0xb11e0

; GJBaseGameLayer::flipGravity(PlayerObject*, bool, bool)
defit __ZN15GJBaseGameLayer11flipGravityEP12PlayerObjectbb, 0xba990

; GJBaseGameLayer::getCapacityString()
defit __ZN15GJBaseGameLayer17getCapacityStringEv, 0xb2210

; GJBaseGameLayer::getGroundHeightForMode(int)
defit __ZN15GJBaseGameLayer22getGroundHeightForModeEi, 0xb6630

; GJBaseGameLayer::getGroup(int)
defit __ZN15GJBaseGameLayer8getGroupEi, 0xb6f20

; GJBaseGameLayer::getMoveDeltaForObjects(int, int)
defit __ZN15GJBaseGameLayer22getMoveDeltaForObjectsEii, 0xb6db0

; GJBaseGameLayer::getOptimizedGroup(int)
defit __ZN15GJBaseGameLayer17getOptimizedGroupEi, 0xb7940

; GJBaseGameLayer::getStaticGroup(int)
defit __ZN15GJBaseGameLayer14getStaticGroupEi, 0xb79a0

; GJBaseGameLayer::init()
defit __ZN15GJBaseGameLayer4initEv, 0xafc90

; GJBaseGameLayer::isGroupDisabledForObject(GameObject*)
defit __ZN15GJBaseGameLayer24isGroupDisabledForObjectEP10GameObject, 0xb5cc0

; GJBaseGameLayer::isGroupDisabledForObjectFull(GameObject*, cocos2d::CCArray*)
defit __ZN15GJBaseGameLayer28isGroupDisabledForObjectFullEP10GameObjectPN7cocos2d7CCArrayE, 0xb5de0

; GJBaseGameLayer::loadUpToPosition(float)
defit __ZN15GJBaseGameLayer16loadUpToPositionEf, 0xba680

; GJBaseGameLayer::objectIntersectsCircle(GameObject*, GameObject*)
defit __ZN15GJBaseGameLayer22objectIntersectsCircleEP10GameObjectS1_, 0xb66e0

; GJBaseGameLayer::objectTriggered(EffectGameObject*)
defit __ZN15GJBaseGameLayer15objectTriggeredEP16EffectGameObject, 0xb71b0

; GJBaseGameLayer::objectsCollided(int, int)
defit __ZN15GJBaseGameLayer15objectsCollidedEii, 0xb6d90

; GJBaseGameLayer::optimizeMoveGroups()
defit __ZN15GJBaseGameLayer18optimizeMoveGroupsEv, 0xb96c0

; GJBaseGameLayer::parentForZLayer(int, bool, int)
defit __ZN15GJBaseGameLayer15parentForZLayerEibi, 0xb55d0

; GJBaseGameLayer::playerTouchedRing(PlayerObject*, GameObject*)
defit __ZN15GJBaseGameLayer17playerTouchedRingEP12PlayerObjectP10GameObject, 0xb69e0

; GJBaseGameLayer::processColorObject(EffectGameObject*, int, cocos2d::CCDictionary*, float, GJEffectManager*)
defit __ZN15GJBaseGameLayer18processColorObjectEP16EffectGameObjectiPN7cocos2d12CCDictionaryEfP15GJEffectManager, 0xb5a90

; GJBaseGameLayer::processFollowActions()
defit __ZN15GJBaseGameLayer20processFollowActionsEv, 0xb8fd0

; GJBaseGameLayer::processMoveActions()
defit __ZN15GJBaseGameLayer18processMoveActionsEv, 0xb86c0

; GJBaseGameLayer::processMoveActionsStep(float)
defit __ZN15GJBaseGameLayer22processMoveActionsStepEf, 0xb7ea0

; GJBaseGameLayer::processOpacityObject(EffectGameObject*, cocos2d::CCDictionary*, float, GJEffectManager*)
defit __ZN15GJBaseGameLayer20processOpacityObjectEP16EffectGameObjectPN7cocos2d12CCDictionaryEfP15GJEffectManager, 0xb5ae0

; GJBaseGameLayer::processPlayerFollowActions(float)
defit __ZN15GJBaseGameLayer26processPlayerFollowActionsEf, 0xb8b50

; GJBaseGameLayer::processRotationActions()
defit __ZN15GJBaseGameLayer22processRotationActionsEv, 0xb7fd0

; GJBaseGameLayer::pushButton(int, bool)
defit __ZN15GJBaseGameLayer10pushButtonEib, 0xb9920

; GJBaseGameLayer::rectIntersectsCircle(cocos2d::CCRect, cocos2d::CCPoint, float)
defit __ZN15GJBaseGameLayer20rectIntersectsCircleEN7cocos2d6CCRectENS0_7CCPointEf, 0xb6470

; GJBaseGameLayer::refreshCounterLabels()
defit __ZN15GJBaseGameLayer20refreshCounterLabelsEv, 0xb9fc0

; GJBaseGameLayer::releaseButton(int, bool)
defit __ZN15GJBaseGameLayer13releaseButtonEib, 0xb9a00

; GJBaseGameLayer::removeFromGroup(GameObject*, int)
defit __ZN15GJBaseGameLayer15removeFromGroupEP10GameObjecti, 0xb7a60

; GJBaseGameLayer::removeFromGroups(GameObject*)
defit __ZN15GJBaseGameLayer16removeFromGroupsEP10GameObject, 0xb7a00

; GJBaseGameLayer::removeObjectFromSection(GameObject*)
defit __ZN15GJBaseGameLayer23removeObjectFromSectionEP10GameObject, 0xb7e00

; GJBaseGameLayer::reorderObjectSection(GameObject*)
defit __ZN15GJBaseGameLayer20reorderObjectSectionEP10GameObject, 0xb7cb0

; GJBaseGameLayer::resetGroupCounters(bool)
defit __ZN15GJBaseGameLayer18resetGroupCountersEb, 0xba300

; GJBaseGameLayer::resetMoveOptimizedValue()
defit __ZN15GJBaseGameLayer23resetMoveOptimizedValueEv, 0xb9670

; GJBaseGameLayer::sectionForPos(float)
defit __ZN15GJBaseGameLayer13sectionForPosEf, 0xb6120

; GJBaseGameLayer::setupLayers()
defit __ZN15GJBaseGameLayer11setupLayersEv, 0xaffe0

; GJBaseGameLayer::shouldExitHackedLevel()
defit __ZN15GJBaseGameLayer21shouldExitHackedLevelEv, 0xb1100

; GJBaseGameLayer::spawnGroup(int)
defit __ZN15GJBaseGameLayer10spawnGroupEi, 0xb7050

; GJBaseGameLayer::spawnGroup(int)
defit __ZN15GJBaseGameLayer10spawnGroupEi, 0xb7190

; GJBaseGameLayer::spawnGroupTriggered(int, float, int)
defit __ZN15GJBaseGameLayer19spawnGroupTriggeredEifi, 0xb7020

; GJBaseGameLayer::staticObjectsInRect(cocos2d::CCRect)
defit __ZN15GJBaseGameLayer19staticObjectsInRectEN7cocos2d6CCRectE, 0xb5f90

; GJBaseGameLayer::testInstantCountTrigger(int, int, int, bool, int)
defit __ZN15GJBaseGameLayer23testInstantCountTriggerEiiibi, 0xb9ae0

; GJBaseGameLayer::toggleGroup(int, bool)
defit __ZN15GJBaseGameLayer11toggleGroupEib, 0xb75f0

; GJBaseGameLayer::toggleGroupTriggered(int, bool)
defit __ZN15GJBaseGameLayer20toggleGroupTriggeredEib, 0xb75a0

; GJBaseGameLayer::toggleGroupTriggered(int, bool)
defit __ZN15GJBaseGameLayer20toggleGroupTriggeredEib, 0xb7720

; GJBaseGameLayer::togglePlayerVisibility(bool)
defit __ZN15GJBaseGameLayer22togglePlayerVisibilityEb, 0xba910

; GJBaseGameLayer::triggerMoveCommand(EffectGameObject*)
defit __ZN15GJBaseGameLayer18triggerMoveCommandEP16EffectGameObject, 0xb7290

; GJBaseGameLayer::updateCollisionBlocks()
defit __ZN15GJBaseGameLayer21updateCollisionBlocksEv, 0xb6a30

; GJBaseGameLayer::updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)
defit __ZN15GJBaseGameLayer11updateColorEN7cocos2d10_ccColor3BEfibfNS0_11_ccHSVValueEibiP16EffectGameObject, 0xb7420

; GJBaseGameLayer::updateCounters(int, int)
defit __ZN15GJBaseGameLayer14updateCountersEii, 0xb9bc0

; GJBaseGameLayer::updateDisabledObjectsLastPos(cocos2d::CCArray*)
defit __ZN15GJBaseGameLayer28updateDisabledObjectsLastPosEPN7cocos2d7CCArrayE, 0xb95b0

; GJBaseGameLayer::updateLayerCapacity(std::string)
defit __ZN15GJBaseGameLayer19updateLayerCapacityESs, 0xb1680

; GJBaseGameLayer::updateLegacyLayerCapacity(int, int, int, int)
defit __ZN15GJBaseGameLayer25updateLegacyLayerCapacityEiiii, 0xb1590

; GJBaseGameLayer::updateOBB2(cocos2d::CCRect)
defit __ZN15GJBaseGameLayer10updateOBB2EN7cocos2d6CCRectE, 0xb63f0

; GJBaseGameLayer::updateQueuedLabels()
defit __ZN15GJBaseGameLayer18updateQueuedLabelsEv, 0xb9f30

;([undefined * * param_1@RDI:8])
; GJBaseGameLayer::~GJBaseGameLayer()
;defit __ZN15GJBaseGameLayerD0Ev, 0xaf990
; GJBaseGameLayer::~GJBaseGameLayer()
;defit __ZN15GJBaseGameLayerD1Ev, 0xaf990
; GJBaseGameLayer::~GJBaseGameLayer()
;defit __ZN15GJBaseGameLayerD2Ev, 0xaf990

;([undefined * * param_1@RDI:8])
; GJBaseGameLayer::~GJBaseGameLayer()
;defit __ZN15GJBaseGameLayerD0Ev, 0xafbf0
; GJBaseGameLayer::~GJBaseGameLayer()
;defit __ZN15GJBaseGameLayerD1Ev, 0xafbf0
; GJBaseGameLayer::~GJBaseGameLayer()
;defit __ZN15GJBaseGameLayerD2Ev, 0xafbf0

;([long param_1@RDI:8])
; GJBaseGameLayer::~GJBaseGameLayer()
;defit __ZN15GJBaseGameLayerD0Ev, 0xafc00
; GJBaseGameLayer::~GJBaseGameLayer()
;defit __ZN15GJBaseGameLayerD1Ev, 0xafc00
; GJBaseGameLayer::~GJBaseGameLayer()
;defit __ZN15GJBaseGameLayerD2Ev, 0xafc00

;([undefined * * param_1@RDI:8])
; GJBaseGameLayer::~GJBaseGameLayer()
;defit __ZN15GJBaseGameLayerD0Ev, 0xafc20
; GJBaseGameLayer::~GJBaseGameLayer()
;defit __ZN15GJBaseGameLayerD1Ev, 0xafc20
; GJBaseGameLayer::~GJBaseGameLayer()
;defit __ZN15GJBaseGameLayerD2Ev, 0xafc20

;([long param_1@RDI:8])
; GJBaseGameLayer::~GJBaseGameLayer()
;defit __ZN15GJBaseGameLayerD0Ev, 0xafc50
; GJBaseGameLayer::~GJBaseGameLayer()
;defit __ZN15GJBaseGameLayerD1Ev, 0xafc50
; GJBaseGameLayer::~GJBaseGameLayer()
;defit __ZN15GJBaseGameLayerD2Ev, 0xafc50

; GJColorSetupLayer::updateSpriteColors()
defit __ZN17GJColorSetupLayer18updateSpriteColorsEv, 0xefe50

; GJDropDownLayer::init(char const*, float)
defit __ZN15GJDropDownLayer4initEPKcf, 0x352100

; GJEffectManager::activeColorForIndex(int)
defit __ZN15GJEffectManager19activeColorForIndexEi, 0x180cb0

; GJEffectManager::activeOpacityForIndex(int)
defit __ZN15GJEffectManager21activeOpacityForIndexEi, 0x180e10

; GJEffectManager::addAllInheritedColorActions(cocos2d::CCArray*)
defit __ZN15GJEffectManager27addAllInheritedColorActionsEPN7cocos2d7CCArrayE, 0x1817a0

; GJEffectManager::addGroupPulseEffect(PulseEffectAction*)
defit __ZN15GJEffectManager19addGroupPulseEffectEP17PulseEffectAction, 0x184c10

; GJEffectManager::calculateBaseActiveColors()
defit __ZN15GJEffectManager25calculateBaseActiveColorsEv, 0x180f70

; GJEffectManager::calculateInheritedColor(int, ColorAction*)
defit __ZN15GJEffectManager23calculateInheritedColorEiP11ColorAction, 0x1818f0

; GJEffectManager::calculateLightBGColor(cocos2d::_ccColor3B)
defit __ZN15GJEffectManager21calculateLightBGColorEN7cocos2d10_ccColor3BE, 0x185b90

; GJEffectManager::colorActionChanged(ColorAction*)
defit __ZN15GJEffectManager18colorActionChangedEP11ColorAction, 0x181dc0

; GJEffectManager::colorExists(int)
defit __ZN15GJEffectManager11colorExistsEi, 0x181da0

; GJEffectManager::colorForEffect(cocos2d::_ccColor3B, cocos2d::_ccHSVValue)
defit __ZN15GJEffectManager14colorForEffectEN7cocos2d10_ccColor3BENS0_11_ccHSVValueE, 0x182650

; GJEffectManager::colorForGroupID(int, cocos2d::_ccColor3B const&, bool)
defit __ZN15GJEffectManager15colorForGroupIDEiRKN7cocos2d10_ccColor3BEb, 0x184f90

; GJEffectManager::colorForIndex(int)
defit __ZN15GJEffectManager13colorForIndexEi, 0x180ad0

; GJEffectManager::colorForPulseEffect(cocos2d::_ccColor3B const&, PulseEffectAction*)
defit __ZN15GJEffectManager19colorForPulseEffectERKN7cocos2d10_ccColor3BEP17PulseEffectAction, 0x181bf0

; GJEffectManager::countChangedForItem(int)
defit __ZN15GJEffectManager19countChangedForItemEi, 0x185a40

; GJEffectManager::countForItem(int)
defit __ZN15GJEffectManager12countForItemEi, 0x185a10

; GJEffectManager::create()
defit __ZN15GJEffectManager6createEv, 0x1800f0

; GJEffectManager::createFollowCommand(float, float, float, int, int, bool, int)
defit __ZN15GJEffectManager19createFollowCommandEfffiibi, 0x182ed0

; GJEffectManager::createMoveCommand(cocos2d::CCPoint, int, float, int, float, bool, bool, int)
defit __ZN15GJEffectManager17createMoveCommandEN7cocos2d7CCPointEififbbi, 0x182cc0

; GJEffectManager::createPlayerFollowCommand(float, float, int, float, float, int, int)
defit __ZN15GJEffectManager25createPlayerFollowCommandEffiffii, 0x182fe0

; GJEffectManager::createRotateCommand(int, float, int, int, int, float, bool, int)
defit __ZN15GJEffectManager19createRotateCommandEifiiifbi, 0x182df0

; GJEffectManager::getAllColorActions()
defit __ZN15GJEffectManager18getAllColorActionsEv, 0x180980

; GJEffectManager::getAllColorSprites()
defit __ZN15GJEffectManager18getAllColorSpritesEv, 0x1809e0

; GJEffectManager::getColorAction(int)
defit __ZN15GJEffectManager14getColorActionEi, 0x180b00

; GJEffectManager::getColorSprite(int)
defit __ZN15GJEffectManager14getColorSpriteEi, 0x180d00

; GJEffectManager::getCurrentStateString()
defit __ZN15GJEffectManager21getCurrentStateStringEv, 0x1867e0

; GJEffectManager::getLoadedMoveOffset()
defit __ZN15GJEffectManager19getLoadedMoveOffsetEv, 0x184390

; GJEffectManager::getMixedColor(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float)
defit __ZN15GJEffectManager13getMixedColorEN7cocos2d10_ccColor3BES1_f, 0x185d30

; GJEffectManager::getOpacityActionForGroup(int)
defit __ZN15GJEffectManager24getOpacityActionForGroupEi, 0x1845b0

; GJEffectManager::getSaveString()
defit __ZN15GJEffectManager13getSaveStringEv, 0x185e90

; GJEffectManager::handleObjectCollision(bool, int, int)
defit __ZN15GJEffectManager21handleObjectCollisionEbii, 0x1828f0

; GJEffectManager::hasActiveDualTouch()
defit __ZN15GJEffectManager18hasActiveDualTouchEv, 0x185540

; GJEffectManager::hasBeenTriggered(int)
defit __ZN15GJEffectManager16hasBeenTriggeredEi, 0x1853b0

; GJEffectManager::hasPulseEffectForGroupID(int)
defit __ZN15GJEffectManager24hasPulseEffectForGroupIDEi, 0x184f60

; GJEffectManager::init()
defit __ZN15GJEffectManager4initEv, 0x180230

; GJEffectManager::init()
defit __ZN15GJEffectManager4initEv, 0x18b3d0

; GJEffectManager::isGroupEnabled(int)
defit __ZN15GJEffectManager14isGroupEnabledEi, 0x1853d0

; GJEffectManager::keyForGroupIDColor(int, cocos2d::_ccColor3B const&, bool)
defit __ZN15GJEffectManager18keyForGroupIDColorEiRKN7cocos2d10_ccColor3BEb, 0x184c90

; GJEffectManager::loadState(std::string)
defit __ZN15GJEffectManager9loadStateESs, 0x188db0

; GJEffectManager::objectsCollided(int, int)
defit __ZN15GJEffectManager15objectsCollidedEii, 0x182a00

; GJEffectManager::opacityForIndex(int)
defit __ZN15GJEffectManager15opacityForIndexEi, 0x180c80

; GJEffectManager::opacityModForGroup(int)
defit __ZN15GJEffectManager18opacityModForGroupEi, 0x184740

; GJEffectManager::playerButton(bool, bool)
defit __ZN15GJEffectManager12playerButtonEbb, 0x1855a0

; GJEffectManager::playerDied()
defit __ZN15GJEffectManager10playerDiedEv, 0x185860

; GJEffectManager::postCollisionCheck()
defit __ZN15GJEffectManager18postCollisionCheckEv, 0x182720

; GJEffectManager::preCollisionCheck()
defit __ZN15GJEffectManager17preCollisionCheckEv, 0x182680

; GJEffectManager::prepareMoveActions(float, bool)
defit __ZN15GJEffectManager18prepareMoveActionsEfb, 0x183660

; GJEffectManager::processColors()
defit __ZN15GJEffectManager13processColorsEv, 0x180e70

; GJEffectManager::processCopyColorPulseActions()
defit __ZN15GJEffectManager28processCopyColorPulseActionsEv, 0x181530

; GJEffectManager::processInheritedColors()
defit __ZN15GJEffectManager22processInheritedColorsEv, 0x181190

; GJEffectManager::processPulseActions()
defit __ZN15GJEffectManager19processPulseActionsEv, 0x181040

; GJEffectManager::registerCollisionTrigger(int, int, int, bool, bool, int)
defit __ZN15GJEffectManager24registerCollisionTriggerEiiibbi, 0x182b70

; GJEffectManager::removeAllPulseActions()
defit __ZN15GJEffectManager21removeAllPulseActionsEv, 0x1825e0

; GJEffectManager::removeColorAction(int)
defit __ZN15GJEffectManager17removeColorActionEi, 0x181d60

; GJEffectManager::reset()
defit __ZN15GJEffectManager5resetEv, 0x180690

; GJEffectManager::resetColorCache()
defit __ZN15GJEffectManager15resetColorCacheEv, 0x185280

; GJEffectManager::resetEffects()
defit __ZN15GJEffectManager12resetEffectsEv, 0x1807d0

; GJEffectManager::resetMoveActions()
defit __ZN15GJEffectManager16resetMoveActionsEv, 0x180940

; GJEffectManager::resetToggledGroups()
defit __ZN15GJEffectManager18resetToggledGroupsEv, 0x1853f0

; GJEffectManager::resetTriggeredIDs()
defit __ZN15GJEffectManager17resetTriggeredIDsEv, 0x182630

; GJEffectManager::runCountTrigger(int, int, bool, int, bool, int)
defit __ZN15GJEffectManager15runCountTriggerEiibibi, 0x1858d0

; GJEffectManager::runDeathTrigger(int, bool, int)
defit __ZN15GJEffectManager15runDeathTriggerEibi, 0x1857a0

; GJEffectManager::runOpacityActionOnGroup(int, float, float, int)
defit __ZN15GJEffectManager23runOpacityActionOnGroupEiffi, 0x1845d0

; GJEffectManager::runPulseEffect(int, bool, float, float, float, PulseEffectType, cocos2d::_ccColor3B, cocos2d::_ccHSVValue, int, bool, bool, bool, int)
defit __ZN15GJEffectManager14runPulseEffectEibfff15PulseEffectTypeN7cocos2d10_ccColor3BENS1_11_ccHSVValueEibbbi, 0x184890

; GJEffectManager::runTouchTriggerCommand(int, bool, TouchTriggerType, bool, int)
defit __ZN15GJEffectManager22runTouchTriggerCommandEib16TouchTriggerTypebi, 0x185460

; GJEffectManager::setColorAction(ColorAction*, int)
defit __ZN15GJEffectManager14setColorActionEP11ColorActioni, 0x181d00

; GJEffectManager::setFollowing(int, int, bool)
defit __ZN15GJEffectManager12setFollowingEiib, 0x185e00

; GJEffectManager::setupFromString(std::string)
defit __ZN15GJEffectManager15setupFromStringESs, 0x186290

; GJEffectManager::shouldBlend(int)
defit __ZN15GJEffectManager11shouldBlendEi, 0x180e40

; GJEffectManager::spawnGroup(int, float, int)
defit __ZN15GJEffectManager10spawnGroupEifi, 0x1852a0

; GJEffectManager::stopActionsForTrigger(EffectGameObject*)
defit __ZN15GJEffectManager21stopActionsForTriggerEP16EffectGameObject, 0x183150

; GJEffectManager::stopMoveActionsForGroup(int)
defit __ZN15GJEffectManager23stopMoveActionsForGroupEi, 0x1830e0

; GJEffectManager::storeTriggeredID(int)
defit __ZN15GJEffectManager16storeTriggeredIDEi, 0x185380

; GJEffectManager::toggleGroup(int, bool)
defit __ZN15GJEffectManager11toggleGroupEib, 0x182c80

; GJEffectManager::traverseInheritanceChain(InheritanceNode*)
defit __ZN15GJEffectManager24traverseInheritanceChainEP15InheritanceNode, 0x181850

; GJEffectManager::updateActiveOpacityEffects()
defit __ZN15GJEffectManager26updateActiveOpacityEffectsEv, 0x1847e0

; GJEffectManager::updateColorAction(ColorAction*)
defit __ZN15GJEffectManager17updateColorActionEP11ColorAction, 0x184560

; GJEffectManager::updateColorEffects(float)
defit __ZN15GJEffectManager18updateColorEffectsEf, 0x181f40

; GJEffectManager::updateColors(cocos2d::_ccColor3B, cocos2d::_ccColor3B)
defit __ZN15GJEffectManager12updateColorsEN7cocos2d10_ccColor3BES1_, 0x180a40

; GJEffectManager::updateEffects(float)
defit __ZN15GJEffectManager13updateEffectsEf, 0x181df0

; GJEffectManager::updateOpacityAction(OpacityEffectAction*)
defit __ZN15GJEffectManager19updateOpacityActionEP19OpacityEffectAction, 0x184780

; GJEffectManager::updateOpacityEffects(float)
defit __ZN15GJEffectManager20updateOpacityEffectsEf, 0x1823e0

; GJEffectManager::updatePulseEffects(float)
defit __ZN15GJEffectManager18updatePulseEffectsEf, 0x182130

; GJEffectManager::updateSpawnTriggers(float)
defit __ZN15GJEffectManager19updateSpawnTriggersEf, 0x182510

; GJEffectManager::wasFollowing(int, int)
defit __ZN15GJEffectManager12wasFollowingEii, 0x185e60

; GJEffectManager::wouldCreateLoop(InheritanceNode*, int)
defit __ZN15GJEffectManager15wouldCreateLoopEP15InheritanceNodei, 0x181820

;([GJEffectManager * this@RDI:8 (auto)])
; GJEffectManager::~GJEffectManager()
;defit __ZN15GJEffectManagerD0Ev, 0x17fe00
; GJEffectManager::~GJEffectManager()
;defit __ZN15GJEffectManagerD1Ev, 0x17fe00
; GJEffectManager::~GJEffectManager()
;defit __ZN15GJEffectManagerD2Ev, 0x17fe00

;([GJEffectManager * this@RDI:8 (auto)])
; GJEffectManager::~GJEffectManager()
;defit __ZN15GJEffectManagerD0Ev, 0x1800b0
; GJEffectManager::~GJEffectManager()
;defit __ZN15GJEffectManagerD1Ev, 0x1800b0
; GJEffectManager::~GJEffectManager()
;defit __ZN15GJEffectManagerD2Ev, 0x1800b0

;([GJEffectManager * this@RDI:8 (auto)])
; GJEffectManager::~GJEffectManager()
;defit __ZN15GJEffectManagerD0Ev, 0x1800c0
; GJEffectManager::~GJEffectManager()
;defit __ZN15GJEffectManagerD1Ev, 0x1800c0
; GJEffectManager::~GJEffectManager()
;defit __ZN15GJEffectManagerD2Ev, 0x1800c0

; GJFollowCommandLayer::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN20GJFollowCommandLayer6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x16a550

; GJGameLevel::getAudioFileName()
defit __ZN11GJGameLevel16getAudioFileNameEv, 0x2dbe70

; GJGameLevel::getCoinKey(int)
defit __ZN11GJGameLevel10getCoinKeyEi, 0x2ce360

; GJGameLevel::getNormalPercent()
defit __ZN11GJGameLevel16getNormalPercentEv, 0x2b8b20

; GJGameLevel::savePercentage(int, bool, int, int, bool)
defit __ZN11GJGameLevel14savePercentageEibiib, 0x2db700

; GJGroundLayer::create(int, int)
defit __ZN13GJGroundLayer6createEii, 0x355c00

; GJGroundLayer::deactivateGround()
defit __ZN13GJGroundLayer16deactivateGroundEv, 0x356a40

; GJGroundLayer::getGroundY()
defit __ZN13GJGroundLayer10getGroundYEv, 0x356ac0

; GJGroundLayer::updateGround01Color(cocos2d::_ccColor3B)
defit __ZN13GJGroundLayer19updateGround01ColorEN7cocos2d10_ccColor3BE, 0x356640

; GJGroundLayer::updateGround02Color(cocos2d::_ccColor3B)
defit __ZN13GJGroundLayer19updateGround02ColorEN7cocos2d10_ccColor3BE, 0x356710

; GJGroundLayer::updateGroundPos(cocos2d::CCPoint)
defit __ZN13GJGroundLayer15updateGroundPosEN7cocos2d7CCPointE, 0x3566c0

; GJMoveCommandLayer::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN18GJMoveCommandLayer6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x36f8a0

; GJMoveCommandLayer::init(EffectGameObject*, cocos2d::CCArray*)
defit __ZN18GJMoveCommandLayer4initEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x36fac0

; GJMoveCommandLayer::keyBackClicked()
defit __ZN18GJMoveCommandLayer14keyBackClickedEv, 0x374970

; GJMoveCommandLayer::keyBackClicked()
defit __ZN18GJMoveCommandLayer14keyBackClickedEv, 0x374a60

; GJMoveCommandLayer::onUpdateGroupID(cocos2d::CCObject*)
defit __ZN18GJMoveCommandLayer15onUpdateGroupIDEPN7cocos2d8CCObjectE, 0x373350

; GJMoveCommandLayer::onUpdateGroupID2(cocos2d::CCObject*)
defit __ZN18GJMoveCommandLayer16onUpdateGroupID2EPN7cocos2d8CCObjectE, 0x3734c0

; GJMoveCommandLayer::textChanged(CCTextInputNode*)
defit __ZN18GJMoveCommandLayer11textChangedEP15CCTextInputNode, 0x374470

; GJMoveCommandLayer::textChanged(CCTextInputNode*)
defit __ZN18GJMoveCommandLayer11textChangedEP15CCTextInputNode, 0x374950

; GJMoveCommandLayer::textInputClosed(CCTextInputNode*)
defit __ZN18GJMoveCommandLayer15textInputClosedEP15CCTextInputNode, 0x374430

; GJMoveCommandLayer::textInputClosed(CCTextInputNode*)
defit __ZN18GJMoveCommandLayer15textInputClosedEP15CCTextInputNode, 0x374450

; GJMoveCommandLayer::textInputReturn(CCTextInputNode*)
defit __ZN18GJMoveCommandLayer15textInputReturnEP15CCTextInputNode, 0x374c10

; GJMoveCommandLayer::textInputReturn(CCTextInputNode*)
defit __ZN18GJMoveCommandLayer15textInputReturnEP15CCTextInputNode, 0x374c70

; GJMoveCommandLayer::textInputShouldOffset(CCTextInputNode*, float)
defit __ZN18GJMoveCommandLayer21textInputShouldOffsetEP15CCTextInputNodef, 0x374b50

; GJMoveCommandLayer::textInputShouldOffset(CCTextInputNode*, float)
defit __ZN18GJMoveCommandLayer21textInputShouldOffsetEP15CCTextInputNodef, 0x374bb0

; GJMoveCommandLayer::updateEditorLabel()
defit __ZN18GJMoveCommandLayer17updateEditorLabelEv, 0x374110

; GJMoveCommandLayer::updateMoveTargetElements()
defit __ZN18GJMoveCommandLayer24updateMoveTargetElementsEv, 0x373ac0

; GJMoveCommandLayer::updateTargetGroupID()
defit __ZN18GJMoveCommandLayer19updateTargetGroupIDEv, 0x374050

; GJMoveCommandLayer::updateTextInputLabel()
defit __ZN18GJMoveCommandLayer20updateTextInputLabelEv, 0x373680

; GJMoveCommandLayer::updateTextInputLabel2()
defit __ZN18GJMoveCommandLayer21updateTextInputLabel2Ev, 0x373760

; GJMoveCommandLayer::updateValueXLabel()
defit __ZN18GJMoveCommandLayer17updateValueXLabelEv, 0x373840

; GJMoveCommandLayer::updateValueYLabel()
defit __ZN18GJMoveCommandLayer17updateValueYLabelEv, 0x373950

; GJMoveCommandLayer::valuePopupClosed(ConfigureValuePopup*, float)
defit __ZN18GJMoveCommandLayer16valuePopupClosedEP19ConfigureValuePopupf, 0x373c20

; GJMoveCommandLayer::valuePopupClosed(ConfigureValuePopup*, float)
defit __ZN18GJMoveCommandLayer16valuePopupClosedEP19ConfigureValuePopupf, 0x373d50

;([undefined * * param_1@RDI:8])
; GJMoveCommandLayer::~GJMoveCommandLayer()
;defit __ZN18GJMoveCommandLayerD0Ev, 0x36f800
; GJMoveCommandLayer::~GJMoveCommandLayer()
;defit __ZN18GJMoveCommandLayerD1Ev, 0x36f800
; GJMoveCommandLayer::~GJMoveCommandLayer()
;defit __ZN18GJMoveCommandLayerD2Ev, 0x36f800

;([long param_1@RDI:8])
; GJMoveCommandLayer::~GJMoveCommandLayer()
;defit __ZN18GJMoveCommandLayerD0Ev, 0x36f810
; GJMoveCommandLayer::~GJMoveCommandLayer()
;defit __ZN18GJMoveCommandLayerD1Ev, 0x36f810
; GJMoveCommandLayer::~GJMoveCommandLayer()
;defit __ZN18GJMoveCommandLayerD2Ev, 0x36f810

;([undefined * * param_1@RDI:8])
; GJMoveCommandLayer::~GJMoveCommandLayer()
;defit __ZN18GJMoveCommandLayerD0Ev, 0x36f830
; GJMoveCommandLayer::~GJMoveCommandLayer()
;defit __ZN18GJMoveCommandLayerD1Ev, 0x36f830
; GJMoveCommandLayer::~GJMoveCommandLayer()
;defit __ZN18GJMoveCommandLayerD2Ev, 0x36f830

;([long param_1@RDI:8])
; GJMoveCommandLayer::~GJMoveCommandLayer()
;defit __ZN18GJMoveCommandLayerD0Ev, 0x36f860
; GJMoveCommandLayer::~GJMoveCommandLayer()
;defit __ZN18GJMoveCommandLayerD1Ev, 0x36f860
; GJMoveCommandLayer::~GJMoveCommandLayer()
;defit __ZN18GJMoveCommandLayerD2Ev, 0x36f860

; GJPFollowCommandLayer::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN21GJPFollowCommandLayer6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x1aea20

; GJRobotSprite::create()
defit __ZN13GJRobotSprite6createEv, 0x34ac00

; GJRobotSprite::updateColor02(cocos2d::_ccColor3B)
defit __ZN13GJRobotSprite13updateColor02EN7cocos2d10_ccColor3BE, 0x34bbd0

; GJRobotSprite::updateFrame(int)
defit __ZN13GJRobotSprite11updateFrameEi, 0x34bdd0

; GJRotateCommandLayer::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN20GJRotateCommandLayer6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x1ba0

; GJSpiderSprite::create()
defit __ZN14GJSpiderSprite6createEv, 0x34c5b0

; GManager::save()
defit __ZN8GManager4saveEv, 0x26f300

; GManager::saveData(DS_Dictionary*, std::string)
defit __ZN8GManager8saveDataEP13DS_DictionarySs, 0x26f4b0

; GManager::saveGMTo(std::string)
defit __ZN8GManager8saveGMToESs, 0x26f3b0

; GameManager::colorForIdx(int)
defit __ZN11GameManager11colorForIdxEi, 0x1cbc80

; GameManager::didExitPlayscene()
defit __ZN11GameManager16didExitPlaysceneEv, 0x1d0230

; GameManager::doQuickSave()
defit __ZN11GameManager11doQuickSaveEv, 0x1d0200

; GameManager::fadeInMusic(char const*)
defit __ZN11GameManager11fadeInMusicEPKc, 0x1c2ff0

; GameManager::getBGTexture(int)
defit __ZN11GameManager12getBGTextureEi, 0x1cca00

; GameManager::getFontFile(int)
defit __ZN11GameManager11getFontFileEi, 0x1cc5f0

; GameManager::getGameVariable(char const*)
defit __ZN11GameManager15getGameVariableEPKc, 0x1cccd0

; GameManager::getIntGameVariable(char const*)
defit __ZN11GameManager18getIntGameVariableEPKc, 0x1cd1d0

; GameManager::getUGV(char const*)
defit __ZN11GameManager6getUGVEPKc, 0x1ccfa0

; GameManager::loadDeathEffect(int)
defit __ZN11GameManager15loadDeathEffectEi, 0x1cc690

; GameManager::loadFont(int)
defit __ZN11GameManager8loadFontEi, 0x1cc550

; GameManager::reportPercentageForLevel(int, int, bool)
defit __ZN11GameManager24reportPercentageForLevelEiib, 0x1c5b00

; GameManager::setUGV(char const*, bool)
defit __ZN11GameManager6setUGVEPKcb, 0x1cce50

; GameManager::sharedState()
defit __ZN11GameManager11sharedStateEv, 0x1c2b30

;([undefined * * param_1@RDI:8])
; GameObject::GameObject()
;defit __ZN10GameObjectC1Ev, 0xdc4c0
; GameObject::GameObject()
;defit __ZN10GameObjectC2Ev, 0xdc4c0

; GameObject::activateObject()
defit __ZN10GameObject14activateObjectEv, 0x2faf60

; GameObject::activatedByPlayer(GameObject*)
defit __ZN10GameObject17activatedByPlayerEPS_, 0x342a20

; GameObject::addColorSprite()
defit __ZN10GameObject14addColorSpriteEv, 0x2f7fe0

; GameObject::addColorSpriteToParent(bool)
defit __ZN10GameObject22addColorSpriteToParentEb, 0x2fb470

; GameObject::addMainSpriteToParent(bool)
defit __ZN10GameObject21addMainSpriteToParentEb, 0x33a5b0

; GameObject::addToGroup(int)
defit __ZN10GameObject10addToGroupEi, 0x33ad00

; GameObject::addToTempOffset(float, float)
defit __ZN10GameObject15addToTempOffsetEff, 0x335700

; GameObject::calculateOrientedBox()
defit __ZN10GameObject20calculateOrientedBoxEv, 0x342b20

; GameObject::calculateSpawnXPos()
defit __ZN10GameObject18calculateSpawnXPosEv, 0x336970

; GameObject::canChangeCustomColor()
defit __ZN10GameObject20canChangeCustomColorEv, 0x342db0

; GameObject::colorForMode(int, bool)
defit __ZN10GameObject12colorForModeEib, 0x343460

; GameObject::copyGroups(GameObject*)
defit __ZN10GameObject10copyGroupsEPS_, 0x33ae30

; GameObject::createWithFrame(char const*)
defit __ZN10GameObject15createWithFrameEPKc, 0x2f5490

; GameObject::createWithKey(int)
defit __ZN10GameObject13createWithKeyEi, 0x2f4ce0

; GameObject::customObjectSetup(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<std::string const, std::string> > >&)
defit __ZN10GameObject17customObjectSetupERSt3mapISsSsSt4lessISsESaISt4pairIKSsSsEEE, 0xdc1a0

; GameObject::customSetup()
defit __ZN10GameObject11customSetupEv, 0x2fbba0

; GameObject::deactivateObject(bool)
defit __ZN10GameObject16deactivateObjectEb, 0x2fb8f0

; GameObject::determineSlopeDirection()
defit __ZN10GameObject23determineSlopeDirectionEv, 0x33a9e0

; GameObject::getActiveColorForMode(int, bool)
defit __ZN10GameObject21getActiveColorForModeEib, 0x343860

; GameObject::getBallFrame(int)
defit __ZN10GameObject12getBallFrameEi, 0x341bf0

; GameObject::getBoxOffset()
defit __ZN10GameObject12getBoxOffsetEv, 0x3353d0

; GameObject::getDidUpdateLastPosition()
defit __ZN10GameObject24getDidUpdateLastPositionEv, 0x343a20

; GameObject::getGroupID(int)
defit __ZN10GameObject10getGroupIDEi, 0x33ae10

; GameObject::getLastPosition()
defit __ZN10GameObject15getLastPositionEv, 0x3439d0

; GameObject::getObjectRect()
defit __ZN10GameObject13getObjectRectEv, 0x3352b0

; GameObject::getObjectRect(float, float)
defit __ZN10GameObject13getObjectRectEff, 0x3352d0

; GameObject::getObjectRect2(float, float)
defit __ZN10GameObject14getObjectRect2Eff, 0x3354e0

; GameObject::getObjectRectDirty() const
defit __ZNK10GameObject18getObjectRectDirtyEv, 0xdc1d0

; GameObject::getObjectTextureRect()
defit __ZN10GameObject20getObjectTextureRectEv, 0x3355b0

; GameObject::getObjectZOrder()
defit __ZN10GameObject15getObjectZOrderEv, 0x337d70

; GameObject::getOrientedRectDirty() const
defit __ZNK10GameObject20getOrientedRectDirtyEv, 0xdc1f0

; GameObject::getRScaleX()
defit __ZN10GameObject10getRScaleXEv, 0x335e50

; GameObject::getRScaleY()
defit __ZN10GameObject10getRScaleYEv, 0x335e80

; GameObject::getSaveString()
defit __ZN10GameObject13getSaveStringEv, 0x33d3d0

; GameObject::getSectionIdx()
defit __ZN10GameObject13getSectionIdxEv, 0x343a00

; GameObject::getStartPos() const
defit __ZNK10GameObject11getStartPosEv, 0xdc230

; GameObject::getType() const
defit __ZNK10GameObject7getTypeEv, 0xdc210

; GameObject::groupWasDisabled()
defit __ZN10GameObject16groupWasDisabledEv, 0x33b110

; GameObject::groupWasEnabled()
defit __ZN10GameObject15groupWasEnabledEv, 0x33b0f0

; GameObject::hasBeenActivated()
defit __ZN10GameObject16hasBeenActivatedEv, 0x342a80

; GameObject::hasBeenActivatedByPlayer(GameObject*)
defit __ZN10GameObject24hasBeenActivatedByPlayerEPS_, 0x342a50

; GameObject::hasSecondaryColor()
defit __ZN10GameObject17hasSecondaryColorEv, 0x342f80

; GameObject::ignoreEnter()
defit __ZN10GameObject11ignoreEnterEv, 0x3352a0

; GameObject::ignoreFade()
defit __ZN10GameObject10ignoreFadeEv, 0x335290

; GameObject::initWithTexture(cocos2d::CCTexture2D*)
defit __ZN10GameObject15initWithTextureEPN7cocos2d11CCTexture2DE, 0x2f56a0

; GameObject::isBasicTrigger()
defit __ZN10GameObject14isBasicTriggerEv, 0x343d10

; GameObject::isColorTrigger()
defit __ZN10GameObject14isColorTriggerEv, 0x343b40

; GameObject::isFlipX()
defit __ZN10GameObject7isFlipXEv, 0x335a40

; GameObject::isFlipY()
defit __ZN10GameObject7isFlipYEv, 0x335a50

; GameObject::isSpawnableTrigger()
defit __ZN10GameObject18isSpawnableTriggerEv, 0x343a60

; GameObject::isSpecialObject()
defit __ZN10GameObject15isSpecialObjectEv, 0x343c40

; GameObject::objectFromString(std::string, bool)
defit __ZN10GameObject16objectFromStringESsb, 0x33b720

; GameObject::playShineEffect()
defit __ZN10GameObject15playShineEffectEv, 0x2fa9d0

; GameObject::powerOffObject()
defit __ZN10GameObject14powerOffObjectEv, 0x3369c0

; GameObject::powerOnObject()
defit __ZN10GameObject13powerOnObjectEv, 0x3369a0

; GameObject::quickUpdatePosition()
defit __ZN10GameObject19quickUpdatePositionEv, 0x335790

; GameObject::removeFromGroup(int)
defit __ZN10GameObject15removeFromGroupEi, 0x33ada0

; GameObject::removeGlow()
defit __ZN10GameObject10removeGlowEv, 0x2f7f70

; GameObject::resetGroupDisabled()
defit __ZN10GameObject18resetGroupDisabledEv, 0x2fa7e0

; GameObject::saveActiveColors()
defit __ZN10GameObject16saveActiveColorsEv, 0x33d250

; GameObject::setChildColor(cocos2d::_ccColor3B const&)
defit __ZN10GameObject13setChildColorERKN7cocos2d10_ccColor3BE, 0x341f20

; GameObject::setDefaultMainColorMode(int)
defit __ZN10GameObject23setDefaultMainColorModeEi, 0x304fc0

; GameObject::setDidUpdateLastPosition(bool const&)
defit __ZN10GameObject24setDidUpdateLastPositionERKb, 0x343a30

; GameObject::setGlowColor(cocos2d::_ccColor3B const&)
defit __ZN10GameObject12setGlowColorERKN7cocos2d10_ccColor3BE, 0x341ed0

; GameObject::setGlowOpacity(unsigned char)
defit __ZN10GameObject14setGlowOpacityEh, 0x336200

; GameObject::setLastPosition(cocos2d::CCPoint const&)
defit __ZN10GameObject15setLastPositionERKN7cocos2d7CCPointE, 0x3439e0

; GameObject::setMainColorMode(int)
defit __ZN10GameObject16setMainColorModeEi, 0x342e70

; GameObject::setObjectColor(cocos2d::_ccColor3B const&)
defit __ZN10GameObject14setObjectColorERKN7cocos2d10_ccColor3BE, 0x341c90

; GameObject::setObjectRectDirty(bool)
defit __ZN10GameObject18setObjectRectDirtyEb, 0xdc1e0

; GameObject::setOrientedRectDirty(bool)
defit __ZN10GameObject20setOrientedRectDirtyEb, 0xdc200

; GameObject::setRScale(float)
defit __ZN10GameObject9setRScaleEf, 0x335e10

; GameObject::setRScaleX(float)
defit __ZN10GameObject10setRScaleXEf, 0x335cb0

; GameObject::setRScaleY(float)
defit __ZN10GameObject10setRScaleYEf, 0x335d60

; GameObject::setSectionIdx(int const&)
defit __ZN10GameObject13setSectionIdxERKi, 0x343a10

; GameObject::setStartPos(cocos2d::CCPoint)
defit __ZN10GameObject11setStartPosEN7cocos2d7CCPointE, 0x2fa520

; GameObject::setType(GameObjectType)
defit __ZN10GameObject7setTypeE14GameObjectType, 0xdc220

; GameObject::setupCoinArt()
defit __ZN10GameObject12setupCoinArtEv, 0x337dd0

; GameObject::setupCustomSprites()
defit __ZN10GameObject18setupCustomSpritesEv, 0x307f60

; GameObject::slopeFloorTop()
defit __ZN10GameObject13slopeFloorTopEv, 0x342800

; GameObject::slopeWallLeft()
defit __ZN10GameObject13slopeWallLeftEv, 0x3427e0

; GameObject::spawnXPosition()
defit __ZN10GameObject14spawnXPositionEv, 0xdc1b0

; GameObject::triggerActivated(float)
defit __ZN10GameObject16triggerActivatedEf, 0x336990

; GameObject::triggerObject(GJBaseGameLayer*)
defit __ZN10GameObject13triggerObjectEP15GJBaseGameLayer, 0x2fa8f0

; GameObject::updateCustomScale(float)
defit __ZN10GameObject17updateCustomScaleEf, 0x335eb0

; GameObject::updateMainColor()
defit __ZN10GameObject15updateMainColorEv, 0x343340

; GameObject::updateOrientedBox()
defit __ZN10GameObject17updateOrientedBoxEv, 0x342b50

; GameObject::updateSecondaryColor()
defit __ZN10GameObject20updateSecondaryColorEv, 0x343740

; GameObject::updateStartPos()
defit __ZN10GameObject14updateStartPosEv, 0x2fa590

; GameObject::updateStartValues()
defit __ZN10GameObject17updateStartValuesEv, 0x2fa800

; GameObject::updateState()
defit __ZN10GameObject11updateStateEv, 0x3369e0

; GameObject::updateSyncedAnimation(float)
defit __ZN10GameObject21updateSyncedAnimationEf, 0x337f00

; GameSoundManager::disableMetering()
defit __ZN16GameSoundManager15disableMeteringEv, 0x362d80

; GameSoundManager::enableMetering()
defit __ZN16GameSoundManager14enableMeteringEv, 0x362d00

; GameSoundManager::getMeteringValue()
defit __ZN16GameSoundManager16getMeteringValueEv, 0x362db0

; GameSoundManager::playBackgroundMusic(std::string, bool, bool)
defit __ZN16GameSoundManager19playBackgroundMusicESsbb, 0x362070

; GameSoundManager::playEffect(std::string, float, float, float)
defit __ZN16GameSoundManager10playEffectESsfff, 0x3623d0

; GameSoundManager::sharedManager()
defit __ZN16GameSoundManager13sharedManagerEv, 0x3610f0

; GameSoundManager::stopBackgroundMusic()
defit __ZN16GameSoundManager19stopBackgroundMusicEv, 0x362130

; GameStatsManager::awardCurrencyForLevel(GJGameLevel*)
defit __ZN16GameStatsManager21awardCurrencyForLevelEP11GJGameLevel, 0x43600

; GameStatsManager::awardDiamondsForLevel(GJGameLevel*)
defit __ZN16GameStatsManager21awardDiamondsForLevelEP11GJGameLevel, 0x43c60

; GameStatsManager::awardSecretKey()
defit __ZN16GameStatsManager14awardSecretKeyEv, 0x4b1e0

; GameStatsManager::getSecretCoinKey(char const*)
defit __ZN16GameStatsManager16getSecretCoinKeyEPKc, 0x429f0

; GameStatsManager::getStat(char const*)
defit __ZN16GameStatsManager7getStatEPKc, 0x3d310

; GameStatsManager::hasPendingUserCoin(char const*)
defit __ZN16GameStatsManager18hasPendingUserCoinEPKc, 0x42730

; GameStatsManager::hasSecretCoin(char const*)
defit __ZN16GameStatsManager13hasSecretCoinEPKc, 0x40730

; GameStatsManager::hasUserCoin(char const*)
defit __ZN16GameStatsManager11hasUserCoinEPKc, 0x427e0

; GameStatsManager::incrementStat(char const*)
defit __ZN16GameStatsManager13incrementStatEPKc, 0x3d6d0

; GameStatsManager::incrementStat(char const*, int)
defit __ZN16GameStatsManager13incrementStatEPKci, 0x3d6e0

; GameStatsManager::sharedState()
defit __ZN16GameStatsManager11sharedStateEv, 0x38f20

; GameStatsManager::storePendingUserCoin(char const*)
defit __ZN16GameStatsManager20storePendingUserCoinEPKc, 0x42940

; GameStatsManager::storeSecretCoin(char const*)
defit __ZN16GameStatsManager15storeSecretCoinEPKc, 0x42a10

; GameStatsManager::storeUserCoin(char const*)
defit __ZN16GameStatsManager13storeUserCoinEPKc, 0x42890

; GameToolbox::multipliedColorValue(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float)
defit __ZN11GameToolbox20multipliedColorValueEN7cocos2d10_ccColor3BES1_f, 0x28cb90

; GameToolbox::stringSetupToDict(std::string, char const*)
defit __ZN11GameToolbox17stringSetupToDictESsPKc, 0x28d700

; GameToolbox::transformColor(cocos2d::_ccColor3B const&, float, float, float)
defit __ZN11GameToolbox14transformColorERKN7cocos2d10_ccColor3BEfff, 0x28c930

; GameToolbox::transformColor(cocos2d::_ccColor3B const&, cocos2d::_ccHSVValue)
defit __ZN11GameToolbox14transformColorERKN7cocos2d10_ccColor3BENS0_11_ccHSVValueE, 0x28c950

; GravityEffectSprite::create()
defit __ZN19GravityEffectSprite6createEv, 0x6d0a0

; GravityEffectSprite::init()
defit __ZN19GravityEffectSprite4initEv, 0x80b20

; GravityEffectSprite::updateSpritesColor(cocos2d::_ccColor3B)
defit __ZN19GravityEffectSprite18updateSpritesColorEN7cocos2d10_ccColor3BE, 0x7ce30

; GroupCommandObject::create()
defit __ZN18GroupCommandObject6createEv, 0x18b460

; GroupCommandObject::createFromString(std::string)
defit __ZN18GroupCommandObject16createFromStringESs, 0x16ece0

; GroupCommandObject::easeToText(int)
defit __ZN18GroupCommandObject10easeToTextEi, 0x16ecb0

; GroupCommandObject::getEasedAction(cocos2d::CCActionInterval*, int, float)
defit __ZN18GroupCommandObject14getEasedActionEPN7cocos2d16CCActionIntervalEif, 0x16e7b0

; GroupCommandObject::runMoveCommand(cocos2d::CCPoint, float, int, float, bool, bool)
defit __ZN18GroupCommandObject14runMoveCommandEN7cocos2d7CCPointEfifbb, 0x16e640

; GroupCommandObject::runRotateCommand(float, float, int, float, bool)
defit __ZN18GroupCommandObject16runRotateCommandEffifb, 0x16e8f0

; HardStreak::addPoint(cocos2d::CCPoint)
defit __ZN10HardStreak8addPointEN7cocos2d7CCPointE, 0x5c950

; HardStreak::reset()
defit __ZN10HardStreak5resetEv, 0x5c930

; HardStreak::resumeStroke()
defit __ZN10HardStreak12resumeStrokeEv, 0x5c210

; HardStreak::stopStroke()
defit __ZN10HardStreak10stopStrokeEv, 0x5c8f0

; LabelGameObject::init()
defit __ZN15LabelGameObject4initEv, 0x2f5520

; LabelGameObject::setObjectColor(cocos2d::_ccColor3B const&)
defit __ZN15LabelGameObject14setObjectColorERKN7cocos2d10_ccColor3BE, 0xdbca0

;([LevelEditorLayer * param_1@RDI:8])
; LevelEditorLayer::LevelEditorLayer()
;defit __ZN16LevelEditorLayerC1Ev, 0xad500
; LevelEditorLayer::LevelEditorLayer()
;defit __ZN16LevelEditorLayerC2Ev, 0xad500

; LevelEditorLayer::activateTriggerEffect(EffectGameObject*, float, float, float)
defit __ZN16LevelEditorLayer21activateTriggerEffectEP16EffectGameObjectfff, 0x9b520

; LevelEditorLayer::animateInDualGround(GameObject*, float, bool)
defit __ZN16LevelEditorLayer19animateInDualGroundEP10GameObjectfb, 0xa2780

; LevelEditorLayer::checkCollisions(PlayerObject*, float)
defit __ZN16LevelEditorLayer15checkCollisionsEP12PlayerObjectf, 0x9e620

; LevelEditorLayer::createBackground()
defit __ZN16LevelEditorLayer16createBackgroundEv, 0x929f0

; LevelEditorLayer::createGroundLayer()
defit __ZN16LevelEditorLayer17createGroundLayerEv, 0x92840

; LevelEditorLayer::createObjectsFromSetup(std::string)
defit __ZN16LevelEditorLayer22createObjectsFromSetupESs, 0x92230

; LevelEditorLayer::init(GJGameLevel*)
defit __ZN16LevelEditorLayer4initEP11GJGameLevel, 0x91010

; LevelEditorLayer::objectMoved(GameObject*)
defit __ZN16LevelEditorLayer11objectMovedEP10GameObject, 0x999f0

; LevelEditorLayer::onPlaytest()
defit __ZN16LevelEditorLayer10onPlaytestEv, 0xa06b0

; LevelEditorLayer::onStopPlaytest()
defit __ZN16LevelEditorLayer14onStopPlaytestEv, 0xa1780

; LevelEditorLayer::playMusic()
defit __ZN16LevelEditorLayer9playMusicEv, 0xa13c0

; LevelEditorLayer::recreateGroups()
defit __ZN16LevelEditorLayer14recreateGroupsEv, 0x9dbf0

; LevelEditorLayer::removeAllObjects()
defit __ZN16LevelEditorLayer16removeAllObjectsEv, 0x93d80

; LevelEditorLayer::resetMovingObjects()
defit __ZN16LevelEditorLayer18resetMovingObjectsEv, 0x9ddc0

; LevelEditorLayer::runColorEffect(EffectGameObject*, int, float, float, bool)
defit __ZN16LevelEditorLayer14runColorEffectEP16EffectGameObjectiffb, 0x9bd30

; LevelEditorLayer::setupLevelStart(LevelSettingsObject*)
defit __ZN16LevelEditorLayer15setupLevelStartEP19LevelSettingsObject, 0xa0ca0

; LevelEditorLayer::sortStickyGroups()
defit __ZN16LevelEditorLayer16sortStickyGroupsEv, 0x92b10

; LevelEditorLayer::stopTriggersInGroup(int, float)
defit __ZN16LevelEditorLayer19stopTriggersInGroupEif, 0x9c030

; LevelEditorLayer::toggleDualMode(GameObject*, bool, PlayerObject*, bool)
defit __ZN16LevelEditorLayer14toggleDualModeEP10GameObjectbP12PlayerObjectb, 0xa0200

; LevelEditorLayer::toggleGroupPreview(int, bool)
defit __ZN16LevelEditorLayer18toggleGroupPreviewEib, 0x9bea0

; LevelEditorLayer::transferDefaultColors(GJEffectManager*, GJEffectManager*)
defit __ZN16LevelEditorLayer21transferDefaultColorsEP15GJEffectManagerS1_, 0x9ab50

; LevelEditorLayer::update(float)
defit __ZN16LevelEditorLayer6updateEf, 0xa1b70

; LevelEditorLayer::updateBGAndGColors()
defit __ZN16LevelEditorLayer18updateBGAndGColorsEv, 0x9b9b0

; LevelEditorLayer::updateBlendValues()
defit __ZN16LevelEditorLayer17updateBlendValuesEv, 0x9bc60

; LevelEditorLayer::updateDualGround(PlayerObject*, int, bool)
defit __ZN16LevelEditorLayer16updateDualGroundEP12PlayerObjectib, 0xa1a60

; LevelEditorLayer::updateEditorMode()
defit __ZN16LevelEditorLayer16updateEditorModeEv, 0x93b50

; LevelEditorLayer::updateGroundWidth()
defit __ZN16LevelEditorLayer17updateGroundWidthEv, 0x356790

; LevelEditorLayer::updateOptions()
defit __ZN16LevelEditorLayer13updateOptionsEv, 0x91ed0

; LevelSettingsLayer::create(LevelSettingsObject*, LevelEditorLayer*)
defit __ZN18LevelSettingsLayer6createEP19LevelSettingsObjectP16LevelEditorLayer, 0xa7c30

; LevelSettingsObject::create()
defit __ZN19LevelSettingsObject6createEv, 0x92760

; LevelSettingsObject::objectFromDict(cocos2d::CCDictionary*)
defit __ZN19LevelSettingsObject14objectFromDictEPN7cocos2d12CCDictionaryE, 0xa5810

; LevelSettingsObject::objectFromString(std::string)
defit __ZN19LevelSettingsObject16objectFromStringESs, 0x945a0

; LevelSettingsObject::setupColorsFromLegacyMode(cocos2d::CCDictionary*)
defit __ZN19LevelSettingsObject25setupColorsFromLegacyModeEPN7cocos2d12CCDictionaryE, 0xa6a30

; LevelTools::getAudioString(int)
defit __ZN10LevelTools14getAudioStringEi, 0x293880

; LevelTools::verifyLevelIntegrity(std::string, int)
defit __ZN10LevelTools20verifyLevelIntegrityESsi, 0x294360

; LevelTools::xPosForTime(float, cocos2d::CCArray*, int)
defit __ZN10LevelTools11xPosForTimeEfPN7cocos2d7CCArrayEi, 0x293d90

; LoadingLayer::loadAssets()
defit __ZN12LoadingLayer10loadAssetsEv, 0x1dfb20

; MenuGameLayer::resetPlayer()
defit __ZN13MenuGameLayer11resetPlayerEv, 0x28fdc0

; MenuGameLayer::update(float)
defit __ZN13MenuGameLayer6updateEf, 0x28fa70

; MusicDownloadManager::incrementPriorityForSong(int)
defit __ZN20MusicDownloadManager24incrementPriorityForSongEi, 0x2ef750

; MusicDownloadManager::sharedState()
defit __ZN20MusicDownloadManager11sharedStateEv, 0x2ee4c0

; OBB2D::calculateWithCenter(cocos2d::CCPoint, float, float, float)
defit __ZN5OBB2D19calculateWithCenterEN7cocos2d7CCPointEfff, 0x35a9c0

; OBB2D::create(cocos2d::CCPoint, float, float, float)
defit __ZN5OBB2D6createEN7cocos2d7CCPointEfff, 0x35a890

; OBB2D::overlaps1Way(OBB2D*)
defit __ZN5OBB2D12overlaps1WayEPS_, 0x35b0d0

; ObjectToolbox::intKeyToFrame(int)
defit __ZN13ObjectToolbox13intKeyToFrameEi, 0x4173b0

; ObjectToolbox::sharedState()
defit __ZN13ObjectToolbox11sharedStateEv, 0x3b2bc0

; OpacityEffectAction::createFromString(std::string)
defit __ZN19OpacityEffectAction16createFromStringESs, 0x178c10

; OpacityEffectAction::step(float)
defit __ZN19OpacityEffectAction4stepEf, 0x178b90

; PauseLayer::create(bool)
defit __ZN10PauseLayer6createEb, 0x20b1e0

; PauseLayer::onEdit(cocos2d::CCObject*)
defit __ZN10PauseLayer6onEditEPN7cocos2d8CCObjectE, 0x20c630

; PlatformToolbox::hideCursor()
defit __ZN15PlatformToolbox10hideCursorEv, 0x27c340

; PlatformToolbox::showCursor()
defit __ZN15PlatformToolbox10showCursorEv, 0x27c360

;([PlayLayer * param_1@RDI:8])
; PlayLayer::PlayLayer()
;defit __ZN9PlayLayerC1Ev, 0x80e20
; PlayLayer::PlayLayer()
;defit __ZN9PlayLayerC2Ev, 0x80e20

; PlayLayer::addCircle(CCCircleWave*)
defit __ZN9PlayLayer9addCircleEP12CCCircleWave, 0x7e0f0

; PlayLayer::addObject(GameObject*)
defit __ZN9PlayLayer9addObjectEP10GameObject, 0x70e50

; PlayLayer::addToGroupOld(GameObject*)
defit __ZN9PlayLayer13addToGroupOldEP10GameObject, 0x77680

; PlayLayer::addToSpeedObjects(GameObject*)
defit __ZN9PlayLayer17addToSpeedObjectsEP10GameObject, 0x7cfc0

; PlayLayer::animateInDualGround(GameObject*, float, bool)
defit __ZN9PlayLayer19animateInDualGroundEP10GameObjectfb, 0x7d710

; PlayLayer::animateInGround(bool)
defit __ZN9PlayLayer15animateInGroundEb, 0x7d9d0

; PlayLayer::animateOutGround(bool)
defit __ZN9PlayLayer16animateOutGroundEb, 0x6f350

; PlayLayer::animateOutGroundFinished()
defit __ZN9PlayLayer24animateOutGroundFinishedEv, 0x7de80

; PlayLayer::applyEnterEffect(GameObject*)
defit __ZN9PlayLayer16applyEnterEffectEP10GameObject, 0x7c310

; PlayLayer::calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)
defit __ZN9PlayLayer20calculateColorValuesEP16EffectGameObjectS1_ifP17ColorActionSpriteP15GJEffectManager, 0x7aa10

; PlayLayer::cameraMoveX(float, float, float)
defit __ZN9PlayLayer11cameraMoveXEfff, 0x7cbe0

; PlayLayer::cameraMoveY(float, float, float)
defit __ZN9PlayLayer11cameraMoveYEfff, 0x7cc60

; PlayLayer::checkCollisions(PlayerObject*, float)
defit __ZN9PlayLayer15checkCollisionsEP12PlayerObjectf, 0x78c90

; PlayLayer::circleWaveWillBeRemoved(CCCircleWave*)
defit __ZN9PlayLayer23circleWaveWillBeRemovedEP12CCCircleWave, 0x7e110

; PlayLayer::circleWaveWillBeRemoved(CCCircleWave*)
defit __ZN9PlayLayer23circleWaveWillBeRemovedEP12CCCircleWave, 0x7e130

; PlayLayer::claimParticle(std::string)
defit __ZN9PlayLayer13claimParticleESs, 0x76ba0

; PlayLayer::clearPickedUpItems()
defit __ZN9PlayLayer18clearPickedUpItemsEv, 0x7cfa0

; PlayLayer::colorObject(int, cocos2d::_ccColor3B)
defit __ZN9PlayLayer11colorObjectEiN7cocos2d10_ccColor3BE, 0x77810

; PlayLayer::commitJumps()
defit __ZN9PlayLayer11commitJumpsEv, 0x737e0

; PlayLayer::create(GJGameLevel*)
defit __ZN9PlayLayer6createEP11GJGameLevel, 0x6b590

; PlayLayer::createCheckpoint()
defit __ZN9PlayLayer16createCheckpointEv, 0x7e470

; PlayLayer::createObjectsFromSetup(std::string)
defit __ZN9PlayLayer22createObjectsFromSetupESs, 0x6d130

; PlayLayer::createParticle(int, char const*, int, cocos2d::tCCPositionType)
defit __ZN9PlayLayer14createParticleEiPKciN7cocos2d15tCCPositionTypeE, 0x76800

; PlayLayer::currencyWillExit(CurrencyRewardLayer*)
defit __ZN9PlayLayer16currencyWillExitEP19CurrencyRewardLayer, 0x7e070

; PlayLayer::currencyWillExit(CurrencyRewardLayer*)
defit __ZN9PlayLayer16currencyWillExitEP19CurrencyRewardLayer, 0x7e090

; PlayLayer::delayedResetLevel()
defit __ZN9PlayLayer17delayedResetLevelEv, 0x7e050

; PlayLayer::destroyPlayer(PlayerObject*, GameObject*)
defit __ZN9PlayLayer13destroyPlayerEP12PlayerObjectP10GameObject, 0x7ab80

; PlayLayer::dialogClosed(DialogLayer*)
defit __ZN9PlayLayer12dialogClosedEP11DialogLayer, 0x7e0b0

; PlayLayer::dialogClosed(DialogLayer*)
defit __ZN9PlayLayer12dialogClosedEP11DialogLayer, 0x7e0d0

; PlayLayer::draw()
defit __ZN9PlayLayer4drawEv, 0x7d160

; PlayLayer::enterDualMode(GameObject*, bool)
defit __ZN9PlayLayer13enterDualModeEP10GameObjectb, 0x7d6a0

; PlayLayer::exitAirMode()
defit __ZN9PlayLayer11exitAirModeEv, 0x7dd40

; PlayLayer::exitBirdMode(PlayerObject*)
defit __ZN9PlayLayer12exitBirdModeEP12PlayerObject, 0x7dd80

; PlayLayer::exitDartMode(PlayerObject*)
defit __ZN9PlayLayer12exitDartModeEP12PlayerObject, 0x7ddd0

; PlayLayer::exitFlyMode(PlayerObject*)
defit __ZN9PlayLayer11exitFlyModeEP12PlayerObject, 0x7dcf0

; PlayLayer::exitRobotMode(PlayerObject*)
defit __ZN9PlayLayer13exitRobotModeEP12PlayerObject, 0x7de20

; PlayLayer::exitRollMode(PlayerObject*)
defit __ZN9PlayLayer12exitRollModeEP12PlayerObject, 0x7de60

; PlayLayer::exitSpiderMode(PlayerObject*)
defit __ZN9PlayLayer14exitSpiderModeEP12PlayerObject, 0x7de40

; PlayLayer::flipFinished()
defit __ZN9PlayLayer12flipFinishedEv, 0x7e150

; PlayLayer::flipGravity(PlayerObject*, bool, bool)
defit __ZN9PlayLayer11flipGravityEP12PlayerObjectbb, 0x7cd10

; PlayLayer::flipObjects()
defit __ZN9PlayLayer11flipObjectsEv, 0x76130

; PlayLayer::fullReset()
defit __ZN9PlayLayer9fullResetEv, 0x7f8e0

; PlayLayer::getLastCheckpoint()
defit __ZN9PlayLayer17getLastCheckpointEv, 0x7f840

; PlayLayer::getMaxPortalY()
defit __ZN9PlayLayer13getMaxPortalYEv, 0x7b4e0

; PlayLayer::getMinPortalY()
defit __ZN9PlayLayer13getMinPortalYEv, 0x7b550

; PlayLayer::getObjectsState()
defit __ZN9PlayLayer15getObjectsStateEv, 0x7e9d0

; PlayLayer::getOtherPlayer(PlayerObject*)
defit __ZN9PlayLayer14getOtherPlayerEP12PlayerObject, 0x7dcc0

; PlayLayer::getParticleKey(int, char const*, int, cocos2d::tCCPositionType)
defit __ZN9PlayLayer14getParticleKeyEiPKciN7cocos2d15tCCPositionTypeE, 0x764d0

; PlayLayer::getParticleKey2(std::string)
defit __ZN9PlayLayer15getParticleKey2ESs, 0x767b0

; PlayLayer::getRelativeMod(cocos2d::CCPoint, float, float, float)
defit __ZN9PlayLayer14getRelativeModEN7cocos2d7CCPointEfff, 0x7c2a0

; PlayLayer::getTempMilliTime()
defit __ZN9PlayLayer16getTempMilliTimeEv, 0x778e0

; PlayLayer::gravityEffectFinished()
defit __ZN9PlayLayer21gravityEffectFinishedEv, 0x7cec0

; PlayLayer::hasItem(int)
defit __ZN9PlayLayer7hasItemEi, 0x7cee0

; PlayLayer::hasUniqueCoin(GameObject*)
defit __ZN9PlayLayer13hasUniqueCoinEP10GameObject, 0x77510

; PlayLayer::incrementJumps()
defit __ZN9PlayLayer14incrementJumpsEv, 0x7ff40

; PlayLayer::init(GJGameLevel*)
defit __ZN9PlayLayer4initEP11GJGameLevel, 0x6b5f0

; PlayLayer::isFlipping()
defit __ZN9PlayLayer10isFlippingEv, 0x76100

; PlayLayer::levelComplete()
defit __ZN9PlayLayer13levelCompleteEv, 0x72b80

; PlayLayer::lightningFlash(cocos2d::CCPoint, cocos2d::_ccColor3B)
defit __ZN9PlayLayer14lightningFlashEN7cocos2d7CCPointENS0_10_ccColor3BE, 0x75bf0

; PlayLayer::lightningFlash(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, int, bool, float)
defit __ZN9PlayLayer14lightningFlashEN7cocos2d7CCPointES1_NS0_10_ccColor3BEffibf, 0x75cc0

; PlayLayer::loadDefaultColors()
defit __ZN9PlayLayer17loadDefaultColorsEv, 0x6ef30

; PlayLayer::loadFromCheckpoint(CheckpointObject*)
defit __ZN9PlayLayer18loadFromCheckpointEP16CheckpointObject, 0x7f000

; PlayLayer::loadLastCheckpoint()
defit __ZN9PlayLayer18loadLastCheckpointEv, 0x7efc0

; PlayLayer::loadSavedObjectsState(std::string)
defit __ZN9PlayLayer21loadSavedObjectsStateESs, 0x7f3d0

; PlayLayer::markCheckpoint()
defit __ZN9PlayLayer14markCheckpointEv, 0x7ef60

; PlayLayer::moveCameraToPos(cocos2d::CCPoint)
defit __ZN9PlayLayer15moveCameraToPosEN7cocos2d7CCPointE, 0x7c980

; PlayLayer::onEnterTransitionDidFinish()
defit __ZN9PlayLayer26onEnterTransitionDidFinishEv, 0x806e0

; PlayLayer::onExit()
defit __ZN9PlayLayer6onExitEv, 0x80710

; PlayLayer::onQuit()
defit __ZN9PlayLayer6onQuitEv, 0x72710

; PlayLayer::optimizeColorGroups()
defit __ZN9PlayLayer19optimizeColorGroupsEv, 0x6dad0

; PlayLayer::optimizeOpacityGroups()
defit __ZN9PlayLayer21optimizeOpacityGroupsEv, 0x6dc20

; PlayLayer::optimizeSaveRequiredGroups()
defit __ZN9PlayLayer26optimizeSaveRequiredGroupsEv, 0x6dd70

; PlayLayer::pauseGame(bool)
defit __ZN9PlayLayer9pauseGameEb, 0x802d0

; PlayLayer::pickupItem(GameObject*)
defit __ZN9PlayLayer10pickupItemEP10GameObject, 0x7c1d0

; PlayLayer::playAnimationCommand(int, int)
defit __ZN9PlayLayer20playAnimationCommandEii, 0x75930

; PlayLayer::playEndAnimationToPos(cocos2d::CCPoint)
defit __ZN9PlayLayer21playEndAnimationToPosEN7cocos2d7CCPointE, 0x759a0

; PlayLayer::playExitDualEffect(PlayerObject*)
defit __ZN9PlayLayer18playExitDualEffectEP12PlayerObject, 0x7d1d0

; PlayLayer::playFlashEffect(float, int, float)
defit __ZN9PlayLayer15playFlashEffectEfif, 0x75e50

; PlayLayer::playGravityEffect(bool)
defit __ZN9PlayLayer17playGravityEffectEb, 0x7b5a0

; PlayLayer::playSpeedParticle(float)
defit __ZN9PlayLayer17playSpeedParticleEf, 0x77030

; PlayLayer::playerWillSwitchMode(PlayerObject*, GameObject*)
defit __ZN9PlayLayer20playerWillSwitchModeEP12PlayerObjectP10GameObject, 0x7b820

; PlayLayer::prepareSpawnObjects()
defit __ZN9PlayLayer19prepareSpawnObjectsEv, 0x7fc00

; PlayLayer::processItems()
defit __ZN9PlayLayer12processItemsEv, 0x735c0

; PlayLayer::processLoadedMoveActions()
defit __ZN9PlayLayer24processLoadedMoveActionsEv, 0x7a7c0

; PlayLayer::recordAction(bool, PlayerObject*)
defit __ZN9PlayLayer12recordActionEbP12PlayerObject, 0x7e190

; PlayLayer::registerActiveObject(GameObject*)
defit __ZN9PlayLayer20registerActiveObjectEP10GameObject, 0x77620

; PlayLayer::registerStateObject(GameObject*)
defit __ZN9PlayLayer19registerStateObjectEP10GameObject, 0x777b0

; PlayLayer::removeAllObjects()
defit __ZN9PlayLayer16removeAllObjectsEv, 0x727b0

; PlayLayer::removeFromGroupOld(GameObject*)
defit __ZN9PlayLayer18removeFromGroupOldEP10GameObject, 0x77750

; PlayLayer::removeLastCheckpoint()
defit __ZN9PlayLayer20removeLastCheckpointEv, 0x7f870

; PlayLayer::removePlayer2()
defit __ZN9PlayLayer13removePlayer2Ev, 0x7d630

; PlayLayer::resetLevel()
defit __ZN9PlayLayer10resetLevelEv, 0x71c50

; PlayLayer::resume()
defit __ZN9PlayLayer6resumeEv, 0x80480

; PlayLayer::resumeAndRestart()
defit __ZN9PlayLayer16resumeAndRestartEv, 0x80400

; PlayLayer::saveRecordAction(bool, PlayerObject*)
defit __ZN9PlayLayer16saveRecordActionEbP12PlayerObject, 0x78750

; PlayLayer::scene(GJGameLevel*)
defit __ZN9PlayLayer5sceneEP11GJGameLevel, 0x6b500

; PlayLayer::setupLevelStart(LevelSettingsObject*)
defit __ZN9PlayLayer15setupLevelStartEP19LevelSettingsObject, 0x6f560

; PlayLayer::setupReplay(std::string)
defit __ZN9PlayLayer11setupReplayESs, 0x7e1e0

; PlayLayer::shakeCamera(float, float, float)
defit __ZN9PlayLayer11shakeCameraEfff, 0x744a0

; PlayLayer::shouldBlend(int)
defit __ZN9PlayLayer11shouldBlendEi, 0x771b0

; PlayLayer::showCompleteEffect()
defit __ZN9PlayLayer18showCompleteEffectEv, 0x738e0

; PlayLayer::showCompleteText()
defit __ZN9PlayLayer16showCompleteTextEv, 0x73be0

; PlayLayer::showEndLayer()
defit __ZN9PlayLayer12showEndLayerEv, 0x74450

; PlayLayer::showHint()
defit __ZN9PlayLayer8showHintEv, 0x7deb0

; PlayLayer::showNewBest(bool, int, int, bool, bool, bool)
defit __ZN9PlayLayer11showNewBestEbiibbb, 0x74580

; PlayLayer::showRetryLayer()
defit __ZN9PlayLayer14showRetryLayerEv, 0x75ba0

; PlayLayer::showTwoPlayerGuide()
defit __ZN9PlayLayer18showTwoPlayerGuideEv, 0x6df00

; PlayLayer::sortGroups()
defit __ZN9PlayLayer10sortGroupsEv, 0x6d9e0

; PlayLayer::spawnCircle()
defit __ZN9PlayLayer11spawnCircleEv, 0x73820

; PlayLayer::spawnFirework()
defit __ZN9PlayLayer13spawnFireworkEv, 0x74200

; PlayLayer::spawnParticle(char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint)
defit __ZN9PlayLayer13spawnParticleEPKciN7cocos2d15tCCPositionTypeENS2_7CCPointE, 0x76330

; PlayLayer::spawnPlayer2()
defit __ZN9PlayLayer12spawnPlayer2Ev, 0x7d170

; PlayLayer::startGame()
defit __ZN9PlayLayer9startGameEv, 0x726b0

; PlayLayer::startMusic()
defit __ZN9PlayLayer10startMusicEv, 0x72910

; PlayLayer::startRecording()
defit __ZN9PlayLayer14startRecordingEv, 0x7fec0

; PlayLayer::startRecordingDelayed()
defit __ZN9PlayLayer21startRecordingDelayedEv, 0x7fed0

; PlayLayer::stopCameraShake()
defit __ZN9PlayLayer15stopCameraShakeEv, 0x75900

; PlayLayer::stopRecording()
defit __ZN9PlayLayer13stopRecordingEv, 0x6d090

; PlayLayer::storeCheckpoint(CheckpointObject*)
defit __ZN9PlayLayer15storeCheckpointEP16CheckpointObject, 0x7ef10

; PlayLayer::switchToFlyMode(PlayerObject*, GameObject*, bool, int)
defit __ZN9PlayLayer15switchToFlyModeEP12PlayerObjectP10GameObjectbi, 0x7baf0

; PlayLayer::switchToRobotMode(PlayerObject*, GameObject*, bool)
defit __ZN9PlayLayer17switchToRobotModeEP12PlayerObjectP10GameObjectb, 0x7bc80

; PlayLayer::switchToRollMode(PlayerObject*, GameObject*, bool)
defit __ZN9PlayLayer16switchToRollModeEP12PlayerObjectP10GameObjectb, 0x7bbe0

; PlayLayer::switchToSpiderMode(PlayerObject*, GameObject*, bool)
defit __ZN9PlayLayer18switchToSpiderModeEP12PlayerObjectP10GameObjectb, 0x7bd20

; PlayLayer::timeForXPos(float)
defit __ZN9PlayLayer11timeForXPosEf, 0x7d120

; PlayLayer::timeForXPos2(float, bool)
defit __ZN9PlayLayer12timeForXPos2Efb, 0x293eb0

; PlayLayer::toggleBGEffectVisibility(bool)
defit __ZN9PlayLayer24toggleBGEffectVisibilityEb, 0x7fe80

; PlayLayer::toggleDualMode(GameObject*, bool, PlayerObject*, bool)
defit __ZN9PlayLayer14toggleDualModeEP10GameObjectbP12PlayerObjectb, 0x7bf90

; PlayLayer::toggleFlipped(bool, bool)
defit __ZN9PlayLayer13toggleFlippedEbb, 0x7bdc0

; PlayLayer::toggleGhostEffect(int)
defit __ZN9PlayLayer17toggleGhostEffectEi, 0x7fe40

; PlayLayer::toggleGlitter(bool)
defit __ZN9PlayLayer13toggleGlitterEb, 0x70e00

; PlayLayer::togglePracticeMode(bool)
defit __ZN9PlayLayer18togglePracticeModeEb, 0x7f9e0

; PlayLayer::toggleProgressbar()
defit __ZN9PlayLayer17toggleProgressbarEv, 0x6eeb0

; PlayLayer::tryStartRecord()
defit __ZN9PlayLayer14tryStartRecordEv, 0x7fe00

; PlayLayer::unclaimParticle(char const*, cocos2d::CCParticleSystemQuad*)
defit __ZN9PlayLayer15unclaimParticleEPKcPN7cocos2d20CCParticleSystemQuadE, 0x76e00

; PlayLayer::unregisterActiveObject(GameObject*)
defit __ZN9PlayLayer22unregisterActiveObjectEP10GameObject, 0x77660

; PlayLayer::unregisterStateObject(GameObject*)
defit __ZN9PlayLayer21unregisterStateObjectEP10GameObject, 0x777f0

; PlayLayer::update(float)
defit __ZN9PlayLayer6updateEf, 0x77900

; PlayLayer::updateAttempts()
defit __ZN9PlayLayer14updateAttemptsEv, 0x7fcd0

; PlayLayer::updateCamera(float)
defit __ZN9PlayLayer12updateCameraEf, 0x6e2b0

; PlayLayer::updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)
defit __ZN9PlayLayer11updateColorEN7cocos2d10_ccColor3BEfibfNS0_11_ccHSVValueEibiP16EffectGameObject, 0x7c7f0

; PlayLayer::updateDualGround(PlayerObject*, int, bool)
defit __ZN9PlayLayer16updateDualGroundEP12PlayerObjectib, 0x7caa0

; PlayLayer::updateEffectPositions()
defit __ZN9PlayLayer21updateEffectPositionsEv, 0x7a6d0

; PlayLayer::updateLevelColors()
defit __ZN9PlayLayer17updateLevelColorsEv, 0x6f1e0

; PlayLayer::updateMoveObjectsLastPosition()
defit __ZN9PlayLayer29updateMoveObjectsLastPositionEv, 0x7a720

; PlayLayer::updateProgressbar()
defit __ZN9PlayLayer17updateProgressbarEv, 0x6ed70

; PlayLayer::updateReplay(float)
defit __ZN9PlayLayer12updateReplayEf, 0x78b60

; PlayLayer::updateTimeMod(float, bool)
defit __ZN9PlayLayer13updateTimeModEfb, 0x786f0

; PlayLayer::updateTweenAction(float, char const*)
defit __ZN9PlayLayer17updateTweenActionEfPKc, 0x7ffb0

; PlayLayer::updateVisibility()
defit __ZN9PlayLayer16updateVisibilityEv, 0x6fb90

; PlayLayer::vfDChk()
defit __ZN9PlayLayer6vfDChkEv, 0x7fcb0

; PlayLayer::visit()
defit __ZN9PlayLayer5visitEv, 0x75ef0

; PlayLayer::visitWithColorFlash()
defit __ZN9PlayLayer19visitWithColorFlashEv, 0x761f0

; PlayLayer::willSwitchToMode(int, PlayerObject*)
defit __ZN9PlayLayer16willSwitchToModeEiP12PlayerObject, 0x7b9e0

; PlayLayer::xPosForTime(float)
defit __ZN9PlayLayer11xPosForTimeEf, 0x7d140

;([PlayLayer * this@RDI:8 (auto)])
; PlayLayer::~PlayLayer()
;defit __ZN9PlayLayerD0Ev, 0x6b090
; PlayLayer::~PlayLayer()
;defit __ZN9PlayLayerD1Ev, 0x6b090
; PlayLayer::~PlayLayer()
;defit __ZN9PlayLayerD2Ev, 0x6b090

;([undefined8 param_1@XMM0_Qa:8], [undefined8 param_2@XMM1_Qa:8], [undefined4 param_3@XMM2_Da:4], [undefined4 param_4@XMM3_Da:4], [undefined4 param_5@XMM4_Da:4], [undefined4 param_6@XMM5_Da:4], [undefined4 param_7@XMM6_Da:4], [undefined4 param_8@XMM7_Da:4], [undefined * * param_9@RDI:8])
; PlayLayer::~PlayLayer()
;defit __ZN9PlayLayerD0Ev, 0x6b460
; PlayLayer::~PlayLayer()
;defit __ZN9PlayLayerD1Ev, 0x6b460
; PlayLayer::~PlayLayer()
;defit __ZN9PlayLayerD2Ev, 0x6b460

;([undefined8 param_1@XMM0_Qa:8], [undefined8 param_2@XMM1_Qa:8], [undefined4 param_3@XMM2_Da:4], [undefined4 param_4@XMM3_Da:4], [undefined4 param_5@XMM4_Da:4], [undefined4 param_6@XMM5_Da:4], [undefined4 param_7@XMM6_Da:4], [undefined4 param_8@XMM7_Da:4], [long param_9@RDI:8])
; PlayLayer::~PlayLayer()
;defit __ZN9PlayLayerD0Ev, 0x6b470
; PlayLayer::~PlayLayer()
;defit __ZN9PlayLayerD1Ev, 0x6b470
; PlayLayer::~PlayLayer()
;defit __ZN9PlayLayerD2Ev, 0x6b470

;([undefined8 param_1@XMM0_Qa:8], [undefined8 param_2@XMM1_Qa:8], [undefined4 param_3@XMM2_Da:4], [undefined4 param_4@XMM3_Da:4], [undefined4 param_5@XMM4_Da:4], [undefined4 param_6@XMM5_Da:4], [undefined4 param_7@XMM6_Da:4], [undefined4 param_8@XMM7_Da:4], [undefined * * param_9@RDI:8])
; PlayLayer::~PlayLayer()
;defit __ZN9PlayLayerD0Ev, 0x6b490
; PlayLayer::~PlayLayer()
;defit __ZN9PlayLayerD1Ev, 0x6b490
; PlayLayer::~PlayLayer()
;defit __ZN9PlayLayerD2Ev, 0x6b490

;([undefined8 param_1@XMM0_Qa:8], [undefined8 param_2@XMM1_Qa:8], [undefined4 param_3@XMM2_Da:4], [undefined4 param_4@XMM3_Da:4], [undefined4 param_5@XMM4_Da:4], [undefined4 param_6@XMM5_Da:4], [undefined4 param_7@XMM6_Da:4], [undefined4 param_8@XMM7_Da:4], [long param_9@RDI:8])
; PlayLayer::~PlayLayer()
;defit __ZN9PlayLayerD0Ev, 0x6b4c0
; PlayLayer::~PlayLayer()
;defit __ZN9PlayLayerD1Ev, 0x6b4c0
; PlayLayer::~PlayLayer()
;defit __ZN9PlayLayerD2Ev, 0x6b4c0

; PlayerCheckpoint::create()
defit __ZN16PlayerCheckpoint6createEv, 0x7e8c0

;([PlayerObject * param_1@RDI:8])
; PlayerObject::PlayerObject()
;defit __ZN12PlayerObjectC1Ev, 0x22ecf0
; PlayerObject::PlayerObject()
;defit __ZN12PlayerObjectC2Ev, 0x22ecf0

; PlayerObject::activateStreak()
defit __ZN12PlayerObject14activateStreakEv, 0x21aef0

; PlayerObject::addAllParticles()
defit __ZN12PlayerObject15addAllParticlesEv, 0x2189b0

; PlayerObject::addToTouchedRings(GameObject*)
defit __ZN12PlayerObject17addToTouchedRingsEP10GameObject, 0x22b800

; PlayerObject::animationFinished(char const*)
defit __ZN12PlayerObject17animationFinishedEPKc, 0x22e9d0

; PlayerObject::animationFinished(char const*)
defit __ZN12PlayerObject17animationFinishedEPKc, 0x22ecd0

; PlayerObject::boostPlayer(float)
defit __ZN12PlayerObject11boostPlayerEf, 0x21d6b0

; PlayerObject::bumpPlayer(float, int)
defit __ZN12PlayerObject10bumpPlayerEfi, 0x22d890

; PlayerObject::buttonDown(PlayerButton)
defit __ZN12PlayerObject10buttonDownE12PlayerButton, 0x22b7e0

; PlayerObject::checkSnapJumpToObject(GameObject*)
defit __ZN12PlayerObject21checkSnapJumpToObjectEP10GameObject, 0x2217f0

; PlayerObject::collidedWithObject(float, GameObject*)
defit __ZN12PlayerObject18collidedWithObjectEfP10GameObject, 0x21d880

; PlayerObject::collidedWithObject(float, GameObject*, cocos2d::CCRect)
defit __ZN12PlayerObject18collidedWithObjectEfP10GameObjectN7cocos2d6CCRectE, 0x21f0b0

; PlayerObject::collidedWithSlope(float, GameObject*, bool)
defit __ZN12PlayerObject17collidedWithSlopeEfP10GameObjectb, 0x21d8d0

; PlayerObject::convertToClosestRotation(float)
defit __ZN12PlayerObject24convertToClosestRotationEf, 0x21c860

; PlayerObject::copyAttributes(PlayerObject*)
defit __ZN12PlayerObject14copyAttributesEPS_, 0x22dc70

; PlayerObject::create(int, int, cocos2d::CCLayer*)
defit __ZN12PlayerObject6createEiiPN7cocos2d7CCLayerE, 0x217260

; PlayerObject::deactivateParticle()
defit __ZN12PlayerObject18deactivateParticleEv, 0x21a540

; PlayerObject::deactivateStreak(bool)
defit __ZN12PlayerObject16deactivateStreakEb, 0x218b30

; PlayerObject::fadeOutStreak2(float)
defit __ZN12PlayerObject14fadeOutStreak2Ef, 0x225890

; PlayerObject::flashPlayer(float, float, cocos2d::_ccColor3B, cocos2d::_ccColor3B)
defit __ZN12PlayerObject11flashPlayerEffN7cocos2d10_ccColor3BES1_, 0x221c80

; PlayerObject::flipGravity(bool, bool)
defit __ZN12PlayerObject11flipGravityEbb, 0x21c090

; PlayerObject::flipMod()
defit __ZN12PlayerObject7flipModEv, 0x21a4c0

; PlayerObject::getActiveMode()
defit __ZN12PlayerObject13getActiveModeEv, 0x22b950

; PlayerObject::getModifiedSlopeYVel()
defit __ZN12PlayerObject20getModifiedSlopeYVelEv, 0x21bff0

; PlayerObject::getOldPosition(float)
defit __ZN12PlayerObject14getOldPositionEf, 0x21a830

; PlayerObject::getOrientedBox()
defit __ZN12PlayerObject14getOrientedBoxEv, 0x22dee0

; PlayerObject::getRealPosition()
defit __ZN12PlayerObject15getRealPositionEv, 0x22d5f0

; PlayerObject::getSecondColor()
defit __ZN12PlayerObject14getSecondColorEv, 0x22cee0

; PlayerObject::gravityDown()
defit __ZN12PlayerObject11gravityDownEv, 0x22e930

; PlayerObject::gravityUp()
defit __ZN12PlayerObject9gravityUpEv, 0x22e900

; PlayerObject::hardFlipGravity()
defit __ZN12PlayerObject15hardFlipGravityEv, 0x22b860

; PlayerObject::hitGround(bool)
defit __ZN12PlayerObject9hitGroundEb, 0x220a30

; PlayerObject::incrementJumps()
defit __ZN12PlayerObject14incrementJumpsEv, 0x21c050

; PlayerObject::init(int, int, cocos2d::CCLayer*)
defit __ZN12PlayerObject4initEiiPN7cocos2d7CCLayerE, 0x2172e0

; PlayerObject::isBoostValid(float)
defit __ZN12PlayerObject12isBoostValidEf, 0x21d650

; PlayerObject::isFlying()
defit __ZN12PlayerObject8isFlyingEv, 0x21a4e0

; PlayerObject::isSafeFlip(float)
defit __ZN12PlayerObject10isSafeFlipEf, 0x2209f0

; PlayerObject::isSafeMode(float)
defit __ZN12PlayerObject10isSafeModeEf, 0x2209b0

; PlayerObject::isSafeSpiderFlip(float)
defit __ZN12PlayerObject16isSafeSpiderFlipEf, 0x221be0

; PlayerObject::levelFlipFinished()
defit __ZN12PlayerObject17levelFlipFinishedEv, 0x21b060

; PlayerObject::levelFlipping()
defit __ZN12PlayerObject13levelFlippingEv, 0x21a510

; PlayerObject::levelWillFlip()
defit __ZN12PlayerObject13levelWillFlipEv, 0x21b020

; PlayerObject::loadFromCheckpoint(PlayerCheckpoint*)
defit __ZN12PlayerObject18loadFromCheckpointEP16PlayerCheckpoint, 0x22e420

; PlayerObject::lockPlayer()
defit __ZN12PlayerObject10lockPlayerEv, 0x22d680

; PlayerObject::logValues()
defit __ZN12PlayerObject9logValuesEv, 0x221220

; PlayerObject::modeDidChange()
defit __ZN12PlayerObject13modeDidChangeEv, 0x22bfd0

; PlayerObject::placeStreakPoint()
defit __ZN12PlayerObject16placeStreakPointEv, 0x21af90

; PlayerObject::playBurstEffect()
defit __ZN12PlayerObject15playBurstEffectEv, 0x21c780

; PlayerObject::playDeathEffect()
defit __ZN12PlayerObject15playDeathEffectEv, 0x225930

; PlayerObject::playDynamicSpiderRun()
defit __ZN12PlayerObject20playDynamicSpiderRunEv, 0x222ec0

; PlayerObject::playerDestroyed(bool)
defit __ZN12PlayerObject15playerDestroyedEb, 0x2256d0

; PlayerObject::playerIsFalling()
defit __ZN12PlayerObject15playerIsFallingEv, 0x21c730

; PlayerObject::playerTeleported()
defit __ZN12PlayerObject16playerTeleportedEv, 0x22b840

; PlayerObject::playingEndEffect()
defit __ZN12PlayerObject16playingEndEffectEv, 0x22d7e0

; PlayerObject::postCollision(float)
defit __ZN12PlayerObject13postCollisionEf, 0x21cd10

; PlayerObject::preCollision()
defit __ZN12PlayerObject12preCollisionEv, 0x21ccc0

; PlayerObject::preSlopeCollision(float, GameObject*)
defit __ZN12PlayerObject17preSlopeCollisionEfP10GameObject, 0x21ec80

; PlayerObject::propellPlayer(float)
defit __ZN12PlayerObject13propellPlayerEf, 0x22d8e0

; PlayerObject::pushButton(PlayerButton)
defit __ZN12PlayerObject10pushButtonE12PlayerButton, 0x22aa00

; PlayerObject::pushDown()
defit __ZN12PlayerObject8pushDownEv, 0x22dbd0

; PlayerObject::pushPlayer(float)
defit __ZN12PlayerObject10pushPlayerEf, 0x22dbb0

; PlayerObject::releaseButton(PlayerButton)
defit __ZN12PlayerObject13releaseButtonE12PlayerButton, 0x22b6f0

; PlayerObject::removeAllParticles()
defit __ZN12PlayerObject18removeAllParticlesEv, 0x218ac0

; PlayerObject::removePendingCheckpoint()
defit __ZN12PlayerObject23removePendingCheckpointEv, 0x2237b0

; PlayerObject::resetAllParticles()
defit __ZN12PlayerObject17resetAllParticlesEv, 0x21adb0

; PlayerObject::resetCollisionLog()
defit __ZN12PlayerObject17resetCollisionLogEv, 0x21cc20

; PlayerObject::resetObject()
defit __ZN12PlayerObject11resetObjectEv, 0x223170

; PlayerObject::resetPlayerIcon()
defit __ZN12PlayerObject15resetPlayerIconEv, 0x22be00

; PlayerObject::resetStateVariables()
defit __ZN12PlayerObject19resetStateVariablesEv, 0x223760

; PlayerObject::resetStreak()
defit __ZN12PlayerObject11resetStreakEv, 0x21ae10

; PlayerObject::ringJump(GameObject*)
defit __ZN12PlayerObject8ringJumpEP10GameObject, 0x22abf0

; PlayerObject::runBallRotation(float)
defit __ZN12PlayerObject15runBallRotationEf, 0x21ca10

; PlayerObject::runBallRotation2()
defit __ZN12PlayerObject16runBallRotation2Ev, 0x21cb10

; PlayerObject::runNormalRotation()
defit __ZN12PlayerObject17runNormalRotationEv, 0x21c960

; PlayerObject::runRotateAction(bool)
defit __ZN12PlayerObject15runRotateActionEb, 0x21c570

; PlayerObject::saveToCheckpoint(PlayerCheckpoint*)
defit __ZN12PlayerObject16saveToCheckpointEP16PlayerCheckpoint, 0x22e2f0

; PlayerObject::setColor(cocos2d::_ccColor3B const&)
defit __ZN12PlayerObject8setColorERKN7cocos2d10_ccColor3BE, 0x22cdf0

; PlayerObject::setColor(cocos2d::_ccColor3B const&)
defit __ZN12PlayerObject8setColorERKN7cocos2d10_ccColor3BE, 0x22ce60

; PlayerObject::setFlipX(bool)
defit __ZN12PlayerObject8setFlipXEb, 0x22e720

; PlayerObject::setFlipY(bool)
defit __ZN12PlayerObject8setFlipYEb, 0x22e7b0

; PlayerObject::setOpacity(unsigned char)
defit __ZN12PlayerObject10setOpacityEh, 0x22d400

; PlayerObject::setOpacity(unsigned char)
defit __ZN12PlayerObject10setOpacityEh, 0x22d4f0

; PlayerObject::setPosition(cocos2d::CCPoint const&)
defit __ZN12PlayerObject11setPositionERKN7cocos2d7CCPointE, 0x22c8b0

; PlayerObject::setRotation(float)
defit __ZN12PlayerObject11setRotationEf, 0x22e6e0

; PlayerObject::setScale(float)
defit __ZN12PlayerObject8setScaleEf, 0x22e870

; PlayerObject::setScaleX(float)
defit __ZN12PlayerObject9setScaleXEf, 0x22e7f0

; PlayerObject::setScaleY(float)
defit __ZN12PlayerObject9setScaleYEf, 0x22e830

; PlayerObject::setSecondColor(cocos2d::_ccColor3B const&)
defit __ZN12PlayerObject14setSecondColorERKN7cocos2d10_ccColor3BE, 0x219610

; PlayerObject::setVisible(bool)
defit __ZN12PlayerObject10setVisibleEb, 0x22e8b0

; PlayerObject::setupStreak()
defit __ZN12PlayerObject11setupStreakEv, 0x218720

; PlayerObject::spawnCircle()
defit __ZN12PlayerObject11spawnCircleEv, 0x225480

; PlayerObject::spawnCircle2()
defit __ZN12PlayerObject12spawnCircle2Ev, 0x2252a0

; PlayerObject::spawnDualCircle()
defit __ZN12PlayerObject15spawnDualCircleEv, 0x2255c0

; PlayerObject::spawnFromPlayer(PlayerObject*)
defit __ZN12PlayerObject15spawnFromPlayerEPS_, 0x22dde0

; PlayerObject::spawnPortalCircle(cocos2d::_ccColor3B, float)
defit __ZN12PlayerObject17spawnPortalCircleEN7cocos2d10_ccColor3BEf, 0x225350

; PlayerObject::spawnScaleCircle()
defit __ZN12PlayerObject16spawnScaleCircleEv, 0x2251b0

; PlayerObject::specialGroundHit()
defit __ZN12PlayerObject16specialGroundHitEv, 0x22dbf0

; PlayerObject::speedDown()
defit __ZN12PlayerObject9speedDownEv, 0x22e970

; PlayerObject::speedUp()
defit __ZN12PlayerObject7speedUpEv, 0x22e950

; PlayerObject::spiderTestJump(bool)
defit __ZN12PlayerObject14spiderTestJumpEb, 0x21b160

; PlayerObject::startDashing(GameObject*)
defit __ZN12PlayerObject12startDashingEP10GameObject, 0x221d70

; PlayerObject::stopBurstEffect()
defit __ZN12PlayerObject15stopBurstEffectEv, 0x22c680

; PlayerObject::stopDashing()
defit __ZN12PlayerObject11stopDashingEv, 0x222990

; PlayerObject::stopRotation(bool)
defit __ZN12PlayerObject12stopRotationEb, 0x21c830

; PlayerObject::storeCollision(bool, int)
defit __ZN12PlayerObject14storeCollisionEbi, 0x21cc60

; PlayerObject::switchedToMode(GameObjectType)
defit __ZN12PlayerObject14switchedToModeE14GameObjectType, 0x22b9a0

; PlayerObject::testForMoving(float, GameObject*)
defit __ZN12PlayerObject13testForMovingEfP10GameObject, 0x21eb70

; PlayerObject::toggleBirdMode(bool)
defit __ZN12PlayerObject14toggleBirdModeEb, 0x224070

; PlayerObject::toggleDartMode(bool)
defit __ZN12PlayerObject14toggleDartModeEb, 0x2243f0

; PlayerObject::toggleFlyMode(bool)
defit __ZN12PlayerObject13toggleFlyModeEb, 0x223820

; PlayerObject::toggleGhostEffect(GhostType)
defit __ZN12PlayerObject17toggleGhostEffectE9GhostType, 0x225000

; PlayerObject::togglePlayerScale(bool)
defit __ZN12PlayerObject17togglePlayerScaleEb, 0x224bd0

; PlayerObject::toggleRobotMode(bool)
defit __ZN12PlayerObject15toggleRobotModeEb, 0x223c70

; PlayerObject::toggleRollMode(bool)
defit __ZN12PlayerObject14toggleRollModeEb, 0x223b20

; PlayerObject::toggleSpiderMode(bool)
defit __ZN12PlayerObject16toggleSpiderModeEb, 0x224830

; PlayerObject::toggleVisibility(bool)
defit __ZN12PlayerObject16toggleVisibilityEb, 0x21abf0

; PlayerObject::touchedObject(GameObject*)
defit __ZN12PlayerObject13touchedObjectEP10GameObject, 0x22e660

; PlayerObject::tryPlaceCheckpoint()
defit __ZN12PlayerObject18tryPlaceCheckpointEv, 0x21a950

; PlayerObject::update(float)
defit __ZN12PlayerObject6updateEf, 0x218bf0

; PlayerObject::updateCheckpointMode(bool)
defit __ZN12PlayerObject20updateCheckpointModeEb, 0x218980

; PlayerObject::updateCheckpointTest()
defit __ZN12PlayerObject20updateCheckpointTestEv, 0x21a890

; PlayerObject::updateCollide(bool, int)
defit __ZN12PlayerObject13updateCollideEbi, 0x220f10

; PlayerObject::updateCollideBottom(float, int)
defit __ZN12PlayerObject19updateCollideBottomEfi, 0x221790

; PlayerObject::updateCollideTop(float, int)
defit __ZN12PlayerObject16updateCollideTopEfi, 0x221c20

; PlayerObject::updateDashAnimation()
defit __ZN12PlayerObject19updateDashAnimationEv, 0x21a570

; PlayerObject::updateDashArt()
defit __ZN12PlayerObject13updateDashArtEv, 0x222520

; PlayerObject::updateGlowColor()
defit __ZN12PlayerObject15updateGlowColorEv, 0x22cf10

; PlayerObject::updateJump(float)
defit __ZN12PlayerObject10updateJumpEf, 0x219680

; PlayerObject::updateJumpVariables()
defit __ZN12PlayerObject19updateJumpVariablesEv, 0x21a740

; PlayerObject::updatePlayerBirdFrame(int)
defit __ZN12PlayerObject21updatePlayerBirdFrameEi, 0x22bfe0

; PlayerObject::updatePlayerDartFrame(int)
defit __ZN12PlayerObject21updatePlayerDartFrameEi, 0x22c260

; PlayerObject::updatePlayerFrame(int)
defit __ZN12PlayerObject17updatePlayerFrameEi, 0x22c470

; PlayerObject::updatePlayerGlow()
defit __ZN12PlayerObject16updatePlayerGlowEv, 0x22bc50

; PlayerObject::updatePlayerRobotFrame(int)
defit __ZN12PlayerObject22updatePlayerRobotFrameEi, 0x22d620

; PlayerObject::updatePlayerRollFrame(int)
defit __ZN12PlayerObject21updatePlayerRollFrameEi, 0x22c6a0

; PlayerObject::updatePlayerScale()
defit __ZN12PlayerObject17updatePlayerScaleEv, 0x22b8b0

; PlayerObject::updatePlayerShipFrame(int)
defit __ZN12PlayerObject21updatePlayerShipFrameEi, 0x22ba40

; PlayerObject::updatePlayerSpiderFrame(int)
defit __ZN12PlayerObject23updatePlayerSpiderFrameEi, 0x22d650

; PlayerObject::updatePlayerSpriteExtra(std::string)
defit __ZN12PlayerObject23updatePlayerSpriteExtraESs, 0x218440

; PlayerObject::updateRobotAnimationSpeed()
defit __ZN12PlayerObject25updateRobotAnimationSpeedEv, 0x22df40

; PlayerObject::updateRotation(float, float)
defit __ZN12PlayerObject14updateRotationEff, 0x221230

; PlayerObject::updateRotation(float)
defit __ZN12PlayerObject14updateRotationEf, 0x2214b0

; PlayerObject::updateShipRotation(float)
defit __ZN12PlayerObject18updateShipRotationEf, 0x221310

; PlayerObject::updateShipSpriteExtra(std::string)
defit __ZN12PlayerObject21updateShipSpriteExtraESs, 0x218510

; PlayerObject::updateSlopeRotation(float)
defit __ZN12PlayerObject19updateSlopeRotationEf, 0x221030

; PlayerObject::updateSlopeYVelocity(float)
defit __ZN12PlayerObject20updateSlopeYVelocityEf, 0x22e920

; PlayerObject::updateSpecial(float)
defit __ZN12PlayerObject13updateSpecialEf, 0x21a790

; PlayerObject::updateStateVariables()
defit __ZN12PlayerObject20updateStateVariablesEv, 0x21a770

; PlayerObject::updateTimeMod(float)
defit __ZN12PlayerObject13updateTimeModEf, 0x2185e0

; PlayerObject::usingWallLimitedMode()
defit __ZN12PlayerObject20usingWallLimitedModeEv, 0x22df00

; PlayerObject::yStartDown()
defit __ZN12PlayerObject10yStartDownEv, 0x22e9b0

; PlayerObject::yStartUp()
defit __ZN12PlayerObject8yStartUpEv, 0x22e990

;([undefined * * param_1@RDI:8])
; PlayerObject::~PlayerObject()
;defit __ZN12PlayerObjectD0Ev, 0x217100
; PlayerObject::~PlayerObject()
;defit __ZN12PlayerObjectD1Ev, 0x217100
; PlayerObject::~PlayerObject()
;defit __ZN12PlayerObjectD2Ev, 0x217100

;([undefined * * param_1@RDI:8])
; PlayerObject::~PlayerObject()
;defit __ZN12PlayerObjectD0Ev, 0x217220
; PlayerObject::~PlayerObject()
;defit __ZN12PlayerObjectD1Ev, 0x217220
; PlayerObject::~PlayerObject()
;defit __ZN12PlayerObjectD2Ev, 0x217220

;([undefined * * param_1@RDI:8])
; PlayerObject::~PlayerObject()
;defit __ZN12PlayerObjectD0Ev, 0x217230
; PlayerObject::~PlayerObject()
;defit __ZN12PlayerObjectD1Ev, 0x217230
; PlayerObject::~PlayerObject()
;defit __ZN12PlayerObjectD2Ev, 0x217230

; PulseEffectAction::createFromString(std::string)
defit __ZN17PulseEffectAction16createFromStringESs, 0x179e90

; PulseEffectAction::getSaveString()
defit __ZN17PulseEffectAction13getSaveStringEv, 0x17a850

; RetryLevelLayer::create()
defit __ZN15RetryLevelLayer6createEv, 0x28dd60

; SetIDLayer::create(GameObject*)
defit __ZN10SetIDLayer6createEP10GameObject, 0x168f20

; SetTargetIDLayer::create(EffectGameObject*, cocos2d::CCArray*, std::string)
defit __ZN16SetTargetIDLayer6createEP16EffectGameObjectPN7cocos2d7CCArrayESs, 0x159d20

; SetupAnimationPopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN19SetupAnimationPopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x208b70

; SetupCollisionTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN26SetupCollisionTriggerPopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x1d6120

; SetupCountTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN22SetupCountTriggerPopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x15c6c0

; SetupInstantCountPopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN22SetupInstantCountPopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x352c10

; SetupOpacityPopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN17SetupOpacityPopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x32b70

; SetupPickupTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN23SetupPickupTriggerPopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x35e70

; SetupPulsePopup::colorValueChanged(cocos2d::_ccColor3B)
defit __ZN15SetupPulsePopup17colorValueChangedEN7cocos2d10_ccColor3BE, 0x1ec680

; SetupPulsePopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN15SetupPulsePopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x1e6d40

; SetupPulsePopup::init(EffectGameObject*, cocos2d::CCArray*)
defit __ZN15SetupPulsePopup4initEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x1e7010

; SetupPulsePopup::onSelectPulseMode(cocos2d::CCObject*)
defit __ZN15SetupPulsePopup17onSelectPulseModeEPN7cocos2d8CCObjectE, 0x1eb020

; SetupPulsePopup::updateFadeOutLabel(bool)
defit __ZN15SetupPulsePopup18updateFadeOutLabelEb, 0x1eba20

; SetupPulsePopup::updateHoldLabel(bool)
defit __ZN15SetupPulsePopup15updateHoldLabelEb, 0x1eb8d0

;([undefined * * param_1@RDI:8])
; SetupPulsePopup::~SetupPulsePopup()
;defit __ZN15SetupPulsePopupD0Ev, 0x1e6b40
; SetupPulsePopup::~SetupPulsePopup()
;defit __ZN15SetupPulsePopupD1Ev, 0x1e6b40
; SetupPulsePopup::~SetupPulsePopup()
;defit __ZN15SetupPulsePopupD2Ev, 0x1e6b40

; SetupShakePopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN15SetupShakePopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x3adc00

; SetupSpawnPopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN15SetupSpawnPopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x139790

; SetupTouchTogglePopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN21SetupTouchTogglePopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x1576a0

; SimplePlayer::create(int)
defit __ZN12SimplePlayer6createEi, 0x1b6140

; SimplePlayer::setSecondColor(cocos2d::_ccColor3B const&)
defit __ZN12SimplePlayer14setSecondColorERKN7cocos2d10_ccColor3BE, 0x1bace0

; SimplePlayer::updateColors()
defit __ZN12SimplePlayer12updateColorsEv, 0x1ba1f0

; SimplePlayer::updatePlayerFrame(int, IconType)
defit __ZN12SimplePlayer17updatePlayerFrameEi8IconType, 0x1b62f0

; SliderThumb::getValue()
defit __ZN11SliderThumb8getValueEv, 0x18ce80

; SpawnTriggerAction::createFromString(std::string)
defit __ZN18SpawnTriggerAction16createFromStringESs, 0x17bf50

; SpeedObject::create(GameObject*, int, float)
defit __ZN11SpeedObject6createEP10GameObjectif, 0x77450

; SpeedObject::init(GameObject*, int, float)
defit __ZN11SpeedObject4initEP10GameObjectif, 0x77400

; TeleportPortalObject::create(char const*)
defit __ZN20TeleportPortalObject6createEPKc, 0xdaa50

; TeleportPortalObject::getTeleportXOff(cocos2d::CCNode*)
defit __ZN20TeleportPortalObject15getTeleportXOffEPN7cocos2d6CCNodeE, 0xdac20

; TextInputDelegate::allowTextInput(CCTextInputNode*)
defit __ZN17TextInputDelegate14allowTextInputEP15CCTextInputNode, 0x6210

; TextInputDelegate::textInputOpened(CCTextInputNode*)
defit __ZN17TextInputDelegate15textInputOpenedEP15CCTextInputNode, 0x6200

; ToggleTriggerAction::createFromString(std::string)
defit __ZN19ToggleTriggerAction16createFromStringESs, 0x1765e0

; TouchToggleAction::createFromString(std::string)
defit __ZN17TouchToggleAction16createFromStringESs, 0x177e10

; UILayer::create()
defit __ZN7UILayer6createEv, 0x27fd10

; UILayer::disableMenu()
defit __ZN7UILayer11disableMenuEv, 0x280960

; UILayer::enableMenu()
defit __ZN7UILayer10enableMenuEv, 0x280940

; UILayer::pCommand(cocos2d::CCNode*)
defit __ZN7UILayer8pCommandEPN7cocos2d6CCNodeE, 0x280830

; UILayer::toggleCheckpointsMenu(bool)
defit __ZN7UILayer21toggleCheckpointsMenuEb, 0x280430

; cocos2d::CCActionTween::create(float, char const*, float, float)
defit __ZN7cocos2d13CCActionTween6createEfPKcff, 0x447590

; cocos2d::CCAffineTransformMakeIdentity()
defit __ZN7cocos2d29CCAffineTransformMakeIdentityEv, 0x10ccc0

; cocos2d::CCAnimate::create(cocos2d::CCAnimation*)
defit __ZN7cocos2d9CCAnimate6createEPNS_11CCAnimationE, 0x1f8fc0

; cocos2d::CCAnimation::createWithSpriteFrames(cocos2d::CCArray*, float)
defit __ZN7cocos2d11CCAnimation22createWithSpriteFramesEPNS_7CCArrayEf, 0x140df0

; cocos2d::CCArray::addObject(cocos2d::CCObject*)
defit __ZN7cocos2d7CCArray9addObjectEPNS_8CCObjectE, 0x419f90

; cocos2d::CCArray::addObjectNew(cocos2d::CCObject*)
defit __ZN7cocos2d7CCArray12addObjectNewEPNS_8CCObjectE, 0x41a450

; cocos2d::CCArray::addObjectsFromArray(cocos2d::CCArray*)
defit __ZN7cocos2d7CCArray19addObjectsFromArrayEPS0_, 0x41a2d0

; cocos2d::CCArray::containsObject(cocos2d::CCObject*) const
defit __ZNK7cocos2d7CCArray14containsObjectEPNS_8CCObjectE, 0x41a3e0

; cocos2d::CCArray::count() const
defit __ZNK7cocos2d7CCArray5countEv, 0x41a2f0

; cocos2d::CCArray::create()
defit __ZN7cocos2d7CCArray6createEv, 0x419cb0

; cocos2d::CCArray::create(cocos2d::CCObject*, ...)
defit __ZN7cocos2d7CCArray6createEPNS_8CCObjectEz, 0x419fc0

; cocos2d::CCArray::createWithObject(cocos2d::CCObject*)
defit __ZN7cocos2d7CCArray16createWithObjectEPNS_8CCObjectE, 0x419d50

; cocos2d::CCArray::fastRemoveObject(cocos2d::CCObject*)
defit __ZN7cocos2d7CCArray16fastRemoveObjectEPNS_8CCObjectE, 0x41a520

; cocos2d::CCArray::fastRemoveObjectAtIndex(unsigned int)
defit __ZN7cocos2d7CCArray23fastRemoveObjectAtIndexEj, 0x41a500

; cocos2d::CCArray::fastRemoveObjectAtIndexNew(unsigned int)
defit __ZN7cocos2d7CCArray26fastRemoveObjectAtIndexNewEj, 0x41a510

; cocos2d::CCArray::lastObject()
defit __ZN7cocos2d7CCArray10lastObjectEv, 0x41a360

; cocos2d::CCArray::objectAtIndex(unsigned int)
defit __ZN7cocos2d7CCArray13objectAtIndexEj, 0x41a340

; cocos2d::CCArray::removeAllObjects()
defit __ZN7cocos2d7CCArray16removeAllObjectsEv, 0x41a4f0

; cocos2d::CCArray::removeLastObject(bool)
defit __ZN7cocos2d7CCArray16removeLastObjectEb, 0x41a470

; cocos2d::CCArray::removeObject(cocos2d::CCObject*, bool)
defit __ZN7cocos2d7CCArray12removeObjectEPNS_8CCObjectEb, 0x41a490

; cocos2d::CCArray::removeObjectAtIndex(unsigned int, bool)
defit __ZN7cocos2d7CCArray19removeObjectAtIndexEjb, 0x41a4b0

; cocos2d::CCArray::stringAtIndex(unsigned int)
defit __ZN7cocos2d7CCArray13stringAtIndexEj, 0x41a320

; cocos2d::CCBezierTo::create(float, cocos2d::_ccBezierConfig const&)
defit __ZN7cocos2d10CCBezierTo6createEfRKNS_15_ccBezierConfigE, 0x1f6c10

; cocos2d::CCCallFunc::create(int)
defit __ZN7cocos2d10CCCallFunc6createEi, 0x454d90

; cocos2d::CCCopying::copyWithZone(cocos2d::CCZone*)
defit __ZN7cocos2d9CCCopying12copyWithZoneEPNS_6CCZoneE, 0x250c90

; cocos2d::CCDelayTime::create(float)
defit __ZN7cocos2d11CCDelayTime6createEf, 0x1f4380

; cocos2d::CCDictionary::allKeys()
defit __ZN7cocos2d12CCDictionary7allKeysEv, 0x190450

; cocos2d::CCDictionary::count()
defit __ZN7cocos2d12CCDictionary5countEv, 0x190430

; cocos2d::CCDictionary::create()
defit __ZN7cocos2d12CCDictionary6createEv, 0x192650

; cocos2d::CCDictionary::objectForKey(std::string const&)
defit __ZN7cocos2d12CCDictionary12objectForKeyERKSs, 0x190870

; cocos2d::CCDictionary::objectForKey(long)
defit __ZN7cocos2d12CCDictionary12objectForKeyEl, 0x190bb0

; cocos2d::CCDictionary::removeAllObjects()
defit __ZN7cocos2d12CCDictionary16removeAllObjectsEv, 0x190220

; cocos2d::CCDictionary::removeObjectForKey(long)
defit __ZN7cocos2d12CCDictionary18removeObjectForKeyEl, 0x1921d0

; cocos2d::CCDictionary::setObject(cocos2d::CCObject*, std::string const&)
defit __ZN7cocos2d12CCDictionary9setObjectEPNS_8CCObjectERKSs, 0x190dc0

; cocos2d::CCDictionary::setObject(cocos2d::CCObject*, long)
defit __ZN7cocos2d12CCDictionary9setObjectEPNS_8CCObjectEl, 0x191790

; cocos2d::CCDictionary::valueForKey(std::string const&)
defit __ZN7cocos2d12CCDictionary11valueForKeyERKSs, 0x1907a0

; cocos2d::CCDirector::getScreenBottom()
defit __ZN7cocos2d10CCDirector15getScreenBottomEv, 0x24b210

; cocos2d::CCDirector::getScreenLeft()
defit __ZN7cocos2d10CCDirector13getScreenLeftEv, 0x24b220

; cocos2d::CCDirector::getScreenRight()
defit __ZN7cocos2d10CCDirector14getScreenRightEv, 0x24b230

; cocos2d::CCDirector::getScreenScaleFactorH()
defit __ZN7cocos2d10CCDirector21getScreenScaleFactorHEv, 0x24b1e0

; cocos2d::CCDirector::getScreenScaleFactorW()
defit __ZN7cocos2d10CCDirector21getScreenScaleFactorWEv, 0x24b1f0

; cocos2d::CCDirector::getScreenTop()
defit __ZN7cocos2d10CCDirector12getScreenTopEv, 0x24b200

; cocos2d::CCDirector::getWinSize()
defit __ZN7cocos2d10CCDirector10getWinSizeEv, 0x24a0f0

; cocos2d::CCDirector::resetSmoothFixCounter()
defit __ZN7cocos2d10CCDirector21resetSmoothFixCounterEv, 0x249bc0

; cocos2d::CCDirector::sharedDirector()
defit __ZN7cocos2d10CCDirector14sharedDirectorEv, 0x248cb0

; cocos2d::CCDrawNode::create()
defit __ZN7cocos2d10CCDrawNode6createEv, 0x378d00

; cocos2d::CCDrawNode::getBlendFunc() const
defit __ZNK7cocos2d10CCDrawNode12getBlendFuncEv, 0x379ea0

; cocos2d::CCDrawNode::init()
defit __ZN7cocos2d10CCDrawNode4initEv, 0x378e00

; cocos2d::CCDrawNode::setBlendFunc(cocos2d::_ccBlendFunc const&)
defit __ZN7cocos2d10CCDrawNode12setBlendFuncERKNS_12_ccBlendFuncE, 0x379eb0

; cocos2d::CCEaseElasticOut::create(cocos2d::CCActionInterval*, float)
defit __ZN7cocos2d16CCEaseElasticOut6createEPNS_16CCActionIntervalEf, 0x2a3080

; cocos2d::CCEaseIn::create(cocos2d::CCActionInterval*, float)
defit __ZN7cocos2d8CCEaseIn6createEPNS_16CCActionIntervalEf, 0x2a1960

; cocos2d::CCEaseInOut::create(cocos2d::CCActionInterval*, float)
defit __ZN7cocos2d11CCEaseInOut6createEPNS_16CCActionIntervalEf, 0x2a1d80

; cocos2d::CCEaseOut::create(cocos2d::CCActionInterval*, float)
defit __ZN7cocos2d9CCEaseOut6createEPNS_16CCActionIntervalEf, 0x2a1b70

; cocos2d::CCFadeOut::create(float)
defit __ZN7cocos2d9CCFadeOut6createEf, 0x1f7d80

; cocos2d::CCFadeTo::create(float, unsigned char)
defit __ZN7cocos2d8CCFadeTo6createEfh, 0x1f7ff0

; cocos2d::CCHide::create()
defit __ZN7cocos2d6CCHide6createEv, 0x4543e0

; cocos2d::CCKeyboardDelegate::keyUp(cocos2d::enumKeyCodes)
defit __ZN7cocos2d18CCKeyboardDelegate5keyUpENS_12enumKeyCodesE, 0x61a0

; cocos2d::CCLabelBMFont::create(char const*, char const*)
defit __ZN7cocos2d13CCLabelBMFont6createEPKcS2_, 0x347660

; cocos2d::CCLabelBMFont::limitLabelWidth(float, float, float)
defit __ZN7cocos2d13CCLabelBMFont15limitLabelWidthEfff, 0x34a6e0

;([undefined * * param_1@RDI:8])
; cocos2d::CCLayer::CCLayer()
;defit __ZN7cocos2d7CCLayerC1Ev, 0x2725b0
; cocos2d::CCLayer::CCLayer()
;defit __ZN7cocos2d7CCLayerC2Ev, 0x2725b0

; cocos2d::CCLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer12ccTouchBeganEPNS_7CCTouchEPNS_7CCEventE, 0x2734d0

; cocos2d::CCLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer12ccTouchBeganEPNS_7CCTouchEPNS_7CCEventE, 0x273510

; cocos2d::CCLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer16ccTouchCancelledEPNS_7CCTouchEPNS_7CCEventE, 0x273650

; cocos2d::CCLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer16ccTouchCancelledEPNS_7CCTouchEPNS_7CCEventE, 0x273690

; cocos2d::CCLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer12ccTouchEndedEPNS_7CCTouchEPNS_7CCEventE, 0x2735d0

; cocos2d::CCLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer12ccTouchEndedEPNS_7CCTouchEPNS_7CCEventE, 0x273610

; cocos2d::CCLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer12ccTouchMovedEPNS_7CCTouchEPNS_7CCEventE, 0x273550

; cocos2d::CCLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer12ccTouchMovedEPNS_7CCTouchEPNS_7CCEventE, 0x273590

; cocos2d::CCLayer::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer14ccTouchesBeganEPNS_5CCSetEPNS_7CCEventE, 0x2736d0

; cocos2d::CCLayer::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer14ccTouchesBeganEPNS_5CCSetEPNS_7CCEventE, 0x273710

; cocos2d::CCLayer::ccTouchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer18ccTouchesCancelledEPNS_5CCSetEPNS_7CCEventE, 0x273850

; cocos2d::CCLayer::ccTouchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer18ccTouchesCancelledEPNS_5CCSetEPNS_7CCEventE, 0x273890

; cocos2d::CCLayer::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer14ccTouchesEndedEPNS_5CCSetEPNS_7CCEventE, 0x2737d0

; cocos2d::CCLayer::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer14ccTouchesEndedEPNS_5CCSetEPNS_7CCEventE, 0x273810

; cocos2d::CCLayer::ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer14ccTouchesMovedEPNS_5CCSetEPNS_7CCEventE, 0x273750

; cocos2d::CCLayer::ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer14ccTouchesMovedEPNS_5CCSetEPNS_7CCEventE, 0x273790

; cocos2d::CCLayer::create()
defit __ZN7cocos2d7CCLayer6createEv, 0x272a00

; cocos2d::CCLayer::didAccelerate(cocos2d::CCAcceleration*)
defit __ZN7cocos2d7CCLayer13didAccelerateEPNS_14CCAccelerationE, 0x272ea0

; cocos2d::CCLayer::didAccelerate(cocos2d::CCAcceleration*)
defit __ZN7cocos2d7CCLayer13didAccelerateEPNS_14CCAccelerationE, 0x272ee0

; cocos2d::CCLayer::getTouchMode()
defit __ZN7cocos2d7CCLayer12getTouchModeEv, 0x272e10

; cocos2d::CCLayer::getTouchPriority()
defit __ZN7cocos2d7CCLayer16getTouchPriorityEv, 0x272e00

; cocos2d::CCLayer::init()
defit __ZN7cocos2d7CCLayer4initEv, 0x2729a0

; cocos2d::CCLayer::isAccelerometerEnabled()
defit __ZN7cocos2d7CCLayer22isAccelerometerEnabledEv, 0x272e20

; cocos2d::CCLayer::isKeyboardEnabled()
defit __ZN7cocos2d7CCLayer17isKeyboardEnabledEv, 0x273010

; cocos2d::CCLayer::isKeypadEnabled()
defit __ZN7cocos2d7CCLayer15isKeypadEnabledEv, 0x272f70

; cocos2d::CCLayer::isMouseEnabled()
defit __ZN7cocos2d7CCLayer14isMouseEnabledEv, 0x273090

; cocos2d::CCLayer::isTouchEnabled()
defit __ZN7cocos2d7CCLayer14isTouchEnabledEv, 0x272ce0

; cocos2d::CCLayer::keyBackClicked()
defit __ZN7cocos2d7CCLayer14keyBackClickedEv, 0x273160

; cocos2d::CCLayer::keyBackClicked()
defit __ZN7cocos2d7CCLayer14keyBackClickedEv, 0x2731b0

; cocos2d::CCLayer::keyDown(cocos2d::enumKeyCodes)
defit __ZN7cocos2d7CCLayer7keyDownENS_12enumKeyCodesE, 0x273280

; cocos2d::CCLayer::keyDown(cocos2d::enumKeyCodes)
defit __ZN7cocos2d7CCLayer7keyDownENS_12enumKeyCodesE, 0x2732c0

; cocos2d::CCLayer::keyMenuClicked()
defit __ZN7cocos2d7CCLayer14keyMenuClickedEv, 0x273200

; cocos2d::CCLayer::keyMenuClicked()
defit __ZN7cocos2d7CCLayer14keyMenuClickedEv, 0x273240

; cocos2d::CCLayer::onEnter()
defit __ZN7cocos2d7CCLayer7onEnterEv, 0x273300

; cocos2d::CCLayer::onEnterTransitionDidFinish()
defit __ZN7cocos2d7CCLayer26onEnterTransitionDidFinishEv, 0x273490

; cocos2d::CCLayer::onExit()
defit __ZN7cocos2d7CCLayer6onExitEv, 0x2733c0

; cocos2d::CCLayer::registerScriptTouchHandler(int, bool, int, bool)
defit __ZN7cocos2d7CCLayer26registerScriptTouchHandlerEibib, 0x272bd0

; cocos2d::CCLayer::registerWithTouchDispatcher()
defit __ZN7cocos2d7CCLayer27registerWithTouchDispatcherEv, 0x272b40

; cocos2d::CCLayer::setAccelerometerEnabled(bool)
defit __ZN7cocos2d7CCLayer23setAccelerometerEnabledEb, 0x272e30

; cocos2d::CCLayer::setAccelerometerInterval(double)
defit __ZN7cocos2d7CCLayer24setAccelerometerIntervalEd, 0x272e70

; cocos2d::CCLayer::setKeyboardEnabled(bool)
defit __ZN7cocos2d7CCLayer18setKeyboardEnabledEb, 0x273020

; cocos2d::CCLayer::setKeypadEnabled(bool)
defit __ZN7cocos2d7CCLayer16setKeypadEnabledEb, 0x272f80

; cocos2d::CCLayer::setMouseEnabled(bool)
defit __ZN7cocos2d7CCLayer15setMouseEnabledEb, 0x2730a0

; cocos2d::CCLayer::setTouchEnabled(bool)
defit __ZN7cocos2d7CCLayer15setTouchEnabledEb, 0x272cf0

; cocos2d::CCLayer::setTouchMode(cocos2d::ccTouchesMode)
defit __ZN7cocos2d7CCLayer12setTouchModeENS_13ccTouchesModeE, 0x272d60

; cocos2d::CCLayer::setTouchPriority(int)
defit __ZN7cocos2d7CCLayer16setTouchPriorityEi, 0x272db0

; cocos2d::CCLayer::unregisterScriptTouchHandler()
defit __ZN7cocos2d7CCLayer28unregisterScriptTouchHandlerEv, 0x272c30

;([undefined * * param_1@RDI:8])
; cocos2d::CCLayerColor::CCLayerColor()
;defit __ZN7cocos2d12CCLayerColorC1Ev, 0x274270
; cocos2d::CCLayerColor::CCLayerColor()
;defit __ZN7cocos2d12CCLayerColorC2Ev, 0x274270

; cocos2d::CCLayerColor::draw()
defit __ZN7cocos2d12CCLayerColor4drawEv, 0x274b50

; cocos2d::CCLayerColor::getBlendFunc()
defit __ZN7cocos2d12CCLayerColor12getBlendFuncEv, 0x274480

; cocos2d::CCLayerColor::getBlendFunc()
defit __ZN7cocos2d12CCLayerColor12getBlendFuncEv, 0x274490

; cocos2d::CCLayerColor::init()
defit __ZN7cocos2d12CCLayerColor4initEv, 0x274800

; cocos2d::CCLayerColor::initWithColor(cocos2d::_ccColor4B const&, float, float)
defit __ZN7cocos2d12CCLayerColor13initWithColorERKNS_10_ccColor4BEff, 0x274850

;([long * param_1@RDI:8], [undefined8 param_2@RSI:8])
; cocos2d::CCLayerColor::initWithColor(cocos2d::_ccColor4B const&)
defit __ZN7cocos2d12CCLayerColor13initWithColorERKNS_10_ccColor4BE, 0x2749a0

; cocos2d::CCLayerColor::setBlendFunc(cocos2d::_ccBlendFunc)
defit __ZN7cocos2d12CCLayerColor12setBlendFuncENS_12_ccBlendFuncE, 0x2744a0

; cocos2d::CCLayerColor::setBlendFunc(cocos2d::_ccBlendFunc)
defit __ZN7cocos2d12CCLayerColor12setBlendFuncENS_12_ccBlendFuncE, 0x2744b0

; cocos2d::CCLayerColor::setColor(cocos2d::_ccColor3B const&)
defit __ZN7cocos2d12CCLayerColor8setColorERKNS_10_ccColor3BE, 0x274c20

; cocos2d::CCLayerColor::setColor(cocos2d::_ccColor3B const&)
defit __ZN7cocos2d12CCLayerColor8setColorERKNS_10_ccColor3BE, 0x274cf0

; cocos2d::CCLayerColor::setContentSize(cocos2d::CCSize const&)
defit __ZN7cocos2d12CCLayerColor14setContentSizeERKNS_6CCSizeE, 0x2749f0

; cocos2d::CCLayerColor::setOpacity(unsigned char)
defit __ZN7cocos2d12CCLayerColor10setOpacityEh, 0x274db0

; cocos2d::CCLayerColor::setOpacity(unsigned char)
defit __ZN7cocos2d12CCLayerColor10setOpacityEh, 0x274e50

; cocos2d::CCLayerColor::updateColor()
defit __ZN7cocos2d12CCLayerColor11updateColorEv, 0x274ae0

;([undefined * * param_1@RDI:8])
; cocos2d::CCLayerColor::~CCLayerColor()
;defit __ZN7cocos2d12CCLayerColorD0Ev, 0x2743d0
; cocos2d::CCLayerColor::~CCLayerColor()
;defit __ZN7cocos2d12CCLayerColorD1Ev, 0x2743d0
; cocos2d::CCLayerColor::~CCLayerColor()
;defit __ZN7cocos2d12CCLayerColorD2Ev, 0x2743d0

; cocos2d::CCLayerRGBA::getColor()
defit __ZN7cocos2d11CCLayerRGBA8getColorEv, 0x273d60

; cocos2d::CCLayerRGBA::getColor()
defit __ZN7cocos2d11CCLayerRGBA8getColorEv, 0x273d70

; cocos2d::CCLayerRGBA::getDisplayedColor()
defit __ZN7cocos2d11CCLayerRGBA17getDisplayedColorEv, 0x273d80

; cocos2d::CCLayerRGBA::getDisplayedColor()
defit __ZN7cocos2d11CCLayerRGBA17getDisplayedColorEv, 0x273d90

; cocos2d::CCLayerRGBA::getDisplayedOpacity()
defit __ZN7cocos2d11CCLayerRGBA19getDisplayedOpacityEv, 0x273c00

; cocos2d::CCLayerRGBA::getDisplayedOpacity()
defit __ZN7cocos2d11CCLayerRGBA19getDisplayedOpacityEv, 0x273c10

; cocos2d::CCLayerRGBA::getOpacity()
defit __ZN7cocos2d11CCLayerRGBA10getOpacityEv, 0x273be0

; cocos2d::CCLayerRGBA::getOpacity()
defit __ZN7cocos2d11CCLayerRGBA10getOpacityEv, 0x273bf0

; cocos2d::CCLayerRGBA::isCascadeColorEnabled()
defit __ZN7cocos2d11CCLayerRGBA21isCascadeColorEnabledEv, 0x274230

; cocos2d::CCLayerRGBA::isCascadeColorEnabled()
defit __ZN7cocos2d11CCLayerRGBA21isCascadeColorEnabledEv, 0x274240

; cocos2d::CCLayerRGBA::isCascadeOpacityEnabled()
defit __ZN7cocos2d11CCLayerRGBA23isCascadeOpacityEnabledEv, 0x2741f0

; cocos2d::CCLayerRGBA::isCascadeOpacityEnabled()
defit __ZN7cocos2d11CCLayerRGBA23isCascadeOpacityEnabledEv, 0x274200

; cocos2d::CCLayerRGBA::isOpacityModifyRGB()
defit __ZN7cocos2d11CCLayerRGBA18isOpacityModifyRGBEv, 0x6190

; cocos2d::CCLayerRGBA::isOpacityModifyRGB()
defit __ZN7cocos2d11CCLayerRGBA18isOpacityModifyRGBEv, 0x61f0

; cocos2d::CCLayerRGBA::setCascadeColorEnabled(bool)
defit __ZN7cocos2d11CCLayerRGBA22setCascadeColorEnabledEb, 0x274250

; cocos2d::CCLayerRGBA::setCascadeColorEnabled(bool)
defit __ZN7cocos2d11CCLayerRGBA22setCascadeColorEnabledEb, 0x274260

; cocos2d::CCLayerRGBA::setCascadeOpacityEnabled(bool)
defit __ZN7cocos2d11CCLayerRGBA24setCascadeOpacityEnabledEb, 0x274210

; cocos2d::CCLayerRGBA::setCascadeOpacityEnabled(bool)
defit __ZN7cocos2d11CCLayerRGBA24setCascadeOpacityEnabledEb, 0x274220

; cocos2d::CCLayerRGBA::setOpacityModifyRGB(bool)
defit __ZN7cocos2d11CCLayerRGBA19setOpacityModifyRGBEb, 0x6180

; cocos2d::CCLayerRGBA::setOpacityModifyRGB(bool)
defit __ZN7cocos2d11CCLayerRGBA19setOpacityModifyRGBEb, 0x61e0

; cocos2d::CCLayerRGBA::updateDisplayedColor(cocos2d::_ccColor3B const&)
defit __ZN7cocos2d11CCLayerRGBA20updateDisplayedColorERKNS_10_ccColor3BE, 0x2740b0

; cocos2d::CCLayerRGBA::updateDisplayedColor(cocos2d::_ccColor3B const&)
defit __ZN7cocos2d11CCLayerRGBA20updateDisplayedColorERKNS_10_ccColor3BE, 0x2741d0

; cocos2d::CCLayerRGBA::updateDisplayedOpacity(unsigned char)
defit __ZN7cocos2d11CCLayerRGBA22updateDisplayedOpacityEh, 0x273f20

; cocos2d::CCLayerRGBA::updateDisplayedOpacity(unsigned char)
defit __ZN7cocos2d11CCLayerRGBA22updateDisplayedOpacityEh, 0x273ff0

; cocos2d::CCMotionStreak::reset()
defit __ZN7cocos2d14CCMotionStreak5resetEv, 0x2ee190

; cocos2d::CCMotionStreak::resumeStroke()
defit __ZN7cocos2d14CCMotionStreak12resumeStrokeEv, 0x2edb30

; cocos2d::CCMotionStreak::stopStroke()
defit __ZN7cocos2d14CCMotionStreak10stopStrokeEv, 0x2edb20

; cocos2d::CCMouseDelegate::rightKeyDown()
defit __ZN7cocos2d15CCMouseDelegate12rightKeyDownEv, 0x61b0

; cocos2d::CCMouseDelegate::rightKeyUp()
defit __ZN7cocos2d15CCMouseDelegate10rightKeyUpEv, 0x61c0

; cocos2d::CCMouseDelegate::scrollWheel(float, float)
defit __ZN7cocos2d15CCMouseDelegate11scrollWheelEff, 0x61d0

; cocos2d::CCMoveBy::create(float, cocos2d::CCPoint const&)
defit __ZN7cocos2d8CCMoveBy6createEfRKNS_7CCPointE, 0x1f50e0

; cocos2d::CCMoveTo::create(float, cocos2d::CCPoint const&)
defit __ZN7cocos2d8CCMoveTo6createEfRKNS_7CCPointE, 0x1f54d0

; cocos2d::CCNode::CCNode()
defit __ZN7cocos2d6CCNodeC1Ev, 0x122550

; cocos2d::CCNode::CCNode()
defit __ZN7cocos2d6CCNodeC2Ev, 0x122550

; cocos2d::CCNode::_setZOrder(int)
defit __ZN7cocos2d6CCNode10_setZOrderEi, 0x122990

; cocos2d::CCNode::addChild(cocos2d::CCNode*, int, int)
defit __ZN7cocos2d6CCNode8addChildEPS0_ii, 0x1232a0

; cocos2d::CCNode::addChild(cocos2d::CCNode*, int)
defit __ZN7cocos2d6CCNode8addChildEPS0_i, 0x1233b0

; cocos2d::CCNode::addChild(cocos2d::CCNode*)
defit __ZN7cocos2d6CCNode8addChildEPS0_, 0x1233d0

; cocos2d::CCNode::addComponent(cocos2d::CCComponent*)
defit __ZN7cocos2d6CCNode12addComponentEPNS_11CCComponentE, 0x124a40

; cocos2d::CCNode::cleanup()
defit __ZN7cocos2d6CCNode7cleanupEv, 0x123100

; cocos2d::CCNode::convertToNodeSpace(cocos2d::CCPoint const&)
defit __ZN7cocos2d6CCNode18convertToNodeSpaceERKNS_7CCPointE, 0x124750

; cocos2d::CCNode::convertToWorldSpace(cocos2d::CCPoint const&)
defit __ZN7cocos2d6CCNode19convertToWorldSpaceERKNS_7CCPointE, 0x124790

; cocos2d::CCNode::create()
defit __ZN7cocos2d6CCNode6createEv, 0x1230a0

; cocos2d::CCNode::draw()
defit __ZN7cocos2d6CCNode4drawEv, 0x123840

; cocos2d::CCNode::getActionByTag(int)
defit __ZN7cocos2d6CCNode14getActionByTagEi, 0x123ee0

; cocos2d::CCNode::getActionManager()
defit __ZN7cocos2d6CCNode16getActionManagerEv, 0x123e50

; cocos2d::CCNode::getAnchorPoint()
defit __ZN7cocos2d6CCNode14getAnchorPointEv, 0x122d80

; cocos2d::CCNode::getAnchorPointInPoints()
defit __ZN7cocos2d6CCNode22getAnchorPointInPointsEv, 0x122d70

; cocos2d::CCNode::getCamera()
defit __ZN7cocos2d6CCNode9getCameraEv, 0x122cb0

; cocos2d::CCNode::getChildByTag(int)
defit __ZN7cocos2d6CCNode13getChildByTagEi, 0x123220

; cocos2d::CCNode::getChildren()
defit __ZN7cocos2d6CCNode11getChildrenEv, 0x122c80

; cocos2d::CCNode::getChildrenCount() const
defit __ZNK7cocos2d6CCNode16getChildrenCountEv, 0x122c90

; cocos2d::CCNode::getContentSize() const
defit __ZNK7cocos2d6CCNode14getContentSizeEv, 0x122e00

; cocos2d::CCNode::getGLServerState()
defit __ZN7cocos2d6CCNode16getGLServerStateEv, 0x122f90

; cocos2d::CCNode::getGrid()
defit __ZN7cocos2d6CCNode7getGridEv, 0x122d00

; cocos2d::CCNode::getOrderOfArrival()
defit __ZN7cocos2d6CCNode17getOrderOfArrivalEv, 0x122f50

; cocos2d::CCNode::getParent()
defit __ZN7cocos2d6CCNode9getParentEv, 0x122ed0

; cocos2d::CCNode::getPosition()
defit __ZN7cocos2d6CCNode11getPositionEv, 0x122b60

; cocos2d::CCNode::getPosition(float*, float*)
defit __ZN7cocos2d6CCNode11getPositionEPfS1_, 0x122b90

; cocos2d::CCNode::getPositionX()
defit __ZN7cocos2d6CCNode12getPositionXEv, 0x122be0

; cocos2d::CCNode::getPositionY()
defit __ZN7cocos2d6CCNode12getPositionYEv, 0x122bf0

; cocos2d::CCNode::getRotation()
defit __ZN7cocos2d6CCNode11getRotationEv, 0x122a00

; cocos2d::CCNode::getRotationX()
defit __ZN7cocos2d6CCNode12getRotationXEv, 0x122a50

; cocos2d::CCNode::getRotationY()
defit __ZN7cocos2d6CCNode12getRotationYEv, 0x122a80

; cocos2d::CCNode::getScale()
defit __ZN7cocos2d6CCNode8getScaleEv, 0x122ab0

; cocos2d::CCNode::getScaleX()
defit __ZN7cocos2d6CCNode9getScaleXEv, 0x122b00

; cocos2d::CCNode::getScaleY()
defit __ZN7cocos2d6CCNode9getScaleYEv, 0x122b30

; cocos2d::CCNode::getScaledContentSize()
defit __ZN7cocos2d6CCNode20getScaledContentSizeEv, 0x122e10

; cocos2d::CCNode::getScheduler()
defit __ZN7cocos2d6CCNode12getSchedulerEv, 0x123f70

; cocos2d::CCNode::getShaderProgram()
defit __ZN7cocos2d6CCNode16getShaderProgramEv, 0x122f70

; cocos2d::CCNode::getSkewX()
defit __ZN7cocos2d6CCNode8getSkewXEv, 0x122920

; cocos2d::CCNode::getSkewY()
defit __ZN7cocos2d6CCNode8getSkewYEv, 0x122950

; cocos2d::CCNode::getUserData()
defit __ZN7cocos2d6CCNode11getUserDataEv, 0x122f30

; cocos2d::CCNode::getUserObject()
defit __ZN7cocos2d6CCNode13getUserObjectEv, 0x122f80

; cocos2d::CCNode::getVertexZ()
defit __ZN7cocos2d6CCNode10getVertexZEv, 0x1229e0

; cocos2d::CCNode::getZOrder()
defit __ZN7cocos2d6CCNode9getZOrderEv, 0x122980

; cocos2d::CCNode::ignoreAnchorPointForPosition(bool)
defit __ZN7cocos2d6CCNode28ignoreAnchorPointForPositionEb, 0x122f00

; cocos2d::CCNode::isIgnoreAnchorPointForPosition()
defit __ZN7cocos2d6CCNode30isIgnoreAnchorPointForPositionEv, 0x122ef0

; cocos2d::CCNode::isRunning()
defit __ZN7cocos2d6CCNode9isRunningEv, 0x122ec0

; cocos2d::CCNode::isVisible()
defit __ZN7cocos2d6CCNode9isVisibleEv, 0x122d50

; cocos2d::CCNode::nodeToParentTransform()
defit __ZN7cocos2d6CCNode21nodeToParentTransformEv, 0x124210

; cocos2d::CCNode::nodeToWorldTransform()
defit __ZN7cocos2d6CCNode20nodeToWorldTransformEv, 0x124670

; cocos2d::CCNode::onEnter()
defit __ZN7cocos2d6CCNode7onEnterEv, 0x123a90

; cocos2d::CCNode::onEnterTransitionDidFinish()
defit __ZN7cocos2d6CCNode26onEnterTransitionDidFinishEv, 0x123b90

; cocos2d::CCNode::onExit()
defit __ZN7cocos2d6CCNode6onExitEv, 0x123ca0

; cocos2d::CCNode::onExitTransitionDidStart()
defit __ZN7cocos2d6CCNode24onExitTransitionDidStartEv, 0x123c00

; cocos2d::CCNode::parentToNodeTransform()
defit __ZN7cocos2d6CCNode21parentToNodeTransformEv, 0x1245d0

; cocos2d::CCNode::pauseSchedulerAndActions()
defit __ZN7cocos2d6CCNode24pauseSchedulerAndActionsEv, 0x123d60

; cocos2d::CCNode::registerScriptHandler(int)
defit __ZN7cocos2d6CCNode21registerScriptHandlerEi, 0x123d90

; cocos2d::CCNode::removeAllChildren()
defit __ZN7cocos2d6CCNode17removeAllChildrenEv, 0x123600

; cocos2d::CCNode::removeAllChildrenWithCleanup(bool)
defit __ZN7cocos2d6CCNode28removeAllChildrenWithCleanupEb, 0x123620

; cocos2d::CCNode::removeAllComponents()
defit __ZN7cocos2d6CCNode19removeAllComponentsEv, 0x124aa0

; cocos2d::CCNode::removeChild(cocos2d::CCNode*)
defit __ZN7cocos2d6CCNode11removeChildEPS0_, 0x123460

; cocos2d::CCNode::removeChild(cocos2d::CCNode*, bool)
defit __ZN7cocos2d6CCNode11removeChildEPS0_b, 0x123480

; cocos2d::CCNode::removeChildByTag(int)
defit __ZN7cocos2d6CCNode16removeChildByTagEi, 0x1235a0

; cocos2d::CCNode::removeChildByTag(int, bool)
defit __ZN7cocos2d6CCNode16removeChildByTagEib, 0x1235c0

; cocos2d::CCNode::removeComponent(char const*)
defit __ZN7cocos2d6CCNode15removeComponentEPKc, 0x124a60

; cocos2d::CCNode::removeComponent(cocos2d::CCComponent*)
defit __ZN7cocos2d6CCNode15removeComponentEPNS_11CCComponentE, 0x124a80

; cocos2d::CCNode::removeFromParent()
defit __ZN7cocos2d6CCNode16removeFromParentEv, 0x1233f0

; cocos2d::CCNode::removeFromParentAndCleanup(bool)
defit __ZN7cocos2d6CCNode26removeFromParentAndCleanupEb, 0x123410

; cocos2d::CCNode::removeMeAndCleanup()
defit __ZN7cocos2d6CCNode18removeMeAndCleanupEv, 0x123440

; cocos2d::CCNode::reorderChild(cocos2d::CCNode*, int)
defit __ZN7cocos2d6CCNode12reorderChildEPS0_i, 0x123760

; cocos2d::CCNode::resumeSchedulerAndActions()
defit __ZN7cocos2d6CCNode25resumeSchedulerAndActionsEv, 0x123b60

; cocos2d::CCNode::runAction(cocos2d::CCAction*)
defit __ZN7cocos2d6CCNode9runActionEPNS_8CCActionE, 0x123e60

; cocos2d::CCNode::scheduleUpdate()
defit __ZN7cocos2d6CCNode14scheduleUpdateEv, 0x123f80

; cocos2d::CCNode::setActionManager(cocos2d::CCActionManager*)
defit __ZN7cocos2d6CCNode16setActionManagerEPNS_15CCActionManagerE, 0x123e00

; cocos2d::CCNode::setAnchorPoint(cocos2d::CCPoint const&)
defit __ZN7cocos2d6CCNode14setAnchorPointERKNS_7CCPointE, 0x122d90

; cocos2d::CCNode::setContentSize(cocos2d::CCSize const&)
defit __ZN7cocos2d6CCNode14setContentSizeERKNS_6CCSizeE, 0x122e50

; cocos2d::CCNode::setGLServerState(cocos2d::ccGLServerState)
defit __ZN7cocos2d6CCNode16setGLServerStateENS_15ccGLServerStateE, 0x122fa0

; cocos2d::CCNode::setGrid(cocos2d::CCGridBase*)
defit __ZN7cocos2d6CCNode7setGridEPNS_10CCGridBaseE, 0x122d10

; cocos2d::CCNode::setOrderOfArrival(unsigned int)
defit __ZN7cocos2d6CCNode17setOrderOfArrivalEj, 0x122f60

; cocos2d::CCNode::setParent(cocos2d::CCNode*)
defit __ZN7cocos2d6CCNode9setParentEPS0_, 0x122ee0

; cocos2d::CCNode::setPosition(cocos2d::CCPoint const&)
defit __ZN7cocos2d6CCNode11setPositionERKNS_7CCPointE, 0x122b70

; cocos2d::CCNode::setPosition(float, float)
defit __ZN7cocos2d6CCNode11setPositionEff, 0x122ba0

; cocos2d::CCNode::setPositionX(float)
defit __ZN7cocos2d6CCNode12setPositionXEf, 0x122c00

; cocos2d::CCNode::setPositionY(float)
defit __ZN7cocos2d6CCNode12setPositionYEf, 0x122c40

; cocos2d::CCNode::setRotation(float)
defit __ZN7cocos2d6CCNode11setRotationEf, 0x122a10

; cocos2d::CCNode::setRotationX(float)
defit __ZN7cocos2d6CCNode12setRotationXEf, 0x122a60

; cocos2d::CCNode::setRotationY(float)
defit __ZN7cocos2d6CCNode12setRotationYEf, 0x122a90

; cocos2d::CCNode::setScale(float)
defit __ZN7cocos2d6CCNode8setScaleEf, 0x122ac0

; cocos2d::CCNode::setScale(float, float)
defit __ZN7cocos2d6CCNode8setScaleEff, 0x122ae0

; cocos2d::CCNode::setScaleX(float)
defit __ZN7cocos2d6CCNode9setScaleXEf, 0x122b10

; cocos2d::CCNode::setScaleY(float)
defit __ZN7cocos2d6CCNode9setScaleYEf, 0x122b40

; cocos2d::CCNode::setScheduler(cocos2d::CCScheduler*)
defit __ZN7cocos2d6CCNode12setSchedulerEPNS_11CCSchedulerE, 0x123f20

; cocos2d::CCNode::setShaderProgram(cocos2d::CCGLProgram*)
defit __ZN7cocos2d6CCNode16setShaderProgramEPNS_11CCGLProgramE, 0x122ff0

; cocos2d::CCNode::setSkewX(float)
defit __ZN7cocos2d6CCNode8setSkewXEf, 0x122930

; cocos2d::CCNode::setSkewY(float)
defit __ZN7cocos2d6CCNode8setSkewYEf, 0x122960

; cocos2d::CCNode::setUserData(void*)
defit __ZN7cocos2d6CCNode11setUserDataEPv, 0x122f40

; cocos2d::CCNode::setUserObject(cocos2d::CCObject*)
defit __ZN7cocos2d6CCNode13setUserObjectEPNS_8CCObjectE, 0x122fb0

; cocos2d::CCNode::setVertexZ(float)
defit __ZN7cocos2d6CCNode10setVertexZEf, 0x1229f0

; cocos2d::CCNode::setVisible(bool)
defit __ZN7cocos2d6CCNode10setVisibleEb, 0x122d60

; cocos2d::CCNode::setZOrder(int)
defit __ZN7cocos2d6CCNode9setZOrderEi, 0x1229a0

; cocos2d::CCNode::sortAllChildren()
defit __ZN7cocos2d6CCNode15sortAllChildrenEv, 0x1237b0

; cocos2d::CCNode::stopActionByTag(int)
defit __ZN7cocos2d6CCNode15stopActionByTagEi, 0x123ec0

; cocos2d::CCNode::stopAllActions()
defit __ZN7cocos2d6CCNode14stopAllActionsEv, 0x123190

; cocos2d::CCNode::unregisterScriptHandler()
defit __ZN7cocos2d6CCNode23unregisterScriptHandlerEv, 0x123dc0

; cocos2d::CCNode::unscheduleAllSelectors()
defit __ZN7cocos2d6CCNode22unscheduleAllSelectorsEv, 0x1231b0

; cocos2d::CCNode::unscheduleUpdate()
defit __ZN7cocos2d6CCNode16unscheduleUpdateEv, 0x124060

; cocos2d::CCNode::update(float)
defit __ZN7cocos2d6CCNode6updateEf, 0x1241a0

; cocos2d::CCNode::updateTransform()
defit __ZN7cocos2d6CCNode15updateTransformEv, 0x1249d0

; cocos2d::CCNode::updateTweenAction(float, char const*)
defit __ZN7cocos2d6CCNode17updateTweenActionEfPKc, 0x1249c0

; cocos2d::CCNode::visit()
defit __ZN7cocos2d6CCNode5visitEv, 0x123850

; cocos2d::CCNode::worldToNodeTransform()
defit __ZN7cocos2d6CCNode20worldToNodeTransformEv, 0x124710

; cocos2d::CCNode::~CCNode()
defit __ZN7cocos2d6CCNodeD2Ev, 0x122750

; cocos2d::CCNode::~CCNode()
defit __ZN7cocos2d6CCNodeD1Ev, 0x1228d0

; cocos2d::CCNode::~CCNode()
defit __ZN7cocos2d6CCNodeD0Ev, 0x1228e0

; cocos2d::CCNodeRGBA::CCNodeRGBA()
defit __ZN7cocos2d10CCNodeRGBAC1Ev, 0x124ac0

; cocos2d::CCNodeRGBA::CCNodeRGBA()
defit __ZN7cocos2d10CCNodeRGBAC2Ev, 0x124b30

; cocos2d::CCNodeRGBA::getColor()
defit __ZN7cocos2d10CCNodeRGBA8getColorEv, 0x125020

; cocos2d::CCNodeRGBA::getColor()
defit __ZN7cocos2d10CCNodeRGBA8getColorEv, 0x125030

; cocos2d::CCNodeRGBA::getDisplayedColor()
defit __ZN7cocos2d10CCNodeRGBA17getDisplayedColorEv, 0x125040

; cocos2d::CCNodeRGBA::getDisplayedColor()
defit __ZN7cocos2d10CCNodeRGBA17getDisplayedColorEv, 0x125050

; cocos2d::CCNodeRGBA::getDisplayedOpacity()
defit __ZN7cocos2d10CCNodeRGBA19getDisplayedOpacityEv, 0x124cf0

; cocos2d::CCNodeRGBA::getDisplayedOpacity()
defit __ZN7cocos2d10CCNodeRGBA19getDisplayedOpacityEv, 0x124d00

; cocos2d::CCNodeRGBA::getOpacity()
defit __ZN7cocos2d10CCNodeRGBA10getOpacityEv, 0x124cd0

; cocos2d::CCNodeRGBA::getOpacity()
defit __ZN7cocos2d10CCNodeRGBA10getOpacityEv, 0x124ce0

; cocos2d::CCNodeRGBA::isCascadeColorEnabled()
defit __ZN7cocos2d10CCNodeRGBA21isCascadeColorEnabledEv, 0x125320

; cocos2d::CCNodeRGBA::isCascadeOpacityEnabled()
defit __ZN7cocos2d10CCNodeRGBA23isCascadeOpacityEnabledEv, 0x124fe0

; cocos2d::CCNodeRGBA::isCascadeOpacityEnabled()
defit __ZN7cocos2d10CCNodeRGBA23isCascadeOpacityEnabledEv, 0x124ff0

; cocos2d::CCNodeRGBA::setCascadeColorEnabled(bool)
defit __ZN7cocos2d10CCNodeRGBA22setCascadeColorEnabledEb, 0x125340

; cocos2d::CCNodeRGBA::setCascadeColorEnabled(bool)
defit __ZN7cocos2d10CCNodeRGBA22setCascadeColorEnabledEb, 0x125350

; cocos2d::CCNodeRGBA::setCascadeOpacityEnabled(bool)
defit __ZN7cocos2d10CCNodeRGBA24setCascadeOpacityEnabledEb, 0x125000

; cocos2d::CCNodeRGBA::setCascadeOpacityEnabled(bool)
defit __ZN7cocos2d10CCNodeRGBA24setCascadeOpacityEnabledEb, 0x125010

; cocos2d::CCObject::CCObject()
defit __ZN7cocos2d8CCObjectC1Ev, 0x250ca0

; cocos2d::CCObject::acceptVisitor(cocos2d::CCDataVisitor&)
defit __ZN7cocos2d8CCObject13acceptVisitorERNS_13CCDataVisitorE, 0x250f30

; cocos2d::CCObject::autorelease()
defit __ZN7cocos2d8CCObject11autoreleaseEv, 0x250ed0

; cocos2d::CCObject::canEncode()
defit __ZN7cocos2d8CCObject9canEncodeEv, 0x250f90

; cocos2d::CCObject::encodeWithCoder(DS_Dictionary*)
defit __ZN7cocos2d8CCObject15encodeWithCoderEP13DS_Dictionary, 0x250f70

; cocos2d::CCObject::getTag() const
defit __ZNK7cocos2d8CCObject6getTagEv, 0x250f50

; cocos2d::CCObject::isEqual(cocos2d::CCObject const*)
defit __ZN7cocos2d8CCObject7isEqualEPKS0_, 0x250f20

; cocos2d::CCObject::release()
defit __ZN7cocos2d8CCObject7releaseEv, 0x250ea0

; cocos2d::CCObject::retain()
defit __ZN7cocos2d8CCObject6retainEv, 0x250ec0

; cocos2d::CCObject::setTag(int)
defit __ZN7cocos2d8CCObject6setTagEi, 0x250f60

; cocos2d::CCParticleSystem::resetSystem()
defit __ZN7cocos2d16CCParticleSystem11resetSystemEv, 0x46bd50

; cocos2d::CCParticleSystem::resumeSystem()
defit __ZN7cocos2d16CCParticleSystem12resumeSystemEv, 0x46bd40

; cocos2d::CCParticleSystem::stopSystem()
defit __ZN7cocos2d16CCParticleSystem10stopSystemEv, 0x46bd10

; cocos2d::CCParticleSystemQuad::create(char const*)
defit __ZN7cocos2d20CCParticleSystemQuad6createEPKc, 0x36b000

; cocos2d::CCPoint::CCPoint(float, float)
defit __ZN7cocos2d7CCPointC1Eff, 0x137000

; cocos2d::CCPoint::CCPoint(cocos2d::CCPoint const&)
defit __ZN7cocos2d7CCPointC1ERKS0_, 0x137090

; cocos2d::CCPoint::equals(cocos2d::CCPoint const&) const
defit __ZNK7cocos2d7CCPoint6equalsERKS0_, 0x1371d0

; cocos2d::CCPoint::operator*(float) const
defit __ZNK7cocos2d7CCPointmlEf, 0x137180

; cocos2d::CCPoint::operator+(cocos2d::CCPoint const&) const
defit __ZNK7cocos2d7CCPointplERKS0_, 0x1370f0

; cocos2d::CCPoint::operator-(cocos2d::CCPoint const&) const
defit __ZNK7cocos2d7CCPointmiERKS0_, 0x137120

; cocos2d::CCPoint::operator-() const
defit __ZNK7cocos2d7CCPointngEv, 0x137150

; cocos2d::CCPoint::operator/(float) const
defit __ZNK7cocos2d7CCPointdvEf, 0x1371a0

; cocos2d::CCPoint::operator=(cocos2d::CCPoint const&)
defit __ZN7cocos2d7CCPointaSERKS0_, 0x1370c0

; cocos2d::CCRect::CCRect(float, float, float, float)
defit __ZN7cocos2d6CCRectC2Effff, 0x137020

; cocos2d::CCRect::containsPoint(cocos2d::CCPoint const&) const
defit __ZNK7cocos2d6CCRect13containsPointERKNS_7CCPointE, 0x1377b0

; cocos2d::CCRect::equals(cocos2d::CCRect const&) const
defit __ZNK7cocos2d6CCRect6equalsERKS0_, 0x1376a0

; cocos2d::CCRect::getMaxX() const
defit __ZNK7cocos2d6CCRect7getMaxXEv, 0x137710

; cocos2d::CCRect::getMaxY() const
defit __ZNK7cocos2d6CCRect7getMaxYEv, 0x137760

; cocos2d::CCRect::getMinX() const
defit __ZNK7cocos2d6CCRect7getMinXEv, 0x137750

; cocos2d::CCRect::getMinY() const
defit __ZNK7cocos2d6CCRect7getMinYEv, 0x1377a0

; cocos2d::CCRect::intersectsRect(cocos2d::CCRect const&) const
defit __ZNK7cocos2d6CCRect14intersectsRectERKS0_, 0x137800

; cocos2d::CCRect::operator=(cocos2d::CCRect const&)
defit __ZN7cocos2d6CCRectaSERKS0_, 0x137670

; cocos2d::CCRepeatForever::create(cocos2d::CCActionInterval*)
defit __ZN7cocos2d15CCRepeatForever6createEPNS_16CCActionIntervalE, 0x1f3920

; cocos2d::CCRotateBy::create(float, float)
defit __ZN7cocos2d10CCRotateBy6createEff, 0x1f4c50

; cocos2d::CCScaleTo::create(float, float)
defit __ZN7cocos2d9CCScaleTo6createEff, 0x1f6ff0

; cocos2d::CCScaleTo::create(float, float, float)
defit __ZN7cocos2d9CCScaleTo6createEfff, 0x1f70f0

; cocos2d::CCScene::create()
defit __ZN7cocos2d7CCScene6createEv, 0x13c140

; cocos2d::CCSequence::create(cocos2d::CCFiniteTimeAction*, ...)
defit __ZN7cocos2d10CCSequence6createEPNS_18CCFiniteTimeActionEz, 0x1f2860

; cocos2d::CCSize::CCSize(float, float)
defit __ZN7cocos2d6CCSizeC1Eff, 0x137010

; cocos2d::CCSize::CCSize(cocos2d::CCSize const&)
defit __ZN7cocos2d6CCSizeC1ERKS0_, 0x137400

; cocos2d::CCSize::operator/(float) const
defit __ZNK7cocos2d6CCSizedvEf, 0x1374e0

; cocos2d::CCSprite::CCSprite()
defit __ZN7cocos2d8CCSpriteC1Ev, 0x133300

; cocos2d::CCSprite::addChild(cocos2d::CCNode*)
defit __ZN7cocos2d8CCSprite8addChildEPNS_6CCNodeE, 0x134190

; cocos2d::CCSprite::addChild(cocos2d::CCNode*, int)
defit __ZN7cocos2d8CCSprite8addChildEPNS_6CCNodeEi, 0x1341a0

; cocos2d::CCSprite::addChild(cocos2d::CCNode*, int, int)
defit __ZN7cocos2d8CCSprite8addChildEPNS_6CCNodeEii, 0x1341b0

; cocos2d::CCSprite::create(char const*)
defit __ZN7cocos2d8CCSprite6createEPKc, 0x132a80

; cocos2d::CCSprite::createWithSpriteFrameName(char const*)
defit __ZN7cocos2d8CCSprite25createWithSpriteFrameNameEPKc, 0x132dc0

; cocos2d::CCSprite::displayFrame()
defit __ZN7cocos2d8CCSprite12displayFrameEv, 0x135760

; cocos2d::CCSprite::draw()
defit __ZN7cocos2d8CCSprite4drawEv, 0x134070

; cocos2d::CCSprite::getBatchNode()
defit __ZN7cocos2d8CCSprite12getBatchNodeEv, 0x135910

; cocos2d::CCSprite::getBlendFunc()
defit __ZN7cocos2d8CCSprite12getBlendFuncEv, 0x505a0

; cocos2d::CCSprite::getBlendFunc()
defit __ZN7cocos2d8CCSprite12getBlendFuncEv, 0x505e0

; cocos2d::CCSprite::getTexture()
defit __ZN7cocos2d8CCSprite10getTextureEv, 0x135c00

; cocos2d::CCSprite::getTexture()
defit __ZN7cocos2d8CCSprite10getTextureEv, 0x135c10

; cocos2d::CCSprite::ignoreAnchorPointForPosition(bool)
defit __ZN7cocos2d8CCSprite28ignoreAnchorPointForPositionEb, 0x134b60

; cocos2d::CCSprite::initWithFile(char const*)
defit __ZN7cocos2d8CCSprite12initWithFileEPKc, 0x133180

; cocos2d::CCSprite::initWithFile(char const*, cocos2d::CCRect const&)
defit __ZN7cocos2d8CCSprite12initWithFileEPKcRKNS_6CCRectE, 0x133210

; cocos2d::CCSprite::initWithSpriteFrame(cocos2d::CCSpriteFrame*)
defit __ZN7cocos2d8CCSprite19initWithSpriteFrameEPNS_13CCSpriteFrameE, 0x133270

; cocos2d::CCSprite::initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool)
defit __ZN7cocos2d8CCSprite15initWithTextureEPNS_11CCTexture2DERKNS_6CCRectEb, 0x132f10

; cocos2d::CCSprite::initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&)
defit __ZN7cocos2d8CCSprite15initWithTextureEPNS_11CCTexture2DERKNS_6CCRectE, 0x1330f0

; cocos2d::CCSprite::isDirty()
defit __ZN7cocos2d8CCSprite7isDirtyEv, 0x505b0

; cocos2d::CCSprite::isFrameDisplayed(cocos2d::CCSpriteFrame*)
defit __ZN7cocos2d8CCSprite16isFrameDisplayedEPNS_13CCSpriteFrameE, 0x1356d0

; cocos2d::CCSprite::isOpacityModifyRGB()
defit __ZN7cocos2d8CCSprite18isOpacityModifyRGBEv, 0x125330

; cocos2d::CCSprite::isOpacityModifyRGB()
defit __ZN7cocos2d8CCSprite18isOpacityModifyRGBEv, 0x135350

; cocos2d::CCSprite::isOpacityModifyRGB()
defit __ZN7cocos2d8CCSprite18isOpacityModifyRGBEv, 0x135360

; cocos2d::CCSprite::refreshTextureRect()
defit __ZN7cocos2d8CCSprite18refreshTextureRectEv, 0x133520

; cocos2d::CCSprite::removeAllChildrenWithCleanup(bool)
defit __ZN7cocos2d8CCSprite28removeAllChildrenWithCleanupEb, 0x134340

; cocos2d::CCSprite::removeChild(cocos2d::CCNode*, bool)
defit __ZN7cocos2d8CCSprite11removeChildEPNS_6CCNodeEb, 0x134300

; cocos2d::CCSprite::reorderChild(cocos2d::CCNode*, int)
defit __ZN7cocos2d8CCSprite12reorderChildEPNS_6CCNodeEi, 0x134270

; cocos2d::CCSprite::setAnchorPoint(cocos2d::CCPoint const&)
defit __ZN7cocos2d8CCSprite14setAnchorPointERKNS_7CCPointE, 0x134af0

; cocos2d::CCSprite::setBatchNode(cocos2d::CCSpriteBatchNode*)
defit __ZN7cocos2d8CCSprite12setBatchNodeEPNS_17CCSpriteBatchNodeE, 0x135920

; cocos2d::CCSprite::setBlendFunc(cocos2d::_ccBlendFunc)
defit __ZN7cocos2d8CCSprite12setBlendFuncENS_12_ccBlendFuncE, 0x50590

; cocos2d::CCSprite::setBlendFunc(cocos2d::_ccBlendFunc)
defit __ZN7cocos2d8CCSprite12setBlendFuncENS_12_ccBlendFuncE, 0x505d0

; cocos2d::CCSprite::setChildOpacity(unsigned char)
defit __ZN7cocos2d8CCSprite15setChildOpacityEh, 0x134f50

; cocos2d::CCSprite::setDirty(bool)
defit __ZN7cocos2d8CCSprite8setDirtyEb, 0x505c0

; cocos2d::CCSprite::setDirtyRecursively(bool)
defit __ZN7cocos2d8CCSprite19setDirtyRecursivelyEb, 0x1345b0

; cocos2d::CCSprite::setDisplayFrame(cocos2d::CCSpriteFrame*)
defit __ZN7cocos2d8CCSprite15setDisplayFrameEPNS_13CCSpriteFrameE, 0x135610

; cocos2d::CCSprite::setDisplayFrameWithAnimationName(char const*, int)
defit __ZN7cocos2d8CCSprite32setDisplayFrameWithAnimationNameEPKci, 0x135680

; cocos2d::CCSprite::setFlipY(bool)
defit __ZN7cocos2d8CCSprite8setFlipYEb, 0x134c30

; cocos2d::CCSprite::setOpacityModifyRGB(bool)
defit __ZN7cocos2d8CCSprite19setOpacityModifyRGBEb, 0x135200

; cocos2d::CCSprite::setOpacityModifyRGB(bool)
defit __ZN7cocos2d8CCSprite19setOpacityModifyRGBEb, 0x135330

; cocos2d::CCSprite::setPosition(cocos2d::CCPoint const&)
defit __ZN7cocos2d8CCSprite11setPositionERKNS_7CCPointE, 0x134650

; cocos2d::CCSprite::setReorderChildDirtyRecursively()
defit __ZN7cocos2d8CCSprite31setReorderChildDirtyRecursivelyEv, 0x134550

; cocos2d::CCSprite::setRotationX(float)
defit __ZN7cocos2d8CCSprite12setRotationXEf, 0x134740

; cocos2d::CCSprite::setRotationY(float)
defit __ZN7cocos2d8CCSprite12setRotationYEf, 0x1347b0

; cocos2d::CCSprite::setSkewX(float)
defit __ZN7cocos2d8CCSprite8setSkewXEf, 0x134820

; cocos2d::CCSprite::setSkewY(float)
defit __ZN7cocos2d8CCSprite8setSkewYEf, 0x134890

; cocos2d::CCSprite::setTexture(cocos2d::CCTexture2D*)
defit __ZN7cocos2d8CCSprite10setTextureEPNS_11CCTexture2DE, 0x135a90

; cocos2d::CCSprite::setTexture(cocos2d::CCTexture2D*)
defit __ZN7cocos2d8CCSprite10setTextureEPNS_11CCTexture2DE, 0x135be0

; cocos2d::CCSprite::setTextureCoords(cocos2d::CCRect const&)
defit __ZN7cocos2d8CCSprite16setTextureCoordsERKNS_6CCRectE, 0x133910

; cocos2d::CCSprite::setTextureRect(cocos2d::CCRect const&)
defit __ZN7cocos2d8CCSprite14setTextureRectERKNS_6CCRectE, 0x133560

; cocos2d::CCSprite::setTextureRect(cocos2d::CCRect const&, bool, cocos2d::CCSize const&)
defit __ZN7cocos2d8CCSprite14setTextureRectERKNS_6CCRectEbRKNS_6CCSizeE, 0x133580

; cocos2d::CCSprite::setVertexRect(cocos2d::CCRect const&)
defit __ZN7cocos2d8CCSprite13setVertexRectERKNS_6CCRectE, 0x1338f0

; cocos2d::CCSprite::setVertexZ(float)
defit __ZN7cocos2d8CCSprite10setVertexZEf, 0x134a80

; cocos2d::CCSprite::sortAllChildren()
defit __ZN7cocos2d8CCSprite15sortAllChildrenEv, 0x1343f0

; cocos2d::CCSprite::updateBlendFunc()
defit __ZN7cocos2d8CCSprite15updateBlendFuncEv, 0x135a20

; cocos2d::CCSprite::updateDisplayedColor(cocos2d::_ccColor3B const&)
defit __ZN7cocos2d8CCSprite20updateDisplayedColorERKNS_10_ccColor3BE, 0x135370

; cocos2d::CCSprite::updateDisplayedColor(cocos2d::_ccColor3B const&)
defit __ZN7cocos2d8CCSprite20updateDisplayedColorERKNS_10_ccColor3BE, 0x1354a0

; cocos2d::CCSprite::updateDisplayedOpacity(unsigned char)
defit __ZN7cocos2d8CCSprite22updateDisplayedOpacityEh, 0x1354c0

; cocos2d::CCSprite::updateDisplayedOpacity(unsigned char)
defit __ZN7cocos2d8CCSprite22updateDisplayedOpacityEh, 0x1355f0

; cocos2d::CCSprite::updateTransform()
defit __ZN7cocos2d8CCSprite15updateTransformEv, 0x133b70

; cocos2d::CCSpriteBatchNode::createWithTexture(cocos2d::CCTexture2D*, unsigned int)
defit __ZN7cocos2d17CCSpriteBatchNode17createWithTextureEPNS_11CCTexture2DEj, 0xbb310

; cocos2d::CCSpriteBatchNode::getUsedAtlasCapacity()
defit __ZN7cocos2d17CCSpriteBatchNode20getUsedAtlasCapacityEv, 0xbc6b0

; cocos2d::CCSpriteBatchNode::increaseAtlasCapacity(unsigned int)
defit __ZN7cocos2d17CCSpriteBatchNode21increaseAtlasCapacityEj, 0xbc670

; cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache()
defit __ZN7cocos2d18CCSpriteFrameCache22sharedSpriteFrameCacheEv, 0x198970

; cocos2d::CCSpriteFrameCache::spriteFrameByName(char const*)
defit __ZN7cocos2d18CCSpriteFrameCache17spriteFrameByNameEPKc, 0x19a7e0

; cocos2d::CCString::CCString(std::string const&)
defit __ZN7cocos2d8CCStringC1ERKSs, 0x44c310

; cocos2d::CCString::boolValue() const
defit __ZNK7cocos2d8CCString9boolValueEv, 0x44c810

; cocos2d::CCString::createWithFormat(char const*, ...)
defit __ZN7cocos2d8CCString16createWithFormatEPKcz, 0x44cab0

; cocos2d::CCString::floatValue() const
defit __ZNK7cocos2d8CCString10floatValueEv, 0x44c7d0

; cocos2d::CCString::getCString() const
defit __ZNK7cocos2d8CCString10getCStringEv, 0x44c470

; cocos2d::CCString::intValue() const
defit __ZNK7cocos2d8CCString8intValueEv, 0x44c780

; cocos2d::CCTexture2D::setTexParameters(cocos2d::_ccTexParams*)
defit __ZN7cocos2d11CCTexture2D16setTexParametersEPNS_12_ccTexParamsE, 0x247980

; cocos2d::CCTextureCache::addImage(char const*, bool)
defit __ZN7cocos2d14CCTextureCache8addImageEPKcb, 0x358120

; cocos2d::CCTextureCache::sharedTextureCache()
defit __ZN7cocos2d14CCTextureCache18sharedTextureCacheEv, 0x356e00

; cocos2d::CCTouchDispatcher::decrementForcePrio(int)
defit __ZN7cocos2d17CCTouchDispatcher18decrementForcePrioEi, 0x280f70

; cocos2d::CCTouchDispatcher::incrementForcePrio(int)
defit __ZN7cocos2d17CCTouchDispatcher18incrementForcePrioEi, 0x280f60

; cocos2d::ZipUtils::decompressString(std::string, bool, int)
defit __ZN7cocos2d8ZipUtils16decompressStringESsbi, 0xea380

; cocos2d::ccArrayRemoveAllObjects(cocos2d::_ccArray*)
defit __ZN7cocos2d23ccArrayRemoveAllObjectsEPNS_8_ccArrayE, 0x3b1c80

; cocos2d::ccpDistance(cocos2d::CCPoint const&, cocos2d::CCPoint const&)
defit __ZN7cocos2d11ccpDistanceERKNS_7CCPointES2_, 0x1aaf90

; cocos2d::extension::CCControlColourPicker::setColorValue(cocos2d::_ccColor3B const&)
defit __ZN7cocos2d9extension21CCControlColourPicker13setColorValueERKNS_10_ccColor3BE, 0x1aac10

; cocos2d::extension::CCControlUtils::HSVfromRGB(cocos2d::extension::RGBA)
defit __ZN7cocos2d9extension14CCControlUtils10HSVfromRGBENS0_4RGBAE, 0x1e6750

; cocos2d::extension::CCControlUtils::RGBfromHSV(cocos2d::extension::HSV)
defit __ZN7cocos2d9extension14CCControlUtils10RGBfromHSVENS0_3HSVE, 0x1e6850

; cocos2d::extension::CCScale9Sprite::CCScale9Sprite()
defit __ZN7cocos2d9extension14CCScale9SpriteC1Ev, 0x211330

; cocos2d::extension::CCScale9Sprite::create(char const*, cocos2d::CCRect)
defit __ZN7cocos2d9extension14CCScale9Sprite6createEPKcNS_6CCRectE, 0x212ef0

; cocos2d::extension::CCScrollView::CCScrollView()
defit __ZN7cocos2d9extension12CCScrollViewC1Ev, 0x214800

; fmt::BasicWriter<char>::operator<<(int)
defit __ZN3fmt11BasicWriterIcElsEi, 0x4e740

; pugi::xml_document::destroy()
defit __ZN4pugi12xml_document7destroyEv, 0x393b50

; pugi::xml_document::~xml_document()
defit __ZN4pugi12xml_documentD1Ev, 0x393c30

