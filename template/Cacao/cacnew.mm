@interface AnimatedGameObject
    void playAnimation(int) = 0xc93d0, 187;
    void updateChildSpriteColor(cocos2d::_ccColor3B) = 0xc8450, 193;
@end

@interface AppDelegate
    void bgScale() = 0x3aaab0, 210;
    static AppDelegate* get() = 0x3aab10, 212;

    cocos2d::CCScene* m_runningScene = 0x28;
@end

@interface SongInfoObject : cocos2d::CCNode
    int m_unknown0;
    std::string m_unknown1;
    std::string m_artist;
    std::string m_unknown2;
    std::string m_youtube;
    std::string m_unknown3;
    int m_unknown4;
    float m_unknown5;
    unsigned short m_pad;
    unsigned short m_metadata;
    int m_uuid;
@end

@interface ArtistCell
    ArtistCell(char const*, float, float) = 0x11c740, 228;
    void draw() = 0x11c980, 229;
    bool init() = 0x11c7c0, 230;
    void loadFromObject(SongInfoObject*) = 0x1118b0, 231;
    void onNewgrounds(cocos2d::CCObject*) = 0x11c7e0, 232;
    void updateBGColor(int) = 0x110460, 234;

    char pad[0x1e0];
@end

@interface AudioEffectsLayer
    void audioStep(float) = 0x271f40, 238;
    static AudioEffectsLayer* create(std::string) = 0x271a00, 239;
    void resetAudioVars() = 0x271ee0, 244;
@end

@interface CCIndexPath
@end

@interface TableViewCell : cocos2d::CCLayer
    TableViewCell(char const*, float, float) = 0x383de0, 6629;
    volatile char pad[0x1c0-0x170];
    float m_parentHeight;
    float m_height;
    cocos2d::CCLayerColor* m_backgroundLayer;
    cocos2d::CCLayer* m_mainLayer;
@end

@interface TableViewDelegate
    volatile virtual int numberOfRowsInSection(unsigned int, TableView*) {return 0;}
    volatile virtual void numberOfSectionsInTableView(TableView*) {}
    volatile virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView*, TableViewCellEditingStyle, CCIndexPath&) {}
    volatile virtual void cellForRowAtIndexPath(CCIndexPath&, TableView*) {}
@end

@interface TableViewDataSource
    volatile virtual void willTweenToIndexPath(CCIndexPath&, TableViewCell*, TableView*) {}
    volatile virtual void didEndTweenToIndexPath(CCIndexPath&, TableView*) {}
    volatile virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) {}
    volatile virtual void TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) {}
    volatile virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) {}
    volatile virtual void cellHeightForRowAtIndexPath(CCIndexPath&, TableView*) {}
    volatile virtual void didSelectRowAtIndexPath(CCIndexPath&, TableView*) {}
@end

@interface CCScrollLayerExt
    void moveToTop() = 0x235870, 560;
    void moveToTopWithOffset(float) = 0x2357d0, 561;
@end

@interface CCScrollLayerExtDelegate
@end

@interface TableView : CCScrollLayerExt, CCScrollLayerExtDelegate
    static TableView* create(TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect) = 0x37eb30, 6607;
    void reloadData() = 0x37f970, 6616;

    float m_unknown = 0x1c8;
@end

@interface BoomListView : cocos2d::CCLayer, TableViewDataSource, TableViewDelegate
    static BoomListView* create(cocos2d::CCArray*, float, float, int, BoomListType) = 0x18ecb0, 273;
    bool init(cocos2d::CCArray*, float, float, int, BoomListType) = 0x18ee00, 277;
    void draw() = 0x18f790, 275;
    
    virtual void setupList() = 0x18ef90, 281;
    virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) = 0x18f030, 269, 376;
    virtual void cellHeightForRowAtIndexPath(CCIndexPath&, TableView*) = 0x18f070, 272;
    virtual void didSelectRowAtIndexPath(CCIndexPath&, TableView*) = 0x18f090, 274;
    virtual int numberOfRowsInSection(unsigned int, TableView*) = 0x18f0b0, 279;
    virtual void numberOfSectionsInTableView(TableView*) = 0x18f0e0, 280, 368;
    virtual void cellForRowAtIndexPath(CCIndexPath&, TableView*) = 0x18f100, 271;
    virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView*, TableViewCellEditingStyle, CCIndexPath&) = 0x18f770, 268, 368;
    virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) = 0x18f050, 270, 376;
    virtual TableViewCell* getListCell(char const*) = 0x18f200, 276;
    virtual void loadCell(TableViewCell*, int) = 0x18f4a0, 278;

    TableView* m_tableView;
    cocos2d::CCArray* m_content;
    BoomListType m_type; 
    float m_width;
    float m_height;
    float m_cellHeight;
    int m_page;
@end

@interface BoomScrollLayer
    BoomScrollLayer() = 0x1e42f0, 286;
@end

@interface ButtonSprite : cocos2d::CCSprite
    static ButtonSprite* create(char const*) = 0x4fa10, 336;
    static ButtonSprite* create(char const*, int, int, float, bool) = 0x4fa40, 338;
    void updateBGImage(char const*) = 0x502d0, 348;
@end

@interface CCAnimatedSprite : cocos2d::CCSprite
    void runAnimation(std::string) = 0x1a6430, 378;
    void tweenToAnimation(std::string, float) = 0x1a65b0, 384;
@end

@interface CCCircleWave : cocos2d::CCNode
    static CCCircleWave* create(float, float, float, bool) = 0xbd270, 420;
    static CCCircleWave* create(float, float, float, bool, bool) = 0xbd290, 421;
    void followObject(cocos2d::CCNode*, bool) = 0xbd670, 423;
    void updatePosition(float) = 0xbd630, 427;
    cocos2d::_ccColor3B m_color = 0x134;
    CCCircleWaveDelegate* m_delegate = 0x150;
@end

@interface CCCircleWaveDelegate

@end

@interface CCLightFlash
    static CCLightFlash* create() = 0x295870, 475;
    void playEffect(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float) = 0x295900, 478;
@end

@interface CCMenuItemSpriteExtra
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_CallFuncO) = 0x1253c0, 494;
    void setSizeMult(float) = 0x1255e0, 497;
@end

@interface CCMenuItemToggler : cocos2d::CCNodeRGBA
    static CCMenuItemToggler* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_CallFuncO) = 0x38400, 505;
    void setSizeMult(float) = 0x38a40, 511;

    bool m_toggled = 0x168;
@end

@interface CCMoveCNode
    static CCMoveCNode* create() = 0x1842a0, 517;
    bool init() = 0x18b3d0, 518;
    ~CCMoveCNode() = 0x18b2c0, 521;
@end

@interface CCNodeContainer
    static CCNodeContainer* create() = 0xb1090, 522;
    bool init() = 0xba950, 523;
    void visit() = 0xba960, 524;
@end

@interface CCSpritePlus : cocos2d::CCSprite
    bool initWithSpriteFrameName(char const*) = 0x248670, 596;
    volatile inline CCSpritePlus* getFollowingSprite() {return m_followingSprite;}
    volatile inline void setFollowingSprite(CCSpritePlus* setter) {m_followingSprite = setter;}

    cocos2d::CCArray* m_followers;
    CCSpritePlus* m_followingSprite;
    bool m_hasFollower;
    bool m_propagateScaleChanges;
    bool m_propagateFlipChanges;
@end

@interface CCTextInputNode : cocos2d::CCLayer, cocos2d::CCIMEDelegate, cocos2d::CCTextFieldDelegate
    static CCTextInputNode* create(float, float, char const*, char const*, int, char const*) = 0x5cfb0, 641;

    std::string getString() = 0x5d6f0, 643;
    void refreshLabel() = 0x5d730, 651;
    void setAllowedChars(std::string) = 0x5d360, 653;
    void setLabelPlaceholderColor(cocos2d::_ccColor3B) = 0x5da90, 655;
    void setLabelPlaceholderScale(float) = 0x5da70, 656;
    void setMaxLabelScale(float) = 0x5da30, 657;
    void setMaxLabelWidth(float) = 0x5da50, 658;
    void setString(std::string) = 0x5d3e0, 659;
    void updateLabel(std::string) = 0x5d4a0, 662;

    void* m_unknown0;
    std::string m_caption; // 0x188
    int m_unknown1;
    bool m_selected; // 0x194
    std::string m_allowedChars; // 0x198
    float m_maxLabelWidth;
    float m_maxLabelScale;
    float m_placeholderScale;
    cocos2d::ccColor3B m_placeholderColor;
    cocos2d::ccColor3B m_textColor;
    cocos2d::CCLabelBMFont* m_cursor;
    cocos2d::CCTextFieldTTF* m_textField; // 0x1c0
    TextInputDelegate* m_delegate; // TextInputDelegate vtable
    int m_maxLabelLength;
    cocos2d::CCLabelBMFont* m_placeholderLabel;
    bool m_unknown2;
    bool m_unknown3;
    bool m_forceOffset;
@end

@interface CheckpointObject
    static CheckpointObject* create() = 0x7e7d0, 697;
    void getObject() = 0x7ef50, 699;
@end

@interface CollisionBlockPopup
    static CollisionBlockPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x130010, 705;
    void onNextItemID(cocos2d::CCObject*) = 0x130e60, 713;
@end

@interface CollisionTriggerAction
    static CollisionTriggerAction* createFromString(std::string) = 0x176ee0, 726;
@end

@interface ColorAction : cocos2d::CCNode
    void getSaveString() = 0x17d080, 739;
    void setupFromDict(cocos2d::CCDictionary*) = 0x17f310, 742;
    void setupFromString(std::string) = 0x17f270, 743;
    cocos2d::_ccColor3B m_color = 0x12c;
@end

@interface ColorActionSprite : cocos2d::CCNode
    float m_opacity;
    cocos2d::_ccColor3B m_f0124;
    cocos2d::_ccColor3B m_activeColor;
@end

@interface ColorChannelSprite
    void updateBlending(bool) = 0x16e1d0, 756;
    void updateCopyLabel(int, bool) = 0x16ded0, 757;
    void updateOpacity(float) = 0x16e080, 758;
    void updateValues(ColorAction*) = 0x16e2e0, 759;
@end

@interface ColorPickerDelegate
@end

@interface ColorSelectLiveOverlay
@end

@interface ConfigureValuePopup
@end

@interface CountTriggerAction : cocos2d::CCNode
    static CountTriggerAction* createFromString(std::string) = 0x1754f0, 918;

    int m_previousCount;
    int m_targetCount;
    int m_targetID;
    bool m_activateGroup;
    bool m_multiActivate = 0x138;
@end

@interface CreateMenuItem : CCMenuItemSpriteExtra
@end

@interface CreatorLayer : cocos2d::CCLayer
    void onMyLevels(cocos2d::CCObject*) = 0x142b70, 966;
    void onSavedLevels(cocos2d::CCObject*) = 0x142860, 969;
@end

@interface CurrencyRewardLayer
@end

@interface CustomListView : cocos2d::CCLayerColor
    static CustomListView* create(cocos2d::CCArray*, float, float, int, BoomListType) = 0x10d410, 1009;
@end

@interface CustomizeObjectLayer
    void colorSelectClosed(cocos2d::CCNode*) = 0xe1050, 1088;
    static CustomizeObjectLayer* create(GameObject*, cocos2d::CCArray*) = 0xdd340, 1090;
    bool init(GameObject*, cocos2d::CCArray*) = 0xdd560, 1098;
    void textChanged(CCTextInputNode*) = 0xe1470, 1113;
    void textInputClosed(CCTextInputNode*) = 0xe1430, 1114;
@end

@interface DelayedSpawnNode
    static DelayedSpawnNode* create() = 0x9b360, 1235;
@end

@interface DialogLayer
    static DialogLayer* create(DialogObject*, int) = 0x2047c0, 1259;
@end

@interface DialogObject
    static DialogObject* create(std::string, std::string, int, float, bool, cocos2d::_ccColor3B) = 0x204410, 1278;
@end

@interface DrawGridLayer
    void addPlayer2Point(cocos2d::CCPoint, bool) = 0xa25b0, 1287;
    void addPlayerPoint(cocos2d::CCPoint) = 0xa39c0, 1288;
    void addToSpeedObjects(GameObject*) = 0x99900, 1291;
    static DrawGridLayer* create(cocos2d::CCNode*, LevelEditorLayer*) = 0x920c0, 1293;
    bool init(cocos2d::CCNode*, LevelEditorLayer*) = 0xa36e0, 1296;
    void timeForXPos(float) = 0x9b330, 1302;
    void update(float) = 0xa3b30, 1303;
    void updateTimeMarkers() = 0x92950, 1305;
    void xPosForTime(float) = 0x9c830, 1306;
    ~DrawGridLayer() = 0xa3480, 1309;
@end

@interface EditButtonBar : cocos2d::CCNode
    void loadFromItems(cocos2d::CCArray*, int, int, bool) = 0x351010, 1321;

    cocos2d::CCArray* m_objectSlots = 0x130;
@end

@interface EditorOptionsLayer
    void onButtonsPerRow(cocos2d::CCObject*) = 0x147b30, 1399;
@end

@interface EditorUI : cocos2d::CCLayer
    void constrainGameLayerPosition() = 0x1c6d0, 1479;
    void create(LevelEditorLayer*) = 0x8a80, 1481;
    void deselectAll() = 0x1f300, 1493;
    void onDeselectAll(CCObject*) = 0x19cd0, 1555;
    void disableButton(CreateMenuItem*) = 0x1c0f0, 1497;
    void editButtonUsable() = 0x28f30, 1502;
    void editObject(cocos2d::CCObject*) = 0x195a0, 1505;
    void enableButton(CreateMenuItem*) = 0x1bff0, 1508;
    CCMenuItemSpriteExtra* getCreateBtn(int, int) = 0x1f6c0, 1514;
    void getGroupCenter(cocos2d::CCArray*, bool) = 0x23470, 1518;
    cocos2d::CCArray* getSelectedObjects() = 0x23f30, 1522;
    void init(LevelEditorLayer*) = 0x8ae0, 1529;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x30790, 1533;
    void moveObject(GameObject*, cocos2d::CCPoint) = 0x24b10, 1539;
    void onDuplicate(cocos2d::CCObject*) = 0x18ba0, 1556;
    void pasteObjects(std::string) = 0x232d0, 1578;
    void playtestStopped() = 0x24790, 1581;
    void redoLastAction(cocos2d::CCObject*) = 0xb8e0, 1586;
    void replaceGroupID(GameObject*, int, int) = 0x27470, 1590;
    void scaleChanged(float) = 0x25490, 1597;
    void scaleObjects(cocos2d::CCArray*, float, cocos2d::CCPoint) = 0x252e0, 1598;
    void selectObjects(cocos2d::CCArray*, bool) = 0x23940, 1604;
    void setupCreateMenu() = 0xcb50, 1607;
    void undoLastAction(cocos2d::CCObject*) = 0xb830, 1637;
    void updateButtons() = 0x1a300, 1638;
    void updateObjectInfoLabel() = 0x1cb10, 1647;
    void updateSlider() = 0x18a90, 1650;
    void updateZoom(float) = 0x248c0, 1652;

    LevelEditorLayer* m_editorLayer = 0x408;
    cocos2d::CCArray* m_editBars = 0x358;
    cocos2d::CCNode* m_locationSlider = 0x228;
    GameObject* m_lastSelectedObject = 0x440;
    std::string m_clipboard = 0x458;
@end

@interface EndLevelLayer
    static EndLevelLayer* create() = 0x2787d0, 1681;
@end

@interface FLAlertLayer : cocos2d::CCLayerColor

    virtual void onEnter() = 0x25f350, 1750;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25ee40, 1738, 288;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25f0a0, 1741, 288;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25ef60, 1740, 288;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25f020, 1739, 288;
    virtual void registerWithTouchDispatcher() = 0x25f2e0, 1751;
    virtual void keyBackClicked() = 0x25ed90, 1746, 304;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x25ece0, 1747, 312;
    virtual void show() = 0x25f120, 1752;
    virtual bool init(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float) = 0x25e1b0, 1745;
    virtual ~FLAlertLayer() = 0x25da90, 1755;
    
    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float) = 0x25e0e0, 1743;
    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float) = 0x25dec0, 1744;
    
    volatile static FLAlertLayer* create(char const* title, const std::string &desc, char const* btn) {return FLAlertLayer::create(NULL, title, desc, btn, NULL, 300.0);}

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
@end

@interface FLAlertLayerProtocol
@end

@interface FMODAudioEngine : cocos2d::CCNode
    float backgroundVolume = 0x130;
    float sfxVolume = 0x134;
@end

@interface FollowRewardPage
    static FollowRewardPage* create() = 0x22f140, 1870;
@end

@interface GJAccountManager
    static GJAccountManager* sharedState() = 0x85070, 1959;

    char const* m_password = 0x128;
    char const* m_username = 0x130;
@end

@interface GJBaseGameLayer : cocos2d::CCLayer
    virtual void objectsCollided(int, int) = 0xb6d90, 2019;
    virtual void createMoveCommand(cocos2d::CCPoint, int, float, int, float, bool, bool, int) = 0xb73a0, 2002;
    virtual void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*) = 0xb7420, 2053;
    virtual void flipGravity(PlayerObject*, bool, bool) = 0xba990, 2006;
    virtual void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*) = 0xba9a0, 1997;
    virtual void toggleGroupTriggered(int, bool) = 0xb75a0, 2049;
    virtual void spawnGroup(int) = 0xb7050, 2043;
    virtual void addToSection(GameObject*) = 0xb7b70, 1994;
    virtual void addToGroup(GameObject*, int, bool) = 0xb77f0, 1992;
    virtual void removeFromGroup(GameObject*, int) = 0xb7a60, 2034;
    virtual bool init() = 0xafc90, 2013;

    void addObjectCounter(LabelGameObject*, int) = 0xb9eb0, 1991;
    void addToGroups(GameObject*, bool) = 0xb7780, 1993;
    void atlasValue(int) = 0xb21e0, 1995;
    void bumpPlayer(PlayerObject*, GameObject*) = 0xb6860, 1996;
    void calculateOpacityValues(EffectGameObject*, EffectGameObject*, float, GJEffectManager*) = 0xb5be0, 1998;
    void checkSpawnObjects() = 0xb6f90, 1999;
    void collectItem(int, int) = 0xb9e20, 2000;
    void collectedObject(EffectGameObject*) = 0xb9b60, 2001;
    void createTextLayers() = 0xb5260, 2003;
    void damagingObjectsInRect(cocos2d::CCRect) = 0xb6140, 2004;
    void enableHighCapacityMode() = 0xb11e0, 2005;
    void getCapacityString() = 0xb2210, 2007;
    void getGroundHeightForMode(int) = 0xb6630, 2008;
    void getGroup(int) = 0xb6f20, 2009;
    void getMoveDeltaForObjects(int, int) = 0xb6db0, 2010;
    void getOptimizedGroup(int) = 0xb7940, 2011;
    void getStaticGroup(int) = 0xb79a0, 2012;
    void isGroupDisabledForObject(GameObject*) = 0xb5cc0, 2014;
    void isGroupDisabledForObjectFull(GameObject*, cocos2d::CCArray*) = 0xb5de0, 2015;
    void loadUpToPosition(float) = 0xba680, 2016;
    void objectIntersectsCircle(GameObject*, GameObject*) = 0xb66e0, 2017;
    void objectTriggered(EffectGameObject*) = 0xb71b0, 2018;
    void optimizeMoveGroups() = 0xb96c0, 2020;
    void parentForZLayer(int, bool, int) = 0xb55d0, 2021;
    void playerTouchedRing(PlayerObject*, GameObject*) = 0xb69e0, 2022;
    void processColorObject(EffectGameObject*, int, cocos2d::CCDictionary*, float, GJEffectManager*) = 0xb5a90, 2023;
    void processFollowActions() = 0xb8fd0, 2024;
    void processMoveActions() = 0xb86c0, 2025;
    void processMoveActionsStep(float) = 0xb7ea0, 2026;
    void processOpacityObject(EffectGameObject*, cocos2d::CCDictionary*, float, GJEffectManager*) = 0xb5ae0, 2027;
    void processPlayerFollowActions(float) = 0xb8b50, 2028;
    void processRotationActions() = 0xb7fd0, 2029;
    void pushButton(int, bool) = 0xb9920, 2030;
    void rectIntersectsCircle(cocos2d::CCRect, cocos2d::CCPoint, float) = 0xb6470, 2031;
    void refreshCounterLabels() = 0xb9fc0, 2032;
    void releaseButton(int, bool) = 0xb9a00, 2033;
    void removeFromGroups(GameObject*) = 0xb7a00, 2035;
    void removeObjectFromSection(GameObject*) = 0xb7e00, 2036;
    void reorderObjectSection(GameObject*) = 0xb7cb0, 2037;
    void resetGroupCounters(bool) = 0xba300, 2038;
    void resetMoveOptimizedValue() = 0xb9670, 2039;
    void sectionForPos(float) = 0xb6120, 2040;
    void setupLayers() = 0xaffe0, 2041;
    void shouldExitHackedLevel() = 0xb1100, 2042;
    void spawnGroupTriggered(int, float, int) = 0xb7020, 2044;
    void staticObjectsInRect(cocos2d::CCRect) = 0xb5f90, 2045;
    void testInstantCountTrigger(int, int, int, bool, int) = 0xb9ae0, 2047;
    void toggleGroup(int, bool) = 0xb75f0, 2048;
    void togglePlayerVisibility(bool) = 0xba910, 2050;
    void triggerMoveCommand(EffectGameObject*) = 0xb7290, 2051;
    void updateCollisionBlocks() = 0xb6a30, 2052;
    void updateCounters(int, int) = 0xb9bc0, 2054;
    void updateDisabledObjectsLastPos(cocos2d::CCArray*) = 0xb95b0, 2055;
    void updateLayerCapacity(std::string) = 0xb1680, 2056;
    void updateLegacyLayerCapacity(int, int, int, int) = 0xb1590, 2057;
    void updateOBB2(cocos2d::CCRect) = 0xb63f0, 2058;
    void updateQueuedLabels() = 0xb9f30, 2059;
    ~GJBaseGameLayer() = 0xaf990, 2062;

    GJEffectManager* m_effectManager = 0x180;
    cocos2d::CCLayer* m_objectLayer = 0x188;
    cocos2d::CCArray* m_objects = 0x3a0;
    PlayerObject* m_player1 = 0x380;
    PlayerObject* m_player2 = 0x388;
    LevelSettingsObject* m_levelSettings = 0x390;
    cocos2d::CCDictionary* m_unknownDict = 0x398;
@end

@interface GJColorSetupLayer
    void updateSpriteColors() = 0xefe50, 2096;
@end

@interface GJDropDownLayer : cocos2d::CCLayerColor
    virtual void customSetup() = 0x352570, 2121;
    virtual void enterLayer() = 0x3525c0, 2126;
    virtual void exitLayer(cocos2d::CCObject*) = 0x352670, 2127;
    virtual void showLayer(bool) = 0x3526c0, 2135;
    virtual void hideLayer(bool) = 0x3527b0, 2128;
    virtual void layerVisible() = 0x3528b0, 2133;
    virtual void layerHidden() = 0x3528d0, 2132;
    virtual void enterAnimFinished() = 0x3528a0, 2125;
    virtual void disableUI() = 0x352580, 2122;
    virtual void enableUI() = 0x3525a0, 2124;
    virtual void draw() = 0x352910, 2123;
    virtual bool init(char const*, float) = 0x352100, 2130;
    virtual void registerWithTouchDispatcher() = 0x3525f0, 2134;
    virtual void keyBackClicked() = 0x352630, 2131;

    static GJDropDownLayer* create(char const*) = 0x352530, 2119;

    cocos2d::CCPoint m_endPosition;
    cocos2d::CCPoint m_startPosition;
    cocos2d::CCMenu* m_buttonMenu;
    GJListLayer* m_listLayer;
    bool m_controllerEnabled;
    cocos2d::CCLayer* m_mainLayer;
    bool m_hidden;
    void* m_unknown;
@end

@interface GJEffectManager : cocos2d::CCNode
    virtual bool init() = 0x180230, 2177;

    void activeColorForIndex(int) = 0x180cb0, 2142;
    void activeOpacityForIndex(int) = 0x180e10, 2143;
    void addAllInheritedColorActions(cocos2d::CCArray*) = 0x1817a0, 2144;
    void addGroupPulseEffect(PulseEffectAction*) = 0x184c10, 2145;
    void calculateBaseActiveColors() = 0x180f70, 2146;
    void calculateInheritedColor(int, ColorAction*) = 0x1818f0, 2147;
    void calculateLightBGColor(cocos2d::_ccColor3B) = 0x185b90, 2148;
    void colorActionChanged(ColorAction*) = 0x181dc0, 2149;
    void colorExists(int) = 0x181da0, 2150;
    void colorForEffect(cocos2d::_ccColor3B, cocos2d::_ccHSVValue) = 0x182650, 2151;
    cocos2d::_ccColor3B colorForGroupID(int, cocos2d::_ccColor3B const&, bool) = 0x184f90, 2152;
    void colorForIndex(int) = 0x180ad0, 2153;
    void colorForPulseEffect(cocos2d::_ccColor3B const&, PulseEffectAction*) = 0x181bf0, 2154;
    void countChangedForItem(int) = 0x185a40, 2155;
    void countForItem(int) = 0x185a10, 2156;
    static GJEffectManager* create() = 0x1800f0, 2157;
    void createFollowCommand(float, float, float, int, int, bool, int) = 0x182ed0, 2158;
    void createMoveCommand(cocos2d::CCPoint, int, float, int, float, bool, bool, int) = 0x182cc0, 2159;
    void createPlayerFollowCommand(float, float, int, float, float, int, int) = 0x182fe0, 2160;
    void createRotateCommand(int, float, int, int, int, float, bool, int) = 0x182df0, 2161;
    void getAllColorActions() = 0x180980, 2163;
    void getAllColorSprites() = 0x1809e0, 2164;
    const cocos2d::_ccColor3B& getColorAction(int) = 0x180b00, 2165;
    const cocos2d::_ccColor3B& getColorSprite(int) = 0x180d00, 2166;
    void getCurrentStateString() = 0x1867e0, 2167;
    void getLoadedMoveOffset() = 0x184390, 2168;
    void getMixedColor(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float) = 0x185d30, 2169;
    uint8_t getOpacityActionForGroup(int) = 0x1845b0, 2170;
    void getSaveString() = 0x185e90, 2171;
    void handleObjectCollision(bool, int, int) = 0x1828f0, 2172;
    void hasActiveDualTouch() = 0x185540, 2173;
    void hasBeenTriggered(int) = 0x1853b0, 2174;
    void hasPulseEffectForGroupID(int) = 0x184f60, 2175;
    bool isGroupEnabled(int) = 0x1853d0, 2178;
    void keyForGroupIDColor(int, cocos2d::_ccColor3B const&, bool) = 0x184c90, 2179;
    void loadState(std::string) = 0x188db0, 2180;
    void objectsCollided(int, int) = 0x182a00, 2181;
    void opacityForIndex(int) = 0x180c80, 2182;
    float opacityModForGroup(int) = 0x184740, 2183;
    void playerButton(bool, bool) = 0x1855a0, 2184;
    void playerDied() = 0x185860, 2185;
    void postCollisionCheck() = 0x182720, 2186;
    void preCollisionCheck() = 0x182680, 2187;
    void prepareMoveActions(float, bool) = 0x183660, 2188;
    void processColors() = 0x180e70, 2189;
    void processCopyColorPulseActions() = 0x181530, 2190;
    void processInheritedColors() = 0x181190, 2191;
    void processPulseActions() = 0x181040, 2192;
    void registerCollisionTrigger(int, int, int, bool, bool, int) = 0x182b70, 2193;
    void removeAllPulseActions() = 0x1825e0, 2194;
    void removeColorAction(int) = 0x181d60, 2195;
    void reset() = 0x180690, 2196;
    void resetColorCache() = 0x185280, 2197;
    void resetEffects() = 0x1807d0, 2198;
    void resetMoveActions() = 0x180940, 2199;
    void resetToggledGroups() = 0x1853f0, 2200;
    void resetTriggeredIDs() = 0x182630, 2201;
    void runCountTrigger(int, int, bool, int, bool, int) = 0x1858d0, 2202;
    void runDeathTrigger(int, bool, int) = 0x1857a0, 2203;
    OpacityEffectAction* runOpacityActionOnGroup(int, float, float, int) = 0x1845d0, 2204;
    void runPulseEffect(int, bool, float, float, float, PulseEffectType, cocos2d::_ccColor3B, cocos2d::_ccHSVValue, int, bool, bool, bool, int) = 0x184890, 2205;
    void runTouchTriggerCommand(int, bool, TouchTriggerType, bool, int) = 0x185460, 2206;
    void setColorAction(ColorAction*, int) = 0x181d00, 2207;
    void setFollowing(int, int, bool) = 0x185e00, 2208;
    void setupFromString(std::string) = 0x186290, 2209;
    void shouldBlend(int) = 0x180e40, 2210;
    void spawnGroup(int, float, int) = 0x1852a0, 2211;
    void stopActionsForTrigger(EffectGameObject*) = 0x183150, 2212;
    void stopMoveActionsForGroup(int) = 0x1830e0, 2213;
    void storeTriggeredID(int) = 0x185380, 2214;
    void toggleGroup(int, bool) = 0x182c80, 2215;
    void traverseInheritanceChain(InheritanceNode*) = 0x181850, 2216;
    void updateActiveOpacityEffects() = 0x1847e0, 2217;
    void updateColorAction(ColorAction*) = 0x184560, 2218;
    void updateColorEffects(float) = 0x181f40, 2219;
    void updateColors(cocos2d::_ccColor3B, cocos2d::_ccColor3B) = 0x180a40, 2220;
    void updateEffects(float) = 0x181df0, 2221;
    void updateOpacityAction(OpacityEffectAction*) = 0x184780, 2222;
    void updateOpacityEffects(float) = 0x1823e0, 2223;
    void updatePulseEffects(float) = 0x182130, 2224;
    void updateSpawnTriggers(float) = 0x182510, 2225;
    void wasFollowing(int, int) = 0x185e60, 2226;
    void wouldCreateLoop(InheritanceNode*, int) = 0x181820, 2227;
    ~GJEffectManager() = 0x17fe00, 2230;

    GJBaseGameLayer* m_gameLayer;
    cocos2d::CCDictionary* m_colorActions;
    cocos2d::CCDictionary* m_colorSprites;
    cocos2d::CCDictionary* m_pulseActionsForGroup;
    cocos2d::CCDictionary* m_colorCache;
    cocos2d::CCDictionary* m_opacityActionsForGroup;
    cocos2d::CCDictionary* m_f0150;
    cocos2d::CCArray* m_opacityActions;
    cocos2d::CCArray* m_touchActions;
    cocos2d::CCDictionary* m_countActions;
    cocos2d::CCArray* m_onDeathActions;
    cocos2d::CCArray* m_collisionActions;
    cocos2d::CCDictionary* m_f0180;
    cocos2d::CCDictionary* m_f0188;
    std::vector<InheritanceNode*> m_inheritanceNodesForGroup;
    cocos2d::CCDictionary* m_f01a8;
    cocos2d::CCDictionary* m_collisionActionsForGroup1;
    cocos2d::CCDictionary* m_collisionActionsForGroup2;
    std::vector<ColorAction*> m_colorActionsForGroup;
    std::vector<ColorActionSprite*> m_colorSpritesForGroup;
    bool m_pulseExistsForGroup[1100];
    bool m_f063c;
    bool m_opactiyExistsForGroup[1100];
    int m_itemValues[1100];
    int m_unusued;
    int* m_unused2;
    cocos2d::CCArray* m_f1bc8;
    cocos2d::CCArray* m_inheritanceChain;
    cocos2d::CCDictionary* m_f1bd8;
    std::vector<bool> m_groupToggled;
    cocos2d::CCDictionary* m_triggeredIDs;
    cocos2d::CCDictionary* m_followActions;
    cocos2d::CCArray* m_spawnActions;
    cocos2d::CCArray* m_moveActions;
    cocos2d::CCArray* m_f1c28;
    cocos2d::CCNode* m_f1c30;
    cocos2d::CCDictionary* m_f1c38;
    cocos2d::CCDictionary* m_f1c40;
    cocos2d::CCDictionary* m_f1c48;
    cocos2d::CCDictionary* m_f1c50;
    float m_time;
    float m_velocity;
    float m_acceleration;
    bool m_moveOptimizationEnabled;
@end

@interface GJFollowCommandLayer
    static GJFollowCommandLayer* create(EffectGameObject*, cocos2d::CCArray*) = 0x16a550, 2238;
    void onUpdateGroupID(cocos2d::CCObject*) = 0x16c8f0, 2247;
    void onUpdateGroupID2(cocos2d::CCObject*) = 0x16c9e0, 2248;
    void textChanged(CCTextInputNode*) = 0x16d480, 2252;
    void updateTargetGroupID() = 0x16cfe0, 2261;
    void updateTargetGroupID2() = 0x16d1c0, 2262;
@end

@interface GJGameLevel : cocos2d::CCNode
    static GJGameLevel* create() = 0x2b83e0, 2284;
    void getAudioFileName() = 0x2dbe70, 2289;
    void getCoinKey(int) = 0x2ce360, 2291;
    void getLengthKey(int) = 0x2dbba0, 2293;
    void getNormalPercent() = 0x2b8b20, 2295;
    void levelWasAltered() = 0x2db530, 2301;
    void savePercentage(int, bool, int, int, bool) = 0x2db700, 2303;

    int m_levelId = 0x130;
    std::string m_name = 0x138;
    std::string m_levelString = 0x148;
    std::string m_author = 0x150;
    int m_audioTrack = 0x18c;
    int m_songID = 0x190;
    LevelDifficulty m_difficulty = 0x1ac;
    bool m_lowDetail = 0x1c5;
    int m_bestNormal = 0x214;
    int m_bestPractice = 0x238;
    int m_score = 0x248;
    int m_epic = 0x24c;
    int m_demon = 0x26c;
    int m_stars = 0x27c;
    OBB2D* m_hitbox = 0x2b0;
    bool m_official = 0x324;
@end

@interface GJGroundLayer
    static GJGroundLayer* create(int, int) = 0x355c00, 2383;
    void deactivateGround() = 0x356a40, 2385;
    void getGroundY() = 0x356ac0, 2390;
    void updateGround01Color(cocos2d::_ccColor3B) = 0x356640, 2396;
    void updateGround02Color(cocos2d::_ccColor3B) = 0x356710, 2397;
    void updateGroundPos(cocos2d::CCPoint) = 0x3566c0, 2398;
    void updateGroundWidth() = 0x356790, 2399;
@end

@interface GJListLayer : cocos2d::CCLayerColor
@end

@interface GJMoveCommandLayer
    static GJMoveCommandLayer* create(EffectGameObject*, cocos2d::CCArray*) = 0x36f8a0, 2492;
    bool init(EffectGameObject*, cocos2d::CCArray*) = 0x36fac0, 2494;
    void keyBackClicked() = 0x374970, 2495;
    void onUpdateGroupID(cocos2d::CCObject*) = 0x373350, 2505;
    void onUpdateGroupID2(cocos2d::CCObject*) = 0x3734c0, 2506;
    void textChanged(CCTextInputNode*) = 0x374470, 2513;
    void textInputClosed(CCTextInputNode*) = 0x374430, 2514;
    void textInputReturn(CCTextInputNode*) = 0x374c10, 2515;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x374b50, 2516;
    void updateEditorLabel() = 0x374110, 2522;
    void updateMoveTargetElements() = 0x373ac0, 2527;
    void updateTargetGroupID() = 0x374050, 2530;
    void updateTargetGroupID2() = 0x374230, 2531;
    void updateTextInputLabel() = 0x373680, 2532;
    void updateTextInputLabel2() = 0x373760, 2533;
    void updateValueXLabel() = 0x373840, 2535;
    void updateValueYLabel() = 0x373950, 2536;
    void valuePopupClosed(ConfigureValuePopup*, float) = 0x373c20, 2537;
    ~GJMoveCommandLayer() = 0x36f6b0, 2540;
@end

@interface GJPFollowCommandLayer
    static GJPFollowCommandLayer* create(EffectGameObject*, cocos2d::CCArray*) = 0x1aea20, 2572;
    void textChanged(CCTextInputNode*) = 0x1b1dc0, 2584;
    void updateTargetGroupID() = 0x1b1a60, 2597;
@end

@interface GJRobotSprite
    static GJRobotSprite* create() = 0x34ac00, 2664;
    void updateColor02(cocos2d::_ccColor3B) = 0x34bbd0, 2672;
    void updateFrame(int) = 0x34bdd0, 2674;
@end

@interface GJRotateCommandLayer
    static GJRotateCommandLayer* create(EffectGameObject*, cocos2d::CCArray*) = 0x1ba0, 2681;
    void onUpdateGroupID(cocos2d::CCObject*) = 0x4bb0, 2692;
    void onUpdateGroupID2(cocos2d::CCObject*) = 0x4ca0, 2693;
    void textChanged(CCTextInputNode*) = 0x58d0, 2697;
    void updateTargetGroupID() = 0x54b0, 2714;
    void updateTargetGroupID2() = 0x5690, 2715;
@end

@interface GJSearchObject : cocos2d::CCNode
    static GJSearchObject* create(SearchType) = 0x2df120, 2776;
    static GJSearchObject* create(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, int, int) = 0x2dee30, 2778;
    void getPageObject(int) = 0x2df9a0, 2783;

    SearchType m_searchType;
@end

@interface GJSpecialColorSelect
    void textForColorIdx(int) = 0x383a50, 2829;
@end

@interface GJSpecialColorSelectDelegate
@end

@interface GJSpiderSprite
    static GJSpiderSprite* create() = 0x34c5b0, 2834;
@end

@interface GManager : cocos2d::CCNode
    volatile virtual void setup() {}

    void save() = 0x26f300, 2942;
    void saveData(DS_Dictionary*, std::string) = 0x26f4b0, 2943;
    void saveGMTo(std::string) = 0x26f3b0, 2944;

    std::string m_sFileName;
    bool m_bSetup;
    bool m_bSaved;
@end

@interface GameLevelManager
    GJGameLevel* createNewLevel() = 0x2b8180, 2983;
    static GameLevelManager* sharedState() = 0x2a8340, 3209;
    void getPageInfo(char const*) = 0x2c0050, 3052;
    cocos2d::CCArray* getStoredOnlineLevels(char const*) = 0x2bfe80, 3067;
    void getTopArtists(int, int) = 0x2ce3d0, 3072;
    void getTopArtistsKey(int) = 0x2ce7a0, 3073;
    void makeTimeStamp(char const*) = 0x2bfd90, 3106;

    cocos2d::CCDictionary* m_timerDict = 0x1e8;
@end

@interface GameManager : cocos2d::CCNode
    void accountStatusChanged() = 0x1cdad0, 3247;
    const cocos2d::_ccColor3B& colorForIdx(int) = 0x1cbc80, 3255;
    void didExitPlayscene() = 0x1d0230, 3260;
    void doQuickSave() = 0x1d0200, 3261;
    void fadeInMusic(char const*) = 0x1c2ff0, 3264;
    void getBGTexture(int) = 0x1cca00, 3268;
    void getFontFile(int) = 0x1cc5f0, 3269;
    bool getGameVariable(char const*) = 0x1cccd0, 3272;
    int getIntGameVariable(char const*) = 0x1cd1d0, 3273;
    void getUGV(char const*) = 0x1ccfa0, 3278;
    void loadDeathEffect(int) = 0x1cc690, 3290;
    void loadFont(int) = 0x1cc550, 3291;
    void reloadAll(bool, bool, bool) = 0x1d08a0, 3299;
    void reloadAllStep5() = 0x1d0b00, 3303;
    void reportPercentageForLevel(int, int, bool) = 0x1c5b00, 3307;
    void setGameVariable(char const*, bool) = 0x1cca80, 3318;
    void setIntGameVariable(char const*, int) = 0x1cd0e0, 3320;
    void setUGV(char const*, bool) = 0x1cce50, 3333;
    static GameManager* sharedState() = 0x1c2b30, 3336;
    ~GameManager() = 0x1d0e00, 3366;

    PlayLayer* m_playLayer = 0x180;
    LevelEditorLayer* m_editorLayer = 0x188;
    int m_scene = 0x1f4;
    bool m_ldm = 0x2a1;
@end

@interface GameObject : CCSpritePlus
    void activateObject() = 0x2faf60, 3369;
    void activatedByPlayer(GameObject*) = 0x342a20, 3370;
    void addColorSprite() = 0x2f7fe0, 3371;
    void addColorSpriteToParent(bool) = 0x2fb470, 3372;
    void addMainSpriteToParent(bool) = 0x33a5b0, 3381;
    void addToGroup(int) = 0x33ad00, 3387;
    void addToTempOffset(float, float) = 0x335700, 3389;
    void calculateOrientedBox() = 0x342b20, 3391;
    void calculateSpawnXPos() = 0x336970, 3392;
    void canChangeCustomColor() = 0x342db0, 3394;
    void colorForMode(int, bool) = 0x343460, 3398;
    void commonSetup() = 0x2f5570, 3399;
    void copyGroups(GameObject*) = 0x33ae30, 3400;
    static GameObject* createWithFrame(char const*) = 0x2f5490, 3408;
    static GameObject* createWithKey(int) = 0x2f4ce0, 3409;
    void customSetup() = 0x2fbba0, 3413;
    void deactivateObject(bool) = 0x2fb8f0, 3414;
    void destroyObject() = 0x336a00, 3416;
    void determineSlopeDirection() = 0x33a9e0, 3417;
    void getActiveColorForMode(int, bool) = 0x343860, 3425;
    void getBallFrame(int) = 0x341bf0, 3426;
    void getBoxOffset() = 0x3353d0, 3427;
    const cocos2d::_ccColor3B& getColorIndex() = 0x343b90, 3429;
    void getDidUpdateLastPosition() = 0x343a20, 3430;
    int getGroupID(int) = 0x33ae10, 3433;
    void getLastPosition() = 0x3439d0, 3435;
    void getMainColorMode() = 0x334c30, 3437;
    cocos2d::CCRect* getObjectRect() = 0x3352b0, 3440;
    void getObjectRect(float, float) = 0x3352d0, 3439;
    void getObjectRect2(float, float) = 0x3354e0, 3441;
    void getObjectRectDirty() = 0xdc1d0, 3442;
    void getObjectTextureRect() = 0x3355b0, 3443;
    void getObjectZOrder() = 0x337d70, 3445;
    void getOrientedRectDirty() = 0xdc1f0, 3447;
    void getRScaleX() = 0x335e50, 3450;
    void getRScaleY() = 0x335e80, 3451;
    std::string getSaveString() = 0x33d3d0, 3454;
    void getSecondaryColorMode() = 0x341c20, 3456;
    void getSectionIdx() = 0x343a00, 3457;
    void getStartPos() = 0xdc230, 3458;
    void getType() = 0xdc210, 3459;
    void groupWasDisabled() = 0x33b110, 3463;
    void groupWasEnabled() = 0x33b0f0, 3464;
    void hasBeenActivated() = 0x342a80, 3465;
    void hasBeenActivatedByPlayer(GameObject*) = 0x342a50, 3466;
    void hasSecondaryColor() = 0x342f80, 3467;
    void ignoreEnter() = 0x3352a0, 3469;
    void ignoreFade() = 0x335290, 3470;
    bool initWithTexture(cocos2d::CCTexture2D*) = 0x2f56a0, 3472;
    void isBasicTrigger() = 0x343d10, 3473;
    void isColorTrigger() = 0x343b40, 3475;
    void isFlipX() = 0x335a40, 3478;
    void isFlipY() = 0x335a50, 3479;
    void isSpawnableTrigger() = 0x343a60, 3480;
    void isSpecialObject() = 0x343c40, 3481;
    static GameObject* objectFromString(std::string, bool) = 0x33b720, 3485;
    void playShineEffect() = 0x2fa9d0, 3490;
    void powerOffObject() = 0x3369c0, 3491;
    void powerOnObject() = 0x3369a0, 3492;
    void quickUpdatePosition() = 0x335790, 3493;
    void removeFromGroup(int) = 0x33ada0, 3496;
    void removeGlow() = 0x2f7f70, 3497;
    void resetGroupDisabled() = 0x2fa7e0, 3499;
    void saveActiveColors() = 0x33d250, 3503;
    void selectObject(cocos2d::_ccColor3B) = 0x341f90, 3504;
    void setChildColor(cocos2d::_ccColor3B const&) = 0x341f20, 3505;
    void setDefaultMainColorMode(int) = 0x304fc0, 3506;
    void setDidUpdateLastPosition(bool const&) = 0x343a30, 3508;
    void setGlowColor(cocos2d::_ccColor3B const&) = 0x341ed0, 3511;
    void setGlowOpacity(unsigned char) = 0x336200, 3512;
    void setLastPosition(cocos2d::CCPoint const&) = 0x3439e0, 3513;
    void setMainColorMode(int) = 0x342e70, 3514;
    void setObjectColor(cocos2d::_ccColor3B const&) = 0x341c90, 3516;
    void setObjectRectDirty(bool) = 0xdc1e0, 3517;
    void setOrientedRectDirty(bool) = 0xdc200, 3519;
    void setPosition(cocos2d::CCPoint const&) = 0x335850, 3520;
    void setRScale(float) = 0x335e10, 3521;
    void setRScaleX(float) = 0x335cb0, 3522;
    void setRScaleY(float) = 0x335d60, 3523;
    void setSectionIdx(int const&) = 0x343a10, 3529;
    void setStartPos(cocos2d::CCPoint) = 0x2fa520, 3530;
    void setType(GameObjectType) = 0xdc220, 3532;
    void setupCoinArt() = 0x337dd0, 3536;
    void setupCustomSprites() = 0x307f60, 3538;
    void slopeFloorTop() = 0x342800, 3542;
    void slopeWallLeft() = 0x3427e0, 3543;
    void spawnXPosition() = 0xdc1b0, 3547;
    void triggerActivated(float) = 0x336990, 3548;
    void triggerObject(GJBaseGameLayer*) = 0x2fa8f0, 3549;
    void updateCustomScale(float) = 0x335eb0, 3551;
    void updateMainColor() = 0x343340, 3553;
    void updateOrientedBox() = 0x342b50, 3555;
    void updateSecondaryColor() = 0x343740, 3558;
    void updateStartPos() = 0x2fa590, 3559;
    void updateStartValues() = 0x2fa800, 3560;
    void updateState() = 0x3369e0, 3561;
    void updateSyncedAnimation(float) = 0x337f00, 3562;

    int m_type = 0x370;
    int m_id = 0x3c4;
    OBB2D* m_hitbox = 0x2b0;
    bool m_inEditLayer = 0x279;
    cocos2d::CCPoint m_startPos = 0x37c;
    bool m_touchTriggered = 0x378;
    bool m_spawnTriggered = 0x379;
    int m_uuid = 0x36c;
    int m_colorID = 0x3bc;
    int m_zOrder = 0x42c;
    int m_unknownType = 0x3d4;
    int m_coinID = 0x3e8;
    float m_scale = 0x3c0;
    float m_multiScaleMultiplier = 0x44c;
@end

@interface GameObjectCopy
    static GameObjectCopy* create(GameObject*) = 0x975a0, 3568;
    void resetObject() = 0x976a0, 3570;
    ~GameObjectCopy() = 0x97710, 3573;
@end

@interface GameSoundManager
    void disableMetering() = 0x362d80, 3576;
    void enableMetering() = 0x362d00, 3577;
    void getMeteringValue() = 0x362db0, 3580;
    void playBackgroundMusic(std::string, bool, bool) = 0x362070, 3585;
    void playEffect(std::string, float, float, float) = 0x3623d0, 3586;
    void sharedManager() = 0x3610f0, 3596;
    void stopBackgroundMusic() = 0x362130, 3598;
    ~GameSoundManager() = 0x362c00, 3604;
@end

@interface GameStatsManager
    void awardCurrencyForLevel(GJGameLevel*) = 0x43600, 3610;
    void awardDiamondsForLevel(GJGameLevel*) = 0x43c60, 3611;
    void awardSecretKey() = 0x4b1e0, 3612;
    void getSecretCoinKey(char const*) = 0x429f0, 3660;
    void getStat(char const*) = 0x3d310, 3663;
    void hasPendingUserCoin(char const*) = 0x42730, 3678;
    void hasSecretCoin(char const*) = 0x40730, 3680;
    void hasUserCoin(char const*) = 0x427e0, 3681;
    void incrementStat(char const*) = 0x3d6d0, 3683;
    void incrementStat(char const*, int) = 0x3d6e0, 3684;
    void sharedState() = 0x38f20, 3740;
    void storePendingUserCoin(char const*) = 0x42940, 3745;
    void storeSecretCoin(char const*) = 0x42a10, 3749;
    void storeUserCoin(char const*) = 0x42890, 3750;
@end

@interface GameToolbox : cocos2d::CCNode
    static void createToggleButton(std::string, cocos2d::SEL_CallFuncO, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*) = 0x28bdd0, 3765;
    static void getRelativeOffset(GameObject*, cocos2d::CCPoint) = 0x28c060, 3770;
    static void multipliedColorValue(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float) = 0x28cb90, 3777;
    static void stringSetupToDict(std::string, char const*) = 0x28d700, 3783;
    static void stringSetupToMap(std::string, char const*) = 0x28d4c0, 3784;
    static void transformColor(cocos2d::_ccColor3B const&, cocos2d::_ccHSVValue) = 0x28c950, 3786;
    static void transformColor(cocos2d::_ccColor3B const&, float, float, float) = 0x28c930, 3787;
@end

@interface GravityEffectSprite
    static GravityEffectSprite* create() = 0x6d0a0, 3857;
    bool init() = 0x80b20, 3859;
    void updateSpritesColor(cocos2d::_ccColor3B) = 0x7ce30, 3860;
@end

@interface GroupCommandObject
    static GroupCommandObject* create() = 0x18b460, 3866;
    static GroupCommandObject* createFromString(std::string) = 0x16ece0, 3867;
    void easeToText(int) = 0x16ecb0, 3868;
    void getEasedAction(cocos2d::CCActionInterval*, int, float) = 0x16e7b0, 3869;
    void runMoveCommand(cocos2d::CCPoint, float, int, float, bool, bool) = 0x16e640, 3874;
    void runRotateCommand(float, float, int, float, bool) = 0x16e8f0, 3876;
@end

@interface HardStreak : cocos2d::CCDrawNode
    void addPoint(cocos2d::CCPoint) = 0x5c950, 3890;
    void reset() = 0x5c930, 3897;
    void resumeStroke() = 0x5c210, 3898;
    void stopStroke() = 0x5c8f0, 3899;

    cocos2d::CCArray* m_pointsArr; // 0x0160
    cocos2d::CCPoint m_currentPoint; // 0x0168
    float m_waveSize; // 0x0170
    float m_pulseSize; // 0x0174
    bool m_isSolid; // 0x0178
@end

@interface InfoLayer : cocos2d::CCLayer
    void loadPage(int, bool) = 0x458fb0, 3923;
    void onRefreshComments(cocos2d::CCObject*) = 0x459b60, 3933;
@end

@interface InheritanceNode : cocos2d::CCObject
@end

@interface EffectGameObject : GameObject
    static EffectGameObject* create(char const*) = 0xc9790, 1663;
    void getTargetColorIndex() = 0xca1f0, 1667;
    void triggerObject(GJBaseGameLayer*) = 0xc9870, 1672;

    int m_targetGroup = 0x4F8;
    bool m_activateGroup = 0x578;
    bool m_touchHoldMode = 0x579;
    int m_animationID = 0x584;
    float m_spawnDelay = 0x588;
    bool m_multiTrigger = 0x594;
    int m_targetCount = 0x598;
    int m_compareType = 0x5A0;
    int m_itemBlockBID = 0x5A8;
    int m_itemBlockID = 0x5B0;
@end

@interface EndPortalObject : GameObject
    static EndPortalObject* create() = 0x1da8f0, 1708;
    void updateColors(cocos2d::_ccColor3B) = 0x1dacb0, 1713;
@end

@interface LabelGameObject : GameObject
    bool init() = 0x2f5520, 4021;
    void setObjectColor(cocos2d::_ccColor3B const&) = 0xdbca0, 4023;
@end

@interface LevelBrowserLayer : cocos2d::CCLayer
    void loadPage(GJSearchObject*) = 0x253650, 4069;
    static cocos2d::CCScene* scene(GJSearchObject*) = 0x2511d0, 4088;
    void setIDPopupClosed(SetIDPopup*, int) = 0x2554f0, 4089;
@end

@interface LevelEditorLayer : GJBaseGameLayer
    void activateTriggerEffect(EffectGameObject*, float, float, float) = 0x9b520, 4123;
    GameObject* addObjectFromString(std::string) = 0x94640, 4124;
    void addSpecial(GameObject*) = 0x94f30, 4127;
    void addToGroup(GameObject*, int, bool) = 0x9dab0, 4128;
    void addToRedoList(UndoObject*) = 0x96f80, 4129;
    void addToUndoList(UndoObject*, bool) = 0x94e20, 4130;
    void animateInDualGround(GameObject*, float, bool) = 0xa2780, 4131;
    virtual void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*) = 0x9c590, 4134;
    void checkCollisions(PlayerObject*, float) = 0x9e620, 4136;
    static LevelEditorLayer* create(GJGameLevel*) = 0x90fb0, 4138;
    void createBackground() = 0x929f0, 4139;
    void createGroundLayer() = 0x92840, 4140;
    GameObject* createObject(int, cocos2d::CCPoint, bool) = 0x957c0, 4141;
    void createObjectsFromSetup(std::string) = 0x92230, 4142;
    void createObjectsFromString(std::string, bool) = 0x94730, 4143;
    void draw() = 0xa2a70, 4145;
    void flipGravity(PlayerObject*, bool, bool) = 0xa04e0, 4148;
    void getLastObjectX() = 0x9c860, 4152;
    void getLevelString() = 0x97790, 4153;
    void getNextColorChannel() = 0x9a610, 4154;
    void getNextFreeBlockID(cocos2d::CCArray*) = 0x9a4e0, 4155;
    int getNextFreeGroupID(cocos2d::CCArray*) = 0x9a1b0, 4156;
    void getNextFreeItemID(cocos2d::CCArray*) = 0x9a390, 4157;
    void getObjectRect(GameObject*, bool) = 0x96240, 4158;
    void getRelativeOffset(GameObject*) = 0x96840, 4160;
    void handleAction(bool, cocos2d::CCArray*) = 0x97020, 4165;
    bool init(GJGameLevel*) = 0x91010, 4167;
    void levelSettingsUpdated() = 0x93f30, 4169;
    void objectAtPosition(cocos2d::CCPoint) = 0x960c0, 4170;
    void objectMoved(GameObject*) = 0x999f0, 4171;
    void objectsInRect(cocos2d::CCRect, bool) = 0x95e60, 4173;
    void onPlaytest() = 0xa06b0, 4175;
    void onStopPlaytest() = 0xa1780, 4177;
    void playMusic() = 0xa13c0, 4180;
    void recreateGroups() = 0x9dbf0, 4184;
    void redoLastAction() = 0x97750, 4185;
    void removeAllObjects() = 0x93d80, 4186;
    void removeAllObjectsOfType(int) = 0x96d40, 4187;
    void removeFromGroup(GameObject*, int) = 0x9db60, 4189;
    void removeObject(GameObject*, bool) = 0x96890, 4191;
    void removeSpecial(GameObject*) = 0x969c0, 4193;
    void resetMovingObjects() = 0x9ddc0, 4195;
    void resetObjectVector() = 0x9c4b0, 4196;
    void resetToggledGroups() = 0x9aa70, 4197;
    void resetToggledGroupsAndObjects() = 0x9c3c0, 4198;
    void resetUnusedColorChannels() = 0x9a870, 4199;
    void rotationForSlopeNearObject(GameObject*) = 0x95cd0, 4200;
    void runColorEffect(EffectGameObject*, int, float, float, bool) = 0x9bd30, 4201;
    void scene(GJGameLevel*) = 0x90f20, 4202;
    void setupLevelStart(LevelSettingsObject*) = 0xa0ca0, 4205;
    void sortStickyGroups() = 0x92b10, 4208;
    void stopTriggersInGroup(int, float) = 0x9c030, 4211;
    void timeForXPos(float) = 0x9c7d0, 4216;
    void toggleDualMode(GameObject*, bool, PlayerObject*, bool) = 0xa0200, 4218;
    void toggleGroupPreview(int, bool) = 0x9bea0, 4221;
    void transferDefaultColors(GJEffectManager*, GJEffectManager*) = 0x9ab50, 4223;
    void undoLastAction() = 0x97770, 4228;
    void update(float) = 0xa1b70, 4231;
    void updateBGAndGColors() = 0x9b9b0, 4232;
    void updateBlendValues() = 0x9bc60, 4233;
    void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*) = 0x9c200, 4234;
    void updateDualGround(PlayerObject*, int, bool) = 0xa1a60, 4235;
    void updateEditorMode() = 0x93b50, 4236;
    void updateGameObjectsNew() = 0x9adc0, 4238;
    void updateGround(float) = 0x93a60, 4239;
    void updateGroundWidth() = 0x92af0, 4240;
    void updateOptions() = 0x91ed0, 4243;
    void updateToggledGroups() = 0x9bb10, 4245;
    void updateVisibility(float) = 0x92c70, 4246;
    void xPosForTime(float) = 0x9c800, 4249;
    ~LevelEditorLayer() = 0x90a00, 4252;

    cocos2d::CCArray* m_objects = 0x3a0;
    EditorUI* m_editorUI = 0x5d8;
@end

@interface LevelInfoLayer : cocos2d::CCLayer
@end

@interface LevelSettingsLayer
    static LevelSettingsLayer* create(LevelSettingsObject*, LevelEditorLayer*) = 0xa7c30, 4441;
@end

@interface LevelSettingsObject : cocos2d::CCNode
    static LevelSettingsObject* create() = 0x92760, 4478;
    bool init() = 0xa5690, 4480;
    void objectFromDict(cocos2d::CCDictionary*) = 0xa5810, 4481;
    static LevelSettingsObject* objectFromString(std::string) = 0x945a0, 4482;
    void setupColorsFromLegacyMode(cocos2d::CCDictionary*) = 0xa6a30, 4484;

    GJGameLevel* m_level = 0x150;
    GJEffectManager* m_effectManager = 0x120;
    int m_fontType = 0x144;
    bool m_is2Player = 0x132;
@end

@interface LevelTools
    void getAudioString(int) = 0x293880, 4498;
    void verifyLevelIntegrity(std::string, int) = 0x294360, 4508;
    void xPosForTime(float, cocos2d::CCArray*, int) = 0x293d90, 4509;
@end

@interface LoadingLayer
    void loadAssets() = 0x1dfb20, 4566;
@end

@interface LocalLevelManager
    static LocalLevelManager* sharedState() = 0x35dd60, 4587;
@end

@interface MenuGameLayer
    void resetPlayer() = 0x28fdc0, 4617;
    void update(float) = 0x28fa70, 4619;
@end

@interface MenuLayer : cocos2d::CCLayer, FLAlertLayerProtocol
    virtual void keyBackClicked() = 0x1d3160, 4629;
    void onMoreGames(cocos2d::CCObject*) = 0x1d2ad0, 4642;
    void onQuit(cocos2d::CCObject*) = 0x1d2b40, 4648;
@end

@interface MoreVideoOptionsLayer : FLAlertLayer
    static MoreVideoOptionsLayer* create() = 0x443c10, 4761;
    bool init() = 0x444150, 4765;
@end

@interface MusicDownloadManager
    void incrementPriorityForSong(int) = 0x2ef750, 4829;
    static MusicDownloadManager* sharedState() = 0x2ee4c0, 4845;
@end

@interface OBB2D : cocos2d::CCNode 
    void calculateWithCenter(cocos2d::CCPoint, float, float, float) = 0x35a9c0, 4883;
    static OBB2D* create(cocos2d::CCPoint, float, float, float) = 0x35a890, 4885;
    void getBoundingRect() = 0x35b2b0, 4886;
    void overlaps(OBB2D*) = 0x35b0a0, 4889;
    void overlaps1Way(OBB2D*) = 0x35b0d0, 4890;
@end

@interface ObjectToolbox
    bool init() = 0x3b2d80, 4918;
    char const* intKeyToFrame(int) = 0x4173b0, 4919;
    static ObjectToolbox* sharedState() = 0x3b2bc0, 4922;

    cocos2d::CCDictionary* m_strKeyObjects = 0x120;
    cocos2d::CCDictionary* m_intKeyObjects = 0x128;
@end

@interface OpacityEffectAction : cocos2d::CCNode
    static OpacityEffectAction* create(float, float, float, int) = 0x1789f0, 4929;
    static OpacityEffectAction* createFromString(std::string) = 0x178c10, 4930;
    bool init(float, float, float, int) = 0x178b00, 4932;
    void step(float) = 0x178b90, 4933;

    float m_time;
    float m_beginOpacity;
    float m_endOpacity;
    bool m_finished;
    float m_elapsed;
    int m_group;
    float m_opacity;
    int m_uuid;
    float m_delta;
@end

@interface EditorPauseLayer : FLAlertLayer
    static EditorPauseLayer* create(LevelEditorLayer*) = 0x13c680, 1408;
    void saveLevel() = 0x13ebd0, 1438;
@end

@interface PauseLayer : FLAlertLayer
    static PauseLayer* create(bool) = 0x20b1e0, 4983;
    void onEdit(cocos2d::CCObject*) = 0x20c630, 4994;
@end

@interface PlatformToolbox
    void hideCursor() = 0x27c340, 5021;
    void showCursor() = 0x27c360, 5046;
@end

@interface PlayLayer : GJBaseGameLayer, CCCircleWaveDelegate
    void addCircle(CCCircleWave*) = 0x7e0f0, 5062;
    void addObject(GameObject*) = 0x70e50, 5063;
    void addToGroupOld(GameObject*) = 0x77680, 5064;
    void addToSpeedObjects(GameObject*) = 0x7cfc0, 5065;
    void animateInDualGround(GameObject*, float, bool) = 0x7d710, 5066;
    void animateInGround(bool) = 0x7d9d0, 5067;
    void animateOutGround(bool) = 0x6f350, 5068;
    void animateOutGroundFinished() = 0x7de80, 5069;
    void applyEnterEffect(GameObject*) = 0x7c310, 5070;
    virtual void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*) = 0x7aa10, 5071;
    void cameraMoveX(float, float, float) = 0x7cbe0, 5072;
    void cameraMoveY(float, float, float) = 0x7cc60, 5073;
    void checkCollisions(PlayerObject*, float) = 0x78c90, 5074;
    void circleWaveWillBeRemoved(CCCircleWave*) = 0x7e110, 5075;
    void claimParticle(std::string) = 0x76ba0, 5076;
    void clearPickedUpItems() = 0x7cfa0, 5077;
    void colorObject(int, cocos2d::_ccColor3B) = 0x77810, 5078;
    void commitJumps() = 0x737e0, 5079;
    static PlayLayer* create(GJGameLevel*) = 0x6b590, 5080;
    void createCheckpoint() = 0x7e470, 5081;
    void createObjectsFromSetup(std::string) = 0x6d130, 5082;
    void createParticle(int, char const*, int, cocos2d::tCCPositionType) = 0x76800, 5083;
    void currencyWillExit(CurrencyRewardLayer*) = 0x7e070, 5084;
    void delayedResetLevel() = 0x7e050, 5085;
    void destroyPlayer(PlayerObject*, GameObject*) = 0x7ab80, 5086;
    void dialogClosed(DialogLayer*) = 0x7e0b0, 5087;
    virtual void draw() = 0x7d160, 5088;
    void enterDualMode(GameObject*, bool) = 0x7d6a0, 5089;
    void exitAirMode() = 0x7dd40, 5090;
    void exitBirdMode(PlayerObject*) = 0x7dd80, 5091;
    void exitDartMode(PlayerObject*) = 0x7ddd0, 5092;
    void exitFlyMode(PlayerObject*) = 0x7dcf0, 5093;
    void exitRobotMode(PlayerObject*) = 0x7de20, 5094;
    void exitRollMode(PlayerObject*) = 0x7de60, 5095;
    void exitSpiderMode(PlayerObject*) = 0x7de40, 5096;
    void flipFinished() = 0x7e150, 5097;
    virtual void flipGravity(PlayerObject*, bool, bool) = 0x7cd10, 5098;
    void flipObjects() = 0x76130, 5099;
    void fullReset() = 0x7f8e0, 5100;
    void getLastCheckpoint() = 0x7f840, 5101;
    void getMaxPortalY() = 0x7b4e0, 5102;
    void getMinPortalY() = 0x7b550, 5103;
    void getObjectsState() = 0x7e9d0, 5104;
    void getOtherPlayer(PlayerObject*) = 0x7dcc0, 5105;
    void getParticleKey(int, char const*, int, cocos2d::tCCPositionType) = 0x764d0, 5106;
    void getParticleKey2(std::string) = 0x767b0, 5107;
    void getRelativeMod(cocos2d::CCPoint, float, float, float) = 0x7c2a0, 5108;
    void getTempMilliTime() = 0x778e0, 5109;
    void gravityEffectFinished() = 0x7cec0, 5110;
    void hasItem(int) = 0x7cee0, 5111;
    void hasUniqueCoin(GameObject*) = 0x77510, 5112;
    void incrementJumps() = 0x7ff40, 5113;
    bool init(GJGameLevel*) = 0x6b5f0, 5114;
    void isFlipping() = 0x76100, 5115;
    void levelComplete() = 0x72b80, 5116;
    void lightningFlash(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, int, bool, float) = 0x75cc0, 5118;
    void lightningFlash(cocos2d::CCPoint, cocos2d::_ccColor3B) = 0x75bf0, 5117;
    void loadDefaultColors() = 0x6ef30, 5119;
    void loadFromCheckpoint(CheckpointObject*) = 0x7f000, 5120;
    void loadLastCheckpoint() = 0x7efc0, 5121;
    void loadSavedObjectsState(std::string) = 0x7f3d0, 5122;
    void markCheckpoint() = 0x7ef60, 5123;
    void moveCameraToPos(cocos2d::CCPoint) = 0x7c980, 5124;
    virtual void onEnterTransitionDidFinish() = 0x806e0, 5125;
    virtual void onExit() = 0x80710, 5126;
    void onQuit() = 0x72710, 5127;
    void optimizeColorGroups() = 0x6dad0, 5128;
    void optimizeOpacityGroups() = 0x6dc20, 5129;
    void optimizeSaveRequiredGroups() = 0x6dd70, 5130;
    void pauseGame(bool) = 0x802d0, 5131;
    void pickupItem(GameObject*) = 0x7c1d0, 5132;
    void playAnimationCommand(int, int) = 0x75930, 5133;
    void playEndAnimationToPos(cocos2d::CCPoint) = 0x759a0, 5134;
    void playExitDualEffect(PlayerObject*) = 0x7d1d0, 5135;
    void playFlashEffect(float, int, float) = 0x75e50, 5136;
    void playGravityEffect(bool) = 0x7b5a0, 5137;
    void playSpeedParticle(float) = 0x77030, 5138;
    void playerWillSwitchMode(PlayerObject*, GameObject*) = 0x7b820, 5139;
    void prepareSpawnObjects() = 0x7fc00, 5140;
    void processItems() = 0x735c0, 5141;
    void processLoadedMoveActions() = 0x7a7c0, 5142;
    void recordAction(bool, PlayerObject*) = 0x7e190, 5143;
    void registerActiveObject(GameObject*) = 0x77620, 5144;
    void registerStateObject(GameObject*) = 0x777b0, 5145;
    void removeAllObjects() = 0x727b0, 5146;
    void removeFromGroupOld(GameObject*) = 0x77750, 5147;
    void removeLastCheckpoint() = 0x7f870, 5148;
    void removePlayer2() = 0x7d630, 5149;
    void resetLevel() = 0x71c50, 5150;
    void resume() = 0x80480, 5151;
    void resumeAndRestart() = 0x80400, 5152;
    void saveRecordAction(bool, PlayerObject*) = 0x78750, 5153;
    void scene(GJGameLevel*) = 0x6b500, 5154;
    void setupLevelStart(LevelSettingsObject*) = 0x6f560, 5156;
    void setupReplay(std::string) = 0x7e1e0, 5157;
    void shakeCamera(float, float, float) = 0x744a0, 5158;
    void shouldBlend(int) = 0x771b0, 5159;
    void showCompleteEffect() = 0x738e0, 5160;
    void showCompleteText() = 0x73be0, 5161;
    void showEndLayer() = 0x74450, 5162;
    void showHint() = 0x7deb0, 5163;
    void showNewBest(bool, int, int, bool, bool, bool) = 0x74580, 5164;
    void showRetryLayer() = 0x75ba0, 5165;
    void showTwoPlayerGuide() = 0x6df00, 5166;
    void sortGroups() = 0x6d9e0, 5167;
    void spawnCircle() = 0x73820, 5168;
    void spawnFirework() = 0x74200, 5169;
    void spawnParticle(char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint) = 0x76330, 5170;
    void spawnPlayer2() = 0x7d170, 5171;
    void startGame() = 0x726b0, 5172;
    void startMusic() = 0x72910, 5173;
    void startRecording() = 0x7fec0, 5174;
    void startRecordingDelayed() = 0x7fed0, 5175;
    void stopCameraShake() = 0x75900, 5176;
    void stopRecording() = 0x6d090, 5177;
    void storeCheckpoint(CheckpointObject*) = 0x7ef10, 5178;
    void switchToFlyMode(PlayerObject*, GameObject*, bool, int) = 0x7baf0, 5179;
    void switchToRobotMode(PlayerObject*, GameObject*, bool) = 0x7bc80, 5180;
    void switchToRollMode(PlayerObject*, GameObject*, bool) = 0x7bbe0, 5181;
    void switchToSpiderMode(PlayerObject*, GameObject*, bool) = 0x7bd20, 5182;
    void timeForXPos(float) = 0x7d120, 5183;
    void timeForXPos2(float, bool) = 0x293eb0, 5184;
    void toggleBGEffectVisibility(bool) = 0x7fe80, 5185;
    void toggleDualMode(GameObject*, bool, PlayerObject*, bool) = 0x7bf90, 5186;
    void toggleFlipped(bool, bool) = 0x7bdc0, 5187;
    void toggleGhostEffect(int) = 0x7fe40, 5188;
    void toggleGlitter(bool) = 0x70e00, 5189;
    void togglePracticeMode(bool) = 0x7f9e0, 5190;
    void toggleProgressbar() = 0x6eeb0, 5191;
    void tryStartRecord() = 0x7fe00, 5192;
    void unclaimParticle(char const*, cocos2d::CCParticleSystemQuad*) = 0x76e00, 5193;
    void unregisterActiveObject(GameObject*) = 0x77660, 5194;
    void unregisterStateObject(GameObject*) = 0x777f0, 5195;
    virtual void update(float) = 0x77900, 5196;
    void updateAttempts() = 0x7fcd0, 5197;
    void updateCamera(float) = 0x6e2b0, 5198;
    virtual void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*) = 0x7c7f0, 5199;
    void updateDualGround(PlayerObject*, int, bool) = 0x7caa0, 5200;
    void updateEffectPositions() = 0x7a6d0, 5201;
    void updateLevelColors() = 0x6f1e0, 5202;
    void updateMoveObjectsLastPosition() = 0x7a720, 5203;
    void updateProgressbar() = 0x6ed70, 5204;
    void updateReplay(float) = 0x78b60, 5205;
    void updateTimeMod(float, bool) = 0x786f0, 5206;
    virtual void updateTweenAction(float, char const*) = 0x7ffb0, 5207;
    void updateVisibility() = 0x6fb90, 5208;
    void vfDChk() = 0x7fcb0, 5209;
    virtual void visit() = 0x75ef0, 5210;
    void visitWithColorFlash() = 0x761f0, 5211;
    void willSwitchToMode(int, PlayerObject*) = 0x7b9e0, 5212;
    void xPosForTime(float) = 0x7d140, 5213;
    ~PlayLayer() = 0x6b090, 5216;

    bool m_gameStarted = 0x4dc;
    EndPortalObject* m_endPortal = 0x530;
    float m_length = 0x5f8;
    float m_trueLength = 0x5fc;
    GJGameLevel* m_level = 0x728;
    int m_attempt = 0x754;
    bool m_testMode = 0x738;
    bool m_practiceMode = 0x739;
    float m_time = 0x760;
    GameModes m_gameModes = 0x76f;
@end

@interface PlayerCheckpoint
    static PlayerCheckpoint* create() = 0x7e8c0, 5219;
@end

@interface PlayerObject : GameObject
    void activateStreak() = 0x21aef0, 5226;
    void addAllParticles() = 0x2189b0, 5227;
    void addToTouchedRings(GameObject*) = 0x22b800, 5228;
    virtual void animationFinished(char const*) = 0x22e9d0, 5229;
    void boostPlayer(float) = 0x21d6b0, 5230;
    void bumpPlayer(float, int) = 0x22d890, 5231;
    void buttonDown(PlayerButton) = 0x22b7e0, 5232;
    void checkSnapJumpToObject(GameObject*) = 0x2217f0, 5233;
    void collidedWithObject(float, GameObject*) = 0x21d880, 5234;
    void collidedWithObject(float, GameObject*, cocos2d::CCRect) = 0x21f0b0, 5235;
    void collidedWithSlope(float, GameObject*, bool) = 0x21d8d0, 5236;
    void convertToClosestRotation(float) = 0x21c860, 5237;
    void copyAttributes(PlayerObject*) = 0x22dc70, 5238;
    static PlayerObject* create(int, int, cocos2d::CCLayer*) = 0x217260, 5239;
    void deactivateParticle() = 0x21a540, 5240;
    void deactivateStreak(bool) = 0x218b30, 5241;
    void fadeOutStreak2(float) = 0x225890, 5242;
    void flashPlayer(float, float, cocos2d::_ccColor3B, cocos2d::_ccColor3B) = 0x221c80, 5243;
    void flipGravity(bool, bool) = 0x21c090, 5244;
    void flipMod() = 0x21a4c0, 5245;
    void getActiveMode() = 0x22b950, 5246;
    void getModifiedSlopeYVel() = 0x21bff0, 5247;
    void getOldPosition(float) = 0x21a830, 5248;
    virtual void getOrientedBox() = 0x22dee0, 5249;
    virtual void getRealPosition() = 0x22d5f0, 5250;
    void getSecondColor() = 0x22cee0, 5251;
    void gravityDown() = 0x22e930, 5252;
    void gravityUp() = 0x22e900, 5253;
    void hardFlipGravity() = 0x22b860, 5254;
    void hitGround(bool) = 0x220a30, 5255;
    void incrementJumps() = 0x21c050, 5256;
    bool init(int, int, cocos2d::CCLayer*) = 0x2172e0, 5257;
    void isBoostValid(float) = 0x21d650, 5258;
    void isFlying() = 0x21a4e0, 5259;
    void isSafeFlip(float) = 0x2209f0, 5260;
    void isSafeMode(float) = 0x2209b0, 5261;
    void isSafeSpiderFlip(float) = 0x221be0, 5262;
    void levelFlipFinished() = 0x21b060, 5263;
    void levelFlipping() = 0x21a510, 5264;
    void levelWillFlip() = 0x21b020, 5265;
    void loadFromCheckpoint(PlayerCheckpoint*) = 0x22e420, 5266;
    void lockPlayer() = 0x22d680, 5267;
    void logValues() = 0x221220, 5268;
    void modeDidChange() = 0x22bfd0, 5269;
    void placeStreakPoint() = 0x21af90, 5270;
    void playBurstEffect() = 0x21c780, 5271;
    void playDeathEffect() = 0x225930, 5272;
    void playDynamicSpiderRun() = 0x222ec0, 5273;
    void playerDestroyed(bool) = 0x2256d0, 5274;
    void playerIsFalling() = 0x21c730, 5275;
    void playerTeleported() = 0x22b840, 5276;
    void playingEndEffect() = 0x22d7e0, 5277;
    void postCollision(float) = 0x21cd10, 5278;
    void preCollision() = 0x21ccc0, 5279;
    void preSlopeCollision(float, GameObject*) = 0x21ec80, 5280;
    void propellPlayer(float) = 0x22d8e0, 5281;
    void pushButton(PlayerButton) = 0x22aa00, 5282;
    void pushDown() = 0x22dbd0, 5283;
    void pushPlayer(float) = 0x22dbb0, 5284;
    void releaseButton(PlayerButton) = 0x22b6f0, 5285;
    void removeAllParticles() = 0x218ac0, 5286;
    void removePendingCheckpoint() = 0x2237b0, 5287;
    void resetAllParticles() = 0x21adb0, 5288;
    void resetCollisionLog() = 0x21cc20, 5289;
    virtual void resetObject() = 0x223170, 5290;
    void resetPlayerIcon() = 0x22be00, 5291;
    void resetStateVariables() = 0x223760, 5292;
    void resetStreak() = 0x21ae10, 5293;
    void ringJump(GameObject*) = 0x22abf0, 5295;
    void runBallRotation(float) = 0x21ca10, 5296;
    void runBallRotation2() = 0x21cb10, 5297;
    void runNormalRotation() = 0x21c960, 5298;
    void runRotateAction(bool) = 0x21c570, 5299;
    void saveToCheckpoint(PlayerCheckpoint*) = 0x22e2f0, 5300;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x22cdf0, 5301;
    virtual void setFlipX(bool) = 0x22e720, 5302;
    virtual void setFlipY(bool) = 0x22e7b0, 5303;
    virtual void setOpacity(unsigned char) = 0x22d400, 5304;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x22c8b0, 5306;
    virtual void setRotation(float) = 0x22e6e0, 5307;
    virtual void setScale(float) = 0x22e870, 5308;
    virtual void setScaleX(float) = 0x22e7f0, 5309;
    virtual void setScaleY(float) = 0x22e830, 5310;
    void setSecondColor(cocos2d::_ccColor3B const&) = 0x219610, 5311;
    virtual void setVisible(bool) = 0x22e8b0, 5312;
    void setupStreak() = 0x218720, 5313;
    void spawnCircle() = 0x225480, 5314;
    void spawnCircle2() = 0x2252a0, 5315;
    void spawnDualCircle() = 0x2255c0, 5316;
    void spawnFromPlayer(PlayerObject*) = 0x22dde0, 5317;
    void spawnPortalCircle(cocos2d::_ccColor3B, float) = 0x225350, 5318;
    void spawnScaleCircle() = 0x2251b0, 5319;
    void specialGroundHit() = 0x22dbf0, 5320;
    void speedDown() = 0x22e970, 5321;
    void speedUp() = 0x22e950, 5322;
    void spiderTestJump(bool) = 0x21b160, 5323;
    void startDashing(GameObject*) = 0x221d70, 5324;
    void stopBurstEffect() = 0x22c680, 5325;
    void stopDashing() = 0x222990, 5326;
    void stopRotation(bool) = 0x21c830, 5327;
    void storeCollision(bool, int) = 0x21cc60, 5328;
    void switchedToMode(GameObjectType) = 0x22b9a0, 5329;
    void testForMoving(float, GameObject*) = 0x21eb70, 5330;
    void toggleBirdMode(bool) = 0x224070, 5331;
    void toggleDartMode(bool) = 0x2243f0, 5332;
    void toggleFlyMode(bool) = 0x223820, 5333;
    void toggleGhostEffect(GhostType) = 0x225000, 5334;
    void togglePlayerScale(bool) = 0x224bd0, 5335;
    void toggleRobotMode(bool) = 0x223c70, 5336;
    void toggleRollMode(bool) = 0x223b20, 5337;
    void toggleSpiderMode(bool) = 0x224830, 5338;
    void toggleVisibility(bool) = 0x21abf0, 5339;
    void touchedObject(GameObject*) = 0x22e660, 5340;
    void tryPlaceCheckpoint() = 0x21a950, 5341;
    virtual void update(float) = 0x218bf0, 5342;
    void updateCheckpointMode(bool) = 0x218980, 5343;
    void updateCheckpointTest() = 0x21a890, 5344;
    void updateCollide(bool, int) = 0x220f10, 5345;
    void updateCollideBottom(float, int) = 0x221790, 5346;
    void updateCollideTop(float, int) = 0x221c20, 5347;
    void updateDashAnimation() = 0x21a570, 5348;
    void updateDashArt() = 0x222520, 5349;
    void updateGlowColor() = 0x22cf10, 5350;
    void updateJump(float) = 0x219680, 5351;
    void updateJumpVariables() = 0x21a740, 5352;
    void updatePlayerBirdFrame(int) = 0x22bfe0, 5353;
    void updatePlayerDartFrame(int) = 0x22c260, 5354;
    void updatePlayerFrame(int) = 0x22c470, 5355;
    void updatePlayerGlow() = 0x22bc50, 5356;
    void updatePlayerRobotFrame(int) = 0x22d620, 5357;
    void updatePlayerRollFrame(int) = 0x22c6a0, 5358;
    void updatePlayerScale() = 0x22b8b0, 5359;
    void updatePlayerShipFrame(int) = 0x22ba40, 5360;
    void updatePlayerSpiderFrame(int) = 0x22d650, 5361;
    void updatePlayerSpriteExtra(std::string) = 0x218440, 5362;
    void updateRobotAnimationSpeed() = 0x22df40, 5363;
    void updateRotation(float) = 0x2214b0, 5364;
    void updateRotation(float, float) = 0x221230, 5365;
    void updateShipRotation(float) = 0x221310, 5366;
    void updateShipSpriteExtra(std::string) = 0x218510, 5367;
    void updateSlopeRotation(float) = 0x221030, 5368;
    void updateSlopeYVelocity(float) = 0x22e920, 5369;
    void updateSpecial(float) = 0x21a790, 5370;
    void updateStateVariables() = 0x21a770, 5371;
    void updateTimeMod(float) = 0x2185e0, 5372;
    void usingWallLimitedMode() = 0x22df00, 5373;
    void yStartDown() = 0x22e9b0, 5374;
    void yStartUp() = 0x22e990, 5375;
    ~PlayerObject() = 0x217100, 5378;

    HardStreak* m_waveStreak = 0x600;
    double m_speed = 0x608;
    double m_gravity = 0x618;
    bool m_inPlayLayer = 0x62c;
    GJRobotSprite* m_robotSprite = 0x6a8;
    GJSpiderSprite* m_spiderSprite = 0x6b0;
    bool m_isHolding = 0x745;
    bool m_hasJustHeld = 0x746;
    double m_yAccel = 0x760;
    bool m_isShip = 0x770;
    bool m_isBird = 0x771;
    bool m_isBall = 0x772;
    bool m_isDart = 0x773;
    bool m_isRobot = 0x774;
    bool m_isSpider = 0x775;
    bool m_upsideDown = 0x776;
    bool m_dead = 0x777;
    bool m_onGround = 0x778;
    float m_vehicleSize = 0x77c;
    cocos2d::CCPoint m_lastPortalLocation = 0x78c;
    bool m_isSliding = 0x7a0;
    bool m_isRising = 0x7a1;
    cocos2d::CCPoint m_lastHitGround = 0x7a4;
    GameObject* m_lastPortal = 0x7b8;
    cocos2d::_ccColor3B m_pCol1 = 0x7c2;
    cocos2d::_ccColor3B m_pCol2 = 0x7c5;
    float m_xPos = 0x7c8;
    float m_yPos = 0x7cc;
@end

@interface PulseEffectAction : cocos2d::CCNode
    static PulseEffectAction* createFromString(std::string) = 0x179e90, 5462;
    void getSaveString() = 0x17a850, 5463;
    int m_group = 0x130;
@end

@interface RetryLevelLayer
    static RetryLevelLayer* create() = 0x28dd60, 5520;
@end

@interface SetGroupIDLayer
    void onNextGroupID1(cocos2d::CCObject*) = 0x1967a0, 5763;
    void textChanged(CCTextInputNode*) = 0x197af0, 5772;
    void updateGroupIDLabel() = 0x197260, 5779;
    ~SetGroupIDLayer() = 0x194410, 5785;
@end

@interface SetIDLayer
    static SetIDLayer* create(GameObject*) = 0x168f20, 5786;
@end

@interface SetIDPopup
@end

@interface SetItemIDLayer
    static SetItemIDLayer* create(EffectGameObject*, cocos2d::CCArray*) = 0x5a830, 5812;
@end

@interface SetTargetIDLayer
    static SetTargetIDLayer* create(EffectGameObject*, cocos2d::CCArray*, std::string) = 0x159d20, 5832;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x15aed0, 5840;
    void textChanged(CCTextInputNode*) = 0x15b6c0, 5843;
    void updateTargetID() = 0x15b4a0, 5850;
@end

@interface SetupAnimationPopup : FLAlertLayer
    static SetupAnimationPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x208b70, 5890;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x209fc0, 5899;
    void textChanged(CCTextInputNode*) = 0x20ab30, 5902;
    void updateTargetID() = 0x20a910, 5911;
@end

@interface SetupCollisionTriggerPopup : FLAlertLayer
    static SetupCollisionTriggerPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x1d6120, 5919;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x1d77b0, 5931;
    void textChanged(CCTextInputNode*) = 0x1d84d0, 5934;
    void updateTargetID() = 0x1d82b0, 5945;
@end

@interface SetupCountTriggerPopup : FLAlertLayer
    static SetupCountTriggerPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x15c6c0, 5953;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x15dd40, 5965;
    void textChanged(CCTextInputNode*) = 0x15e9a0, 5968;
    void updateTargetID() = 0x15e8a0, 5979;
@end

@interface SetupInstantCountPopup : FLAlertLayer
    static SetupInstantCountPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x352c10, 5987;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x354520, 5999;
    void textChanged(CCTextInputNode*) = 0x355270, 6002;
    void updateTargetID() = 0x355170, 6013;
@end

@interface SetupInteractObjectPopup : FLAlertLayer
    static SetupInteractObjectPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x29a400, 6019;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x29bbc0, 6029;
    void textChanged(CCTextInputNode*) = 0x29c2b0, 6033;
    void updateTargetID() = 0x29c120, 6041;
@end

@interface SetupObjectTogglePopup : FLAlertLayer
    static SetupObjectTogglePopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x1c0860, 6048;
    bool init(EffectGameObject*, cocos2d::CCArray*) = 0x1c0a40, 6051;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x1c1c40, 6058;
    void textChanged(CCTextInputNode*) = 0x1c2660, 6061;
    void updateTargetID() = 0x1c2440, 6068;
@end

@interface SetupOpacityPopup : FLAlertLayer
    static SetupOpacityPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x32b70, 6076;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x340a0, 6083;
    void textChanged(CCTextInputNode*) = 0x34a60, 6087;
    void updateTargetID() = 0x34760, 6098;
@end

@interface SetupPickupTriggerPopup : FLAlertLayer
    static SetupPickupTriggerPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x35e70, 6106;
    void onItemIDArrow(cocos2d::CCObject*) = 0x37100, 6112;
    void onNextItemID(cocos2d::CCObject*) = 0x37260, 6114;
    void textChanged(CCTextInputNode*) = 0x37ca0, 6119;
    void updateItemID() = 0x37ab0, 6125;
@end

@interface SetupShakePopup : FLAlertLayer
    static SetupShakePopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x3adc00, 6211;
@end

@interface SetupSpawnPopup : FLAlertLayer
    static SetupSpawnPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x139790, 6238;
    void createToggleButton(std::string, cocos2d::SEL_CallFuncO, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*) = 0x13b0e0, 6239;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x13ad80, 6247;
    void textChanged(CCTextInputNode*) = 0x13b990, 6251;
    void updateTargetID() = 0x13b770, 6260;

    EffectGameObject* object = 0x258;
    CCTextInputNode* numInput = 0x290;
@end

@interface SetupTouchTogglePopup : FLAlertLayer
    static SetupTouchTogglePopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x1576a0, 6268;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x158b60, 6278;
    void textChanged(CCTextInputNode*) = 0x1596a0, 6282;
    void updateTargetID() = 0x159480, 6289;
@end

@interface SimplePlayer
    static SimplePlayer* create(int) = 0x1b6140, 6358;
    void setSecondColor(cocos2d::_ccColor3B const&) = 0x1bace0, 6363;
    void updateColors() = 0x1ba1f0, 6364;
    void updatePlayerFrame(int, IconType) = 0x1b62f0, 6365;
@end

@interface Slider : cocos2d::CCLayer
    static Slider* create(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, char const*, char const*, char const*, char const*, float) = 0x18dd80, 6398;
    static Slider* create(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, float) = 0x18dc40, 6399;
    void getValue() = 0x18e0c0, 6403;
    void setBarVisibility(bool) = 0x18e280, 6406;
    void setValue(float) = 0x18e170, 6410;
@end

@interface SliderThumb
    void getValue() = 0x18ce80, 6416;
@end

@interface SpawnTriggerAction : cocos2d::CCNode
    static SpawnTriggerAction* createFromString(std::string) = 0x17bf50, 6492;
    bool m_timerEnded;
    float m_delay;
    float m_timer;
    int m_group;
    int m_uuid;
@end

@interface SpeedObject
    static SpeedObject* create(GameObject*, int, float) = 0x77450, 6500;
    bool init(GameObject*, int, float) = 0x77400, 6501;
@end

@interface TeleportPortalObject
    static TeleportPortalObject* create(char const*) = 0xdaa50, 6643;
    void getTeleportXOff(cocos2d::CCNode*) = 0xdac20, 6646;
@end

@interface TextArea : ButtonSprite
    static TextArea* create(std::string, char const*, float, float, cocos2d::CCPoint, float, bool) = 0x19eb40, 6667;
@end

@interface TextInputDelegate
    volatile virtual void textChanged(CCTextInputNode*) {};
    volatile virtual void textInputOpened(CCTextInputNode*) {};
    volatile virtual void textInputClosed(CCTextInputNode*) {};
    volatile virtual void textInputShouldOffset(CCTextInputNode*, float) {};
    volatile virtual void textInputReturn(CCTextInputNode*) {};
    volatile virtual bool allowTextInput(CCTextInputNode*) {return true;};
@end

@interface ToggleTriggerAction
    static ToggleTriggerAction* createFromString(std::string) = 0x1765e0, 6692;
@end

@interface GJCommentListLayer : cocos2d::CCLayerColor
    static GJCommentListLayer* create(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool) = 0x147d00, 2106;
@end

@interface TopArtistsLayer : FLAlertLayer
    static TopArtistsLayer* create() = 0x192a90, 6698;
    void setupLeaderboard(cocos2d::CCArray*) = 0x193420, 6709;
    virtual bool init() = 0x192c30, 6699;
    void loadPage(int) = 0x193b60, 6704;
    void setupPageInfo(std::string, char const*) = 0x193730, 6710;

    cocos2d::CCNode* m_unknown = 0x220;
    GJCommentListLayer* m_commentLayer = 0x260;
@end

@interface TouchToggleAction
    static TouchToggleAction* createFromString(std::string) = 0x177e10, 6717;
@end

@interface UILayer
    static UILayer* create() = 0x27fd10, 6749;
    void disableMenu() = 0x280960, 6750;
    void enableMenu() = 0x280940, 6752;
    void pCommand(cocos2d::CCNode*) = 0x280830, 6760;
    void toggleCheckpointsMenu(bool) = 0x280430, 6762;
@end

@interface UndoCommand
@end

@interface UndoObject
    static UndoObject* create(GameObject*, UndoCommand) = 0x94ea0, 6766;
    static UndoObject* createWithArray(cocos2d::CCArray*, UndoCommand) = 0x96ee0, 6767;
    ~UndoObject() = 0xa2f70, 6775;
@end

@interface cocos2d::CCActionTween
    static cocos2d::CCActionTween* create(float, char const*, float, float) = 0x447590, 6992;
@end

@interface cocos2d::CCAnimate
    static cocos2d::CCAnimate* create(cocos2d::CCAnimation*) = 0x1f8fc0, 7013;
@end

@interface cocos2d::CCAnimation
    void createWithSpriteFrames(cocos2d::CCArray*, float) = 0x140df0, 7030;
@end

@interface cocos2d::CCArray
    void addObject(cocos2d::CCObject*) = 0x419f90, 7085;
    void addObjectNew(cocos2d::CCObject*) = 0x41a450, 7086;
    void addObjectsFromArray(cocos2d::CCArray*) = 0x41a2d0, 7087;
    void containsObject(cocos2d::CCObject*) = 0x41a3e0, 7089;
    void count() = 0x41a2f0, 7091;
    static cocos2d::CCArray* create() = 0x419cb0, 7093;
    void createWithObject(cocos2d::CCObject*) = 0x419d50, 7098;
    void fastRemoveObject(cocos2d::CCObject*) = 0x41a520, 7101;
    void fastRemoveObjectAtIndex(unsigned int) = 0x41a500, 7102;
    void fastRemoveObjectAtIndexNew(unsigned int) = 0x41a510, 7103;
    void lastObject() = 0x41a360, 7112;
    void objectAtIndex(unsigned int) = 0x41a340, 7113;
    void removeAllObjects() = 0x41a4f0, 7116;
    void removeLastObject(bool) = 0x41a470, 7117;
    void removeObject(cocos2d::CCObject*, bool) = 0x41a490, 7118;
    void removeObjectAtIndex(unsigned int, bool) = 0x41a4b0, 7119;
    void stringAtIndex(unsigned int) = 0x41a320, 7123;
@end

@interface cocos2d::CCBezierTo
    static cocos2d::CCBezierTo* create(float, cocos2d::_ccBezierConfig const&) = 0x1f6c10, 7191;
@end

@interface cocos2d::CCCallFunc
    static cocos2d::CCCallFunc* create(int) = 0x454d90, 7216;
@end

@interface cocos2d::CCCopying
    void copyWithZone(cocos2d::CCZone*) = 0x250c90, 7372;
@end

@interface cocos2d::CCDelayTime
    static cocos2d::CCDelayTime* create(float) = 0x1f4380, 7393;
@end

@interface cocos2d::CCDictionary
    void allKeys() = 0x190450, 7416;
    void count() = 0x190430, 7420;
    static cocos2d::CCDictionary* create() = 0x192650, 7421;
    void objectForKey(long) = 0x190bb0, 7427;
    void objectForKey(std::string const&) = 0x190870, 7426;
    void removeAllObjects() = 0x190220, 7429;
    void removeObjectForKey(long) = 0x1921d0, 7432;
    void setObject(cocos2d::CCObject*, long) = 0x191790, 7435;
    void setObject(cocos2d::CCObject*, std::string const&) = 0x190dc0, 7434;
    void valueForKey(long) = 0x190cf0, 7439;
    void valueForKey(std::string const&) = 0x1907a0, 7438;
@end

@interface cocos2d::CCDirector
    void getScreenBottom() = 0x24b210, 7467;
    void getScreenLeft() = 0x24b220, 7468;
    void getScreenRight() = 0x24b230, 7469;
    void getScreenScaleFactorH() = 0x24b1e0, 7471;
    void getScreenScaleFactorW() = 0x24b1f0, 7473;
    void getScreenTop() = 0x24b200, 7474;
    void getTouchDispatcher() = 0x24afa0, 7475;
    void getWinSize() = 0x24a0f0, 7478;
    void pushScene(cocos2d::CCScene*) = 0x24a620, 7491;
    void replaceScene(cocos2d::CCScene*) = 0x24a6d0, 7493;
    void resetSmoothFixCounter() = 0x249bc0, 7494;
    void sharedDirector() = 0x248cb0, 7521;
@end

@interface cocos2d::CCDrawNode
    void clear() = 0x379e80, 7538;
    static cocos2d::CCDrawNode* create() = 0x378d00, 7539;
    void drawPolygon(cocos2d::CCPoint*, unsigned int, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&) = 0x3797f0, 7542;
    void drawSegment(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&) = 0x3792d0, 7543;
    void getBlendFunc() = 0x379ea0, 7545;
    bool init() = 0x378e00, 7546;
    void setBlendFunc(cocos2d::_ccBlendFunc const&) = 0x379eb0, 7549;
@end

@interface cocos2d::CCEaseElasticOut
    static cocos2d::CCEaseElasticOut* create(cocos2d::CCActionInterval*, float) = 0x2a3080, 7666;
@end

@interface cocos2d::CCEaseIn
    static cocos2d::CCEaseIn* create(cocos2d::CCActionInterval*, float) = 0x2a1960, 7694;
@end

@interface cocos2d::CCEaseInOut
    static cocos2d::CCEaseInOut* create(cocos2d::CCActionInterval*, float) = 0x2a1d80, 7701;
@end

@interface cocos2d::CCEaseOut
    static cocos2d::CCEaseOut* create(cocos2d::CCActionInterval*, float) = 0x2a1b70, 7708;
@end

@interface cocos2d::CCFadeOut
    static cocos2d::CCFadeOut* create(float) = 0x1f7d80, 7750;
@end

@interface cocos2d::CCFadeTo
    static cocos2d::CCFadeTo* create(float, unsigned char) = 0x1f7ff0, 7782;
@end

@interface cocos2d::CCHide
    static cocos2d::CCHide* create() = 0x4543e0, 7977;
@end

@interface cocos2d::CCImage
    CCImage() = 0x24fa00, 8021;
    void initWithImageData(void*, int, cocos2d::CCImage::EImageFormat, int, int, int) = 0x24fcb0, 8029;
@end

@interface cocos2d::CCKeyboardDelegate
    void keyUp(cocos2d::enumKeyCodes) = 0x61a0, 8068;
@end

@interface cocos2d::CCLabelBMFont
    static cocos2d::CCLabelBMFont* create(char const*, char const*) = 0x347660, 8121;
    void limitLabelWidth(float, float, float) = 0x34a6e0, 8143;
    void setScale(float) = 0x34a5d0, 8155;
    void setString(char const*, bool) = 0x3489e0, 8159;
@end

@interface cocos2d::CCLayer
    CCLayer() = 0x2725b0, 8207;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2734d0, 8208, 288;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x273650, 8209, 288;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2735d0, 8210, 288;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x273550, 8211, 288;
    void ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x2736d0, 8212, 288;
    void ccTouchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x273850, 8213, 288;
    void ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x2737d0, 8214, 288;
    void ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x273750, 8215, 288;
    static cocos2d::CCLayer* create() = 0x272a00, 8216;
    void didAccelerate(cocos2d::CCAcceleration*) = 0x272ea0, 8217, 296;
    void getTouchMode() = 0x272e10, 8220;
    void getTouchPriority() = 0x272e00, 8221;
    bool init() = 0x2729a0, 8222;
    void isAccelerometerEnabled() = 0x272e20, 8223;
    void isKeyboardEnabled() = 0x273010, 8224;
    void isKeypadEnabled() = 0x272f70, 8225;
    void isMouseEnabled() = 0x273090, 8226;
    void isTouchEnabled() = 0x272ce0, 8227;
    void keyBackClicked() = 0x273160, 8228, 304;
    void keyDown(cocos2d::enumKeyCodes) = 0x273280, 8229, 312;
    void keyMenuClicked() = 0x273200, 8230, 304;
    void onEnter() = 0x273300, 8231;
    void onEnterTransitionDidFinish() = 0x273490, 8232;
    void onExit() = 0x2733c0, 8233;
    void registerScriptTouchHandler(int, bool, int, bool) = 0x272bd0, 8236;
    void registerWithTouchDispatcher() = 0x272b40, 8237;
    void setAccelerometerEnabled(bool) = 0x272e30, 8238;
    void setAccelerometerInterval(double) = 0x272e70, 8239;
    void setKeyboardEnabled(bool) = 0x273020, 8240;
    void setKeypadEnabled(bool) = 0x272f80, 8241;
    void setMouseEnabled(bool) = 0x2730a0, 8242;
    void setTouchEnabled(bool) = 0x272cf0, 8243;
    void setTouchMode(cocos2d::ccTouchesMode) = 0x272d60, 8244;
    void setTouchPriority(int) = 0x272db0, 8245;
    void unregisterScriptTouchHandler() = 0x272c30, 8248;
    ~CCLayer() = 0x2727b0, 8251;
@end

@interface cocos2d::CCLayerColor
    CCLayerColor() = 0x274320, 8253;
    static cocos2d::CCLayerColor* create(cocos2d::_ccColor4B const&, float, float) = 0x2745e0, 8258;
    void draw() = 0x274b50, 8260;
    void getBlendFunc() = 0x274480, 8261, 392;
    bool init() = 0x274800, 8262;
    void initWithColor(cocos2d::_ccColor4B const&) = 0x2749a0, 8263;
    void initWithColor(cocos2d::_ccColor4B const&, float, float) = 0x274850, 8264;
    void setBlendFunc(cocos2d::_ccBlendFunc) = 0x2744a0, 8265, 392;
    void setColor(cocos2d::_ccColor3B const&) = 0x274c20, 8266, 368;
    void setContentSize(cocos2d::CCSize const&) = 0x2749f0, 8267;
    void setOpacity(unsigned char) = 0x274db0, 8268, 368;
    void updateColor() = 0x274ae0, 8269;
    ~CCLayerColor() = 0x2743d0, 8272;
@end

@interface cocos2d::CCLayerRGBA
    CCLayerRGBA() = 0x2738d0, 8312;
    void getColor() = 0x273d60, 8313, 368;
    void getDisplayedColor() = 0x273d80, 8314, 368;
    void getDisplayedOpacity() = 0x273c00, 8315, 368;
    void getOpacity() = 0x273be0, 8316, 368;
    void isCascadeColorEnabled() = 0x274230, 8318, 368;
    void isCascadeOpacityEnabled() = 0x2741f0, 8319, 368;
    void isOpacityModifyRGB() = 0x6190, 8320;
    void setCascadeColorEnabled(bool) = 0x274250, 8321, 368;
    void setCascadeOpacityEnabled(bool) = 0x274210, 8322, 368;
    void setOpacityModifyRGB(bool) = 0x6180, 8325;
    void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x2740b0, 8326, 368;
    void updateDisplayedOpacity(unsigned char) = 0x273f20, 8327, 368;
@end

@interface cocos2d::CCMenu
    void alignItemsHorizontallyWithPadding(float) = 0x4393e0, 8380;
    void alignItemsVerticallyWithPadding(float) = 0x439190, 8382;
    static cocos2d::CCMenu* create() = 0x438720, 8394;
    void createWithArray(cocos2d::CCArray*) = 0x4387e0, 8395;
    void createWithItem(cocos2d::CCMenuItem*) = 0x438b80, 8396;
@end

@interface cocos2d::CCMotionStreak
    void reset() = 0x2ee190, 8532;
    void resumeStroke() = 0x2edb30, 8533;
    void stopStroke() = 0x2edb20, 8540;
@end

@interface cocos2d::CCMouseDelegate
    void rightKeyDown() = 0x61b0, 8546;
    void rightKeyUp() = 0x61c0, 8547;
    void scrollWheel(float, float) = 0x61d0, 8548;
@end

@interface cocos2d::CCMoveBy
    static cocos2d::CCMoveBy* create(float, cocos2d::CCPoint const&) = 0x1f50e0, 8569;
@end

@interface cocos2d::CCMoveTo
    static cocos2d::CCMoveTo* create(float, cocos2d::CCPoint const&) = 0x1f54d0, 8578;
@end

@interface cocos2d::CCNode
    CCNode() = 0x122550, 8585;
    void _setZOrder(int) = 0x122990, 8586;
    void addChild(cocos2d::CCNode*) = 0x1233d0, 8587;
    void addChild(cocos2d::CCNode*, int) = 0x1233b0, 8588;
    void addChild(cocos2d::CCNode*, int, int) = 0x1232a0, 8589;
    void addComponent(cocos2d::CCComponent*) = 0x124a40, 8590;
    void cleanup() = 0x123100, 8593;
    void convertToNodeSpace(cocos2d::CCPoint const&) = 0x124750, 8594;
    void convertToWorldSpace(cocos2d::CCPoint const&) = 0x124790, 8597;
    static cocos2d::CCNode* create() = 0x1230a0, 8601;
    void draw() = 0x123840, 8604;
    void getActionByTag(int) = 0x123ee0, 8605;
    void getActionManager() = 0x123e50, 8606;
    void getAnchorPoint() = 0x122d80, 8607;
    void getAnchorPointInPoints() = 0x122d70, 8608;
    void getCamera() = 0x122cb0, 8609;
    void getChildByTag(int) = 0x123220, 8610;
    void getChildren() = 0x122c80, 8611;
    void getChildrenCount() = 0x122c90, 8612;
    void getContentSize() = 0x122e00, 8614;
    void getGLServerState() = 0x122f90, 8615;
    void getGrid() = 0x122d00, 8616;
    void getOrderOfArrival() = 0x122f50, 8617;
    void getParent() = 0x122ed0, 8618;
    void getPosition() = 0x122b60, 8620;
    void getPosition(float*, float*) = 0x122b90, 8619;
    void getPositionX() = 0x122be0, 8621;
    void getPositionY() = 0x122bf0, 8622;
    void getRotation() = 0x122a00, 8623;
    void getRotationX() = 0x122a50, 8624;
    void getRotationY() = 0x122a80, 8625;
    void getScale() = 0x122ab0, 8626;
    void getScaleX() = 0x122b00, 8627;
    void getScaleY() = 0x122b30, 8628;
    void getScaledContentSize() = 0x122e10, 8629;
    void getScheduler() = 0x123f70, 8630;
    void getShaderProgram() = 0x122f70, 8631;
    void getSkewX() = 0x122920, 8632;
    void getSkewY() = 0x122950, 8633;
    void getUserData() = 0x122f30, 8634;
    void getUserObject() = 0x122f80, 8635;
    void getVertexZ() = 0x1229e0, 8636;
    void getZOrder() = 0x122980, 8637;
    void ignoreAnchorPointForPosition(bool) = 0x122f00, 8638;
    bool init() = 0x122910, 8639;
    void isIgnoreAnchorPointForPosition() = 0x122ef0, 8641;
    void isRunning() = 0x122ec0, 8642;
    void isVisible() = 0x122d50, 8643;
    void nodeToParentTransform() = 0x124210, 8644;
    void nodeToWorldTransform() = 0x124670, 8645;
    void onEnter() = 0x123a90, 8647;
    void onEnterTransitionDidFinish() = 0x123b90, 8648;
    void onExit() = 0x123ca0, 8649;
    void onExitTransitionDidStart() = 0x123c00, 8650;
    void parentToNodeTransform() = 0x1245d0, 8651;
    void pauseSchedulerAndActions() = 0x123d60, 8652;
    void registerScriptHandler(int) = 0x123d90, 8653;
    void removeAllChildren() = 0x123600, 8654;
    void removeAllChildrenWithCleanup(bool) = 0x123620, 8655;
    void removeAllComponents() = 0x124aa0, 8656;
    void removeChild(cocos2d::CCNode*) = 0x123460, 8657;
    void removeChild(cocos2d::CCNode*, bool) = 0x123480, 8658;
    void removeChildByTag(int) = 0x1235a0, 8659;
    void removeChildByTag(int, bool) = 0x1235c0, 8660;
    void removeComponent(char const*) = 0x124a60, 8661;
    void removeComponent(cocos2d::CCComponent*) = 0x124a80, 8662;
    void removeFromParent() = 0x1233f0, 8663;
    void removeFromParentAndCleanup(bool) = 0x123410, 8664;
    void removeMeAndCleanup() = 0x123440, 8665;
    void reorderChild(cocos2d::CCNode*, int) = 0x123760, 8666;
    void resumeSchedulerAndActions() = 0x123b60, 8667;
    void runAction(cocos2d::CCAction*) = 0x123e60, 8668;
    void schedule(cocos2d::SEL_SCHEDULE) = 0x1240b0, 8669;
    void schedule(cocos2d::SEL_SCHEDULE, float) = 0x124120, 8670;
    void scheduleUpdate() = 0x123f80, 8673;
    void setActionManager(cocos2d::CCActionManager*) = 0x123e00, 8676;
    void setAnchorPoint(cocos2d::CCPoint const&) = 0x122d90, 8678;
    void setContentSize(cocos2d::CCSize const&) = 0x122e50, 8679;
    void setGLServerState(cocos2d::ccGLServerState) = 0x122fa0, 8680;
    void setGrid(cocos2d::CCGridBase*) = 0x122d10, 8681;
    void setOrderOfArrival(unsigned int) = 0x122f60, 8682;
    void setParent(cocos2d::CCNode*) = 0x122ee0, 8683;
    void setPosition(cocos2d::CCPoint const&) = 0x122b70, 8684;
    void setPosition(float, float) = 0x122ba0, 8685;
    void setPositionX(float) = 0x122c00, 8686;
    void setPositionY(float) = 0x122c40, 8687;
    void setRotation(float) = 0x122a10, 8688;
    void setRotationX(float) = 0x122a60, 8689;
    void setRotationY(float) = 0x122a90, 8690;
    void setScale(float) = 0x122ac0, 8691;
    void setScale(float, float) = 0x122ae0, 8692;
    void setScaleX(float) = 0x122b10, 8693;
    void setScaleY(float) = 0x122b40, 8694;
    void setScheduler(cocos2d::CCScheduler*) = 0x123f20, 8695;
    void setShaderProgram(cocos2d::CCGLProgram*) = 0x122ff0, 8696;
    void setSkewX(float) = 0x122930, 8697;
    void setSkewY(float) = 0x122960, 8698;
    void setUserData(void*) = 0x122f40, 8699;
    void setUserObject(cocos2d::CCObject*) = 0x122fb0, 8700;
    void setVertexZ(float) = 0x1229f0, 8701;
    void setVisible(bool) = 0x122d60, 8702;
    void setZOrder(int) = 0x1229a0, 8703;
    void sortAllChildren() = 0x1237b0, 8704;
    void stopActionByTag(int) = 0x123ec0, 8706;
    void stopAllActions() = 0x123190, 8707;
    void unregisterScriptHandler() = 0x123dc0, 8710;
    void unschedule(cocos2d::SEL_SCHEDULE) = 0x124180, 8711;
    void unscheduleAllSelectors() = 0x1231b0, 8712;
    void unscheduleUpdate() = 0x124060, 8713;
    void update(float) = 0x1241a0, 8714;
    void updateTransform() = 0x1249d0, 8715;
    void updateTweenAction(float, char const*) = 0x1249c0, 8716;
    void visit() = 0x123850, 8717;
    void worldToNodeTransform() = 0x124710, 8718;
    ~CCNode() = 0x122750, 8721;
@end

@interface cocos2d::CCNodeRGBA
    CCNodeRGBA() = 0x124b30, 8723;
    void getColor() = 0x125020, 8725, 288;
    void getDisplayedColor() = 0x125040, 8726, 288;
    void getDisplayedOpacity() = 0x124cf0, 8727, 288;
    void getOpacity() = 0x124cd0, 8728, 288;
    void isCascadeColorEnabled() = 0x125320, 8730, 288;
    void isCascadeOpacityEnabled() = 0x124fe0, 8731, 288;
    void setCascadeColorEnabled(bool) = 0x125340, 8733, 288;
    void setCascadeOpacityEnabled(bool) = 0x125000, 8734, 288;
    ~CCNodeRGBA() = 0x124ba0, 8742;
@end

@interface cocos2d::CCObject
    CCObject() = 0x250ca0, 8772;
    void acceptVisitor(cocos2d::CCDataVisitor&) = 0x250f30, 8773;
    void autorelease() = 0x250ed0, 8774;
    void canEncode() = 0x250f90, 8775;
    void encodeWithCoder(DS_Dictionary*) = 0x250f70, 8778;
    void getTag() = 0x250f50, 8779;
    void isEqual(cocos2d::CCObject const*) = 0x250f20, 8780;
    void release() = 0x250ea0, 8782;
    void retain() = 0x250ec0, 8783;
    void setTag(int) = 0x250f60, 8785;
    void update(float) = 0x32660, 8786;
    ~CCObject() = 0x250d20, 8789;
@end

@interface cocos2d::CCParticleSystem
    void resetSystem() = 0x46bd50, 8985;
    void resumeSystem() = 0x46bd40, 8986;
    void stopSystem() = 0x46bd10, 9035;
@end

@interface cocos2d::CCParticleSystemQuad
    static cocos2d::CCParticleSystemQuad* create(char const*) = 0x36b000, 9046;
@end

@interface cocos2d::CCPoint
    CCPoint() = 0x137050, 9075;
    CCPoint(cocos2d::CCPoint const&) = 0x137090, 9073;
    CCPoint(float, float) = 0x137000, 9074;

    cocos2d::CCPoint operator*(float) = 0x137180, 9084;
    cocos2d::CCPoint operator+(cocos2d::CCPoint const&) = 0x1370f0, 9085;
    cocos2d::CCPoint operator-() = 0x137150, 9087;
    cocos2d::CCPoint operator-(cocos2d::CCPoint const&) = 0x137120, 9086;
    cocos2d::CCPoint operator/(float) = 0x1371a0, 9088;
    cocos2d::CCPoint operator=(cocos2d::CCPoint const&) = 0x1370c0, 9090;
    
    void equals(cocos2d::CCPoint const&) = 0x1371d0, 9080;
@end

@interface cocos2d::CCRect
    CCRect() = 0x137550, 9210;
    CCRect(cocos2d::CCRect const&) = 0x137630, 9208;
    CCRect(float, float, float, float) = 0x137020, 9209;

    cocos2d::CCRect operator=(cocos2d::CCRect const&) = 0x137670, 9223;

    void containsPoint(cocos2d::CCPoint const&) = 0x1377b0, 9214;
    void equals(cocos2d::CCRect const&) = 0x1376a0, 9215;
    void getMaxX() = 0x137710, 9216;
    void getMaxY() = 0x137760, 9217;
    void getMinX() = 0x137750, 9220;
    void getMinY() = 0x1377a0, 9221;
    void intersectsRect(cocos2d::CCRect const&) = 0x137800, 9222;
@end

@interface cocos2d::CCRenderTexture
    void begin() = 0x35ce10, 9237;
    static cocos2d::CCRenderTexture* create(int, int, cocos2d::CCTexture2DPixelFormat) = 0x35c720, 9246;
    void newCCImage(bool) = 0x35d7d0, 9260;
@end

@interface cocos2d::CCRepeatForever
    static cocos2d::CCRepeatForever* create(cocos2d::CCActionInterval*) = 0x1f3920, 9285;
@end

@interface cocos2d::CCRotateBy
    static cocos2d::CCRotateBy* create(float, float) = 0x1f4c50, 9321;
@end

@interface cocos2d::CCScaleTo
    static cocos2d::CCScaleTo* create(float, float) = 0x1f6ff0, 9361;
    static cocos2d::CCScaleTo* create(float, float, float) = 0x1f70f0, 9362;
@end

@interface cocos2d::CCScene
    static cocos2d::CCScene* create() = 0x13c140, 9372;
@end

@interface cocos2d::CCScheduler
    void scheduleSelector(cocos2d::SEL_SCHEDULE, cocos2d::CCObject*, float, unsigned int, float, bool) = 0x242b20, 9394;
    void scheduleUpdateForTarget(cocos2d::CCObject*, int, bool) = 0x2438d0, 9395;
    void unscheduleAllForTarget(cocos2d::CCObject*) = 0x243e40, 9397;
@end

@interface cocos2d::CCSize
    CCSize() = 0x1373c0, 9519;
    CCSize(cocos2d::CCSize const&) = 0x137400, 9517;
    CCSize(float, float) = 0x137010, 9518;

    cocos2d::CCSize operator/(float) = 0x1374e0, 9528;
    cocos2d::CCSize operator=(cocos2d::CCSize const&) = 0x137430, 9530;
@end

@interface cocos2d::CCSprite
    CCSprite() = 0x133300, 9592;
    void addChild(cocos2d::CCNode*) = 0x134190, 9593;
    void addChild(cocos2d::CCNode*, int) = 0x1341a0, 9594;
    void addChild(cocos2d::CCNode*, int, int) = 0x1341b0, 9595;
    static cocos2d::CCSprite* create() = 0x132df0, 9598;
    static cocos2d::CCSprite* create(char const*) = 0x132a80, 9596;
    void createWithSpriteFrame(cocos2d::CCSpriteFrame*) = 0x132cb0, 9599;
    void createWithSpriteFrameName(char const*) = 0x132dc0, 9600;
    void displayFrame() = 0x135760, 9603;
    void setChildColor(cocos2d::_ccColor3B const&) = 0x135160, 9629;
    bool init() = 0x132ef0, 9609;
    ~CCSprite() = 0x133430, 9665;
    void draw() = 0x134070, 9604;
    void getBatchNode() = 0x135910, 9605;
    void getBlendFunc() = 0x505a0, 9606;
    void getTexture() = 0x135c00, 9607, 312;
    void ignoreAnchorPointForPosition(bool) = 0x134b60, 9608;
    void initWithFile(char const*) = 0x133180, 9610;
    void initWithFile(char const*, cocos2d::CCRect const&) = 0x133210, 9611;
    void initWithSpriteFrameName(char const*) = 0x1332c0, 9613;
    void initWithSpriteFrame(cocos2d::CCSpriteFrame*) = 0x133270, 9612;
    void initWithTexture(cocos2d::CCTexture2D*) = 0x248690, 9614;
    void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&) = 0x1330f0, 9615;
    void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool) = 0x132f10, 9616;
    void isDirty() = 0x505b0, 9617;
    void isFrameDisplayed(cocos2d::CCSpriteFrame*) = 0x1356d0, 9620;
    void isOpacityModifyRGB() = 0x135350, 9621, 288;
    void refreshTextureRect() = 0x133520, 9622;
    void removeAllChildrenWithCleanup(bool) = 0x134340, 9623;
    void removeChild(cocos2d::CCNode*, bool) = 0x134300, 9624;
    void reorderChild(cocos2d::CCNode*, int) = 0x134270, 9625;
    void setAnchorPoint(cocos2d::CCPoint const&) = 0x134af0, 9626;
    void setBatchNode(cocos2d::CCSpriteBatchNode*) = 0x135920, 9627;
    void setBlendFunc(cocos2d::_ccBlendFunc) = 0x50590, 9628;
    void setChildOpacity(unsigned char) = 0x134f50, 9630;
    void setDirty(bool) = 0x505c0, 9632;
    void setDirtyRecursively(bool) = 0x1345b0, 9633;
    void setDisplayFrame(cocos2d::CCSpriteFrame*) = 0x135610, 9634;
    void setDisplayFrameWithAnimationName(char const*, int) = 0x135680, 9635;
    void setFlipY(bool) = 0x134c30, 9637;
    void setOpacityModifyRGB(bool) = 0x135200, 9639, 288;
    void setPosition(cocos2d::CCPoint const&) = 0x134650, 9640;
    void setReorderChildDirtyRecursively() = 0x134550, 9641;
    void setRotationX(float) = 0x134740, 9643;
    void setRotationY(float) = 0x1347b0, 9644;
    void setSkewX(float) = 0x134820, 9648;
    void setSkewY(float) = 0x134890, 9649;
    void setTexture(cocos2d::CCTexture2D*) = 0x135a90, 9650, 312;
    void setTextureCoords(cocos2d::CCRect const&) = 0x133910, 9651;
    void setTextureRect(cocos2d::CCRect const&) = 0x133560, 9652;
    void setTextureRect(cocos2d::CCRect const&, bool, cocos2d::CCSize const&) = 0x133580, 9653;
    void setVertexRect(cocos2d::CCRect const&) = 0x1338f0, 9654;
    void setVertexZ(float) = 0x134a80, 9655;
    void sortAllChildren() = 0x1343f0, 9657;
    void updateBlendFunc() = 0x135a20, 9658;
    void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x135370, 9660, 288;
    void updateDisplayedOpacity(unsigned char) = 0x1354c0, 9661, 288;
    void updateTransform() = 0x133b70, 9662;
@end

@interface cocos2d::CCSpriteBatchNode
    void createWithTexture(cocos2d::CCTexture2D*, unsigned int) = 0xbb310, 9676;
    void getUsedAtlasCapacity() = 0xbc6b0, 9681;
    void increaseAtlasCapacity(unsigned int) = 0xbc670, 9683;
@end

@interface cocos2d::CCSpriteFrameCache
    void addSpriteFramesWithFile(char const*) = 0x199a10, 9737;
    void sharedSpriteFrameCache() = 0x198970, 9748;
    void spriteFrameByName(char const*) = 0x19a7e0, 9749;
@end

@interface cocos2d::CCString
    CCString(std::string const&) = 0x44c310, 9769;
    void boolValue() = 0x44c810, 9772;
    void doubleValue() = 0x44c7f0, 9779;
    void floatValue() = 0x44c7d0, 9780;
    void getCString() = 0x44c470, 9781;
    void intValue() = 0x44c780, 9784;
@end

@interface cocos2d::CCTexture2D
    CCTexture2D() = 0x246280, 9948;
    void initWithImage(cocos2d::CCImage*) = 0x246940, 9971;
    void setTexParameters(cocos2d::_ccTexParams*) = 0x247980, 9985;
@end

@interface cocos2d::CCTextureCache
    void addImage(char const*, bool) = 0x358120, 10028;
    void sharedTextureCache() = 0x356e00, 10042;
@end

@interface cocos2d::CCTintTo
    static cocos2d::CCTintTo* create(float, unsigned char, unsigned char, unsigned char) = 0x1f82a0, 10137;
@end

@interface cocos2d::CCTouchDispatcher
    void decrementForcePrio(int) = 0x280f70, 10173;
    void incrementForcePrio(int) = 0x280f60, 10179;
@end

@interface cocos2d::CCTransitionFade
    static cocos2d::CCTransitionFade* create(float, cocos2d::CCScene*) = 0x8ea30, 10222;
@end

@interface cocos2d::ZipUtils
    void compressString(std::string, bool, int) = 0xe9a50, 10633;
    void decompressString(std::string, bool, int) = 0xea380, 10634;
@end

@interface cocos2d::extension::CCControlColourPicker
    void setColorValue(cocos2d::_ccColor3B const&) = 0x1aac10, 10888;
@end

@interface cocos2d::extension::CCControlUtils
    void HSVfromRGB(cocos2d::extension::RGBA) = 0x1e6750, 11021;
    void RGBfromHSV(cocos2d::extension::HSV) = 0x1e6850, 11022;
@end

@interface cocos2d::extension::CCScale9Sprite
    CCScale9Sprite() = 0x211330, 11123;
    static cocos2d::extension::CCScale9Sprite* create(char const*) = 0x2130d0, 11125;
    static cocos2d::extension::CCScale9Sprite* create(char const*, cocos2d::CCRect) = 0x212ef0, 11126;
    void setContentSize(cocos2d::CCSize const&) = 0x2127c0, 11157;
@end

@interface cocos2d::extension::CCScrollView
    CCScrollView() = 0x214800, 11176;
@end

@interface ColorSelectPopup : FLAlertLayer, ColorPickerDelegate, TextInputDelegate, GJSpecialColorSelectDelegate
    void colorValueChanged(cocos2d::_ccColor3B) = 0x423320, 793;
    static ColorSelectPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x41eb70, 795;
    virtual bool init(EffectGameObject*, cocos2d::CCArray*, ColorAction*) = 0x41ee70, 800;
    void onDefault(cocos2d::CCObject*) = 0x4220e0, 804;
    void onMultiTrigger(cocos2d::CCObject*) = 0x422680, 805;
    void onPlayerColor1(cocos2d::CCObject*) = 0x422500, 807;
    void onPlayerColor2(cocos2d::CCObject*) = 0x4225c0, 808;
    void onSpawnedByTrigger(cocos2d::CCObject*) = 0x4227f0, 810;
    void onToggleHSVMode(cocos2d::CCObject*) = 0x4227b0, 812;
    void onTouchTriggered(cocos2d::CCObject*) = 0x4228b0, 814;
    virtual void show() = 0x423570, 818;
    void sliderChanged(cocos2d::CCObject*) = 0x421ca0, 819;
    void updateCopyColor() = 0x423b70, 825;
    void updateCopyColorTextInputLabel() = 0x422ed0, 826;
    void updateDurLabel() = 0x421eb0, 828;
    void updateHSVMode() = 0x422e00, 831;
    void updateOpacityLabel() = 0x422000, 835;
    void updateTouchTriggered() = 0x423020, 838;
    ~ColorSelectPopup() = 0x41e960, 841;

    cocos2d::extension::CCControlColourPicker* m_colorPicker = 0x268;
    bool m_copyColor = 0x372;
    bool m_isColorTrigger = 0x2fd;
@end

@interface SetupPulsePopup : FLAlertLayer, ColorPickerDelegate, TextInputDelegate, GJSpecialColorSelectDelegate
    void colorValueChanged(cocos2d::_ccColor3B) = 0x1ec680, 6138;
    static SetupPulsePopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x1e6d40, 6139;
    virtual bool init(EffectGameObject*, cocos2d::CCArray*) = 0x1e7010, 6142;
    void onSelectPulseMode(cocos2d::CCObject*) = 0x1eb020, 6150;
    void onSelectTargetMode(cocos2d::CCObject*) = 0x1eac30, 6153;
    void onUpdateCustomColor(cocos2d::CCObject*) = 0x1eaef0, 6157;
    virtual void textChanged(CCTextInputNode*) = 0x1ec960, 6161;
    void updateCopyColorTextInputLabel() = 0x1ebf20, 6168;
    void updateEditorLabel() = 0x1ec310, 6169;
    void updateFadeOutLabel(bool) = 0x1eba20, 6172;
    void updateTargetID() = 0x1ebbe0, 6183;
    void updateTextInputLabel() = 0x1eb8d0, 6184;
    ~SetupPulsePopup() = 0x1e6b40, 6188;

    cocos2d::extension::CCControlColourPicker* m_colorPicker = 0x268;
    cocos2d::CCSprite* m_currentColorSpr = 0x2d0;
    cocos2d::CCSprite* m_prevColorSpr = 0x2d8;
    int m_pulseMode = 0x38c;
    int m_targetMode = 0x390;
@end
