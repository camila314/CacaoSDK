class GJBaseGameLayer : cocos2d::CCLayer {
    virtual ~GJBaseGameLayer() = 0xafbf0;
    virtual ~GJBaseGameLayer() = 0xafc20;
    virtual bool init() = 0xafc90;
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
    void updateLayerCapacity(std::string) = 0xb1680;
    void updateLegacyLayerCapacity(int, int, int, int) = 0xb1590;
    void updateOBB2(cocos2d::CCRect) = 0xb63f0;
    void updateQueuedLabels() = 0xb9f30;

    GJEffectManager* m_effectManager = 0x180;
    cocos2d::CCLayer* m_objectLayer = 0x188;
    cocos2d::CCArray* m_objects = 0x3a0;
    PlayerObject* m_player1 = 0x380;
    PlayerObject* m_player2 = 0x388;
    LevelSettingsObject* m_levelSettings = 0x390;
    cocos2d::CCDictionary* m_unknownDict = 0x398;
}

class FLAlertLayer : cocos2d::CCLayerColor {
    virtual ~FLAlertLayer() = 0x25db60;
    virtual ~FLAlertLayer() = 0x25dd00;
    virtual void onEnter() = 0x25f350;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25ee40;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25f0a0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25ef60;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25f020;
    virtual void registerWithTouchDispatcher() = 0x25f2e0;
    virtual void keyBackClicked() = 0x25ed90;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x25ece0;
    virtual void show() = 0x25f120;

    bool init(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float) = 0x25e1b0;

    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float) = 0x25e0e0;
    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float) = 0x25dec0;
    
    volatile static FLAlertLayer* create(char const* title, const std::string &desc, char const* btn) {
        return FLAlertLayer::create(nullptr, title, desc, btn, nullptr, 300.0);
    }

    cocos2d::CCMenu* m_buttonMenu; // 0x1f8
    int m_controlConnected; // 0x200
    void* m_alertProtocol; // 0x208
    cocos2d::CCNode* m_scene; // 0x210
    bool m_reverseKeyBack; // 0x211
    cocos2d::ccColor3B m_color; // 0x212
    cocos2d::CCLayer* m_mainLayer; // 0x220
    int m_ZOrder;  //0x228
    bool m_noElasticity; //0x22c
    cocos2d::ccColor3B m_color2; //0x230
    ButtonSprite* m_button1; //0x238
    ButtonSprite* m_button2; //0x240
    CCLayerColor* m_scrollingLayer; //0x248
    int m_joystickConnected; //0x250
    bool m_containsBorder; //0x251
    bool m_noAction; //0x252
}
