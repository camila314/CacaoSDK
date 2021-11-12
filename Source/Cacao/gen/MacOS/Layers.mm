// Layers

class FLAlertLayer : cocos2d::CCLayerColor {
    virtual ~FLAlertLayer() = 0x25db60;
    virtual void onEnter() = 0x25f350;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25ee40;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25f0a0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25ef60;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25f020;
    virtual void registerWithTouchDispatcher() = 0x25f2e0;
    virtual void keyBackClicked() = 0x25ed90;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x25ece0;
    virtual void show() = 0x25f120;

    bool init(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float) = 0x25e1b0;

    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float) = 0x25e0e0;
    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float) = 0x25dec0;
    
    volatile static FLAlertLayer* create(char const* title, const gd::string &desc, char const* btn) {
        return FLAlertLayer::create(nullptr, title, desc, btn, nullptr, 300.0);
    };

    cocos2d::CCMenu* m_buttonMenu;                      // 0x1f8
    int m_controlConnected;                             // 0x200
    FLAlertLayerProtocol* m_alertProtocol;              // 0x208
    cocos2d::CCNode* m_scene;                           // 0x210
    bool m_reverseKeyBack;                              // 0x211
    cocos2d::ccColor3B m_color;                         // 0x212
    cocos2d::CCLayer* m_mainLayer;                      // 0x220
    int m_ZOrder;                                       // 0x228
    bool m_noElasticity;                                // 0x22c
    cocos2d::ccColor3B m_color2;                        // 0x230
    ButtonSprite* m_button1;                            // 0x238
    ButtonSprite* m_button2;                            // 0x240
    cocos2d::CCLayerColor* m_scrollingLayer;            // 0x248
    int m_joystickConnected;                            // 0x250
    bool m_containsBorder;                              // 0x251
    bool m_noAction;                                    // 0x252
}

class GJBaseGameLayer : cocos2d::CCLayer {
    virtual void objectsCollided(int, int) = 0xb6d90;
    virtual void createMoveCommand(cocos2d::CCPoint, int, float, int, float, bool, bool, int) = 0xb73a0;
    virtual void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*) = 0xb7420;
    virtual void flipGravity(PlayerObject*, bool, bool) = 0xba990;
    virtual void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*) = 0xba9a0;
    virtual void toggleGroupTriggered(int, bool) = 0xb75a0;
    virtual void spawnGroup(int) = 0xb7050;
    virtual void addToSection(GameObject*) = 0xb7b70;
    virtual void addToGroup(GameObject*, int, bool) = 0xb77f0;
    virtual void removeFromGroup(GameObject*, int) = 0xb7a60;
    virtual bool init() = 0xafc90;

    void addObjectCounter(LabelGameObject*, int) = 0xb9eb0;
    void addToGroups(GameObject*, bool) = 0xb7780;
    void atlasValue(int) = 0xb21e0;
    void bumpPlayer(PlayerObject*, GameObject*) = 0xb6860;
    void calculateOpacityValues(EffectGameObject*, EffectGameObject*, float, GJEffectManager*) = 0xb5be0;
    void checkSpawnObjects() = 0xb6f90;
    void collectItem(int, int) = 0xb9e20;
    void collectedObject(EffectGameObject*) = 0xb9b60;
    void createTextLayers() = 0xb5260;
    void damagingObjectsInRect(cocos2d::CCRect) = 0xb6140;
    void enableHighCapacityMode() = 0xb11e0;
    void getCapacityString() = 0xb2210;
    void getGroundHeightForMode(int) = 0xb6630;
    void getGroup(int) = 0xb6f20;
    void getMoveDeltaForObjects(int, int) = 0xb6db0;
    void getOptimizedGroup(int) = 0xb7940;
    void getStaticGroup(int) = 0xb79a0;
    void isGroupDisabledForObject(GameObject*) = 0xb5cc0;
    void isGroupDisabledForObjectFull(GameObject*, cocos2d::CCArray*) = 0xb5de0;
    void loadUpToPosition(float) = 0xba680;
    void objectIntersectsCircle(GameObject*, GameObject*) = 0xb66e0;
    void objectTriggered(EffectGameObject*) = 0xb71b0;
    void optimizeMoveGroups() = 0xb96c0;
    void parentForZLayer(int, bool, int) = 0xb55d0;
    void playerTouchedRing(PlayerObject*, GameObject*) = 0xb69e0;
    void processColorObject(EffectGameObject*, int, cocos2d::CCDictionary*, float, GJEffectManager*) = 0xb5a90;
    void processFollowActions() = 0xb8fd0;
    void processMoveActions() = 0xb86c0;
    void processMoveActionsStep(float) = 0xb7ea0;
    void processOpacityObject(EffectGameObject*, cocos2d::CCDictionary*, float, GJEffectManager*) = 0xb5ae0;
    void processPlayerFollowActions(float) = 0xb8b50;
    void processRotationActions() = 0xb7fd0;
    void pushButton(int, bool) = 0xb9920;
    void rectIntersectsCircle(cocos2d::CCRect, cocos2d::CCPoint, float) = 0xb6470;
    void refreshCounterLabels() = 0xb9fc0;
    void releaseButton(int, bool) = 0xb9a00;
    void removeFromGroups(GameObject*) = 0xb7a00;
    void removeObjectFromSection(GameObject*) = 0xb7e00;
    void reorderObjectSection(GameObject*) = 0xb7cb0;
    void resetGroupCounters(bool) = 0xba300;
    void resetMoveOptimizedValue() = 0xb9670;
    void sectionForPos(float) = 0xb6120;
    void setupLayers() = 0xaffe0;
    void shouldExitHackedLevel() = 0xb1100;
    void spawnGroupTriggered(int, float, int) = 0xb7020;
    void staticObjectsInRect(cocos2d::CCRect) = 0xb5f90;
    void testInstantCountTrigger(int, int, int, bool, int) = 0xb9ae0;
    void toggleGroup(int, bool) = 0xb75f0;
    void togglePlayerVisibility(bool) = 0xba910;
    void triggerMoveCommand(EffectGameObject*) = 0xb7290;
    void updateCollisionBlocks() = 0xb6a30;
    void updateCounters(int, int) = 0xb9bc0;
    void updateDisabledObjectsLastPos(cocos2d::CCArray*) = 0xb95b0;
    void updateLayerCapacity(gd::string) = 0xb1680;
    void updateLegacyLayerCapacity(int, int, int, int) = 0xb1590;
    void updateOBB2(cocos2d::CCRect) = 0xb63f0;
    void updateQueuedLabels() = 0xb9f30;
    ~GJBaseGameLayer() = 0xaf990;

    GJEffectManager* m_effectManager = 0x180;
    cocos2d::CCLayer* m_objectLayer = 0x188;
    cocos2d::CCArray* m_objects = 0x3a0;
    PlayerObject* m_player1 = 0x380;
    PlayerObject* m_player2 = 0x388;
    LevelSettingsObject* m_levelSettings = 0x390;
    cocos2d::CCDictionary* m_unknownDict = 0x398;
}

class GJDropDownLayer : cocos2d::CCLayerColor {
    virtual void customSetup() = 0x352570;
    virtual void enterLayer() = 0x3525c0;
    virtual void exitLayer(cocos2d::CCObject*) = 0x352670;
    virtual void showLayer(bool) = 0x3526c0;
    virtual void hideLayer(bool) = 0x3527b0;
    virtual void layerVisible() = 0x3528b0;
    virtual void layerHidden() = 0x3528d0;
    virtual void enterAnimFinished() = 0x3528a0;
    virtual void disableUI() = 0x352580;
    virtual void enableUI() = 0x3525a0;
    virtual void draw() = 0x352910;
    bool init(char const*, float) = 0x352100;
    virtual void registerWithTouchDispatcher() = 0x3525f0;
    virtual void keyBackClicked() = 0x352630;

    static GJDropDownLayer* create(char const*) = 0x352530;

    cocos2d::CCPoint m_endPosition;
    cocos2d::CCPoint m_startPosition;
    cocos2d::CCMenu* m_buttonMenu;
    GJListLayer* m_listLayer;
    bool m_controllerEnabled;
    cocos2d::CCLayer* m_mainLayer;
    bool m_hidden;
    void* m_unknown;
}

class UILayer {
    static UILayer* create() = 0x27fd10;
    void disableMenu() = 0x280960;
    void enableMenu() = 0x280940;
    void pCommand(cocos2d::CCNode*) = 0x280830;
    void toggleCheckpointsMenu(bool) = 0x280430;
}

class RetryLevelLayer {
    static RetryLevelLayer* create() = 0x28dd60;
}

class SetGroupIDLayer {
    void onNextGroupID1(cocos2d::CCObject*) = 0x1967a0;
    void textChanged(CCTextInputNode*) = 0x197af0;
    void updateGroupIDLabel() = 0x197260;
    ~SetGroupIDLayer() = 0x194410;
}

class SetIDLayer {
    static SetIDLayer* create(GameObject*) = 0x168f20;
}

class SetIDPopup {
}

class SetItemIDLayer {
    static SetItemIDLayer* create(EffectGameObject*, cocos2d::CCArray*) = 0x5a830;
}

class SetTargetIDLayer {
    static SetTargetIDLayer* create(EffectGameObject*, cocos2d::CCArray*, gd::string) = 0x159d20;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x15aed0;
    void textChanged(CCTextInputNode*) = 0x15b6c0;
    void updateTargetID() = 0x15b4a0;
}

class SetupAnimationPopup : FLAlertLayer {
    static SetupAnimationPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x208b70;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x209fc0;
    void textChanged(CCTextInputNode*) = 0x20ab30;
    void updateTargetID() = 0x20a910;
}

class SetupCollisionTriggerPopup : FLAlertLayer {
    static SetupCollisionTriggerPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x1d6120;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x1d77b0;
    void textChanged(CCTextInputNode*) = 0x1d84d0;
    void updateTargetID() = 0x1d82b0;
}

class SetupCountTriggerPopup : FLAlertLayer {
    static SetupCountTriggerPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x15c6c0;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x15dd40;
    void textChanged(CCTextInputNode*) = 0x15e9a0;
    void updateTargetID() = 0x15e8a0;
}

class SetupInstantCountPopup : FLAlertLayer {
    static SetupInstantCountPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x352c10;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x354520;
    void textChanged(CCTextInputNode*) = 0x355270;
    void updateTargetID() = 0x355170;
}

class SetupInteractObjectPopup : FLAlertLayer {
    static SetupInteractObjectPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x29a400;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x29bbc0;
    void textChanged(CCTextInputNode*) = 0x29c2b0;
    void updateTargetID() = 0x29c120;
}

class SetupObjectTogglePopup : FLAlertLayer {
    static SetupObjectTogglePopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x1c0860;
    bool init(EffectGameObject*, cocos2d::CCArray*) = 0x1c0a40;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x1c1c40;
    void textChanged(CCTextInputNode*) = 0x1c2660;
    void updateTargetID() = 0x1c2440;
}

class SetupOpacityPopup : FLAlertLayer {
    static SetupOpacityPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x32b70;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x340a0;
    void textChanged(CCTextInputNode*) = 0x34a60;
    void updateTargetID() = 0x34760;
}

class SetupPickupTriggerPopup : FLAlertLayer {
    static SetupPickupTriggerPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x35e70;
    void onItemIDArrow(cocos2d::CCObject*) = 0x37100;
    void onNextItemID(cocos2d::CCObject*) = 0x37260;
    void textChanged(CCTextInputNode*) = 0x37ca0;
    void updateItemID() = 0x37ab0;
}

class SetupShakePopup : FLAlertLayer {
    static SetupShakePopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x3adc00;
}

class SetupSpawnPopup : FLAlertLayer {
    static SetupSpawnPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x139790;
    void createToggleButton(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*) = 0x13b0e0;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x13ad80;
    void textChanged(CCTextInputNode*) = 0x13b990;
    void updateTargetID() = 0x13b770;

    EffectGameObject* object = 0x258;
    CCTextInputNode* numInput = 0x290;
}

class SetupTouchTogglePopup : FLAlertLayer {
    static SetupTouchTogglePopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x1576a0;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x158b60;
    void textChanged(CCTextInputNode*) = 0x1596a0;
    void updateTargetID() = 0x159480;
}

class PauseLayer : FLAlertLayer {
    static PauseLayer* create(bool) = 0x20b1e0;
    void onEdit(cocos2d::CCObject*) = 0x20c630;
}

class TopArtistsLayer : FLAlertLayer {
    static TopArtistsLayer* create() = 0x192a90;
    void setupLeaderboard(cocos2d::CCArray*) = 0x193420;
    virtual bool init() = 0x192c30;
    void loadPage(int) = 0x193b60;
    void setupPageInfo(gd::string, char const*) = 0x193730;

    cocos2d::CCNode* m_unknown = 0x220;
    GJCommentListLayer* m_commentLayer = 0x260;
}

class MenuGameLayer {
    void resetPlayer() = 0x28fdc0;
    void update(float) = 0x28fa70;
}

class MoreVideoOptionsLayer : FLAlertLayer {
    static MoreVideoOptionsLayer* create() = 0x443c10;
    bool init() = 0x444150;
}

class AudioEffectsLayer {
    void audioStep(float) = 0x271f40;
    static AudioEffectsLayer* create(gd::string) = 0x271a00;
    void resetAudioVars() = 0x271ee0;
}

class CollisionBlockPopup {
    static CollisionBlockPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x130010;
    void onNextItemID(cocos2d::CCObject*) = 0x130e60;
}

class CreatorLayer : cocos2d::CCLayer {
    void onMyLevels(cocos2d::CCObject*) = 0x142b70;
    void onSavedLevels(cocos2d::CCObject*) = 0x142860;
}

class CustomSongLayer {
    bool init(LevelSettingsObject*) = 0xf06f0;
    void onArtists(cocos2d::CCObject*) = 0xf1950;
    void onSongBrowser(cocos2d::CCObject*) = 0xf18a0;
}

class EditorOptionsLayer {
    void onButtonsPerRow(cocos2d::CCObject*) = 0x147b30;
}

class EndLevelLayer {
    static EndLevelLayer* create() = 0x2787d0;
}

class EditorPauseLayer : FLAlertLayer {
    virtual ~EditorPauseLayer() = 0x13c3b0;
    virtual void keyBackClicked() = 0x13f320;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x13f3a0;
    virtual void customSetup() = 0x13cc00;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x13f1b0;

    static EditorPauseLayer* create(LevelEditorLayer*) = 0x13c680;
    void saveLevel() = 0x13ebd0;
    bool init(LevelEditorLayer*) = 0x13c7a0;
}

class ScrollingLayer : cocos2d::CCLayerColor {
    static ScrollingLayer* create(cocos2d::CCSize, cocos2d::CCPoint, float) = 0x41a900;
}

class GJListLayer : cocos2d::CCLayerColor {
    virtual ~GJListLayer() = 0x344350;
}

class CurrencyRewardLayer {
    virtual ~CurrencyRewardLayer() = 0x447950;
    virtual void update(float) = 0x44a5c0;
}

class DialogLayer {
    virtual ~DialogLayer() = 0x204720;
    virtual void onEnter() = 0x205900;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x205790;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x205820;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2057e0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x205840;
    virtual void registerWithTouchDispatcher() = 0x205890;
    virtual void keyBackClicked() = 0x2056a0;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x205ce0;
    virtual void fadeInTextFinished(TextArea*) = 0x205930;
}

class GJCommentListLayer : cocos2d::CCLayerColor {
    virtual ~GJCommentListLayer() = 0x1482a0;
    static GJCommentListLayer* create(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool) = 0x147d00;
}
