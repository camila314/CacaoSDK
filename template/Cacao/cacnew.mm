@interface FLAlertLayer : cocos2d::CCLayerColor

    virtual void onEnter() = 0x25f350;
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25ee40, 288;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25f0a0, 288;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25ef60, 288;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25f020, 288;
    virtual void registerWithTouchDispatcher() = 0x25f2e0;
    virtual void keyBackClicked() = 0x25ed90, 304;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x25ece0, 312;
    virtual void show() = 0x25f120;
    virtual bool init(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float) = 0x25e1b0;
    virtual ~FLAlertLayer() = 0x25da90;
    
    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float) = 0x25e0e0;
    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float) = 0x25dec0;
    
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

@interface AchievementCell
    void loadFromDict(cocos2d::CCDictionary*) = 0x10eaa0;
@end

@interface AchievementsLayer
    void customSetup() = 0x1bdea0;
    void loadPage(int) = 0x1be190;
@end

@interface AchievementManager
    void getAllAchievements() = 0x434d60;
    void sharedState() = 0x424420;
@end

@interface AchievementNotifier : cocos2d::CCNode
    void sharedState() = 0x464e00;
    void willSwitchToScene(cocos2d::CCScene*) = 0x4650b0;
@end

@interface AnimatedGameObject
    void playAnimation(int) = 0xc93d0;
    void updateChildSpriteColor(cocos2d::_ccColor3B) = 0xc8450;
@end

@interface AppDelegate
    void bgScale() = 0x3aaab0;
    virtual bool applicationDidFinishLaunching() = 0x3aa900;
    virtual void applicationDidEnterBackground() = 0x3aabe0;
    virtual void applicationWillEnterForeground() = 0x3aac80;
    virtual bool applicationWillBecomeActive() = 0x3aab30;
    virtual bool applicationWillResignActive() = 0x3aab50;
    virtual void trySaveGame() = 0x3aaf10;
    virtual void willSwitchToScene(cocos2d::CCScene*) = 0x3aaf40;
    static AppDelegate* get() = 0x3aab10;

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
    ArtistCell(char const*, float, float) = 0x11c740;
    void draw() = 0x11c980;
    bool init() = 0x11c7c0;
    void loadFromObject(SongInfoObject*) = 0x1118b0;
    void onNewgrounds(cocos2d::CCObject*) = 0x11c7e0;
    void updateBGColor(int) = 0x110460;

    char pad[0x1e0];
@end

@interface AudioEffectsLayer
    void audioStep(float) = 0x271f40;
    static AudioEffectsLayer* create(std::string) = 0x271a00;
    void resetAudioVars() = 0x271ee0;
@end

@interface CCIndexPath
@end

@interface TableViewCell : cocos2d::CCLayer
    TableViewCell(char const*, float, float) = 0x383de0;
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
    void moveToTop() = 0x235870;
    void moveToTopWithOffset(float) = 0x2357d0;
@end

@interface CCScrollLayerExtDelegate
@end

@interface TableView : CCScrollLayerExt, CCScrollLayerExtDelegate
    static TableView* create(TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect) = 0x37eb30;
    void reloadData() = 0x37f970;

    float m_unknown = 0x1c8;
@end

@interface BoomListView : cocos2d::CCLayer, TableViewDataSource, TableViewDelegate
    static BoomListView* create(cocos2d::CCArray*, float, float, int, BoomListType) = 0x18ecb0;
    bool init(cocos2d::CCArray*, float, float, int, BoomListType) = 0x18ee00;
    void draw() = 0x18f790;
    
    virtual void setupList() = 0x18ef90;
    virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) = 0x18f030, 368;
    virtual void cellHeightForRowAtIndexPath(CCIndexPath&, TableView*) = 0x18f070, 368;
    virtual void didSelectRowAtIndexPath(CCIndexPath&, TableView*) = 0x18f090, 368;
    virtual int numberOfRowsInSection(unsigned int, TableView*) = 0x18f0b0, 376;
    virtual void numberOfSectionsInTableView(TableView*) = 0x18f0e0, 376;
    virtual void cellForRowAtIndexPath(CCIndexPath&, TableView*) = 0x18f100, 376;
    virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView*, TableViewCellEditingStyle, CCIndexPath&) = 0x18f770, 376;
    virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) = 0x18f050, 368;
    virtual TableViewCell* getListCell(char const*) = 0x18f200;
    virtual void loadCell(TableViewCell*, int) = 0x18f4a0;

    TableView* m_tableView;
    cocos2d::CCArray* m_content;
    BoomListType m_type; 
    float m_width;
    float m_height;
    float m_cellHeight;
    int m_page;
@end

@interface BoomScrollLayer
    BoomScrollLayer() = 0x1e42f0;
@end

@interface ButtonSprite : cocos2d::CCSprite
    static ButtonSprite* create(char const*) = 0x4fa10;
    static ButtonSprite* create(char const*, int, int, float, bool) = 0x4fa40;
    void updateBGImage(char const*) = 0x502d0;
    static ButtonSprite* create(char const*, float) = 0x4fa60;
    static ButtonSprite* create(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool) = 0x4fa90;
@end

@interface CCAnimatedSprite : cocos2d::CCSprite
    void runAnimation(std::string) = 0x1a6430;
    void tweenToAnimation(std::string, float) = 0x1a65b0;
@end

@interface CCBlockLayer
    void disableUI() = 0x2a5a80;
    void draw() = 0x2a5c20;
    void enableUI() = 0x2a5a90;
    void enterAnimFinished() = 0x2a5bb0;
    void enterLayer() = 0x2a5aa0;
    void exitLayer() = 0x2a5b40;
    void hideLayer(bool) = 0x2a5ba0;
    bool init() = 0x2a59c0;
    void layerHidden() = 0x2a5be0;
    void layerVisible() = 0x2a5bc0;
    void registerWithTouchDispatcher() = 0x2a5ad0;
    void showLayer(bool) = 0x2a5b90;
@end

@interface CCCircleWave : cocos2d::CCNode
    static CCCircleWave* create(float, float, float, bool) = 0xbd270;
    static CCCircleWave* create(float, float, float, bool, bool) = 0xbd290;
    bool init(float, float, float, bool, bool) = 0xbd380;
    void followObject(cocos2d::CCNode*, bool) = 0xbd670;
    void updatePosition(float) = 0xbd630;
    cocos2d::_ccColor3B m_color = 0x134;
    CCCircleWaveDelegate* m_delegate = 0x150;
@end

@interface CCCircleWaveDelegate

@end

@interface CCLightFlash
    static CCLightFlash* create() = 0x295870;
    void playEffect(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float) = 0x295900;
@end

@interface CCMenuItemSpriteExtra
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x1253c0;
    void setSizeMult(float) = 0x1255e0;
    CCMenuItemSpriteExtra() = 0x32670;
    bool init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x125450;
@end

@interface CCMenuItemToggler : cocos2d::CCMenuItem
    static CCMenuItemToggler* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x38400;
    void setSizeMult(float) = 0x38a40;
    void toggle(bool) = 0x38950;

    CCMenuItemSpriteExtra* m_onButton;
    CCMenuItemSpriteExtra* m_offButton;
    bool m_toggled;
    bool m_notClickable;
@end

@interface CCMoveCNode
    static CCMoveCNode* create() = 0x1842a0;
    bool init() = 0x18b3d0;
    ~CCMoveCNode() = 0x18b2c0;
@end

@interface CCNodeContainer
    static CCNodeContainer* create() = 0xb1090;
    bool init() = 0xba950;
    void visit() = 0xba960;
@end

@interface CCSpritePlus : cocos2d::CCSprite
    bool initWithSpriteFrameName(char const*) = 0x248670;
    volatile inline CCSpritePlus* getFollowingSprite() {return m_followingSprite;}
    volatile inline void setFollowingSprite(CCSpritePlus* setter) {m_followingSprite = setter;}

    cocos2d::CCArray* m_followers;
    CCSpritePlus* m_followingSprite;
    bool m_hasFollower;
    bool m_propagateScaleChanges;
    bool m_propagateFlipChanges;
@end

@interface CCTextInputNode : cocos2d::CCLayer, cocos2d::CCIMEDelegate, cocos2d::CCTextFieldDelegate
    static CCTextInputNode* create(float, float, char const*, char const*, int, char const*) = 0x5cfb0;

    std::string getString() = 0x5d6f0;
    void refreshLabel() = 0x5d730;
    void setAllowedChars(std::string) = 0x5d360;
    void setLabelNormalColor(cocos2d::_ccColor3B) = 0x5dab0;
    void setLabelPlaceholderColor(cocos2d::_ccColor3B) = 0x5da90;
    void setLabelPlaceholderScale(float) = 0x5da70;
    void setMaxLabelScale(float) = 0x5da30;
    void setMaxLabelWidth(float) = 0x5da50;
    void setString(std::string) = 0x5d3e0;
    void updateLabel(std::string) = 0x5d4a0;
    void forceOffset() = 0x5ec70;
    
    virtual void registerWithTouchDispatcher() = 0x5eec0;

    bool init(float, float, char const*, char const*, int, char const*) = 0x5d180;
    virtual void visit() = 0x5d380;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x5ec80;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x5ee80;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x5ee60;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x5eea0;
    virtual void textChanged() = 0x5dd70;
    virtual void onClickTrackNode(bool) = 0x5dd40;
    virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5dad0;
    virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5dc20;
    virtual bool onTextFieldInsertText(cocos2d::CCTextFieldTTF*, char const*, int) = 0x5de50;
    virtual bool onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF*) = 0x5e2c0;
    virtual bool onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF*) = 0x5e610;

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
    static CheckpointObject* create() = 0x7e7d0;
    void getObject() = 0x7ef50;
@end

@interface CollisionBlockPopup
    static CollisionBlockPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x130010;
    void onNextItemID(cocos2d::CCObject*) = 0x130e60;
@end

@interface CollisionTriggerAction
    static CollisionTriggerAction* createFromString(std::string) = 0x176ee0;
@end

@interface ColorAction : cocos2d::CCNode
    void getSaveString() = 0x17d080;
    void setupFromDict(cocos2d::CCDictionary*) = 0x17f310;
    void setupFromString(std::string) = 0x17f270;
    cocos2d::_ccColor3B m_color = 0x12c;
@end

@interface ColorActionSprite : cocos2d::CCNode
    float m_opacity;
    cocos2d::_ccColor3B m_f0124;
    cocos2d::_ccColor3B m_activeColor;
@end

@interface ColorChannelSprite
    void updateBlending(bool) = 0x16e1d0;
    void updateCopyLabel(int, bool) = 0x16ded0;
    void updateOpacity(float) = 0x16e080;
    void updateValues(ColorAction*) = 0x16e2e0;
@end

@interface ColorPickerDelegate
@end

@interface ColorSelectLiveOverlay
@end

@interface CommentCell
    void loadFromComment(GJComment*) = 0x111c70;
@end

@interface ConfigureValuePopup
@end

@interface CountTriggerAction : cocos2d::CCNode
    static CountTriggerAction* createFromString(std::string) = 0x1754f0;

    int m_previousCount;
    int m_targetCount;
    int m_targetID;
    bool m_activateGroup;
    bool m_multiActivate = 0x138;
@end

@interface CreateMenuItem : CCMenuItemSpriteExtra
@end

@interface CreatorLayer : cocos2d::CCLayer
    void onMyLevels(cocos2d::CCObject*) = 0x142b70;
    void onSavedLevels(cocos2d::CCObject*) = 0x142860;
@end

@interface CurrencyRewardLayer
@end

@interface CustomSongCell
    void loadFromObject(SongInfoObject*) = 0x110220;
@end

@interface CustomSongLayer
    bool init(LevelSettingsObject*) = 0xf06f0;
    void onArtists(cocos2d::CCObject*) = 0xf1950;
    void onSongBrowser(cocos2d::CCObject*) = 0xf18a0;
@end

@interface CustomSongWidget
    static CustomSongWidget* create(SongInfoObject*, LevelSettingsObject*, bool, bool, bool, bool, bool) = 0x37bcc0;
    void getSongInfoIfUnloaded() = 0x37e020;
@end

@interface CustomListView : cocos2d::CCLayerColor
    static CustomListView* create(cocos2d::CCArray*, float, float, int, BoomListType) = 0x10d410;
    void getListCell(char const*) = 0x10d560;
    void loadCell(TableViewCell*, int) = 0x10e610;
    void setupList() = 0x116e70;
@end

@interface CustomizeObjectLayer
    void colorSelectClosed(cocos2d::CCNode*) = 0xe1050;
    static CustomizeObjectLayer* create(GameObject*, cocos2d::CCArray*) = 0xdd340;
    bool init(GameObject*, cocos2d::CCArray*) = 0xdd560;
    void textChanged(CCTextInputNode*) = 0xe1470;
    void textInputClosed(CCTextInputNode*) = 0xe1430;
@end

@interface DelayedSpawnNode
    static DelayedSpawnNode* create() = 0x9b360;
@end

@interface DialogLayer
    static DialogLayer* create(DialogObject*, int) = 0x2047c0;
@end

@interface DialogObject
    static DialogObject* create(std::string, std::string, int, float, bool, cocos2d::_ccColor3B) = 0x204410;
@end

@interface DrawGridLayer
    void addPlayer2Point(cocos2d::CCPoint, bool) = 0xa25b0;
    void addPlayerPoint(cocos2d::CCPoint) = 0xa39c0;
    void addToSpeedObjects(GameObject*) = 0x99900;
    static DrawGridLayer* create(cocos2d::CCNode*, LevelEditorLayer*) = 0x920c0;
    bool init(cocos2d::CCNode*, LevelEditorLayer*) = 0xa36e0;
    void timeForXPos(float) = 0x9b330;
    void update(float) = 0xa3b30;
    void updateTimeMarkers() = 0x92950;
    void xPosForTime(float) = 0x9c830;
    ~DrawGridLayer() = 0xa3480;
@end

@interface EditButtonBar : cocos2d::CCNode
    void loadFromItems(cocos2d::CCArray*, int, int, bool) = 0x351010;

    cocos2d::CCArray* m_objectSlots = 0x130;
@end

@interface EditorOptionsLayer
    void onButtonsPerRow(cocos2d::CCObject*) = 0x147b30;
@end

@interface EditorPauseLayer
    void customSetup() = 0x13cc00;
    bool init(LevelEditorLayer*) = 0x13c7a0;
@end

@interface EditorUI : cocos2d::CCLayer
    void constrainGameLayerPosition() = 0x1c6d0;
    void create(LevelEditorLayer*) = 0x8a80;
    void deselectAll() = 0x1f300;
    void onDeselectAll(cocos2d::CCObject*) = 0x19cd0;
    void disableButton(CreateMenuItem*) = 0x1c0f0;
    void editButtonUsable() = 0x28f30;
    void editObject(cocos2d::CCObject*) = 0x195a0;
    void enableButton(CreateMenuItem*) = 0x1bff0;
    CCMenuItemSpriteExtra* getCreateBtn(int, int) = 0x1f6c0;
    void getGroupCenter(cocos2d::CCArray*, bool) = 0x23470;
    cocos2d::CCArray* getSelectedObjects() = 0x23f30;
    void init(LevelEditorLayer*) = 0x8ae0;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x30790;
    void moveObject(GameObject*, cocos2d::CCPoint) = 0x24b10;
    void onDuplicate(cocos2d::CCObject*) = 0x18ba0;
    void pasteObjects(std::string) = 0x232d0;
    void playerTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2ebf0;
    void playtestStopped() = 0x24790;
    void redoLastAction(cocos2d::CCObject*) = 0xb8e0;
    void replaceGroupID(GameObject*, int, int) = 0x27470;
    void scaleChanged(float) = 0x25490;
    void scaleObjects(cocos2d::CCArray*, float, cocos2d::CCPoint) = 0x252e0;
    void selectObjects(cocos2d::CCArray*, bool) = 0x23940;
    void setupCreateMenu() = 0xcb50;
    void undoLastAction(cocos2d::CCObject*) = 0xb830;
    void updateButtons() = 0x1a300;
    void updateObjectInfoLabel() = 0x1cb10;
    void updateSlider() = 0x18a90;
    void updateZoom(float) = 0x248c0;

    LevelEditorLayer* m_editorLayer = 0x408;
    cocos2d::CCArray* m_editBars = 0x358;
    cocos2d::CCNode* m_locationSlider = 0x228;
    GameObject* m_lastSelectedObject = 0x440;
    std::string m_clipboard = 0x458;
@end

@interface EndLevelLayer
    static EndLevelLayer* create() = 0x2787d0;
@end

@interface EditorPauseLayer : FLAlertLayer
    static EditorPauseLayer* create(LevelEditorLayer*) = 0x13c680;
    void saveLevel() = 0x13ebd0;
@end

@interface ScrollingLayer : cocos2d::CCLayerColor
    static ScrollingLayer* create(cocos2d::CCSize, cocos2d::CCPoint, float) = 0x41a900, 314158;
@end

@interface FLAlertLayerProtocol
    volatile virtual void FLAlert_Clicked(FLAlertLayer*, bool) {};
@end

@interface FMODAudioEngine : cocos2d::CCNode
    float backgroundVolume = 0x130;
    float sfxVolume = 0x134;
@end

@interface FollowRewardPage
    static FollowRewardPage* create() = 0x22f140;
@end

@interface GJAccountManager
    static GJAccountManager* sharedState() = 0x85070;

    char const* m_password = 0x128;
    char const* m_username = 0x130;
@end

@interface GJBaseGameLayer : cocos2d::CCLayer
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
    void updateLayerCapacity(std::string) = 0xb1680;
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
@end

@interface GJColorSetupLayer
    void updateSpriteColors() = 0xefe50;
@end

@interface GJComment

@end

@interface GJDropDownLayer : cocos2d::CCLayerColor
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
    virtual bool init(char const*, float) = 0x352100;
    virtual void registerWithTouchDispatcher() = 0x3525f0;
    virtual void keyBackClicked() = 0x352630, 304;

    static GJDropDownLayer* create(char const*) = 0x352530;

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
    virtual bool init() = 0x180230;

    void activeColorForIndex(int) = 0x180cb0;
    void activeOpacityForIndex(int) = 0x180e10;
    void addAllInheritedColorActions(cocos2d::CCArray*) = 0x1817a0;
    void addGroupPulseEffect(PulseEffectAction*) = 0x184c10;
    void calculateBaseActiveColors() = 0x180f70;
    void calculateInheritedColor(int, ColorAction*) = 0x1818f0;
    void calculateLightBGColor(cocos2d::_ccColor3B) = 0x185b90;
    void colorActionChanged(ColorAction*) = 0x181dc0;
    void colorExists(int) = 0x181da0;
    void colorForEffect(cocos2d::_ccColor3B, cocos2d::_ccHSVValue) = 0x182650;
    cocos2d::_ccColor3B colorForGroupID(int, cocos2d::_ccColor3B const&, bool) = 0x184f90;
    void colorForIndex(int) = 0x180ad0;
    void colorForPulseEffect(cocos2d::_ccColor3B const&, PulseEffectAction*) = 0x181bf0;
    void countChangedForItem(int) = 0x185a40;
    void countForItem(int) = 0x185a10;
    static GJEffectManager* create() = 0x1800f0;
    void createFollowCommand(float, float, float, int, int, bool, int) = 0x182ed0;
    void createMoveCommand(cocos2d::CCPoint, int, float, int, float, bool, bool, int) = 0x182cc0;
    void createPlayerFollowCommand(float, float, int, float, float, int, int) = 0x182fe0;
    void createRotateCommand(int, float, int, int, int, float, bool, int) = 0x182df0;
    void getAllColorActions() = 0x180980;
    void getAllColorSprites() = 0x1809e0;
    const cocos2d::_ccColor3B& getColorAction(int) = 0x180b00;
    const cocos2d::_ccColor3B& getColorSprite(int) = 0x180d00;
    void getCurrentStateString() = 0x1867e0;
    void getLoadedMoveOffset() = 0x184390;
    void getMixedColor(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float) = 0x185d30;
    uint8_t getOpacityActionForGroup(int) = 0x1845b0;
    void getSaveString() = 0x185e90;
    void handleObjectCollision(bool, int, int) = 0x1828f0;
    void hasActiveDualTouch() = 0x185540;
    void hasBeenTriggered(int) = 0x1853b0;
    void hasPulseEffectForGroupID(int) = 0x184f60;
    bool isGroupEnabled(int) = 0x1853d0;
    void keyForGroupIDColor(int, cocos2d::_ccColor3B const&, bool) = 0x184c90;
    void loadState(std::string) = 0x188db0;
    void objectsCollided(int, int) = 0x182a00;
    void opacityForIndex(int) = 0x180c80;
    float opacityModForGroup(int) = 0x184740;
    void playerButton(bool, bool) = 0x1855a0;
    void playerDied() = 0x185860;
    void postCollisionCheck() = 0x182720;
    void preCollisionCheck() = 0x182680;
    void prepareMoveActions(float, bool) = 0x183660;
    void processColors() = 0x180e70;
    void processCopyColorPulseActions() = 0x181530;
    void processInheritedColors() = 0x181190;
    void processPulseActions() = 0x181040;
    void registerCollisionTrigger(int, int, int, bool, bool, int) = 0x182b70;
    void removeAllPulseActions() = 0x1825e0;
    void removeColorAction(int) = 0x181d60;
    void reset() = 0x180690;
    void resetColorCache() = 0x185280;
    void resetEffects() = 0x1807d0;
    void resetMoveActions() = 0x180940;
    void resetToggledGroups() = 0x1853f0;
    void resetTriggeredIDs() = 0x182630;
    void runCountTrigger(int, int, bool, int, bool, int) = 0x1858d0;
    void runDeathTrigger(int, bool, int) = 0x1857a0;
    OpacityEffectAction* runOpacityActionOnGroup(int, float, float, int) = 0x1845d0;
    void runPulseEffect(int, bool, float, float, float, PulseEffectType, cocos2d::_ccColor3B, cocos2d::_ccHSVValue, int, bool, bool, bool, int) = 0x184890;
    void runTouchTriggerCommand(int, bool, TouchTriggerType, bool, int) = 0x185460;
    void setColorAction(ColorAction*, int) = 0x181d00;
    void setFollowing(int, int, bool) = 0x185e00;
    void setupFromString(std::string) = 0x186290;
    void shouldBlend(int) = 0x180e40;
    void spawnGroup(int, float, int) = 0x1852a0;
    void stopActionsForTrigger(EffectGameObject*) = 0x183150;
    void stopMoveActionsForGroup(int) = 0x1830e0;
    void storeTriggeredID(int) = 0x185380;
    void toggleGroup(int, bool) = 0x182c80;
    void traverseInheritanceChain(InheritanceNode*) = 0x181850;
    void updateActiveOpacityEffects() = 0x1847e0;
    void updateColorAction(ColorAction*) = 0x184560;
    void updateColorEffects(float) = 0x181f40;
    void updateColors(cocos2d::_ccColor3B, cocos2d::_ccColor3B) = 0x180a40;
    void updateEffects(float) = 0x181df0;
    void updateOpacityAction(OpacityEffectAction*) = 0x184780;
    void updateOpacityEffects(float) = 0x1823e0;
    void updatePulseEffects(float) = 0x182130;
    void updateSpawnTriggers(float) = 0x182510;
    void wasFollowing(int, int) = 0x185e60;
    void wouldCreateLoop(InheritanceNode*, int) = 0x181820;
    ~GJEffectManager() = 0x17fe00;

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
    static GJFollowCommandLayer* create(EffectGameObject*, cocos2d::CCArray*) = 0x16a550;
    void onUpdateGroupID(cocos2d::CCObject*) = 0x16c8f0;
    void onUpdateGroupID2(cocos2d::CCObject*) = 0x16c9e0;
    void textChanged(CCTextInputNode*) = 0x16d480;
    void updateTargetGroupID() = 0x16cfe0;
    void updateTargetGroupID2() = 0x16d1c0;
@end

@interface GJGameLevel : cocos2d::CCNode
    static GJGameLevel* create() = 0x2b83e0;
    void getAudioFileName() = 0x2dbe70;
    void getCoinKey(int) = 0x2ce360;
    void getLengthKey(int) = 0x2dbba0;
    void getNormalPercent() = 0x2b8b20;
    void levelWasAltered() = 0x2db530;
    void savePercentage(int, bool, int, int, bool) = 0x2db700;

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
    static GJGroundLayer* create(int, int) = 0x355c00;
    void createLine(int) = 0x356220;
    void deactivateGround() = 0x356a40;
    void getGroundY() = 0x356ac0;
    bool init(int, int) = 0x355d10;
    void loadGroundSprites(int, bool) = 0x3563d0;
    void updateGround01Color(cocos2d::_ccColor3B) = 0x356640;
    void updateGround02Color(cocos2d::_ccColor3B) = 0x356710;
    void updateGroundPos(cocos2d::CCPoint) = 0x3566c0;
    void updateGroundWidth() = 0x356790;
@end

@interface GJLevelScoreCell
    void loadFromScore(GJUserScore*) = 0x114aa0;
@end

@interface GJListLayer : cocos2d::CCLayerColor
@end

@interface GJUserMessage
@end

@interface GJMessageCell
    void loadFromMessage(GJUserMessage*) = 0x1163d0;
@end

@interface GJMoreGamesLayer
    static GJMoreGamesLayer* create() = 0x43a5f0;
    void customSetup() = 0x43ae60;
    void getMoreGamesList() = 0x43a830;
@end

@interface GJMoveCommandLayer
    static GJMoveCommandLayer* create(EffectGameObject*, cocos2d::CCArray*) = 0x36f8a0;
    bool init(EffectGameObject*, cocos2d::CCArray*) = 0x36fac0;
    void keyBackClicked() = 0x374970;
    void onUpdateGroupID(cocos2d::CCObject*) = 0x373350;
    void onUpdateGroupID2(cocos2d::CCObject*) = 0x3734c0;
    void textChanged(CCTextInputNode*) = 0x374470;
    void textInputClosed(CCTextInputNode*) = 0x374430;
    void textInputReturn(CCTextInputNode*) = 0x374c10;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x374b50;
    void updateEditorLabel() = 0x374110;
    void updateMoveTargetElements() = 0x373ac0;
    void updateTargetGroupID() = 0x374050;
    void updateTargetGroupID2() = 0x374230;
    void updateTextInputLabel() = 0x373680;
    void updateTextInputLabel2() = 0x373760;
    void updateValueXLabel() = 0x373840;
    void updateValueYLabel() = 0x373950;
    void valuePopupClosed(ConfigureValuePopup*, float) = 0x373c20;
    ~GJMoveCommandLayer() = 0x36f6b0;
@end

@interface GJPFollowCommandLayer
    static GJPFollowCommandLayer* create(EffectGameObject*, cocos2d::CCArray*) = 0x1aea20;
    void textChanged(CCTextInputNode*) = 0x1b1dc0;
    void updateTargetGroupID() = 0x1b1a60;
@end

@interface GJRequestCell
    void loadFromScore(GJUserScore*) = 0x115b70;
@end

@interface GJRobotSprite
    static GJRobotSprite* create() = 0x34ac00;
    void updateColor02(cocos2d::_ccColor3B) = 0x34bbd0;
    void updateFrame(int) = 0x34bdd0;
@end

@interface GJRotateCommandLayer
    static GJRotateCommandLayer* create(EffectGameObject*, cocos2d::CCArray*) = 0x1ba0;
    void onUpdateGroupID(cocos2d::CCObject*) = 0x4bb0;
    void onUpdateGroupID2(cocos2d::CCObject*) = 0x4ca0;
    void textChanged(CCTextInputNode*) = 0x58d0;
    void updateTargetGroupID() = 0x54b0;
    void updateTargetGroupID2() = 0x5690;
@end

@interface GJScoreCell
    void loadFromScore(GJUserScore*) = 0x113aa0;
@end

@interface GJSearchObject : cocos2d::CCNode
    static GJSearchObject* create(SearchType) = 0x2df120;
    static GJSearchObject* create(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, int, int) = 0x2dee30;
    void getPageObject(int) = 0x2df9a0;

    SearchType m_searchType;
@end

@interface GJSongBrowser
    static GJSongBrowser* create(LevelSettingsObject*) = 0x3685d0;
    bool init(LevelSettingsObject*) = 0x352550;
    void loadPage(int) = 0x368820;
@end

@interface GJSpecialColorSelect
    void textForColorIdx(int) = 0x383a50;
@end

@interface GJSpecialColorSelectDelegate
@end

@interface GJSpiderSprite
    static GJSpiderSprite* create() = 0x34c5b0;
@end

@interface GJUserScore
@end

@interface GJUserCell
    void loadFromScore(GJUserScore*) = 0x115300;
@end

@interface GManager : cocos2d::CCNode
    volatile virtual void setup() {}

    void save() = 0x26f300;
    void saveData(DS_Dictionary*, std::string) = 0x26f4b0;
    void saveGMTo(std::string) = 0x26f3b0;

    std::string m_sFileName;
    bool m_bSetup;
    bool m_bSaved;
@end

@interface GameLevelManager
    GJGameLevel* createNewLevel() = 0x2b8180;
    static GameLevelManager* sharedState() = 0x2a8340;
    void getPageInfo(char const*) = 0x2c0050;
    cocos2d::CCArray* getStoredOnlineLevels(char const*) = 0x2bfe80;
    void getTopArtists(int, int) = 0x2ce3d0;
    void getTopArtistsKey(int) = 0x2ce7a0;
    void makeTimeStamp(char const*) = 0x2bfd90;

    cocos2d::CCDictionary* m_timerDict = 0x1e8;
@end

@interface GameManager : cocos2d::CCNode
    void accountStatusChanged() = 0x1cdad0;
    const cocos2d::_ccColor3B& colorForIdx(int) = 0x1cbc80;
    void didExitPlayscene() = 0x1d0230;
    void doQuickSave() = 0x1d0200;
    void fadeInMusic(char const*) = 0x1c2ff0;
    void getBGTexture(int) = 0x1cca00;
    void getFontFile(int) = 0x1cc5f0;
    bool getGameVariable(char const*) = 0x1cccd0;
    int getIntGameVariable(char const*) = 0x1cd1d0;
    void getUGV(char const*) = 0x1ccfa0;
    void loadDeathEffect(int) = 0x1cc690;
    void loadFont(int) = 0x1cc550;
    void reloadAll(bool, bool, bool) = 0x1d08a0;
    void reloadAllStep5() = 0x1d0b00;
    void reportPercentageForLevel(int, int, bool) = 0x1c5b00;
    void setGameVariable(char const*, bool) = 0x1cca80;
    void setIntGameVariable(char const*, int) = 0x1cd0e0;
    void setUGV(char const*, bool) = 0x1cce50;
    static GameManager* sharedState() = 0x1c2b30;
    ~GameManager() = 0x1d0e00;
    void getGTexture(int) = 0x1cca40;
    bool init() = 0x1c2ec0;
    void reportAchievementWithID(char const*, int, bool) = 0x1c6460;
    void resolutionForKey(int) = 0x1d0b40;
    void update(float) = 0x1d0270;

    PlayLayer* m_playLayer = 0x180;
    LevelEditorLayer* m_editorLayer = 0x188;
    int m_scene = 0x1f4;
    bool m_ldm = 0x2a1;
@end

@interface GameObject : CCSpritePlus
    void activateObject() = 0x2faf60;
    void activatedByPlayer(GameObject*) = 0x342a20;
    void addColorSprite() = 0x2f7fe0;
    void addColorSpriteToParent(bool) = 0x2fb470;
    void addMainSpriteToParent(bool) = 0x33a5b0;
    void addToGroup(int) = 0x33ad00;
    void addToTempOffset(float, float) = 0x335700;
    void calculateOrientedBox() = 0x342b20;
    void calculateSpawnXPos() = 0x336970;
    void canChangeCustomColor() = 0x342db0;
    void colorForMode(int, bool) = 0x343460;
    void commonSetup() = 0x2f5570;
    void copyGroups(GameObject*) = 0x33ae30;
    static GameObject* createWithFrame(char const*) = 0x2f5490;
    static GameObject* createWithKey(int) = 0x2f4ce0;
    void customSetup() = 0x2fbba0;
    void deactivateObject(bool) = 0x2fb8f0;
    void destroyObject() = 0x336a00;
    void determineSlopeDirection() = 0x33a9e0;
    void getActiveColorForMode(int, bool) = 0x343860;
    void getBallFrame(int) = 0x341bf0;
    void getBoxOffset() = 0x3353d0;
    const cocos2d::_ccColor3B& getColorIndex() = 0x343b90;
    void getDidUpdateLastPosition() = 0x343a20;
    int getGroupID(int) = 0x33ae10;
    void getLastPosition() = 0x3439d0;
    void getMainColorMode() = 0x334c30;
    cocos2d::CCRect* getObjectRect() = 0x3352b0;
    void getObjectRect(float, float) = 0x3352d0;
    void getObjectRect2(float, float) = 0x3354e0;
    void getObjectRectDirty() = 0xdc1d0;
    void getObjectTextureRect() = 0x3355b0;
    void getObjectZOrder() = 0x337d70;
    void getOrientedRectDirty() = 0xdc1f0;
    void getRScaleX() = 0x335e50;
    void getRScaleY() = 0x335e80;
    std::string getSaveString() = 0x33d3d0;
    void getSecondaryColorMode() = 0x341c20;
    void getSectionIdx() = 0x343a00;
    void getStartPos() = 0xdc230;
    void getType() = 0xdc210;
    void groupWasDisabled() = 0x33b110;
    void groupWasEnabled() = 0x33b0f0;
    void hasBeenActivated() = 0x342a80;
    void hasBeenActivatedByPlayer(GameObject*) = 0x342a50;
    void hasSecondaryColor() = 0x342f80;
    void ignoreEnter() = 0x3352a0;
    void ignoreFade() = 0x335290;
    bool initWithTexture(cocos2d::CCTexture2D*) = 0x2f56a0;
    void isBasicTrigger() = 0x343d10;
    void isColorTrigger() = 0x343b40;
    void isFlipX() = 0x335a40;
    void isFlipY() = 0x335a50;
    void isSpawnableTrigger() = 0x343a60;
    void isSpecialObject() = 0x343c40;
    static GameObject* objectFromString(std::string, bool) = 0x33b720;
    void playShineEffect() = 0x2fa9d0;
    void powerOffObject() = 0x3369c0;
    void powerOnObject() = 0x3369a0;
    void quickUpdatePosition() = 0x335790;
    void removeFromGroup(int) = 0x33ada0;
    void removeGlow() = 0x2f7f70;
    void resetGroupDisabled() = 0x2fa7e0;
    void saveActiveColors() = 0x33d250;
    void selectObject(cocos2d::_ccColor3B) = 0x341f90;
    void setChildColor(cocos2d::_ccColor3B const&) = 0x341f20;
    void setDefaultMainColorMode(int) = 0x304fc0;
    void setDidUpdateLastPosition(bool const&) = 0x343a30;
    void setGlowColor(cocos2d::_ccColor3B const&) = 0x341ed0;
    void setGlowOpacity(unsigned char) = 0x336200;
    void setLastPosition(cocos2d::CCPoint const&) = 0x3439e0;
    void setMainColorMode(int) = 0x342e70;
    void setObjectColor(cocos2d::_ccColor3B const&) = 0x341c90;
    void setObjectRectDirty(bool) = 0xdc1e0;
    void setOrientedRectDirty(bool) = 0xdc200;
    void setPosition(cocos2d::CCPoint const&) = 0x335850;
    void setRScale(float) = 0x335e10;
    void setRScaleX(float) = 0x335cb0;
    void setRScaleY(float) = 0x335d60;
    void setSectionIdx(int const&) = 0x343a10;
    void setStartPos(cocos2d::CCPoint) = 0x2fa520;
    void setType(GameObjectType) = 0xdc220;
    void setupCoinArt() = 0x337dd0;
    void setupCustomSprites() = 0x307f60;
    void slopeFloorTop() = 0x342800;
    void slopeWallLeft() = 0x3427e0;
    void spawnXPosition() = 0xdc1b0;
    void triggerActivated(float) = 0x336990;
    void triggerObject(GJBaseGameLayer*) = 0x2fa8f0;
    void updateCustomScale(float) = 0x335eb0;
    void updateMainColor() = 0x343340;
    void updateOrientedBox() = 0x342b50;
    void updateSecondaryColor() = 0x343740;
    void updateStartPos() = 0x2fa590;
    void updateStartValues() = 0x2fa800;
    void updateState() = 0x3369e0;
    void updateSyncedAnimation(float) = 0x337f00;

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
    static GameObjectCopy* create(GameObject*) = 0x975a0;
    void resetObject() = 0x976a0;
    ~GameObjectCopy() = 0x97710;
@end

@interface GameSoundManager
    void disableMetering() = 0x362d80;
    void enableMetering() = 0x362d00;
    void getMeteringValue() = 0x362db0;
    void playBackgroundMusic(std::string, bool, bool) = 0x362070;
    void playEffect(std::string, float, float, float) = 0x3623d0;
    void sharedManager() = 0x3610f0;
    void stopBackgroundMusic() = 0x362130;
    ~GameSoundManager() = 0x362c00;
@end

@interface GameStatsManager
    void awardCurrencyForLevel(GJGameLevel*) = 0x43600;
    void awardDiamondsForLevel(GJGameLevel*) = 0x43c60;
    void awardSecretKey() = 0x4b1e0;
    void getSecretCoinKey(char const*) = 0x429f0;
    void getStat(char const*) = 0x3d310;
    void hasPendingUserCoin(char const*) = 0x42730;
    void hasSecretCoin(char const*) = 0x40730;
    void hasUserCoin(char const*) = 0x427e0;
    void incrementStat(char const*) = 0x3d6d0;
    void incrementStat(char const*, int) = 0x3d6e0;
    void sharedState() = 0x38f20;
    void storePendingUserCoin(char const*) = 0x42940;
    void storeSecretCoin(char const*) = 0x42a10;
    void storeUserCoin(char const*) = 0x42890;
@end

@interface GameToolbox : cocos2d::CCNode
    static void createToggleButton(std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*) = 0x28bdd0;
    static void getRelativeOffset(GameObject*, cocos2d::CCPoint) = 0x28c060;
    static void multipliedColorValue(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float) = 0x28cb90;
    static void stringSetupToDict(std::string, char const*) = 0x28d700;
    static std::map<std::string, std::string> stringSetupToMap(std::string, char const*) = 0x28d4c0;
    static void transformColor(cocos2d::_ccColor3B const&, cocos2d::_ccHSVValue) = 0x28c950;
    static void transformColor(cocos2d::_ccColor3B const&, float, float, float) = 0x28c930;
@end

@interface GravityEffectSprite
    static GravityEffectSprite* create() = 0x6d0a0;
    bool init() = 0x80b20;
    void updateSpritesColor(cocos2d::_ccColor3B) = 0x7ce30;
@end

@interface GroupCommandObject
    static GroupCommandObject* create() = 0x18b460;
    static GroupCommandObject* createFromString(std::string) = 0x16ece0;
    void easeToText(int) = 0x16ecb0;
    void getEasedAction(cocos2d::CCActionInterval*, int, float) = 0x16e7b0;
    void runMoveCommand(cocos2d::CCPoint, float, int, float, bool, bool) = 0x16e640;
    void runRotateCommand(float, float, int, float, bool) = 0x16e8f0;
@end

@interface HardStreak : cocos2d::CCDrawNode
    void addPoint(cocos2d::CCPoint) = 0x5c950;
    void reset() = 0x5c930;
    void resumeStroke() = 0x5c210;
    void stopStroke() = 0x5c8f0;

    cocos2d::CCArray* m_pointsArr; // 0x0160
    cocos2d::CCPoint m_currentPoint; // 0x0168
    float m_waveSize; // 0x0170
    float m_pulseSize; // 0x0174
    bool m_isSolid; // 0x0178
@end

@interface InfoAlertButton
    static InfoAlertButton* create(std::string, std::string, float) = 0x2ecad0;
@end

@interface InfoLayer : cocos2d::CCLayer
    void loadPage(int, bool) = 0x458fb0;
    void onRefreshComments(cocos2d::CCObject*) = 0x459b60;
@end

@interface InheritanceNode : cocos2d::CCObject
@end

@interface EffectGameObject : GameObject
    static EffectGameObject* create(char const*) = 0xc9790;
    void getTargetColorIndex() = 0xca1f0;
    void triggerObject(GJBaseGameLayer*) = 0xc9870;

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
    static EndPortalObject* create() = 0x1da8f0;
    void updateColors(cocos2d::_ccColor3B) = 0x1dacb0;
@end

@interface LabelGameObject : GameObject
    bool init() = 0x2f5520;
    void setObjectColor(cocos2d::_ccColor3B const&) = 0xdbca0;
@end

@interface LevelBrowserLayer : cocos2d::CCLayer
    void loadPage(GJSearchObject*) = 0x253650;
    static cocos2d::CCScene* scene(GJSearchObject*) = 0x2511d0;
    void setIDPopupClosed(SetIDPopup*, int) = 0x2554f0;
@end

@interface LevelEditorLayer : GJBaseGameLayer
    void activateTriggerEffect(EffectGameObject*, float, float, float) = 0x9b520;
    GameObject* addObjectFromString(std::string) = 0x94640;
    void addSpecial(GameObject*) = 0x94f30;
    void addToGroup(GameObject*, int, bool) = 0x9dab0;
    void addToRedoList(UndoObject*) = 0x96f80;
    void addToUndoList(UndoObject*, bool) = 0x94e20;
    void animateInDualGround(GameObject*, float, bool) = 0xa2780;
    virtual void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*) = 0x9c590;
    void checkCollisions(PlayerObject*, float) = 0x9e620;
    static LevelEditorLayer* create(GJGameLevel*) = 0x90fb0;
    void createBackground() = 0x929f0;
    void createGroundLayer() = 0x92840;
    GameObject* createObject(int, cocos2d::CCPoint, bool) = 0x957c0;
    void createObjectsFromSetup(std::string) = 0x92230;
    void createObjectsFromString(std::string, bool) = 0x94730;
    void draw() = 0xa2a70;
    void flipGravity(PlayerObject*, bool, bool) = 0xa04e0;
    void getLastObjectX() = 0x9c860;
    void getLevelString() = 0x97790;
    void getNextColorChannel() = 0x9a610;
    void getNextFreeBlockID(cocos2d::CCArray*) = 0x9a4e0;
    int getNextFreeGroupID(cocos2d::CCArray*) = 0x9a1b0;
    void getNextFreeItemID(cocos2d::CCArray*) = 0x9a390;
    void getObjectRect(GameObject*, bool) = 0x96240;
    void getRelativeOffset(GameObject*) = 0x96840;
    void handleAction(bool, cocos2d::CCArray*) = 0x97020;
    bool init(GJGameLevel*) = 0x91010;
    void levelSettingsUpdated() = 0x93f30;
    void objectAtPosition(cocos2d::CCPoint) = 0x960c0;
    void objectMoved(GameObject*) = 0x999f0;
    void objectsInRect(cocos2d::CCRect, bool) = 0x95e60;
    void onPlaytest() = 0xa06b0;
    void onStopPlaytest() = 0xa1780;
    void playMusic() = 0xa13c0;
    void recreateGroups() = 0x9dbf0;
    void redoLastAction() = 0x97750;
    void removeAllObjects() = 0x93d80;
    void removeAllObjectsOfType(int) = 0x96d40;
    void removeFromGroup(GameObject*, int) = 0x9db60;
    void removeObject(GameObject*, bool) = 0x96890;
    void removeSpecial(GameObject*) = 0x969c0;
    void resetMovingObjects() = 0x9ddc0;
    void resetObjectVector() = 0x9c4b0;
    void resetToggledGroups() = 0x9aa70;
    void resetToggledGroupsAndObjects() = 0x9c3c0;
    void resetUnusedColorChannels() = 0x9a870;
    void rotationForSlopeNearObject(GameObject*) = 0x95cd0;
    void runColorEffect(EffectGameObject*, int, float, float, bool) = 0x9bd30;
    void scene(GJGameLevel*) = 0x90f20;
    void setupLevelStart(LevelSettingsObject*) = 0xa0ca0;
    void sortStickyGroups() = 0x92b10;
    void stopTriggersInGroup(int, float) = 0x9c030;
    void timeForXPos(float) = 0x9c7d0;
    void toggleDualMode(GameObject*, bool, PlayerObject*, bool) = 0xa0200;
    void toggleGroupPreview(int, bool) = 0x9bea0;
    void transferDefaultColors(GJEffectManager*, GJEffectManager*) = 0x9ab50;
    void undoLastAction() = 0x97770;
    void update(float) = 0xa1b70;
    void updateBGAndGColors() = 0x9b9b0;
    void updateBlendValues() = 0x9bc60;
    void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*) = 0x9c200;
    void updateDualGround(PlayerObject*, int, bool) = 0xa1a60;
    void updateEditorMode() = 0x93b50;
    void updateGameObjectsNew() = 0x9adc0;
    void updateGround(float) = 0x93a60;
    void updateGroundWidth() = 0x92af0;
    void updateOptions() = 0x91ed0;
    void updateToggledGroups() = 0x9bb10;
    void updateVisibility(float) = 0x92c70;
    void xPosForTime(float) = 0x9c800;
    ~LevelEditorLayer() = 0x90a00;

    cocos2d::CCArray* m_objects = 0x3a0;
    EditorUI* m_editorUI = 0x5d8;
@end

@interface LevelInfoLayer : cocos2d::CCLayer
@end

@interface LevelSettingsLayer
    static LevelSettingsLayer* create(LevelSettingsObject*, LevelEditorLayer*) = 0xa7c30;
@end

@interface LevelSettingsObject : cocos2d::CCNode
    static LevelSettingsObject* create() = 0x92760;
    bool init() = 0xa5690;
    void objectFromDict(cocos2d::CCDictionary*) = 0xa5810;
    static LevelSettingsObject* objectFromString(std::string) = 0x945a0;
    void setupColorsFromLegacyMode(cocos2d::CCDictionary*) = 0xa6a30;

    GJGameLevel* m_level = 0x150;
    GJEffectManager* m_effectManager = 0x120;
    int m_fontType = 0x144;
    bool m_is2Player = 0x132;
@end

@interface LevelTools
    void getAudioString(int) = 0x293880;
    void verifyLevelIntegrity(std::string, int) = 0x294360;
    void xPosForTime(float, cocos2d::CCArray*, int) = 0x293d90;
@end

@interface LoadingLayer
    void loadAssets() = 0x1dfb20;
@end

@interface LocalLevelManager
    static LocalLevelManager* sharedState() = 0x35dd60;
@end

@interface MenuGameLayer
    void resetPlayer() = 0x28fdc0;
    void update(float) = 0x28fa70;
@end

@interface MenuLayer : cocos2d::CCLayer, FLAlertLayerProtocol
    virtual void keyBackClicked() = 0x1d3160;
    void onMoreGames(cocos2d::CCObject*) = 0x1d2ad0;
    void onQuit(cocos2d::CCObject*) = 0x1d2b40;
@end

@interface MoreVideoOptionsLayer : FLAlertLayer
    static MoreVideoOptionsLayer* create() = 0x443c10;
    bool init() = 0x444150;
@end

@interface MusicDownloadManager
    void incrementPriorityForSong(int) = 0x2ef750;
    static MusicDownloadManager* sharedState() = 0x2ee4c0;
@end

@interface OBB2D : cocos2d::CCNode 
    void calculateWithCenter(cocos2d::CCPoint, float, float, float) = 0x35a9c0;
    static OBB2D* create(cocos2d::CCPoint, float, float, float) = 0x35a890;
    void getBoundingRect() = 0x35b2b0;
    void overlaps(OBB2D*) = 0x35b0a0;
    void overlaps1Way(OBB2D*) = 0x35b0d0;
@end

@interface ObjectToolbox
    bool init() = 0x3b2d80;
    char const* intKeyToFrame(int) = 0x4173b0;
    static ObjectToolbox* sharedState() = 0x3b2bc0;

    cocos2d::CCDictionary* m_strKeyObjects = 0x120;
    cocos2d::CCDictionary* m_intKeyObjects = 0x128;
@end

@interface OpacityEffectAction : cocos2d::CCNode
    static OpacityEffectAction* create(float, float, float, int) = 0x1789f0;
    static OpacityEffectAction* createFromString(std::string) = 0x178c10;
    bool init(float, float, float, int) = 0x178b00;
    void step(float) = 0x178b90;

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

@interface PauseLayer : FLAlertLayer
    static PauseLayer* create(bool) = 0x20b1e0;
    void onEdit(cocos2d::CCObject*) = 0x20c630;
@end

@interface PlatformToolbox
    void hideCursor() = 0x27c340;
    void showCursor() = 0x27c360;
@end

@interface PlayLayer : GJBaseGameLayer, CCCircleWaveDelegate
    void addCircle(CCCircleWave*) = 0x7e0f0;
    void addObject(GameObject*) = 0x70e50;
    void addToGroupOld(GameObject*) = 0x77680;
    void addToSpeedObjects(GameObject*) = 0x7cfc0;
    void animateInDualGround(GameObject*, float, bool) = 0x7d710;
    void animateInGround(bool) = 0x7d9d0;
    void animateOutGround(bool) = 0x6f350;
    void animateOutGroundFinished() = 0x7de80;
    void applyEnterEffect(GameObject*) = 0x7c310;
    virtual void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*) = 0x7aa10;
    void cameraMoveX(float, float, float) = 0x7cbe0;
    void cameraMoveY(float, float, float) = 0x7cc60;
    void checkCollisions(PlayerObject*, float) = 0x78c90;
    void circleWaveWillBeRemoved(CCCircleWave*) = 0x7e110;
    void claimParticle(std::string) = 0x76ba0;
    void clearPickedUpItems() = 0x7cfa0;
    void colorObject(int, cocos2d::_ccColor3B) = 0x77810;
    void commitJumps() = 0x737e0;
    static PlayLayer* create(GJGameLevel*) = 0x6b590;
    void createCheckpoint() = 0x7e470;
    void createObjectsFromSetup(std::string) = 0x6d130;
    void createParticle(int, char const*, int, cocos2d::tCCPositionType) = 0x76800;
    void currencyWillExit(CurrencyRewardLayer*) = 0x7e070;
    void delayedResetLevel() = 0x7e050;
    void destroyPlayer(PlayerObject*, GameObject*) = 0x7ab80;
    void dialogClosed(DialogLayer*) = 0x7e0b0;
    virtual void draw() = 0x7d160;
    void enterDualMode(GameObject*, bool) = 0x7d6a0;
    void exitAirMode() = 0x7dd40;
    void exitBirdMode(PlayerObject*) = 0x7dd80;
    void exitDartMode(PlayerObject*) = 0x7ddd0;
    void exitFlyMode(PlayerObject*) = 0x7dcf0;
    void exitRobotMode(PlayerObject*) = 0x7de20;
    void exitRollMode(PlayerObject*) = 0x7de60;
    void exitSpiderMode(PlayerObject*) = 0x7de40;
    void flipFinished() = 0x7e150;
    virtual void flipGravity(PlayerObject*, bool, bool) = 0x7cd10;
    void flipObjects() = 0x76130;
    void fullReset() = 0x7f8e0;
    void getLastCheckpoint() = 0x7f840;
    void getMaxPortalY() = 0x7b4e0;
    void getMinPortalY() = 0x7b550;
    void getObjectsState() = 0x7e9d0;
    void getOtherPlayer(PlayerObject*) = 0x7dcc0;
    void getParticleKey(int, char const*, int, cocos2d::tCCPositionType) = 0x764d0;
    void getParticleKey2(std::string) = 0x767b0;
    void getRelativeMod(cocos2d::CCPoint, float, float, float) = 0x7c2a0;
    void getTempMilliTime() = 0x778e0;
    void gravityEffectFinished() = 0x7cec0;
    void hasItem(int) = 0x7cee0;
    void hasUniqueCoin(GameObject*) = 0x77510;
    void incrementJumps() = 0x7ff40;
    bool init(GJGameLevel*) = 0x6b5f0;
    void isFlipping() = 0x76100;
    void levelComplete() = 0x72b80;
    void lightningFlash(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, int, bool, float) = 0x75cc0;
    void lightningFlash(cocos2d::CCPoint, cocos2d::_ccColor3B) = 0x75bf0;
    void loadDefaultColors() = 0x6ef30;
    void loadFromCheckpoint(CheckpointObject*) = 0x7f000;
    void loadLastCheckpoint() = 0x7efc0;
    void loadSavedObjectsState(std::string) = 0x7f3d0;
    void markCheckpoint() = 0x7ef60;
    void moveCameraToPos(cocos2d::CCPoint) = 0x7c980;
    virtual void onEnterTransitionDidFinish() = 0x806e0;
    virtual void onExit() = 0x80710;
    void onQuit() = 0x72710;
    void optimizeColorGroups() = 0x6dad0;
    void optimizeOpacityGroups() = 0x6dc20;
    void optimizeSaveRequiredGroups() = 0x6dd70;
    void pauseGame(bool) = 0x802d0;
    void pickupItem(GameObject*) = 0x7c1d0;
    void playAnimationCommand(int, int) = 0x75930;
    void playEndAnimationToPos(cocos2d::CCPoint) = 0x759a0;
    void playExitDualEffect(PlayerObject*) = 0x7d1d0;
    void playFlashEffect(float, int, float) = 0x75e50;
    void playGravityEffect(bool) = 0x7b5a0;
    void playSpeedParticle(float) = 0x77030;
    void playerWillSwitchMode(PlayerObject*, GameObject*) = 0x7b820;
    void prepareSpawnObjects() = 0x7fc00;
    void processItems() = 0x735c0;
    void processLoadedMoveActions() = 0x7a7c0;
    void recordAction(bool, PlayerObject*) = 0x7e190;
    void registerActiveObject(GameObject*) = 0x77620;
    void registerStateObject(GameObject*) = 0x777b0;
    void removeAllObjects() = 0x727b0;
    void removeFromGroupOld(GameObject*) = 0x77750;
    void removeLastCheckpoint() = 0x7f870;
    void removePlayer2() = 0x7d630;
    void resetLevel() = 0x71c50;
    void resume() = 0x80480;
    void resumeAndRestart() = 0x80400;
    void saveRecordAction(bool, PlayerObject*) = 0x78750;
    void scene(GJGameLevel*) = 0x6b500;
    void setupLevelStart(LevelSettingsObject*) = 0x6f560;
    void setupReplay(std::string) = 0x7e1e0;
    void shakeCamera(float, float, float) = 0x744a0;
    void shouldBlend(int) = 0x771b0;
    void showCompleteEffect() = 0x738e0;
    void showCompleteText() = 0x73be0;
    void showEndLayer() = 0x74450;
    void showHint() = 0x7deb0;
    void showNewBest(bool, int, int, bool, bool, bool) = 0x74580;
    void showRetryLayer() = 0x75ba0;
    void showTwoPlayerGuide() = 0x6df00;
    void sortGroups() = 0x6d9e0;
    void spawnCircle() = 0x73820;
    void spawnFirework() = 0x74200;
    void spawnParticle(char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint) = 0x76330;
    void spawnPlayer2() = 0x7d170;
    void startGame() = 0x726b0;
    void startMusic() = 0x72910;
    void startRecording() = 0x7fec0;
    void startRecordingDelayed() = 0x7fed0;
    void stopCameraShake() = 0x75900;
    void stopRecording() = 0x6d090;
    void storeCheckpoint(CheckpointObject*) = 0x7ef10;
    void switchToFlyMode(PlayerObject*, GameObject*, bool, int) = 0x7baf0;
    void switchToRobotMode(PlayerObject*, GameObject*, bool) = 0x7bc80;
    void switchToRollMode(PlayerObject*, GameObject*, bool) = 0x7bbe0;
    void switchToSpiderMode(PlayerObject*, GameObject*, bool) = 0x7bd20;
    void timeForXPos(float) = 0x7d120;
    void timeForXPos2(float, bool) = 0x293eb0;
    void toggleBGEffectVisibility(bool) = 0x7fe80;
    void toggleDualMode(GameObject*, bool, PlayerObject*, bool) = 0x7bf90;
    void toggleFlipped(bool, bool) = 0x7bdc0;
    void toggleGhostEffect(int) = 0x7fe40;
    void toggleGlitter(bool) = 0x70e00;
    void togglePracticeMode(bool) = 0x7f9e0;
    void toggleProgressbar() = 0x6eeb0;
    void tryStartRecord() = 0x7fe00;
    void unclaimParticle(char const*, cocos2d::CCParticleSystemQuad*) = 0x76e00;
    void unregisterActiveObject(GameObject*) = 0x77660;
    void unregisterStateObject(GameObject*) = 0x777f0;
    virtual void update(float) = 0x77900;
    void updateAttempts() = 0x7fcd0;
    void updateCamera(float) = 0x6e2b0;
    virtual void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*) = 0x7c7f0;
    void updateDualGround(PlayerObject*, int, bool) = 0x7caa0;
    void updateEffectPositions() = 0x7a6d0;
    void updateLevelColors() = 0x6f1e0;
    void updateMoveObjectsLastPosition() = 0x7a720;
    void updateProgressbar() = 0x6ed70;
    void updateReplay(float) = 0x78b60;
    void updateTimeMod(float, bool) = 0x786f0;
    virtual void updateTweenAction(float, char const*) = 0x7ffb0;
    void updateVisibility() = 0x6fb90;
    void vfDChk() = 0x7fcb0;
    virtual void visit() = 0x75ef0;
    void visitWithColorFlash() = 0x761f0;
    void willSwitchToMode(int, PlayerObject*) = 0x7b9e0;
    void xPosForTime(float) = 0x7d140;
    ~PlayLayer() = 0x6b090;

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
    static PlayerCheckpoint* create() = 0x7e8c0;
@end

@interface PlayerObject : GameObject
    void activateStreak() = 0x21aef0;
    void addAllParticles() = 0x2189b0;
    void addToTouchedRings(GameObject*) = 0x22b800;
    virtual void animationFinished(char const*) = 0x22e9d0;
    void boostPlayer(float) = 0x21d6b0;
    void bumpPlayer(float, int) = 0x22d890;
    void buttonDown(PlayerButton) = 0x22b7e0;
    void checkSnapJumpToObject(GameObject*) = 0x2217f0;
    void collidedWithObject(float, GameObject*) = 0x21d880;
    void collidedWithObject(float, GameObject*, cocos2d::CCRect) = 0x21f0b0;
    void collidedWithSlope(float, GameObject*, bool) = 0x21d8d0;
    void convertToClosestRotation(float) = 0x21c860;
    void copyAttributes(PlayerObject*) = 0x22dc70;
    static PlayerObject* create(int, int, cocos2d::CCLayer*) = 0x217260;
    void deactivateParticle() = 0x21a540;
    void deactivateStreak(bool) = 0x218b30;
    void fadeOutStreak2(float) = 0x225890;
    void flashPlayer(float, float, cocos2d::_ccColor3B, cocos2d::_ccColor3B) = 0x221c80;
    void flipGravity(bool, bool) = 0x21c090;
    void flipMod() = 0x21a4c0;
    void getActiveMode() = 0x22b950;
    void getModifiedSlopeYVel() = 0x21bff0;
    void getOldPosition(float) = 0x21a830;
    virtual void getOrientedBox() = 0x22dee0;
    virtual void getRealPosition() = 0x22d5f0;
    void getSecondColor() = 0x22cee0;
    void gravityDown() = 0x22e930;
    void gravityUp() = 0x22e900;
    void hardFlipGravity() = 0x22b860;
    void hitGround(bool) = 0x220a30;
    void incrementJumps() = 0x21c050;
    bool init(int, int, cocos2d::CCLayer*) = 0x2172e0;
    void isBoostValid(float) = 0x21d650;
    void isFlying() = 0x21a4e0;
    void isSafeFlip(float) = 0x2209f0;
    void isSafeMode(float) = 0x2209b0;
    void isSafeSpiderFlip(float) = 0x221be0;
    void levelFlipFinished() = 0x21b060;
    void levelFlipping() = 0x21a510;
    void levelWillFlip() = 0x21b020;
    void loadFromCheckpoint(PlayerCheckpoint*) = 0x22e420;
    void lockPlayer() = 0x22d680;
    void logValues() = 0x221220;
    void modeDidChange() = 0x22bfd0;
    void placeStreakPoint() = 0x21af90;
    void playBurstEffect() = 0x21c780;
    void playDeathEffect() = 0x225930;
    void playDynamicSpiderRun() = 0x222ec0;
    void playerDestroyed(bool) = 0x2256d0;
    void playerIsFalling() = 0x21c730;
    void playerTeleported() = 0x22b840;
    void playingEndEffect() = 0x22d7e0;
    void postCollision(float) = 0x21cd10;
    void preCollision() = 0x21ccc0;
    void preSlopeCollision(float, GameObject*) = 0x21ec80;
    void propellPlayer(float) = 0x22d8e0;
    void pushButton(PlayerButton) = 0x22aa00;
    void pushDown() = 0x22dbd0;
    void pushPlayer(float) = 0x22dbb0;
    void releaseButton(PlayerButton) = 0x22b6f0;
    void removeAllParticles() = 0x218ac0;
    void removePendingCheckpoint() = 0x2237b0;
    void resetAllParticles() = 0x21adb0;
    void resetCollisionLog() = 0x21cc20;
    virtual void resetObject() = 0x223170;
    void resetPlayerIcon() = 0x22be00;
    void resetStateVariables() = 0x223760;
    void resetStreak() = 0x21ae10;
    void ringJump(GameObject*) = 0x22abf0;
    void runBallRotation(float) = 0x21ca10;
    void runBallRotation2() = 0x21cb10;
    void runNormalRotation() = 0x21c960;
    void runRotateAction(bool) = 0x21c570;
    void saveToCheckpoint(PlayerCheckpoint*) = 0x22e2f0;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x22cdf0;
    virtual void setFlipX(bool) = 0x22e720;
    virtual void setFlipY(bool) = 0x22e7b0;
    virtual void setOpacity(unsigned char) = 0x22d400;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x22c8b0;
    virtual void setRotation(float) = 0x22e6e0;
    virtual void setScale(float) = 0x22e870;
    virtual void setScaleX(float) = 0x22e7f0;
    virtual void setScaleY(float) = 0x22e830;
    void setSecondColor(cocos2d::_ccColor3B const&) = 0x219610;
    virtual void setVisible(bool) = 0x22e8b0;
    void setupStreak() = 0x218720;
    void spawnCircle() = 0x225480;
    void spawnCircle2() = 0x2252a0;
    void spawnDualCircle() = 0x2255c0;
    void spawnFromPlayer(PlayerObject*) = 0x22dde0;
    void spawnPortalCircle(cocos2d::_ccColor3B, float) = 0x225350;
    void spawnScaleCircle() = 0x2251b0;
    void specialGroundHit() = 0x22dbf0;
    void speedDown() = 0x22e970;
    void speedUp() = 0x22e950;
    void spiderTestJump(bool) = 0x21b160;
    void startDashing(GameObject*) = 0x221d70;
    void stopBurstEffect() = 0x22c680;
    void stopDashing() = 0x222990;
    void stopRotation(bool) = 0x21c830;
    void storeCollision(bool, int) = 0x21cc60;
    void switchedToMode(GameObjectType) = 0x22b9a0;
    void testForMoving(float, GameObject*) = 0x21eb70;
    void toggleBirdMode(bool) = 0x224070;
    void toggleDartMode(bool) = 0x2243f0;
    void toggleFlyMode(bool) = 0x223820;
    void toggleGhostEffect(GhostType) = 0x225000;
    void togglePlayerScale(bool) = 0x224bd0;
    void toggleRobotMode(bool) = 0x223c70;
    void toggleRollMode(bool) = 0x223b20;
    void toggleSpiderMode(bool) = 0x224830;
    void toggleVisibility(bool) = 0x21abf0;
    void touchedObject(GameObject*) = 0x22e660;
    void tryPlaceCheckpoint() = 0x21a950;
    virtual void update(float) = 0x218bf0;
    void updateCheckpointMode(bool) = 0x218980;
    void updateCheckpointTest() = 0x21a890;
    void updateCollide(bool, int) = 0x220f10;
    void updateCollideBottom(float, int) = 0x221790;
    void updateCollideTop(float, int) = 0x221c20;
    void updateDashAnimation() = 0x21a570;
    void updateDashArt() = 0x222520;
    void updateGlowColor() = 0x22cf10;
    void updateJump(float) = 0x219680;
    void updateJumpVariables() = 0x21a740;
    void updatePlayerBirdFrame(int) = 0x22bfe0;
    void updatePlayerDartFrame(int) = 0x22c260;
    void updatePlayerFrame(int) = 0x22c470;
    void updatePlayerGlow() = 0x22bc50;
    void updatePlayerRobotFrame(int) = 0x22d620;
    void updatePlayerRollFrame(int) = 0x22c6a0;
    void updatePlayerScale() = 0x22b8b0;
    void updatePlayerShipFrame(int) = 0x22ba40;
    void updatePlayerSpiderFrame(int) = 0x22d650;
    void updatePlayerSpriteExtra(std::string) = 0x218440;
    void updateRobotAnimationSpeed() = 0x22df40;
    void updateRotation(float) = 0x2214b0;
    void updateRotation(float, float) = 0x221230;
    void updateShipRotation(float) = 0x221310;
    void updateShipSpriteExtra(std::string) = 0x218510;
    void updateSlopeRotation(float) = 0x221030;
    void updateSlopeYVelocity(float) = 0x22e920;
    void updateSpecial(float) = 0x21a790;
    void updateStateVariables() = 0x21a770;
    void updateTimeMod(float) = 0x2185e0;
    void usingWallLimitedMode() = 0x22df00;
    void yStartDown() = 0x22e9b0;
    void yStartUp() = 0x22e990;
    ~PlayerObject() = 0x217100;

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
    static PulseEffectAction* createFromString(std::string) = 0x179e90;
    void getSaveString() = 0x17a850;
    int m_group = 0x130;
@end

@interface RetryLevelLayer
    static RetryLevelLayer* create() = 0x28dd60;
@end

@interface SetGroupIDLayer
    void onNextGroupID1(cocos2d::CCObject*) = 0x1967a0;
    void textChanged(CCTextInputNode*) = 0x197af0;
    void updateGroupIDLabel() = 0x197260;
    ~SetGroupIDLayer() = 0x194410;
@end

@interface SetIDLayer
    static SetIDLayer* create(GameObject*) = 0x168f20;
@end

@interface SetIDPopup
@end

@interface SetItemIDLayer
    static SetItemIDLayer* create(EffectGameObject*, cocos2d::CCArray*) = 0x5a830;
@end

@interface SetTargetIDLayer
    static SetTargetIDLayer* create(EffectGameObject*, cocos2d::CCArray*, std::string) = 0x159d20;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x15aed0;
    void textChanged(CCTextInputNode*) = 0x15b6c0;
    void updateTargetID() = 0x15b4a0;
@end

@interface SetupAnimationPopup : FLAlertLayer
    static SetupAnimationPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x208b70;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x209fc0;
    void textChanged(CCTextInputNode*) = 0x20ab30;
    void updateTargetID() = 0x20a910;
@end

@interface SetupCollisionTriggerPopup : FLAlertLayer
    static SetupCollisionTriggerPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x1d6120;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x1d77b0;
    void textChanged(CCTextInputNode*) = 0x1d84d0;
    void updateTargetID() = 0x1d82b0;
@end

@interface SetupCountTriggerPopup : FLAlertLayer
    static SetupCountTriggerPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x15c6c0;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x15dd40;
    void textChanged(CCTextInputNode*) = 0x15e9a0;
    void updateTargetID() = 0x15e8a0;
@end

@interface SetupInstantCountPopup : FLAlertLayer
    static SetupInstantCountPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x352c10;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x354520;
    void textChanged(CCTextInputNode*) = 0x355270;
    void updateTargetID() = 0x355170;
@end

@interface SetupInteractObjectPopup : FLAlertLayer
    static SetupInteractObjectPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x29a400;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x29bbc0;
    void textChanged(CCTextInputNode*) = 0x29c2b0;
    void updateTargetID() = 0x29c120;
@end

@interface SetupObjectTogglePopup : FLAlertLayer
    static SetupObjectTogglePopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x1c0860;
    bool init(EffectGameObject*, cocos2d::CCArray*) = 0x1c0a40;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x1c1c40;
    void textChanged(CCTextInputNode*) = 0x1c2660;
    void updateTargetID() = 0x1c2440;
@end

@interface SetupOpacityPopup : FLAlertLayer
    static SetupOpacityPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x32b70;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x340a0;
    void textChanged(CCTextInputNode*) = 0x34a60;
    void updateTargetID() = 0x34760;
@end

@interface SetupPickupTriggerPopup : FLAlertLayer
    static SetupPickupTriggerPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x35e70;
    void onItemIDArrow(cocos2d::CCObject*) = 0x37100;
    void onNextItemID(cocos2d::CCObject*) = 0x37260;
    void textChanged(CCTextInputNode*) = 0x37ca0;
    void updateItemID() = 0x37ab0;
@end

@interface SetupShakePopup : FLAlertLayer
    static SetupShakePopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x3adc00;
@end

@interface SetupSpawnPopup : FLAlertLayer
    static SetupSpawnPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x139790;
    void createToggleButton(std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*) = 0x13b0e0;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x13ad80;
    void textChanged(CCTextInputNode*) = 0x13b990;
    void updateTargetID() = 0x13b770;

    EffectGameObject* object = 0x258;
    CCTextInputNode* numInput = 0x290;
@end

@interface SetupTouchTogglePopup : FLAlertLayer
    static SetupTouchTogglePopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x1576a0;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x158b60;
    void textChanged(CCTextInputNode*) = 0x1596a0;
    void updateTargetID() = 0x159480;
@end

@interface SimplePlayer
    static SimplePlayer* create(int) = 0x1b6140;
    void setSecondColor(cocos2d::_ccColor3B const&) = 0x1bace0;
    void updateColors() = 0x1ba1f0;
    void updatePlayerFrame(int, IconType) = 0x1b62f0;
@end

@interface Slider : cocos2d::CCLayer
    static Slider* create(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float) = 0x18dd80;
    static Slider* create(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, float) = 0x18dc40;
    void getValue() = 0x18e0c0;
    void setBarVisibility(bool) = 0x18e280;
    void setValue(float) = 0x18e170;
@end

@interface SliderThumb
    void getValue() = 0x18ce80;
@end

@interface SpawnTriggerAction : cocos2d::CCNode
    static SpawnTriggerAction* createFromString(std::string) = 0x17bf50;
    bool m_timerEnded;
    float m_delay;
    float m_timer;
    int m_group;
    int m_uuid;
@end

@interface SpeedObject
    static SpeedObject* create(GameObject*, int, float) = 0x77450;
    bool init(GameObject*, int, float) = 0x77400;
@end

@interface TableViewDelegate
    void TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) = 0x120480;
    void didEndTweenToIndexPath(CCIndexPath&, TableView*) = 0x120470;
    void willTweenToIndexPath(CCIndexPath&, TableViewCell*, TableView*) = 0x120460;
@end

@interface TeleportPortalObject
    static TeleportPortalObject* create(char const*) = 0xdaa50;
    void getTeleportXOff(cocos2d::CCNode*) = 0xdac20;
@end

@interface TextArea : ButtonSprite
    static TextArea* create(std::string, char const*, float, float, cocos2d::CCPoint, float, bool) = 0x19eb40;
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
    static ToggleTriggerAction* createFromString(std::string) = 0x1765e0;
@end

@interface GJCommentListLayer : cocos2d::CCLayerColor
    static GJCommentListLayer* create(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool) = 0x147d00;
@end

@interface TopArtistsLayer : FLAlertLayer
    static TopArtistsLayer* create() = 0x192a90;
    void setupLeaderboard(cocos2d::CCArray*) = 0x193420;
    virtual bool init() = 0x192c30;
    void loadPage(int) = 0x193b60;
    void setupPageInfo(std::string, char const*) = 0x193730;

    cocos2d::CCNode* m_unknown = 0x220;
    GJCommentListLayer* m_commentLayer = 0x260;
@end

@interface TouchToggleAction
    static TouchToggleAction* createFromString(std::string) = 0x177e10;
@end

@interface UILayer
    static UILayer* create() = 0x27fd10;
    void disableMenu() = 0x280960;
    void enableMenu() = 0x280940;
    void pCommand(cocos2d::CCNode*) = 0x280830;
    void toggleCheckpointsMenu(bool) = 0x280430;
@end

@interface UndoCommand
@end

@interface UndoObject
    static UndoObject* create(GameObject*, UndoCommand) = 0x94ea0;
    static UndoObject* createWithArray(cocos2d::CCArray*, UndoCommand) = 0x96ee0;
    ~UndoObject() = 0xa2f70;
@end

@interface cocos2d::CCActionTween
    static cocos2d::CCActionTween* create(float, char const*, float, float) = 0x447590;
@end

@interface cocos2d::CCAnimate
    static cocos2d::CCAnimate* create(cocos2d::CCAnimation*) = 0x1f8fc0;
@end

@interface cocos2d::CCAnimation
    void createWithSpriteFrames(cocos2d::CCArray*, float) = 0x140df0;
@end

@interface cocos2d::CCApplication
    void getCurrentLanguage() = 0x1a3f40;
    void getTargetPlatform() = 0x1a3f20;
    void openURL(char const*) = 0x1a4550;
    void setAnimationInterval(double) = 0x1a3ee0;
@end

@interface cocos2d::CCApplicationProtocol
    void gameDidSave() = 0x1a45f0;
@end

@interface cocos2d::CCArray
    void addObject(cocos2d::CCObject*) = 0x419f90;
    void addObjectNew(cocos2d::CCObject*) = 0x41a450;
    void addObjectsFromArray(cocos2d::CCArray*) = 0x41a2d0;
    void containsObject(cocos2d::CCObject*) = 0x41a3e0;
    void count() = 0x41a2f0;
    static cocos2d::CCArray* create() = 0x419cb0;
    static cocos2d::CCArray* create(cocos2d::CCObject*, ...) = 0x419fc0;
    void createWithObject(cocos2d::CCObject*) = 0x419d50;
    void fastRemoveObject(cocos2d::CCObject*) = 0x41a520;
    void fastRemoveObjectAtIndex(unsigned int) = 0x41a500;
    void fastRemoveObjectAtIndexNew(unsigned int) = 0x41a510;
    void lastObject() = 0x41a360;
    void objectAtIndex(unsigned int) = 0x41a340;
    void removeAllObjects() = 0x41a4f0;
    void removeLastObject(bool) = 0x41a470;
    void removeObject(cocos2d::CCObject*, bool) = 0x41a490;
    void removeObjectAtIndex(unsigned int, bool) = 0x41a4b0;
    void stringAtIndex(unsigned int) = 0x41a320;
@end

@interface cocos2d::CCBezierTo
    static cocos2d::CCBezierTo* create(float, cocos2d::_ccBezierConfig const&) = 0x1f6c10;
@end

@interface cocos2d::CCCallFunc
    static cocos2d::CCCallFunc* create(int) = 0x454d90;
@end

@interface cocos2d::CCClippingNode
    static cocos2d::CCClippingNode* create() = 0x4192a0;
    static cocos2d::CCClippingNode* create(cocos2d::CCNode*) = 0x419330;
    void getAlphaThreshold() = 0x419a10;
    void getStencil() = 0x4199c0;
    void isInverted() = 0x419a30;
    void onEnter() = 0x419470;
    void onEnterTransitionDidFinish() = 0x4194a0;
    void onExit() = 0x419500;
    void onExitTransitionDidStart() = 0x4194d0;
    void setAlphaThreshold(float) = 0x419a20;
    void setInverted(bool) = 0x419a40;
    void setStencil(cocos2d::CCNode*) = 0x4199d0;
    void visit() = 0x419530;
@end

@interface cocos2d::CCCopying
    void copyWithZone(cocos2d::CCZone*) = 0x250c90;
@end

@interface cocos2d::CCDelayTime
    static cocos2d::CCDelayTime* create(float) = 0x1f4380;
@end

@interface cocos2d::CCDictionary
    void allKeys() = 0x190450;
    void count() = 0x190430;
    static cocos2d::CCDictionary* create() = 0x192650;
    void objectForKey(long) = 0x190bb0;
    void objectForKey(std::string const&) = 0x190870;
    void removeAllObjects() = 0x190220;
    void removeObjectForKey(long) = 0x1921d0;
    void setObject(cocos2d::CCObject*, long) = 0x191790;
    void setObject(cocos2d::CCObject*, std::string const&) = 0x190dc0;
    void valueForKey(long) = 0x190cf0;
    void valueForKey(std::string const&) = 0x1907a0;
@end

@interface cocos2d::CCDirector
    void getScreenBottom() = 0x24b210;
    void getScreenLeft() = 0x24b220;
    void getScreenRight() = 0x24b230;
    void getScreenScaleFactorH() = 0x24b1e0;
    void getScreenScaleFactorW() = 0x24b1f0;
    void getScreenTop() = 0x24b200;
    void getTouchDispatcher() = 0x24afa0;
    void getWinSize() = 0x24a0f0;
    void pushScene(cocos2d::CCScene*) = 0x24a620;
    void replaceScene(cocos2d::CCScene*) = 0x24a6d0;
    void resetSmoothFixCounter() = 0x249bc0;
    static void sharedDirector() = 0x248cb0;
    void calculateDeltaTime() = 0x2497a0;
    void calculateMPF() = 0x19eac0;
    void convertToGL(cocos2d::CCPoint const&) = 0x24a210;
    void drawScene() = 0x249690;
    void setNextScene() = 0x2498d0;
    void showStats() = 0x2499e0;
    void updateContentScale(cocos2d::TextureQuality) = 0x249ff0;
@end

@interface cocos2d::CCDrawNode
    void clear() = 0x379e80;
    static cocos2d::CCDrawNode* create() = 0x378d00;
    void drawPolygon(cocos2d::CCPoint*, unsigned int, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&) = 0x3797f0;
    void drawSegment(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&) = 0x3792d0;
    void getBlendFunc() = 0x379ea0;
    bool init() = 0x378e00;
    void setBlendFunc(cocos2d::_ccBlendFunc const&) = 0x379eb0;
@end

@interface cocos2d::CCEaseElasticOut
    static cocos2d::CCEaseElasticOut* create(cocos2d::CCActionInterval*, float) = 0x2a3080;
@end

@interface cocos2d::CCEaseIn
    static cocos2d::CCEaseIn* create(cocos2d::CCActionInterval*, float) = 0x2a1960;
@end

@interface cocos2d::CCEaseInOut
    static cocos2d::CCEaseInOut* create(cocos2d::CCActionInterval*, float) = 0x2a1d80;
@end

@interface cocos2d::CCEaseOut
    static cocos2d::CCEaseOut* create(cocos2d::CCActionInterval*, float) = 0x2a1b70;
@end

@interface cocos2d::CCFadeOut
    static cocos2d::CCFadeOut* create(float) = 0x1f7d80;
@end

@interface cocos2d::CCFadeTo
    static cocos2d::CCFadeTo* create(float, unsigned char) = 0x1f7ff0;
@end

@interface cocos2d::CCHide
    static cocos2d::CCHide* create() = 0x4543e0;
@end

@interface cocos2d::CCImage
    CCImage() = 0x24fa00;
    void initWithImageData(void*, int, cocos2d::CCImage::EImageFormat, int, int, int) = 0x24fcb0;
@end

@interface cocos2d::CCIMEDelegate
    CCIMEDelegate() = 0x277310;
    void attachWithIME() = 0x2776a0;
    void canAttachWithIME() = 0x5ef30;
    void canDetachWithIME() = 0x5ef50;
    void deleteBackward() = 0x5ef80;
    void detachWithIME() = 0x277880;
    void didAttachWithIME() = 0x5ef40;
    void didDetachWithIME() = 0x5ef60;
    void getContentText() = 0x5ef90;
    void insertText(char const*, int) = 0x5ef70;
    void keyboardDidHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5efb0;
    void keyboardDidShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5efa0;
    ~CCIMEDelegate() = 0x277500;
@end

@interface cocos2d::CCKeyboardDelegate
    void keyUp(cocos2d::enumKeyCodes) = 0x61a0;
@end

@interface cocos2d::CCKeyboardDispatcher // :trol:
    void dispatchKeyboardMSG(cocos2d::enumKeyCodes, bool) = 0xe8190, 9193848;
@end

@interface cocos2d::CCLabelBMFont
    static cocos2d::CCLabelBMFont* create(char const*, char const*) = 0x347660;
    void limitLabelWidth(float, float, float) = 0x34a6e0;
    void setScale(float) = 0x34a5d0;
    void setString(char const*, bool) = 0x3489e0;
    void setAnchorPoint(cocos2d::CCPoint const&) = 0x349440;
@end

@interface cocos2d::CCLabelTTF
    void updateTexture() = 0x1fadc0;
@end

@interface cocos2d::CCLayer
    CCLayer() = 0x2725b0;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2734d0, 288;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x273650, 288;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2735d0, 288;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x273550, 288;
    void ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x2736d0, 288;
    void ccTouchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x273850, 288;
    void ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x2737d0, 288;
    void ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x273750, 288;
    static cocos2d::CCLayer* create() = 0x272a00;
    void didAccelerate(cocos2d::CCAcceleration*) = 0x272ea0, 296;
    void getTouchMode() = 0x272e10;
    void getTouchPriority() = 0x272e00;
    bool init() = 0x2729a0;
    void isAccelerometerEnabled() = 0x272e20;
    void isKeyboardEnabled() = 0x273010;
    void isKeypadEnabled() = 0x272f70;
    void isMouseEnabled() = 0x273090;
    void isTouchEnabled() = 0x272ce0;
    void keyBackClicked() = 0x273160, 304;
    void keyDown(cocos2d::enumKeyCodes) = 0x273280, 312;
    void keyMenuClicked() = 0x273200, 304;
    void onEnter() = 0x273300;
    void onEnterTransitionDidFinish() = 0x273490;
    void onExit() = 0x2733c0;
    void registerScriptTouchHandler(int, bool, int, bool) = 0x272bd0;
    void registerWithTouchDispatcher() = 0x272b40;
    void setAccelerometerEnabled(bool) = 0x272e30;
    void setAccelerometerInterval(double) = 0x272e70;
    void setKeyboardEnabled(bool) = 0x273020;
    void setKeypadEnabled(bool) = 0x272f80;
    void setMouseEnabled(bool) = 0x2730a0;
    void setTouchEnabled(bool) = 0x272cf0;
    void setTouchMode(cocos2d::ccTouchesMode) = 0x272d60;
    void setTouchPriority(int) = 0x272db0;
    void unregisterScriptTouchHandler() = 0x272c30;
    ~CCLayer() = 0x2727b0;
@end

@interface cocos2d::CCLayerColor
    CCLayerColor() = 0x274320;
    static cocos2d::CCLayerColor* create(cocos2d::_ccColor4B const&, float, float) = 0x2745e0;
    void draw() = 0x274b50;
    void getBlendFunc() = 0x274480, 392;
    bool init() = 0x274800;
    void initWithColor(cocos2d::_ccColor4B const&) = 0x2749a0;
    void initWithColor(cocos2d::_ccColor4B const&, float, float) = 0x274850;
    void setBlendFunc(cocos2d::_ccBlendFunc) = 0x2744a0, 392;
    void setColor(cocos2d::_ccColor3B const&) = 0x274c20, 368;
    void setContentSize(cocos2d::CCSize const&) = 0x2749f0;
    void setOpacity(unsigned char) = 0x274db0, 368;
    void updateColor() = 0x274ae0;
    ~CCLayerColor() = 0x2743d0;
@end

@interface cocos2d::CCLayerRGBA
    CCLayerRGBA() = 0x2738d0;
    void getColor() = 0x273d60, 368;
    void getDisplayedColor() = 0x273d80, 368;
    void getDisplayedOpacity() = 0x273c00, 368;
    void getOpacity() = 0x273be0, 368;
    void isCascadeColorEnabled() = 0x274230, 368;
    void isCascadeOpacityEnabled() = 0x2741f0, 368;
    void isOpacityModifyRGB() = 0x6190;
    void setCascadeColorEnabled(bool) = 0x274250, 368;
    void setCascadeOpacityEnabled(bool) = 0x274210, 368;
    void setOpacityModifyRGB(bool) = 0x6180;
    void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x2740b0, 368;
    void updateDisplayedOpacity(unsigned char) = 0x273f20, 368;
@end

@interface cocos2d::CCMenu
    void alignItemsHorizontallyWithPadding(float) = 0x4393e0;
    void alignItemsVerticallyWithPadding(float) = 0x439190;
    static cocos2d::CCMenu* create() = 0x438720;
    void createWithArray(cocos2d::CCArray*) = 0x4387e0;
    void createWithItem(cocos2d::CCMenuItem*) = 0x438b80;
@end

@interface cocos2d::CCMenuItemSprite
    static cocos2d::CCMenuItemSprite* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*) = 0x1fd120;
    static cocos2d::CCMenuItemSprite* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x1fd140;
    static cocos2d::CCMenuItemSprite* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x1fd2d0;
@end

@interface cocos2d::CCMotionStreak
    void reset() = 0x2ee190;
    void resumeStroke() = 0x2edb30;
    void stopStroke() = 0x2edb20;
@end

@interface cocos2d::CCMouseDelegate
    void rightKeyDown() = 0x61b0;
    void rightKeyUp() = 0x61c0;
    void scrollWheel(float, float) = 0x61d0;
@end

@interface cocos2d::CCMoveBy
    static cocos2d::CCMoveBy* create(float, cocos2d::CCPoint const&) = 0x1f50e0;
@end

@interface cocos2d::CCMoveTo
    static cocos2d::CCMoveTo* create(float, cocos2d::CCPoint const&) = 0x1f54d0;
@end

@interface cocos2d::CCNode
    CCNode() = 0x122550;
    void _setZOrder(int) = 0x122990;
    void addChild(cocos2d::CCNode*) = 0x1233d0;
    void addChild(cocos2d::CCNode*, int) = 0x1233b0;
    void addChild(cocos2d::CCNode*, int, int) = 0x1232a0;
    void addComponent(cocos2d::CCComponent*) = 0x124a40;
    void cleanup() = 0x123100;
    void convertToNodeSpace(cocos2d::CCPoint const&) = 0x124750;
    void convertToWorldSpace(cocos2d::CCPoint const&) = 0x124790;
    static cocos2d::CCNode* create() = 0x1230a0;
    void draw() = 0x123840;
    void getActionByTag(int) = 0x123ee0;
    void getActionManager() = 0x123e50;
    void getAnchorPoint() = 0x122d80;
    void getAnchorPointInPoints() = 0x122d70;
    void getCamera() = 0x122cb0;
    void getChildByTag(int) = 0x123220;
    void getChildren() = 0x122c80;
    void getChildrenCount() = 0x122c90;
    void getContentSize() = 0x122e00;
    void getGLServerState() = 0x122f90;
    void getGrid() = 0x122d00;
    void getOrderOfArrival() = 0x122f50;
    void getParent() = 0x122ed0;
    void getPosition() = 0x122b60;
    void getPosition(float*, float*) = 0x122b90;
    void getPositionX() = 0x122be0;
    void getPositionY() = 0x122bf0;
    void getRotation() = 0x122a00;
    void getRotationX() = 0x122a50;
    void getRotationY() = 0x122a80;
    void getScale() = 0x122ab0;
    void getScaleX() = 0x122b00;
    void getScaleY() = 0x122b30;
    void getScaledContentSize() = 0x122e10;
    void getScheduler() = 0x123f70;
    void getShaderProgram() = 0x122f70;
    void getSkewX() = 0x122920;
    void getSkewY() = 0x122950;
    void getUserData() = 0x122f30;
    void getUserObject() = 0x122f80;
    void getVertexZ() = 0x1229e0;
    void getZOrder() = 0x122980;
    void ignoreAnchorPointForPosition(bool) = 0x122f00;
    bool init() = 0x122910;
    void isIgnoreAnchorPointForPosition() = 0x122ef0;
    void isRunning() = 0x122ec0;
    void isVisible() = 0x122d50;
    void nodeToParentTransform() = 0x124210;
    void nodeToWorldTransform() = 0x124670;
    void onEnter() = 0x123a90;
    void onEnterTransitionDidFinish() = 0x123b90;
    void onExit() = 0x123ca0;
    void onExitTransitionDidStart() = 0x123c00;
    void parentToNodeTransform() = 0x1245d0;
    void pauseSchedulerAndActions() = 0x123d60;
    void registerScriptHandler(int) = 0x123d90;
    void removeAllChildren() = 0x123600;
    void removeAllChildrenWithCleanup(bool) = 0x123620;
    void removeAllComponents() = 0x124aa0;
    void removeChild(cocos2d::CCNode*) = 0x123460;
    void removeChild(cocos2d::CCNode*, bool) = 0x123480;
    void removeChildByTag(int) = 0x1235a0;
    void removeChildByTag(int, bool) = 0x1235c0;
    void removeComponent(char const*) = 0x124a60;
    void removeComponent(cocos2d::CCComponent*) = 0x124a80;
    void removeFromParent() = 0x1233f0;
    void removeFromParentAndCleanup(bool) = 0x123410;
    void removeMeAndCleanup() = 0x123440;
    void reorderChild(cocos2d::CCNode*, int) = 0x123760;
    void resumeSchedulerAndActions() = 0x123b60;
    void runAction(cocos2d::CCAction*) = 0x123e60;
    void schedule(cocos2d::SEL_SCHEDULE) = 0x1240b0;
    void schedule(cocos2d::SEL_SCHEDULE, float) = 0x124120;
    void scheduleUpdate() = 0x123f80;
    void setActionManager(cocos2d::CCActionManager*) = 0x123e00;
    void setAnchorPoint(cocos2d::CCPoint const&) = 0x122d90;
    void setContentSize(cocos2d::CCSize const&) = 0x122e50;
    void setGLServerState(cocos2d::ccGLServerState) = 0x122fa0;
    void setGrid(cocos2d::CCGridBase*) = 0x122d10;
    void setOrderOfArrival(unsigned int) = 0x122f60;
    void setParent(cocos2d::CCNode*) = 0x122ee0;
    void setPosition(cocos2d::CCPoint const&) = 0x122b70;
    void setPosition(float, float) = 0x122ba0;
    void setPositionX(float) = 0x122c00;
    void setPositionY(float) = 0x122c40;
    void setRotation(float) = 0x122a10;
    void setRotationX(float) = 0x122a60;
    void setRotationY(float) = 0x122a90;
    void setScale(float) = 0x122ac0;
    void setScale(float, float) = 0x122ae0;
    void setScaleX(float) = 0x122b10;
    void setScaleY(float) = 0x122b40;
    void setScheduler(cocos2d::CCScheduler*) = 0x123f20;
    void setShaderProgram(cocos2d::CCGLProgram*) = 0x122ff0;
    void setSkewX(float) = 0x122930;
    void setSkewY(float) = 0x122960;
    void setUserData(void*) = 0x122f40;
    void setUserObject(cocos2d::CCObject*) = 0x122fb0;
    void setVertexZ(float) = 0x1229f0;
    void setVisible(bool) = 0x122d60;
    void setZOrder(int) = 0x1229a0;
    void sortAllChildren() = 0x1237b0;
    void stopActionByTag(int) = 0x123ec0;
    void stopAllActions() = 0x123190;
    void unregisterScriptHandler() = 0x123dc0;
    void unschedule(cocos2d::SEL_SCHEDULE) = 0x124180;
    void unscheduleAllSelectors() = 0x1231b0;
    void unscheduleUpdate() = 0x124060;
    void update(float) = 0x1241a0;
    void updateTransform() = 0x1249d0;
    void updateTweenAction(float, char const*) = 0x1249c0;
    void visit() = 0x123850;
    void worldToNodeTransform() = 0x124710;
    ~CCNode() = 0x122750;
@end

@interface cocos2d::CCNodeRGBA
    CCNodeRGBA() = 0x124b30;
    void getColor() = 0x125020, 288;
    void getDisplayedColor() = 0x125040, 288;
    void getDisplayedOpacity() = 0x124cf0, 288;
    void getOpacity() = 0x124cd0, 288;
    void isCascadeColorEnabled() = 0x125320, 288;
    void isCascadeOpacityEnabled() = 0x124fe0, 288;
    void setCascadeColorEnabled(bool) = 0x125340, 288;
    void setCascadeOpacityEnabled(bool) = 0x125000, 288;
    ~CCNodeRGBA() = 0x124ba0;
@end

@interface cocos2d::CCObject
    CCObject() = 0x250ca0;
    void acceptVisitor(cocos2d::CCDataVisitor&) = 0x250f30;
    void autorelease() = 0x250ed0;
    void canEncode() = 0x250f90;
    void encodeWithCoder(DS_Dictionary*) = 0x250f70;
    void getTag() = 0x250f50;
    void isEqual(cocos2d::CCObject const*) = 0x250f20;
    void release() = 0x250ea0;
    void retain() = 0x250ec0;
    void setTag(int) = 0x250f60;
    void update(float) = 0x32660;
    ~CCObject() = 0x250d20;
@end

@interface cocos2d::CCParticleSystem
    void resetSystem() = 0x46bd50;
    void resumeSystem() = 0x46bd40;
    void stopSystem() = 0x46bd10;
@end

@interface cocos2d::CCParticleSystemQuad
    static cocos2d::CCParticleSystemQuad* create(char const*) = 0x36b000;
@end

@interface cocos2d::CCPoint
    CCPoint() = 0x137050;
    CCPoint(cocos2d::CCPoint const&) = 0x137090;
    CCPoint(float, float) = 0x137000;

    cocos2d::CCPoint operator*(float) = 0x137180;
    cocos2d::CCPoint operator+(cocos2d::CCPoint const&) = 0x1370f0;
    cocos2d::CCPoint operator-() = 0x137150;
    cocos2d::CCPoint operator-(cocos2d::CCPoint const&) = 0x137120;
    cocos2d::CCPoint operator/(float) = 0x1371a0;
    cocos2d::CCPoint operator=(cocos2d::CCPoint const&) = 0x1370c0;
    
    void equals(cocos2d::CCPoint const&) = 0x1371d0;
@end

@interface cocos2d::CCPoolManager
    void pop() = 0x214620;
    void sharedPoolManager() = 0x2142c0;
@end

@interface cocos2d::CCRect
    CCRect() = 0x137550;
    CCRect(cocos2d::CCRect const&) = 0x137630;
    CCRect(float, float, float, float) = 0x137020;

    cocos2d::CCRect operator=(cocos2d::CCRect const&) = 0x137670;

    void containsPoint(cocos2d::CCPoint const&) = 0x1377b0;
    void equals(cocos2d::CCRect const&) = 0x1376a0;
    void getMaxX() = 0x137710;
    void getMaxY() = 0x137760;
    void getMinX() = 0x137750;
    void getMinY() = 0x1377a0;
    void intersectsRect(cocos2d::CCRect const&) = 0x137800;
@end

@interface cocos2d::CCRenderTexture
    void begin() = 0x35ce10;
    static cocos2d::CCRenderTexture* create(int, int, cocos2d::CCTexture2DPixelFormat) = 0x35c720;
    void newCCImage(bool) = 0x35d7d0;
@end

@interface cocos2d::CCRepeatForever
    static cocos2d::CCRepeatForever* create(cocos2d::CCActionInterval*) = 0x1f3920;
@end

@interface cocos2d::CCRotateBy
    static cocos2d::CCRotateBy* create(float, float) = 0x1f4c50;
@end

@interface cocos2d::CCScaleTo
    static cocos2d::CCScaleTo* create(float, float) = 0x1f6ff0;
    static cocos2d::CCScaleTo* create(float, float, float) = 0x1f70f0;
@end

@interface cocos2d::CCScene
    static cocos2d::CCScene* create() = 0x13c140;
    void getHighestChildZ() = 0x13c200;
@end

@interface cocos2d::CCScheduler
    void scheduleSelector(cocos2d::SEL_SCHEDULE, cocos2d::CCObject*, float, unsigned int, float, bool) = 0x242b20;
    void scheduleUpdateForTarget(cocos2d::CCObject*, int, bool) = 0x2438d0;
    void unscheduleAllForTarget(cocos2d::CCObject*) = 0x243e40;
@end

@interface cocos2d::CCSequence
    static cocos2d::CCSequence* create(cocos2d::CCFiniteTimeAction*, ...) = 0x1f2860;
@end

@interface cocos2d::CCSize
    CCSize() = 0x1373c0;
    CCSize(cocos2d::CCSize const&) = 0x137400;
    CCSize(float, float) = 0x137010;

    cocos2d::CCSize operator/(float) = 0x1374e0;
    cocos2d::CCSize operator=(cocos2d::CCSize const&) = 0x137430;

    void equals(cocos2d::CCSize const&) = 0x137510;
@end

@interface cocos2d::CCSprite
    CCSprite() = 0x133300;
    void addChild(cocos2d::CCNode*) = 0x134190;
    void addChild(cocos2d::CCNode*, int) = 0x1341a0;
    void addChild(cocos2d::CCNode*, int, int) = 0x1341b0;
    static cocos2d::CCSprite* create() = 0x132df0;
    static cocos2d::CCSprite* create(char const*) = 0x132a80;
    void createWithSpriteFrame(cocos2d::CCSpriteFrame*) = 0x132cb0;
    void createWithSpriteFrameName(char const*) = 0x132dc0;
    void displayFrame() = 0x135760;
    void setChildColor(cocos2d::_ccColor3B const&) = 0x135160;
    bool init() = 0x132ef0;
    ~CCSprite() = 0x133430;
    void draw() = 0x134070;
    void getBatchNode() = 0x135910;
    void getBlendFunc() = 0x505a0;
    void getTexture() = 0x135c00, 312;
    void ignoreAnchorPointForPosition(bool) = 0x134b60;
    void initWithFile(char const*) = 0x133180;
    void initWithFile(char const*, cocos2d::CCRect const&) = 0x133210;
    void initWithSpriteFrameName(char const*) = 0x1332c0;
    void initWithSpriteFrame(cocos2d::CCSpriteFrame*) = 0x133270;
    void initWithTexture(cocos2d::CCTexture2D*) = 0x248690;
    void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&) = 0x1330f0;
    void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool) = 0x132f10;
    void isDirty() = 0x505b0;
    void isFrameDisplayed(cocos2d::CCSpriteFrame*) = 0x1356d0;
    void isOpacityModifyRGB() = 0x135350, 288;
    void refreshTextureRect() = 0x133520;
    void removeAllChildrenWithCleanup(bool) = 0x134340;
    void removeChild(cocos2d::CCNode*, bool) = 0x134300;
    void reorderChild(cocos2d::CCNode*, int) = 0x134270;
    void setAnchorPoint(cocos2d::CCPoint const&) = 0x134af0;
    void setBatchNode(cocos2d::CCSpriteBatchNode*) = 0x135920;
    void setBlendFunc(cocos2d::_ccBlendFunc) = 0x50590;
    void setChildOpacity(unsigned char) = 0x134f50;
    void setDirty(bool) = 0x505c0;
    void setDirtyRecursively(bool) = 0x1345b0;
    void setDisplayFrame(cocos2d::CCSpriteFrame*) = 0x135610;
    void setDisplayFrameWithAnimationName(char const*, int) = 0x135680;
    void setFlipY(bool) = 0x134c30;
    void setOpacityModifyRGB(bool) = 0x135200, 288;
    void setPosition(cocos2d::CCPoint const&) = 0x134650;
    void setReorderChildDirtyRecursively() = 0x134550;
    void setRotationX(float) = 0x134740;
    void setRotationY(float) = 0x1347b0;
    void setSkewX(float) = 0x134820;
    void setSkewY(float) = 0x134890;
    void setTexture(cocos2d::CCTexture2D*) = 0x135a90, 312;
    void setTextureCoords(cocos2d::CCRect const&) = 0x133910;
    void setTextureRect(cocos2d::CCRect const&) = 0x133560;
    void setTextureRect(cocos2d::CCRect const&, bool, cocos2d::CCSize const&) = 0x133580;
    void setVertexRect(cocos2d::CCRect const&) = 0x1338f0;
    void setVertexZ(float) = 0x134a80;
    void sortAllChildren() = 0x1343f0;
    void updateBlendFunc() = 0x135a20;
    void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x135370, 288;
    void updateDisplayedOpacity(unsigned char) = 0x1354c0, 288;
    void updateTransform() = 0x133b70;
    void createWithTexture(cocos2d::CCTexture2D*) = 0x132790;
    void setFlipX(bool) = 0x134be0;
    void setScaleX(float) = 0x134900;
    void setScaleY(float) = 0x134980;
@end

@interface cocos2d::CCSpriteBatchNode
    static cocos2d::CCSpriteBatchNode* create(char const*, unsigned int) = 0xbb540;
    static void createWithTexture(cocos2d::CCTexture2D*, unsigned int) = 0xbb310;
    void getUsedAtlasCapacity() = 0xbc6b0;
    void increaseAtlasCapacity(unsigned int) = 0xbc670;
@end

@interface cocos2d::CCSpriteFrameCache
    void addSpriteFramesWithFile(char const*) = 0x199a10;
    void sharedSpriteFrameCache() = 0x198970;
    void spriteFrameByName(char const*) = 0x19a7e0;
@end

@interface cocos2d::CCString
    CCString(std::string const&) = 0x44c310;
    void boolValue() = 0x44c810;
    static void createWithFormat(char const*, ...) = 0x44cab0;
    void doubleValue() = 0x44c7f0;
    void floatValue() = 0x44c7d0;
    void getCString() = 0x44c470;
    void intValue() = 0x44c780;
@end

@interface cocos2d::CCTextFieldDelegate
    void onDraw(cocos2d::CCTextFieldTTF*) = 0x5efd0;
    void onTextFieldDeleteBackward(cocos2d::CCTextFieldTTF*, char const*, int) = 0x5efc0;
@end

@interface cocos2d::CCTexture2D
    CCTexture2D() = 0x246280;
    void initWithImage(cocos2d::CCImage*) = 0x246940;
    void setTexParameters(cocos2d::_ccTexParams*) = 0x247980;
@end

@interface cocos2d::CCTextureCache
    void addImage(char const*, bool) = 0x358120;
    void getContentSize() = 0x246460;
    void getMaxS() = 0x2464e0;
    void getMaxT() = 0x246500;
    void getName() = 0x246450;
    void getPixelFormat() = 0x246420;
    void getPixelsHigh() = 0x246440;
    void getPixelsWide() = 0x246430;
    void getShaderProgram() = 0x246520;
    void initPremultipliedATextureWithImage(cocos2d::CCImage*, unsigned int, unsigned int) = 0x2469a0;
    void initWithData(void const*, cocos2d::CCTexture2DPixelFormat, unsigned int, unsigned int, cocos2d::CCSize const&) = 0x2465d0;
    void setAliasTexParameters() = 0x247a20;
    void setAntiAliasTexParameters() = 0x247a80;
    void setMaxS(float) = 0x2464f0;
    void setMaxT(float) = 0x246510;
    void setShaderProgram(cocos2d::CCGLProgram*) = 0x246530;
    static void sharedTextureCache() = 0x356e00;
@end

@interface cocos2d::CCTintTo
    static cocos2d::CCTintTo* create(float, unsigned char, unsigned char, unsigned char) = 0x1f82a0;
@end

@interface cocos2d::CCTouch
    void getDelta() = 0x38340;
    void getLocation() = 0x382b0;
    void getLocationInView() = 0x38250;
@end

@interface cocos2d::CCTouchDispatcher
    void decrementForcePrio(int) = 0x280f70;
    void incrementForcePrio(int) = 0x280f60;
@end

@interface cocos2d::CCTransitionFade
    static cocos2d::CCTransitionFade* create(float, cocos2d::CCScene*) = 0x8ea30;
@end

@interface cocos2d::ZipUtils
    void compressString(std::string, bool, int) = 0xe9a50;
    void decompressString(std::string, bool, int) = 0xea380;
@end

@interface cocos2d::extension::CCControlColourPicker
    void setColorValue(cocos2d::_ccColor3B const&) = 0x1aac10;
@end

@interface cocos2d::extension::CCControlUtils
    void HSVfromRGB(cocos2d::extension::RGBA) = 0x1e6750;
    void RGBfromHSV(cocos2d::extension::HSV) = 0x1e6850;
@end

@interface cocos2d::extension::CCScale9Sprite
    CCScale9Sprite() = 0x211330;
    static cocos2d::extension::CCScale9Sprite* create(char const*) = 0x2130d0;
    static cocos2d::extension::CCScale9Sprite* create(char const*, cocos2d::CCRect) = 0x212ef0;
    void setContentSize(cocos2d::CCSize const&) = 0x2127c0;
@end

@interface cocos2d::extension::CCScrollView
    CCScrollView() = 0x214800;
@end

@interface ColorSelectPopup : FLAlertLayer, ColorPickerDelegate, TextInputDelegate, GJSpecialColorSelectDelegate
    void colorValueChanged(cocos2d::_ccColor3B) = 0x423320;
    static ColorSelectPopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x41eb70;
    virtual bool init(EffectGameObject*, cocos2d::CCArray*, ColorAction*) = 0x41ee70;
    void onDefault(cocos2d::CCObject*) = 0x4220e0;
    void onMultiTrigger(cocos2d::CCObject*) = 0x422680;
    void onPlayerColor1(cocos2d::CCObject*) = 0x422500;
    void onPlayerColor2(cocos2d::CCObject*) = 0x4225c0;
    void onSpawnedByTrigger(cocos2d::CCObject*) = 0x4227f0;
    void onToggleHSVMode(cocos2d::CCObject*) = 0x4227b0;
    void onTouchTriggered(cocos2d::CCObject*) = 0x4228b0;
    virtual void show() = 0x423570;
    void sliderChanged(cocos2d::CCObject*) = 0x421ca0;
    void updateCopyColor() = 0x423b70;
    void updateCopyColorTextInputLabel() = 0x422ed0;
    void updateDurLabel() = 0x421eb0;
    void updateHSVMode() = 0x422e00;
    void updateOpacityLabel() = 0x422000;
    void updateTouchTriggered() = 0x423020;
    ~ColorSelectPopup() = 0x41e960;

    cocos2d::extension::CCControlColourPicker* m_colorPicker = 0x268;
    bool m_copyColor = 0x372;
    bool m_isColorTrigger = 0x2fd;
@end

@interface SetupPulsePopup : FLAlertLayer, ColorPickerDelegate, TextInputDelegate, GJSpecialColorSelectDelegate
    void colorValueChanged(cocos2d::_ccColor3B) = 0x1ec680;
    static SetupPulsePopup* create(EffectGameObject*, cocos2d::CCArray*) = 0x1e6d40;
    virtual bool init(EffectGameObject*, cocos2d::CCArray*) = 0x1e7010;
    void onSelectPulseMode(cocos2d::CCObject*) = 0x1eb020;
    void onSelectTargetMode(cocos2d::CCObject*) = 0x1eac30;
    void onUpdateCustomColor(cocos2d::CCObject*) = 0x1eaef0;
    virtual void textChanged(CCTextInputNode*) = 0x1ec960;
    void updateCopyColorTextInputLabel() = 0x1ebf20;
    void updateEditorLabel() = 0x1ec310;
    void updateFadeOutLabel(bool) = 0x1eba20;
    void updateTargetID() = 0x1ebbe0;
    void updateTextInputLabel() = 0x1eb8d0;
    ~SetupPulsePopup() = 0x1e6b40;

    cocos2d::extension::CCControlColourPicker* m_colorPicker = 0x268;
    cocos2d::CCSprite* m_currentColorSpr = 0x2d0;
    cocos2d::CCSprite* m_prevColorSpr = 0x2d8;
    int m_pulseMode = 0x38c;
    int m_targetMode = 0x390;
@end
