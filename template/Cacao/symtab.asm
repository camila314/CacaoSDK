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

; ; my own modification
; global __ZN15CCTextInputNode11getString_sEv
; __ZN15CCTextInputNode11getString_sEv:
;   push rbp
;   mov rbp, rsp
;   mov rdi, [rdi+0x1c0]
;   mov rax, [rdi]
;   call [rax+0x4b8]
;   pop rbp
;   ret

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
;   push rbp
;   mov rbp, rsp
;   push rbx
    
;   mov rbx, rdi
;   call __ZN7cocos2d12CCLayerColorC2Ev

;   addvtable [rbx], 0x65d200
;   addvtable [rbx+0x120], 0x65d6f8
;   addvtable [rbx+0x130], 0x65d770
;   addvtable [rbx+0x138], 0x65d790

;   pop rbx
;   pop rbp
;   ret

%macro thunk 3
global %1
%1:
    push rbp
    mov rbp, rsp

    add rdi, -%3

    pop rbp
    jmp %2
%endmacro

; ; cocos2d::CCSprite::CCSprite()
; defit __ZN7cocos2d8CCSpriteC2Ev, 0x133300

; AchievementCell::loadFromDict(cocos2d::CCDictionary*)
defit __ZN15AchievementCell12loadFromDictEPN7cocos2d12CCDictionaryE, 0x10eaa0

; AchievementManager::getAllAchievements()
defit __ZN18AchievementManager18getAllAchievementsEv, 0x434d60

; AchievementManager::sharedState()
defit __ZN18AchievementManager11sharedStateEv, 0x424420

; AchievementNotifier::sharedState()
defit __ZN19AchievementNotifier11sharedStateEv, 0x464e00

; AchievementNotifier::willSwitchToScene(cocos2d::CCScene*)
defit __ZN19AchievementNotifier17willSwitchToSceneEPN7cocos2d7CCSceneE, 0x4650b0

; AchievementsLayer::customSetup()
defit __ZN17AchievementsLayer11customSetupEv, 0x1bdea0

; AchievementsLayer::loadPage(int)
defit __ZN17AchievementsLayer8loadPageEi, 0x1be190

; AnimatedGameObject::playAnimation(int)
defit __ZN18AnimatedGameObject13playAnimationEi, 0xc93d0

; AnimatedGameObject::updateChildSpriteColor(cocos2d::_ccColor3B)
defit __ZN18AnimatedGameObject22updateChildSpriteColorEN7cocos2d10_ccColor3BE, 0xc8450

; AppDelegate::applicationDidEnterBackground()
defit __ZN11AppDelegate29applicationDidEnterBackgroundEv, 0x3aabe0

; AppDelegate::applicationDidFinishLaunching()
defit __ZN11AppDelegate29applicationDidFinishLaunchingEv, 0x3aa900

; AppDelegate::applicationWillBecomeActive()
defit __ZN11AppDelegate27applicationWillBecomeActiveEv, 0x3aab30

; AppDelegate::applicationWillEnterForeground()
defit __ZN11AppDelegate30applicationWillEnterForegroundEv, 0x3aac80

; AppDelegate::applicationWillResignActive()
defit __ZN11AppDelegate27applicationWillResignActiveEv, 0x3aab50

; AppDelegate::bgScale()
defit __ZN11AppDelegate7bgScaleEv, 0x3aaab0

; AppDelegate::get()
defit __ZN11AppDelegate3getEv, 0x3aab10

; AppDelegate::trySaveGame()
defit __ZN11AppDelegate11trySaveGameEv, 0x3aaf10

; non-virtual thunk to AppDelegate::willSwitchToScene(cocos2d::CCScene*)
;defit __ZThn4_N11AppDelegate17willSwitchToSceneEPN7cocos2d7CCSceneE, 0x3aaf40

; AppDelegate::~AppDelegate()
;defit __ZN11AppDelegateD2Ev, 0x3aa7f0

; AppDelegate::~AppDelegate()
;defit __ZN11AppDelegateD2Ev, 0x3aa800

; ArtistCell::ArtistCell(char const*, float, float)
defit __ZN10ArtistCellC1EPKcff, 0x11c740

; ArtistCell::draw()
defit __ZN10ArtistCell4drawEv, 0x11c980

; ArtistCell::init()
defit __ZN10ArtistCell4initEv, 0x11c7c0

; ArtistCell::loadFromObject(SongInfoObject*)
defit __ZN10ArtistCell14loadFromObjectEP14SongInfoObject, 0x1118b0

; ArtistCell::onNewgrounds(cocos2d::CCObject*)
defit __ZN10ArtistCell12onNewgroundsEPN7cocos2d8CCObjectE, 0x11c7e0

; ArtistCell::updateBGColor(int)
defit __ZN10ArtistCell13updateBGColorEi, 0x110460

; ArtistCell::~ArtistCell()
defit __ZN10ArtistCellD0Ev, 0x11c6a0

; ArtistCell::~ArtistCell()
defit __ZN10ArtistCellD1Ev, 0x11c6d0

; AudioEffectsLayer::audioStep(float)
defit __ZN17AudioEffectsLayer9audioStepEf, 0x271f40

; AudioEffectsLayer::create(std::string)
defit __ZN17AudioEffectsLayer6createESs, 0x271a00

; AudioEffectsLayer::resetAudioVars()
defit __ZN17AudioEffectsLayer14resetAudioVarsEv, 0x271ee0

; BoomListView::TableViewCommitCellEditingStyleForRowAtIndexPath(TableView*, TableViewCellEditingStyle, CCIndexPath&)
defit __ZN12BoomListView48TableViewCommitCellEditingStyleForRowAtIndexPathEP9TableView25TableViewCellEditingStyleR11CCIndexPath, 0x18f770

; non-virtual thunk to BoomListView::TableViewCommitCellEditingStyleForRowAtIndexPath(TableView*, TableViewCellEditingStyle, CCIndexPath&)
defit __ZThn376_N12BoomListView48TableViewCommitCellEditingStyleForRowAtIndexPathEP9TableView25TableViewCellEditingStyleR11CCIndexPath, 0x18f780

; BoomListView::TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*)
defit __ZN12BoomListView41TableViewWillDisplayCellForRowAtIndexPathER11CCIndexPathP13TableViewCellP9TableView, 0x18f030

; non-virtual thunk to BoomListView::TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*)
defit __ZThn368_N12BoomListView41TableViewWillDisplayCellForRowAtIndexPathER11CCIndexPathP13TableViewCellP9TableView, 0x18f040

; BoomListView::TableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*)
defit __ZN12BoomListView40TableViewWillReloadCellForRowAtIndexPathER11CCIndexPathP13TableViewCellP9TableView, 0x18f050

; non-virtual thunk to BoomListView::TableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*)
defit __ZThn368_N12BoomListView40TableViewWillReloadCellForRowAtIndexPathER11CCIndexPathP13TableViewCellP9TableView, 0x18f060

; BoomListView::cellForRowAtIndexPath(CCIndexPath&, TableView*)
defit __ZN12BoomListView21cellForRowAtIndexPathER11CCIndexPathP9TableView, 0x18f100

; non-virtual thunk to BoomListView::cellForRowAtIndexPath(CCIndexPath&, TableView*)
defit __ZThn376_N12BoomListView21cellForRowAtIndexPathER11CCIndexPathP9TableView, 0x18f180

; BoomListView::cellHeightForRowAtIndexPath(CCIndexPath&, TableView*)
defit __ZN12BoomListView27cellHeightForRowAtIndexPathER11CCIndexPathP9TableView, 0x18f070

; non-virtual thunk to BoomListView::cellHeightForRowAtIndexPath(CCIndexPath&, TableView*)
defit __ZThn368_N12BoomListView27cellHeightForRowAtIndexPathER11CCIndexPathP9TableView, 0x18f080

; BoomListView::create(cocos2d::CCArray*, float, float, int, BoomListType)
defit __ZN12BoomListView6createEPN7cocos2d7CCArrayEffi12BoomListType, 0x18ecb0

; BoomListView::didSelectRowAtIndexPath(CCIndexPath&, TableView*)
defit __ZN12BoomListView23didSelectRowAtIndexPathER11CCIndexPathP9TableView, 0x18f090

; non-virtual thunk to BoomListView::didSelectRowAtIndexPath(CCIndexPath&, TableView*)
defit __ZThn368_N12BoomListView23didSelectRowAtIndexPathER11CCIndexPathP9TableView, 0x18f0a0

; BoomListView::draw()
defit __ZN12BoomListView4drawEv, 0x18f790

; BoomListView::getListCell(char const*)
defit __ZN12BoomListView11getListCellEPKc, 0x18f200

; BoomListView::init(cocos2d::CCArray*, float, float, int, BoomListType)
defit __ZN12BoomListView4initEPN7cocos2d7CCArrayEffi12BoomListType, 0x18ee00

; BoomListView::loadCell(TableViewCell*, int)
defit __ZN12BoomListView8loadCellEP13TableViewCelli, 0x18f4a0

; BoomListView::numberOfRowsInSection(unsigned int, TableView*)
defit __ZN12BoomListView21numberOfRowsInSectionEjP9TableView, 0x18f0b0

; non-virtual thunk to BoomListView::numberOfRowsInSection(unsigned int, TableView*)
defit __ZThn376_N12BoomListView21numberOfRowsInSectionEjP9TableView, 0x18f0d0

; BoomListView::numberOfSectionsInTableView(TableView*)
defit __ZN12BoomListView27numberOfSectionsInTableViewEP9TableView, 0x18f0e0

; non-virtual thunk to BoomListView::numberOfSectionsInTableView(TableView*)
defit __ZThn376_N12BoomListView27numberOfSectionsInTableViewEP9TableView, 0x18f0f0

; BoomListView::setupList()
defit __ZN12BoomListView9setupListEv, 0x18ef90

; BoomListView::~BoomListView()
defit __ZN12BoomListViewD0Ev, 0x18ebb0

; BoomListView::~BoomListView()
defit __ZN12BoomListViewD1Ev, 0x18ea10

; BoomScrollLayer::BoomScrollLayer()
defit __ZN15BoomScrollLayerC2Ev, 0x1e42f0

; ButtonSprite::create(char const*)
defit __ZN12ButtonSprite6createEPKc, 0x4fa10

; ButtonSprite::create(char const*, float)
defit __ZN12ButtonSprite6createEPKcf, 0x4fa60

; ButtonSprite::create(char const*, int, int, float, bool)
defit __ZN12ButtonSprite6createEPKciifb, 0x4fa40

; ButtonSprite::create(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool)
defit __ZN12ButtonSprite6createEPN7cocos2d8CCSpriteEiiffbPKcb, 0x4fa90

; ButtonSprite::create(char const*, int, int, float, bool, char const*, char const*, float)
defit __ZN12ButtonSprite6createEPKciifbS1_S1_f, 0x4fa90

; ButtonSprite::updateBGImage(char const*)
defit __ZN12ButtonSprite13updateBGImageEPKc, 0x502d0

; CCAnimatedSprite::runAnimation(std::string)
defit __ZN16CCAnimatedSprite12runAnimationESs, 0x1a6430

; CCAnimatedSprite::tweenToAnimation(std::string, float)
defit __ZN16CCAnimatedSprite16tweenToAnimationESsf, 0x1a65b0

; non-virtual thunk to CCBlockLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*)
;defit __ZThn236_N12CCBlockLayer12ccTouchBeganEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x2a5c50

; non-virtual thunk to CCBlockLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*)
;defit __ZThn236_N12CCBlockLayer12ccTouchBeganEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x2a5c60

; non-virtual thunk to CCBlockLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*)
;defit __ZThn236_N12CCBlockLayer16ccTouchCancelledEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x2a5c80

; non-virtual thunk to CCBlockLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*)
;defit __ZThn236_N12CCBlockLayer16ccTouchCancelledEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x2a5c90

; non-virtual thunk to CCBlockLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*)
;defit __ZThn236_N12CCBlockLayer16ccTouchCancelledEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x2a5ca0

; non-virtual thunk to CCBlockLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*)
;defit __ZThn236_N12CCBlockLayer12ccTouchEndedEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x2a5c70

; non-virtual thunk to CCBlockLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*)
;defit __ZThn236_N12CCBlockLayer12ccTouchMovedEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x2a5cb0

; non-virtual thunk to CCBlockLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*)
;defit __ZThn236_N12CCBlockLayer12ccTouchMovedEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x2a5cc0

; CCBlockLayer::disableUI()
defit __ZN12CCBlockLayer9disableUIEv, 0x2a5a80

; CCBlockLayer::draw()
defit __ZN12CCBlockLayer4drawEv, 0x2a5c20

; CCBlockLayer::enableUI()
defit __ZN12CCBlockLayer8enableUIEv, 0x2a5a90

; CCBlockLayer::enterAnimFinished()
defit __ZN12CCBlockLayer17enterAnimFinishedEv, 0x2a5bb0

; CCBlockLayer::enterLayer()
defit __ZN12CCBlockLayer10enterLayerEv, 0x2a5aa0

; CCBlockLayer::exitLayer()
defit __ZN12CCBlockLayer9exitLayerEv, 0x2a5b40

; CCBlockLayer::hideLayer(bool)
defit __ZN12CCBlockLayer9hideLayerEb, 0x2a5ba0

; CCBlockLayer::init()
defit __ZN12CCBlockLayer4initEv, 0x2a59c0

; CCBlockLayer::layerHidden()
defit __ZN12CCBlockLayer11layerHiddenEv, 0x2a5be0

; CCBlockLayer::layerVisible()
defit __ZN12CCBlockLayer12layerVisibleEv, 0x2a5bc0

; CCBlockLayer::registerWithTouchDispatcher()
defit __ZN12CCBlockLayer27registerWithTouchDispatcherEv, 0x2a5ad0

; CCBlockLayer::showLayer(bool)
defit __ZN12CCBlockLayer9showLayerEb, 0x2a5b90

; cocos2d::CCKeyboardDispatcher::dispatchKeyboardMSG(cocos2d::enumKeyCodes, bool)
defit __ZN7cocos2d20CCKeyboardDispatcher19dispatchKeyboardMSGENS_12enumKeyCodesEb, 0xe8190

; CCCircleWave::create(float, float, float, bool)
defit __ZN12CCCircleWave6createEfffb, 0xbd270

; CCCircleWave::create(float, float, float, bool, bool)
defit __ZN12CCCircleWave6createEfffbb, 0xbd290

; CCCircleWave::followObject(cocos2d::CCNode*, bool)
defit __ZN12CCCircleWave12followObjectEPN7cocos2d6CCNodeEb, 0xbd670

; CCCircleWave::init(float, float, float, bool, bool)
defit __ZN12CCCircleWave4initEfffbb, 0xbd380

; CCCircleWave::updatePosition(float)
defit __ZN12CCCircleWave14updatePositionEf, 0xbd630

; CCLightFlash::create()
defit __ZN12CCLightFlash6createEv, 0x295870

; CCLightFlash::playEffect(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float)
defit __ZN12CCLightFlash10playEffectEN7cocos2d7CCPointENS0_10_ccColor3BEffffffffffffffibbf, 0x295900

; CCMenuItemSpriteExtra::CCMenuItemSpriteExtra()
defit __ZN21CCMenuItemSpriteExtraC2Ev, 0x32670

; CCMenuItemSpriteExtra::create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*))
defit __ZN21CCMenuItemSpriteExtra6createEPN7cocos2d6CCNodeES2_PNS0_8CCObjectEMS3_FvS4_E, 0x1253c0

; CCMenuItemSpriteExtra::init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*))
defit __ZN21CCMenuItemSpriteExtra4initEPN7cocos2d6CCNodeES2_PNS0_8CCObjectEMS3_FvS4_E, 0x125450

; CCMenuItemSpriteExtra::setSizeMult(float)
defit __ZN21CCMenuItemSpriteExtra11setSizeMultEf, 0x1255e0

; CCMenuItemToggler::create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*))
defit __ZN17CCMenuItemToggler6createEPN7cocos2d6CCNodeES2_PNS0_8CCObjectEMS3_FvS4_E, 0x38400

; CCMenuItemToggler::setSizeMult(float)
defit __ZN17CCMenuItemToggler11setSizeMultEf, 0x38a40

; CCMenuItemToggler::toggle(bool)
defit __ZN17CCMenuItemToggler6toggleEb, 0x38950

; CCMoveCNode::create()
defit __ZN11CCMoveCNode6createEv, 0x1842a0

; CCMoveCNode::init()
defit __ZN11CCMoveCNode4initEv, 0x18b3d0

; CCMoveCNode::~CCMoveCNode()
defit __ZN11CCMoveCNodeD0Ev, 0x18b360

; CCMoveCNode::~CCMoveCNode()
defit __ZN11CCMoveCNodeD1Ev, 0x18b310

; CCMoveCNode::~CCMoveCNode()
defit __ZN11CCMoveCNodeD2Ev, 0x18b2c0

; ScrollingLayer::create(cocos2d::CCSize, cocos2d::CCPoint, float)
defit __ZN14ScrollingLayer6createEN7cocos2d6CCSizeENS0_7CCPointEf, 0x41a900

; CCNodeContainer::create()
defit __ZN15CCNodeContainer6createEv, 0xb1090

; CCNodeContainer::init()
defit __ZN15CCNodeContainer4initEv, 0xba950

; CCNodeContainer::visit()
defit __ZN15CCNodeContainer5visitEv, 0xba960

; CCNodeContainer::~CCNodeContainer()
defit __ZN15CCNodeContainerD0Ev, 0xba9c0

; CCNodeContainer::~CCNodeContainer()
defit __ZN15CCNodeContainerD1Ev, 0xba9b0

; CCScrollLayerExt::moveToTop()
defit __ZN16CCScrollLayerExt9moveToTopEv, 0x235870

; CCScrollLayerExt::moveToTopWithOffset(float)
defit __ZN16CCScrollLayerExt19moveToTopWithOffsetEf, 0x2357d0

; CCSpritePlus::initWithSpriteFrameName(char const*)
defit __ZN12CCSpritePlus23initWithSpriteFrameNameEPKc, 0x248670

; CCTextInputNode::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN15CCTextInputNode12ccTouchBeganEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x5ec80

; non-virtual thunk to CCTextInputNode::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZThn288_N15CCTextInputNode12ccTouchBeganEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x5ee40

; CCTextInputNode::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN15CCTextInputNode16ccTouchCancelledEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x5ee80

; non-virtual thunk to CCTextInputNode::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZThn288_N15CCTextInputNode16ccTouchCancelledEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x5ee90

; CCTextInputNode::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN15CCTextInputNode12ccTouchEndedEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x5ee60

; non-virtual thunk to CCTextInputNode::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZThn288_N15CCTextInputNode12ccTouchEndedEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x5ee70

; CCTextInputNode::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN15CCTextInputNode12ccTouchMovedEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x5eea0

; non-virtual thunk to CCTextInputNode::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZThn288_N15CCTextInputNode12ccTouchMovedEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x5eeb0

; CCTextInputNode::create(float, float, char const*, char const*, int, char const*)
defit __ZN15CCTextInputNode6createEffPKcS1_iS1_, 0x5cfb0

; CCTextInputNode::forceOffset()
defit __ZN15CCTextInputNode11forceOffsetEv, 0x5ec70

; CCTextInputNode::getString()
defit __ZN15CCTextInputNode9getStringEv, 0x5d6f0

; CCTextInputNode::init(float, float, char const*, char const*, int, char const*)
defit __ZN15CCTextInputNode4initEffPKcS1_iS1_, 0x5d180

; CCTextInputNode::keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&)
defit __ZN15CCTextInputNode16keyboardWillHideERN7cocos2d29CCIMEKeyboardNotificationInfoE, 0x5dc20

; non-virtual thunk to CCTextInputNode::keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&)
defit __ZThn368_N15CCTextInputNode16keyboardWillHideERN7cocos2d29CCIMEKeyboardNotificationInfoE, 0x5dcb0

; CCTextInputNode::keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&)
defit __ZN15CCTextInputNode16keyboardWillShowERN7cocos2d29CCIMEKeyboardNotificationInfoE, 0x5dad0

; non-virtual thunk to CCTextInputNode::keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&)
defit __ZThn368_N15CCTextInputNode16keyboardWillShowERN7cocos2d29CCIMEKeyboardNotificationInfoE, 0x5dc00

; CCTextInputNode::onClickTrackNode(bool)
defit __ZN15CCTextInputNode16onClickTrackNodeEb, 0x5dd40

; CCTextInputNode::onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF*)
defit __ZN15CCTextInputNode24onTextFieldAttachWithIMEEPN7cocos2d14CCTextFieldTTFE, 0x5e2c0

; non-virtual thunk to CCTextInputNode::onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF*)
defit __ZThn376_N15CCTextInputNode24onTextFieldAttachWithIMEEPN7cocos2d14CCTextFieldTTFE, 0x5e5f0

; CCTextInputNode::onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF*)
defit __ZN15CCTextInputNode24onTextFieldDetachWithIMEEPN7cocos2d14CCTextFieldTTFE, 0x5e610

; non-virtual thunk to CCTextInputNode::onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF*)
defit __ZThn376_N15CCTextInputNode24onTextFieldDetachWithIMEEPN7cocos2d14CCTextFieldTTFE, 0x5ec50

; CCTextInputNode::onTextFieldInsertText(cocos2d::CCTextFieldTTF*, char const*, int)
defit __ZN15CCTextInputNode21onTextFieldInsertTextEPN7cocos2d14CCTextFieldTTFEPKci, 0x5de50

; non-virtual thunk to CCTextInputNode::onTextFieldInsertText(cocos2d::CCTextFieldTTF*, char const*, int)
defit __ZThn376_N15CCTextInputNode21onTextFieldInsertTextEPN7cocos2d14CCTextFieldTTFEPKci, 0x5e2a0

; CCTextInputNode::refreshLabel()
defit __ZN15CCTextInputNode12refreshLabelEv, 0x5d730

; CCTextInputNode::registerWithTouchDispatcher()
defit __ZN15CCTextInputNode27registerWithTouchDispatcherEv, 0x5eec0

; CCTextInputNode::setAllowedChars(std::string)
defit __ZN15CCTextInputNode15setAllowedCharsESs, 0x5d360

; CCTextInputNode::setLabelNormalColor(cocos2d::_ccColor3B)
defit __ZN15CCTextInputNode19setLabelNormalColorEN7cocos2d10_ccColor3BE, 0x5dab0

; CCTextInputNode::setLabelPlaceholderColor(cocos2d::_ccColor3B)
defit __ZN15CCTextInputNode24setLabelPlaceholderColorEN7cocos2d10_ccColor3BE, 0x5da90

; CCTextInputNode::setLabelPlaceholderScale(float)
defit __ZN15CCTextInputNode24setLabelPlaceholderScaleEf, 0x5da70

; CCTextInputNode::setMaxLabelScale(float)
defit __ZN15CCTextInputNode16setMaxLabelScaleEf, 0x5da30

; CCTextInputNode::setMaxLabelWidth(float)
defit __ZN15CCTextInputNode16setMaxLabelWidthEf, 0x5da50

; CCTextInputNode::setString(std::string)
defit __ZN15CCTextInputNode9setStringESs, 0x5d3e0

; CCTextInputNode::textChanged()
defit __ZN15CCTextInputNode11textChangedEv, 0x5dd70

; non-virtual thunk to CCTextInputNode::textChanged()
defit __ZThn288_N15CCTextInputNode11textChangedEv, 0x5de30

; CCTextInputNode::updateLabel(std::string)
defit __ZN15CCTextInputNode11updateLabelESs, 0x5d4a0

; CCTextInputNode::visit()
defit __ZN15CCTextInputNode5visitEv, 0x5d380

; non-virtual thunk to CCTextInputNode::~CCTextInputNode()
;defit __ZThn284_N15CCTextInputNodeD1Ev, 0x5ceb0

; non-virtual thunk to CCTextInputNode::~CCTextInputNode()
;defit __ZThn284_N15CCTextInputNodeD1Ev, 0x5cec0

; non-virtual thunk to CCTextInputNode::~CCTextInputNode()
;defit __ZThn284_N15CCTextInputNodeD1Ev, 0x5cee0

; non-virtual thunk to CCTextInputNode::~CCTextInputNode()
;defit __ZThn284_N15CCTextInputNodeD1Ev, 0x5cf00

; non-virtual thunk to CCTextInputNode::~CCTextInputNode()
;defit __ZThn284_N15CCTextInputNodeD1Ev, 0x5cf30

; non-virtual thunk to CCTextInputNode::~CCTextInputNode()
;defit __ZThn284_N15CCTextInputNodeD1Ev, 0x5cf70

; CheckpointObject::create()
defit __ZN16CheckpointObject6createEv, 0x7e7d0

; CheckpointObject::getObject()
defit __ZN16CheckpointObject9getObjectEv, 0x7ef50

; CollisionBlockPopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN19CollisionBlockPopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x130010

; CollisionBlockPopup::onNextItemID(cocos2d::CCObject*)
defit __ZN19CollisionBlockPopup12onNextItemIDEPN7cocos2d8CCObjectE, 0x130e60

; CollisionTriggerAction::createFromString(std::string)
defit __ZN22CollisionTriggerAction16createFromStringESs, 0x176ee0

; ColorAction::ColorAction()
;defit __ZN11ColorActionC2Ev, 0x17c990

; ColorAction::ColorAction()
;defit __ZN11ColorActionC2Ev, 0x17cab0

; ColorAction::ColorAction()
;defit __ZN11ColorActionC2Ev, 0x17cc10

; ColorAction::ColorAction()
;defit __ZN11ColorActionC2Ev, 0x17cd40

; ColorAction::getSaveString()
defit __ZN11ColorAction13getSaveStringEv, 0x17d080

; ColorAction::setupFromDict(cocos2d::CCDictionary*)
defit __ZN11ColorAction13setupFromDictEPN7cocos2d12CCDictionaryE, 0x17f310

; ColorAction::setupFromString(std::string)
defit __ZN11ColorAction15setupFromStringESs, 0x17f270

; ColorChannelSprite::updateBlending(bool)
defit __ZN18ColorChannelSprite14updateBlendingEb, 0x16e1d0

; ColorChannelSprite::updateCopyLabel(int, bool)
defit __ZN18ColorChannelSprite15updateCopyLabelEib, 0x16ded0

; ColorChannelSprite::updateOpacity(float)
defit __ZN18ColorChannelSprite13updateOpacityEf, 0x16e080

; ColorChannelSprite::updateValues(ColorAction*)
defit __ZN18ColorChannelSprite12updateValuesEP11ColorAction, 0x16e2e0

; ColorSelectLiveOverlay::ColorSelectLiveOverlay()
;defit __ZN22ColorSelectLiveOverlayC2Ev, 0x2e2580

; ColorSelectLiveOverlay::~ColorSelectLiveOverlay()
defit __ZN22ColorSelectLiveOverlayD0Ev, 0x2e24f0

; ColorSelectLiveOverlay::~ColorSelectLiveOverlay()
defit __ZN22ColorSelectLiveOverlayD1Ev, 0x2e24c0

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
defit __ZN16ColorSelectPopupD0Ev, 0x41eb00

; ColorSelectPopup::~ColorSelectPopup()
defit __ZN16ColorSelectPopupD1Ev, 0x41ead0

; ColorSelectPopup::~ColorSelectPopup()
defit __ZN16ColorSelectPopupD2Ev, 0x41e960

; non-virtual thunk to ColorSelectPopup::~ColorSelectPopup()
defit __ZThn288_N16ColorSelectPopupD0Ev, 0x41eb30

; non-virtual thunk to ColorSelectPopup::~ColorSelectPopup()
defit __ZThn288_N16ColorSelectPopupD1Ev, 0x41eae0

; CommentCell::loadFromComment(GJComment*)
defit __ZN11CommentCell15loadFromCommentEP9GJComment, 0x111c70

; CountTriggerAction::createFromString(std::string)
defit __ZN18CountTriggerAction16createFromStringESs, 0x1754f0

; CreateMenuItem::create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*))
defit __ZN14CreateMenuItem6createEPN7cocos2d6CCNodeES2_PNS0_8CCObjectEMS3_FvS4_E, 0x1c580

; CreatorLayer::onMyLevels(cocos2d::CCObject*)
defit __ZN12CreatorLayer10onMyLevelsEPN7cocos2d8CCObjectE, 0x142b70

; CreatorLayer::onSavedLevels(cocos2d::CCObject*)
defit __ZN12CreatorLayer13onSavedLevelsEPN7cocos2d8CCObjectE, 0x142860

; CustomListView::create(cocos2d::CCArray*, float, float, int, BoomListType)
defit __ZN14CustomListView6createEPN7cocos2d7CCArrayEffi12BoomListType, 0x10d410

; CustomListView::getListCell(char const*)
defit __ZN14CustomListView11getListCellEPKc, 0x10d560

; CustomListView::loadCell(TableViewCell*, int)
defit __ZN14CustomListView8loadCellEP13TableViewCelli, 0x10e610

; CustomListView::setupList()
defit __ZN14CustomListView9setupListEv, 0x116e70

; CustomSongCell::loadFromObject(SongInfoObject*)
defit __ZN14CustomSongCell14loadFromObjectEP14SongInfoObject, 0x110220

; CustomSongLayer::init(LevelSettingsObject*)
defit __ZN15CustomSongLayer4initEP19LevelSettingsObject, 0xf06f0

; CustomSongLayer::onArtists(cocos2d::CCObject*)
defit __ZN15CustomSongLayer9onArtistsEPN7cocos2d8CCObjectE, 0xf1950

; CustomSongLayer::onSongBrowser(cocos2d::CCObject*)
defit __ZN15CustomSongLayer13onSongBrowserEPN7cocos2d8CCObjectE, 0xf18a0

; CustomSongWidget::create(SongInfoObject*, LevelSettingsObject*, bool, bool, bool, bool, bool)
defit __ZN16CustomSongWidget6createEP14SongInfoObjectP19LevelSettingsObjectbbbbb, 0x37bcc0

; CustomSongWidget::getSongInfoIfUnloaded()
defit __ZN16CustomSongWidget21getSongInfoIfUnloadedEv, 0x37e020

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

; DrawGridLayer::addToSpeedObjects(GameObject*)
defit __ZN13DrawGridLayer17addToSpeedObjectsEP10GameObject, 0x99900

; DrawGridLayer::create(cocos2d::CCNode*, LevelEditorLayer*)
defit __ZN13DrawGridLayer6createEPN7cocos2d6CCNodeEP16LevelEditorLayer, 0x920c0

; DrawGridLayer::draw()
defit __ZN13DrawGridLayer4drawEv, 0xa3c40

; DrawGridLayer::init(cocos2d::CCNode*, LevelEditorLayer*)
defit __ZN13DrawGridLayer4initEPN7cocos2d6CCNodeEP16LevelEditorLayer, 0xa36e0

; DrawGridLayer::timeForXPos(float)
defit __ZN13DrawGridLayer11timeForXPosEf, 0x9b330

; DrawGridLayer::update(float)
defit __ZN13DrawGridLayer6updateEf, 0xa3b30

; DrawGridLayer::updateTimeMarkers()
defit __ZN13DrawGridLayer17updateTimeMarkersEv, 0x92950

; DrawGridLayer::xPosForTime(float)
defit __ZN13DrawGridLayer11xPosForTimeEf, 0x9c830

; DrawGridLayer::~DrawGridLayer()
defit __ZN13DrawGridLayerD0Ev, 0xa3670

; DrawGridLayer::~DrawGridLayer()
defit __ZN13DrawGridLayerD1Ev, 0xa3640

; DrawGridLayer::~DrawGridLayer()
defit __ZN13DrawGridLayerD2Ev, 0xa3480

; non-virtual thunk to DrawGridLayer::~DrawGridLayer()
defit __ZThn288_N13DrawGridLayerD0Ev, 0xa36a0

; non-virtual thunk to DrawGridLayer::~DrawGridLayer()
defit __ZThn288_N13DrawGridLayerD1Ev, 0xa3650

; EditButtonBar::loadFromItems(cocos2d::CCArray*, int, int, bool)
defit __ZN13EditButtonBar13loadFromItemsEPN7cocos2d7CCArrayEiib, 0x351010

; EditorOptionsLayer::onButtonsPerRow(cocos2d::CCObject*)
defit __ZN18EditorOptionsLayer15onButtonsPerRowEPN7cocos2d8CCObjectE, 0x147b30

; non-virtual thunk to EditorPauseLayer::FLAlert_Clicked(FLAlertLayer*, bool)
;defit __ZThn412_N16EditorPauseLayer15FLAlert_ClickedEP12FLAlertLayerb, 0x13f1b0

; EditorPauseLayer::create(LevelEditorLayer*)
defit __ZN16EditorPauseLayer6createEP16LevelEditorLayer, 0x13c680

; EditorPauseLayer::customSetup()
defit __ZN16EditorPauseLayer11customSetupEv, 0x13cc00

; EditorPauseLayer::init(LevelEditorLayer*)
defit __ZN16EditorPauseLayer4initEP16LevelEditorLayer, 0x13c7a0

; non-virtual thunk to EditorPauseLayer::keyBackClicked()
;defit __ZThn244_N16EditorPauseLayer14keyBackClickedEv, 0x13f320

; non-virtual thunk to EditorPauseLayer::keyBackClicked()
;defit __ZThn244_N16EditorPauseLayer14keyBackClickedEv, 0x13f360

; non-virtual thunk to EditorPauseLayer::keyDown(cocos2d::enumKeyCodes)
;defit __ZThn248_N16EditorPauseLayer7keyDownEN7cocos2d12enumKeyCodesE, 0x13f3a0

; non-virtual thunk to EditorPauseLayer::keyDown(cocos2d::enumKeyCodes)
;defit __ZThn248_N16EditorPauseLayer7keyDownEN7cocos2d12enumKeyCodesE, 0x13f3c0

; EditorPauseLayer::saveLevel()
defit __ZN16EditorPauseLayer9saveLevelEv, 0x13ebd0

; non-virtual thunk to EditorPauseLayer::~EditorPauseLayer()
;defit __ZThn236_N16EditorPauseLayerD1Ev, 0x13c3b0

; non-virtual thunk to EditorPauseLayer::~EditorPauseLayer()
;defit __ZThn236_N16EditorPauseLayerD1Ev, 0x13c490

; non-virtual thunk to EditorPauseLayer::~EditorPauseLayer()
;defit __ZThn236_N16EditorPauseLayerD1Ev, 0x13c660

; EditorPauseLayer::~EditorPauseLayer()
defit __ZN16EditorPauseLayerD0Ev, 0x13c570

; EditorUI::EditorUI()
;defit __ZN8EditorUIC2Ev, 0x32220

; EditorUI::constrainGameLayerPosition()
defit __ZN8EditorUI26constrainGameLayerPositionEv, 0x1c6d0

; EditorUI::create(LevelEditorLayer*)
defit __ZN8EditorUI6createEP16LevelEditorLayer, 0x8a80

; EditorUI::deselectAll()
defit __ZN8EditorUI11deselectAllEv, 0x1f300

; EditorUI::disableButton(CreateMenuItem*)
defit __ZN8EditorUI13disableButtonEP14CreateMenuItem, 0x1c0f0

; EditorUI::editButtonUsable()
defit __ZN8EditorUI16editButtonUsableEv, 0x28f30

; EditorUI::editObject(cocos2d::CCObject*)
defit __ZN8EditorUI10editObjectEPN7cocos2d8CCObjectE, 0x195a0

; EditorUI::enableButton(CreateMenuItem*)
defit __ZN8EditorUI12enableButtonEP14CreateMenuItem, 0x1bff0

; EditorUI::getCreateBtn(int, int)
defit __ZN8EditorUI12getCreateBtnEii, 0x1f6c0

; EditorUI::getGroupCenter(cocos2d::CCArray*, bool)
defit __ZN8EditorUI14getGroupCenterEPN7cocos2d7CCArrayEb, 0x23470

; EditorUI::getSelectedObjects()
defit __ZN8EditorUI18getSelectedObjectsEv, 0x23f30

; EditorUI::init(LevelEditorLayer*)
defit __ZN8EditorUI4initEP16LevelEditorLayer, 0x8ae0

; EditorUI::keyDown(cocos2d::enumKeyCodes)
defit __ZN8EditorUI7keyDownEN7cocos2d12enumKeyCodesE, 0x30790

; EditorUI::moveObject(GameObject*, cocos2d::CCPoint)
defit __ZN8EditorUI10moveObjectEP10GameObjectN7cocos2d7CCPointE, 0x24b10

; EditorUI::onDeselectAll(CCObject*)
defit __ZN8EditorUI13onDeselectAllEPN7cocos2d8CCObjectE, 0x19cd0

; EditorUI::onDuplicate(cocos2d::CCObject*)
defit __ZN8EditorUI11onDuplicateEPN7cocos2d8CCObjectE, 0x18ba0

; EditorUI::pasteObjects(std::string)
defit __ZN8EditorUI12pasteObjectsESs, 0x232d0

; EditorUI::playerTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN8EditorUI16playerTouchBeganEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x2ebf0

; EditorUI::playtestStopped()
defit __ZN8EditorUI15playtestStoppedEv, 0x24790

; EditorUI::redoLastAction(cocos2d::CCObject*)
defit __ZN8EditorUI14redoLastActionEPN7cocos2d8CCObjectE, 0xb8e0

; EditorUI::replaceGroupID(GameObject*, int, int)
defit __ZN8EditorUI14replaceGroupIDEP10GameObjectii, 0x27470

; EditorUI::scaleChanged(float)
defit __ZN8EditorUI12scaleChangedEf, 0x25490

; EditorUI::scaleObjects(cocos2d::CCArray*, float, cocos2d::CCPoint)
defit __ZN8EditorUI12scaleObjectsEPN7cocos2d7CCArrayEfNS0_7CCPointE, 0x252e0

; EditorUI::selectObjects(cocos2d::CCArray*, bool)
defit __ZN8EditorUI13selectObjectsEPN7cocos2d7CCArrayEb, 0x23940

; EditorUI::setupCreateMenu()
defit __ZN8EditorUI15setupCreateMenuEv, 0xcb50

; EditorUI::undoLastAction(cocos2d::CCObject*)
defit __ZN8EditorUI14undoLastActionEPN7cocos2d8CCObjectE, 0xb830

; EditorUI::updateButtons()
defit __ZN8EditorUI13updateButtonsEv, 0x1a300

; EditorUI::updateObjectInfoLabel()
defit __ZN8EditorUI21updateObjectInfoLabelEv, 0x1cb10

; EditorUI::updateSlider()
defit __ZN8EditorUI12updateSliderEv, 0x18a90

; EditorUI::updateZoom(float)
defit __ZN8EditorUI10updateZoomEf, 0x248c0

; EffectGameObject::EffectGameObject()
;defit __ZN16EffectGameObjectC2Ev, 0xdc2d0

; EffectGameObject::create(char const*)
defit __ZN16EffectGameObject6createEPKc, 0xc9790

; EffectGameObject::getTargetColorIndex()
defit __ZN16EffectGameObject19getTargetColorIndexEv, 0xca1f0

; EffectGameObject::triggerObject(GJBaseGameLayer*)
defit __ZN16EffectGameObject13triggerObjectEP15GJBaseGameLayer, 0xc9870

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

; non-virtual thunk to FLAlertLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZThn288_N12FLAlertLayer12ccTouchBeganEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x25eed0

; FLAlertLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN12FLAlertLayer16ccTouchCancelledEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x25f020

; non-virtual thunk to FLAlertLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZThn288_N12FLAlertLayer16ccTouchCancelledEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x25f060

; FLAlertLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN12FLAlertLayer12ccTouchEndedEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x25ef60

; non-virtual thunk to FLAlertLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZThn288_N12FLAlertLayer12ccTouchEndedEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x25efc0

; FLAlertLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN12FLAlertLayer12ccTouchMovedEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x25f0a0

; non-virtual thunk to FLAlertLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZThn288_N12FLAlertLayer12ccTouchMovedEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x25f0e0

; FLAlertLayer::create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float)
defit __ZN12FLAlertLayer6createEP20FLAlertLayerProtocolPKcSsS3_S3_f, 0x25e0e0

; FLAlertLayer::create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)
;defit __ZN12FLAlertLayer6createEP20FLAlertLayerProtocolPKcSsS3_S3_fbf, 0x25de00

; FLAlertLayer::create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)
defit __ZN12FLAlertLayer6createEP20FLAlertLayerProtocolPKcSsS3_S3_fbf, 0x25dec0

; FLAlertLayer::init(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)
defit __ZN12FLAlertLayer4initEP20FLAlertLayerProtocolPKcSsS3_S3_fbf, 0x25e1b0

; FLAlertLayer::keyBackClicked()
defit __ZN12FLAlertLayer14keyBackClickedEv, 0x25ed90

; non-virtual thunk to FLAlertLayer::keyBackClicked()
defit __ZThn304_N12FLAlertLayer14keyBackClickedEv, 0x25ee20

; FLAlertLayer::keyDown(cocos2d::enumKeyCodes)
defit __ZN12FLAlertLayer7keyDownEN7cocos2d12enumKeyCodesE, 0x25ece0

; non-virtual thunk to FLAlertLayer::keyDown(cocos2d::enumKeyCodes)
defit __ZThn312_N12FLAlertLayer7keyDownEN7cocos2d12enumKeyCodesE, 0x25ed70

; FLAlertLayer::onEnter()
defit __ZN12FLAlertLayer7onEnterEv, 0x25f350

; FLAlertLayer::registerWithTouchDispatcher()
defit __ZN12FLAlertLayer27registerWithTouchDispatcherEv, 0x25f2e0

; FLAlertLayer::show()
defit __ZN12FLAlertLayer4showEv, 0x25f120

; FLAlertLayer::~FLAlertLayer()
defit __ZN12FLAlertLayerD0Ev, 0x25dd00

; FLAlertLayer::~FLAlertLayer()
defit __ZN12FLAlertLayerD1Ev, 0x25db60

; FLAlertLayer::~FLAlertLayer()
defit __ZN12FLAlertLayerD2Ev, 0x25da90

; non-virtual thunk to FLAlertLayer::~FLAlertLayer()
defit __ZThn288_N12FLAlertLayerD0Ev, 0x25dde0

; non-virtual thunk to FLAlertLayer::~FLAlertLayer()
defit __ZThn288_N12FLAlertLayerD1Ev, 0x25dc30

; FMOD::Channel::getPosition(unsigned int*, unsigned int)
defit __ZN4FMOD7Channel11getPositionEPjj, 0x89c3e0

; FMOD::Channel::setPosition(unsigned int, unsigned int)
defit __ZN4FMOD7Channel11setPositionEjj, 0x89c3e8

; FMOD::ChannelControl::getDSP(int, FMOD::DSP**)
defit __ZN4FMOD14ChannelControl6getDSPEiPPNS_3DSPE, 0x89c330

; FMOD::ChannelControl::getPaused(bool*)
defit __ZN4FMOD14ChannelControl9getPausedEPb, 0x89c340

; FMOD::ChannelControl::getVolume(float*)
defit __ZN4FMOD14ChannelControl9getVolumeEPf, 0x89c348

; FMOD::ChannelControl::isPlaying(bool*)
defit __ZN4FMOD14ChannelControl9isPlayingEPb, 0x89c350

; FMOD::ChannelControl::setCallback(FMOD_RESULT (*)(FMOD_CHANNELCONTROL*, FMOD_CHANNELCONTROL_TYPE, FMOD_CHANNELCONTROL_CALLBACK_TYPE, void*, void*))
defit __ZN4FMOD14ChannelControl11setCallbackEPF11FMOD_RESULTP19FMOD_CHANNELCONTROL24FMOD_CHANNELCONTROL_TYPE33FMOD_CHANNELCONTROL_CALLBACK_TYPEPvS6_E, 0x89c320

; FMOD::ChannelControl::setMode(unsigned int)
defit __ZN4FMOD14ChannelControl7setModeEj, 0x89c338

; FMOD::ChannelControl::setPaused(bool)
defit __ZN4FMOD14ChannelControl9setPausedEb, 0x89c358

; FMOD::ChannelControl::setVolume(float)
defit __ZN4FMOD14ChannelControl9setVolumeEf, 0x89c360

; FMOD::ChannelControl::stop()
defit __ZN4FMOD14ChannelControl4stopEv, 0x89c328

; FMOD::DSP::getMeteringInfo(FMOD_DSP_METERING_INFO*, FMOD_DSP_METERING_INFO*)
defit __ZN4FMOD3DSP15getMeteringInfoEP22FMOD_DSP_METERING_INFOS2_, 0x89c368

; FMOD::DSP::setMeteringEnabled(bool, bool)
defit __ZN4FMOD3DSP18setMeteringEnabledEbb, 0x89c370

; FMOD::Sound::release()
defit __ZN4FMOD5Sound7releaseEv, 0x89c378

; FMOD::System::close()
defit __ZN4FMOD6System5closeEv, 0x89c3c0

; FMOD::System::createSound(char const*, unsigned int, FMOD_CREATESOUNDEXINFO*, FMOD::Sound**)
defit __ZN4FMOD6System11createSoundEPKcjP22FMOD_CREATESOUNDEXINFOPPNS_5SoundE, 0x89c388

; FMOD::System::createStream(char const*, unsigned int, FMOD_CREATESOUNDEXINFO*, FMOD::Sound**)
defit __ZN4FMOD6System12createStreamEPKcjP22FMOD_CREATESOUNDEXINFOPPNS_5SoundE, 0x89c398

; FMOD::System::getSoftwareFormat(int*, FMOD_SPEAKERMODE*, int*)
defit __ZN4FMOD6System17getSoftwareFormatEPiP16FMOD_SPEAKERMODES1_, 0x89c3a8

; FMOD::System::getVersion(unsigned int*)
defit __ZN4FMOD6System10getVersionEPj, 0x89c380

; FMOD::System::init(int, unsigned int, void*)
defit __ZN4FMOD6System4initEijPv, 0x89c3b8

; FMOD::System::mixerResume()
defit __ZN4FMOD6System11mixerResumeEv, 0x89c390

; FMOD::System::mixerSuspend()
defit __ZN4FMOD6System12mixerSuspendEv, 0x89c3a0

; FMOD::System::playSound(FMOD::Sound*, FMOD::ChannelGroup*, bool, FMOD::Channel**)
defit __ZN4FMOD6System9playSoundEPNS_5SoundEPNS_12ChannelGroupEbPPNS_7ChannelE, 0x89c3d8

; FMOD::System::release()
defit __ZN4FMOD6System7releaseEv, 0x89c3d0

; FMOD::System::setSoftwareFormat(int, FMOD_SPEAKERMODE, int)
defit __ZN4FMOD6System17setSoftwareFormatEi16FMOD_SPEAKERMODEi, 0x89c3b0

; FMOD::System::update()
defit __ZN4FMOD6System6updateEv, 0x89c3c8

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

; GJAccountManager::sharedState()
defit __ZN16GJAccountManager11sharedStateEv, 0x85070

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

; non-virtual thunk to GJBaseGameLayer::spawnGroup(int)
defit __ZThn368_N15GJBaseGameLayer10spawnGroupEi, 0xb7190

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

; non-virtual thunk to GJBaseGameLayer::toggleGroupTriggered(int, bool)
defit __ZThn368_N15GJBaseGameLayer20toggleGroupTriggeredEib, 0xb7720

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

; GJBaseGameLayer::~GJBaseGameLayer()
defit __ZN15GJBaseGameLayerD0Ev, 0xafc20

; GJBaseGameLayer::~GJBaseGameLayer()
defit __ZN15GJBaseGameLayerD1Ev, 0xafbf0

; GJBaseGameLayer::~GJBaseGameLayer()
defit __ZN15GJBaseGameLayerD2Ev, 0xaf990

; non-virtual thunk to GJBaseGameLayer::~GJBaseGameLayer()
defit __ZThn288_N15GJBaseGameLayerD0Ev, 0xafc50

; non-virtual thunk to GJBaseGameLayer::~GJBaseGameLayer()
defit __ZThn288_N15GJBaseGameLayerD1Ev, 0xafc00

; GJColorSetupLayer::updateSpriteColors()
defit __ZN17GJColorSetupLayer18updateSpriteColorsEv, 0xefe50

; GJCommentListLayer::create(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool)
defit __ZN18GJCommentListLayer6createEP12BoomListViewPKcN7cocos2d10_ccColor4BEffb, 0x147d00

; GJDropDownLayer::GJDropDownLayer()
;defit __ZN15GJDropDownLayerC2Ev, 0x43af70

; non-virtual thunk to GJDropDownLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*)
;defit __ZThn236_N15GJDropDownLayer12ccTouchBeganEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x352940

; non-virtual thunk to GJDropDownLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*)
;defit __ZThn236_N15GJDropDownLayer16ccTouchCancelledEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x352980

; non-virtual thunk to GJDropDownLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*)
;defit __ZThn236_N15GJDropDownLayer12ccTouchEndedEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x352960

; non-virtual thunk to GJDropDownLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*)
;defit __ZThn236_N15GJDropDownLayer12ccTouchMovedEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x3529a0

; GJDropDownLayer::create(char const*)
defit __ZN15GJDropDownLayer6createEPKc, 0x352530

; GJDropDownLayer::create(char const*, float)
;defit __ZN15GJDropDownLayer6createEPKcf, 0x351fa0

; GJDropDownLayer::customSetup()
defit __ZN15GJDropDownLayer11customSetupEv, 0x352570

; GJDropDownLayer::disableUI()
defit __ZN15GJDropDownLayer9disableUIEv, 0x352580

; GJDropDownLayer::draw()
defit __ZN15GJDropDownLayer4drawEv, 0x352910

; GJDropDownLayer::enableUI()
defit __ZN15GJDropDownLayer8enableUIEv, 0x3525a0

; GJDropDownLayer::enterAnimFinished()
defit __ZN15GJDropDownLayer17enterAnimFinishedEv, 0x3528a0

; GJDropDownLayer::enterLayer()
defit __ZN15GJDropDownLayer10enterLayerEv, 0x3525c0

; GJDropDownLayer::exitLayer(cocos2d::CCObject*)
defit __ZN15GJDropDownLayer9exitLayerEPN7cocos2d8CCObjectE, 0x352670

; GJDropDownLayer::hideLayer(bool)
defit __ZN15GJDropDownLayer9hideLayerEb, 0x3527b0

; GJDropDownLayer::init(char const*, float)
defit __ZN15GJDropDownLayer4initEPKcf, 0x352100

; GJDropDownLayer::keyBackClicked()
defit __ZN15GJDropDownLayer14keyBackClickedEv, 0x352630

; non-virtual thunk to GJDropDownLayer::keyBackClicked()
defit __ZThn304_N15GJDropDownLayer14keyBackClickedEv, 0x352650

; GJDropDownLayer::layerHidden()
defit __ZN15GJDropDownLayer11layerHiddenEv, 0x3528d0

; GJDropDownLayer::layerVisible()
defit __ZN15GJDropDownLayer12layerVisibleEv, 0x3528b0

; GJDropDownLayer::registerWithTouchDispatcher()
defit __ZN15GJDropDownLayer27registerWithTouchDispatcherEv, 0x3525f0

; GJDropDownLayer::showLayer(bool)
defit __ZN15GJDropDownLayer9showLayerEb, 0x3526c0

; GJDropDownLayer::~GJDropDownLayer()
defit __ZN15GJDropDownLayerD0Ev, 0x351ea0

; GJDropDownLayer::~GJDropDownLayer()
defit __ZN15GJDropDownLayerD1Ev, 0x351d00

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

; GJEffectManager::~GJEffectManager()
defit __ZN15GJEffectManagerD0Ev, 0x1800c0

; GJEffectManager::~GJEffectManager()
defit __ZN15GJEffectManagerD1Ev, 0x1800b0

; GJEffectManager::~GJEffectManager()
defit __ZN15GJEffectManagerD2Ev, 0x17fe00

; GJFollowCommandLayer::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN20GJFollowCommandLayer6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x16a550

; GJFollowCommandLayer::onUpdateGroupID(cocos2d::CCObject*)
defit __ZN20GJFollowCommandLayer15onUpdateGroupIDEPN7cocos2d8CCObjectE, 0x16c8f0

; GJFollowCommandLayer::onUpdateGroupID2(cocos2d::CCObject*)
defit __ZN20GJFollowCommandLayer16onUpdateGroupID2EPN7cocos2d8CCObjectE, 0x16c9e0

; GJFollowCommandLayer::textChanged(CCTextInputNode*)
defit __ZN20GJFollowCommandLayer11textChangedEP15CCTextInputNode, 0x16d480

; GJFollowCommandLayer::updateTargetGroupID()
defit __ZN20GJFollowCommandLayer19updateTargetGroupIDEv, 0x16cfe0

; GJFollowCommandLayer::updateTargetGroupID2()
defit __ZN20GJFollowCommandLayer20updateTargetGroupID2Ev, 0x16d1c0

; GJGameLevel::create()
defit __ZN11GJGameLevel6createEv, 0x2b83e0

; GJGameLevel::getAudioFileName()
defit __ZN11GJGameLevel16getAudioFileNameEv, 0x2dbe70

; GJGameLevel::getCoinKey(int)
defit __ZN11GJGameLevel10getCoinKeyEi, 0x2ce360

; GJGameLevel::getLengthKey(int)
defit __ZN11GJGameLevel12getLengthKeyEi, 0x2dbba0

; GJGameLevel::getNormalPercent()
defit __ZN11GJGameLevel16getNormalPercentEv, 0x2b8b20

; GJGameLevel::levelWasAltered()
defit __ZN11GJGameLevel15levelWasAlteredEv, 0x2db530

; GJGameLevel::savePercentage(int, bool, int, int, bool)
defit __ZN11GJGameLevel14savePercentageEibiib, 0x2db700

; GJGroundLayer::create(int, int)
defit __ZN13GJGroundLayer6createEii, 0x355c00

; GJGroundLayer::createLine(int)
defit __ZN13GJGroundLayer10createLineEi, 0x356220

; GJGroundLayer::deactivateGround()
defit __ZN13GJGroundLayer16deactivateGroundEv, 0x356a40

; GJGroundLayer::getGroundY()
defit __ZN13GJGroundLayer10getGroundYEv, 0x356ac0

; GJGroundLayer::init(int, int)
defit __ZN13GJGroundLayer4initEii, 0x355d10

; GJGroundLayer::loadGroundSprites(int, bool)
defit __ZN13GJGroundLayer17loadGroundSpritesEib, 0x3563d0

; GJGroundLayer::updateGround01Color(cocos2d::_ccColor3B)
defit __ZN13GJGroundLayer19updateGround01ColorEN7cocos2d10_ccColor3BE, 0x356640

; GJGroundLayer::updateGround02Color(cocos2d::_ccColor3B)
defit __ZN13GJGroundLayer19updateGround02ColorEN7cocos2d10_ccColor3BE, 0x356710

; GJGroundLayer::updateGroundPos(cocos2d::CCPoint)
defit __ZN13GJGroundLayer15updateGroundPosEN7cocos2d7CCPointE, 0x3566c0

; GJGroundLayer::updateGroundWidth()
defit __ZN13GJGroundLayer17updateGroundWidthEv, 0x356790

; GJLevelScoreCell::loadFromScore(GJUserScore*)
defit __ZN16GJLevelScoreCell13loadFromScoreEP11GJUserScore, 0x114aa0

; GJMessageCell::loadFromMessage(GJUserMessage*)
defit __ZN13GJMessageCell15loadFromMessageEP13GJUserMessage, 0x1163d0

; GJMoreGamesLayer::create()
defit __ZN16GJMoreGamesLayer6createEv, 0x43a5f0

; GJMoreGamesLayer::customSetup()
defit __ZN16GJMoreGamesLayer11customSetupEv, 0x43ae60

; GJMoreGamesLayer::getMoreGamesList()
defit __ZN16GJMoreGamesLayer16getMoreGamesListEv, 0x43a830

; non-virtual thunk to GJMoreGamesLayer::~GJMoreGamesLayer()
;defit __ZThn236_N16GJMoreGamesLayerD1Ev, 0x43a790

; non-virtual thunk to GJMoreGamesLayer::~GJMoreGamesLayer()
;defit __ZThn236_N16GJMoreGamesLayerD1Ev, 0x43a7c0

; GJMoveCommandLayer::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN18GJMoveCommandLayer6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x36f8a0

; GJMoveCommandLayer::init(EffectGameObject*, cocos2d::CCArray*)
defit __ZN18GJMoveCommandLayer4initEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x36fac0

; GJMoveCommandLayer::keyBackClicked()
defit __ZN18GJMoveCommandLayer14keyBackClickedEv, 0x374970

; non-virtual thunk to GJMoveCommandLayer::keyBackClicked()
defit __ZThn304_N18GJMoveCommandLayer14keyBackClickedEv, 0x374a60

; GJMoveCommandLayer::onUpdateGroupID(cocos2d::CCObject*)
defit __ZN18GJMoveCommandLayer15onUpdateGroupIDEPN7cocos2d8CCObjectE, 0x373350

; GJMoveCommandLayer::onUpdateGroupID2(cocos2d::CCObject*)
defit __ZN18GJMoveCommandLayer16onUpdateGroupID2EPN7cocos2d8CCObjectE, 0x3734c0

; GJMoveCommandLayer::textChanged(CCTextInputNode*)
defit __ZN18GJMoveCommandLayer11textChangedEP15CCTextInputNode, 0x374470

; non-virtual thunk to GJMoveCommandLayer::textChanged(CCTextInputNode*)
defit __ZThn592_N18GJMoveCommandLayer11textChangedEP15CCTextInputNode, 0x374950

; GJMoveCommandLayer::textInputClosed(CCTextInputNode*)
defit __ZN18GJMoveCommandLayer15textInputClosedEP15CCTextInputNode, 0x374430

; non-virtual thunk to GJMoveCommandLayer::textInputClosed(CCTextInputNode*)
defit __ZThn592_N18GJMoveCommandLayer15textInputClosedEP15CCTextInputNode, 0x374450

; GJMoveCommandLayer::textInputReturn(CCTextInputNode*)
defit __ZN18GJMoveCommandLayer15textInputReturnEP15CCTextInputNode, 0x374c10

; non-virtual thunk to GJMoveCommandLayer::textInputReturn(CCTextInputNode*)
defit __ZThn592_N18GJMoveCommandLayer15textInputReturnEP15CCTextInputNode, 0x374c70

; GJMoveCommandLayer::textInputShouldOffset(CCTextInputNode*, float)
defit __ZN18GJMoveCommandLayer21textInputShouldOffsetEP15CCTextInputNodef, 0x374b50

; non-virtual thunk to GJMoveCommandLayer::textInputShouldOffset(CCTextInputNode*, float)
defit __ZThn592_N18GJMoveCommandLayer21textInputShouldOffsetEP15CCTextInputNodef, 0x374bb0

; GJMoveCommandLayer::updateEditorLabel()
defit __ZN18GJMoveCommandLayer17updateEditorLabelEv, 0x374110

; GJMoveCommandLayer::updateMoveTargetElements()
defit __ZN18GJMoveCommandLayer24updateMoveTargetElementsEv, 0x373ac0

; GJMoveCommandLayer::updateTargetGroupID()
defit __ZN18GJMoveCommandLayer19updateTargetGroupIDEv, 0x374050

; GJMoveCommandLayer::updateTargetGroupID2()
defit __ZN18GJMoveCommandLayer20updateTargetGroupID2Ev, 0x374230

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

; non-virtual thunk to GJMoveCommandLayer::valuePopupClosed(ConfigureValuePopup*, float)
defit __ZThn600_N18GJMoveCommandLayer16valuePopupClosedEP19ConfigureValuePopupf, 0x373d50

; GJMoveCommandLayer::~GJMoveCommandLayer()
defit __ZN18GJMoveCommandLayerD0Ev, 0x36f830

; GJMoveCommandLayer::~GJMoveCommandLayer()
defit __ZN18GJMoveCommandLayerD1Ev, 0x36f800

; GJMoveCommandLayer::~GJMoveCommandLayer()
defit __ZN18GJMoveCommandLayerD2Ev, 0x36f6b0

; non-virtual thunk to GJMoveCommandLayer::~GJMoveCommandLayer()
defit __ZThn288_N18GJMoveCommandLayerD0Ev, 0x36f860

; non-virtual thunk to GJMoveCommandLayer::~GJMoveCommandLayer()
defit __ZThn288_N18GJMoveCommandLayerD1Ev, 0x36f810

; GJPFollowCommandLayer::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN21GJPFollowCommandLayer6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x1aea20

; GJPFollowCommandLayer::textChanged(CCTextInputNode*)
defit __ZN21GJPFollowCommandLayer11textChangedEP15CCTextInputNode, 0x1b1dc0

; GJPFollowCommandLayer::updateTargetGroupID()
defit __ZN21GJPFollowCommandLayer19updateTargetGroupIDEv, 0x1b1a60

; GJRequestCell::loadFromScore(GJUserScore*)
defit __ZN13GJRequestCell13loadFromScoreEP11GJUserScore, 0x115b70

; GJRobotSprite::create()
defit __ZN13GJRobotSprite6createEv, 0x34ac00

; GJRobotSprite::updateColor02(cocos2d::_ccColor3B)
defit __ZN13GJRobotSprite13updateColor02EN7cocos2d10_ccColor3BE, 0x34bbd0

; GJRobotSprite::updateFrame(int)
defit __ZN13GJRobotSprite11updateFrameEi, 0x34bdd0

; GJRotateCommandLayer::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN20GJRotateCommandLayer6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x1ba0

; GJRotateCommandLayer::onUpdateGroupID(cocos2d::CCObject*)
defit __ZN20GJRotateCommandLayer15onUpdateGroupIDEPN7cocos2d8CCObjectE, 0x4bb0

; GJRotateCommandLayer::onUpdateGroupID2(cocos2d::CCObject*)
defit __ZN20GJRotateCommandLayer16onUpdateGroupID2EPN7cocos2d8CCObjectE, 0x4ca0

; GJRotateCommandLayer::textChanged(CCTextInputNode*)
defit __ZN20GJRotateCommandLayer11textChangedEP15CCTextInputNode, 0x58d0

; GJRotateCommandLayer::updateTargetGroupID()
defit __ZN20GJRotateCommandLayer19updateTargetGroupIDEv, 0x54b0

; GJRotateCommandLayer::updateTargetGroupID2()
defit __ZN20GJRotateCommandLayer20updateTargetGroupID2Ev, 0x5690

; GJScoreCell::loadFromScore(GJUserScore*)
defit __ZN11GJScoreCell13loadFromScoreEP11GJUserScore, 0x113aa0

; GJSearchObject::create(SearchType)
defit __ZN14GJSearchObject6createE10SearchType, 0x2df120

; GJSearchObject::create(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, int, int)
defit __ZN14GJSearchObject6createE10SearchTypeSsSsSsibbbibbbbbbbbii, 0x2dee30

; GJSearchObject::getPageObject(int)
defit __ZN14GJSearchObject13getPageObjectEi, 0x2df9a0

; GJSongBrowser::GJSongBrowser()
;defit __ZN13GJSongBrowserC2Ev, 0x369170

; GJSongBrowser::create(LevelSettingsObject*)
defit __ZN13GJSongBrowser6createEP19LevelSettingsObject, 0x3685d0

; GJSongBrowser::init(LevelSettingsObject*)
defit __ZN13GJSongBrowser4initEP19LevelSettingsObject, 0x352550

; GJSongBrowser::loadPage(int)
defit __ZN13GJSongBrowser8loadPageEi, 0x368820

; GJSpecialColorSelect::textForColorIdx(int)
defit __ZN20GJSpecialColorSelect15textForColorIdxEi, 0x383a50

; GJSpiderSprite::create()
defit __ZN14GJSpiderSprite6createEv, 0x34c5b0

; GJUserCell::loadFromScore(GJUserScore*)
defit __ZN10GJUserCell13loadFromScoreEP11GJUserScore, 0x115300

; GManager::save()
defit __ZN8GManager4saveEv, 0x26f300

; GManager::saveData(DS_Dictionary*, std::string)
defit __ZN8GManager8saveDataEP13DS_DictionarySs, 0x26f4b0

; GManager::saveGMTo(std::string)
defit __ZN8GManager8saveGMToESs, 0x26f3b0

; GameLevelManager::createNewLevel()
defit __ZN16GameLevelManager14createNewLevelEv, 0x2b8180

; GameLevelManager::getPageInfo(char const*)
defit __ZN16GameLevelManager11getPageInfoEPKc, 0x2c0050

; GameLevelManager::getStoredOnlineLevels(char const*)
defit __ZN16GameLevelManager21getStoredOnlineLevelsEPKc, 0x2bfe80

; GameLevelManager::getTopArtists(int, int)
defit __ZN16GameLevelManager13getTopArtistsEii, 0x2ce3d0

; GameLevelManager::getTopArtistsKey(int)
defit __ZN16GameLevelManager16getTopArtistsKeyEi, 0x2ce7a0

; GameLevelManager::makeTimeStamp(char const*)
defit __ZN16GameLevelManager13makeTimeStampEPKc, 0x2bfd90

; GameLevelManager::sharedState()
defit __ZN16GameLevelManager11sharedStateEv, 0x2a8340

; GameManager::accountStatusChanged()
defit __ZN11GameManager20accountStatusChangedEv, 0x1cdad0

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

; GameManager::getGTexture(int)
defit __ZN11GameManager11getGTextureEi, 0x1cca40

; GameManager::getGameVariable(char const*)
defit __ZN11GameManager15getGameVariableEPKc, 0x1cccd0

; GameManager::getIntGameVariable(char const*)
defit __ZN11GameManager18getIntGameVariableEPKc, 0x1cd1d0

; GameManager::getUGV(char const*)
defit __ZN11GameManager6getUGVEPKc, 0x1ccfa0

; GameManager::init()
defit __ZN11GameManager4initEv, 0x1c2ec0

; GameManager::loadDeathEffect(int)
defit __ZN11GameManager15loadDeathEffectEi, 0x1cc690

; GameManager::loadFont(int)
defit __ZN11GameManager8loadFontEi, 0x1cc550

; GameManager::reloadAll(bool, bool, bool)
defit __ZN11GameManager9reloadAllEbbb, 0x1d08a0

; GameManager::reloadAllStep5()
defit __ZN11GameManager14reloadAllStep5Ev, 0x1d0b00

; GameManager::reportAchievementWithID(char const*, int, bool)
defit __ZN11GameManager23reportAchievementWithIDEPKcib, 0x1c6460

; GameManager::reportPercentageForLevel(int, int, bool)
defit __ZN11GameManager24reportPercentageForLevelEiib, 0x1c5b00

; GameManager::resolutionForKey(int)
defit __ZN11GameManager16resolutionForKeyEi, 0x1d0b40

; GameManager::setGameVariable(char const*, bool)
defit __ZN11GameManager15setGameVariableEPKcb, 0x1cca80

; GameManager::setIntGameVariable(char const*, int)
defit __ZN11GameManager18setIntGameVariableEPKci, 0x1cd0e0

; GameManager::setUGV(char const*, bool)
defit __ZN11GameManager6setUGVEPKcb, 0x1cce50

; GameManager::sharedState()
defit __ZN11GameManager11sharedStateEv, 0x1c2b30

; GameManager::update(float)
defit __ZN11GameManager6updateEf, 0x1d0270

; GameManager::~GameManager()
defit __ZN11GameManagerD0Ev, 0x1d0ff0

; GameManager::~GameManager()
defit __ZN11GameManagerD1Ev, 0x1d0fe0

; GameManager::~GameManager()
defit __ZN11GameManagerD2Ev, 0x1d0e00

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

; GameObject::commonSetup()
defit __ZN10GameObject11commonSetupEv, 0x2f5570

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

; GameObject::destroyObject()
defit __ZN10GameObject13destroyObjectEv, 0x336a00

; GameObject::determineSlopeDirection()
defit __ZN10GameObject23determineSlopeDirectionEv, 0x33a9e0

; GameObject::getActiveColorForMode(int, bool)
defit __ZN10GameObject21getActiveColorForModeEib, 0x343860

; GameObject::getBallFrame(int)
defit __ZN10GameObject12getBallFrameEi, 0x341bf0

; GameObject::getBoxOffset()
defit __ZN10GameObject12getBoxOffsetEv, 0x3353d0

; GameObject::getColorIndex()
defit __ZN10GameObject13getColorIndexEv, 0x343b90

; GameObject::getDidUpdateLastPosition()
defit __ZN10GameObject24getDidUpdateLastPositionEv, 0x343a20

; GameObject::getGroupID(int)
defit __ZN10GameObject10getGroupIDEi, 0x33ae10

; GameObject::getLastPosition()
defit __ZN10GameObject15getLastPositionEv, 0x3439d0

; GameObject::getMainColorMode()
defit __ZN10GameObject16getMainColorModeEv, 0x334c30

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

; GameObject::getSecondaryColorMode()
defit __ZN10GameObject21getSecondaryColorModeEv, 0x341c20

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

; GameObject::selectObject(cocos2d::_ccColor3B)
defit __ZN10GameObject12selectObjectEN7cocos2d10_ccColor3BE, 0x341f90

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

; GameObject::setPosition(cocos2d::CCPoint const&)
defit __ZN10GameObject11setPositionERKN7cocos2d7CCPointE, 0x335850

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

; GameObjectCopy::create(GameObject*)
defit __ZN14GameObjectCopy6createEP10GameObject, 0x975a0

; GameObjectCopy::resetObject()
defit __ZN14GameObjectCopy11resetObjectEv, 0x976a0

; GameObjectCopy::~GameObjectCopy()
defit __ZN14GameObjectCopyD0Ev, 0xa32e0

; GameObjectCopy::~GameObjectCopy()
defit __ZN14GameObjectCopyD1Ev, 0xa3290

; GameObjectCopy::~GameObjectCopy()
defit __ZN14GameObjectCopyD2Ev, 0x97710

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

; GameSoundManager::~GameSoundManager()
defit __ZN16GameSoundManagerD0Ev, 0x362cd0

; GameSoundManager::~GameSoundManager()
defit __ZN16GameSoundManagerD1Ev, 0x362cc0

; GameSoundManager::~GameSoundManager()
defit __ZN16GameSoundManagerD2Ev, 0x362c00

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

; GameToolbox::createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*)
defit __ZN11GameToolbox18createToggleButtonESsMN7cocos2d8CCObjectEFvPS1_EbPNS0_6CCMenuENS0_7CCPointEPNS0_6CCNodeES9_fffS7_PKcbiPNS0_7CCArrayE, 0x28bdd0

; GameToolbox::getRelativeOffset(GameObject*, cocos2d::CCPoint)
defit __ZN11GameToolbox17getRelativeOffsetEP10GameObjectN7cocos2d7CCPointE, 0x28c060

; GameToolbox::multipliedColorValue(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float)
defit __ZN11GameToolbox20multipliedColorValueEN7cocos2d10_ccColor3BES1_f, 0x28cb90

; GameToolbox::stringSetupToDict(std::string, char const*)
defit __ZN11GameToolbox17stringSetupToDictESsPKc, 0x28d700

; GameToolbox::stringSetupToMap(std::string, char const*)
defit __ZN11GameToolbox16stringSetupToMapESsPKc, 0x28d4c0

; GameToolbox::transformColor(cocos2d::_ccColor3B const&, cocos2d::_ccHSVValue)
defit __ZN11GameToolbox14transformColorERKN7cocos2d10_ccColor3BENS0_11_ccHSVValueE, 0x28c950

; GameToolbox::transformColor(cocos2d::_ccColor3B const&, float, float, float)
defit __ZN11GameToolbox14transformColorERKN7cocos2d10_ccColor3BEfff, 0x28c930

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

; InfoAlertButton::create(std::string, std::string, float)
defit __ZN15InfoAlertButton6createESsSsf, 0x2ecad0

; InfoLayer::loadPage(int, bool)
defit __ZN9InfoLayer8loadPageEib, 0x458fb0

; InfoLayer::onRefreshComments(cocos2d::CCObject*)
defit __ZN9InfoLayer17onRefreshCommentsEPN7cocos2d8CCObjectE, 0x459b60

; LabelGameObject::init()
defit __ZN15LabelGameObject4initEv, 0x2f5520

; LabelGameObject::setObjectColor(cocos2d::_ccColor3B const&)
defit __ZN15LabelGameObject14setObjectColorERKN7cocos2d10_ccColor3BE, 0xdbca0

; LevelBrowserLayer::loadPage(GJSearchObject*)
defit __ZN17LevelBrowserLayer8loadPageEP14GJSearchObject, 0x253650

; LevelBrowserLayer::scene(GJSearchObject*)
defit __ZN17LevelBrowserLayer5sceneEP14GJSearchObject, 0x2511d0

; LevelBrowserLayer::setIDPopupClosed(SetIDPopup*, int)
defit __ZN17LevelBrowserLayer16setIDPopupClosedEP10SetIDPopupi, 0x2554f0

; LevelCell::loadCustomLevelCell()
defit __ZN9LevelCell19loadCustomLevelCellEv, 0x1183b0

; LevelCell::loadLocalLevelCell()
defit __ZN9LevelCell18loadLocalLevelCellEv, 0x117a60

; LevelEditorLayer::LevelEditorLayer()
;defit __ZN16LevelEditorLayerC2Ev, 0xad500

; LevelEditorLayer::activateTriggerEffect(EffectGameObject*, float, float, float)
defit __ZN16LevelEditorLayer21activateTriggerEffectEP16EffectGameObjectfff, 0x9b520

; LevelEditorLayer::addObjectFromString(std::string)
defit __ZN16LevelEditorLayer19addObjectFromStringESs, 0x94640

; LevelEditorLayer::addSpecial(GameObject*)
defit __ZN16LevelEditorLayer10addSpecialEP10GameObject, 0x94f30

; LevelEditorLayer::addToGroup(GameObject*, int, bool)
defit __ZN16LevelEditorLayer10addToGroupEP10GameObjectib, 0x9dab0

; LevelEditorLayer::addToRedoList(UndoObject*)
defit __ZN16LevelEditorLayer13addToRedoListEP10UndoObject, 0x96f80

; LevelEditorLayer::addToUndoList(UndoObject*, bool)
defit __ZN16LevelEditorLayer13addToUndoListEP10UndoObjectb, 0x94e20

; LevelEditorLayer::animateInDualGround(GameObject*, float, bool)
defit __ZN16LevelEditorLayer19animateInDualGroundEP10GameObjectfb, 0xa2780

; LevelEditorLayer::calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)
defit __ZN16LevelEditorLayer20calculateColorValuesEP16EffectGameObjectS1_ifP17ColorActionSpriteP15GJEffectManager, 0x9c590

; LevelEditorLayer::checkCollisions(PlayerObject*, float)
defit __ZN16LevelEditorLayer15checkCollisionsEP12PlayerObjectf, 0x9e620

; LevelEditorLayer::create(GJGameLevel*)
defit __ZN16LevelEditorLayer6createEP11GJGameLevel, 0x90fb0

; LevelEditorLayer::createBackground()
defit __ZN16LevelEditorLayer16createBackgroundEv, 0x929f0

; LevelEditorLayer::createGroundLayer()
defit __ZN16LevelEditorLayer17createGroundLayerEv, 0x92840

; LevelEditorLayer::createObject(int, cocos2d::CCPoint, bool)
defit __ZN16LevelEditorLayer12createObjectEiN7cocos2d7CCPointEb, 0x957c0

; LevelEditorLayer::createObjectsFromSetup(std::string)
defit __ZN16LevelEditorLayer22createObjectsFromSetupESs, 0x92230

; LevelEditorLayer::createObjectsFromString(std::string, bool)
defit __ZN16LevelEditorLayer23createObjectsFromStringESsb, 0x94730

; LevelEditorLayer::draw()
defit __ZN16LevelEditorLayer4drawEv, 0xa2a70

; LevelEditorLayer::flipGravity(PlayerObject*, bool, bool)
defit __ZN16LevelEditorLayer11flipGravityEP12PlayerObjectbb, 0xa04e0

; LevelEditorLayer::getLastObjectX()
defit __ZN16LevelEditorLayer14getLastObjectXEv, 0x9c860

; LevelEditorLayer::getLevelString()
defit __ZN16LevelEditorLayer14getLevelStringEv, 0x97790

; LevelEditorLayer::getNextColorChannel()
defit __ZN16LevelEditorLayer19getNextColorChannelEv, 0x9a610

; LevelEditorLayer::getNextFreeBlockID(cocos2d::CCArray*)
defit __ZN16LevelEditorLayer18getNextFreeBlockIDEPN7cocos2d7CCArrayE, 0x9a4e0

; LevelEditorLayer::getNextFreeGroupID(cocos2d::CCArray*)
defit __ZN16LevelEditorLayer18getNextFreeGroupIDEPN7cocos2d7CCArrayE, 0x9a1b0

; LevelEditorLayer::getNextFreeItemID(cocos2d::CCArray*)
defit __ZN16LevelEditorLayer17getNextFreeItemIDEPN7cocos2d7CCArrayE, 0x9a390

; LevelEditorLayer::getObjectRect(GameObject*, bool)
defit __ZN16LevelEditorLayer13getObjectRectEP10GameObjectb, 0x96240

; LevelEditorLayer::getRelativeOffset(GameObject*)
defit __ZN16LevelEditorLayer17getRelativeOffsetEP10GameObject, 0x96840

; LevelEditorLayer::handleAction(bool, cocos2d::CCArray*)
defit __ZN16LevelEditorLayer12handleActionEbPN7cocos2d7CCArrayE, 0x97020

; LevelEditorLayer::init(GJGameLevel*)
defit __ZN16LevelEditorLayer4initEP11GJGameLevel, 0x91010

; LevelEditorLayer::levelSettingsUpdated()
defit __ZN16LevelEditorLayer20levelSettingsUpdatedEv, 0x93f30

; non-virtual thunk to LevelEditorLayer::levelSettingsUpdated()
defit __ZThn1200_N16LevelEditorLayer20levelSettingsUpdatedEv, 0x94350

; LevelEditorLayer::objectAtPosition(cocos2d::CCPoint)
defit __ZN16LevelEditorLayer16objectAtPositionEN7cocos2d7CCPointE, 0x960c0

; LevelEditorLayer::objectMoved(GameObject*)
defit __ZN16LevelEditorLayer11objectMovedEP10GameObject, 0x999f0

; LevelEditorLayer::objectsInRect(cocos2d::CCRect, bool)
defit __ZN16LevelEditorLayer13objectsInRectEN7cocos2d6CCRectEb, 0x95e60

; LevelEditorLayer::onPlaytest()
defit __ZN16LevelEditorLayer10onPlaytestEv, 0xa06b0

; LevelEditorLayer::onStopPlaytest()
defit __ZN16LevelEditorLayer14onStopPlaytestEv, 0xa1780

; LevelEditorLayer::playMusic()
defit __ZN16LevelEditorLayer9playMusicEv, 0xa13c0

; LevelEditorLayer::recreateGroups()
defit __ZN16LevelEditorLayer14recreateGroupsEv, 0x9dbf0

; LevelEditorLayer::redoLastAction()
defit __ZN16LevelEditorLayer14redoLastActionEv, 0x97750

; LevelEditorLayer::removeAllObjects()
defit __ZN16LevelEditorLayer16removeAllObjectsEv, 0x93d80

; LevelEditorLayer::removeAllObjectsOfType(int)
defit __ZN16LevelEditorLayer22removeAllObjectsOfTypeEi, 0x96d40

; LevelEditorLayer::removeFromGroup(GameObject*, int)
defit __ZN16LevelEditorLayer15removeFromGroupEP10GameObjecti, 0x9db60

; LevelEditorLayer::removeObject(GameObject*, bool)
defit __ZN16LevelEditorLayer12removeObjectEP10GameObjectb, 0x96890

; LevelEditorLayer::removeSpecial(GameObject*)
defit __ZN16LevelEditorLayer13removeSpecialEP10GameObject, 0x969c0

; LevelEditorLayer::resetMovingObjects()
defit __ZN16LevelEditorLayer18resetMovingObjectsEv, 0x9ddc0

; LevelEditorLayer::resetObjectVector()
defit __ZN16LevelEditorLayer17resetObjectVectorEv, 0x9c4b0

; LevelEditorLayer::resetToggledGroups()
defit __ZN16LevelEditorLayer18resetToggledGroupsEv, 0x9aa70

; LevelEditorLayer::resetToggledGroupsAndObjects()
defit __ZN16LevelEditorLayer28resetToggledGroupsAndObjectsEv, 0x9c3c0

; LevelEditorLayer::resetUnusedColorChannels()
defit __ZN16LevelEditorLayer24resetUnusedColorChannelsEv, 0x9a870

; LevelEditorLayer::rotationForSlopeNearObject(GameObject*)
defit __ZN16LevelEditorLayer26rotationForSlopeNearObjectEP10GameObject, 0x95cd0

; LevelEditorLayer::runColorEffect(EffectGameObject*, int, float, float, bool)
defit __ZN16LevelEditorLayer14runColorEffectEP16EffectGameObjectiffb, 0x9bd30

; LevelEditorLayer::scene(GJGameLevel*)
defit __ZN16LevelEditorLayer5sceneEP11GJGameLevel, 0x90f20

; LevelEditorLayer::setupLevelStart(LevelSettingsObject*)
defit __ZN16LevelEditorLayer15setupLevelStartEP19LevelSettingsObject, 0xa0ca0

; LevelEditorLayer::sortStickyGroups()
defit __ZN16LevelEditorLayer16sortStickyGroupsEv, 0x92b10

; LevelEditorLayer::stopTriggersInGroup(int, float)
defit __ZN16LevelEditorLayer19stopTriggersInGroupEif, 0x9c030

; LevelEditorLayer::timeForXPos(float)
defit __ZN16LevelEditorLayer11timeForXPosEf, 0x9c7d0

; LevelEditorLayer::toggleDualMode(GameObject*, bool, PlayerObject*, bool)
defit __ZN16LevelEditorLayer14toggleDualModeEP10GameObjectbP12PlayerObjectb, 0xa0200

; LevelEditorLayer::toggleGroupPreview(int, bool)
defit __ZN16LevelEditorLayer18toggleGroupPreviewEib, 0x9bea0

; LevelEditorLayer::transferDefaultColors(GJEffectManager*, GJEffectManager*)
defit __ZN16LevelEditorLayer21transferDefaultColorsEP15GJEffectManagerS1_, 0x9ab50

; LevelEditorLayer::undoLastAction()
defit __ZN16LevelEditorLayer14undoLastActionEv, 0x97770

; LevelEditorLayer::update(float)
defit __ZN16LevelEditorLayer6updateEf, 0xa1b70

; LevelEditorLayer::updateBGAndGColors()
defit __ZN16LevelEditorLayer18updateBGAndGColorsEv, 0x9b9b0

; LevelEditorLayer::updateBlendValues()
defit __ZN16LevelEditorLayer17updateBlendValuesEv, 0x9bc60

; LevelEditorLayer::updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)
defit __ZN16LevelEditorLayer11updateColorEN7cocos2d10_ccColor3BEfibfNS0_11_ccHSVValueEibiP16EffectGameObject, 0x9c200

; LevelEditorLayer::updateDualGround(PlayerObject*, int, bool)
defit __ZN16LevelEditorLayer16updateDualGroundEP12PlayerObjectib, 0xa1a60

; LevelEditorLayer::updateEditorMode()
defit __ZN16LevelEditorLayer16updateEditorModeEv, 0x93b50

; LevelEditorLayer::updateGameObjectsNew()
defit __ZN16LevelEditorLayer20updateGameObjectsNewEv, 0x9adc0

; LevelEditorLayer::updateGround(float)
defit __ZN16LevelEditorLayer12updateGroundEf, 0x93a60

; LevelEditorLayer::updateGroundWidth()
defit __ZN16LevelEditorLayer17updateGroundWidthEv, 0x92af0

; LevelEditorLayer::updateOptions()
defit __ZN16LevelEditorLayer13updateOptionsEv, 0x91ed0

; LevelEditorLayer::updateToggledGroups()
defit __ZN16LevelEditorLayer19updateToggledGroupsEv, 0x9bb10

; LevelEditorLayer::updateVisibility(float)
defit __ZN16LevelEditorLayer16updateVisibilityEf, 0x92c70

; LevelEditorLayer::xPosForTime(float)
defit __ZN16LevelEditorLayer11xPosForTimeEf, 0x9c800

; LevelEditorLayer::~LevelEditorLayer()
defit __ZN16LevelEditorLayerD0Ev, 0x90eb0

; LevelEditorLayer::~LevelEditorLayer()
defit __ZN16LevelEditorLayerD1Ev, 0x90e80

; LevelEditorLayer::~LevelEditorLayer()
defit __ZN16LevelEditorLayerD2Ev, 0x90a00

; non-virtual thunk to LevelEditorLayer::~LevelEditorLayer()
defit __ZThn288_N16LevelEditorLayerD0Ev, 0x90ee0

; non-virtual thunk to LevelEditorLayer::~LevelEditorLayer()
defit __ZThn288_N16LevelEditorLayerD1Ev, 0x90e90

; non-virtual thunk to LevelSettingsLayer::FLAlert_Clicked(FLAlertLayer*, bool)
;defit __ZThn468_N18LevelSettingsLayer15FLAlert_ClickedEP12FLAlertLayerb, 0xac260

; non-virtual thunk to LevelSettingsLayer::FLAlert_Clicked(FLAlertLayer*, bool)
;defit __ZThn468_N18LevelSettingsLayer15FLAlert_ClickedEP12FLAlertLayerb, 0xac2d0

; LevelSettingsLayer::create(LevelSettingsObject*, LevelEditorLayer*)
defit __ZN18LevelSettingsLayer6createEP19LevelSettingsObjectP16LevelEditorLayer, 0xa7c30

; LevelSettingsLayer::init(LevelSettingsObject*, LevelEditorLayer*)
defit __ZN18LevelSettingsLayer4initEP19LevelSettingsObjectP16LevelEditorLayer, 0xa7e00

; LevelSettingsLayer::onOpenCustomSong(cocos2d::CCObject*)
defit __ZN18LevelSettingsLayer16onOpenCustomSongEPN7cocos2d8CCObjectE, 0xabea0

; LevelSettingsLayer::showCustomSongSelect()
defit __ZN18LevelSettingsLayer20showCustomSongSelectEv, 0xf0530

; LevelSettingsObject::create()
defit __ZN19LevelSettingsObject6createEv, 0x92760

; LevelSettingsObject::init()
defit __ZN19LevelSettingsObject4initEv, 0xa5690

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

; LocalLevelManager::sharedState()
defit __ZN17LocalLevelManager11sharedStateEv, 0x35dd60

; MapPackCell::loadFromMapPack(GJMapPack*)
defit __ZN11MapPackCell15loadFromMapPackEP9GJMapPack, 0x1104c0

; MenuGameLayer::resetPlayer()
defit __ZN13MenuGameLayer11resetPlayerEv, 0x28fdc0

; MenuGameLayer::update(float)
defit __ZN13MenuGameLayer6updateEf, 0x28fa70

; MenuLayer::keyBackClicked()
defit __ZN9MenuLayer14keyBackClickedEv, 0x1d3160

; non-virtual thunk to MenuLayer::keyBackClicked()
defit __ZThn304_N9MenuLayer14keyBackClickedEv, 0x1d3170

; MenuLayer::onMoreGames(cocos2d::CCObject*)
defit __ZN9MenuLayer11onMoreGamesEPN7cocos2d8CCObjectE, 0x1d2ad0

; MenuLayer::onQuit(cocos2d::CCObject*)
defit __ZN9MenuLayer6onQuitEPN7cocos2d8CCObjectE, 0x1d2b40

; MenuLayer::scene(bool)
defit __ZN9MenuLayer5sceneEb, 0x1d12d0

; MoreVideoOptionsLayer::create()
defit __ZN21MoreVideoOptionsLayer6createEv, 0x443c10

; MoreVideoOptionsLayer::init()
defit __ZN21MoreVideoOptionsLayer4initEv, 0x444150

; MusicDownloadManager::getSongInfoObject(int)
defit __ZN20MusicDownloadManager17getSongInfoObjectEi, 0x2ef780

; MusicDownloadManager::incrementPriorityForSong(int)
defit __ZN20MusicDownloadManager24incrementPriorityForSongEi, 0x2ef750

; MusicDownloadManager::isSongDownloaded(int)
defit __ZN20MusicDownloadManager16isSongDownloadedEi, 0x2f0e10

; MusicDownloadManager::sharedState()
defit __ZN20MusicDownloadManager11sharedStateEv, 0x2ee4c0

; MusicDownloadManager::showTOS(FLAlertLayerProtocol*)
defit __ZN20MusicDownloadManager7showTOSEP20FLAlertLayerProtocol, 0x2f1ab0

; OBB2D::calculateWithCenter(cocos2d::CCPoint, float, float, float)
defit __ZN5OBB2D19calculateWithCenterEN7cocos2d7CCPointEfff, 0x35a9c0

; OBB2D::create(cocos2d::CCPoint, float, float, float)
defit __ZN5OBB2D6createEN7cocos2d7CCPointEfff, 0x35a890

; OBB2D::getBoundingRect()
defit __ZN5OBB2D15getBoundingRectEv, 0x35b2b0

; OBB2D::overlaps(OBB2D*)
defit __ZN5OBB2D8overlapsEPS_, 0x35b0a0

; OBB2D::overlaps1Way(OBB2D*)
defit __ZN5OBB2D12overlaps1WayEPS_, 0x35b0d0

; ObjectToolbox::init()
defit __ZN13ObjectToolbox4initEv, 0x3b2d80

; ObjectToolbox::intKeyToFrame(int)
defit __ZN13ObjectToolbox13intKeyToFrameEi, 0x4173b0

; ObjectToolbox::sharedState()
defit __ZN13ObjectToolbox11sharedStateEv, 0x3b2bc0

; OpacityEffectAction::create(float, float, float, int)
defit __ZN19OpacityEffectAction6createEfffi, 0x1789f0

; OpacityEffectAction::createFromString(std::string)
defit __ZN19OpacityEffectAction16createFromStringESs, 0x178c10

; OpacityEffectAction::init(float, float, float, int)
defit __ZN19OpacityEffectAction4initEfffi, 0x178b00

; OpacityEffectAction::step(float)
defit __ZN19OpacityEffectAction4stepEf, 0x178b90

; OpacityEffectAction::~OpacityEffectAction()
defit __ZN19OpacityEffectActionD0Ev, 0x18b720

; OpacityEffectAction::~OpacityEffectAction()
defit __ZN19OpacityEffectActionD1Ev, 0x18b710

; PauseLayer::create(bool)
defit __ZN10PauseLayer6createEb, 0x20b1e0

; PauseLayer::onEdit(cocos2d::CCObject*)
defit __ZN10PauseLayer6onEditEPN7cocos2d8CCObjectE, 0x20c630

; PauseLayer::onResume(cocos2d::CCObject*)
defit __ZN10PauseLayer8onResumeEPN7cocos2d8CCObjectE, 0x20c760

; PlatformToolbox::hideCursor()
defit __ZN15PlatformToolbox10hideCursorEv, 0x27c340

; PlatformToolbox::logEvent(char const*)
defit __ZN15PlatformToolbox8logEventEPKc, 0x27c290

; PlatformToolbox::resizeWindow(float, float)
defit __ZN15PlatformToolbox12resizeWindowEff, 0x27cfe0

; PlatformToolbox::showCursor()
defit __ZN15PlatformToolbox10showCursorEv, 0x27c360

; PlatformToolbox::toggleFullScreen(bool)
defit __ZN15PlatformToolbox16toggleFullScreenEb, 0x27cf90

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

; non-virtual thunk to PlayLayer::circleWaveWillBeRemoved(CCCircleWave*)
defit __ZThn1200_N9PlayLayer23circleWaveWillBeRemovedEP12CCCircleWave, 0x7e130

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

; non-virtual thunk to PlayLayer::currencyWillExit(CurrencyRewardLayer*)
defit __ZThn1208_N9PlayLayer16currencyWillExitEP19CurrencyRewardLayer, 0x7e090

; PlayLayer::delayedResetLevel()
defit __ZN9PlayLayer17delayedResetLevelEv, 0x7e050

; PlayLayer::destroyPlayer(PlayerObject*, GameObject*)
defit __ZN9PlayLayer13destroyPlayerEP12PlayerObjectP10GameObject, 0x7ab80

; PlayLayer::dialogClosed(DialogLayer*)
defit __ZN9PlayLayer12dialogClosedEP11DialogLayer, 0x7e0b0

; non-virtual thunk to PlayLayer::dialogClosed(DialogLayer*)
defit __ZThn1216_N9PlayLayer12dialogClosedEP11DialogLayer, 0x7e0d0

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

; PlayLayer::lightningFlash(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, int, bool, float)
defit __ZN9PlayLayer14lightningFlashEN7cocos2d7CCPointES1_NS0_10_ccColor3BEffibf, 0x75cc0

; PlayLayer::lightningFlash(cocos2d::CCPoint, cocos2d::_ccColor3B)
defit __ZN9PlayLayer14lightningFlashEN7cocos2d7CCPointENS0_10_ccColor3BE, 0x75bf0

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

; PlayLayer::~PlayLayer()
defit __ZN9PlayLayerD0Ev, 0x6b490

; PlayLayer::~PlayLayer()
defit __ZN9PlayLayerD1Ev, 0x6b460

; PlayLayer::~PlayLayer()
defit __ZN9PlayLayerD2Ev, 0x6b090

; non-virtual thunk to PlayLayer::~PlayLayer()
defit __ZThn288_N9PlayLayerD0Ev, 0x6b4c0

; non-virtual thunk to PlayLayer::~PlayLayer()
defit __ZThn288_N9PlayLayerD1Ev, 0x6b470

; PlayerCheckpoint::create()
defit __ZN16PlayerCheckpoint6createEv, 0x7e8c0

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

; non-virtual thunk to PlayerObject::animationFinished(char const*)
defit __ZThn1264_N12PlayerObject17animationFinishedEPKc, 0x22ecd0

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

; non-virtual thunk to PlayerObject::setColor(cocos2d::_ccColor3B const&)
defit __ZThn288_N12PlayerObject8setColorERKN7cocos2d10_ccColor3BE, 0x22ce60

; PlayerObject::setFlipX(bool)
defit __ZN12PlayerObject8setFlipXEb, 0x22e720

; PlayerObject::setFlipY(bool)
defit __ZN12PlayerObject8setFlipYEb, 0x22e7b0

; PlayerObject::setOpacity(unsigned char)
defit __ZN12PlayerObject10setOpacityEh, 0x22d400

; non-virtual thunk to PlayerObject::setOpacity(unsigned char)
defit __ZThn288_N12PlayerObject10setOpacityEh, 0x22d4f0

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

; PlayerObject::updateRotation(float)
defit __ZN12PlayerObject14updateRotationEf, 0x2214b0

; PlayerObject::updateRotation(float, float)
defit __ZN12PlayerObject14updateRotationEff, 0x221230

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

; PlayerObject::~PlayerObject()
defit __ZN12PlayerObjectD0Ev, 0x217230

; PlayerObject::~PlayerObject()
defit __ZN12PlayerObjectD1Ev, 0x217220

; PlayerObject::~PlayerObject()
defit __ZN12PlayerObjectD2Ev, 0x217100

; PulseEffectAction::createFromString(std::string)
defit __ZN17PulseEffectAction16createFromStringESs, 0x179e90

; PulseEffectAction::getSaveString()
defit __ZN17PulseEffectAction13getSaveStringEv, 0x17a850

; RetryLevelLayer::create()
defit __ZN15RetryLevelLayer6createEv, 0x28dd60

; SelectFontLayer::create(LevelEditorLayer*)
defit __ZN15SelectFontLayer6createEP16LevelEditorLayer, 0x143c20

; SelectFontLayer::init(LevelEditorLayer*)
defit __ZN15SelectFontLayer4initEP16LevelEditorLayer, 0x143db0

; non-virtual thunk to SelectFontLayer::keyBackClicked()
;defit __ZThn244_N15SelectFontLayer14keyBackClickedEv, 0x1445f0

; SelectFontLayer::onChangeFont(cocos2d::CCObject*)
defit __ZN15SelectFontLayer12onChangeFontEPN7cocos2d8CCObjectE, 0x144450

; SelectFontLayer::updateFontLabel()
defit __ZN15SelectFontLayer15updateFontLabelEv, 0x1444e0

; non-virtual thunk to SelectFontLayer::~SelectFontLayer()
;defit __ZThn236_N15SelectFontLayerD1Ev, 0x143b80

; non-virtual thunk to SelectFontLayer::~SelectFontLayer()
;defit __ZThn236_N15SelectFontLayerD1Ev, 0x143bb0

; SetGroupIDLayer::onNextGroupID1(cocos2d::CCObject*)
defit __ZN15SetGroupIDLayer14onNextGroupID1EPN7cocos2d8CCObjectE, 0x1967a0

; SetGroupIDLayer::textChanged(CCTextInputNode*)
defit __ZN15SetGroupIDLayer11textChangedEP15CCTextInputNode, 0x197af0

; non-virtual thunk to SetGroupIDLayer::textChanged(CCTextInputNode*)
defit __ZThn592_N15SetGroupIDLayer11textChangedEP15CCTextInputNode, 0x197b90

; SetGroupIDLayer::updateGroupIDLabel()
defit __ZN15SetGroupIDLayer18updateGroupIDLabelEv, 0x197260

; SetGroupIDLayer::~SetGroupIDLayer()
defit __ZN15SetGroupIDLayerD0Ev, 0x194550

; SetGroupIDLayer::~SetGroupIDLayer()
defit __ZN15SetGroupIDLayerD1Ev, 0x194520

; SetGroupIDLayer::~SetGroupIDLayer()
defit __ZN15SetGroupIDLayerD2Ev, 0x194410

; non-virtual thunk to SetGroupIDLayer::~SetGroupIDLayer()
defit __ZThn288_N15SetGroupIDLayerD0Ev, 0x194580

; non-virtual thunk to SetGroupIDLayer::~SetGroupIDLayer()
defit __ZThn288_N15SetGroupIDLayerD1Ev, 0x194530

; SetIDLayer::create(GameObject*)
defit __ZN10SetIDLayer6createEP10GameObject, 0x168f20

; SetItemIDLayer::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN14SetItemIDLayer6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x5a830

; SetTargetIDLayer::create(EffectGameObject*, cocos2d::CCArray*, std::string)
defit __ZN16SetTargetIDLayer6createEP16EffectGameObjectPN7cocos2d7CCArrayESs, 0x159d20

; SetTargetIDLayer::onTargetIDArrow(cocos2d::CCObject*)
defit __ZN16SetTargetIDLayer15onTargetIDArrowEPN7cocos2d8CCObjectE, 0x15aed0

; SetTargetIDLayer::textChanged(CCTextInputNode*)
defit __ZN16SetTargetIDLayer11textChangedEP15CCTextInputNode, 0x15b6c0

; SetTargetIDLayer::updateTargetID()
defit __ZN16SetTargetIDLayer14updateTargetIDEv, 0x15b4a0

; SetupAnimationPopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN19SetupAnimationPopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x208b70

; SetupAnimationPopup::onTargetIDArrow(cocos2d::CCObject*)
defit __ZN19SetupAnimationPopup15onTargetIDArrowEPN7cocos2d8CCObjectE, 0x209fc0

; SetupAnimationPopup::textChanged(CCTextInputNode*)
defit __ZN19SetupAnimationPopup11textChangedEP15CCTextInputNode, 0x20ab30

; SetupAnimationPopup::updateTargetID()
defit __ZN19SetupAnimationPopup14updateTargetIDEv, 0x20a910

; SetupCollisionTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN26SetupCollisionTriggerPopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x1d6120

; SetupCollisionTriggerPopup::onTargetIDArrow(cocos2d::CCObject*)
defit __ZN26SetupCollisionTriggerPopup15onTargetIDArrowEPN7cocos2d8CCObjectE, 0x1d77b0

; SetupCollisionTriggerPopup::textChanged(CCTextInputNode*)
defit __ZN26SetupCollisionTriggerPopup11textChangedEP15CCTextInputNode, 0x1d84d0

; SetupCollisionTriggerPopup::updateTargetID()
defit __ZN26SetupCollisionTriggerPopup14updateTargetIDEv, 0x1d82b0

; SetupCountTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN22SetupCountTriggerPopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x15c6c0

; SetupCountTriggerPopup::onTargetIDArrow(cocos2d::CCObject*)
defit __ZN22SetupCountTriggerPopup15onTargetIDArrowEPN7cocos2d8CCObjectE, 0x15dd40

; SetupCountTriggerPopup::textChanged(CCTextInputNode*)
defit __ZN22SetupCountTriggerPopup11textChangedEP15CCTextInputNode, 0x15e9a0

; SetupCountTriggerPopup::updateTargetID()
defit __ZN22SetupCountTriggerPopup14updateTargetIDEv, 0x15e8a0

; SetupInstantCountPopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN22SetupInstantCountPopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x352c10

; SetupInstantCountPopup::onTargetIDArrow(cocos2d::CCObject*)
defit __ZN22SetupInstantCountPopup15onTargetIDArrowEPN7cocos2d8CCObjectE, 0x354520

; SetupInstantCountPopup::textChanged(CCTextInputNode*)
defit __ZN22SetupInstantCountPopup11textChangedEP15CCTextInputNode, 0x355270

; SetupInstantCountPopup::updateTargetID()
defit __ZN22SetupInstantCountPopup14updateTargetIDEv, 0x355170

; SetupInteractObjectPopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN24SetupInteractObjectPopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x29a400

; SetupInteractObjectPopup::onTargetIDArrow(cocos2d::CCObject*)
defit __ZN24SetupInteractObjectPopup15onTargetIDArrowEPN7cocos2d8CCObjectE, 0x29bbc0

; SetupInteractObjectPopup::textChanged(CCTextInputNode*)
defit __ZN24SetupInteractObjectPopup11textChangedEP15CCTextInputNode, 0x29c2b0

; SetupInteractObjectPopup::updateTargetID()
defit __ZN24SetupInteractObjectPopup14updateTargetIDEv, 0x29c120

; SetupObjectTogglePopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN22SetupObjectTogglePopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x1c0860

; SetupObjectTogglePopup::init(EffectGameObject*, cocos2d::CCArray*)
defit __ZN22SetupObjectTogglePopup4initEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x1c0a40

; SetupObjectTogglePopup::onTargetIDArrow(cocos2d::CCObject*)
defit __ZN22SetupObjectTogglePopup15onTargetIDArrowEPN7cocos2d8CCObjectE, 0x1c1c40

; SetupObjectTogglePopup::textChanged(CCTextInputNode*)
defit __ZN22SetupObjectTogglePopup11textChangedEP15CCTextInputNode, 0x1c2660

; SetupObjectTogglePopup::updateTargetID()
defit __ZN22SetupObjectTogglePopup14updateTargetIDEv, 0x1c2440

; SetupOpacityPopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN17SetupOpacityPopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x32b70

; SetupOpacityPopup::onTargetIDArrow(cocos2d::CCObject*)
defit __ZN17SetupOpacityPopup15onTargetIDArrowEPN7cocos2d8CCObjectE, 0x340a0

; SetupOpacityPopup::textChanged(CCTextInputNode*)
defit __ZN17SetupOpacityPopup11textChangedEP15CCTextInputNode, 0x34a60

; SetupOpacityPopup::updateTargetID()
defit __ZN17SetupOpacityPopup14updateTargetIDEv, 0x34760

; SetupPickupTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN23SetupPickupTriggerPopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x35e70

; SetupPickupTriggerPopup::onItemIDArrow(cocos2d::CCObject*)
defit __ZN23SetupPickupTriggerPopup13onItemIDArrowEPN7cocos2d8CCObjectE, 0x37100

; SetupPickupTriggerPopup::onNextItemID(cocos2d::CCObject*)
defit __ZN23SetupPickupTriggerPopup12onNextItemIDEPN7cocos2d8CCObjectE, 0x37260

; SetupPickupTriggerPopup::textChanged(CCTextInputNode*)
defit __ZN23SetupPickupTriggerPopup11textChangedEP15CCTextInputNode, 0x37ca0

; SetupPickupTriggerPopup::updateItemID()
defit __ZN23SetupPickupTriggerPopup12updateItemIDEv, 0x37ab0

; SetupPulsePopup::colorValueChanged(cocos2d::_ccColor3B)
defit __ZN15SetupPulsePopup17colorValueChangedEN7cocos2d10_ccColor3BE, 0x1ec680

; SetupPulsePopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN15SetupPulsePopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x1e6d40

; SetupPulsePopup::init(EffectGameObject*, cocos2d::CCArray*)
defit __ZN15SetupPulsePopup4initEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x1e7010

; SetupPulsePopup::onSelectPulseMode(cocos2d::CCObject*)
defit __ZN15SetupPulsePopup17onSelectPulseModeEPN7cocos2d8CCObjectE, 0x1eb020

; SetupPulsePopup::onSelectTargetMode(cocos2d::CCObject*)
defit __ZN15SetupPulsePopup18onSelectTargetModeEPN7cocos2d8CCObjectE, 0x1eac30

; SetupPulsePopup::onUpdateCustomColor(cocos2d::CCObject*)
defit __ZN15SetupPulsePopup19onUpdateCustomColorEPN7cocos2d8CCObjectE, 0x1eaef0

; SetupPulsePopup::textChanged(CCTextInputNode*)
defit __ZN15SetupPulsePopup11textChangedEP15CCTextInputNode, 0x1ec960

; SetupPulsePopup::updateCopyColorTextInputLabel()
defit __ZN15SetupPulsePopup29updateCopyColorTextInputLabelEv, 0x1ebf20

; SetupPulsePopup::updateEditorLabel()
defit __ZN15SetupPulsePopup17updateEditorLabelEv, 0x1ec310

; SetupPulsePopup::updateFadeOutLabel(bool)
defit __ZN15SetupPulsePopup18updateFadeOutLabelEb, 0x1eba20

; SetupPulsePopup::updateTargetID()
defit __ZN15SetupPulsePopup14updateTargetIDEv, 0x1ebbe0

; SetupPulsePopup::updateTextInputLabel()
defit __ZN15SetupPulsePopup20updateTextInputLabelEv, 0x1eb8d0

; SetupPulsePopup::~SetupPulsePopup()
defit __ZN15SetupPulsePopupD0Ev, 0x1e6cd0

; SetupPulsePopup::~SetupPulsePopup()
defit __ZN15SetupPulsePopupD1Ev, 0x1e6ca0

; SetupPulsePopup::~SetupPulsePopup()
defit __ZN15SetupPulsePopupD2Ev, 0x1e6b40

; non-virtual thunk to SetupPulsePopup::~SetupPulsePopup()
defit __ZThn288_N15SetupPulsePopupD0Ev, 0x1e6d00

; non-virtual thunk to SetupPulsePopup::~SetupPulsePopup()
defit __ZThn288_N15SetupPulsePopupD1Ev, 0x1e6cb0

; SetupShakePopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN15SetupShakePopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x3adc00

; SetupSpawnPopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN15SetupSpawnPopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x139790

; SetupSpawnPopup::createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*)
defit __ZN15SetupSpawnPopup18createToggleButtonESsMN7cocos2d8CCObjectEFvPS1_EbPNS0_6CCMenuENS0_7CCPointEPNS0_7CCArrayE, 0x13b0e0

; SetupSpawnPopup::init(EffectGameObject*, cocos2d::CCArray*)
defit __ZN15SetupSpawnPopup4initEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x139950

; SetupSpawnPopup::onClose(cocos2d::CCObject*)
defit __ZN15SetupSpawnPopup7onCloseEPN7cocos2d8CCObjectE, 0x13ace0

; SetupSpawnPopup::onTargetIDArrow(cocos2d::CCObject*)
defit __ZN15SetupSpawnPopup15onTargetIDArrowEPN7cocos2d8CCObjectE, 0x13ad80

; SetupSpawnPopup::textChanged(CCTextInputNode*)
defit __ZN15SetupSpawnPopup11textChangedEP15CCTextInputNode, 0x13b990

; SetupSpawnPopup::updateTargetID()
defit __ZN15SetupSpawnPopup14updateTargetIDEv, 0x13b770

; SetupTouchTogglePopup::create(EffectGameObject*, cocos2d::CCArray*)
defit __ZN21SetupTouchTogglePopup6createEP16EffectGameObjectPN7cocos2d7CCArrayE, 0x1576a0

; SetupTouchTogglePopup::onTargetIDArrow(cocos2d::CCObject*)
defit __ZN21SetupTouchTogglePopup15onTargetIDArrowEPN7cocos2d8CCObjectE, 0x158b60

; SetupTouchTogglePopup::textChanged(CCTextInputNode*)
defit __ZN21SetupTouchTogglePopup11textChangedEP15CCTextInputNode, 0x1596a0

; SetupTouchTogglePopup::updateTargetID()
defit __ZN21SetupTouchTogglePopup14updateTargetIDEv, 0x159480

; SimplePlayer::create(int)
defit __ZN12SimplePlayer6createEi, 0x1b6140

; SimplePlayer::setSecondColor(cocos2d::_ccColor3B const&)
defit __ZN12SimplePlayer14setSecondColorERKN7cocos2d10_ccColor3BE, 0x1bace0

; SimplePlayer::updateColors()
defit __ZN12SimplePlayer12updateColorsEv, 0x1ba1f0

; SimplePlayer::updatePlayerFrame(int, IconType)
defit __ZN12SimplePlayer17updatePlayerFrameEi8IconType, 0x1b62f0

; Slerp2D(float, float, float)
defit __Z7Slerp2Dfff, 0x12dce0

; Slider::create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, char const*, char const*, float)
defit __ZN6Slider6createEPN7cocos2d6CCNodeEMNS0_8CCObjectEFvPS3_EPKcS8_S8_S8_f, 0x18dd80

; Slider::create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), float)
defit __ZN6Slider6createEPN7cocos2d6CCNodeEMNS0_8CCObjectEFvPS3_Ef, 0x18dc40

; Slider::getValue()
defit __ZN6Slider8getValueEv, 0x18e0c0

; Slider::init(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, char const*, char const*, float)
defit __ZN6Slider4initEPN7cocos2d6CCNodeEMNS0_8CCObjectEFvPS3_EPKcS8_S8_S8_f, 0x18dec0

; Slider::setBarVisibility(bool)
defit __ZN6Slider16setBarVisibilityEb, 0x18e280

; Slider::setValue(float)
defit __ZN6Slider8setValueEf, 0x18e170

; SliderThumb::getValue()
defit __ZN11SliderThumb8getValueEv, 0x18ce80

; SliderTouchLogic::create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, float)
defit __ZN16SliderTouchLogic6createEPN7cocos2d6CCNodeEMNS0_8CCObjectEFvPS3_EPKcS8_f, 0x18d130

; SliderTouchLogic::init(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, float)
defit __ZN16SliderTouchLogic4initEPN7cocos2d6CCNodeEMNS0_8CCObjectEFvPS3_EPKcS8_f, 0x18d270

; SongCell::loadFromObject(SongObject*)
defit __ZN8SongCell14loadFromObjectEP10SongObject, 0x1113f0

; SongInfoObject::create(int, std::string, std::string, int, float, std::string, std::string, std::string, int)
;defit __ZN14SongInfoObject6createEiSsSsifSsSsSsi, 0x2f2080

; SongInfoObject::create(int, std::string, std::string, int, float, std::string, std::string, std::string, int)
;defit __ZN14SongInfoObject6createEiSsSsifSsSsSsi, 0x2f2320

; SongInfoObject::init(int, std::string, std::string, int, float, std::string, std::string, std::string, int)
defit __ZN14SongInfoObject4initEiSsSsifSsSsSsi, 0x2f2660

; SpawnTriggerAction::createFromString(std::string)
defit __ZN18SpawnTriggerAction16createFromStringESs, 0x17bf50

; SpeedObject::create(GameObject*, int, float)
defit __ZN11SpeedObject6createEP10GameObjectif, 0x77450

; SpeedObject::init(GameObject*, int, float)
defit __ZN11SpeedObject4initEP10GameObjectif, 0x77400

; StatsCell::loadFromObject(StatsObject*)
defit __ZN9StatsCell14loadFromObjectEP11StatsObject, 0x1110d0

; TableView::TableView(cocos2d::CCRect)
;defit __ZN9TableViewC2EN7cocos2d6CCRectE, 0x37ebe0

; TableView::create(TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect)
defit __ZN9TableView6createEP17TableViewDelegateP19TableViewDataSourceN7cocos2d6CCRectE, 0x37eb30

; TableView::reloadData()
defit __ZN9TableView10reloadDataEv, 0x37f970

; TableViewCell::TableViewCell(char const*, float, float)
defit __ZN13TableViewCellC2EPKcff, 0x383de0

; TableViewDelegate::TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*)
defit __ZN17TableViewDelegate40TableViewDidDisplayCellForRowAtIndexPathER11CCIndexPathP13TableViewCellP9TableView, 0x120480

; TableViewDelegate::didEndTweenToIndexPath(CCIndexPath&, TableView*)
defit __ZN17TableViewDelegate22didEndTweenToIndexPathER11CCIndexPathP9TableView, 0x120470

; TableViewDelegate::willTweenToIndexPath(CCIndexPath&, TableViewCell*, TableView*)
defit __ZN17TableViewDelegate20willTweenToIndexPathER11CCIndexPathP13TableViewCellP9TableView, 0x120460

; TeleportPortalObject::create(char const*)
defit __ZN20TeleportPortalObject6createEPKc, 0xdaa50

; TeleportPortalObject::getTeleportXOff(cocos2d::CCNode*)
defit __ZN20TeleportPortalObject15getTeleportXOffEPN7cocos2d6CCNodeE, 0xdac20

; TextArea::create(std::string, char const*, float, float, cocos2d::CCPoint, float, bool)
defit __ZN8TextArea6createESsPKcffN7cocos2d7CCPointEfb, 0x19eb40

; TextInputDelegate::allowTextInput(CCTextInputNode*)
defit __ZN17TextInputDelegate14allowTextInputEP15CCTextInputNode, 0x6210

; TextInputDelegate::textInputOpened(CCTextInputNode*)
defit __ZN17TextInputDelegate15textInputOpenedEP15CCTextInputNode, 0x6200

; ToggleTriggerAction::createFromString(std::string)
defit __ZN19ToggleTriggerAction16createFromStringESs, 0x1765e0

; TopArtistsLayer::create()
defit __ZN15TopArtistsLayer6createEv, 0x192a90

; TopArtistsLayer::init()
defit __ZN15TopArtistsLayer4initEv, 0x192c30

; non-virtual thunk to TopArtistsLayer::loadListFinished(cocos2d::CCArray*, char const*)
;defit __ZThn460_N15TopArtistsLayer16loadListFinishedEPN7cocos2d7CCArrayEPKc, 0x193600

; TopArtistsLayer::loadPage(int)
defit __ZN15TopArtistsLayer8loadPageEi, 0x193b60

; TopArtistsLayer::setupLeaderboard(cocos2d::CCArray*)
defit __ZN15TopArtistsLayer16setupLeaderboardEPN7cocos2d7CCArrayE, 0x193420

; TopArtistsLayer::setupPageInfo(std::string, char const*)
defit __ZN15TopArtistsLayer13setupPageInfoESsPKc, 0x193730

; non-virtual thunk to TopArtistsLayer::~TopArtistsLayer()
;defit __ZThn236_N15TopArtistsLayerD1Ev, 0x1928f0

; non-virtual thunk to TopArtistsLayer::~TopArtistsLayer()
;defit __ZThn236_N15TopArtistsLayerD1Ev, 0x1929f0

; non-virtual thunk to TopArtistsLayer::~TopArtistsLayer()
;defit __ZThn236_N15TopArtistsLayerD1Ev, 0x192a20

; TouchToggleAction::createFromString(std::string)
defit __ZN17TouchToggleAction16createFromStringESs, 0x177e10

; non-virtual thunk to UILayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*)
;defit __ZThn236_N7UILayer12ccTouchBeganEPN7cocos2d7CCTouchEPNS0_7CCEventE, 0x280990

; UILayer::create()
defit __ZN7UILayer6createEv, 0x27fd10

; UILayer::disableMenu()
defit __ZN7UILayer11disableMenuEv, 0x280960

; UILayer::enableMenu()
defit __ZN7UILayer10enableMenuEv, 0x280940

; non-virtual thunk to UILayer::keyDown(cocos2d::enumKeyCodes)
;defit __ZThn408_N7UILayer7keyDownEN7cocos2d12enumKeyCodesE, 0x280470

; non-virtual thunk to UILayer::keyDown(cocos2d::enumKeyCodes)
;defit __ZThn408_N7UILayer7keyDownEN7cocos2d12enumKeyCodesE, 0x2805c0

; UILayer::pCommand(cocos2d::CCNode*)
defit __ZN7UILayer8pCommandEPN7cocos2d6CCNodeE, 0x280830

; UILayer::toggleCheckpointsMenu(bool)
defit __ZN7UILayer21toggleCheckpointsMenuEb, 0x280430

; UndoObject::create(GameObject*, UndoCommand)
defit __ZN10UndoObject6createEP10GameObject11UndoCommand, 0x94ea0

; UndoObject::createWithArray(cocos2d::CCArray*, UndoCommand)
defit __ZN10UndoObject15createWithArrayEPN7cocos2d7CCArrayE11UndoCommand, 0x96ee0

; UndoObject::~UndoObject()
defit __ZN10UndoObjectD0Ev, 0xa3030

; UndoObject::~UndoObject()
defit __ZN10UndoObjectD1Ev, 0xa2fd0

; UndoObject::~UndoObject()
defit __ZN10UndoObjectD2Ev, 0xa2f70

; VideoOptionsLayer::onApply(cocos2d::CCObject*)
defit __ZN17VideoOptionsLayer7onApplyEPN7cocos2d8CCObjectE, 0x443740

; boxCompMax(void const*, void const*)
defit __Z10boxCompMaxPKvS0_, 0x217080

; boxCompMin(void const*, void const*)
defit __Z10boxCompMinPKvS0_, 0x217020

; cocos2d::CCActionTween::create(float, char const*, float, float)
defit __ZN7cocos2d13CCActionTween6createEfPKcff, 0x447590

; cocos2d::CCAffineTransformMakeIdentity()
defit __ZN7cocos2d29CCAffineTransformMakeIdentityEv, 0x10ccc0

; cocos2d::CCAnimate::create(cocos2d::CCAnimation*)
defit __ZN7cocos2d9CCAnimate6createEPNS_11CCAnimationE, 0x1f8fc0

; cocos2d::CCAnimation::createWithSpriteFrames(cocos2d::CCArray*, float)
defit __ZN7cocos2d11CCAnimation22createWithSpriteFramesEPNS_7CCArrayEf, 0x140df0

; cocos2d::CCApplication::getCurrentLanguage()
defit __ZN7cocos2d13CCApplication18getCurrentLanguageEv, 0x1a3f40

; cocos2d::CCApplication::getTargetPlatform()
defit __ZN7cocos2d13CCApplication17getTargetPlatformEv, 0x1a3f20

; cocos2d::CCApplication::openURL(char const*)
defit __ZN7cocos2d13CCApplication7openURLEPKc, 0x1a4550

; cocos2d::CCApplication::setAnimationInterval(double)
defit __ZN7cocos2d13CCApplication20setAnimationIntervalEd, 0x1a3ee0

; cocos2d::CCApplication::~CCApplication()
;defit __ZN7cocos2d13CCApplicationD2Ev, 0x1a3d10

; cocos2d::CCApplication::~CCApplication()
;defit __ZN7cocos2d13CCApplicationD2Ev, 0x1a3d90

; cocos2d::CCApplication::~CCApplication()
;defit __ZN7cocos2d13CCApplicationD2Ev, 0x1a3e10

; cocos2d::CCApplicationProtocol::gameDidSave()
defit __ZN7cocos2d21CCApplicationProtocol11gameDidSaveEv, 0x1a45f0

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

; cocos2d::CCClippingNode::create()
defit __ZN7cocos2d14CCClippingNode6createEv, 0x4192a0

; cocos2d::CCClippingNode::create(cocos2d::CCNode*)
defit __ZN7cocos2d14CCClippingNode6createEPNS_6CCNodeE, 0x419330

; cocos2d::CCClippingNode::getAlphaThreshold() const
defit __ZNK7cocos2d14CCClippingNode17getAlphaThresholdEv, 0x419a10

; cocos2d::CCClippingNode::getStencil() const
defit __ZNK7cocos2d14CCClippingNode10getStencilEv, 0x4199c0

; cocos2d::CCClippingNode::init()
;defit __ZN7cocos2d14CCClippingNode4initEv, 0x4193e0

; cocos2d::CCClippingNode::init()
;defit __ZN7cocos2d14CCClippingNode4initEv, 0x419400

; cocos2d::CCClippingNode::isInverted() const
defit __ZNK7cocos2d14CCClippingNode10isInvertedEv, 0x419a30

; cocos2d::CCClippingNode::onEnter()
defit __ZN7cocos2d14CCClippingNode7onEnterEv, 0x419470

; cocos2d::CCClippingNode::onEnterTransitionDidFinish()
defit __ZN7cocos2d14CCClippingNode26onEnterTransitionDidFinishEv, 0x4194a0

; cocos2d::CCClippingNode::onExit()
defit __ZN7cocos2d14CCClippingNode6onExitEv, 0x419500

; cocos2d::CCClippingNode::onExitTransitionDidStart()
defit __ZN7cocos2d14CCClippingNode24onExitTransitionDidStartEv, 0x4194d0

; cocos2d::CCClippingNode::setAlphaThreshold(float)
defit __ZN7cocos2d14CCClippingNode17setAlphaThresholdEf, 0x419a20

; cocos2d::CCClippingNode::setInverted(bool)
defit __ZN7cocos2d14CCClippingNode11setInvertedEb, 0x419a40

; cocos2d::CCClippingNode::setStencil(cocos2d::CCNode*)
defit __ZN7cocos2d14CCClippingNode10setStencilEPNS_6CCNodeE, 0x4199d0

; cocos2d::CCClippingNode::visit()
defit __ZN7cocos2d14CCClippingNode5visitEv, 0x419530

; cocos2d::CCClippingNode::~CCClippingNode()
;defit __ZN7cocos2d14CCClippingNodeD2Ev, 0x4191e0

; cocos2d::CCClippingNode::~CCClippingNode()
;defit __ZN7cocos2d14CCClippingNodeD2Ev, 0x419230

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

; cocos2d::CCDictionary::objectForKey(long)
defit __ZN7cocos2d12CCDictionary12objectForKeyEl, 0x190bb0

; cocos2d::CCDictionary::objectForKey(std::string const&)
defit __ZN7cocos2d12CCDictionary12objectForKeyERKSs, 0x190870

; cocos2d::CCDictionary::removeAllObjects()
defit __ZN7cocos2d12CCDictionary16removeAllObjectsEv, 0x190220

; cocos2d::CCDictionary::removeObjectForKey(long)
defit __ZN7cocos2d12CCDictionary18removeObjectForKeyEl, 0x1921d0

; cocos2d::CCDictionary::setObject(cocos2d::CCObject*, long)
defit __ZN7cocos2d12CCDictionary9setObjectEPNS_8CCObjectEl, 0x191790

; cocos2d::CCDictionary::setObject(cocos2d::CCObject*, std::string const&)
defit __ZN7cocos2d12CCDictionary9setObjectEPNS_8CCObjectERKSs, 0x190dc0

; cocos2d::CCDictionary::valueForKey(long)
defit __ZN7cocos2d12CCDictionary11valueForKeyEl, 0x190cf0

; cocos2d::CCDictionary::valueForKey(std::string const&)
defit __ZN7cocos2d12CCDictionary11valueForKeyERKSs, 0x1907a0

; cocos2d::CCDirector::calculateDeltaTime()
defit __ZN7cocos2d10CCDirector18calculateDeltaTimeEv, 0x2497a0

; cocos2d::CCDirector::calculateMPF()
defit __ZN7cocos2d10CCDirector12calculateMPFEv, 0x19eac0

; cocos2d::CCDirector::convertToGL(cocos2d::CCPoint const&)
defit __ZN7cocos2d10CCDirector11convertToGLERKNS_7CCPointE, 0x24a210

; cocos2d::CCDirector::drawScene()
defit __ZN7cocos2d10CCDirector9drawSceneEv, 0x249690

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

; cocos2d::CCDirector::getTouchDispatcher()
defit __ZN7cocos2d10CCDirector18getTouchDispatcherEv, 0x24afa0

; cocos2d::CCDirector::getWinSize()
defit __ZN7cocos2d10CCDirector10getWinSizeEv, 0x24a0f0

; cocos2d::CCDirector::pushScene(cocos2d::CCScene*)
defit __ZN7cocos2d10CCDirector9pushSceneEPNS_7CCSceneE, 0x24a620

; cocos2d::CCDirector::replaceScene(cocos2d::CCScene*)
defit __ZN7cocos2d10CCDirector12replaceSceneEPNS_7CCSceneE, 0x24a6d0

; cocos2d::CCDirector::resetSmoothFixCounter()
defit __ZN7cocos2d10CCDirector21resetSmoothFixCounterEv, 0x249bc0

; cocos2d::CCDirector::setNextScene()
defit __ZN7cocos2d10CCDirector12setNextSceneEv, 0x2498d0

; cocos2d::CCDirector::sharedDirector()
defit __ZN7cocos2d10CCDirector14sharedDirectorEv, 0x248cb0

; cocos2d::CCDirector::showStats()
defit __ZN7cocos2d10CCDirector9showStatsEv, 0x2499e0

; cocos2d::CCDirector::updateContentScale(cocos2d::TextureQuality)
defit __ZN7cocos2d10CCDirector18updateContentScaleENS_14TextureQualityE, 0x249ff0

; cocos2d::CCDrawNode::clear()
defit __ZN7cocos2d10CCDrawNode5clearEv, 0x379e80

; cocos2d::CCDrawNode::create()
defit __ZN7cocos2d10CCDrawNode6createEv, 0x378d00

; cocos2d::CCDrawNode::drawPolygon(cocos2d::CCPoint*, unsigned int, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&)
defit __ZN7cocos2d10CCDrawNode11drawPolygonEPNS_7CCPointEjRKNS_10_ccColor4FEfS5_, 0x3797f0

; cocos2d::CCDrawNode::drawSegment(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&)
defit __ZN7cocos2d10CCDrawNode11drawSegmentERKNS_7CCPointES3_fRKNS_10_ccColor4FE, 0x3792d0

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

; cocos2d::CCIMEDelegate::CCIMEDelegate()
defit __ZN7cocos2d13CCIMEDelegateC2Ev, 0x277310

; cocos2d::CCIMEDelegate::attachWithIME()
defit __ZN7cocos2d13CCIMEDelegate13attachWithIMEEv, 0x2776a0

; cocos2d::CCIMEDelegate::canAttachWithIME()
defit __ZN7cocos2d13CCIMEDelegate16canAttachWithIMEEv, 0x5ef30

; cocos2d::CCIMEDelegate::canDetachWithIME()
defit __ZN7cocos2d13CCIMEDelegate16canDetachWithIMEEv, 0x5ef50

; cocos2d::CCIMEDelegate::deleteBackward()
defit __ZN7cocos2d13CCIMEDelegate14deleteBackwardEv, 0x5ef80

; cocos2d::CCIMEDelegate::detachWithIME()
defit __ZN7cocos2d13CCIMEDelegate13detachWithIMEEv, 0x277880

; cocos2d::CCIMEDelegate::didAttachWithIME()
defit __ZN7cocos2d13CCIMEDelegate16didAttachWithIMEEv, 0x5ef40

; cocos2d::CCIMEDelegate::didDetachWithIME()
defit __ZN7cocos2d13CCIMEDelegate16didDetachWithIMEEv, 0x5ef60

; cocos2d::CCIMEDelegate::getContentText()
defit __ZN7cocos2d13CCIMEDelegate14getContentTextEv, 0x5ef90

; cocos2d::CCIMEDelegate::insertText(char const*, int)
defit __ZN7cocos2d13CCIMEDelegate10insertTextEPKci, 0x5ef70

; cocos2d::CCIMEDelegate::keyboardDidHide(cocos2d::CCIMEKeyboardNotificationInfo&)
defit __ZN7cocos2d13CCIMEDelegate15keyboardDidHideERNS_29CCIMEKeyboardNotificationInfoE, 0x5efb0

; cocos2d::CCIMEDelegate::keyboardDidShow(cocos2d::CCIMEKeyboardNotificationInfo&)
defit __ZN7cocos2d13CCIMEDelegate15keyboardDidShowERNS_29CCIMEKeyboardNotificationInfoE, 0x5efa0

; cocos2d::CCIMEDelegate::~CCIMEDelegate()
defit __ZN7cocos2d13CCIMEDelegateD0Ev, 0x277670

; cocos2d::CCIMEDelegate::~CCIMEDelegate()
defit __ZN7cocos2d13CCIMEDelegateD1Ev, 0x277660

; cocos2d::CCIMEDelegate::~CCIMEDelegate()
defit __ZN7cocos2d13CCIMEDelegateD2Ev, 0x277500

; cocos2d::CCImage::CCImage()
defit __ZN7cocos2d7CCImageC1Ev, 0x24f9c0

; cocos2d::CCImage::CCImage()
defit __ZN7cocos2d7CCImageC2Ev, 0x24fa00

; cocos2d::CCImage::initWithImageData(void*, int, cocos2d::CCImage::EImageFormat, int, int, int)
defit __ZN7cocos2d7CCImage17initWithImageDataEPviNS0_12EImageFormatEiii, 0x24fcb0

; cocos2d::CCKeyboardDelegate::keyUp(cocos2d::enumKeyCodes)
defit __ZN7cocos2d18CCKeyboardDelegate5keyUpENS_12enumKeyCodesE, 0x61a0

; cocos2d::CCLabelBMFont::create(char const*, char const*)
defit __ZN7cocos2d13CCLabelBMFont6createEPKcS2_, 0x347660

; cocos2d::CCLabelBMFont::limitLabelWidth(float, float, float)
defit __ZN7cocos2d13CCLabelBMFont15limitLabelWidthEfff, 0x34a6e0

; cocos2d::CCLabelBMFont::setAnchorPoint(cocos2d::CCPoint const&)
defit __ZN7cocos2d13CCLabelBMFont14setAnchorPointERKNS_7CCPointE, 0x349440

; cocos2d::CCLabelBMFont::setScale(float)
defit __ZN7cocos2d13CCLabelBMFont8setScaleEf, 0x34a5d0

; cocos2d::CCLabelBMFont::setString(char const*, bool)
defit __ZN7cocos2d13CCLabelBMFont9setStringEPKcb, 0x3489e0

;([long * param_1@RDI:8], [char * param_2@RSI:8])
; cocos2d::CCLabelTTF::setString(char const*)
;defit __ZN7cocos2d10CCLabelTTF9setStringEPKc, 0x1fad70
; non-virtual thunk to cocos2d::CCLabelTTF::setString(char const*)
;defit __ZThn484_N7cocos2d10CCLabelTTF9setStringEPKc, 0x1fad70

; cocos2d::CCLabelTTF::updateTexture()
defit __ZN7cocos2d10CCLabelTTF13updateTextureEv, 0x1fadc0

; cocos2d::CCLayer::CCLayer()
defit __ZN7cocos2d7CCLayerC1Ev, 0x2726b0

; cocos2d::CCLayer::CCLayer()
defit __ZN7cocos2d7CCLayerC2Ev, 0x2725b0

; cocos2d::CCLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer12ccTouchBeganEPNS_7CCTouchEPNS_7CCEventE, 0x2734d0

; non-virtual thunk to cocos2d::CCLayer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZThn288_N7cocos2d7CCLayer12ccTouchBeganEPNS_7CCTouchEPNS_7CCEventE, 0x273510

; cocos2d::CCLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer16ccTouchCancelledEPNS_7CCTouchEPNS_7CCEventE, 0x273650

; non-virtual thunk to cocos2d::CCLayer::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZThn288_N7cocos2d7CCLayer16ccTouchCancelledEPNS_7CCTouchEPNS_7CCEventE, 0x273690

; cocos2d::CCLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer12ccTouchEndedEPNS_7CCTouchEPNS_7CCEventE, 0x2735d0

; non-virtual thunk to cocos2d::CCLayer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZThn288_N7cocos2d7CCLayer12ccTouchEndedEPNS_7CCTouchEPNS_7CCEventE, 0x273610

; cocos2d::CCLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer12ccTouchMovedEPNS_7CCTouchEPNS_7CCEventE, 0x273550

; non-virtual thunk to cocos2d::CCLayer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*)
defit __ZThn288_N7cocos2d7CCLayer12ccTouchMovedEPNS_7CCTouchEPNS_7CCEventE, 0x273590

; cocos2d::CCLayer::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer14ccTouchesBeganEPNS_5CCSetEPNS_7CCEventE, 0x2736d0

; non-virtual thunk to cocos2d::CCLayer::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*)
defit __ZThn288_N7cocos2d7CCLayer14ccTouchesBeganEPNS_5CCSetEPNS_7CCEventE, 0x273710

; cocos2d::CCLayer::ccTouchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer18ccTouchesCancelledEPNS_5CCSetEPNS_7CCEventE, 0x273850

; non-virtual thunk to cocos2d::CCLayer::ccTouchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*)
defit __ZThn288_N7cocos2d7CCLayer18ccTouchesCancelledEPNS_5CCSetEPNS_7CCEventE, 0x273890

; cocos2d::CCLayer::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer14ccTouchesEndedEPNS_5CCSetEPNS_7CCEventE, 0x2737d0

; non-virtual thunk to cocos2d::CCLayer::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*)
defit __ZThn288_N7cocos2d7CCLayer14ccTouchesEndedEPNS_5CCSetEPNS_7CCEventE, 0x273810

; cocos2d::CCLayer::ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*)
defit __ZN7cocos2d7CCLayer14ccTouchesMovedEPNS_5CCSetEPNS_7CCEventE, 0x273750

; non-virtual thunk to cocos2d::CCLayer::ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*)
defit __ZThn288_N7cocos2d7CCLayer14ccTouchesMovedEPNS_5CCSetEPNS_7CCEventE, 0x273790

; cocos2d::CCLayer::create()
defit __ZN7cocos2d7CCLayer6createEv, 0x272a00

; cocos2d::CCLayer::didAccelerate(cocos2d::CCAcceleration*)
defit __ZN7cocos2d7CCLayer13didAccelerateEPNS_14CCAccelerationE, 0x272ea0

; non-virtual thunk to cocos2d::CCLayer::didAccelerate(cocos2d::CCAcceleration*)
defit __ZThn296_N7cocos2d7CCLayer13didAccelerateEPNS_14CCAccelerationE, 0x272ee0

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

; non-virtual thunk to cocos2d::CCLayer::keyBackClicked()
defit __ZThn304_N7cocos2d7CCLayer14keyBackClickedEv, 0x2731b0

; cocos2d::CCLayer::keyDown(cocos2d::enumKeyCodes)
defit __ZN7cocos2d7CCLayer7keyDownENS_12enumKeyCodesE, 0x273280

; non-virtual thunk to cocos2d::CCLayer::keyDown(cocos2d::enumKeyCodes)
defit __ZThn312_N7cocos2d7CCLayer7keyDownENS_12enumKeyCodesE, 0x2732c0

; cocos2d::CCLayer::keyMenuClicked()
defit __ZN7cocos2d7CCLayer14keyMenuClickedEv, 0x273200

; non-virtual thunk to cocos2d::CCLayer::keyMenuClicked()
defit __ZThn304_N7cocos2d7CCLayer14keyMenuClickedEv, 0x273240

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

; cocos2d::CCLayer::~CCLayer()
defit __ZN7cocos2d7CCLayerD0Ev, 0x272930

; cocos2d::CCLayer::~CCLayer()
defit __ZN7cocos2d7CCLayerD1Ev, 0x272900

; cocos2d::CCLayer::~CCLayer()
defit __ZN7cocos2d7CCLayerD2Ev, 0x2727b0

; non-virtual thunk to cocos2d::CCLayer::~CCLayer()
defit __ZThn288_N7cocos2d7CCLayerD0Ev, 0x272960

; non-virtual thunk to cocos2d::CCLayer::~CCLayer()
defit __ZThn288_N7cocos2d7CCLayerD1Ev, 0x272910

; cocos2d::CCLayerColor::CCLayerColor()
defit __ZN7cocos2d12CCLayerColorC1Ev, 0x274270

; cocos2d::CCLayerColor::CCLayerColor()
defit __ZN7cocos2d12CCLayerColorC2Ev, 0x274320

; cocos2d::CCLayerColor::create(cocos2d::_ccColor4B const&, float, float)
defit __ZN7cocos2d12CCLayerColor6createERKNS_10_ccColor4BEff, 0x2745e0

; cocos2d::CCLayerColor::draw()
defit __ZN7cocos2d12CCLayerColor4drawEv, 0x274b50

; cocos2d::CCLayerColor::getBlendFunc()
defit __ZN7cocos2d12CCLayerColor12getBlendFuncEv, 0x274480

; non-virtual thunk to cocos2d::CCLayerColor::getBlendFunc()
defit __ZThn392_N7cocos2d12CCLayerColor12getBlendFuncEv, 0x274490

; cocos2d::CCLayerColor::init()
defit __ZN7cocos2d12CCLayerColor4initEv, 0x274800

; cocos2d::CCLayerColor::initWithColor(cocos2d::_ccColor4B const&)
defit __ZN7cocos2d12CCLayerColor13initWithColorERKNS_10_ccColor4BE, 0x2749a0

; cocos2d::CCLayerColor::initWithColor(cocos2d::_ccColor4B const&, float, float)
defit __ZN7cocos2d12CCLayerColor13initWithColorERKNS_10_ccColor4BEff, 0x274850

; cocos2d::CCLayerColor::setBlendFunc(cocos2d::_ccBlendFunc)
defit __ZN7cocos2d12CCLayerColor12setBlendFuncENS_12_ccBlendFuncE, 0x2744a0

; non-virtual thunk to cocos2d::CCLayerColor::setBlendFunc(cocos2d::_ccBlendFunc)
defit __ZThn392_N7cocos2d12CCLayerColor12setBlendFuncENS_12_ccBlendFuncE, 0x2744b0

; cocos2d::CCLayerColor::setColor(cocos2d::_ccColor3B const&)
defit __ZN7cocos2d12CCLayerColor8setColorERKNS_10_ccColor3BE, 0x274c20

; non-virtual thunk to cocos2d::CCLayerColor::setColor(cocos2d::_ccColor3B const&)
defit __ZThn368_N7cocos2d12CCLayerColor8setColorERKNS_10_ccColor3BE, 0x274cf0

; cocos2d::CCLayerColor::setContentSize(cocos2d::CCSize const&)
defit __ZN7cocos2d12CCLayerColor14setContentSizeERKNS_6CCSizeE, 0x2749f0

; cocos2d::CCLayerColor::setOpacity(unsigned char)
defit __ZN7cocos2d12CCLayerColor10setOpacityEh, 0x274db0

; non-virtual thunk to cocos2d::CCLayerColor::setOpacity(unsigned char)
defit __ZThn368_N7cocos2d12CCLayerColor10setOpacityEh, 0x274e50

; cocos2d::CCLayerColor::updateColor()
defit __ZN7cocos2d12CCLayerColor11updateColorEv, 0x274ae0

; cocos2d::CCLayerColor::~CCLayerColor()
defit __ZN7cocos2d12CCLayerColorD0Ev, 0x274410

; cocos2d::CCLayerColor::~CCLayerColor()
defit __ZN7cocos2d12CCLayerColorD1Ev, 0x2743e0

; cocos2d::CCLayerColor::~CCLayerColor()
defit __ZN7cocos2d12CCLayerColorD2Ev, 0x2743d0

; non-virtual thunk to cocos2d::CCLayerColor::~CCLayerColor()
defit __ZThn288_N7cocos2d12CCLayerColorD0Ev, 0x274440

; non-virtual thunk to cocos2d::CCLayerColor::~CCLayerColor()
defit __ZThn288_N7cocos2d12CCLayerColorD1Ev, 0x2743f0

; cocos2d::CCLayerRGBA::CCLayerRGBA()
defit __ZN7cocos2d11CCLayerRGBAC2Ev, 0x2738d0

; cocos2d::CCLayerRGBA::getColor()
defit __ZN7cocos2d11CCLayerRGBA8getColorEv, 0x273d60

; non-virtual thunk to cocos2d::CCLayerRGBA::getColor()
defit __ZThn368_N7cocos2d11CCLayerRGBA8getColorEv, 0x273d70

; cocos2d::CCLayerRGBA::getDisplayedColor()
defit __ZN7cocos2d11CCLayerRGBA17getDisplayedColorEv, 0x273d80

; non-virtual thunk to cocos2d::CCLayerRGBA::getDisplayedColor()
defit __ZThn368_N7cocos2d11CCLayerRGBA17getDisplayedColorEv, 0x273d90

; cocos2d::CCLayerRGBA::getDisplayedOpacity()
defit __ZN7cocos2d11CCLayerRGBA19getDisplayedOpacityEv, 0x273c00

; non-virtual thunk to cocos2d::CCLayerRGBA::getDisplayedOpacity()
defit __ZThn368_N7cocos2d11CCLayerRGBA19getDisplayedOpacityEv, 0x273c10

; cocos2d::CCLayerRGBA::getOpacity()
defit __ZN7cocos2d11CCLayerRGBA10getOpacityEv, 0x273be0

; non-virtual thunk to cocos2d::CCLayerRGBA::getOpacity()
defit __ZThn368_N7cocos2d11CCLayerRGBA10getOpacityEv, 0x273bf0

; cocos2d::CCLayerRGBA::isCascadeColorEnabled()
defit __ZN7cocos2d11CCLayerRGBA21isCascadeColorEnabledEv, 0x274230

; non-virtual thunk to cocos2d::CCLayerRGBA::isCascadeColorEnabled()
defit __ZThn368_N7cocos2d11CCLayerRGBA21isCascadeColorEnabledEv, 0x274240

; cocos2d::CCLayerRGBA::isCascadeOpacityEnabled()
defit __ZN7cocos2d11CCLayerRGBA23isCascadeOpacityEnabledEv, 0x2741f0

; non-virtual thunk to cocos2d::CCLayerRGBA::isCascadeOpacityEnabled()
defit __ZThn368_N7cocos2d11CCLayerRGBA23isCascadeOpacityEnabledEv, 0x274200

; cocos2d::CCLayerRGBA::isOpacityModifyRGB()
defit __ZN7cocos2d11CCLayerRGBA18isOpacityModifyRGBEv, 0x6190

; non-virtual thunk to cocos2d::CCLayerRGBA::isOpacityModifyRGB()
defit __ZThn368_N7cocos2d11CCLayerRGBA18isOpacityModifyRGBEv, 0x61f0

; cocos2d::CCLayerRGBA::setCascadeColorEnabled(bool)
defit __ZN7cocos2d11CCLayerRGBA22setCascadeColorEnabledEb, 0x274250

; non-virtual thunk to cocos2d::CCLayerRGBA::setCascadeColorEnabled(bool)
defit __ZThn368_N7cocos2d11CCLayerRGBA22setCascadeColorEnabledEb, 0x274260

; cocos2d::CCLayerRGBA::setCascadeOpacityEnabled(bool)
defit __ZN7cocos2d11CCLayerRGBA24setCascadeOpacityEnabledEb, 0x274210

; non-virtual thunk to cocos2d::CCLayerRGBA::setCascadeOpacityEnabled(bool)
defit __ZThn368_N7cocos2d11CCLayerRGBA24setCascadeOpacityEnabledEb, 0x274220

; cocos2d::CCLayerRGBA::setOpacityModifyRGB(bool)
defit __ZN7cocos2d11CCLayerRGBA19setOpacityModifyRGBEb, 0x6180

; non-virtual thunk to cocos2d::CCLayerRGBA::setOpacityModifyRGB(bool)
defit __ZThn368_N7cocos2d11CCLayerRGBA19setOpacityModifyRGBEb, 0x61e0

; cocos2d::CCLayerRGBA::updateDisplayedColor(cocos2d::_ccColor3B const&)
defit __ZN7cocos2d11CCLayerRGBA20updateDisplayedColorERKNS_10_ccColor3BE, 0x2740b0

; non-virtual thunk to cocos2d::CCLayerRGBA::updateDisplayedColor(cocos2d::_ccColor3B const&)
defit __ZThn368_N7cocos2d11CCLayerRGBA20updateDisplayedColorERKNS_10_ccColor3BE, 0x2741d0

; cocos2d::CCLayerRGBA::updateDisplayedOpacity(unsigned char)
defit __ZN7cocos2d11CCLayerRGBA22updateDisplayedOpacityEh, 0x273f20

; non-virtual thunk to cocos2d::CCLayerRGBA::updateDisplayedOpacity(unsigned char)
defit __ZThn368_N7cocos2d11CCLayerRGBA22updateDisplayedOpacityEh, 0x273ff0

; cocos2d::CCMenu::alignItemsHorizontallyWithPadding(float)
defit __ZN7cocos2d6CCMenu33alignItemsHorizontallyWithPaddingEf, 0x4393e0

; cocos2d::CCMenu::alignItemsVerticallyWithPadding(float)
defit __ZN7cocos2d6CCMenu31alignItemsVerticallyWithPaddingEf, 0x439190

; cocos2d::CCMenu::create()
defit __ZN7cocos2d6CCMenu6createEv, 0x438720

; cocos2d::CCMenu::createWithArray(cocos2d::CCArray*)
defit __ZN7cocos2d6CCMenu15createWithArrayEPNS_7CCArrayE, 0x4387e0

; cocos2d::CCMenu::createWithItem(cocos2d::CCMenuItem*)
defit __ZN7cocos2d6CCMenu14createWithItemEPNS_10CCMenuItemE, 0x438b80

; cocos2d::CCMenu::createWithItems(cocos2d::CCMenuItem*, std::__va_list)
defit __ZN7cocos2d6CCMenu15createWithItemsEPNS_10CCMenuItemESt9__va_list, 0x438730

; cocos2d::CCMenuItemSprite::create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*)
defit __ZN7cocos2d16CCMenuItemSprite6createEPNS_6CCNodeES2_S2_, 0x1fd120

; cocos2d::CCMenuItemSprite::create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*))
defit __ZN7cocos2d16CCMenuItemSprite6createEPNS_6CCNodeES2_S2_PNS_8CCObjectEMS3_FvS4_E, 0x1fd140

; cocos2d::CCMenuItemSprite::create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*))
defit __ZN7cocos2d16CCMenuItemSprite6createEPNS_6CCNodeES2_PNS_8CCObjectEMS3_FvS4_E, 0x1fd2d0

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

; cocos2d::CCNode::addChild(cocos2d::CCNode*)
defit __ZN7cocos2d6CCNode8addChildEPS0_, 0x1233d0

; cocos2d::CCNode::addChild(cocos2d::CCNode*, int)
defit __ZN7cocos2d6CCNode8addChildEPS0_i, 0x1233b0

; cocos2d::CCNode::addChild(cocos2d::CCNode*, int, int)
defit __ZN7cocos2d6CCNode8addChildEPS0_ii, 0x1232a0

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

; cocos2d::CCNode::init()
defit __ZN7cocos2d6CCNode4initEv, 0x122910

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

; cocos2d::CCNode::schedule(void (cocos2d::CCObject::*)(float))
defit __ZN7cocos2d6CCNode8scheduleEMNS_8CCObjectEFvfE, 0x1240b0

; cocos2d::CCNode::schedule(void (cocos2d::CCObject::*)(float), float)
defit __ZN7cocos2d6CCNode8scheduleEMNS_8CCObjectEFvfEf, 0x124120

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

; cocos2d::CCNode::unschedule(void (cocos2d::CCObject::*)(float))
defit __ZN7cocos2d6CCNode10unscheduleEMNS_8CCObjectEFvfE, 0x124180

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
defit __ZN7cocos2d6CCNodeD0Ev, 0x1228e0

; cocos2d::CCNode::~CCNode()
defit __ZN7cocos2d6CCNodeD1Ev, 0x1228d0

; cocos2d::CCNode::~CCNode()
defit __ZN7cocos2d6CCNodeD2Ev, 0x122750

; cocos2d::CCNodeRGBA::CCNodeRGBA()
defit __ZN7cocos2d10CCNodeRGBAC1Ev, 0x124ac0

; cocos2d::CCNodeRGBA::CCNodeRGBA()
defit __ZN7cocos2d10CCNodeRGBAC2Ev, 0x124b30

; cocos2d::CCNodeRGBA::getColor()
defit __ZN7cocos2d10CCNodeRGBA8getColorEv, 0x125020

; non-virtual thunk to cocos2d::CCNodeRGBA::getColor()
defit __ZThn288_N7cocos2d10CCNodeRGBA8getColorEv, 0x125030

; cocos2d::CCNodeRGBA::getDisplayedColor()
defit __ZN7cocos2d10CCNodeRGBA17getDisplayedColorEv, 0x125040

; non-virtual thunk to cocos2d::CCNodeRGBA::getDisplayedColor()
defit __ZThn288_N7cocos2d10CCNodeRGBA17getDisplayedColorEv, 0x125050

; cocos2d::CCNodeRGBA::getDisplayedOpacity()
defit __ZN7cocos2d10CCNodeRGBA19getDisplayedOpacityEv, 0x124cf0

; non-virtual thunk to cocos2d::CCNodeRGBA::getDisplayedOpacity()
defit __ZThn288_N7cocos2d10CCNodeRGBA19getDisplayedOpacityEv, 0x124d00

; cocos2d::CCNodeRGBA::getOpacity()
defit __ZN7cocos2d10CCNodeRGBA10getOpacityEv, 0x124cd0

; non-virtual thunk to cocos2d::CCNodeRGBA::getOpacity()
defit __ZThn288_N7cocos2d10CCNodeRGBA10getOpacityEv, 0x124ce0

; cocos2d::CCNodeRGBA::isCascadeColorEnabled()
defit __ZN7cocos2d10CCNodeRGBA21isCascadeColorEnabledEv, 0x125320

; non-virtual thunk to cocos2d::CCNodeRGBA::isCascadeColorEnabled()
defit __ZThn288_N7cocos2d10CCNodeRGBA21isCascadeColorEnabledEv, 0x125330

; cocos2d::CCNodeRGBA::isCascadeOpacityEnabled()
defit __ZN7cocos2d10CCNodeRGBA23isCascadeOpacityEnabledEv, 0x124fe0

; non-virtual thunk to cocos2d::CCNodeRGBA::isCascadeOpacityEnabled()
defit __ZThn288_N7cocos2d10CCNodeRGBA23isCascadeOpacityEnabledEv, 0x124ff0

; cocos2d::CCNodeRGBA::setCascadeColorEnabled(bool)
defit __ZN7cocos2d10CCNodeRGBA22setCascadeColorEnabledEb, 0x125340

; non-virtual thunk to cocos2d::CCNodeRGBA::setCascadeColorEnabled(bool)
defit __ZThn288_N7cocos2d10CCNodeRGBA22setCascadeColorEnabledEb, 0x125350

; cocos2d::CCNodeRGBA::setCascadeOpacityEnabled(bool)
defit __ZN7cocos2d10CCNodeRGBA24setCascadeOpacityEnabledEb, 0x125000

; non-virtual thunk to cocos2d::CCNodeRGBA::setCascadeOpacityEnabled(bool)
defit __ZThn288_N7cocos2d10CCNodeRGBA24setCascadeOpacityEnabledEb, 0x125010

; cocos2d::CCNodeRGBA::~CCNodeRGBA()
defit __ZN7cocos2d10CCNodeRGBAD0Ev, 0x124bc0

; cocos2d::CCNodeRGBA::~CCNodeRGBA()
defit __ZN7cocos2d10CCNodeRGBAD1Ev, 0x124bb0

; cocos2d::CCNodeRGBA::~CCNodeRGBA()
defit __ZN7cocos2d10CCNodeRGBAD2Ev, 0x124ba0

; cocos2d::CCObject::CCObject()
defit __ZN7cocos2d8CCObjectC2Ev, 0x250ca0

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

; cocos2d::CCObject::update(float)
defit __ZN7cocos2d8CCObject6updateEf, 0x32660

; cocos2d::CCObject::~CCObject()
defit __ZN7cocos2d8CCObjectD0Ev, 0x250e00

; cocos2d::CCObject::~CCObject()
defit __ZN7cocos2d8CCObjectD1Ev, 0x250d90

; cocos2d::CCObject::~CCObject()
defit __ZN7cocos2d8CCObjectD2Ev, 0x250d20

; cocos2d::CCParticleSystem::resetSystem()
defit __ZN7cocos2d16CCParticleSystem11resetSystemEv, 0x46bd50

; cocos2d::CCParticleSystem::resumeSystem()
defit __ZN7cocos2d16CCParticleSystem12resumeSystemEv, 0x46bd40

; cocos2d::CCParticleSystem::stopSystem()
defit __ZN7cocos2d16CCParticleSystem10stopSystemEv, 0x46bd10

; cocos2d::CCParticleSystemQuad::create(char const*)
defit __ZN7cocos2d20CCParticleSystemQuad6createEPKc, 0x36b000

; cocos2d::CCPoint::CCPoint()
defit __ZN7cocos2d7CCPointC1Ev, 0x137060

; cocos2d::CCPoint::CCPoint()
defit __ZN7cocos2d7CCPointC2Ev, 0x137050

; cocos2d::CCPoint::CCPoint(cocos2d::CCPoint const&)
defit __ZN7cocos2d7CCPointC1ERKS0_, 0x137090

; cocos2d::CCPoint::CCPoint(float, float)
defit __ZN7cocos2d7CCPointC1Eff, 0x137000

; cocos2d::CCPoint::equals(cocos2d::CCPoint const&) const
defit __ZNK7cocos2d7CCPoint6equalsERKS0_, 0x1371d0

; cocos2d::CCPoint::operator*(float) const
defit __ZNK7cocos2d7CCPointmlEf, 0x137180

; cocos2d::CCPoint::operator+(cocos2d::CCPoint const&) const
defit __ZNK7cocos2d7CCPointplERKS0_, 0x1370f0

; cocos2d::CCPoint::operator-() const
defit __ZNK7cocos2d7CCPointngEv, 0x137150

; cocos2d::CCPoint::operator-(cocos2d::CCPoint const&) const
defit __ZNK7cocos2d7CCPointmiERKS0_, 0x137120

; cocos2d::CCPoint::operator/(float) const
defit __ZNK7cocos2d7CCPointdvEf, 0x1371a0

; cocos2d::CCPoint::operator=(cocos2d::CCPoint const&)
defit __ZN7cocos2d7CCPointaSERKS0_, 0x1370c0

; cocos2d::CCPoolManager::pop()
defit __ZN7cocos2d13CCPoolManager3popEv, 0x214620

; cocos2d::CCPoolManager::sharedPoolManager()
defit __ZN7cocos2d13CCPoolManager17sharedPoolManagerEv, 0x2142c0

; cocos2d::CCRect::CCRect()
defit __ZN7cocos2d6CCRectC1Ev, 0x1375a0

; cocos2d::CCRect::CCRect()
defit __ZN7cocos2d6CCRectC2Ev, 0x137550

; cocos2d::CCRect::CCRect(cocos2d::CCRect const&)
defit __ZN7cocos2d6CCRectC1ERKS0_, 0x137630

; cocos2d::CCRect::CCRect(float, float, float, float)
defit __ZN7cocos2d6CCRectC1Effff, 0x137020

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

; cocos2d::CCRenderTexture::begin()
defit __ZN7cocos2d15CCRenderTexture5beginEv, 0x35ce10

; cocos2d::CCRenderTexture::create(int, int, cocos2d::CCTexture2DPixelFormat)
defit __ZN7cocos2d15CCRenderTexture6createEiiNS_22CCTexture2DPixelFormatE, 0x35c720

; cocos2d::CCRenderTexture::end()
defit __ZN7cocos2d15CCRenderTexture3endEv, 0x35d2c0

; cocos2d::CCRenderTexture::newCCImage(bool)
defit __ZN7cocos2d15CCRenderTexture10newCCImageEb, 0x35d7d0

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

; cocos2d::CCScene::getHighestChildZ()
defit __ZN7cocos2d7CCScene16getHighestChildZEv, 0x13c200

; cocos2d::CCScheduler::scheduleSelector(void (cocos2d::CCObject::*)(float), cocos2d::CCObject*, float, unsigned int, float, bool)
defit __ZN7cocos2d11CCScheduler16scheduleSelectorEMNS_8CCObjectEFvfEPS1_fjfb, 0x242b20

; cocos2d::CCScheduler::scheduleUpdateForTarget(cocos2d::CCObject*, int, bool)
defit __ZN7cocos2d11CCScheduler23scheduleUpdateForTargetEPNS_8CCObjectEib, 0x2438d0

; cocos2d::CCScheduler::unscheduleAllForTarget(cocos2d::CCObject*)
defit __ZN7cocos2d11CCScheduler22unscheduleAllForTargetEPNS_8CCObjectE, 0x243e40

; cocos2d::CCSequence::create(cocos2d::CCFiniteTimeAction*, ...)
defit __ZN7cocos2d10CCSequence6createEPNS_18CCFiniteTimeActionEz, 0x1f2860

; cocos2d::CCSize::CCSize()
defit __ZN7cocos2d6CCSizeC1Ev, 0x1373d0

; cocos2d::CCSize::CCSize()
defit __ZN7cocos2d6CCSizeC2Ev, 0x1373c0

; cocos2d::CCSize::CCSize(cocos2d::CCSize const&)
defit __ZN7cocos2d6CCSizeC1ERKS0_, 0x137400

; cocos2d::CCSize::CCSize(float, float)
defit __ZN7cocos2d6CCSizeC1Eff, 0x137010

; cocos2d::CCSize::equals(cocos2d::CCSize const&) const
defit __ZNK7cocos2d6CCSize6equalsERKS0_, 0x137510

; cocos2d::CCSize::operator/(float) const
defit __ZNK7cocos2d6CCSizedvEf, 0x1374e0

; cocos2d::CCSize::operator=(cocos2d::CCSize const&)
defit __ZN7cocos2d6CCSizeaSERKS0_, 0x137430

; cocos2d::CCSprite::CCSprite()
defit __ZN7cocos2d8CCSpriteC2Ev, 0x133300

; cocos2d::CCSprite::addChild(cocos2d::CCNode*)
defit __ZN7cocos2d8CCSprite8addChildEPNS_6CCNodeE, 0x134190

; cocos2d::CCSprite::addChild(cocos2d::CCNode*, int)
defit __ZN7cocos2d8CCSprite8addChildEPNS_6CCNodeEi, 0x1341a0

; cocos2d::CCSprite::addChild(cocos2d::CCNode*, int, int)
defit __ZN7cocos2d8CCSprite8addChildEPNS_6CCNodeEii, 0x1341b0

; cocos2d::CCSprite::create()
defit __ZN7cocos2d8CCSprite6createEv, 0x132df0

; cocos2d::CCSprite::create(char const*)
defit __ZN7cocos2d8CCSprite6createEPKc, 0x132a80

; cocos2d::CCSprite::createWithSpriteFrame(cocos2d::CCSpriteFrame*)
defit __ZN7cocos2d8CCSprite21createWithSpriteFrameEPNS_13CCSpriteFrameE, 0x132cb0

; cocos2d::CCSprite::createWithSpriteFrameName(char const*)
defit __ZN7cocos2d8CCSprite25createWithSpriteFrameNameEPKc, 0x132dc0

; cocos2d::CCSprite::createWithTexture(cocos2d::CCTexture2D*)
defit __ZN7cocos2d8CCSprite17createWithTextureEPNS_11CCTexture2DE, 0x132790

; cocos2d::CCSprite::createWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&)
;defit __ZN7cocos2d8CCSprite17createWithTextureEPNS_11CCTexture2DERKNS_6CCRectE, 0x132960

; cocos2d::CCSprite::displayFrame()
defit __ZN7cocos2d8CCSprite12displayFrameEv, 0x135760

; cocos2d::CCSprite::draw()
defit __ZN7cocos2d8CCSprite4drawEv, 0x134070

; cocos2d::CCSprite::getBatchNode()
defit __ZN7cocos2d8CCSprite12getBatchNodeEv, 0x135910

; cocos2d::CCSprite::getBlendFunc()
defit __ZN7cocos2d8CCSprite12getBlendFuncEv, 0x505a0

; non-virtual thunk to cocos2d::CCSprite::getBlendFunc()
defit __ZThn312_N7cocos2d8CCSprite12getBlendFuncEv, 0x505e0

; cocos2d::CCSprite::getTexture()
defit __ZN7cocos2d8CCSprite10getTextureEv, 0x135c00

; non-virtual thunk to cocos2d::CCSprite::getTexture()
defit __ZThn312_N7cocos2d8CCSprite10getTextureEv, 0x135c10

; cocos2d::CCSprite::ignoreAnchorPointForPosition(bool)
defit __ZN7cocos2d8CCSprite28ignoreAnchorPointForPositionEb, 0x134b60

; cocos2d::CCSprite::init()
defit __ZN7cocos2d8CCSprite4initEv, 0x132ef0

; cocos2d::CCSprite::initWithFile(char const*)
defit __ZN7cocos2d8CCSprite12initWithFileEPKc, 0x133180

; cocos2d::CCSprite::initWithFile(char const*, cocos2d::CCRect const&)
defit __ZN7cocos2d8CCSprite12initWithFileEPKcRKNS_6CCRectE, 0x133210

; cocos2d::CCSprite::initWithSpriteFrame(cocos2d::CCSpriteFrame*)
defit __ZN7cocos2d8CCSprite19initWithSpriteFrameEPNS_13CCSpriteFrameE, 0x133270

; cocos2d::CCSprite::initWithSpriteFrameName(char const*)
defit __ZN7cocos2d8CCSprite23initWithSpriteFrameNameEPKc, 0x1332c0

; cocos2d::CCSprite::initWithTexture(cocos2d::CCTexture2D*)
defit __ZN7cocos2d8CCSprite15initWithTextureEPNS_11CCTexture2DE, 0x248690

; cocos2d::CCSprite::initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&)
defit __ZN7cocos2d8CCSprite15initWithTextureEPNS_11CCTexture2DERKNS_6CCRectE, 0x1330f0

; cocos2d::CCSprite::initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool)
defit __ZN7cocos2d8CCSprite15initWithTextureEPNS_11CCTexture2DERKNS_6CCRectEb, 0x132f10

; cocos2d::CCSprite::isDirty()
defit __ZN7cocos2d8CCSprite7isDirtyEv, 0x505b0

; cocos2d::CCSprite::isFrameDisplayed(cocos2d::CCSpriteFrame*)
defit __ZN7cocos2d8CCSprite16isFrameDisplayedEPNS_13CCSpriteFrameE, 0x1356d0

; cocos2d::CCSprite::isOpacityModifyRGB()
defit __ZN7cocos2d8CCSprite18isOpacityModifyRGBEv, 0x135350

; non-virtual thunk to cocos2d::CCSprite::isOpacityModifyRGB()
defit __ZThn288_N7cocos2d8CCSprite18isOpacityModifyRGBEv, 0x135360

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

; non-virtual thunk to cocos2d::CCSprite::setBlendFunc(cocos2d::_ccBlendFunc)
defit __ZThn312_N7cocos2d8CCSprite12setBlendFuncENS_12_ccBlendFuncE, 0x505d0

; cocos2d::CCSprite::setChildColor(cocos2d::_ccColor3B const&)
defit __ZN7cocos2d8CCSprite13setChildColorERKNS_10_ccColor3BE, 0x135160

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

; cocos2d::CCSprite::setFlipX(bool)
defit __ZN7cocos2d8CCSprite8setFlipXEb, 0x134be0

; cocos2d::CCSprite::setFlipY(bool)
defit __ZN7cocos2d8CCSprite8setFlipYEb, 0x134c30

; cocos2d::CCSprite::setOpacityModifyRGB(bool)
defit __ZN7cocos2d8CCSprite19setOpacityModifyRGBEb, 0x135200

; non-virtual thunk to cocos2d::CCSprite::setOpacityModifyRGB(bool)
defit __ZThn288_N7cocos2d8CCSprite19setOpacityModifyRGBEb, 0x135330

; cocos2d::CCSprite::setPosition(cocos2d::CCPoint const&)
defit __ZN7cocos2d8CCSprite11setPositionERKNS_7CCPointE, 0x134650

; cocos2d::CCSprite::setReorderChildDirtyRecursively()
defit __ZN7cocos2d8CCSprite31setReorderChildDirtyRecursivelyEv, 0x134550

; cocos2d::CCSprite::setRotationX(float)
defit __ZN7cocos2d8CCSprite12setRotationXEf, 0x134740

; cocos2d::CCSprite::setRotationY(float)
defit __ZN7cocos2d8CCSprite12setRotationYEf, 0x1347b0

; cocos2d::CCSprite::setScaleX(float)
defit __ZN7cocos2d8CCSprite9setScaleXEf, 0x134900

; cocos2d::CCSprite::setScaleY(float)
defit __ZN7cocos2d8CCSprite9setScaleYEf, 0x134980

; cocos2d::CCSprite::setSkewX(float)
defit __ZN7cocos2d8CCSprite8setSkewXEf, 0x134820

; cocos2d::CCSprite::setSkewY(float)
defit __ZN7cocos2d8CCSprite8setSkewYEf, 0x134890

; cocos2d::CCSprite::setTexture(cocos2d::CCTexture2D*)
defit __ZN7cocos2d8CCSprite10setTextureEPNS_11CCTexture2DE, 0x135a90

; non-virtual thunk to cocos2d::CCSprite::setTexture(cocos2d::CCTexture2D*)
defit __ZThn312_N7cocos2d8CCSprite10setTextureEPNS_11CCTexture2DE, 0x135be0

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

; non-virtual thunk to cocos2d::CCSprite::updateDisplayedColor(cocos2d::_ccColor3B const&)
defit __ZThn288_N7cocos2d8CCSprite20updateDisplayedColorERKNS_10_ccColor3BE, 0x1354a0

; cocos2d::CCSprite::updateDisplayedOpacity(unsigned char)
defit __ZN7cocos2d8CCSprite22updateDisplayedOpacityEh, 0x1354c0

; non-virtual thunk to cocos2d::CCSprite::updateDisplayedOpacity(unsigned char)
defit __ZThn288_N7cocos2d8CCSprite22updateDisplayedOpacityEh, 0x1355f0

; cocos2d::CCSprite::updateTransform()
defit __ZN7cocos2d8CCSprite15updateTransformEv, 0x133b70

; cocos2d::CCSprite::~CCSprite()
defit __ZN7cocos2d8CCSpriteD2Ev, 0x133430

; cocos2d::CCSpriteBatchNode::create(char const*, unsigned int)
defit __ZN7cocos2d17CCSpriteBatchNode6createEPKcj, 0xbb540

; cocos2d::CCSpriteBatchNode::createWithTexture(cocos2d::CCTexture2D*, unsigned int)
defit __ZN7cocos2d17CCSpriteBatchNode17createWithTextureEPNS_11CCTexture2DEj, 0xbb310

; cocos2d::CCSpriteBatchNode::getUsedAtlasCapacity()
defit __ZN7cocos2d17CCSpriteBatchNode20getUsedAtlasCapacityEv, 0xbc6b0

; cocos2d::CCSpriteBatchNode::increaseAtlasCapacity(unsigned int)
defit __ZN7cocos2d17CCSpriteBatchNode21increaseAtlasCapacityEj, 0xbc670

; cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(char const*)
defit __ZN7cocos2d18CCSpriteFrameCache23addSpriteFramesWithFileEPKc, 0x199a10

; cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache()
defit __ZN7cocos2d18CCSpriteFrameCache22sharedSpriteFrameCacheEv, 0x198970

; cocos2d::CCSpriteFrameCache::spriteFrameByName(char const*)
defit __ZN7cocos2d18CCSpriteFrameCache17spriteFrameByNameEPKc, 0x19a7e0

; cocos2d::CCString::CCString(std::string const&)
defit __ZN7cocos2d8CCStringC2ERKSs, 0x44c310

; cocos2d::CCString::boolValue() const
defit __ZNK7cocos2d8CCString9boolValueEv, 0x44c810

; cocos2d::CCString::createWithFormat(char const*, ...)
defit __ZN7cocos2d8CCString16createWithFormatEPKcz, 0x44cab0

; cocos2d::CCString::doubleValue() const
defit __ZNK7cocos2d8CCString11doubleValueEv, 0x44c7f0

; cocos2d::CCString::floatValue() const
defit __ZNK7cocos2d8CCString10floatValueEv, 0x44c7d0

; cocos2d::CCString::getCString() const
defit __ZNK7cocos2d8CCString10getCStringEv, 0x44c470

; cocos2d::CCString::intValue() const
defit __ZNK7cocos2d8CCString8intValueEv, 0x44c780

; cocos2d::CCTextFieldDelegate::onDraw(cocos2d::CCTextFieldTTF*)
defit __ZN7cocos2d19CCTextFieldDelegate6onDrawEPNS_14CCTextFieldTTFE, 0x5efd0

; cocos2d::CCTextFieldDelegate::onTextFieldDeleteBackward(cocos2d::CCTextFieldTTF*, char const*, int)
defit __ZN7cocos2d19CCTextFieldDelegate25onTextFieldDeleteBackwardEPNS_14CCTextFieldTTFEPKci, 0x5efc0

; non-virtual thunk to cocos2d::CCTextFieldTTF::attachWithIME()
;defit __ZThn548_N7cocos2d14CCTextFieldTTF13attachWithIMEEv, 0x126370

; non-virtual thunk to cocos2d::CCTextFieldTTF::detachWithIME()
;defit __ZThn548_N7cocos2d14CCTextFieldTTF13detachWithIMEEv, 0x1263f0

; cocos2d::CCTexture2D::CCTexture2D()
defit __ZN7cocos2d11CCTexture2DC1Ev, 0x246280

; cocos2d::CCTexture2D::getContentSize()
defit __ZN7cocos2d11CCTexture2D14getContentSizeEv, 0x246460

; cocos2d::CCTexture2D::getMaxS()
defit __ZN7cocos2d11CCTexture2D7getMaxSEv, 0x2464e0

; cocos2d::CCTexture2D::getMaxT()
defit __ZN7cocos2d11CCTexture2D7getMaxTEv, 0x246500

; cocos2d::CCTexture2D::getName()
defit __ZN7cocos2d11CCTexture2D7getNameEv, 0x246450

; cocos2d::CCTexture2D::getPixelFormat()
defit __ZN7cocos2d11CCTexture2D14getPixelFormatEv, 0x246420

; cocos2d::CCTexture2D::getPixelsHigh()
defit __ZN7cocos2d11CCTexture2D13getPixelsHighEv, 0x246440

; cocos2d::CCTexture2D::getPixelsWide()
defit __ZN7cocos2d11CCTexture2D13getPixelsWideEv, 0x246430

; cocos2d::CCTexture2D::getShaderProgram()
defit __ZN7cocos2d11CCTexture2D16getShaderProgramEv, 0x246520

; cocos2d::CCTexture2D::initPremultipliedATextureWithImage(cocos2d::CCImage*, unsigned int, unsigned int)
defit __ZN7cocos2d11CCTexture2D34initPremultipliedATextureWithImageEPNS_7CCImageEjj, 0x2469a0

; cocos2d::CCTexture2D::initWithData(void const*, cocos2d::CCTexture2DPixelFormat, unsigned int, unsigned int, cocos2d::CCSize const&)
defit __ZN7cocos2d11CCTexture2D12initWithDataEPKvNS_22CCTexture2DPixelFormatEjjRKNS_6CCSizeE, 0x2465d0

; cocos2d::CCTexture2D::initWithImage(cocos2d::CCImage*)
defit __ZN7cocos2d11CCTexture2D13initWithImageEPNS_7CCImageE, 0x246940

; cocos2d::CCTexture2D::setAliasTexParameters()
defit __ZN7cocos2d11CCTexture2D21setAliasTexParametersEv, 0x247a20

; cocos2d::CCTexture2D::setAntiAliasTexParameters()
defit __ZN7cocos2d11CCTexture2D25setAntiAliasTexParametersEv, 0x247a80

; cocos2d::CCTexture2D::setMaxS(float)
defit __ZN7cocos2d11CCTexture2D7setMaxSEf, 0x2464f0

; cocos2d::CCTexture2D::setMaxT(float)
defit __ZN7cocos2d11CCTexture2D7setMaxTEf, 0x246510

; cocos2d::CCTexture2D::setShaderProgram(cocos2d::CCGLProgram*)
defit __ZN7cocos2d11CCTexture2D16setShaderProgramEPNS_11CCGLProgramE, 0x246530

; cocos2d::CCTexture2D::setTexParameters(cocos2d::_ccTexParams*)
defit __ZN7cocos2d11CCTexture2D16setTexParametersEPNS_12_ccTexParamsE, 0x247980

; cocos2d::CCTexture2D::~CCTexture2D()
;defit __ZN7cocos2d11CCTexture2DD2Ev, 0x246350

; cocos2d::CCTexture2D::~CCTexture2D()
;defit __ZN7cocos2d11CCTexture2DD2Ev, 0x2463b0

; cocos2d::CCTextureCache::addImage(char const*, bool)
defit __ZN7cocos2d14CCTextureCache8addImageEPKcb, 0x358120

; cocos2d::CCTextureCache::sharedTextureCache()
defit __ZN7cocos2d14CCTextureCache18sharedTextureCacheEv, 0x356e00

; cocos2d::CCTintTo::create(float, unsigned char, unsigned char, unsigned char)
defit __ZN7cocos2d8CCTintTo6createEfhhh, 0x1f82a0

; cocos2d::CCTouch::getDelta() const
defit __ZNK7cocos2d7CCTouch8getDeltaEv, 0x38340

; cocos2d::CCTouch::getLocation() const
defit __ZNK7cocos2d7CCTouch11getLocationEv, 0x382b0

; cocos2d::CCTouch::getLocationInView() const
defit __ZNK7cocos2d7CCTouch17getLocationInViewEv, 0x38250

; cocos2d::CCTouchDispatcher::decrementForcePrio(int)
defit __ZN7cocos2d17CCTouchDispatcher18decrementForcePrioEi, 0x280f70

; cocos2d::CCTouchDispatcher::incrementForcePrio(int)
defit __ZN7cocos2d17CCTouchDispatcher18incrementForcePrioEi, 0x280f60

; cocos2d::CCTransitionFade::create(float, cocos2d::CCScene*)
defit __ZN7cocos2d16CCTransitionFade6createEfPNS_7CCSceneE, 0x8ea30

; cocos2d::ZipUtils::compressString(std::string, bool, int)
defit __ZN7cocos2d8ZipUtils14compressStringESsbi, 0xe9a50

; cocos2d::ZipUtils::decompressString(std::string, bool, int)
defit __ZN7cocos2d8ZipUtils16decompressStringESsbi, 0xea380

; cocos2d::ccArrayRemoveAllObjects(cocos2d::_ccArray*)
defit __ZN7cocos2d23ccArrayRemoveAllObjectsEPNS_8_ccArrayE, 0x3b1c80

; cocos2d::ccDrawColor4B(unsigned char, unsigned char, unsigned char, unsigned char)
defit __ZN7cocos2d13ccDrawColor4BEhhhh, 0xeddd0

; cocos2d::ccDrawLine(cocos2d::CCPoint const&, cocos2d::CCPoint const&)
defit __ZN7cocos2d10ccDrawLineERKNS_7CCPointES2_, 0xeccc0

; cocos2d::ccGLBindTexture2D(unsigned int)
defit __ZN7cocos2d17ccGLBindTexture2DEj, 0x1ae610

; cocos2d::ccGLDeleteTexture(unsigned int)
defit __ZN7cocos2d17ccGLDeleteTextureEj, 0x1ae690

; cocos2d::ccpDistance(cocos2d::CCPoint const&, cocos2d::CCPoint const&)
defit __ZN7cocos2d11ccpDistanceERKNS_7CCPointES2_, 0x1aaf90

; cocos2d::extension::CCControlColourPicker::setColorValue(cocos2d::_ccColor3B const&)
defit __ZN7cocos2d9extension21CCControlColourPicker13setColorValueERKNS_10_ccColor3BE, 0x1aac10

; cocos2d::extension::CCControlUtils::HSVfromRGB(cocos2d::extension::RGBA)
defit __ZN7cocos2d9extension14CCControlUtils10HSVfromRGBENS0_4RGBAE, 0x1e6750

; cocos2d::extension::CCControlUtils::RGBfromHSV(cocos2d::extension::HSV)
defit __ZN7cocos2d9extension14CCControlUtils10RGBfromHSVENS0_3HSVE, 0x1e6850

; cocos2d::extension::CCScale9Sprite::CCScale9Sprite()
defit __ZN7cocos2d9extension14CCScale9SpriteC2Ev, 0x211330

; cocos2d::extension::CCScale9Sprite::create(char const*)
defit __ZN7cocos2d9extension14CCScale9Sprite6createEPKc, 0x2130d0

; cocos2d::extension::CCScale9Sprite::create(char const*, cocos2d::CCRect)
defit __ZN7cocos2d9extension14CCScale9Sprite6createEPKcNS_6CCRectE, 0x212ef0

; cocos2d::extension::CCScale9Sprite::setContentSize(cocos2d::CCSize const&)
defit __ZN7cocos2d9extension14CCScale9Sprite14setContentSizeERKNS_6CCSizeE, 0x2127c0

; cocos2d::extension::CCScrollView::CCScrollView()
defit __ZN7cocos2d9extension12CCScrollViewC2Ev, 0x214800

; fmt::BasicFormatter<char>::Format(fmt::BasicStringRef<char>, fmt::ArgList const&)
defit __ZN3fmt14BasicFormatterIcE6FormatENS_14BasicStringRefIcEERKNS_7ArgListE, 0xf9e00

; fmt::BasicFormatter<wchar_t>::Format(fmt::BasicStringRef<wchar_t>, fmt::ArgList const&)
defit __ZN3fmt14BasicFormatterIwE6FormatENS_14BasicStringRefIwEERKNS_7ArgListE, 0xfd2d0

; fmt::BasicWriter<char>::FillPadding(char*, unsigned int, unsigned int, wchar_t)
defit __ZN3fmt11BasicWriterIcE11FillPaddingEPcjjw, 0xf9da0

; fmt::BasicWriter<char>::operator<<(int)
defit __ZN3fmt11BasicWriterIcElsEi, 0x4e740

; fmt::BasicWriter<wchar_t>::FillPadding(wchar_t*, unsigned int, unsigned int, wchar_t)
defit __ZN3fmt11BasicWriterIwE11FillPaddingEPwjjw, 0xfd060

; fmt::internal::PrintfParser<char>::Format(fmt::BasicWriter<char>&, fmt::BasicStringRef<char>, fmt::ArgList const&)
defit __ZN3fmt8internal12PrintfParserIcE6FormatERNS_11BasicWriterIcEENS_14BasicStringRefIcEERKNS_7ArgListE, 0xfa900

; fmt::internal::PrintfParser<wchar_t>::Format(fmt::BasicWriter<wchar_t>&, fmt::BasicStringRef<wchar_t>, fmt::ArgList const&)
defit __ZN3fmt8internal12PrintfParserIwE6FormatERNS_11BasicWriterIwEENS_14BasicStringRefIwEERKNS_7ArgListE, 0xfe2e0

; pugi::xml_document::destroy()
defit __ZN4pugi12xml_document7destroyEv, 0x393b50

; pugi::xml_document::~xml_document()
defit __ZN4pugi12xml_documentD1Ev, 0x393c30

; randRange(float, float)
defit __Z9randRangeff, 0xe18c0

; xCompRealPos(void const*, void const*)
defit __Z12xCompRealPosPKvS0_, 0x6b050

; xCompSpeed(void const*, void const*)
defit __Z10xCompSpeedPKvS0_, 0x6b030

%macro nul 1
    global %1
    %1: resb 1
%endmacro

section .bss

; typeinfo for ArtistCell
nul __ZTI10ArtistCell

; typeinfo for ButtonPage
nul __ZTI10ButtonPage

; typeinfo for FontObject
nul __ZTI10FontObject

; typeinfo for GJItemIcon
nul __ZTI10GJItemIcon

; typeinfo for GJUserCell
nul __ZTI10GJUserCell

; typeinfo for GameObject
nul __ZTI10GameObject

; typeinfo for GaragePage
nul __ZTI10GaragePage

; typeinfo for HardStreak
nul __ZTI10HardStreak

; typeinfo for PauseLayer
nul __ZTI10PauseLayer

; typeinfo for PriceLabel
nul __ZTI10PriceLabel

; typeinfo for RingObject
nul __ZTI10RingObject

; typeinfo for SetIDLayer
nul __ZTI10SetIDLayer

; typeinfo for SetIDPopup
nul __ZTI10SetIDPopup

; typeinfo for ShardsPage
nul __ZTI10ShardsPage

; typeinfo for SongObject
nul __ZTI10SongObject

; typeinfo for SongsLayer
nul __ZTI10SongsLayer

; typeinfo for StatsLayer
nul __ZTI10StatsLayer

; typeinfo for UndoObject
nul __ZTI10UndoObject

; typeinfo for AppDelegate
nul __ZTI11AppDelegate

; typeinfo for CCCountdown
nul __ZTI11CCCountdown

; typeinfo for CCIndexPath
nul __ZTI11CCIndexPath

; typeinfo for CCMoveCNode
nul __ZTI11CCMoveCNode

; typeinfo for ColorAction
nul __ZTI11ColorAction

; typeinfo for CommentCell
nul __ZTI11CommentCell

; typeinfo for DialogLayer
nul __ZTI11DialogLayer

; typeinfo for GJGameLevel
nul __ZTI11GJGameLevel

; typeinfo for GJListLayer
nul __ZTI11GJListLayer

; typeinfo for GJScoreCell
nul __ZTI11GJScoreCell

; typeinfo for GJShopLayer
nul __ZTI11GJShopLayer

; typeinfo for GJStoreItem
nul __ZTI11GJStoreItem

; typeinfo for GJUserScore
nul __ZTI11GJUserScore

; typeinfo for GJWorldNode
nul __ZTI11GJWorldNode

; typeinfo for GameManager
nul __ZTI11GameManager

; typeinfo for MapPackCell
nul __ZTI11MapPackCell

; typeinfo for ProfilePage
nul __ZTI11ProfilePage

; typeinfo for RewardsPage
nul __ZTI11RewardsPage

; typeinfo for SecretLayer
nul __ZTI11SecretLayer

; typeinfo for SliderThumb
nul __ZTI11SliderThumb

; typeinfo for SpeedObject
nul __ZTI11SpeedObject

; typeinfo for StatsObject
nul __ZTI11StatsObject

; typeinfo for UploadPopup
nul __ZTI11UploadPopup

; typeinfo for AccountLayer
nul __ZTI12AccountLayer

; typeinfo for BoomListView
nul __ZTI12BoomListView

; typeinfo for ButtonSprite
nul __ZTI12ButtonSprite

; typeinfo for CCBlockLayer
nul __ZTI12CCBlockLayer

; typeinfo for CCCircleWave
nul __ZTI12CCCircleWave

; typeinfo for CCLightFlash
nul __ZTI12CCLightFlash

; typeinfo for CCLightStrip
nul __ZTI12CCLightStrip

; typeinfo for CCSpritePart
nul __ZTI12CCSpritePart

; typeinfo for CCSpritePlus
nul __ZTI12CCSpritePlus

; typeinfo for CreatorLayer
nul __ZTI12CreatorLayer

; typeinfo for DelaySection
nul __ZTI12DelaySection

; typeinfo for DialogObject
nul __ZTI12DialogObject

; typeinfo for FLAlertLayer
nul __ZTI12FLAlertLayer

; typeinfo for GJHttpResult
nul __ZTI12GJHttpResult

; typeinfo for GJRewardItem
nul __ZTI12GJRewardItem

; typeinfo for GauntletNode
nul __ZTI12GauntletNode

; typeinfo for LoadingLayer
nul __ZTI12LoadingLayer

; typeinfo for OptionsLayer
nul __ZTI12OptionsLayer

; typeinfo for PlayerObject
nul __ZTI12PlayerObject

; typeinfo for SearchButton
nul __ZTI12SearchButton

; typeinfo for SecretLayer2
nul __ZTI12SecretLayer2

; typeinfo for SecretLayer3
nul __ZTI12SecretLayer3

; typeinfo for SecretLayer4
nul __ZTI12SecretLayer4

; typeinfo for SetTextPopup
nul __ZTI12SetTextPopup

; typeinfo for SimpleObject
nul __ZTI12SimpleObject

; typeinfo for SimplePlayer
nul __ZTI12SimplePlayer

; typeinfo for SlideInLayer
nul __ZTI12SlideInLayer

; typeinfo for SupportLayer
nul __ZTI12SupportLayer

; typeinfo for BonusDropdown
nul __ZTI13BonusDropdown

; typeinfo for BoomListLayer
nul __ZTI13BoomListLayer

; typeinfo for CCAlertCircle
nul __ZTI13CCAlertCircle

; typeinfo for CCCircleAlert
nul __ZTI13CCCircleAlert

; typeinfo for ChallengeNode
nul __ZTI13ChallengeNode

; typeinfo for DrawGridLayer
nul __ZTI13DrawGridLayer

; typeinfo for EditButtonBar
nul __ZTI13EditButtonBar

; typeinfo for EndLevelLayer
nul __ZTI13EndLevelLayer

; typeinfo for ExtendedLayer
nul __ZTI13ExtendedLayer

; typeinfo for GJChestSprite
nul __ZTI13GJChestSprite

; typeinfo for GJGarageLayer
nul __ZTI13GJGarageLayer

; typeinfo for GJGroundLayer
nul __ZTI13GJGroundLayer

; typeinfo for GJMessageCell
nul __ZTI13GJMessageCell

; typeinfo for GJRequestCell
nul __ZTI13GJRequestCell

; typeinfo for GJRobotSprite
nul __ZTI13GJRobotSprite

; typeinfo for GJSongBrowser
nul __ZTI13GJSongBrowser

; typeinfo for GJSpriteColor
nul __ZTI13GJSpriteColor

; typeinfo for GJUserMessage
nul __ZTI13GJUserMessage

; typeinfo for GauntletLayer
nul __ZTI13GauntletLayer

; typeinfo for LikeItemLayer
nul __ZTI13LikeItemLayer

; typeinfo for ListButtonBar
nul __ZTI13ListButtonBar

; typeinfo for LoadingCircle
nul __ZTI13LoadingCircle

; typeinfo for MenuGameLayer
nul __ZTI13MenuGameLayer

; typeinfo for MyLevelsLayer
nul __ZTI13MyLevelsLayer

; typeinfo for ObjectDecoder
nul __ZTI13ObjectDecoder

; typeinfo for ObjectManager
nul __ZTI13ObjectManager

; typeinfo for ObjectToolbox
nul __ZTI13ObjectToolbox

; typeinfo for SongInfoLayer
nul __ZTI13SongInfoLayer

; typeinfo for TableViewCell
nul __ZTI13TableViewCell

; typeinfo for TutorialLayer
nul __ZTI13TutorialLayer

; typeinfo for TutorialPopup
nul __ZTI13TutorialPopup

; typeinfo for AchievementBar
nul __ZTI14AchievementBar

; typeinfo for CCContentLayer
nul __ZTI14CCContentLayer

; typeinfo for CCCounterLabel
nul __ZTI14CCCounterLabel

; typeinfo for ChallengesPage
nul __ZTI14ChallengesPage

; typeinfo for ColoredSection
nul __ZTI14ColoredSection

; typeinfo for CreateMenuItem
nul __ZTI14CreateMenuItem

; typeinfo for CurrencySprite
nul __ZTI14CurrencySprite

; typeinfo for CustomListView
nul __ZTI14CustomListView

; typeinfo for CustomSongCell
nul __ZTI14CustomSongCell

; typeinfo for DailyLevelNode
nul __ZTI14DailyLevelNode

; typeinfo for DailyLevelPage
nul __ZTI14DailyLevelPage

; typeinfo for DialogDelegate
nul __ZTI14DialogDelegate

; typeinfo for EditLevelLayer
nul __ZTI14EditLevelLayer

; typeinfo for GJMessagePopup
nul __ZTI14GJMessagePopup

; typeinfo for GJOptionsLayer
nul __ZTI14GJOptionsLayer

; typeinfo for GJRewardObject
nul __ZTI14GJRewardObject

; typeinfo for GJScaleControl
nul __ZTI14GJScaleControl

; typeinfo for GJSearchObject
nul __ZTI14GJSearchObject

; typeinfo for GJSpiderSprite
nul __ZTI14GJSpiderSprite

; typeinfo for GameObjectCopy
nul __ZTI14GameObjectCopy

; typeinfo for HSVWidgetPopup
nul __ZTI14HSVWidgetPopup

; typeinfo for InstantSection
nul __ZTI14InstantSection

; typeinfo for LevelInfoLayer
nul __ZTI14LevelInfoLayer

; typeinfo for ListButtonPage
nul __ZTI14ListButtonPage

; typeinfo for RateDemonLayer
nul __ZTI14RateDemonLayer

; typeinfo for RateLevelLayer
nul __ZTI14RateLevelLayer

; typeinfo for RateStarsLayer
nul __ZTI14RateStarsLayer

; typeinfo for ScrollingLayer
nul __ZTI14ScrollingLayer

; typeinfo for SelectArtLayer
nul __ZTI14SelectArtLayer

; typeinfo for SetFolderPopup
nul __ZTI14SetFolderPopup

; typeinfo for SetItemIDLayer
nul __ZTI14SetItemIDLayer

; typeinfo for SongInfoObject
nul __ZTI14SongInfoObject

; typeinfo for StartPosObject
nul __ZTI14StartPosObject

; typeinfo for TextAlertPopup
nul __ZTI14TextAlertPopup

; typeinfo for WorldLevelPage
nul __ZTI14WorldLevelPage

; typeinfo for AchievementCell
nul __ZTI15AchievementCell

; typeinfo for BitmapFontCache
nul __ZTI15BitmapFontCache

; typeinfo for BoomScrollLayer
nul __ZTI15BoomScrollLayer

; typeinfo for CCNodeContainer
nul __ZTI15CCNodeContainer

; typeinfo for CCSpriteWithHue
nul __ZTI15CCSpriteWithHue

; typeinfo for CCTextInputNode
nul __ZTI15CCTextInputNode

; typeinfo for CustomSongLayer
nul __ZTI15CustomSongLayer

; typeinfo for EndPortalObject
nul __ZTI15EndPortalObject

; typeinfo for FMODAudioEngine
nul __ZTI15FMODAudioEngine

; typeinfo for FileSaveManager
nul __ZTI15FileSaveManager

; typeinfo for GJBaseGameLayer
nul __ZTI15GJBaseGameLayer

; typeinfo for GJChallengeItem
nul __ZTI15GJChallengeItem

; typeinfo for GJDropDownLayer
nul __ZTI15GJDropDownLayer

; typeinfo for GJEffectManager
nul __ZTI15GJEffectManager

; typeinfo for GJFriendRequest
nul __ZTI15GJFriendRequest

; typeinfo for GJObjectDecoder
nul __ZTI15GJObjectDecoder

; typeinfo for InfoAlertButton
nul __ZTI15InfoAlertButton

; typeinfo for InheritanceNode
nul __ZTI15InheritanceNode

; typeinfo for LabelGameObject
nul __ZTI15LabelGameObject

; typeinfo for MoreSearchLayer
nul __ZTI15MoreSearchLayer

; typeinfo for RetryLevelLayer
nul __ZTI15RetryLevelLayer

; typeinfo for SelectFontLayer
nul __ZTI15SelectFontLayer

; typeinfo for SetGroupIDLayer
nul __ZTI15SetGroupIDLayer

; typeinfo for SetupPulsePopup
nul __ZTI15SetupPulsePopup

; typeinfo for SetupShakePopup
nul __ZTI15SetupShakePopup

; typeinfo for SetupSpawnPopup
nul __ZTI15SetupSpawnPopup

; typeinfo for ShareLevelLayer
nul __ZTI15ShareLevelLayer

; typeinfo for TopArtistsLayer
nul __ZTI15TopArtistsLayer

; typeinfo for AccountHelpLayer
nul __ZTI16AccountHelpLayer

; typeinfo for CCAnimatedSprite
nul __ZTI16CCAnimatedSprite

; typeinfo for CCContentManager
nul __ZTI16CCContentManager

; typeinfo for CCPartAnimSprite
nul __ZTI16CCPartAnimSprite

; typeinfo for CCScrollLayerExt
nul __ZTI16CCScrollLayerExt

; typeinfo for CheckpointObject
nul __ZTI16CheckpointObject

; typeinfo for ColorSelectPopup
nul __ZTI16ColorSelectPopup

; typeinfo for CustomSongWidget
nul __ZTI16CustomSongWidget

; typeinfo for DelayedSpawnNode
nul __ZTI16DelayedSpawnNode

; typeinfo for EditorPauseLayer
nul __ZTI16EditorPauseLayer

; typeinfo for EffectGameObject
nul __ZTI16EffectGameObject

; typeinfo for FollowRewardPage
nul __ZTI16FollowRewardPage

; typeinfo for GJAccountManager
nul __ZTI16GJAccountManager

; typeinfo for GJFlyGroundLayer
nul __ZTI16GJFlyGroundLayer

; typeinfo for GJLevelScoreCell
nul __ZTI16GJLevelScoreCell

; typeinfo for GJMoreGamesLayer
nul __ZTI16GJMoreGamesLayer

; typeinfo for GJRewardDelegate
nul __ZTI16GJRewardDelegate

; typeinfo for GJUnlockableItem
nul __ZTI16GJUnlockableItem

; typeinfo for GameLevelManager
nul __ZTI16GameLevelManager

; typeinfo for GameRateDelegate
nul __ZTI16GameRateDelegate

; typeinfo for GameSoundManager
nul __ZTI16GameSoundManager

; typeinfo for GameStatsManager
nul __ZTI16GameStatsManager

; typeinfo for GhostTrailEffect
nul __ZTI16GhostTrailEffect

; typeinfo for KeybindingsLayer
nul __ZTI16KeybindingsLayer

; typeinfo for LevelEditorLayer
nul __ZTI16LevelEditorLayer

; typeinfo for LevelLeaderboard
nul __ZTI16LevelLeaderboard

; typeinfo for LevelSearchLayer
nul __ZTI16LevelSearchLayer

; typeinfo for LevelSelectLayer
nul __ZTI16LevelSelectLayer

; typeinfo for LikeItemDelegate
nul __ZTI16LikeItemDelegate

; typeinfo for MoreOptionsLayer
nul __ZTI16MoreOptionsLayer

; typeinfo for NumberInputLayer
nul __ZTI16NumberInputLayer

; typeinfo for PlayerCheckpoint
nul __ZTI16PlayerCheckpoint

; typeinfo for SetTargetIDLayer
nul __ZTI16SetTargetIDLayer

; typeinfo for SetupRotatePopup
nul __ZTI16SetupRotatePopup

; typeinfo for SliderTouchLogic
nul __ZTI16SliderTouchLogic

; typeinfo for SongOptionsLayer
nul __ZTI16SongOptionsLayer

; typeinfo for TextAreaDelegate
nul __ZTI16TextAreaDelegate

; typeinfo for UserInfoDelegate
nul __ZTI16UserInfoDelegate

; typeinfo for UserListDelegate
nul __ZTI16UserListDelegate

; typeinfo for WorldSelectLayer
nul __ZTI16WorldSelectLayer

; typeinfo for AccountLoginLayer
nul __ZTI17AccountLoginLayer

; typeinfo for AchievementsLayer
nul __ZTI17AchievementsLayer

; typeinfo for AudioEffectsLayer
nul __ZTI17AudioEffectsLayer

; typeinfo for CCMenuItemToggler
nul __ZTI17CCMenuItemToggler

; typeinfo for ColorActionSprite
nul __ZTI17ColorActionSprite

; typeinfo for DungeonBarsSprite
nul __ZTI17DungeonBarsSprite

; typeinfo for EditTriggersPopup
nul __ZTI17EditTriggersPopup

; typeinfo for GJAccountDelegate
nul __ZTI17GJAccountDelegate

; typeinfo for GJColorSetupLayer
nul __ZTI17GJColorSetupLayer

; typeinfo for GJRotationControl
nul __ZTI17GJRotationControl

; typeinfo for GooglePlayManager
nul __ZTI17GooglePlayManager

; typeinfo for LeaderboardsLayer
nul __ZTI17LeaderboardsLayer

; typeinfo for LevelBrowserLayer
nul __ZTI17LevelBrowserLayer

; typeinfo for LevelFeatureLayer
nul __ZTI17LevelFeatureLayer

; typeinfo for LocalLevelManager
nul __ZTI17LocalLevelManager

; typeinfo for PromoInterstitial
nul __ZTI17PromoInterstitial

; typeinfo for PulseEffectAction
nul __ZTI17PulseEffectAction

; typeinfo for PurchaseItemPopup
nul __ZTI17PurchaseItemPopup

; typeinfo for RateLevelDelegate
nul __ZTI17RateLevelDelegate

; typeinfo for RewardUnlockLayer
nul __ZTI17RewardUnlockLayer

; typeinfo for SecretNumberLayer
nul __ZTI17SecretNumberLayer

; typeinfo for SelectArtDelegate
nul __ZTI17SelectArtDelegate

; typeinfo for SetupOpacityPopup
nul __ZTI17SetupOpacityPopup

; typeinfo for ShareCommentLayer
nul __ZTI17ShareCommentLayer

; typeinfo for SpriteDescription
nul __ZTI17SpriteDescription

; typeinfo for TableViewDelegate
nul __ZTI17TableViewDelegate

; typeinfo for TextInputDelegate
nul __ZTI17TextInputDelegate

; typeinfo for TouchToggleAction
nul __ZTI17TouchToggleAction

; typeinfo for UploadActionPopup
nul __ZTI17UploadActionPopup

; typeinfo for VideoOptionsLayer
nul __ZTI17VideoOptionsLayer

; typeinfo for xml_string_writer
nul __ZTI17xml_string_writer

; typeinfo for AchievementManager
nul __ZTI18AchievementManager

; typeinfo for AnimatedGameObject
nul __ZTI18AnimatedGameObject

; typeinfo for AnimatedShopKeeper
nul __ZTI18AnimatedShopKeeper

; typeinfo for ColorChannelSprite
nul __ZTI18ColorChannelSprite

; typeinfo for ColorSetupDelegate
nul __ZTI18ColorSetupDelegate

; typeinfo for ConfigureHSVWidget
nul __ZTI18ConfigureHSVWidget

; typeinfo for CountTriggerAction
nul __ZTI18CountTriggerAction

; typeinfo for EditorOptionsLayer
nul __ZTI18EditorOptionsLayer

; typeinfo for FriendRequestPopup
nul __ZTI18FriendRequestPopup

; typeinfo for FriendsProfilePage
nul __ZTI18FriendsProfilePage

; typeinfo for GJCommentListLayer
nul __ZTI18GJCommentListLayer

; typeinfo for GJMoveCommandLayer
nul __ZTI18GJMoveCommandLayer

; typeinfo for GJPurchaseDelegate
nul __ZTI18GJPurchaseDelegate

; typeinfo for GameEffectsManager
nul __ZTI18GameEffectsManager

; typeinfo for GooglePlayDelegate
nul __ZTI18GooglePlayDelegate

; typeinfo for GroupCommandObject
nul __ZTI18GroupCommandObject

; typeinfo for KeybindingsManager
nul __ZTI18KeybindingsManager

; typeinfo for LevelSettingsLayer
nul __ZTI18LevelSettingsLayer

; typeinfo for OnlineListDelegate
nul __ZTI18OnlineListDelegate

; typeinfo for SetIDPopupDelegate
nul __ZTI18SetIDPopupDelegate

; typeinfo for SpawnTriggerAction
nul __ZTI18SpawnTriggerAction

; typeinfo for SpritePartDelegate
nul __ZTI18SpritePartDelegate

; typeinfo for AchievementNotifier
nul __ZTI19AchievementNotifier

; typeinfo for CCAnimateFrameCache
nul __ZTI19CCAnimateFrameCache

; typeinfo for CollisionBlockPopup
nul __ZTI19CollisionBlockPopup

; typeinfo for ColorSelectDelegate
nul __ZTI19ColorSelectDelegate

; typeinfo for CommunityCreditNode
nul __ZTI19CommunityCreditNode

; typeinfo for ConfigureValuePopup
nul __ZTI19ConfigureValuePopup

; typeinfo for CurrencyRewardLayer
nul __ZTI19CurrencyRewardLayer

; typeinfo for DemonFilterDelegate
nul __ZTI19DemonFilterDelegate

; typeinfo for EditGameObjectPopup
nul __ZTI19EditGameObjectPopup

; typeinfo for FRequestProfilePage
nul __ZTI19FRequestProfilePage

; typeinfo for GJChallengeDelegate
nul __ZTI19GJChallengeDelegate

; typeinfo for GJWriteMessagePopup
nul __ZTI19GJWriteMessagePopup

; typeinfo for GauntletSelectLayer
nul __ZTI19GauntletSelectLayer

; typeinfo for GravityEffectSprite
nul __ZTI19GravityEffectSprite

; typeinfo for LevelDeleteDelegate
nul __ZTI19LevelDeleteDelegate

; typeinfo for LevelSettingsObject
nul __ZTI19LevelSettingsObject

; typeinfo for LevelUpdateDelegate
nul __ZTI19LevelUpdateDelegate

; typeinfo for LevelUploadDelegate
nul __ZTI19LevelUploadDelegate

; typeinfo for MessageListDelegate
nul __ZTI19MessageListDelegate

; typeinfo for MessagesProfilePage
nul __ZTI19MessagesProfilePage

; typeinfo for MultilineBitmapFont
nul __ZTI19MultilineBitmapFont

; typeinfo for NumberInputDelegate
nul __ZTI19NumberInputDelegate

; typeinfo for OpacityEffectAction
nul __ZTI19OpacityEffectAction

; typeinfo for SetupAnimationPopup
nul __ZTI19SetupAnimationPopup

; typeinfo for TableViewDataSource
nul __ZTI19TableViewDataSource

; typeinfo for ToggleTriggerAction
nul __ZTI19ToggleTriggerAction

; typeinfo for UploadPopupDelegate
nul __ZTI19UploadPopupDelegate

; typeinfo for AccountRegisterLayer
nul __ZTI20AccountRegisterLayer

; typeinfo for CCCircleWaveDelegate
nul __ZTI20CCCircleWaveDelegate

; typeinfo for CommunityCreditsPage
nul __ZTI20CommunityCreditsPage

; typeinfo for CustomizeObjectLayer
nul __ZTI20CustomizeObjectLayer

; typeinfo for FLAlertLayerProtocol
nul __ZTI20FLAlertLayerProtocol

; typeinfo for GJDailyLevelDelegate
nul __ZTI20GJDailyLevelDelegate

; typeinfo for GJFollowCommandLayer
nul __ZTI20GJFollowCommandLayer

; typeinfo for GJRotateCommandLayer
nul __ZTI20GJRotateCommandLayer

; typeinfo for GJSpecialColorSelect
nul __ZTI20GJSpecialColorSelect

; typeinfo for LevelCommentDelegate
nul __ZTI20LevelCommentDelegate

; typeinfo for LevelManagerDelegate
nul __ZTI20LevelManagerDelegate

; typeinfo for MusicDelegateHandler
nul __ZTI20MusicDelegateHandler

; typeinfo for MusicDownloadManager
nul __ZTI20MusicDownloadManager

; typeinfo for ParentalOptionsLayer
nul __ZTI20ParentalOptionsLayer

; typeinfo for SetTextPopupDelegate
nul __ZTI20SetTextPopupDelegate

; typeinfo for TeleportPortalObject
nul __ZTI20TeleportPortalObject

; typeinfo for UploadActionDelegate
nul __ZTI20UploadActionDelegate

; typeinfo for CCMenuItemSpriteExtra
nul __ZTI21CCMenuItemSpriteExtra

; typeinfo for CommentUploadDelegate
nul __ZTI21CommentUploadDelegate

; typeinfo for CreateGuidelinesLayer
nul __ZTI21CreateGuidelinesLayer

; typeinfo for DynamicScrollDelegate
nul __ZTI21DynamicScrollDelegate

; typeinfo for FriendRequestDelegate
nul __ZTI21FriendRequestDelegate

; typeinfo for GJAccountSyncDelegate
nul __ZTI21GJAccountSyncDelegate

; typeinfo for GJPFollowCommandLayer
nul __ZTI21GJPFollowCommandLayer

; typeinfo for LevelDownloadDelegate
nul __ZTI21LevelDownloadDelegate

; typeinfo for LevelSettingsDelegate
nul __ZTI21LevelSettingsDelegate

; typeinfo for ListButtonBarDelegate
nul __ZTI21ListButtonBarDelegate

; typeinfo for MoreVideoOptionsLayer
nul __ZTI21MoreVideoOptionsLayer

; typeinfo for MusicDownloadDelegate
nul __ZTI21MusicDownloadDelegate

; typeinfo for ObjectDecoderDelegate
nul __ZTI21ObjectDecoderDelegate

; typeinfo for SetupTouchTogglePopup
nul __ZTI21SetupTouchTogglePopup

; typeinfo for TriggerEffectDelegate
nul __ZTI21TriggerEffectDelegate

; typeinfo for UploadMessageDelegate
nul __ZTI21UploadMessageDelegate

; typeinfo for AnimatedSpriteDelegate
nul __ZTI22AnimatedSpriteDelegate

; typeinfo for CollisionTriggerAction
nul __ZTI22CollisionTriggerAction

; typeinfo for ColorSelectLiveOverlay
nul __ZTI22ColorSelectLiveOverlay

; typeinfo for CurrencyRewardDelegate
nul __ZTI22CurrencyRewardDelegate

; typeinfo for DemonFilterSelectLayer
nul __ZTI22DemonFilterSelectLayer

; typeinfo for GJAccountLoginDelegate
nul __ZTI22GJAccountLoginDelegate

; typeinfo for GJAccountSettingsLayer
nul __ZTI22GJAccountSettingsLayer

; typeinfo for GJScaleControlDelegate
nul __ZTI22GJScaleControlDelegate

; typeinfo for HSVWidgetPopupDelegate
nul __ZTI22HSVWidgetPopupDelegate

; typeinfo for SetupAnimSettingsPopup
nul __ZTI22SetupAnimSettingsPopup

; typeinfo for SetupCountTriggerPopup
nul __ZTI22SetupCountTriggerPopup

; typeinfo for SetupInstantCountPopup
nul __ZTI22SetupInstantCountPopup

; typeinfo for SetupObjectTogglePopup
nul __ZTI22SetupObjectTogglePopup

; typeinfo for SpriteAnimationManager
nul __ZTI22SpriteAnimationManager

; typeinfo for BoomScrollLayerDelegate
nul __ZTI23BoomScrollLayerDelegate

; typeinfo for CustomSongLayerDelegate
nul __ZTI23CustomSongLayerDelegate

; typeinfo for DownloadMessageDelegate
nul __ZTI23DownloadMessageDelegate

; typeinfo for GJAccountBackupDelegate
nul __ZTI23GJAccountBackupDelegate

; typeinfo for GJDropDownLayerDelegate
nul __ZTI23GJDropDownLayerDelegate

; typeinfo for SetupPickupTriggerPopup
nul __ZTI23SetupPickupTriggerPopup

; typeinfo for ShareLevelSettingsLayer
nul __ZTI23ShareLevelSettingsLayer

; typeinfo for CCScrollLayerExtDelegate
nul __ZTI24CCScrollLayerExtDelegate

; typeinfo for PlatformDownloadDelegate
nul __ZTI24PlatformDownloadDelegate

; typeinfo for SetupInteractObjectPopup
nul __ZTI24SetupInteractObjectPopup

; typeinfo for GJAccountRegisterDelegate
nul __ZTI25GJAccountRegisterDelegate

; typeinfo for GJAccountSettingsDelegate
nul __ZTI25GJAccountSettingsDelegate

; typeinfo for GJRotationControlDelegate
nul __ZTI25GJRotationControlDelegate

; typeinfo for LeaderboardManagerDelegate
nul __ZTI26LeaderboardManagerDelegate

; typeinfo for SetupCollisionTriggerPopup
nul __ZTI26SetupCollisionTriggerPopup

; typeinfo for UpdateAccountSettingsPopup
nul __ZTI26UpdateAccountSettingsPopup

; typeinfo for ConfigureValuePopupDelegate
nul __ZTI27ConfigureValuePopupDelegate

; typeinfo for GJSpecialColorSelectDelegate
nul __ZTI28GJSpecialColorSelectDelegate

; typeinfo for OBB2D
nul __ZTI5OBB2D

; typeinfo for Slider
nul __ZTI6Slider

; typeinfo for UILayer
nul __ZTI7UILayer

; typeinfo for EditorUI
nul __ZTI8EditorUI

; typeinfo for GManager
nul __ZTI8GManager

; typeinfo for GameCell
nul __ZTI8GameCell

; typeinfo for ListCell
nul __ZTI8ListCell

; typeinfo for SongCell
nul __ZTI8SongCell

; typeinfo for TextArea
nul __ZTI8TextArea

; typeinfo for FMODSound
nul __ZTI9FMODSound

; typeinfo for GJComment
nul __ZTI9GJComment

; typeinfo for GJMapPack
nul __ZTI9GJMapPack

; typeinfo for InfoLayer
nul __ZTI9InfoLayer

; typeinfo for KeysLayer
nul __ZTI9KeysLayer

; typeinfo for LevelCell
nul __ZTI9LevelCell

; typeinfo for LevelPage
nul __ZTI9LevelPage

; typeinfo for MenuLayer
nul __ZTI9MenuLayer

; typeinfo for NodePoint
nul __ZTI9NodePoint

; typeinfo for PlayLayer
nul __ZTI9PlayLayer

; typeinfo for PointNode
nul __ZTI9PointNode

; typeinfo for StatsCell
nul __ZTI9StatsCell

; typeinfo for TableView
nul __ZTI9TableView

; typeinfo for cocos2d::CCBezierBy
nul __ZTIN7cocos2d10CCBezierByE

; typeinfo for cocos2d::CCBezierTo
nul __ZTIN7cocos2d10CCBezierToE

; typeinfo for cocos2d::CCCallFunc
nul __ZTIN7cocos2d10CCCallFuncE

; typeinfo for cocos2d::CCDirector
nul __ZTIN7cocos2d10CCDirectorE

; typeinfo for cocos2d::CCDrawNode
nul __ZTIN7cocos2d10CCDrawNodeE

; typeinfo for cocos2d::CCGridBase
nul __ZTIN7cocos2d10CCGridBaseE

; typeinfo for cocos2d::CCLabelTTF
nul __ZTIN7cocos2d10CCLabelTTFE

; typeinfo for cocos2d::CCMenuItem
nul __ZTIN7cocos2d10CCMenuItemE

; typeinfo for cocos2d::CCNodeRGBA
nul __ZTIN7cocos2d10CCNodeRGBAE

; typeinfo for cocos2d::CCProfiler
nul __ZTIN7cocos2d10CCProfilerE

; typeinfo for cocos2d::CCRipple3D
nul __ZTIN7cocos2d10CCRipple3DE

; typeinfo for cocos2d::CCRotateBy
nul __ZTIN7cocos2d10CCRotateByE

; typeinfo for cocos2d::CCRotateTo
nul __ZTIN7cocos2d10CCRotateToE

; typeinfo for cocos2d::CCSequence
nul __ZTIN7cocos2d10CCSequenceE

; typeinfo for cocos2d::CCStopGrid
nul __ZTIN7cocos2d10CCStopGridE

; typeinfo for cocos2d::CCTMXLayer
nul __ZTIN7cocos2d10CCTMXLayerE

; typeinfo for cocos2d::CCAnimation
nul __ZTIN7cocos2d11CCAnimationE

; typeinfo for cocos2d::CCAtlasNode
nul __ZTIN7cocos2d11CCAtlasNodeE

; typeinfo for cocos2d::CCCallFuncN
nul __ZTIN7cocos2d11CCCallFuncNE

; typeinfo for cocos2d::CCCallFuncO
nul __ZTIN7cocos2d11CCCallFuncOE

; typeinfo for cocos2d::CCComponent
nul __ZTIN7cocos2d11CCComponentE

; typeinfo for cocos2d::CCDelayTime
nul __ZTIN7cocos2d11CCDelayTimeE

; typeinfo for cocos2d::CCDictMaker
nul __ZTIN7cocos2d11CCDictMakerE

; typeinfo for cocos2d::CCEaseInOut
nul __ZTIN7cocos2d11CCEaseInOutE

; typeinfo for cocos2d::CCFileUtils
nul __ZTIN7cocos2d11CCFileUtilsE

; typeinfo for cocos2d::CCGLProgram
nul __ZTIN7cocos2d11CCGLProgramE

; typeinfo for cocos2d::CCLayerRGBA
nul __ZTIN7cocos2d11CCLayerRGBAE

; typeinfo for cocos2d::CCLightning
nul __ZTIN7cocos2d11CCLightningE

; typeinfo for cocos2d::CCReuseGrid
nul __ZTIN7cocos2d11CCReuseGridE

; typeinfo for cocos2d::CCScheduler
nul __ZTIN7cocos2d11CCSchedulerE

; typeinfo for cocos2d::CCSplitCols
nul __ZTIN7cocos2d11CCSplitColsE

; typeinfo for cocos2d::CCSplitRows
nul __ZTIN7cocos2d11CCSplitRowsE

; typeinfo for cocos2d::CCTexture2D
nul __ZTIN7cocos2d11CCTexture2DE

; typeinfo for cocos2d::ExtraAction
nul __ZTIN7cocos2d11ExtraActionE

; typeinfo for cocos2d::CCActionEase
nul __ZTIN7cocos2d12CCActionEaseE

; typeinfo for cocos2d::CCCallFuncND
nul __ZTIN7cocos2d12CCCallFuncNDE

; typeinfo for cocos2d::CCDictionary
nul __ZTIN7cocos2d12CCDictionaryE

; typeinfo for cocos2d::CCEaseBackIn
nul __ZTIN7cocos2d12CCEaseBackInE

; typeinfo for cocos2d::CCEaseBounce
nul __ZTIN7cocos2d12CCEaseBounceE

; typeinfo for cocos2d::CCEaseSineIn
nul __ZTIN7cocos2d12CCEaseSineInE

; typeinfo for cocos2d::CCGridAction
nul __ZTIN7cocos2d12CCGridActionE

; typeinfo for cocos2d::CCLabelAtlas
nul __ZTIN7cocos2d12CCLabelAtlasE

; typeinfo for cocos2d::CCLayerColor
nul __ZTIN7cocos2d12CCLayerColorE

; typeinfo for cocos2d::CCPageTurn3D
nul __ZTIN7cocos2d12CCPageTurn3DE

; typeinfo for cocos2d::CCPointArray
nul __ZTIN7cocos2d12CCPointArrayE

; typeinfo for cocos2d::CCProgressTo
nul __ZTIN7cocos2d12CCProgressToE

; typeinfo for cocos2d::CCRemoveSelf
nul __ZTIN7cocos2d12CCRemoveSelfE

; typeinfo for cocos2d::CCTMXMapInfo
nul __ZTIN7cocos2d12CCTMXMapInfoE

; typeinfo for cocos2d::CCTextureETC
nul __ZTIN7cocos2d12CCTextureETCE

; typeinfo for cocos2d::CCTexturePVR
nul __ZTIN7cocos2d12CCTexturePVRE

; typeinfo for cocos2d::XmlSaxHander
nul __ZTIN7cocos2d12XmlSaxHanderE

; typeinfo for cocos2d::CCActionTween
nul __ZTIN7cocos2d13CCActionTweenE

; typeinfo for cocos2d::CCApplication
nul __ZTIN7cocos2d13CCApplicationE

; typeinfo for cocos2d::CCDataVisitor
nul __ZTIN7cocos2d13CCDataVisitorE

; typeinfo for cocos2d::CCEaseBackOut
nul __ZTIN7cocos2d13CCEaseBackOutE

; typeinfo for cocos2d::CCEaseElastic
nul __ZTIN7cocos2d13CCEaseElasticE

; typeinfo for cocos2d::CCEaseSineOut
nul __ZTIN7cocos2d13CCEaseSineOutE

; typeinfo for cocos2d::CCIMEDelegate
nul __ZTIN7cocos2d13CCIMEDelegateE

; typeinfo for cocos2d::CCJumpTiles3D
nul __ZTIN7cocos2d13CCJumpTiles3DE

; typeinfo for cocos2d::CCLabelBMFont
nul __ZTIN7cocos2d13CCLabelBMFontE

; typeinfo for cocos2d::CCOrbitCamera
nul __ZTIN7cocos2d13CCOrbitCameraE

; typeinfo for cocos2d::CCParticleSun
nul __ZTIN7cocos2d13CCParticleSunE

; typeinfo for cocos2d::CCPointObject
nul __ZTIN7cocos2d13CCPointObjectE

; typeinfo for cocos2d::CCReverseTime
nul __ZTIN7cocos2d13CCReverseTimeE

; typeinfo for cocos2d::CCScrollLayer
nul __ZTIN7cocos2d13CCScrollLayerE

; typeinfo for cocos2d::CCShaderCache
nul __ZTIN7cocos2d13CCShaderCacheE

; typeinfo for cocos2d::CCSpriteExtra
nul __ZTIN7cocos2d13CCSpriteExtraE

; typeinfo for cocos2d::CCSpriteFrame
nul __ZTIN7cocos2d13CCSpriteFrameE

; typeinfo for cocos2d::CCTMXTiledMap
nul __ZTIN7cocos2d13CCTMXTiledMapE

; typeinfo for cocos2d::CCTiledGrid3D
nul __ZTIN7cocos2d13CCTiledGrid3DE

; typeinfo for cocos2d::CCActionCamera
nul __ZTIN7cocos2d14CCActionCameraE

; typeinfo for cocos2d::CCCatmullRomBy
nul __ZTIN7cocos2d14CCCatmullRomByE

; typeinfo for cocos2d::CCCatmullRomTo
nul __ZTIN7cocos2d14CCCatmullRomToE

; typeinfo for cocos2d::CCClippingNode
nul __ZTIN7cocos2d14CCClippingNodeE

; typeinfo for cocos2d::CCEaseBounceIn
nul __ZTIN7cocos2d14CCEaseBounceInE

; typeinfo for cocos2d::CCGrid3DAction
nul __ZTIN7cocos2d14CCGrid3DActionE

; typeinfo for cocos2d::CCMenuItemFont
nul __ZTIN7cocos2d14CCMenuItemFontE

; typeinfo for cocos2d::CCMotionStreak
nul __ZTIN7cocos2d14CCMotionStreakE

; typeinfo for cocos2d::CCMouseHandler
nul __ZTIN7cocos2d14CCMouseHandlerE

; typeinfo for cocos2d::CCParallaxNode
nul __ZTIN7cocos2d14CCParallaxNodeE

; typeinfo for cocos2d::CCParticleFire
nul __ZTIN7cocos2d14CCParticleFireE

; typeinfo for cocos2d::CCParticleRain
nul __ZTIN7cocos2d14CCParticleRainE

; typeinfo for cocos2d::CCParticleSnow
nul __ZTIN7cocos2d14CCParticleSnowE

; typeinfo for cocos2d::CCRGBAProtocol
nul __ZTIN7cocos2d14CCRGBAProtocolE

; typeinfo for cocos2d::CCSAXDelegator
nul __ZTIN7cocos2d14CCSAXDelegatorE

; typeinfo for cocos2d::CCShakyTiles3D
nul __ZTIN7cocos2d14CCShakyTiles3DE

; typeinfo for cocos2d::CCShuffleTiles
nul __ZTIN7cocos2d14CCShuffleTilesE

; typeinfo for cocos2d::CCTMXLayerInfo
nul __ZTIN7cocos2d14CCTMXLayerInfoE

; typeinfo for cocos2d::CCTextFieldTTF
nul __ZTIN7cocos2d14CCTextFieldTTFE

; typeinfo for cocos2d::CCTextureAtlas
nul __ZTIN7cocos2d14CCTextureAtlasE

; typeinfo for cocos2d::CCTextureCache
nul __ZTIN7cocos2d14CCTextureCacheE

; typeinfo for cocos2d::CCTileMapAtlas
nul __ZTIN7cocos2d14CCTileMapAtlasE

; typeinfo for cocos2d::CCTouchHandler
nul __ZTIN7cocos2d14CCTouchHandlerE

; typeinfo for cocos2d::CCTurnOffTiles
nul __ZTIN7cocos2d14CCTurnOffTilesE

; typeinfo for cocos2d::CCWavesTiles3D
nul __ZTIN7cocos2d14CCWavesTiles3DE

; typeinfo for cocos2d::CCActionInstant
nul __ZTIN7cocos2d15CCActionInstantE

; typeinfo for cocos2d::CCActionManager
nul __ZTIN7cocos2d15CCActionManagerE

; typeinfo for cocos2d::CCBlendProtocol
nul __ZTIN7cocos2d15CCBlendProtocolE

; typeinfo for cocos2d::CCConfiguration
nul __ZTIN7cocos2d15CCConfigurationE

; typeinfo for cocos2d::CCEaseBackInOut
nul __ZTIN7cocos2d15CCEaseBackInOutE

; typeinfo for cocos2d::CCEaseBounceOut
nul __ZTIN7cocos2d15CCEaseBounceOutE

; typeinfo for cocos2d::CCEaseElasticIn
nul __ZTIN7cocos2d15CCEaseElasticInE

; typeinfo for cocos2d::CCEaseSineInOut
nul __ZTIN7cocos2d15CCEaseSineInOutE

; typeinfo for cocos2d::CCKeypadHandler
nul __ZTIN7cocos2d15CCKeypadHandlerE

; typeinfo for cocos2d::CCLabelProtocol
nul __ZTIN7cocos2d15CCLabelProtocolE

; typeinfo for cocos2d::CCLayerGradient
nul __ZTIN7cocos2d15CCLayerGradientE

; typeinfo for cocos2d::CCMenuItemImage
nul __ZTIN7cocos2d15CCMenuItemImageE

; typeinfo for cocos2d::CCMenuItemLabel
nul __ZTIN7cocos2d15CCMenuItemLabelE

; typeinfo for cocos2d::CCMouseDelegate
nul __ZTIN7cocos2d15CCMouseDelegateE

; typeinfo for cocos2d::CCParticleSmoke
nul __ZTIN7cocos2d15CCParticleSmokeE

; typeinfo for cocos2d::CCPrettyPrinter
nul __ZTIN7cocos2d15CCPrettyPrinterE

; typeinfo for cocos2d::CCProgressTimer
nul __ZTIN7cocos2d15CCProgressTimerE

; typeinfo for cocos2d::CCRenderTexture
nul __ZTIN7cocos2d15CCRenderTextureE

; typeinfo for cocos2d::CCRepeatForever
nul __ZTIN7cocos2d15CCRepeatForeverE

; typeinfo for cocos2d::CCSceneDelegate
nul __ZTIN7cocos2d15CCSceneDelegateE

; typeinfo for cocos2d::CCTouchDelegate
nul __ZTIN7cocos2d15CCTouchDelegateE

; typeinfo for cocos2d::CCAccelAmplitude
nul __ZTIN7cocos2d16CCAccelAmplitudeE

; typeinfo for cocos2d::CCActionInterval
nul __ZTIN7cocos2d16CCActionIntervalE

; typeinfo for cocos2d::CCAnimationCache
nul __ZTIN7cocos2d16CCAnimationCacheE

; typeinfo for cocos2d::CCAnimationFrame
nul __ZTIN7cocos2d16CCAnimationFrameE

; typeinfo for cocos2d::CCEaseElasticOut
nul __ZTIN7cocos2d16CCEaseElasticOutE

; typeinfo for cocos2d::CCEaseRateAction
nul __ZTIN7cocos2d16CCEaseRateActionE

; typeinfo for cocos2d::CCFadeOutBLTiles
nul __ZTIN7cocos2d16CCFadeOutBLTilesE

; typeinfo for cocos2d::CCFadeOutTRTiles
nul __ZTIN7cocos2d16CCFadeOutTRTilesE

; typeinfo for cocos2d::CCFadeOutUpTiles
nul __ZTIN7cocos2d16CCFadeOutUpTilesE

; typeinfo for cocos2d::CCKeypadDelegate
nul __ZTIN7cocos2d16CCKeypadDelegateE

; typeinfo for cocos2d::CCLayerMultiplex
nul __ZTIN7cocos2d16CCLayerMultiplexE

; typeinfo for cocos2d::CCMenuItemSprite
nul __ZTIN7cocos2d16CCMenuItemSpriteE

; typeinfo for cocos2d::CCMenuItemToggle
nul __ZTIN7cocos2d16CCMenuItemToggleE

; typeinfo for cocos2d::CCParticleFlower
nul __ZTIN7cocos2d16CCParticleFlowerE

; typeinfo for cocos2d::CCParticleGalaxy
nul __ZTIN7cocos2d16CCParticleGalaxyE

; typeinfo for cocos2d::CCParticleMeteor
nul __ZTIN7cocos2d16CCParticleMeteorE

; typeinfo for cocos2d::CCParticleSpiral
nul __ZTIN7cocos2d16CCParticleSpiralE

; typeinfo for cocos2d::CCParticleSystem
nul __ZTIN7cocos2d16CCParticleSystemE

; typeinfo for cocos2d::CCProfilingTimer
nul __ZTIN7cocos2d16CCProfilingTimerE

; typeinfo for cocos2d::CCProgressFromTo
nul __ZTIN7cocos2d16CCProgressFromToE

; typeinfo for cocos2d::CCTMXObjectGroup
nul __ZTIN7cocos2d16CCTMXObjectGroupE

; typeinfo for cocos2d::CCTMXTilesetInfo
nul __ZTIN7cocos2d16CCTMXTilesetInfoE

; typeinfo for cocos2d::CCTargetedAction
nul __ZTIN7cocos2d16CCTargetedActionE

; typeinfo for cocos2d::CCTransitionFade
nul __ZTIN7cocos2d16CCTransitionFadeE

; typeinfo for cocos2d::EGLTouchDelegate
nul __ZTIN7cocos2d16EGLTouchDelegateE

; typeinfo for cocos2d::CCAutoreleasePool
nul __ZTIN7cocos2d17CCAutoreleasePoolE

; typeinfo for cocos2d::CCDeccelAmplitude
nul __ZTIN7cocos2d17CCDeccelAmplitudeE

; typeinfo for cocos2d::CCEGLViewProtocol
nul __ZTIN7cocos2d17CCEGLViewProtocolE

; typeinfo for cocos2d::CCEaseBounceInOut
nul __ZTIN7cocos2d17CCEaseBounceInOutE

; typeinfo for cocos2d::CCKeyboardHandler
nul __ZTIN7cocos2d17CCKeyboardHandlerE

; typeinfo for cocos2d::CCMouseDispatcher
nul __ZTIN7cocos2d17CCMouseDispatcherE

; typeinfo for cocos2d::CCSpriteBatchNode
nul __ZTIN7cocos2d17CCSpriteBatchNodeE

; typeinfo for cocos2d::CCTextureProtocol
nul __ZTIN7cocos2d17CCTextureProtocolE

; typeinfo for cocos2d::CCTouchDispatcher
nul __ZTIN7cocos2d17CCTouchDispatcherE

; typeinfo for cocos2d::CCTransitionFlipX
nul __ZTIN7cocos2d17CCTransitionFlipXE

; typeinfo for cocos2d::CCTransitionFlipY
nul __ZTIN7cocos2d17CCTransitionFlipYE

; typeinfo for cocos2d::CCTransitionScene
nul __ZTIN7cocos2d17CCTransitionSceneE

; typeinfo for cocos2d::CCCardinalSplineBy
nul __ZTIN7cocos2d18CCCardinalSplineByE

; typeinfo for cocos2d::CCCardinalSplineTo
nul __ZTIN7cocos2d18CCCardinalSplineToE

; typeinfo for cocos2d::CCEaseElasticInOut
nul __ZTIN7cocos2d18CCEaseElasticInOutE

; typeinfo for cocos2d::CCFadeOutDownTiles
nul __ZTIN7cocos2d18CCFadeOutDownTilesE

; typeinfo for cocos2d::CCFileUtilsAndroid
nul __ZTIN7cocos2d18CCFileUtilsAndroidE

; typeinfo for cocos2d::CCFiniteTimeAction
nul __ZTIN7cocos2d18CCFiniteTimeActionE

; typeinfo for cocos2d::CCKeyboardDelegate
nul __ZTIN7cocos2d18CCKeyboardDelegateE

; typeinfo for cocos2d::CCKeypadDispatcher
nul __ZTIN7cocos2d18CCKeypadDispatcherE

; typeinfo for cocos2d::CCShatteredTiles3D
nul __ZTIN7cocos2d18CCShatteredTiles3DE

; typeinfo for cocos2d::CCSpriteFrameCache
nul __ZTIN7cocos2d18CCSpriteFrameCacheE

; typeinfo for cocos2d::CCToggleVisibility
nul __ZTIN7cocos2d18CCToggleVisibilityE

; typeinfo for cocos2d::CCTransitionFadeBL
nul __ZTIN7cocos2d18CCTransitionFadeBLE

; typeinfo for cocos2d::CCTransitionFadeTR
nul __ZTIN7cocos2d18CCTransitionFadeTRE

; typeinfo for cocos2d::CCTransitionFadeUp
nul __ZTIN7cocos2d18CCTransitionFadeUpE

; typeinfo for cocos2d::CCEaseExponentialIn
nul __ZTIN7cocos2d19CCEaseExponentialInE

; typeinfo for cocos2d::CCMenuItemAtlasFont
nul __ZTIN7cocos2d19CCMenuItemAtlasFontE

; typeinfo for cocos2d::CCParticleBatchNode
nul __ZTIN7cocos2d19CCParticleBatchNodeE

; typeinfo for cocos2d::CCParticleExplosion
nul __ZTIN7cocos2d19CCParticleExplosionE

; typeinfo for cocos2d::CCParticleFireworks
nul __ZTIN7cocos2d19CCParticleFireworksE

; typeinfo for cocos2d::CCTextFieldDelegate
nul __ZTIN7cocos2d19CCTextFieldDelegateE

; typeinfo for cocos2d::CCTiledGrid3DAction
nul __ZTIN7cocos2d19CCTiledGrid3DActionE

; typeinfo for cocos2d::CCTransitionMoveInB
nul __ZTIN7cocos2d19CCTransitionMoveInBE

; typeinfo for cocos2d::CCTransitionMoveInL
nul __ZTIN7cocos2d19CCTransitionMoveInLE

; typeinfo for cocos2d::CCTransitionMoveInR
nul __ZTIN7cocos2d19CCTransitionMoveInRE

; typeinfo for cocos2d::CCTransitionMoveInT
nul __ZTIN7cocos2d19CCTransitionMoveInTE

; typeinfo for cocos2d::CCComponentContainer
nul __ZTIN7cocos2d20CCComponentContainerE

; typeinfo for cocos2d::CCEaseExponentialOut
nul __ZTIN7cocos2d20CCEaseExponentialOutE

; typeinfo for cocos2d::CCKeyboardDispatcher
nul __ZTIN7cocos2d20CCKeyboardDispatcherE

; typeinfo for cocos2d::CCNotificationCenter
nul __ZTIN7cocos2d20CCNotificationCenterE

; typeinfo for cocos2d::CCParticleSystemQuad
nul __ZTIN7cocos2d20CCParticleSystemQuadE

; typeinfo for cocos2d::CCScriptHandlerEntry
nul __ZTIN7cocos2d20CCScriptHandlerEntryE

; typeinfo for cocos2d::CCTransitionFadeDown
nul __ZTIN7cocos2d20CCTransitionFadeDownE

; typeinfo for cocos2d::CCTransitionJumpZoom
nul __ZTIN7cocos2d20CCTransitionJumpZoomE

; typeinfo for cocos2d::CCTransitionPageTurn
nul __ZTIN7cocos2d20CCTransitionPageTurnE

; typeinfo for cocos2d::CCTransitionProgress
nul __ZTIN7cocos2d20CCTransitionProgressE

; typeinfo for cocos2d::CCTransitionRotoZoom
nul __ZTIN7cocos2d20CCTransitionRotoZoomE

; typeinfo for cocos2d::CCTransitionSlideInB
nul __ZTIN7cocos2d20CCTransitionSlideInBE

; typeinfo for cocos2d::CCTransitionSlideInL
nul __ZTIN7cocos2d20CCTransitionSlideInLE

; typeinfo for cocos2d::CCTransitionSlideInR
nul __ZTIN7cocos2d20CCTransitionSlideInRE

; typeinfo for cocos2d::CCTransitionSlideInT
nul __ZTIN7cocos2d20CCTransitionSlideInTE

; typeinfo for cocos2d::CCActionTweenDelegate
nul __ZTIN7cocos2d21CCActionTweenDelegateE

; typeinfo for cocos2d::CCApplicationProtocol
nul __ZTIN7cocos2d21CCApplicationProtocolE

; typeinfo for cocos2d::CCBMFontConfiguration
nul __ZTIN7cocos2d21CCBMFontConfigurationE

; typeinfo for cocos2d::CCDisplayLinkDirector
nul __ZTIN7cocos2d21CCDisplayLinkDirectorE

; typeinfo for cocos2d::CCTransitionCrossFade
nul __ZTIN7cocos2d21CCTransitionCrossFadeE

; typeinfo for cocos2d::CCTransitionEaseScene
nul __ZTIN7cocos2d21CCTransitionEaseSceneE

; typeinfo for cocos2d::CCTransitionSplitCols
nul __ZTIN7cocos2d21CCTransitionSplitColsE

; typeinfo for cocos2d::CCTransitionSplitRows
nul __ZTIN7cocos2d21CCTransitionSplitRowsE

; typeinfo for cocos2d::CCTransitionZoomFlipX
nul __ZTIN7cocos2d21CCTransitionZoomFlipXE

; typeinfo for cocos2d::CCTransitionZoomFlipY
nul __ZTIN7cocos2d21CCTransitionZoomFlipYE

; typeinfo for cocos2d::CCAccelDeccelAmplitude
nul __ZTIN7cocos2d22CCAccelDeccelAmplitudeE

; typeinfo for cocos2d::CCEaseExponentialInOut
nul __ZTIN7cocos2d22CCEaseExponentialInOutE

; typeinfo for cocos2d::CCNotificationObserver
nul __ZTIN7cocos2d22CCNotificationObserverE

; typeinfo for cocos2d::CCStandardTouchHandler
nul __ZTIN7cocos2d22CCStandardTouchHandlerE

; typeinfo for cocos2d::CCTargetedTouchHandler
nul __ZTIN7cocos2d22CCTargetedTouchHandlerE

; typeinfo for cocos2d::CCTransitionShrinkGrow
nul __ZTIN7cocos2d22CCTransitionShrinkGrowE

; typeinfo for cocos2d::CCAccelerometerDelegate
nul __ZTIN7cocos2d23CCAccelerometerDelegateE

; typeinfo for cocos2d::CCTransitionFlipAngular
nul __ZTIN7cocos2d23CCTransitionFlipAngularE

; typeinfo for cocos2d::CCTransitionTurnOffTiles
nul __ZTIN7cocos2d24CCTransitionTurnOffTilesE

; typeinfo for cocos2d::CCSceneTransitionDelegate
nul __ZTIN7cocos2d25CCSceneTransitionDelegateE

; typeinfo for cocos2d::CCTouchScriptHandlerEntry
nul __ZTIN7cocos2d25CCTouchScriptHandlerEntryE

; typeinfo for cocos2d::CCTransitionProgressInOut
nul __ZTIN7cocos2d25CCTransitionProgressInOutE

; typeinfo for cocos2d::CCTransitionProgressOutIn
nul __ZTIN7cocos2d25CCTransitionProgressOutInE

; typeinfo for cocos2d::CCTransitionSceneOriented
nul __ZTIN7cocos2d25CCTransitionSceneOrientedE

; typeinfo for cocos2d::CCTransitionZoomFlipAngular
nul __ZTIN7cocos2d27CCTransitionZoomFlipAngularE

; typeinfo for cocos2d::CCTransitionProgressRadialCW
nul __ZTIN7cocos2d28CCTransitionProgressRadialCWE

; typeinfo for cocos2d::CCTransitionProgressVertical
nul __ZTIN7cocos2d28CCTransitionProgressVerticalE

; typeinfo for cocos2d::CCSchedulerScriptHandlerEntry
nul __ZTIN7cocos2d29CCSchedulerScriptHandlerEntryE

; typeinfo for cocos2d::CCTransitionProgressRadialCCW
nul __ZTIN7cocos2d29CCTransitionProgressRadialCCWE

; typeinfo for cocos2d::CCTransitionProgressHorizontal
nul __ZTIN7cocos2d30CCTransitionProgressHorizontalE

; typeinfo for cocos2d::CCSet
nul __ZTIN7cocos2d5CCSetE

; typeinfo for cocos2d::CCBool
nul __ZTIN7cocos2d6CCBoolE

; typeinfo for cocos2d::CCHide
nul __ZTIN7cocos2d6CCHideE

; typeinfo for cocos2d::CCMenu
nul __ZTIN7cocos2d6CCMenuE

; typeinfo for cocos2d::CCNode
nul __ZTIN7cocos2d6CCNodeE

; typeinfo for cocos2d::CCShow
nul __ZTIN7cocos2d6CCShowE

; typeinfo for cocos2d::CCArray
nul __ZTIN7cocos2d7CCArrayE

; typeinfo for cocos2d::CCBlink
nul __ZTIN7cocos2d7CCBlinkE

; typeinfo for cocos2d::CCFlipX
nul __ZTIN7cocos2d7CCFlipXE

; typeinfo for cocos2d::CCFlipY
nul __ZTIN7cocos2d7CCFlipYE

; typeinfo for cocos2d::CCImage
nul __ZTIN7cocos2d7CCImageE

; typeinfo for cocos2d::CCLayer
nul __ZTIN7cocos2d7CCLayerE

; typeinfo for cocos2d::CCPlace
nul __ZTIN7cocos2d7CCPlaceE

; typeinfo for cocos2d::CCScene
nul __ZTIN7cocos2d7CCSceneE

; typeinfo for cocos2d::CCSpawn
nul __ZTIN7cocos2d7CCSpawnE

; typeinfo for cocos2d::CCSpeed
nul __ZTIN7cocos2d7CCSpeedE

; typeinfo for cocos2d::CCTimer
nul __ZTIN7cocos2d7CCTimerE

; typeinfo for cocos2d::CCTouch
nul __ZTIN7cocos2d7CCTouchE

; typeinfo for cocos2d::CCTwirl
nul __ZTIN7cocos2d7CCTwirlE

; typeinfo for cocos2d::CCWaves
nul __ZTIN7cocos2d7CCWavesE

; typeinfo for cocos2d::ZipFile
nul __ZTIN7cocos2d7ZipFileE

; typeinfo for cocos2d::CCAction
nul __ZTIN7cocos2d8CCActionE

; typeinfo for cocos2d::CCCamera
nul __ZTIN7cocos2d8CCCameraE

; typeinfo for cocos2d::CCDouble
nul __ZTIN7cocos2d8CCDoubleE

; typeinfo for cocos2d::CCEaseIn
nul __ZTIN7cocos2d8CCEaseInE

; typeinfo for cocos2d::CCFadeIn
nul __ZTIN7cocos2d8CCFadeInE

; typeinfo for cocos2d::CCFadeTo
nul __ZTIN7cocos2d8CCFadeToE

; typeinfo for cocos2d::CCFollow
nul __ZTIN7cocos2d8CCFollowE

; typeinfo for cocos2d::CCGrid3D
nul __ZTIN7cocos2d8CCGrid3DE

; typeinfo for cocos2d::CCJumpBy
nul __ZTIN7cocos2d8CCJumpByE

; typeinfo for cocos2d::CCJumpTo
nul __ZTIN7cocos2d8CCJumpToE

; typeinfo for cocos2d::CCLens3D
nul __ZTIN7cocos2d8CCLens3DE

; typeinfo for cocos2d::CCLiquid
nul __ZTIN7cocos2d8CCLiquidE

; typeinfo for cocos2d::CCMoveBy
nul __ZTIN7cocos2d8CCMoveByE

; typeinfo for cocos2d::CCMoveTo
nul __ZTIN7cocos2d8CCMoveToE

; typeinfo for cocos2d::CCObject
nul __ZTIN7cocos2d8CCObjectE

; typeinfo for cocos2d::CCRepeat
nul __ZTIN7cocos2d8CCRepeatE

; typeinfo for cocos2d::CCSkewBy
nul __ZTIN7cocos2d8CCSkewByE

; typeinfo for cocos2d::CCSkewTo
nul __ZTIN7cocos2d8CCSkewToE

; typeinfo for cocos2d::CCSprite
nul __ZTIN7cocos2d8CCSpriteE

; typeinfo for cocos2d::CCString
nul __ZTIN7cocos2d8CCStringE

; typeinfo for cocos2d::CCTintBy
nul __ZTIN7cocos2d8CCTintByE

; typeinfo for cocos2d::CCTintTo
nul __ZTIN7cocos2d8CCTintToE

; typeinfo for cocos2d::TypeInfo
nul __ZTIN7cocos2d8TypeInfoE

; typeinfo for cocos2d::CCAnimate
nul __ZTIN7cocos2d9CCAnimateE

; typeinfo for cocos2d::CCCopying
nul __ZTIN7cocos2d9CCCopyingE

; typeinfo for cocos2d::CCEGLView
nul __ZTIN7cocos2d9CCEGLViewE

; typeinfo for cocos2d::CCEaseOut
nul __ZTIN7cocos2d9CCEaseOutE

; typeinfo for cocos2d::CCFadeOut
nul __ZTIN7cocos2d9CCFadeOutE

; typeinfo for cocos2d::CCFlipX3D
nul __ZTIN7cocos2d9CCFlipX3DE

; typeinfo for cocos2d::CCFlipY3D
nul __ZTIN7cocos2d9CCFlipY3DE

; typeinfo for cocos2d::CCGrabber
nul __ZTIN7cocos2d9CCGrabberE

; typeinfo for cocos2d::CCInteger
nul __ZTIN7cocos2d9CCIntegerE

; typeinfo for cocos2d::CCScaleBy
nul __ZTIN7cocos2d9CCScaleByE

; typeinfo for cocos2d::CCScaleTo
nul __ZTIN7cocos2d9CCScaleToE

; typeinfo for cocos2d::CCShaky3D
nul __ZTIN7cocos2d9CCShaky3DE

; typeinfo for cocos2d::CCWaves3D
nul __ZTIN7cocos2d9CCWaves3DE

; typeinfo for cocos2d::extension::CCTableView
nul __ZTIN7cocos2d9extension11CCTableViewE

; typeinfo for cocos2d::extension::CCHttpClient
nul __ZTIN7cocos2d9extension12CCHttpClientE

; typeinfo for cocos2d::extension::CCInvocation
nul __ZTIN7cocos2d9extension12CCInvocationE

; typeinfo for cocos2d::extension::CCScrollView
nul __ZTIN7cocos2d9extension12CCScrollViewE

; typeinfo for cocos2d::extension::AssetsManager::Helper
nul __ZTIN7cocos2d9extension13AssetsManager6HelperE

; typeinfo for cocos2d::extension::AssetsManager
nul __ZTIN7cocos2d9extension13AssetsManagerE

; typeinfo for cocos2d::extension::CCEditBoxImpl
nul __ZTIN7cocos2d9extension13CCEditBoxImplE

; typeinfo for cocos2d::extension::CCHttpRequest
nul __ZTIN7cocos2d9extension13CCHttpRequestE

; typeinfo for cocos2d::extension::CCHttpResponse
nul __ZTIN7cocos2d9extension14CCHttpResponseE

; typeinfo for cocos2d::extension::CCScale9Sprite
nul __ZTIN7cocos2d9extension14CCScale9SpriteE

; typeinfo for cocos2d::extension::CCSortedObject
nul __ZTIN7cocos2d9extension14CCSortedObjectE

; typeinfo for cocos2d::extension::WsThreadHelper
nul __ZTIN7cocos2d9extension14WsThreadHelperE

; typeinfo for cocos2d::extension::CCColor3bObject
nul __ZTIN7cocos2d9extension15CCColor3bObjectE

; typeinfo for cocos2d::extension::CCControlButton
nul __ZTIN7cocos2d9extension15CCControlButtonE

; typeinfo for cocos2d::extension::CCControlSlider
nul __ZTIN7cocos2d9extension15CCControlSliderE

; typeinfo for cocos2d::extension::CCControlSwitch
nul __ZTIN7cocos2d9extension15CCControlSwitchE

; typeinfo for cocos2d::extension::CCTableViewCell
nul __ZTIN7cocos2d9extension15CCTableViewCellE

; typeinfo for cocos2d::extension::CCControlStepper
nul __ZTIN7cocos2d9extension16CCControlStepperE

; typeinfo for cocos2d::extension::CCSortableObject
nul __ZTIN7cocos2d9extension16CCSortableObjectE

; typeinfo for cocos2d::extension::CCControlHuePicker
nul __ZTIN7cocos2d9extension18CCControlHuePickerE

; typeinfo for cocos2d::extension::ColorPickerDelegate
nul __ZTIN7cocos2d9extension19ColorPickerDelegateE

; typeinfo for cocos2d::extension::CCEditBoxImplAndroid
nul __ZTIN7cocos2d9extension20CCEditBoxImplAndroidE

; typeinfo for cocos2d::extension::CCScrollViewDelegate
nul __ZTIN7cocos2d9extension20CCScrollViewDelegateE

; typeinfo for cocos2d::extension::CCControlColourPicker
nul __ZTIN7cocos2d9extension21CCControlColourPickerE

; typeinfo for cocos2d::extension::CCControlSwitchSprite
nul __ZTIN7cocos2d9extension21CCControlSwitchSpriteE

; typeinfo for cocos2d::extension::CCControlPotentiometer
nul __ZTIN7cocos2d9extension22CCControlPotentiometerE

; typeinfo for cocos2d::extension::CCArrayForObjectSorting
nul __ZTIN7cocos2d9extension23CCArrayForObjectSortingE

; typeinfo for cocos2d::extension::CCControlSaturationBrightnessPicker
nul __ZTIN7cocos2d9extension35CCControlSaturationBrightnessPickerE

; typeinfo for cocos2d::extension::CCControl
nul __ZTIN7cocos2d9extension9CCControlE

; typeinfo for cocos2d::extension::CCEditBox
nul __ZTIN7cocos2d9extension9CCEditBoxE

; typeinfo for cocos2d::extension::WebSocket
nul __ZTIN7cocos2d9extension9WebSocketE



; vtable for ArtistCell
nul __ZTV10ArtistCell

; vtable for ButtonPage
nul __ZTV10ButtonPage

; vtable for FontObject
nul __ZTV10FontObject

; vtable for GJItemIcon
nul __ZTV10GJItemIcon

; vtable for GJUserCell
nul __ZTV10GJUserCell

; vtable for GameObject
nul __ZTV10GameObject

; vtable for GaragePage
nul __ZTV10GaragePage

; vtable for HardStreak
nul __ZTV10HardStreak

; vtable for PauseLayer
nul __ZTV10PauseLayer

; vtable for PriceLabel
nul __ZTV10PriceLabel

; vtable for RingObject
nul __ZTV10RingObject

; vtable for SetIDLayer
nul __ZTV10SetIDLayer

; vtable for SetIDPopup
nul __ZTV10SetIDPopup

; vtable for ShardsPage
nul __ZTV10ShardsPage

; vtable for SongObject
nul __ZTV10SongObject

; vtable for SongsLayer
nul __ZTV10SongsLayer

; vtable for StatsLayer
nul __ZTV10StatsLayer

; vtable for UndoObject
nul __ZTV10UndoObject

; vtable for AppDelegate
nul __ZTV11AppDelegate

; vtable for CCCountdown
nul __ZTV11CCCountdown

; vtable for CCIndexPath
nul __ZTV11CCIndexPath

; vtable for CCMoveCNode
nul __ZTV11CCMoveCNode

; vtable for ColorAction
nul __ZTV11ColorAction

; vtable for CommentCell
nul __ZTV11CommentCell

; vtable for DialogLayer
nul __ZTV11DialogLayer

; vtable for GJGameLevel
nul __ZTV11GJGameLevel

; vtable for GJListLayer
nul __ZTV11GJListLayer

; vtable for GJScoreCell
nul __ZTV11GJScoreCell

; vtable for GJShopLayer
nul __ZTV11GJShopLayer

; vtable for GJStoreItem
nul __ZTV11GJStoreItem

; vtable for GJUserScore
nul __ZTV11GJUserScore

; vtable for GJWorldNode
nul __ZTV11GJWorldNode

; vtable for GameManager
nul __ZTV11GameManager

; vtable for MapPackCell
nul __ZTV11MapPackCell

; vtable for ProfilePage
nul __ZTV11ProfilePage

; vtable for RewardsPage
nul __ZTV11RewardsPage

; vtable for SecretLayer
nul __ZTV11SecretLayer

; vtable for SliderThumb
nul __ZTV11SliderThumb

; vtable for SpeedObject
nul __ZTV11SpeedObject

; vtable for StatsObject
nul __ZTV11StatsObject

; vtable for UploadPopup
nul __ZTV11UploadPopup

; vtable for AccountLayer
nul __ZTV12AccountLayer

; vtable for BoomListView
nul __ZTV12BoomListView

; vtable for ButtonSprite
nul __ZTV12ButtonSprite

; vtable for CCBlockLayer
nul __ZTV12CCBlockLayer

; vtable for CCCircleWave
nul __ZTV12CCCircleWave

; vtable for CCLightFlash
nul __ZTV12CCLightFlash

; vtable for CCLightStrip
nul __ZTV12CCLightStrip

; vtable for CCSpritePart
nul __ZTV12CCSpritePart

; vtable for CCSpritePlus
nul __ZTV12CCSpritePlus

; vtable for CreatorLayer
nul __ZTV12CreatorLayer

; vtable for DelaySection
nul __ZTV12DelaySection

; vtable for DialogObject
nul __ZTV12DialogObject

; vtable for FLAlertLayer
nul __ZTV12FLAlertLayer

; vtable for GJHttpResult
nul __ZTV12GJHttpResult

; vtable for GJRewardItem
nul __ZTV12GJRewardItem

; vtable for GauntletNode
nul __ZTV12GauntletNode

; vtable for LoadingLayer
nul __ZTV12LoadingLayer

; vtable for OptionsLayer
nul __ZTV12OptionsLayer

; vtable for PlayerObject
nul __ZTV12PlayerObject

; vtable for SearchButton
nul __ZTV12SearchButton

; vtable for SecretLayer2
nul __ZTV12SecretLayer2

; vtable for SecretLayer3
nul __ZTV12SecretLayer3

; vtable for SecretLayer4
nul __ZTV12SecretLayer4

; vtable for SetTextPopup
nul __ZTV12SetTextPopup

; vtable for SimpleObject
nul __ZTV12SimpleObject

; vtable for SimplePlayer
nul __ZTV12SimplePlayer

; vtable for SlideInLayer
nul __ZTV12SlideInLayer

; vtable for SupportLayer
nul __ZTV12SupportLayer

; vtable for BonusDropdown
nul __ZTV13BonusDropdown

; vtable for BoomListLayer
nul __ZTV13BoomListLayer

; vtable for CCAlertCircle
nul __ZTV13CCAlertCircle

; vtable for CCCircleAlert
nul __ZTV13CCCircleAlert

; vtable for ChallengeNode
nul __ZTV13ChallengeNode

; vtable for DrawGridLayer
nul __ZTV13DrawGridLayer

; vtable for EditButtonBar
nul __ZTV13EditButtonBar

; vtable for EndLevelLayer
nul __ZTV13EndLevelLayer

; vtable for ExtendedLayer
nul __ZTV13ExtendedLayer

; vtable for GJChestSprite
nul __ZTV13GJChestSprite

; vtable for GJGarageLayer
nul __ZTV13GJGarageLayer

; vtable for GJGroundLayer
nul __ZTV13GJGroundLayer

; vtable for GJMessageCell
nul __ZTV13GJMessageCell

; vtable for GJRequestCell
nul __ZTV13GJRequestCell

; vtable for GJRobotSprite
nul __ZTV13GJRobotSprite

; vtable for GJSongBrowser
nul __ZTV13GJSongBrowser

; vtable for GJSpriteColor
nul __ZTV13GJSpriteColor

; vtable for GJUserMessage
nul __ZTV13GJUserMessage

; vtable for GauntletLayer
nul __ZTV13GauntletLayer

; vtable for LikeItemLayer
nul __ZTV13LikeItemLayer

; vtable for ListButtonBar
nul __ZTV13ListButtonBar

; vtable for LoadingCircle
nul __ZTV13LoadingCircle

; vtable for MenuGameLayer
nul __ZTV13MenuGameLayer

; vtable for MyLevelsLayer
nul __ZTV13MyLevelsLayer

; vtable for ObjectDecoder
nul __ZTV13ObjectDecoder

; vtable for ObjectManager
nul __ZTV13ObjectManager

; vtable for ObjectToolbox
nul __ZTV13ObjectToolbox

; vtable for SongInfoLayer
nul __ZTV13SongInfoLayer

; vtable for TableViewCell
nul __ZTV13TableViewCell

; vtable for TutorialLayer
nul __ZTV13TutorialLayer

; vtable for TutorialPopup
nul __ZTV13TutorialPopup

; vtable for AchievementBar
nul __ZTV14AchievementBar

; vtable for CCContentLayer
nul __ZTV14CCContentLayer

; vtable for CCCounterLabel
nul __ZTV14CCCounterLabel

; vtable for ChallengesPage
nul __ZTV14ChallengesPage

; vtable for ColoredSection
nul __ZTV14ColoredSection

; vtable for CreateMenuItem
nul __ZTV14CreateMenuItem

; vtable for CurrencySprite
nul __ZTV14CurrencySprite

; vtable for CustomListView
nul __ZTV14CustomListView

; vtable for CustomSongCell
nul __ZTV14CustomSongCell

; vtable for DailyLevelNode
nul __ZTV14DailyLevelNode

; vtable for DailyLevelPage
nul __ZTV14DailyLevelPage

; vtable for DialogDelegate
nul __ZTV14DialogDelegate

; vtable for EditLevelLayer
nul __ZTV14EditLevelLayer

; vtable for GJMessagePopup
nul __ZTV14GJMessagePopup

; vtable for GJOptionsLayer
nul __ZTV14GJOptionsLayer

; vtable for GJRewardObject
nul __ZTV14GJRewardObject

; vtable for GJScaleControl
nul __ZTV14GJScaleControl

; vtable for GJSearchObject
nul __ZTV14GJSearchObject

; vtable for GJSpiderSprite
nul __ZTV14GJSpiderSprite

; vtable for GameObjectCopy
nul __ZTV14GameObjectCopy

; vtable for HSVWidgetPopup
nul __ZTV14HSVWidgetPopup

; vtable for InstantSection
nul __ZTV14InstantSection

; vtable for LevelInfoLayer
nul __ZTV14LevelInfoLayer

; vtable for ListButtonPage
nul __ZTV14ListButtonPage

; vtable for RateDemonLayer
nul __ZTV14RateDemonLayer

; vtable for RateLevelLayer
nul __ZTV14RateLevelLayer

; vtable for RateStarsLayer
nul __ZTV14RateStarsLayer

; vtable for ScrollingLayer
nul __ZTV14ScrollingLayer

; vtable for SelectArtLayer
nul __ZTV14SelectArtLayer

; vtable for SetFolderPopup
nul __ZTV14SetFolderPopup

; vtable for SetItemIDLayer
nul __ZTV14SetItemIDLayer

; vtable for SongInfoObject
nul __ZTV14SongInfoObject

; vtable for StartPosObject
nul __ZTV14StartPosObject

; vtable for TextAlertPopup
nul __ZTV14TextAlertPopup

; vtable for WorldLevelPage
nul __ZTV14WorldLevelPage

; vtable for AchievementCell
nul __ZTV15AchievementCell

; vtable for BitmapFontCache
nul __ZTV15BitmapFontCache

; vtable for BoomScrollLayer
nul __ZTV15BoomScrollLayer

; vtable for CCNodeContainer
nul __ZTV15CCNodeContainer

; vtable for CCSpriteWithHue
nul __ZTV15CCSpriteWithHue

; vtable for CCTextInputNode
nul __ZTV15CCTextInputNode

; vtable for CustomSongLayer
nul __ZTV15CustomSongLayer

; vtable for EndPortalObject
nul __ZTV15EndPortalObject

; vtable for FMODAudioEngine
nul __ZTV15FMODAudioEngine

; vtable for FileSaveManager
nul __ZTV15FileSaveManager

; vtable for GJBaseGameLayer
nul __ZTV15GJBaseGameLayer

; vtable for GJChallengeItem
nul __ZTV15GJChallengeItem

; vtable for GJDropDownLayer
nul __ZTV15GJDropDownLayer

; vtable for GJEffectManager
nul __ZTV15GJEffectManager

; vtable for GJFriendRequest
nul __ZTV15GJFriendRequest

; vtable for GJObjectDecoder
nul __ZTV15GJObjectDecoder

; vtable for InfoAlertButton
nul __ZTV15InfoAlertButton

; vtable for InheritanceNode
nul __ZTV15InheritanceNode

; vtable for LabelGameObject
nul __ZTV15LabelGameObject

; vtable for MoreSearchLayer
nul __ZTV15MoreSearchLayer

; vtable for RetryLevelLayer
nul __ZTV15RetryLevelLayer

; vtable for SelectFontLayer
nul __ZTV15SelectFontLayer

; vtable for SetGroupIDLayer
nul __ZTV15SetGroupIDLayer

; vtable for SetupPulsePopup
nul __ZTV15SetupPulsePopup

; vtable for SetupShakePopup
nul __ZTV15SetupShakePopup

; vtable for SetupSpawnPopup
nul __ZTV15SetupSpawnPopup

; vtable for ShareLevelLayer
nul __ZTV15ShareLevelLayer

; vtable for TopArtistsLayer
nul __ZTV15TopArtistsLayer

; vtable for AccountHelpLayer
nul __ZTV16AccountHelpLayer

; vtable for CCAnimatedSprite
nul __ZTV16CCAnimatedSprite

; vtable for CCContentManager
nul __ZTV16CCContentManager

; vtable for CCPartAnimSprite
nul __ZTV16CCPartAnimSprite

; vtable for CCScrollLayerExt
nul __ZTV16CCScrollLayerExt

; vtable for CheckpointObject
nul __ZTV16CheckpointObject

; vtable for ColorSelectPopup
nul __ZTV16ColorSelectPopup

; vtable for CustomSongWidget
nul __ZTV16CustomSongWidget

; vtable for DelayedSpawnNode
nul __ZTV16DelayedSpawnNode

; vtable for EditorPauseLayer
nul __ZTV16EditorPauseLayer

; vtable for EffectGameObject
nul __ZTV16EffectGameObject

; vtable for FollowRewardPage
nul __ZTV16FollowRewardPage

; vtable for GJAccountManager
nul __ZTV16GJAccountManager

; vtable for GJFlyGroundLayer
nul __ZTV16GJFlyGroundLayer

; vtable for GJLevelScoreCell
nul __ZTV16GJLevelScoreCell

; vtable for GJMoreGamesLayer
nul __ZTV16GJMoreGamesLayer

; vtable for GJRewardDelegate
nul __ZTV16GJRewardDelegate

; vtable for GJUnlockableItem
nul __ZTV16GJUnlockableItem

; vtable for GameLevelManager
nul __ZTV16GameLevelManager

; vtable for GameRateDelegate
nul __ZTV16GameRateDelegate

; vtable for GameSoundManager
nul __ZTV16GameSoundManager

; vtable for GameStatsManager
nul __ZTV16GameStatsManager

; vtable for GhostTrailEffect
nul __ZTV16GhostTrailEffect

; vtable for KeybindingsLayer
nul __ZTV16KeybindingsLayer

; vtable for LevelEditorLayer
nul __ZTV16LevelEditorLayer

; vtable for LevelLeaderboard
nul __ZTV16LevelLeaderboard

; vtable for LevelSearchLayer
nul __ZTV16LevelSearchLayer

; vtable for LevelSelectLayer
nul __ZTV16LevelSelectLayer

; vtable for LikeItemDelegate
nul __ZTV16LikeItemDelegate

; vtable for MoreOptionsLayer
nul __ZTV16MoreOptionsLayer

; vtable for NumberInputLayer
nul __ZTV16NumberInputLayer

; vtable for PlayerCheckpoint
nul __ZTV16PlayerCheckpoint

; vtable for SetTargetIDLayer
nul __ZTV16SetTargetIDLayer

; vtable for SetupRotatePopup
nul __ZTV16SetupRotatePopup

; vtable for SliderTouchLogic
nul __ZTV16SliderTouchLogic

; vtable for SongOptionsLayer
nul __ZTV16SongOptionsLayer

; vtable for TextAreaDelegate
nul __ZTV16TextAreaDelegate

; vtable for UserInfoDelegate
nul __ZTV16UserInfoDelegate

; vtable for UserListDelegate
nul __ZTV16UserListDelegate

; vtable for WorldSelectLayer
nul __ZTV16WorldSelectLayer

; vtable for AccountLoginLayer
nul __ZTV17AccountLoginLayer

; vtable for AchievementsLayer
nul __ZTV17AchievementsLayer

; vtable for AudioEffectsLayer
nul __ZTV17AudioEffectsLayer

; vtable for CCMenuItemToggler
nul __ZTV17CCMenuItemToggler

; vtable for ColorActionSprite
nul __ZTV17ColorActionSprite

; vtable for DungeonBarsSprite
nul __ZTV17DungeonBarsSprite

; vtable for EditTriggersPopup
nul __ZTV17EditTriggersPopup

; vtable for GJAccountDelegate
nul __ZTV17GJAccountDelegate

; vtable for GJColorSetupLayer
nul __ZTV17GJColorSetupLayer

; vtable for GJRotationControl
nul __ZTV17GJRotationControl

; vtable for GooglePlayManager
nul __ZTV17GooglePlayManager

; vtable for LeaderboardsLayer
nul __ZTV17LeaderboardsLayer

; vtable for LevelBrowserLayer
nul __ZTV17LevelBrowserLayer

; vtable for LevelFeatureLayer
nul __ZTV17LevelFeatureLayer

; vtable for LocalLevelManager
nul __ZTV17LocalLevelManager

; vtable for PromoInterstitial
nul __ZTV17PromoInterstitial

; vtable for PulseEffectAction
nul __ZTV17PulseEffectAction

; vtable for PurchaseItemPopup
nul __ZTV17PurchaseItemPopup

; vtable for RateLevelDelegate
nul __ZTV17RateLevelDelegate

; vtable for RewardUnlockLayer
nul __ZTV17RewardUnlockLayer

; vtable for SecretNumberLayer
nul __ZTV17SecretNumberLayer

; vtable for SelectArtDelegate
nul __ZTV17SelectArtDelegate

; vtable for SetupOpacityPopup
nul __ZTV17SetupOpacityPopup

; vtable for ShareCommentLayer
nul __ZTV17ShareCommentLayer

; vtable for SpriteDescription
nul __ZTV17SpriteDescription

; vtable for TableViewDelegate
nul __ZTV17TableViewDelegate

; vtable for TextInputDelegate
nul __ZTV17TextInputDelegate

; vtable for TouchToggleAction
nul __ZTV17TouchToggleAction

; vtable for UploadActionPopup
nul __ZTV17UploadActionPopup

; vtable for VideoOptionsLayer
nul __ZTV17VideoOptionsLayer

; vtable for xml_string_writer
nul __ZTV17xml_string_writer

; vtable for AchievementManager
nul __ZTV18AchievementManager

; vtable for AnimatedGameObject
nul __ZTV18AnimatedGameObject

; vtable for AnimatedShopKeeper
nul __ZTV18AnimatedShopKeeper

; vtable for ColorChannelSprite
nul __ZTV18ColorChannelSprite

; vtable for ColorSetupDelegate
nul __ZTV18ColorSetupDelegate

; vtable for ConfigureHSVWidget
nul __ZTV18ConfigureHSVWidget

; vtable for CountTriggerAction
nul __ZTV18CountTriggerAction

; vtable for EditorOptionsLayer
nul __ZTV18EditorOptionsLayer

; vtable for FriendRequestPopup
nul __ZTV18FriendRequestPopup

; vtable for FriendsProfilePage
nul __ZTV18FriendsProfilePage

; vtable for GJCommentListLayer
nul __ZTV18GJCommentListLayer

; vtable for GJMoveCommandLayer
nul __ZTV18GJMoveCommandLayer

; vtable for GJPurchaseDelegate
nul __ZTV18GJPurchaseDelegate

; vtable for GameEffectsManager
nul __ZTV18GameEffectsManager

; vtable for GooglePlayDelegate
nul __ZTV18GooglePlayDelegate

; vtable for GroupCommandObject
nul __ZTV18GroupCommandObject

; vtable for KeybindingsManager
nul __ZTV18KeybindingsManager

; vtable for LevelSettingsLayer
nul __ZTV18LevelSettingsLayer

; vtable for OnlineListDelegate
nul __ZTV18OnlineListDelegate

; vtable for SetIDPopupDelegate
nul __ZTV18SetIDPopupDelegate

; vtable for SpawnTriggerAction
nul __ZTV18SpawnTriggerAction

; vtable for SpritePartDelegate
nul __ZTV18SpritePartDelegate

; vtable for AchievementNotifier
nul __ZTV19AchievementNotifier

; vtable for CCAnimateFrameCache
nul __ZTV19CCAnimateFrameCache

; vtable for CollisionBlockPopup
nul __ZTV19CollisionBlockPopup

; vtable for ColorSelectDelegate
nul __ZTV19ColorSelectDelegate

; vtable for CommunityCreditNode
nul __ZTV19CommunityCreditNode

; vtable for ConfigureValuePopup
nul __ZTV19ConfigureValuePopup

; vtable for CurrencyRewardLayer
nul __ZTV19CurrencyRewardLayer

; vtable for DemonFilterDelegate
nul __ZTV19DemonFilterDelegate

; vtable for EditGameObjectPopup
nul __ZTV19EditGameObjectPopup

; vtable for FRequestProfilePage
nul __ZTV19FRequestProfilePage

; vtable for GJChallengeDelegate
nul __ZTV19GJChallengeDelegate

; vtable for GJWriteMessagePopup
nul __ZTV19GJWriteMessagePopup

; vtable for GauntletSelectLayer
nul __ZTV19GauntletSelectLayer

; vtable for GravityEffectSprite
nul __ZTV19GravityEffectSprite

; vtable for LevelDeleteDelegate
nul __ZTV19LevelDeleteDelegate

; vtable for LevelSettingsObject
nul __ZTV19LevelSettingsObject

; vtable for LevelUpdateDelegate
nul __ZTV19LevelUpdateDelegate

; vtable for LevelUploadDelegate
nul __ZTV19LevelUploadDelegate

; vtable for MessageListDelegate
nul __ZTV19MessageListDelegate

; vtable for MessagesProfilePage
nul __ZTV19MessagesProfilePage

; vtable for MultilineBitmapFont
nul __ZTV19MultilineBitmapFont

; vtable for NumberInputDelegate
nul __ZTV19NumberInputDelegate

; vtable for OpacityEffectAction
nul __ZTV19OpacityEffectAction

; vtable for SetupAnimationPopup
nul __ZTV19SetupAnimationPopup

; vtable for TableViewDataSource
nul __ZTV19TableViewDataSource

; vtable for ToggleTriggerAction
nul __ZTV19ToggleTriggerAction

; vtable for UploadPopupDelegate
nul __ZTV19UploadPopupDelegate

; vtable for AccountRegisterLayer
nul __ZTV20AccountRegisterLayer

; vtable for CCCircleWaveDelegate
nul __ZTV20CCCircleWaveDelegate

; vtable for CommunityCreditsPage
nul __ZTV20CommunityCreditsPage

; vtable for CustomizeObjectLayer
nul __ZTV20CustomizeObjectLayer

; vtable for FLAlertLayerProtocol
nul __ZTV20FLAlertLayerProtocol

; vtable for GJDailyLevelDelegate
nul __ZTV20GJDailyLevelDelegate

; vtable for GJFollowCommandLayer
nul __ZTV20GJFollowCommandLayer

; vtable for GJRotateCommandLayer
nul __ZTV20GJRotateCommandLayer

; vtable for GJSpecialColorSelect
nul __ZTV20GJSpecialColorSelect

; vtable for LevelCommentDelegate
nul __ZTV20LevelCommentDelegate

; vtable for LevelManagerDelegate
nul __ZTV20LevelManagerDelegate

; vtable for MusicDelegateHandler
nul __ZTV20MusicDelegateHandler

; vtable for MusicDownloadManager
nul __ZTV20MusicDownloadManager

; vtable for ParentalOptionsLayer
nul __ZTV20ParentalOptionsLayer

; vtable for SetTextPopupDelegate
nul __ZTV20SetTextPopupDelegate

; vtable for TeleportPortalObject
nul __ZTV20TeleportPortalObject

; vtable for UploadActionDelegate
nul __ZTV20UploadActionDelegate

; vtable for CCMenuItemSpriteExtra
nul __ZTV21CCMenuItemSpriteExtra

; vtable for CommentUploadDelegate
nul __ZTV21CommentUploadDelegate

; vtable for CreateGuidelinesLayer
nul __ZTV21CreateGuidelinesLayer

; vtable for DynamicScrollDelegate
nul __ZTV21DynamicScrollDelegate

; vtable for FriendRequestDelegate
nul __ZTV21FriendRequestDelegate

; vtable for GJAccountSyncDelegate
nul __ZTV21GJAccountSyncDelegate

; vtable for GJPFollowCommandLayer
nul __ZTV21GJPFollowCommandLayer

; vtable for LevelDownloadDelegate
nul __ZTV21LevelDownloadDelegate

; vtable for LevelSettingsDelegate
nul __ZTV21LevelSettingsDelegate

; vtable for ListButtonBarDelegate
nul __ZTV21ListButtonBarDelegate

; vtable for MoreVideoOptionsLayer
nul __ZTV21MoreVideoOptionsLayer

; vtable for MusicDownloadDelegate
nul __ZTV21MusicDownloadDelegate

; vtable for ObjectDecoderDelegate
nul __ZTV21ObjectDecoderDelegate

; vtable for SetupTouchTogglePopup
nul __ZTV21SetupTouchTogglePopup

; vtable for TriggerEffectDelegate
nul __ZTV21TriggerEffectDelegate

; vtable for UploadMessageDelegate
nul __ZTV21UploadMessageDelegate

; vtable for AnimatedSpriteDelegate
nul __ZTV22AnimatedSpriteDelegate

; vtable for CollisionTriggerAction
nul __ZTV22CollisionTriggerAction

; vtable for ColorSelectLiveOverlay
nul __ZTV22ColorSelectLiveOverlay

; vtable for CurrencyRewardDelegate
nul __ZTV22CurrencyRewardDelegate

; vtable for DemonFilterSelectLayer
nul __ZTV22DemonFilterSelectLayer

; vtable for GJAccountLoginDelegate
nul __ZTV22GJAccountLoginDelegate

; vtable for GJAccountSettingsLayer
nul __ZTV22GJAccountSettingsLayer

; vtable for GJScaleControlDelegate
nul __ZTV22GJScaleControlDelegate

; vtable for HSVWidgetPopupDelegate
nul __ZTV22HSVWidgetPopupDelegate

; vtable for SetupAnimSettingsPopup
nul __ZTV22SetupAnimSettingsPopup

; vtable for SetupCountTriggerPopup
nul __ZTV22SetupCountTriggerPopup

; vtable for SetupInstantCountPopup
nul __ZTV22SetupInstantCountPopup

; vtable for SetupObjectTogglePopup
nul __ZTV22SetupObjectTogglePopup

; vtable for SpriteAnimationManager
nul __ZTV22SpriteAnimationManager

; vtable for BoomScrollLayerDelegate
nul __ZTV23BoomScrollLayerDelegate

; vtable for CustomSongLayerDelegate
nul __ZTV23CustomSongLayerDelegate

; vtable for DownloadMessageDelegate
nul __ZTV23DownloadMessageDelegate

; vtable for GJAccountBackupDelegate
nul __ZTV23GJAccountBackupDelegate

; vtable for GJDropDownLayerDelegate
nul __ZTV23GJDropDownLayerDelegate

; vtable for SetupPickupTriggerPopup
nul __ZTV23SetupPickupTriggerPopup

; vtable for ShareLevelSettingsLayer
nul __ZTV23ShareLevelSettingsLayer

; vtable for CCScrollLayerExtDelegate
nul __ZTV24CCScrollLayerExtDelegate

; vtable for PlatformDownloadDelegate
nul __ZTV24PlatformDownloadDelegate

; vtable for SetupInteractObjectPopup
nul __ZTV24SetupInteractObjectPopup

; vtable for GJAccountRegisterDelegate
nul __ZTV25GJAccountRegisterDelegate

; vtable for GJAccountSettingsDelegate
nul __ZTV25GJAccountSettingsDelegate

; vtable for GJRotationControlDelegate
nul __ZTV25GJRotationControlDelegate

; vtable for LeaderboardManagerDelegate
nul __ZTV26LeaderboardManagerDelegate

; vtable for SetupCollisionTriggerPopup
nul __ZTV26SetupCollisionTriggerPopup

; vtable for UpdateAccountSettingsPopup
nul __ZTV26UpdateAccountSettingsPopup

; vtable for ConfigureValuePopupDelegate
nul __ZTV27ConfigureValuePopupDelegate

; vtable for GJSpecialColorSelectDelegate
nul __ZTV28GJSpecialColorSelectDelegate

; vtable for OBB2D
nul __ZTV5OBB2D

; vtable for Slider
nul __ZTV6Slider

; vtable for UILayer
nul __ZTV7UILayer

; vtable for EditorUI
nul __ZTV8EditorUI

; vtable for GManager
nul __ZTV8GManager

; vtable for GameCell
nul __ZTV8GameCell

; vtable for ListCell
nul __ZTV8ListCell

; vtable for SongCell
nul __ZTV8SongCell

; vtable for TextArea
nul __ZTV8TextArea

; vtable for FMODSound
nul __ZTV9FMODSound

; vtable for GJComment
nul __ZTV9GJComment

; vtable for GJMapPack
nul __ZTV9GJMapPack

; vtable for InfoLayer
nul __ZTV9InfoLayer

; vtable for KeysLayer
nul __ZTV9KeysLayer

; vtable for LevelCell
nul __ZTV9LevelCell

; vtable for LevelPage
nul __ZTV9LevelPage

; vtable for MenuLayer
nul __ZTV9MenuLayer

; vtable for NodePoint
nul __ZTV9NodePoint

; vtable for PlayLayer
nul __ZTV9PlayLayer

; vtable for PointNode
nul __ZTV9PointNode

; vtable for StatsCell
nul __ZTV9StatsCell

; vtable for TableView
nul __ZTV9TableView

; vtable for cocos2d::CCBezierBy
nul __ZTVN7cocos2d10CCBezierByE

; vtable for cocos2d::CCBezierTo
nul __ZTVN7cocos2d10CCBezierToE

; vtable for cocos2d::CCCallFunc
nul __ZTVN7cocos2d10CCCallFuncE

; vtable for cocos2d::CCDirector
nul __ZTVN7cocos2d10CCDirectorE

; vtable for cocos2d::CCDrawNode
nul __ZTVN7cocos2d10CCDrawNodeE

; vtable for cocos2d::CCGridBase
nul __ZTVN7cocos2d10CCGridBaseE

; vtable for cocos2d::CCLabelTTF
nul __ZTVN7cocos2d10CCLabelTTFE

; vtable for cocos2d::CCMenuItem
nul __ZTVN7cocos2d10CCMenuItemE

; vtable for cocos2d::CCNodeRGBA
nul __ZTVN7cocos2d10CCNodeRGBAE

; vtable for cocos2d::CCProfiler
nul __ZTVN7cocos2d10CCProfilerE

; vtable for cocos2d::CCRipple3D
nul __ZTVN7cocos2d10CCRipple3DE

; vtable for cocos2d::CCRotateBy
nul __ZTVN7cocos2d10CCRotateByE

; vtable for cocos2d::CCRotateTo
nul __ZTVN7cocos2d10CCRotateToE

; vtable for cocos2d::CCSequence
nul __ZTVN7cocos2d10CCSequenceE

; vtable for cocos2d::CCStopGrid
nul __ZTVN7cocos2d10CCStopGridE

; vtable for cocos2d::CCTMXLayer
nul __ZTVN7cocos2d10CCTMXLayerE

; vtable for cocos2d::CCAnimation
nul __ZTVN7cocos2d11CCAnimationE

; vtable for cocos2d::CCAtlasNode
nul __ZTVN7cocos2d11CCAtlasNodeE

; vtable for cocos2d::CCCallFuncN
nul __ZTVN7cocos2d11CCCallFuncNE

; vtable for cocos2d::CCCallFuncO
nul __ZTVN7cocos2d11CCCallFuncOE

; vtable for cocos2d::CCComponent
nul __ZTVN7cocos2d11CCComponentE

; vtable for cocos2d::CCDelayTime
nul __ZTVN7cocos2d11CCDelayTimeE

; vtable for cocos2d::CCDictMaker
nul __ZTVN7cocos2d11CCDictMakerE

; vtable for cocos2d::CCEaseInOut
nul __ZTVN7cocos2d11CCEaseInOutE

; vtable for cocos2d::CCFileUtils
nul __ZTVN7cocos2d11CCFileUtilsE

; vtable for cocos2d::CCGLProgram
nul __ZTVN7cocos2d11CCGLProgramE

; vtable for cocos2d::CCLayerRGBA
nul __ZTVN7cocos2d11CCLayerRGBAE

; vtable for cocos2d::CCLightning
nul __ZTVN7cocos2d11CCLightningE

; vtable for cocos2d::CCReuseGrid
nul __ZTVN7cocos2d11CCReuseGridE

; vtable for cocos2d::CCScheduler
nul __ZTVN7cocos2d11CCSchedulerE

; vtable for cocos2d::CCSplitCols
nul __ZTVN7cocos2d11CCSplitColsE

; vtable for cocos2d::CCSplitRows
nul __ZTVN7cocos2d11CCSplitRowsE

; vtable for cocos2d::CCTexture2D
nul __ZTVN7cocos2d11CCTexture2DE

; vtable for cocos2d::ExtraAction
nul __ZTVN7cocos2d11ExtraActionE

; vtable for cocos2d::CCActionEase
nul __ZTVN7cocos2d12CCActionEaseE

; vtable for cocos2d::CCCallFuncND
nul __ZTVN7cocos2d12CCCallFuncNDE

; vtable for cocos2d::CCDictionary
nul __ZTVN7cocos2d12CCDictionaryE

; vtable for cocos2d::CCEaseBackIn
nul __ZTVN7cocos2d12CCEaseBackInE

; vtable for cocos2d::CCEaseBounce
nul __ZTVN7cocos2d12CCEaseBounceE

; vtable for cocos2d::CCEaseSineIn
nul __ZTVN7cocos2d12CCEaseSineInE

; vtable for cocos2d::CCGridAction
nul __ZTVN7cocos2d12CCGridActionE

; vtable for cocos2d::CCLabelAtlas
nul __ZTVN7cocos2d12CCLabelAtlasE

; vtable for cocos2d::CCLayerColor
nul __ZTVN7cocos2d12CCLayerColorE

; vtable for cocos2d::CCPageTurn3D
nul __ZTVN7cocos2d12CCPageTurn3DE

; vtable for cocos2d::CCPointArray
nul __ZTVN7cocos2d12CCPointArrayE

; vtable for cocos2d::CCProgressTo
nul __ZTVN7cocos2d12CCProgressToE

; vtable for cocos2d::CCRemoveSelf
nul __ZTVN7cocos2d12CCRemoveSelfE

; vtable for cocos2d::CCTMXMapInfo
nul __ZTVN7cocos2d12CCTMXMapInfoE

; vtable for cocos2d::CCTextureETC
nul __ZTVN7cocos2d12CCTextureETCE

; vtable for cocos2d::CCTexturePVR
nul __ZTVN7cocos2d12CCTexturePVRE

; vtable for cocos2d::XmlSaxHander
nul __ZTVN7cocos2d12XmlSaxHanderE

; vtable for cocos2d::CCActionTween
nul __ZTVN7cocos2d13CCActionTweenE

; vtable for cocos2d::CCApplication
nul __ZTVN7cocos2d13CCApplicationE

; vtable for cocos2d::CCDataVisitor
nul __ZTVN7cocos2d13CCDataVisitorE

; vtable for cocos2d::CCEaseBackOut
nul __ZTVN7cocos2d13CCEaseBackOutE

; vtable for cocos2d::CCEaseElastic
nul __ZTVN7cocos2d13CCEaseElasticE

; vtable for cocos2d::CCEaseSineOut
nul __ZTVN7cocos2d13CCEaseSineOutE

; vtable for cocos2d::CCIMEDelegate
nul __ZTVN7cocos2d13CCIMEDelegateE

; vtable for cocos2d::CCJumpTiles3D
nul __ZTVN7cocos2d13CCJumpTiles3DE

; vtable for cocos2d::CCLabelBMFont
nul __ZTVN7cocos2d13CCLabelBMFontE

; vtable for cocos2d::CCOrbitCamera
nul __ZTVN7cocos2d13CCOrbitCameraE

; vtable for cocos2d::CCParticleSun
nul __ZTVN7cocos2d13CCParticleSunE

; vtable for cocos2d::CCPointObject
nul __ZTVN7cocos2d13CCPointObjectE

; vtable for cocos2d::CCReverseTime
nul __ZTVN7cocos2d13CCReverseTimeE

; vtable for cocos2d::CCScrollLayer
nul __ZTVN7cocos2d13CCScrollLayerE

; vtable for cocos2d::CCShaderCache
nul __ZTVN7cocos2d13CCShaderCacheE

; vtable for cocos2d::CCSpriteExtra
nul __ZTVN7cocos2d13CCSpriteExtraE

; vtable for cocos2d::CCSpriteFrame
nul __ZTVN7cocos2d13CCSpriteFrameE

; vtable for cocos2d::CCTMXTiledMap
nul __ZTVN7cocos2d13CCTMXTiledMapE

; vtable for cocos2d::CCTiledGrid3D
nul __ZTVN7cocos2d13CCTiledGrid3DE

; vtable for cocos2d::CCActionCamera
nul __ZTVN7cocos2d14CCActionCameraE

; vtable for cocos2d::CCCatmullRomBy
nul __ZTVN7cocos2d14CCCatmullRomByE

; vtable for cocos2d::CCCatmullRomTo
nul __ZTVN7cocos2d14CCCatmullRomToE

; vtable for cocos2d::CCClippingNode
nul __ZTVN7cocos2d14CCClippingNodeE

; vtable for cocos2d::CCEaseBounceIn
nul __ZTVN7cocos2d14CCEaseBounceInE

; vtable for cocos2d::CCGrid3DAction
nul __ZTVN7cocos2d14CCGrid3DActionE

; vtable for cocos2d::CCMenuItemFont
nul __ZTVN7cocos2d14CCMenuItemFontE

; vtable for cocos2d::CCMotionStreak
nul __ZTVN7cocos2d14CCMotionStreakE

; vtable for cocos2d::CCMouseHandler
nul __ZTVN7cocos2d14CCMouseHandlerE

; vtable for cocos2d::CCParallaxNode
nul __ZTVN7cocos2d14CCParallaxNodeE

; vtable for cocos2d::CCParticleFire
nul __ZTVN7cocos2d14CCParticleFireE

; vtable for cocos2d::CCParticleRain
nul __ZTVN7cocos2d14CCParticleRainE

; vtable for cocos2d::CCParticleSnow
nul __ZTVN7cocos2d14CCParticleSnowE

; vtable for cocos2d::CCRGBAProtocol
nul __ZTVN7cocos2d14CCRGBAProtocolE

; vtable for cocos2d::CCSAXDelegator
nul __ZTVN7cocos2d14CCSAXDelegatorE

; vtable for cocos2d::CCShakyTiles3D
nul __ZTVN7cocos2d14CCShakyTiles3DE

; vtable for cocos2d::CCShuffleTiles
nul __ZTVN7cocos2d14CCShuffleTilesE

; vtable for cocos2d::CCTMXLayerInfo
nul __ZTVN7cocos2d14CCTMXLayerInfoE

; vtable for cocos2d::CCTextFieldTTF
nul __ZTVN7cocos2d14CCTextFieldTTFE

; vtable for cocos2d::CCTextureAtlas
nul __ZTVN7cocos2d14CCTextureAtlasE

; vtable for cocos2d::CCTextureCache
nul __ZTVN7cocos2d14CCTextureCacheE

; vtable for cocos2d::CCTileMapAtlas
nul __ZTVN7cocos2d14CCTileMapAtlasE

; vtable for cocos2d::CCTouchHandler
nul __ZTVN7cocos2d14CCTouchHandlerE

; vtable for cocos2d::CCTurnOffTiles
nul __ZTVN7cocos2d14CCTurnOffTilesE

; vtable for cocos2d::CCWavesTiles3D
nul __ZTVN7cocos2d14CCWavesTiles3DE

; vtable for cocos2d::CCActionInstant
nul __ZTVN7cocos2d15CCActionInstantE

; vtable for cocos2d::CCActionManager
nul __ZTVN7cocos2d15CCActionManagerE

; vtable for cocos2d::CCBlendProtocol
nul __ZTVN7cocos2d15CCBlendProtocolE

; vtable for cocos2d::CCConfiguration
nul __ZTVN7cocos2d15CCConfigurationE

; vtable for cocos2d::CCEaseBackInOut
nul __ZTVN7cocos2d15CCEaseBackInOutE

; vtable for cocos2d::CCEaseBounceOut
nul __ZTVN7cocos2d15CCEaseBounceOutE

; vtable for cocos2d::CCEaseElasticIn
nul __ZTVN7cocos2d15CCEaseElasticInE

; vtable for cocos2d::CCEaseSineInOut
nul __ZTVN7cocos2d15CCEaseSineInOutE

; vtable for cocos2d::CCKeypadHandler
nul __ZTVN7cocos2d15CCKeypadHandlerE

; vtable for cocos2d::CCLabelProtocol
nul __ZTVN7cocos2d15CCLabelProtocolE

; vtable for cocos2d::CCLayerGradient
nul __ZTVN7cocos2d15CCLayerGradientE

; vtable for cocos2d::CCMenuItemImage
nul __ZTVN7cocos2d15CCMenuItemImageE

; vtable for cocos2d::CCMenuItemLabel
nul __ZTVN7cocos2d15CCMenuItemLabelE

; vtable for cocos2d::CCMouseDelegate
nul __ZTVN7cocos2d15CCMouseDelegateE

; vtable for cocos2d::CCParticleSmoke
nul __ZTVN7cocos2d15CCParticleSmokeE

; vtable for cocos2d::CCPrettyPrinter
nul __ZTVN7cocos2d15CCPrettyPrinterE

; vtable for cocos2d::CCProgressTimer
nul __ZTVN7cocos2d15CCProgressTimerE

; vtable for cocos2d::CCRenderTexture
nul __ZTVN7cocos2d15CCRenderTextureE

; vtable for cocos2d::CCRepeatForever
nul __ZTVN7cocos2d15CCRepeatForeverE

; vtable for cocos2d::CCSceneDelegate
nul __ZTVN7cocos2d15CCSceneDelegateE

; vtable for cocos2d::CCTouchDelegate
nul __ZTVN7cocos2d15CCTouchDelegateE

; vtable for cocos2d::CCAccelAmplitude
nul __ZTVN7cocos2d16CCAccelAmplitudeE

; vtable for cocos2d::CCActionInterval
nul __ZTVN7cocos2d16CCActionIntervalE

; vtable for cocos2d::CCAnimationCache
nul __ZTVN7cocos2d16CCAnimationCacheE

; vtable for cocos2d::CCAnimationFrame
nul __ZTVN7cocos2d16CCAnimationFrameE

; vtable for cocos2d::CCEaseElasticOut
nul __ZTVN7cocos2d16CCEaseElasticOutE

; vtable for cocos2d::CCEaseRateAction
nul __ZTVN7cocos2d16CCEaseRateActionE

; vtable for cocos2d::CCFadeOutBLTiles
nul __ZTVN7cocos2d16CCFadeOutBLTilesE

; vtable for cocos2d::CCFadeOutTRTiles
nul __ZTVN7cocos2d16CCFadeOutTRTilesE

; vtable for cocos2d::CCFadeOutUpTiles
nul __ZTVN7cocos2d16CCFadeOutUpTilesE

; vtable for cocos2d::CCKeypadDelegate
nul __ZTVN7cocos2d16CCKeypadDelegateE

; vtable for cocos2d::CCLayerMultiplex
nul __ZTVN7cocos2d16CCLayerMultiplexE

; vtable for cocos2d::CCMenuItemSprite
nul __ZTVN7cocos2d16CCMenuItemSpriteE

; vtable for cocos2d::CCMenuItemToggle
nul __ZTVN7cocos2d16CCMenuItemToggleE

; vtable for cocos2d::CCParticleFlower
nul __ZTVN7cocos2d16CCParticleFlowerE

; vtable for cocos2d::CCParticleGalaxy
nul __ZTVN7cocos2d16CCParticleGalaxyE

; vtable for cocos2d::CCParticleMeteor
nul __ZTVN7cocos2d16CCParticleMeteorE

; vtable for cocos2d::CCParticleSpiral
nul __ZTVN7cocos2d16CCParticleSpiralE

; vtable for cocos2d::CCParticleSystem
nul __ZTVN7cocos2d16CCParticleSystemE

; vtable for cocos2d::CCProfilingTimer
nul __ZTVN7cocos2d16CCProfilingTimerE

; vtable for cocos2d::CCProgressFromTo
nul __ZTVN7cocos2d16CCProgressFromToE

; vtable for cocos2d::CCTMXObjectGroup
nul __ZTVN7cocos2d16CCTMXObjectGroupE

; vtable for cocos2d::CCTMXTilesetInfo
nul __ZTVN7cocos2d16CCTMXTilesetInfoE

; vtable for cocos2d::CCTargetedAction
nul __ZTVN7cocos2d16CCTargetedActionE

; vtable for cocos2d::CCTransitionFade
nul __ZTVN7cocos2d16CCTransitionFadeE

; vtable for cocos2d::EGLTouchDelegate
nul __ZTVN7cocos2d16EGLTouchDelegateE

; vtable for cocos2d::CCAutoreleasePool
nul __ZTVN7cocos2d17CCAutoreleasePoolE

; vtable for cocos2d::CCDeccelAmplitude
nul __ZTVN7cocos2d17CCDeccelAmplitudeE

; vtable for cocos2d::CCEGLViewProtocol
nul __ZTVN7cocos2d17CCEGLViewProtocolE

; vtable for cocos2d::CCEaseBounceInOut
nul __ZTVN7cocos2d17CCEaseBounceInOutE

; vtable for cocos2d::CCKeyboardHandler
nul __ZTVN7cocos2d17CCKeyboardHandlerE

; vtable for cocos2d::CCMouseDispatcher
nul __ZTVN7cocos2d17CCMouseDispatcherE

; vtable for cocos2d::CCSpriteBatchNode
nul __ZTVN7cocos2d17CCSpriteBatchNodeE

; vtable for cocos2d::CCTextureProtocol
nul __ZTVN7cocos2d17CCTextureProtocolE

; vtable for cocos2d::CCTouchDispatcher
nul __ZTVN7cocos2d17CCTouchDispatcherE

; vtable for cocos2d::CCTransitionFlipX
nul __ZTVN7cocos2d17CCTransitionFlipXE

; vtable for cocos2d::CCTransitionFlipY
nul __ZTVN7cocos2d17CCTransitionFlipYE

; vtable for cocos2d::CCTransitionScene
nul __ZTVN7cocos2d17CCTransitionSceneE

; vtable for cocos2d::CCCardinalSplineBy
nul __ZTVN7cocos2d18CCCardinalSplineByE

; vtable for cocos2d::CCCardinalSplineTo
nul __ZTVN7cocos2d18CCCardinalSplineToE

; vtable for cocos2d::CCEaseElasticInOut
nul __ZTVN7cocos2d18CCEaseElasticInOutE

; vtable for cocos2d::CCFadeOutDownTiles
nul __ZTVN7cocos2d18CCFadeOutDownTilesE

; vtable for cocos2d::CCFileUtilsAndroid
nul __ZTVN7cocos2d18CCFileUtilsAndroidE

; vtable for cocos2d::CCFiniteTimeAction
nul __ZTVN7cocos2d18CCFiniteTimeActionE

; vtable for cocos2d::CCKeyboardDelegate
nul __ZTVN7cocos2d18CCKeyboardDelegateE

; vtable for cocos2d::CCKeypadDispatcher
nul __ZTVN7cocos2d18CCKeypadDispatcherE

; vtable for cocos2d::CCShatteredTiles3D
nul __ZTVN7cocos2d18CCShatteredTiles3DE

; vtable for cocos2d::CCSpriteFrameCache
nul __ZTVN7cocos2d18CCSpriteFrameCacheE

; vtable for cocos2d::CCToggleVisibility
nul __ZTVN7cocos2d18CCToggleVisibilityE

; vtable for cocos2d::CCTransitionFadeBL
nul __ZTVN7cocos2d18CCTransitionFadeBLE

; vtable for cocos2d::CCTransitionFadeTR
nul __ZTVN7cocos2d18CCTransitionFadeTRE

; vtable for cocos2d::CCTransitionFadeUp
nul __ZTVN7cocos2d18CCTransitionFadeUpE

; vtable for cocos2d::CCEaseExponentialIn
nul __ZTVN7cocos2d19CCEaseExponentialInE

; vtable for cocos2d::CCMenuItemAtlasFont
nul __ZTVN7cocos2d19CCMenuItemAtlasFontE

; vtable for cocos2d::CCParticleBatchNode
nul __ZTVN7cocos2d19CCParticleBatchNodeE

; vtable for cocos2d::CCParticleExplosion
nul __ZTVN7cocos2d19CCParticleExplosionE

; vtable for cocos2d::CCParticleFireworks
nul __ZTVN7cocos2d19CCParticleFireworksE

; vtable for cocos2d::CCTextFieldDelegate
nul __ZTVN7cocos2d19CCTextFieldDelegateE

; vtable for cocos2d::CCTiledGrid3DAction
nul __ZTVN7cocos2d19CCTiledGrid3DActionE

; vtable for cocos2d::CCTransitionMoveInB
nul __ZTVN7cocos2d19CCTransitionMoveInBE

; vtable for cocos2d::CCTransitionMoveInL
nul __ZTVN7cocos2d19CCTransitionMoveInLE

; vtable for cocos2d::CCTransitionMoveInR
nul __ZTVN7cocos2d19CCTransitionMoveInRE

; vtable for cocos2d::CCTransitionMoveInT
nul __ZTVN7cocos2d19CCTransitionMoveInTE

; vtable for cocos2d::CCComponentContainer
nul __ZTVN7cocos2d20CCComponentContainerE

; vtable for cocos2d::CCEaseExponentialOut
nul __ZTVN7cocos2d20CCEaseExponentialOutE

; vtable for cocos2d::CCKeyboardDispatcher
nul __ZTVN7cocos2d20CCKeyboardDispatcherE

; vtable for cocos2d::CCNotificationCenter
nul __ZTVN7cocos2d20CCNotificationCenterE

; vtable for cocos2d::CCParticleSystemQuad
nul __ZTVN7cocos2d20CCParticleSystemQuadE

; vtable for cocos2d::CCScriptHandlerEntry
nul __ZTVN7cocos2d20CCScriptHandlerEntryE

; vtable for cocos2d::CCTransitionFadeDown
nul __ZTVN7cocos2d20CCTransitionFadeDownE

; vtable for cocos2d::CCTransitionJumpZoom
nul __ZTVN7cocos2d20CCTransitionJumpZoomE

; vtable for cocos2d::CCTransitionPageTurn
nul __ZTVN7cocos2d20CCTransitionPageTurnE

; vtable for cocos2d::CCTransitionProgress
nul __ZTVN7cocos2d20CCTransitionProgressE

; vtable for cocos2d::CCTransitionRotoZoom
nul __ZTVN7cocos2d20CCTransitionRotoZoomE

; vtable for cocos2d::CCTransitionSlideInB
nul __ZTVN7cocos2d20CCTransitionSlideInBE

; vtable for cocos2d::CCTransitionSlideInL
nul __ZTVN7cocos2d20CCTransitionSlideInLE

; vtable for cocos2d::CCTransitionSlideInR
nul __ZTVN7cocos2d20CCTransitionSlideInRE

; vtable for cocos2d::CCTransitionSlideInT
nul __ZTVN7cocos2d20CCTransitionSlideInTE

; vtable for cocos2d::CCActionTweenDelegate
nul __ZTVN7cocos2d21CCActionTweenDelegateE

; vtable for cocos2d::CCApplicationProtocol
nul __ZTVN7cocos2d21CCApplicationProtocolE

; vtable for cocos2d::CCBMFontConfiguration
nul __ZTVN7cocos2d21CCBMFontConfigurationE

; vtable for cocos2d::CCDisplayLinkDirector
nul __ZTVN7cocos2d21CCDisplayLinkDirectorE

; vtable for cocos2d::CCTransitionCrossFade
nul __ZTVN7cocos2d21CCTransitionCrossFadeE

; vtable for cocos2d::CCTransitionEaseScene
nul __ZTVN7cocos2d21CCTransitionEaseSceneE

; vtable for cocos2d::CCTransitionSplitCols
nul __ZTVN7cocos2d21CCTransitionSplitColsE

; vtable for cocos2d::CCTransitionSplitRows
nul __ZTVN7cocos2d21CCTransitionSplitRowsE

; vtable for cocos2d::CCTransitionZoomFlipX
nul __ZTVN7cocos2d21CCTransitionZoomFlipXE

; vtable for cocos2d::CCTransitionZoomFlipY
nul __ZTVN7cocos2d21CCTransitionZoomFlipYE

; vtable for cocos2d::CCAccelDeccelAmplitude
nul __ZTVN7cocos2d22CCAccelDeccelAmplitudeE

; vtable for cocos2d::CCEaseExponentialInOut
nul __ZTVN7cocos2d22CCEaseExponentialInOutE

; vtable for cocos2d::CCNotificationObserver
nul __ZTVN7cocos2d22CCNotificationObserverE

; vtable for cocos2d::CCStandardTouchHandler
nul __ZTVN7cocos2d22CCStandardTouchHandlerE

; vtable for cocos2d::CCTargetedTouchHandler
nul __ZTVN7cocos2d22CCTargetedTouchHandlerE

; vtable for cocos2d::CCTransitionShrinkGrow
nul __ZTVN7cocos2d22CCTransitionShrinkGrowE

; vtable for cocos2d::CCAccelerometerDelegate
nul __ZTVN7cocos2d23CCAccelerometerDelegateE

; vtable for cocos2d::CCTransitionFlipAngular
nul __ZTVN7cocos2d23CCTransitionFlipAngularE

; vtable for cocos2d::CCTransitionTurnOffTiles
nul __ZTVN7cocos2d24CCTransitionTurnOffTilesE

; vtable for cocos2d::CCSceneTransitionDelegate
nul __ZTVN7cocos2d25CCSceneTransitionDelegateE

; vtable for cocos2d::CCTouchScriptHandlerEntry
nul __ZTVN7cocos2d25CCTouchScriptHandlerEntryE

; vtable for cocos2d::CCTransitionProgressInOut
nul __ZTVN7cocos2d25CCTransitionProgressInOutE

; vtable for cocos2d::CCTransitionProgressOutIn
nul __ZTVN7cocos2d25CCTransitionProgressOutInE

; vtable for cocos2d::CCTransitionSceneOriented
nul __ZTVN7cocos2d25CCTransitionSceneOrientedE

; vtable for cocos2d::CCTransitionZoomFlipAngular
nul __ZTVN7cocos2d27CCTransitionZoomFlipAngularE

; vtable for cocos2d::CCTransitionProgressRadialCW
nul __ZTVN7cocos2d28CCTransitionProgressRadialCWE

; vtable for cocos2d::CCTransitionProgressVertical
nul __ZTVN7cocos2d28CCTransitionProgressVerticalE

; vtable for cocos2d::CCSchedulerScriptHandlerEntry
nul __ZTVN7cocos2d29CCSchedulerScriptHandlerEntryE

; vtable for cocos2d::CCTransitionProgressRadialCCW
nul __ZTVN7cocos2d29CCTransitionProgressRadialCCWE

; vtable for cocos2d::CCTransitionProgressHorizontal
nul __ZTVN7cocos2d30CCTransitionProgressHorizontalE

; vtable for cocos2d::CCSet
nul __ZTVN7cocos2d5CCSetE

; vtable for cocos2d::CCBool
nul __ZTVN7cocos2d6CCBoolE

; vtable for cocos2d::CCHide
nul __ZTVN7cocos2d6CCHideE

; vtable for cocos2d::CCMenu
nul __ZTVN7cocos2d6CCMenuE

; vtable for cocos2d::CCNode
nul __ZTVN7cocos2d6CCNodeE

; vtable for cocos2d::CCShow
nul __ZTVN7cocos2d6CCShowE

; vtable for cocos2d::CCArray
nul __ZTVN7cocos2d7CCArrayE

; vtable for cocos2d::CCBlink
nul __ZTVN7cocos2d7CCBlinkE

; vtable for cocos2d::CCFlipX
nul __ZTVN7cocos2d7CCFlipXE

; vtable for cocos2d::CCFlipY
nul __ZTVN7cocos2d7CCFlipYE

; vtable for cocos2d::CCImage
nul __ZTVN7cocos2d7CCImageE

; vtable for cocos2d::CCLayer
nul __ZTVN7cocos2d7CCLayerE

; vtable for cocos2d::CCPlace
nul __ZTVN7cocos2d7CCPlaceE

; vtable for cocos2d::CCScene
nul __ZTVN7cocos2d7CCSceneE

; vtable for cocos2d::CCSpawn
nul __ZTVN7cocos2d7CCSpawnE

; vtable for cocos2d::CCSpeed
nul __ZTVN7cocos2d7CCSpeedE

; vtable for cocos2d::CCTimer
nul __ZTVN7cocos2d7CCTimerE

; vtable for cocos2d::CCTouch
nul __ZTVN7cocos2d7CCTouchE

; vtable for cocos2d::CCTwirl
nul __ZTVN7cocos2d7CCTwirlE

; vtable for cocos2d::CCWaves
nul __ZTVN7cocos2d7CCWavesE

; vtable for cocos2d::ZipFile
nul __ZTVN7cocos2d7ZipFileE

; vtable for cocos2d::CCAction
nul __ZTVN7cocos2d8CCActionE

; vtable for cocos2d::CCCamera
nul __ZTVN7cocos2d8CCCameraE

; vtable for cocos2d::CCEaseIn
nul __ZTVN7cocos2d8CCEaseInE

; vtable for cocos2d::CCFadeIn
nul __ZTVN7cocos2d8CCFadeInE

; vtable for cocos2d::CCFadeTo
nul __ZTVN7cocos2d8CCFadeToE

; vtable for cocos2d::CCFollow
nul __ZTVN7cocos2d8CCFollowE

; vtable for cocos2d::CCGrid3D
nul __ZTVN7cocos2d8CCGrid3DE

; vtable for cocos2d::CCJumpBy
nul __ZTVN7cocos2d8CCJumpByE

; vtable for cocos2d::CCJumpTo
nul __ZTVN7cocos2d8CCJumpToE

; vtable for cocos2d::CCLens3D
nul __ZTVN7cocos2d8CCLens3DE

; vtable for cocos2d::CCLiquid
nul __ZTVN7cocos2d8CCLiquidE

; vtable for cocos2d::CCMoveBy
nul __ZTVN7cocos2d8CCMoveByE

; vtable for cocos2d::CCMoveTo
nul __ZTVN7cocos2d8CCMoveToE

; vtable for cocos2d::CCObject
nul __ZTVN7cocos2d8CCObjectE

; vtable for cocos2d::CCRepeat
nul __ZTVN7cocos2d8CCRepeatE

; vtable for cocos2d::CCSkewBy
nul __ZTVN7cocos2d8CCSkewByE

; vtable for cocos2d::CCSkewTo
nul __ZTVN7cocos2d8CCSkewToE

; vtable for cocos2d::CCSprite
nul __ZTVN7cocos2d8CCSpriteE

; vtable for cocos2d::CCString
nul __ZTVN7cocos2d8CCStringE

; vtable for cocos2d::CCTintBy
nul __ZTVN7cocos2d8CCTintByE

; vtable for cocos2d::CCTintTo
nul __ZTVN7cocos2d8CCTintToE

; vtable for cocos2d::TypeInfo
nul __ZTVN7cocos2d8TypeInfoE

; vtable for cocos2d::CCAnimate
nul __ZTVN7cocos2d9CCAnimateE

; vtable for cocos2d::CCCopying
nul __ZTVN7cocos2d9CCCopyingE

; vtable for cocos2d::CCEGLView
nul __ZTVN7cocos2d9CCEGLViewE

; vtable for cocos2d::CCEaseOut
nul __ZTVN7cocos2d9CCEaseOutE

; vtable for cocos2d::CCFadeOut
nul __ZTVN7cocos2d9CCFadeOutE

; vtable for cocos2d::CCFlipX3D
nul __ZTVN7cocos2d9CCFlipX3DE

; vtable for cocos2d::CCFlipY3D
nul __ZTVN7cocos2d9CCFlipY3DE

; vtable for cocos2d::CCGrabber
nul __ZTVN7cocos2d9CCGrabberE

; vtable for cocos2d::CCInteger
nul __ZTVN7cocos2d9CCIntegerE

; vtable for cocos2d::CCScaleBy
nul __ZTVN7cocos2d9CCScaleByE

; vtable for cocos2d::CCScaleTo
nul __ZTVN7cocos2d9CCScaleToE

; vtable for cocos2d::CCShaky3D
nul __ZTVN7cocos2d9CCShaky3DE

; vtable for cocos2d::CCWaves3D
nul __ZTVN7cocos2d9CCWaves3DE

; vtable for cocos2d::extension::CCTableView
nul __ZTVN7cocos2d9extension11CCTableViewE

; vtable for cocos2d::extension::CCHttpClient
nul __ZTVN7cocos2d9extension12CCHttpClientE

; vtable for cocos2d::extension::CCInvocation
nul __ZTVN7cocos2d9extension12CCInvocationE

; vtable for cocos2d::extension::CCScrollView
nul __ZTVN7cocos2d9extension12CCScrollViewE

; vtable for cocos2d::extension::AssetsManager::Helper
nul __ZTVN7cocos2d9extension13AssetsManager6HelperE

; vtable for cocos2d::extension::AssetsManager
nul __ZTVN7cocos2d9extension13AssetsManagerE

; vtable for cocos2d::extension::CCEditBoxImpl
nul __ZTVN7cocos2d9extension13CCEditBoxImplE

; vtable for cocos2d::extension::CCHttpRequest
nul __ZTVN7cocos2d9extension13CCHttpRequestE

; vtable for cocos2d::extension::CCHttpResponse
nul __ZTVN7cocos2d9extension14CCHttpResponseE

; vtable for cocos2d::extension::CCScale9Sprite
nul __ZTVN7cocos2d9extension14CCScale9SpriteE

; vtable for cocos2d::extension::CCSortedObject
nul __ZTVN7cocos2d9extension14CCSortedObjectE

; vtable for cocos2d::extension::WsThreadHelper
nul __ZTVN7cocos2d9extension14WsThreadHelperE

; vtable for cocos2d::extension::CCColor3bObject
nul __ZTVN7cocos2d9extension15CCColor3bObjectE

; vtable for cocos2d::extension::CCControlButton
nul __ZTVN7cocos2d9extension15CCControlButtonE

; vtable for cocos2d::extension::CCControlSlider
nul __ZTVN7cocos2d9extension15CCControlSliderE

; vtable for cocos2d::extension::CCControlSwitch
nul __ZTVN7cocos2d9extension15CCControlSwitchE

; vtable for cocos2d::extension::CCTableViewCell
nul __ZTVN7cocos2d9extension15CCTableViewCellE

; vtable for cocos2d::extension::CCControlStepper
nul __ZTVN7cocos2d9extension16CCControlStepperE

; vtable for cocos2d::extension::CCSortableObject
nul __ZTVN7cocos2d9extension16CCSortableObjectE

; vtable for cocos2d::extension::CCControlHuePicker
nul __ZTVN7cocos2d9extension18CCControlHuePickerE

; vtable for cocos2d::extension::ColorPickerDelegate
nul __ZTVN7cocos2d9extension19ColorPickerDelegateE

; vtable for cocos2d::extension::CCEditBoxImplAndroid
nul __ZTVN7cocos2d9extension20CCEditBoxImplAndroidE

; vtable for cocos2d::extension::CCScrollViewDelegate
nul __ZTVN7cocos2d9extension20CCScrollViewDelegateE

; vtable for cocos2d::extension::CCControlColourPicker
nul __ZTVN7cocos2d9extension21CCControlColourPickerE

; vtable for cocos2d::extension::CCControlSwitchSprite
nul __ZTVN7cocos2d9extension21CCControlSwitchSpriteE

; vtable for cocos2d::extension::CCControlPotentiometer
nul __ZTVN7cocos2d9extension22CCControlPotentiometerE

; vtable for cocos2d::extension::CCArrayForObjectSorting
nul __ZTVN7cocos2d9extension23CCArrayForObjectSortingE

; vtable for cocos2d::extension::CCControlSaturationBrightnessPicker
nul __ZTVN7cocos2d9extension35CCControlSaturationBrightnessPickerE

; vtable for cocos2d::extension::CCControl
nul __ZTVN7cocos2d9extension9CCControlE

; vtable for cocos2d::extension::CCEditBox
nul __ZTVN7cocos2d9extension9CCEditBoxE

; vtable for cocos2d::extension::WebSocket
nul __ZTVN7cocos2d9extension9WebSocketE

; nul __ZTIN7cocos2d6CCNodeE
; nul __ZTIN7cocos2d7CCLayerE
; nul __ZTI12FLAlertLayer
; nul __ZTIN7cocos2d12CCLayerColorE
; nul __ZTV9MenuLayer
; nul __ZTI9MenuLayer
; nul __ZTI12PlayerObject
; nul __ZTV12PlayerObject
; nul __ZTV12CCSpritePlus
; nul __ZTV10GameObject
; nul __ZTI9PlayLayer
; nul __ZTV15GJBaseGameLayer
; nul __ZTV9PlayLayer


