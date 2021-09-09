@interface ArtistCell
    virtual ~ArtistCell() = 0x11c6a0;
    virtual ~ArtistCell() = 0x11c6d0;
    virtual bool init() = 0x11c7c0;
    virtual void draw() = 0x11c980;
@end

@interface ButtonSprite : cocos2d::CCSprite
    static ButtonSprite* create(char const*) = 0x4fa10;
    static ButtonSprite* create(char const*, int, int, float, bool) = 0x4fa40;
    void updateBGImage(char const*) = 0x502d0;
    static ButtonSprite* create(char const*, float) = 0x4fa60;
    static ButtonSprite* create(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool) = 0x4fa90;
@end

@interface GJItemIcon
    virtual ~GJItemIcon() = 0x1bcd10;
    virtual ~GJItemIcon() = 0x1bcd20;
    virtual void setOpacity(unsigned char) = 0x1bd9d0;
@end

@interface GJUserCell
    virtual ~GJUserCell() = 0x11ddc0;
    virtual ~GJUserCell() = 0x11dfa0;
    virtual bool init() = 0x11e180;
    virtual void draw() = 0x11e790;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x11e860;
    virtual void uploadActionFinished(int, int) = 0x11eae0;
    virtual void uploadActionFailed(int, int) = 0x11ecb0;
    virtual void onClosePopup(UploadActionPopup*) = 0x11edb0;
@end

@interface CCSpritePlus : cocos2d::CCSprite
    virtual ~CCSpritePlus() = 0x248400;
    virtual ~CCSpritePlus() = 0x248470;
    virtual void setScaleX(float) = 0x248950;
    virtual void setScaleY(float) = 0x2489d0;
    virtual void setScale(float) = 0x248a50;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x2486b0;
    virtual void setRotation(float) = 0x248730;
    virtual bool initWithTexture(cocos2d::CCTexture2D*) = 0x248690;
    virtual bool initWithSpriteFrameName(char const*) = 0x248670;
    virtual void setFlipX(bool) = 0x2487b0;
    virtual void setFlipY(bool) = 0x248880;

    volatile inline CCSpritePlus* getFollowingSprite() {return m_followingSprite;}
    volatile inline void setFollowingSprite(CCSpritePlus* setter) {m_followingSprite = setter;}

    cocos2d::CCArray* m_followers;
    CCSpritePlus* m_followingSprite;
    bool m_hasFollower;
    bool m_propagateScaleChanges;
    bool m_propagateFlipChanges;
@end

@interface OBB2D : cocos2d::CCNode 
    void calculateWithCenter(cocos2d::CCPoint, float, float, float) = 0x35a9c0;
    static OBB2D* create(cocos2d::CCPoint, float, float, float) = 0x35a890;
    void getBoundingRect() = 0x35b2b0;
    void overlaps(OBB2D*) = 0x35b0a0;
    void overlaps1Way(OBB2D*) = 0x35b0d0;
@end

@interface GameObject : CCSpritePlus
    virtual ~GameObject() = 0x2f4ca0;
    virtual ~GameObject() = 0x2f4cb0;
    virtual void update(float) = 0x2fbb90;
    virtual void setScaleX(float) = 0x335b00;
    virtual void setScaleY(float) = 0x335b90;
    virtual void setScale(float) = 0x335c20;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x335850;
    virtual void setVisible(bool) = 0x336280;
    virtual void setRotation(float) = 0x335970;
    virtual void setOpacity(unsigned char) = 0x335f10;
    virtual bool initWithTexture(cocos2d::CCTexture2D*) = 0x2f56a0;
    virtual void setChildColor(cocos2d::_ccColor3B const&) = 0x341f20;
    virtual void setFlipX(bool) = 0x335a60;
    virtual void setFlipY(bool) = 0x335ab0;
    virtual void customSetup() = 0x2fbba0;
    virtual void setupCustomSprites() = 0x307f60;
    virtual void addMainSpriteToParent(bool) = 0x33a5b0;
    virtual void resetObject() = 0x2fa620;
    virtual void triggerObject(GJBaseGameLayer*) = 0x2fa8f0;
    virtual void activateObject() = 0x2faf60;
    virtual void deactivateObject(bool) = 0x2fb8f0;
    virtual void getObjectRect() = 0x3352b0;
    virtual void getObjectRect(float, float) = 0x3352d0;
    virtual void getObjectRect2(float, float) = 0x3354e0;
    virtual void getObjectTextureRect() = 0x3355b0;
    virtual void getRealPosition() = 0x335750;
    virtual void setStartPos(cocos2d::CCPoint) = 0x2fa520;
    virtual void updateStartValues() = 0x2fa800;
    virtual void getSaveString() = 0x33d3d0;
    virtual void isFlipX() = 0x335a40;
    virtual void isFlipY() = 0x335a50;
    virtual void setRScaleX(float) = 0x335cb0;
    virtual void setRScaleY(float) = 0x335d60;
    virtual void setRScale(float) = 0x335e10;
    virtual void getRScaleX() = 0x335e50;
    virtual void getRScaleY() = 0x335e80;
    virtual void calculateSpawnXPos() = 0x336970;
    virtual void triggerActivated(float) = 0x336990;
    virtual void powerOnObject() = 0x3369a0;
    virtual void powerOffObject() = 0x3369c0;
    virtual void setObjectColor(cocos2d::_ccColor3B const&) = 0x341c90;
    virtual void setGlowColor(cocos2d::_ccColor3B const&) = 0x341ed0;
    virtual void getOrientedBox() = 0x342ad0;
    virtual void addToGroup(int) = 0x33ad00;
    virtual void removeFromGroup(int) = 0x33ada0;
    virtual void spawnXPosition() = 0xdc1b0;
    virtual void getObjectRectDirty() const = 0xdc1d0;
    virtual void setObjectRectDirty(bool) = 0xdc1e0;
    virtual void getOrientedRectDirty() const = 0xdc1f0;
    virtual void setOrientedRectDirty(bool) = 0xdc200;
    virtual void getType() const = 0xdc210;
    virtual void setType(GameObjectType) = 0xdc220;
    virtual void getStartPos() const = 0xdc230;

    int getGroupID(int) = 0x33ae10;

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

@interface GaragePage
    virtual ~GaragePage() = 0x1bb670;
    virtual ~GaragePage() = 0x1bb6a0;
    virtual void listButtonBarSwitchedPage(ListButtonBar*, int) = 0x1bc2f0;
@end

@interface HardStreak
    virtual ~HardStreak() = 0x5bf00;
    virtual ~HardStreak() = 0x5bf60;
    virtual bool init() = 0x5c090;
@end

@interface PauseLayer
    virtual ~PauseLayer() = 0x20b140;
    virtual ~PauseLayer() = 0x20b170;
    virtual void keyBackClicked() = 0x20cd80;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x20cc80;
    virtual void customSetup() = 0x20b300;
    virtual void keyUp(cocos2d::enumKeyCodes) = 0x20cd60;
@end

@interface RingObject
    virtual ~RingObject() = 0xdc250;
    virtual ~RingObject() = 0xdc260;
    virtual void setScale(float) = 0xc6fb0;
    virtual void setRotation(float) = 0xc7010;
    virtual void resetObject() = 0xc6f90;
    virtual void getSaveString() = 0xc73a0;
    virtual void setRScale(float) = 0xc6fe0;
    virtual void triggerActivated(float) = 0xc6e10;
    virtual void powerOnObject() = 0xc6e20;
    virtual void powerOffObject() = 0xc6f70;
@end

@interface SetIDLayer
    virtual ~SetIDLayer() = 0x168c80;
    virtual ~SetIDLayer() = 0x168e20;
    virtual void keyBackClicked() = 0x169670;
@end

@interface SetIDPopup
    virtual ~SetIDPopup() = 0x154210;
    virtual ~SetIDPopup() = 0x154240;
    virtual void keyBackClicked() = 0x155310;
    virtual void show() = 0x1552c0;
    virtual void textInputClosed(CCTextInputNode*) = 0x155140;
    virtual void textChanged(CCTextInputNode*) = 0x155180;
    virtual void valueChanged() = 0x1552b0;
@end

@interface ShardsPage
    virtual ~ShardsPage() = 0x27d3e0;
    virtual ~ShardsPage() = 0x27d410;
    virtual bool init() = 0x27d610;
    virtual void registerWithTouchDispatcher() = 0x27fc40;
    virtual void keyBackClicked() = 0x27fbd0;
    virtual void show() = 0x27fa30;
@end

@interface SongsLayer
    virtual ~SongsLayer() = 0x29ebe0;
    virtual ~SongsLayer() = 0x29ec10;
    virtual void customSetup() = 0x29ec80;
@end

@interface StatsLayer
    virtual ~StatsLayer() = 0x59d50;
    virtual ~StatsLayer() = 0x59d80;
    virtual void customSetup() = 0x59df0;
@end

@interface UndoObject
    virtual ~UndoObject() = 0xa2fd0;
    virtual ~UndoObject() = 0xa3030;
@end

@interface AppDelegate
    virtual ~AppDelegate() = 0x3aa800;
    virtual void applicationDidFinishLaunching() = 0x3aa900;
    virtual void applicationDidEnterBackground() = 0x3aabe0;
    virtual void applicationWillEnterForeground() = 0x3aac80;
    virtual void applicationWillBecomeActive() = 0x3aab30;
    virtual void applicationWillResignActive() = 0x3aab50;
    virtual void trySaveGame() = 0x3aaf10;
    virtual void willSwitchToScene(cocos2d::CCScene*) = 0x3aaf40;

    void bgScale() = 0x3aaab0;
    static AppDelegate* get() = 0x3aab10;

    cocos2d::CCScene* m_runningScene = 0x28;
@end

@interface CCCountdown
    virtual ~CCCountdown() = 0x468cf0;
    virtual ~CCCountdown() = 0x468d00;
    virtual bool init() = 0x468870;
    virtual void setOpacity(unsigned char) = 0x468c70;
@end

@interface CCMoveCNode
    virtual ~CCMoveCNode() = 0x18b310;
    virtual ~CCMoveCNode() = 0x18b360;
    virtual bool init() = 0x18b3d0;
@end

@interface CommentCell
    virtual ~CommentCell() = 0x11cb20;
    virtual ~CommentCell() = 0x11ccc0;
    virtual bool init() = 0x11ce80;
    virtual void draw() = 0x11d1f0;
    virtual void likedItem(LikeItemType, int, bool) = 0x11d2c0;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x11d4b0;
@end

@interface DialogLayer
    virtual ~DialogLayer() = 0x204720;
    virtual ~DialogLayer() = 0x204750;
    virtual void onEnter() = 0x205900;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x205790;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x205820;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2057e0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x205840;
    virtual void registerWithTouchDispatcher() = 0x205890;
    virtual void keyBackClicked() = 0x2056a0;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x205ce0;
    virtual void fadeInTextFinished(TextArea*) = 0x205930;
@end

@interface GJGameLevel
    virtual ~GJGameLevel() = 0x2db2d0;
    virtual ~GJGameLevel() = 0x2db2e0;
    virtual void encodeWithCoder(DS_Dictionary*) = 0x2dd1c0;
    virtual bool canEncode() = 0x2ddae0;
    virtual bool init() = 0x2db310;
@end

@interface GJListLayer : cocos2d::CCLayerColor
    virtual ~GJListLayer() = 0x344350;
    virtual ~GJListLayer() = 0x3444d0;
@end

@interface GJScoreCell
    virtual ~GJScoreCell() = 0x11d5e0;
    virtual ~GJScoreCell() = 0x11d610;
    virtual bool init() = 0x11d710;
    virtual void draw() = 0x11d9b0;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x11d8e0;
@end

@interface GJShopLayer
    virtual ~GJShopLayer() = 0x19fe10;
    virtual ~GJShopLayer() = 0x19fe40;
    virtual void keyBackClicked() = 0x1a2370;
    virtual void didPurchaseItem(GJStoreItem*) = 0x1a1ae0;
@end

@interface GJUserScore
    virtual ~GJUserScore() = 0x2de3f0;
    virtual ~GJUserScore() = 0x2de400;
    virtual bool init() = 0x2de5a0;
@end

@interface GJWorldNode
    virtual ~GJWorldNode() = 0x2016b0;
    virtual ~GJWorldNode() = 0x2016c0;
@end

@interface GameManager : cocos2d::CCNode
    virtual ~GameManager() = 0x1d0fe0;
    virtual ~GameManager() = 0x1d0ff0;
    virtual void update(float) = 0x1d0270;
    virtual bool init() = 0x1c2ec0;
    virtual void encodeDataTo(DS_Dictionary*) = 0x1cfd90;
    virtual void dataLoaded(DS_Dictionary*) = 0x1ce7f0;
    virtual void firstLoad() = 0x1cf6a0;

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
    void getGTexture(int) = 0x1cca40;
    void reportAchievementWithID(char const*, int, bool) = 0x1c6460;
    void resolutionForKey(int) = 0x1d0b40;

    PlayLayer* m_playLayer = 0x180;
    LevelEditorLayer* m_editorLayer = 0x188;
    int m_scene = 0x1f4;
    bool m_ldm = 0x2a1;
@end

@interface MapPackCell
    virtual ~MapPackCell() = 0x11a670;
    virtual ~MapPackCell() = 0x11a7f0;
    virtual bool init() = 0x11a9c0;
    virtual void draw() = 0x11ae80;
@end

@interface ProfilePage
    virtual ~ProfilePage() = 0x45ee30;
    virtual ~ProfilePage() = 0x45ee60;
    virtual void registerWithTouchDispatcher() = 0x464a60;
    virtual void keyBackClicked() = 0x4637e0;
    virtual void show() = 0x4639c0;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x463340;
    virtual void updateUserScoreFinished() = 0x463850;
    virtual void updateUserScoreFailed() = 0x463920;
    virtual void getUserInfoFinished(GJUserScore*) = 0x463cd0;
    virtual void getUserInfoFailed(int) = 0x463fb0;
    virtual void userInfoChanged(GJUserScore*) = 0x464070;
    virtual void loadCommentsFinished(cocos2d::CCArray*, char const*) = 0x464250;
    virtual void loadCommentsFailed(char const*) = 0x464340;
    virtual void setupPageInfo(std::string, char const*) = 0x464410;
    virtual void commentUploadFinished(int) = 0x464770;
    virtual void commentUploadFailed(int, CommentError) = 0x464800;
    virtual void commentDeleteFailed(int, int) = 0x4648e0;
    virtual void onClosePopup(UploadActionPopup*) = 0x463510;
    virtual void uploadActionFinished(int, int) = 0x463570;
    virtual void uploadActionFailed(int, int) = 0x463710;
@end

@interface RewardsPage
    virtual ~RewardsPage() = 0xf35a0;
    virtual ~RewardsPage() = 0xf35d0;
    virtual bool init() = 0xf3800;
    virtual void registerWithTouchDispatcher() = 0xf5040;
    virtual void keyBackClicked() = 0xf4fd0;
    virtual void show() = 0xf4e70;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0xf4fb0;
    virtual void rewardsStatusFinished(int) = 0xf4ae0;
    virtual void rewardsStatusFailed() = 0xf4d70;
@end

@interface SecretLayer
    virtual ~SecretLayer() = 0x362f30;
    virtual ~SecretLayer() = 0x3630d0;
    virtual bool init() = 0x363340;
    virtual void keyBackClicked() = 0x368450;
    virtual void textInputOpened(CCTextInputNode*) = 0x366d30;
    virtual void textInputClosed(CCTextInputNode*) = 0x366f30;
    virtual void textChanged(CCTextInputNode*) = 0x367050;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x366d10;
@end

@interface SpeedObject
    virtual ~SpeedObject() = 0x80a00;
    virtual ~SpeedObject() = 0x80a50;
@end

@interface UploadPopup
    virtual ~UploadPopup() = 0x12b9c0;
    virtual ~UploadPopup() = 0x12b9f0;
    virtual void keyBackClicked() = 0x12c600;
    virtual void show() = 0x12c5a0;
    virtual void levelUploadFinished(GJGameLevel*) = 0x12c080;
    virtual void levelUploadFailed(GJGameLevel*) = 0x12c340;
@end

@interface AccountLayer
    virtual ~AccountLayer() = 0x81b80;
    virtual ~AccountLayer() = 0x81bb0;
    virtual void customSetup() = 0x81c20;
    virtual void layerHidden() = 0x83950;
    virtual void backupAccountFinished() = 0x830e0;
    virtual void backupAccountFailed(BackupAccountError) = 0x832d0;
    virtual void syncAccountFinished() = 0x83490;
    virtual void syncAccountFailed(BackupAccountError) = 0x83630;
    virtual void accountStatusChanged() = 0x830b0;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x83830;
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

@interface TableViewDelegate
    volatile virtual int numberOfRowsInSection(unsigned int, TableView*) {return 0;}
    volatile virtual void numberOfSectionsInTableView(TableView*) {}
    volatile virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView*, TableViewCellEditingStyle, CCIndexPath&) {}
    volatile virtual void cellForRowAtIndexPath(CCIndexPath&, TableView*) {}
@end

@interface BoomListView : cocos2d::CCLayer, TableViewDataSource, TableViewDelegate
    virtual ~BoomListView() = 0x18ea10;
    virtual ~BoomListView() = 0x18ebb0;
    virtual void draw() = 0x18f790;
    virtual void setupList() = 0x18ef90;
    virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) = 0x18f030;
    virtual void cellHeightForRowAtIndexPath(CCIndexPath&, TableView*) = 0x18f070;
    virtual void didSelectRowAtIndexPath(CCIndexPath&, TableView*) = 0x18f090;
    virtual int numberOfRowsInSection(unsigned int, TableView*) = 0x18f0b0;
    virtual void numberOfSectionsInTableView(TableView*) = 0x18f0e0;
    virtual void cellForRowAtIndexPath(CCIndexPath&, TableView*) = 0x18f100;
    virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView*, TableViewCellEditingStyle, CCIndexPath&) = 0x18f770;
    virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) = 0x18f050;
    virtual TableViewCell* getListCell(char const*) = 0x18f200;
    virtual void loadCell(TableViewCell*, int) = 0x18f4a0;

    static BoomListView* create(cocos2d::CCArray*, float, float, int, BoomListType) = 0x18ecb0;
    bool init(cocos2d::CCArray*, float, float, int, BoomListType) = 0x18ee00;

    TableView* m_tableView;
    cocos2d::CCArray* m_content;
    BoomListType m_type; 
    float m_width;
    float m_height;
    float m_cellHeight;
    int m_page;
@end

@interface CCBlockLayer
    virtual ~CCBlockLayer() = 0x2a5620;
    virtual ~CCBlockLayer() = 0x2a57d0;
    virtual bool init() = 0x2a59c0;
    virtual void draw() = 0x2a5c20;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2a5c50;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2a5cb0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2a5c70;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2a5c90;
    virtual void registerWithTouchDispatcher() = 0x2a5ad0;
    virtual void keyBackClicked() = 0x2a5b10;
    virtual void customSetup() = 0x2a5a70;
    virtual void enterLayer() = 0x2a5aa0;
    virtual void exitLayer() = 0x2a5b40;
    virtual void showLayer(bool) = 0x2a5b90;
    virtual void hideLayer(bool) = 0x2a5ba0;
    virtual void layerVisible() = 0x2a5bc0;
    virtual void layerHidden() = 0x2a5be0;
    virtual void enterAnimFinished() = 0x2a5bb0;
    virtual void disableUI() = 0x2a5a80;
    virtual void enableUI() = 0x2a5a90;
@end

@interface CCCircleWave : cocos2d::CCNode
    virtual ~CCCircleWave() = 0xbd1b0;
    virtual ~CCCircleWave() = 0xbd200;
    virtual void setPosition(cocos2d::CCPoint const&) = 0xbd600;
    virtual void removeMeAndCleanup() = 0xbdac0;
    virtual void draw() = 0xbd960;
    virtual void updateTweenAction(float, char const*) = 0xbd710;

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
    virtual ~CCLightFlash() = 0x296210;
    virtual ~CCLightFlash() = 0x296260;
    virtual bool init() = 0x2958f0;
@end

@interface CCLightStrip
    virtual ~CCLightStrip() = 0x2968b0;
    virtual ~CCLightStrip() = 0x2968c0;
    virtual void draw() = 0x296410;
    virtual void updateTweenAction(float, char const*) = 0x2965a0;
@end

@interface CreatorLayer
    virtual ~CreatorLayer() = 0x141940;
    virtual ~CreatorLayer() = 0x141970;
    virtual bool init() = 0x141c10;
    virtual void keyBackClicked() = 0x143950;
    virtual void sceneWillResume() = 0x1438f0;
    virtual void dialogClosed(DialogLayer*) = 0x143830;
@end

@interface FLAlertLayerProtocol
    volatile virtual void FLAlert_Clicked(FLAlertLayer*, bool) {};
@end

@interface FLAlertLayer : cocos2d::CCLayerColor
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

@interface GJHttpResult
    virtual ~GJHttpResult() = 0x2dff80;
    virtual ~GJHttpResult() = 0x2e0000;
@end

@interface GJRewardItem
    virtual ~GJRewardItem() = 0x4d250;
    virtual ~GJRewardItem() = 0x4d2a0;
    virtual void encodeWithCoder(DS_Dictionary*) = 0x4d7f0;
    virtual bool canEncode() = 0x4d850;
@end

@interface GauntletNode
    virtual ~GauntletNode() = 0x2eb4f0;
    virtual ~GauntletNode() = 0x2eb500;
@end

@interface LoadingLayer
    virtual ~LoadingLayer() = 0x1e0330;
    virtual ~LoadingLayer() = 0x1e0470;
@end

@interface OptionsLayer
    virtual ~OptionsLayer() = 0x43dbd0;
    virtual ~OptionsLayer() = 0x43dc00;
    virtual void customSetup() = 0x43dc70;
    virtual void layerHidden() = 0x43f200;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x43f270;
@end

@interface PlayerObject
    virtual ~PlayerObject() = 0x217220;
    virtual ~PlayerObject() = 0x217230;
    virtual void update(float) = 0x218bf0;
    virtual void setScaleX(float) = 0x22e7f0;
    virtual void setScaleY(float) = 0x22e830;
    virtual void setScale(float) = 0x22e870;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x22c8b0;
    virtual void setVisible(bool) = 0x22e8b0;
    virtual void setRotation(float) = 0x22e6e0;
    virtual void setOpacity(unsigned char) = 0x22d400;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x22cdf0;
    virtual void setFlipX(bool) = 0x22e720;
    virtual void setFlipY(bool) = 0x22e7b0;
    virtual void resetObject() = 0x223170;
    virtual void getRealPosition() = 0x22d5f0;
    virtual void getOrientedBox() = 0x22dee0;
    virtual void animationFinished(char const*) = 0x22e9d0;
@end

@interface SecretLayer2
    virtual ~SecretLayer2() = 0x25f9e0;
    virtual ~SecretLayer2() = 0x25fbb0;
    virtual bool init() = 0x25fe70;
    virtual void onExit() = 0x266b30;
    virtual void keyBackClicked() = 0x266a30;
    virtual void textInputOpened(CCTextInputNode*) = 0x265880;
    virtual void textInputClosed(CCTextInputNode*) = 0x265a80;
    virtual void textChanged(CCTextInputNode*) = 0x265ba0;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x265860;
    virtual void dialogClosed(DialogLayer*) = 0x264880;
@end

@interface SecretLayer3
    virtual ~SecretLayer3() = 0x266cf0;
    virtual ~SecretLayer3() = 0x266e50;
    virtual bool init() = 0x267040;
    virtual void onExit() = 0x26c270;
    virtual void keyBackClicked() = 0x26c240;
    virtual void dialogClosed(DialogLayer*) = 0x26bf10;
@end

@interface SecretLayer4
    virtual ~SecretLayer4() = 0x1ed200;
    virtual ~SecretLayer4() = 0x1ed3b0;
    virtual bool init() = 0x1ed640;
    virtual void onExit() = 0x1f2220;
    virtual void keyBackClicked() = 0x1f2120;
    virtual void textInputOpened(CCTextInputNode*) = 0x1f0ff0;
    virtual void textInputClosed(CCTextInputNode*) = 0x1f11f0;
    virtual void textChanged(CCTextInputNode*) = 0x1f1310;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x1f0fd0;
    virtual void dialogClosed(DialogLayer*) = 0x1f0a90;
@end

@interface SetTextPopup
    virtual ~SetTextPopup() = 0x1563f0;
    virtual ~SetTextPopup() = 0x156420;
    virtual void keyBackClicked() = 0x157050;
    virtual void show() = 0x157000;
    virtual void textInputClosed(CCTextInputNode*) = 0x156ef0;
    virtual void textChanged(CCTextInputNode*) = 0x156f30;
@end

@interface SimplePlayer
    virtual ~SimplePlayer() = 0x1bdb10;
    virtual ~SimplePlayer() = 0x1bdb20;
    virtual void setOpacity(unsigned char) = 0x1bcc40;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x1bc9b0;
@end

@interface SlideInLayer
    virtual ~SlideInLayer() = 0x1388e0;
    virtual ~SlideInLayer() = 0x138a90;
    virtual bool init() = 0x138cf0;
    virtual void draw() = 0x1394a0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1394d0;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x139530;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1394f0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x139510;
    virtual void registerWithTouchDispatcher() = 0x139190;
    virtual void keyBackClicked() = 0x1391d0;
    virtual void customSetup() = 0x139110;
    virtual void enterLayer() = 0x139160;
    virtual void exitLayer(cocos2d::CCObject*) = 0x139210;
    virtual void showLayer(bool) = 0x139270;
    virtual void hideLayer(bool) = 0x139360;
    virtual void layerVisible() = 0x139440;
    virtual void layerHidden() = 0x139460;
    virtual void enterAnimFinished() = 0x139430;
    virtual void disableUI() = 0x139120;
    virtual void enableUI() = 0x139140;
@end

@interface SupportLayer
    virtual ~SupportLayer() = 0x1d8d60;
    virtual ~SupportLayer() = 0x1d8f70;
    virtual void customSetup() = 0x1d90b0;
    virtual void uploadActionFinished(int, int) = 0x1d9de0;
    virtual void uploadActionFailed(int, int) = 0x1d9f00;
    virtual void onClosePopup(UploadActionPopup*) = 0x1d9d90;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x1da170;
@end

@interface CreateMenuItem : CCMenuItemSpriteExtra
    static CreateMenuItem* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x1c580;
@end

@interface BoomListLayer
    virtual ~BoomListLayer() = 0x245f00;
    virtual ~BoomListLayer() = 0x245f30;
@end

@interface CCAlertCircle
    virtual ~CCAlertCircle() = 0xbe050;
    virtual ~CCAlertCircle() = 0xbe0a0;
    virtual bool init() = 0xbdea0;
    virtual void draw() = 0xbdf40;
@end

@interface ChallengeNode
    virtual ~ChallengeNode() = 0x1dce50;
    virtual ~ChallengeNode() = 0x1dcea0;
@end

@interface DrawGridLayer
    virtual ~DrawGridLayer() = 0xa3640;
    virtual ~DrawGridLayer() = 0xa3670;
    virtual void update(float) = 0xa3b30;
    virtual void draw() = 0xa3c40;
@end

@interface EditButtonBar : cocos2d::CCNode
    virtual ~EditButtonBar() = 0x350d80;
    virtual ~EditButtonBar() = 0x350de0;

    void loadFromItems(cocos2d::CCArray*, int, int, bool) = 0x351010;

    cocos2d::CCArray* m_objectSlots = 0x130;
@end

@interface ExtendedLayer
    virtual ~ExtendedLayer() = 0x1e4250;
    virtual ~ExtendedLayer() = 0x1e4260;
    virtual bool init() = 0x1e41e0;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x1e41f0;
@end

@interface GJChestSprite
    virtual ~GJChestSprite() = 0xf81e0;
    virtual ~GJChestSprite() = 0xf81f0;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0xf8270;
@end

@interface GJGarageLayer
    virtual ~GJGarageLayer() = 0x1b4430;
    virtual ~GJGarageLayer() = 0x1b4640;
    virtual bool init() = 0x1b4980;
    virtual void keyBackClicked() = 0x1bb630;
    virtual void textInputOpened(CCTextInputNode*) = 0x1b7dc0;
    virtual void textInputClosed(CCTextInputNode*) = 0x1b8040;
    virtual void textChanged(CCTextInputNode*) = 0x1b82c0;
    virtual void listButtonBarSwitchedPage(ListButtonBar*, int) = 0x1bad10;
    virtual void updateRate() = 0x1bb420;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x1bb050;
    virtual void dialogClosed(DialogLayer*) = 0x1bb160;
@end

@interface GJGroundLayer
    virtual ~GJGroundLayer() = 0x356c30;
    virtual ~GJGroundLayer() = 0x356c40;
    virtual void draw() = 0x356a60;
    virtual void showGround() = 0x356920;
    virtual void fadeInGround(float) = 0x356930;
    virtual void fadeOutGround(float) = 0x356a30;
@end

@interface GJMessageCell
    virtual ~GJMessageCell() = 0x11fa90;
    virtual ~GJMessageCell() = 0x11fac0;
    virtual bool init() = 0x11fc00;
    virtual void draw() = 0x11fef0;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x11ffc0;
    virtual void uploadActionFinished(int, int) = 0x120180;
    virtual void uploadActionFailed(int, int) = 0x120310;
    virtual void onClosePopup(UploadActionPopup*) = 0x120410;
@end

@interface GJRequestCell
    virtual ~GJRequestCell() = 0x11ef10;
    virtual ~GJRequestCell() = 0x11ef40;
    virtual bool init() = 0x11f080;
    virtual void draw() = 0x11f390;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x11f460;
    virtual void uploadActionFinished(int, int) = 0x11f640;
    virtual void uploadActionFailed(int, int) = 0x11f800;
    virtual void onClosePopup(UploadActionPopup*) = 0x11f930;
@end

@interface GJRobotSprite
    virtual ~GJRobotSprite() = 0x34aaf0;
    virtual ~GJRobotSprite() = 0x34ab70;
    virtual bool init() = 0x34ad50;
    virtual void setOpacity(unsigned char) = 0x34bcc0;
    virtual void hideSecondary() = 0x34c3b0;
@end

@interface GJSongBrowser
    virtual ~GJSongBrowser() = 0x368780;
    virtual ~GJSongBrowser() = 0x3687b0;
    virtual void customSetup() = 0x368ab0;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x3690a0;
@end

@interface GJSpriteColor
    virtual ~GJSpriteColor() = 0x343d40;
    virtual ~GJSpriteColor() = 0x343d50;
    virtual bool init() = 0x343c90;
@end

@interface GJUserMessage
    virtual ~GJUserMessage() = 0x2deaf0;
    virtual ~GJUserMessage() = 0x2deb00;
    virtual bool init() = 0x2debf0;
@end

@interface GauntletLayer
    virtual ~GauntletLayer() = 0x1d36c0;
    virtual ~GauntletLayer() = 0x1d36f0;
    virtual void keyBackClicked() = 0x1d5e20;
    virtual void loadLevelsFinished(cocos2d::CCArray*, char const*) = 0x1d5410;
    virtual void loadLevelsFailed(char const*) = 0x1d55d0;
@end

@interface LikeItemLayer
    virtual ~LikeItemLayer() = 0x35f4c0;
    virtual ~LikeItemLayer() = 0x35f660;
    virtual void keyBackClicked() = 0x35ff20;
@end

@interface ListButtonBar
    virtual ~ListButtonBar() = 0x210720;
    virtual ~ListButtonBar() = 0x210770;
@end

@interface LoadingCircle
    virtual ~LoadingCircle() = 0x277e60;
    virtual ~LoadingCircle() = 0x277e90;
    virtual bool init() = 0x277f00;
    virtual void draw() = 0x278170;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2781d0;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2781e0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2781f0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x278200;
    virtual void registerWithTouchDispatcher() = 0x278190;
@end

@interface MenuGameLayer
    virtual ~MenuGameLayer() = 0x28ef90;
    virtual ~MenuGameLayer() = 0x28efc0;
    virtual void update(float) = 0x28fa70;
    virtual bool init() = 0x28f150;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x290650;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x290770;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x290790;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2907b0;
    virtual void registerWithTouchDispatcher() = 0x2907f0;
@end

@interface MyLevelsLayer
    virtual ~MyLevelsLayer() = 0x350d0;
    virtual ~MyLevelsLayer() = 0x351b0;
    virtual bool init() = 0x35470;
    virtual void keyBackClicked() = 0x35b90;
@end

@interface ObjectDecoder
    virtual ~ObjectDecoder() = 0x437fb0;
    virtual ~ObjectDecoder() = 0x437fc0;
    virtual bool init() = 0x437f80;
@end

@interface ObjectManager
    virtual ~ObjectManager() = 0x43c970;
    virtual ~ObjectManager() = 0x43c9e0;
    virtual bool init() = 0x43b280;
@end

@interface ObjectToolbox
    virtual ~ObjectToolbox() = 0x3b2ca0;
    virtual ~ObjectToolbox() = 0x3b2d00;
    virtual bool init() = 0x3b2d80;

    char const* intKeyToFrame(int) = 0x4173b0;
    static ObjectToolbox* sharedState() = 0x3b2bc0;

    cocos2d::CCDictionary* m_strKeyObjects = 0x120;
    cocos2d::CCDictionary* m_intKeyObjects = 0x128;
@end

@interface SongInfoLayer
    virtual ~SongInfoLayer() = 0x369630;
    virtual ~SongInfoLayer() = 0x369660;
    virtual void keyBackClicked() = 0x36a980;
@end

@interface TableViewCell : cocos2d::CCLayer
    virtual ~TableViewCell() = 0x384130;
    virtual ~TableViewCell() = 0x384160;

    TableViewCell(char const*, float, float) = 0x383de0;
    volatile char pad[0x1c0-0x170];
    float m_parentHeight;
    float m_height;
    cocos2d::CCLayerColor* m_backgroundLayer;
    cocos2d::CCLayer* m_mainLayer;
@end

@interface TutorialLayer
    virtual ~TutorialLayer() = 0x286bd0;
    virtual ~TutorialLayer() = 0x286c00;
    virtual bool init() = 0x286e00;
    virtual void keyBackClicked() = 0x2878d0;
@end

@interface TutorialPopup
    virtual ~TutorialPopup() = 0x344de0;
    virtual ~TutorialPopup() = 0x344e10;
    virtual void keyBackClicked() = 0x344ae0;
    virtual void show() = 0x344bb0;
@end

@interface AchievementBar
    virtual ~AchievementBar() = 0x379f40;
    virtual ~AchievementBar() = 0x379f50;
    virtual void setOpacity(unsigned char) = 0x37b9b0;
@end

@interface CCContentLayer
    virtual ~CCContentLayer() = 0x464cd0;
    virtual ~CCContentLayer() = 0x464ce0;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x464c60;
@end

@interface CCCounterLabel
    virtual ~CCCounterLabel() = 0x29eaa0;
    virtual ~CCCounterLabel() = 0x29eab0;
@end

@interface ChallengesPage
    virtual ~ChallengesPage() = 0x1db2b0;
    virtual ~ChallengesPage() = 0x1db2e0;
    virtual bool init() = 0x1db520;
    virtual void registerWithTouchDispatcher() = 0x1dcc50;
    virtual void keyBackClicked() = 0x1dcbc0;
    virtual void show() = 0x1dca10;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x1dcba0;
    virtual void challengeStatusFinished() = 0x1dc520;
    virtual void challengeStatusFailed() = 0x1dc830;
    virtual void currencyWillExit(CurrencyRewardLayer*) = 0x1dcdb0;
@end

@interface CurrencySprite
    virtual ~CurrencySprite() = 0x44b5e0;
    virtual ~CurrencySprite() = 0x44b650;
@end

@interface CustomListView
    virtual ~CustomListView() = 0x10d370;
    virtual ~CustomListView() = 0x10d3a0;
    virtual void setupList() = 0x116e70;
    virtual void getListCell(char const*) = 0x10d560;
    virtual void loadCell(TableViewCell*, int) = 0x10e610;
@end

@interface CustomSongCell
    virtual ~CustomSongCell() = 0x11c320;
    virtual ~CustomSongCell() = 0x11c350;
    virtual bool init() = 0x11c440;
    virtual void draw() = 0x11c5c0;
@end

@interface DailyLevelNode
    virtual ~DailyLevelNode() = 0x10aaa0;
    virtual ~DailyLevelNode() = 0x10ab20;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x10b750;
@end

@interface DailyLevelPage
    virtual ~DailyLevelPage() = 0x108a20;
    virtual ~DailyLevelPage() = 0x108a50;
    virtual void registerWithTouchDispatcher() = 0x10a6f0;
    virtual void keyBackClicked() = 0x10a660;
    virtual void show() = 0x10a4b0;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x10a640;
    virtual void dailyStatusFinished(bool) = 0x109be0;
    virtual void dailyStatusFailed(bool) = 0x10a090;
    virtual void levelDownloadFinished(GJGameLevel*) = 0x10a1b0;
    virtual void levelDownloadFailed(int) = 0x10a280;
@end

@interface EditLevelLayer
    virtual ~EditLevelLayer() = 0xe1d70;
    virtual ~EditLevelLayer() = 0xe1da0;
    virtual void keyBackClicked() = 0xe6670;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0xe66a0;
    virtual void setIDPopupClosed(SetIDPopup*, int) = 0xe6560;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0xe5e70;
    virtual void textInputOpened(CCTextInputNode*) = 0xe5540;
    virtual void textInputClosed(CCTextInputNode*) = 0xe51e0;
    virtual void textChanged(CCTextInputNode*) = 0xe57a0;
    virtual void uploadActionFinished(int, int) = 0xe6740;
    virtual void uploadActionFailed(int, int) = 0xe68c0;
    virtual void onClosePopup(UploadActionPopup*) = 0xe66f0;
@end

@interface GJMessagePopup
    virtual ~GJMessagePopup() = 0x14e9a0;
    virtual ~GJMessagePopup() = 0x14e9d0;
    virtual void keyBackClicked() = 0x1504a0;
    virtual void downloadMessageFinished(GJUserMessage*) = 0x150510;
    virtual void downloadMessageFailed(int) = 0x1505e0;
    virtual void uploadActionFinished(int, int) = 0x150680;
    virtual void uploadActionFailed(int, int) = 0x150820;
    virtual void onClosePopup(UploadActionPopup*) = 0x150900;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x150a00;
@end

@interface GJOptionsLayer
    virtual ~GJOptionsLayer() = 0x145a40;
    virtual ~GJOptionsLayer() = 0x145a70;
    virtual bool init() = 0x145c60;
    virtual void keyBackClicked() = 0x147190;
    virtual void setupOptions() = 0x1464d0;
    virtual void onClose(cocos2d::CCObject*) = 0x147160;
@end

@interface GJRewardObject
    virtual ~GJRewardObject() = 0x4e170;
    virtual ~GJRewardObject() = 0x4e180;
    virtual void encodeWithCoder(DS_Dictionary*) = 0x4d170;
    virtual bool canEncode() = 0x4d1f0;
@end

@interface GJScaleControl
    virtual ~GJScaleControl() = 0x32180;
    virtual ~GJScaleControl() = 0x32190;
    virtual bool init() = 0x31b30;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x31d30;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x31e60;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x31fb0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x32060;
@end

@interface GJSearchObject
    virtual ~GJSearchObject() = 0x2decb0;
    virtual ~GJSearchObject() = 0x2ded60;
@end

@interface GJSpiderSprite
    virtual ~GJSpiderSprite() = 0x34c4a0;
    virtual ~GJSpiderSprite() = 0x34c520;
    virtual bool init() = 0x34c700;
@end

@interface GameObjectCopy
    virtual ~GameObjectCopy() = 0xa3290;
    virtual ~GameObjectCopy() = 0xa32e0;
@end

@interface HSVWidgetPopup
    virtual ~HSVWidgetPopup() = 0x236890;
    virtual ~HSVWidgetPopup() = 0x236a30;
    virtual void keyBackClicked() = 0x2371e0;
@end

@interface LevelInfoLayer
    virtual ~LevelInfoLayer() = 0x15f1b0;
    virtual ~LevelInfoLayer() = 0x15f1e0;
    virtual void keyBackClicked() = 0x166160;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x166190;
    virtual void numberInputClosed(NumberInputLayer*) = 0x1657a0;
    virtual void levelDownloadFinished(GJGameLevel*) = 0x164c00;
    virtual void levelDownloadFailed(int) = 0x164d50;
    virtual void levelUpdateFinished(GJGameLevel*, UpdateResponse) = 0x164e60;
    virtual void levelUpdateFailed(int) = 0x165010;
    virtual void levelDeleteFinished(int) = 0x165120;
    virtual void levelDeleteFailed(int) = 0x165230;
    virtual void rateLevelClosed() = 0x165e60;
    virtual void likedItem(LikeItemType, int, bool) = 0x165e90;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x165f90;
    virtual void setIDPopupClosed(SetIDPopup*, int) = 0x163e60;
@end

@interface RateDemonLayer
    virtual ~RateDemonLayer() = 0x12dfc0;
    virtual ~RateDemonLayer() = 0x12dff0;
    virtual void keyBackClicked() = 0x12ec20;
    virtual void uploadActionFinished(int, int) = 0x12e960;
    virtual void uploadActionFailed(int, int) = 0x12ea40;
    virtual void onClosePopup(UploadActionPopup*) = 0x12eb40;
@end

@interface RateLevelLayer
    virtual ~RateLevelLayer() = 0x2e1a60;
    virtual ~RateLevelLayer() = 0x2e1a90;
    virtual void keyBackClicked() = 0x2e2250;
@end

@interface RateStarsLayer
    virtual ~RateStarsLayer() = 0x135db0;
    virtual ~RateStarsLayer() = 0x135de0;
    virtual void keyBackClicked() = 0x136ec0;
    virtual void uploadActionFinished(int, int) = 0x136c10;
    virtual void uploadActionFailed(int, int) = 0x136cf0;
    virtual void onClosePopup(UploadActionPopup*) = 0x136de0;
@end

@interface ScrollingLayer
    virtual ~ScrollingLayer() = 0x41b150;
    virtual ~ScrollingLayer() = 0x41b160;
    virtual void draw() = 0x41abc0;
    virtual void visit() = 0x41acb0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x41ae10;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x41afb0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x41b0d0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x41b110;
@end

@interface SelectArtLayer
    virtual ~SelectArtLayer() = 0xac9c0;
    virtual ~SelectArtLayer() = 0xac9f0;
    virtual void keyBackClicked() = 0xad440;
@end

@interface SetFolderPopup
    virtual ~SetFolderPopup() = 0x155480;
    virtual ~SetFolderPopup() = 0x1554b0;
    virtual void valueChanged() = 0x155d40;
    virtual void setTextPopupClosed(SetTextPopup*, std::string) = 0x1561b0;
@end

@interface SetItemIDLayer
    virtual ~SetItemIDLayer() = 0x5a790;
    virtual ~SetItemIDLayer() = 0x5a7c0;
    virtual void keyBackClicked() = 0x5bb90;
    virtual void show() = 0x5bb40;
    virtual void textInputClosed(CCTextInputNode*) = 0x5b9e0;
    virtual void textChanged(CCTextInputNode*) = 0x5ba20;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x5bca0;
    virtual void textInputReturn(CCTextInputNode*) = 0x5bd60;
@end

@interface SongInfoObject : cocos2d::CCNode
    virtual ~SongInfoObject() = 0x2f2040;
    virtual ~SongInfoObject() = 0x2f2050;
    virtual void encodeWithCoder(DS_Dictionary*) = 0x2f2c70;
    virtual bool canEncode() = 0x2f2da0;

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

@interface StartPosObject
    virtual ~StartPosObject() = 0xda6d0;
    virtual ~StartPosObject() = 0xda740;
    virtual bool init() = 0xda8a0;
    virtual void getSaveString() = 0xda960;
@end

@interface WorldLevelPage
    virtual ~WorldLevelPage() = 0x202e70;
    virtual ~WorldLevelPage() = 0x202ea0;
    virtual void keyBackClicked() = 0x204300;
    virtual void show() = 0x2041c0;
@end

@interface AchievementCell
    virtual ~AchievementCell() = 0x120490;
    virtual ~AchievementCell() = 0x1204a0;
    virtual bool init() = 0x117730;
    virtual void draw() = 0x117740;

    void loadFromDict(cocos2d::CCDictionary*) = 0x10eaa0;
@end

@interface BoomScrollLayer
    virtual ~BoomScrollLayer() = 0x1e2d40;
    virtual ~BoomScrollLayer() = 0x1e2d70;
    virtual void visit() = 0x1e2f80;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e3c40;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e3d90;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e3ff0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e3b40;
    virtual void registerWithTouchDispatcher() = 0x1e3970;
@end

@interface CCNodeContainer
    virtual ~CCNodeContainer() = 0xba9b0;
    virtual ~CCNodeContainer() = 0xba9c0;
    virtual bool init() = 0xba950;
    virtual void visit() = 0xba960;
@end

@interface CCSpriteWithHue
    virtual ~CCSpriteWithHue() = 0x35a7c0;
    virtual ~CCSpriteWithHue() = 0x35a7d0;
    virtual void draw() = 0x35a400;
    virtual void initWithTexture(cocos2d::CCTexture2D*) = 0x359d10;
    virtual void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&) = 0x359d80;
    virtual void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool) = 0x359b80;
    virtual void initWithSpriteFrame(cocos2d::CCSpriteFrame*) = 0x359da0;
    virtual void updateColor() = 0x359f70;
@end

@interface CCTextInputNode : cocos2d::CCLayer, cocos2d::CCIMEDelegate, cocos2d::CCTextFieldDelegate
    virtual ~CCTextInputNode() = 0x5ceb0;
    virtual ~CCTextInputNode() = 0x5cf00;
    virtual void visit() = 0x5d380;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x5ec80;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x5eea0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x5ee60;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x5ee80;
    virtual void registerWithTouchDispatcher() = 0x5eec0;
    virtual void textChanged() = 0x5dd70;
    virtual void onClickTrackNode(bool) = 0x5dd40;
    virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5dad0;
    virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5dc20;
    virtual bool onTextFieldInsertText(cocos2d::CCTextFieldTTF*, char const*, int) = 0x5de50;
    virtual bool onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF*) = 0x5e2c0;
    virtual bool onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF*) = 0x5e610;

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

@interface CustomSongLayer
    virtual ~CustomSongLayer() = 0xf0490;
    virtual ~CustomSongLayer() = 0xf04c0;
    virtual void keyBackClicked() = 0xf21c0;
    virtual void show() = 0xf22a0;
    virtual void textChanged(CCTextInputNode*) = 0xf1fb0;
    virtual void textInputOpened(CCTextInputNode*) = 0xf1f10;
    virtual void textInputClosed(CCTextInputNode*) = 0xf1e70;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0xf1fd0;
    virtual void textInputReturn(CCTextInputNode*) = 0xf2090;
    virtual void dropDownLayerWillClose(GJDropDownLayer*) = 0xf2140;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0xf1be0;
@end

@interface EndPortalObject
    virtual ~EndPortalObject() = 0x1db080;
    virtual ~EndPortalObject() = 0x1db090;
    virtual bool init() = 0x1da980;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x1dae70;
    virtual void setVisible(bool) = 0x1daf30;
    virtual void triggerObject(GJBaseGameLayer*) = 0x1dadc0;
    virtual void calculateSpawnXPos() = 0x1dae50;
@end

@interface FileSaveManager
    virtual ~FileSaveManager() = 0x68d0;
    virtual ~FileSaveManager() = 0x68e0;
    virtual bool init() = 0x6360;
    virtual void firstLoad() = 0x6390;
@end

@interface GJBaseGameLayer : cocos2d::CCLayer
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
@end

@interface GJChallengeItem
    virtual ~GJChallengeItem() = 0x4e1b0;
    virtual ~GJChallengeItem() = 0x4e200;
    virtual void encodeWithCoder(DS_Dictionary*) = 0x4df60;
    virtual bool canEncode() = 0x4e020;
@end

@interface GJDropDownLayer : cocos2d::CCLayerColor
    virtual ~GJDropDownLayer() = 0x351d00;
    virtual ~GJDropDownLayer() = 0x351ea0;
    virtual void draw() = 0x352910;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x352940;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x3529a0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x352960;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x352980;
    virtual void registerWithTouchDispatcher() = 0x3525f0;
    virtual void keyBackClicked() = 0x352630;
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

    static GJDropDownLayer* create(char const*, float) = 0x352530;
    bool init(char const*, float) = 0x352100;

    cocos2d::CCPoint m_endPosition;
    cocos2d::CCPoint m_startPosition;
    cocos2d::CCMenu* m_buttonMenu;
    GJListLayer* m_listLayer;
    bool m_controllerEnabled;
    cocos2d::CCLayer* m_mainLayer;
    bool m_hidden;
    void* m_unknown;
@end

@interface GJEffectManager
    virtual ~GJEffectManager() = 0x1800b0;
    virtual ~GJEffectManager() = 0x1800c0;
    virtual bool init() = 0x180230;
@end

@interface GJFriendRequest
    virtual ~GJFriendRequest() = 0x2de830;
    virtual ~GJFriendRequest() = 0x2de8b0;
    virtual bool init() = 0x2dea00;
@end

@interface GJObjectDecoder
    virtual ~GJObjectDecoder() = 0x41e890;
    virtual ~GJObjectDecoder() = 0x41e8a0;
    virtual bool init() = 0x41e780;
    virtual void getDecodedObject(int, DS_Dictionary*) = 0x41e790;
@end

@interface InfoAlertButton
    virtual ~InfoAlertButton() = 0x2ece40;
    virtual ~InfoAlertButton() = 0x2eced0;
    virtual void activate() = 0x2ecd70;
@end

@interface LabelGameObject
    virtual ~LabelGameObject() = 0xdb7e0;
    virtual ~LabelGameObject() = 0xdb850;
    virtual bool init() = 0xdb990;
    virtual void setOpacity(unsigned char) = 0xdba40;
    virtual void setupCustomSprites() = 0xdb9b0;
    virtual void addMainSpriteToParent(bool) = 0xdbce0;
    virtual void getSaveString() = 0xdbd50;
    virtual void setObjectColor(cocos2d::_ccColor3B const&) = 0xdbca0;
@end

@interface MoreSearchLayer
    virtual ~MoreSearchLayer() = 0x389610;
    virtual ~MoreSearchLayer() = 0x389640;
    virtual bool init() = 0x3896b0;
    virtual void keyBackClicked() = 0x38b820;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x38b6b0;
    virtual void textInputReturn(CCTextInputNode*) = 0x38b770;
@end

@interface RetryLevelLayer
    virtual ~RetryLevelLayer() = 0x28dde0;
    virtual ~RetryLevelLayer() = 0x28de10;
    virtual void keyBackClicked() = 0x28ed10;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x28ec30;
    virtual void customSetup() = 0x28de80;
    virtual void showLayer(bool) = 0x28eaf0;
    virtual void enterAnimFinished() = 0x28ebf0;
    virtual void keyUp(cocos2d::enumKeyCodes) = 0x28ecf0;
@end

@interface SelectFontLayer
    virtual ~SelectFontLayer() = 0x143b80;
    virtual ~SelectFontLayer() = 0x143bb0;
    virtual void keyBackClicked() = 0x1445f0;
@end

@interface SetGroupIDLayer
    virtual ~SetGroupIDLayer() = 0x194520;
    virtual ~SetGroupIDLayer() = 0x194550;
    virtual void keyBackClicked() = 0x198050;
    virtual void textInputClosed(CCTextInputNode*) = 0x197ab0;
    virtual void textChanged(CCTextInputNode*) = 0x197af0;
@end

@interface SetupPulsePopup
    virtual ~SetupPulsePopup() = 0x1e6ca0;
    virtual ~SetupPulsePopup() = 0x1e6cd0;
    virtual void keyBackClicked() = 0x1ec840;
    virtual void show() = 0x1ec870;
    virtual void colorValueChanged(cocos2d::_ccColor3B) = 0x1ec680;
    virtual void textInputOpened(CCTextInputNode*) = 0x1ec900;
    virtual void textInputClosed(CCTextInputNode*) = 0x1ec920;
    virtual void textChanged(CCTextInputNode*) = 0x1ec960;
    virtual void colorSelectClosed(GJSpecialColorSelect*, int) = 0x1ebf20;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x1ecf20;
    virtual void textInputReturn(CCTextInputNode*) = 0x1ecfe0;
@end

@interface SetupShakePopup
    virtual ~SetupShakePopup() = 0x3adb60;
    virtual ~SetupShakePopup() = 0x3adb90;
    virtual void keyBackClicked() = 0x3b00d0;
    virtual void show() = 0x3b0080;
    virtual void textInputClosed(CCTextInputNode*) = 0x3afc80;
    virtual void textChanged(CCTextInputNode*) = 0x3afcc0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x3b0260;
    virtual void textInputReturn(CCTextInputNode*) = 0x3b0320;
@end

@interface SetupSpawnPopup
    virtual ~SetupSpawnPopup() = 0x1396f0;
    virtual ~SetupSpawnPopup() = 0x139720;
    virtual void keyBackClicked() = 0x13bc50;
    virtual void show() = 0x13bc00;
    virtual void textInputClosed(CCTextInputNode*) = 0x13b950;
    virtual void textChanged(CCTextInputNode*) = 0x13b990;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x13bda0;
    virtual void textInputReturn(CCTextInputNode*) = 0x13be60;
@end

@interface ShareLevelLayer
    virtual ~ShareLevelLayer() = 0x129e50;
    virtual ~ShareLevelLayer() = 0x129e80;
    virtual void keyBackClicked() = 0x12b830;
@end

@interface TopArtistsLayer
    virtual ~TopArtistsLayer() = 0x1929f0;
    virtual ~TopArtistsLayer() = 0x192a20;
    virtual bool init() = 0x192c30;
    virtual void registerWithTouchDispatcher() = 0x1935b0;
    virtual void keyBackClicked() = 0x193540;
    virtual void show() = 0x193e40;
    virtual void loadListFinished(cocos2d::CCArray*, char const*) = 0x193600;
    virtual void loadListFailed(char const*) = 0x1936f0;
    virtual void setupPageInfo(std::string, char const*) = 0x193730;
@end

@interface AccountHelpLayer
    virtual ~AccountHelpLayer() = 0x83b50;
    virtual ~AccountHelpLayer() = 0x83d50;
    virtual void customSetup() = 0x83e80;
    virtual void layerHidden() = 0x84b60;
    virtual void accountStatusChanged() = 0x84a20;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x84a50;
@end

@interface CCAnimatedSprite
    virtual ~CCAnimatedSprite() = 0x1a6db0;
    virtual ~CCAnimatedSprite() = 0x1a6dc0;
    virtual void setOpacity(unsigned char) = 0x1a6af0;
    virtual void animationFinished(char const*) = 0x1a6ad0;
    virtual void animationFinishedO(cocos2d::CCObject*) = 0x1a6aa0;
@end

@interface CCContentManager
    virtual ~CCContentManager() = 0xc6960;
    virtual ~CCContentManager() = 0xc69b0;
@end

@interface CCPartAnimSprite
    virtual ~CCPartAnimSprite() = 0x1c04c0;
    virtual ~CCPartAnimSprite() = 0x1c04d0;
    virtual void setScaleX(float) = 0x1bff50;
    virtual void setScaleY(float) = 0x1bff70;
    virtual void setScale(float) = 0x1bff30;
    virtual void setOpacity(unsigned char) = 0x1c01d0;
    virtual void setBlendFunc(cocos2d::_ccBlendFunc) = 0x1bff90;
    virtual void setDisplayFrame(cocos2d::CCSpriteFrame*) = 0x1bfa40;
    virtual void isFrameDisplayed(cocos2d::CCSpriteFrame*) = 0x1bfc20;
    virtual void displayFrame() = 0x1bfc40;
@end

@interface CCScrollLayerExt
    virtual ~CCScrollLayerExt() = 0x2359b0;
    virtual ~CCScrollLayerExt() = 0x235af0;
    virtual void visit() = 0x236550;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x235ef0;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x236300;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x236020;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2362a0;
    virtual void registerWithTouchDispatcher() = 0x235eb0;
    virtual void preVisitWithClippingRect(cocos2d::CCRect) = 0x2366a0;
    virtual void postVisit() = 0x236720;

    void moveToTop() = 0x235870;
    void moveToTopWithOffset(float) = 0x2357d0;
@end

@interface CheckpointObject
    virtual ~CheckpointObject() = 0x808e0;
    virtual ~CheckpointObject() = 0x808f0;
    virtual bool init() = 0x80920;
@end

@interface ColorSelectPopup
    virtual ~ColorSelectPopup() = 0x41ead0;
    virtual ~ColorSelectPopup() = 0x41eb00;
    virtual void keyBackClicked() = 0x423540;
    virtual void show() = 0x423570;
    virtual void colorValueChanged(cocos2d::_ccColor3B) = 0x423320;
    virtual void textInputClosed(CCTextInputNode*) = 0x423820;
    virtual void textChanged(CCTextInputNode*) = 0x423860;
    virtual void colorSelectClosed(GJSpecialColorSelect*, int) = 0x423c80;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x423fa0;
    virtual void textInputReturn(CCTextInputNode*) = 0x424060;
@end

@interface CustomSongWidget
    virtual ~CustomSongWidget() = 0x37bb90;
    virtual ~CustomSongWidget() = 0x37bc20;
    virtual void loadSongInfoFinished(SongInfoObject*) = 0x37e400;
    virtual void loadSongInfoFailed(int, GJSongError) = 0x37e5a0;
    virtual void downloadSongFinished(SongInfoObject*) = 0x37e7b0;
    virtual void downloadSongFailed(int, GJSongError) = 0x37e8c0;
    virtual void songStateChanged() = 0x37e390;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x37ea00;
@end

@interface EditorPauseLayer
    virtual ~EditorPauseLayer() = 0x13c3b0;
    virtual ~EditorPauseLayer() = 0x13c570;
    virtual void keyBackClicked() = 0x13f320;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x13f3a0;
    virtual void customSetup() = 0x13cc00;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x13f1b0;
@end

@interface EffectGameObject
    virtual ~EffectGameObject() = 0xc9750;
    virtual ~EffectGameObject() = 0xc9760;
    virtual void customSetup() = 0xca370;
    virtual void triggerObject(GJBaseGameLayer*) = 0xc9870;
    virtual void getSaveString() = 0xcd7e0;
    virtual void triggerActivated(float) = 0xca310;
    virtual void spawnXPosition() = 0xca2d0;

    static EffectGameObject* create(char const*) = 0xc9790;
    void getTargetColorIndex() = 0xca1f0;

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

@interface FollowRewardPage
    virtual ~FollowRewardPage() = 0x22f270;
    virtual ~FollowRewardPage() = 0x22f2a0;
    virtual bool init() = 0x22f4a0;
    virtual void registerWithTouchDispatcher() = 0x230eb0;
    virtual void keyBackClicked() = 0x230e40;
    virtual void show() = 0x230c10;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x230da0;
    virtual void updateRate() = 0x230950;
@end

@interface GJAccountManager
    virtual ~GJAccountManager() = 0x87990;
    virtual ~GJAccountManager() = 0x879a0;
    virtual bool init() = 0x879d0;
@end

@interface GJFlyGroundLayer
    virtual ~GJFlyGroundLayer() = 0x356cd0;
    virtual ~GJFlyGroundLayer() = 0x356ce0;
    virtual bool init() = 0x356c00;
@end

@interface GJLevelScoreCell
    virtual ~GJLevelScoreCell() = 0x11da90;
    virtual ~GJLevelScoreCell() = 0x11dac0;
    virtual bool init() = 0x11dbb0;
    virtual void draw() = 0x11dc00;
@end

@interface GJMoreGamesLayer
    virtual ~GJMoreGamesLayer() = 0x43a790;
    virtual ~GJMoreGamesLayer() = 0x43a7c0;
    virtual void customSetup() = 0x43ae60;
@end

@interface GameLevelManager
    virtual ~GameLevelManager() = 0x2b7b60;
    virtual ~GameLevelManager() = 0x2b7b70;
    virtual bool init() = 0x2b7ba0;
@end

@interface GameSoundManager
    virtual ~GameSoundManager() = 0x362cc0;
    virtual ~GameSoundManager() = 0x362cd0;
    virtual bool init() = 0x3611d0;
@end

@interface GameStatsManager
    virtual ~GameStatsManager() = 0x392f0;
    virtual ~GameStatsManager() = 0x39300;
    virtual bool init() = 0x39330;
@end

@interface GhostTrailEffect
    virtual ~GhostTrailEffect() = 0x360600;
    virtual ~GhostTrailEffect() = 0x360610;
    virtual bool init() = 0x360730;
    virtual void draw() = 0x360d20;
@end

@interface KeybindingsLayer
    virtual ~KeybindingsLayer() = 0x375460;
    virtual ~KeybindingsLayer() = 0x375600;
    virtual bool init() = 0x375890;
    virtual void keyBackClicked() = 0x376f30;
@end

@interface LevelEditorLayer : GJBaseGameLayer
    virtual ~LevelEditorLayer() = 0x90e80;
    virtual ~LevelEditorLayer() = 0x90eb0;
    virtual void update(float) = 0xa1b70;
    virtual void draw() = 0xa2a70;
    virtual void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*) = 0x9c200;
    virtual void flipGravity(PlayerObject*, bool, bool) = 0xa04e0;
    virtual void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*) = 0x9c590;
    virtual void addToGroup(GameObject*, int, bool) = 0x9dab0;
    virtual void removeFromGroup(GameObject*, int) = 0x9db60;
    virtual void timeForXPos(float) = 0x9c7d0;
    virtual void xPosForTime(float) = 0x9c800;
    virtual void levelSettingsUpdated() = 0x93f30;

    void activateTriggerEffect(EffectGameObject*, float, float, float) = 0x9b520;
    GameObject* addObjectFromString(std::string) = 0x94640;
    void addSpecial(GameObject*) = 0x94f30;
    void addToRedoList(UndoObject*) = 0x96f80;
    void addToUndoList(UndoObject*, bool) = 0x94e20;
    void animateInDualGround(GameObject*, float, bool) = 0xa2780;
    void checkCollisions(PlayerObject*, float) = 0x9e620;
    static LevelEditorLayer* create(GJGameLevel*) = 0x90fb0;
    void createBackground() = 0x929f0;
    void createGroundLayer() = 0x92840;
    GameObject* createObject(int, cocos2d::CCPoint, bool) = 0x957c0;
    void createObjectsFromSetup(std::string) = 0x92230;
    void createObjectsFromString(std::string, bool) = 0x94730;
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
    void toggleDualMode(GameObject*, bool, PlayerObject*, bool) = 0xa0200;
    void toggleGroupPreview(int, bool) = 0x9bea0;
    void transferDefaultColors(GJEffectManager*, GJEffectManager*) = 0x9ab50;
    void undoLastAction() = 0x97770;
    void updateBGAndGColors() = 0x9b9b0;
    void updateBlendValues() = 0x9bc60;
    void updateDualGround(PlayerObject*, int, bool) = 0xa1a60;
    void updateEditorMode() = 0x93b50;
    void updateGameObjectsNew() = 0x9adc0;
    void updateGround(float) = 0x93a60;
    void updateGroundWidth() = 0x92af0;
    void updateOptions() = 0x91ed0;
    void updateToggledGroups() = 0x9bb10;
    void updateVisibility(float) = 0x92c70;

    cocos2d::CCArray* m_objects = 0x3a0;
    EditorUI* m_editorUI = 0x5d8;
@end

@interface LevelLeaderboard
    virtual ~LevelLeaderboard() = 0x20d4b0;
    virtual ~LevelLeaderboard() = 0x20d4e0;
    virtual void registerWithTouchDispatcher() = 0x20e7a0;
    virtual void keyBackClicked() = 0x20e730;
    virtual void show() = 0x20ec40;
    virtual void loadLeaderboardFinished(cocos2d::CCArray*, char const*) = 0x20e980;
    virtual void loadLeaderboardFailed(char const*) = 0x20ead0;
    virtual void updateUserScoreFinished() = 0x20e660;
    virtual void updateUserScoreFailed() = 0x20e690;
@end

@interface LevelSearchLayer
    virtual ~LevelSearchLayer() = 0x384430;
    virtual ~LevelSearchLayer() = 0x384460;
    virtual bool init() = 0x384770;
    virtual void keyBackClicked() = 0x3891f0;
    virtual void textInputOpened(CCTextInputNode*) = 0x3885f0;
    virtual void textInputClosed(CCTextInputNode*) = 0x3887f0;
    virtual void textChanged(CCTextInputNode*) = 0x388910;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x388580;
    virtual void demonFilterSelectClosed(int) = 0x388040;
@end

@interface LevelSelectLayer
    virtual ~LevelSelectLayer() = 0x2381d0;
    virtual ~LevelSelectLayer() = 0x238200;
    virtual void keyBackClicked() = 0x23a5e0;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x23a680;
    virtual void updatePageWithObject(cocos2d::CCObject*, cocos2d::CCObject*) = 0x2390a0;
    virtual void scrollLayerMoved(cocos2d::CCPoint) = 0x23a100;
@end

@interface MoreOptionsLayer
    virtual ~MoreOptionsLayer() = 0x43f3d0;
    virtual ~MoreOptionsLayer() = 0x43f400;
    virtual bool init() = 0x43f470;
    virtual void keyBackClicked() = 0x441f50;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x4420a0;
    virtual void textInputReturn(CCTextInputNode*) = 0x442160;
    virtual void googlePlaySignedIn() = 0x442210;
@end

@interface NumberInputLayer
    virtual ~NumberInputLayer() = 0x255db0;
    virtual ~NumberInputLayer() = 0x255de0;
    virtual bool init() = 0x255ff0;
    virtual void registerWithTouchDispatcher() = 0x256a70;
    virtual void keyBackClicked() = 0x2569c0;
@end

@interface PlayerCheckpoint
    virtual ~PlayerCheckpoint() = 0x80760;
    virtual ~PlayerCheckpoint() = 0x80770;
    virtual bool init() = 0x807a0;
@end

@interface SetTargetIDLayer
    virtual ~SetTargetIDLayer() = 0x159c80;
    virtual ~SetTargetIDLayer() = 0x159cb0;
    virtual void keyBackClicked() = 0x15b990;
    virtual void show() = 0x15b940;
    virtual void textInputClosed(CCTextInputNode*) = 0x15b680;
    virtual void textChanged(CCTextInputNode*) = 0x15b6c0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x15baa0;
    virtual void textInputReturn(CCTextInputNode*) = 0x15bb60;
@end

@interface SetupRotatePopup
    virtual ~SetupRotatePopup() = 0x2f2f80;
    virtual ~SetupRotatePopup() = 0x2f2fb0;
    virtual void keyBackClicked() = 0x2f47c0;
    virtual void show() = 0x2f4770;
    virtual void textInputClosed(CCTextInputNode*) = 0x2f45d0;
    virtual void textChanged(CCTextInputNode*) = 0x2f4610;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x2f48b0;
    virtual void textInputReturn(CCTextInputNode*) = 0x2f4970;
@end

@interface SliderTouchLogic
    virtual ~SliderTouchLogic() = 0x18e690;
    virtual ~SliderTouchLogic() = 0x18e6a0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x18d630;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x18d760;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x18d730;
    virtual void registerWithTouchDispatcher() = 0x18da90;
@end

@interface SongOptionsLayer
    virtual ~SongOptionsLayer() = 0xf2460;
    virtual ~SongOptionsLayer() = 0xf2490;
    virtual void keyBackClicked() = 0xf33c0;
@end

@interface WorldSelectLayer
    virtual ~WorldSelectLayer() = 0x1ff360;
    virtual ~WorldSelectLayer() = 0x1ff390;
    virtual void onExit() = 0x201320;
    virtual void keyBackClicked() = 0x201250;
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer*, int) = 0x201140;
    virtual void scrollLayerScrolledToPage(BoomScrollLayer*, int) = 0x201030;
    virtual void scrollLayerMoved(cocos2d::CCPoint) = 0x201370;
@end

@interface AccountLoginLayer
    virtual ~AccountLoginLayer() = 0x25b7e0;
    virtual ~AccountLoginLayer() = 0x25b810;
    virtual void registerWithTouchDispatcher() = 0x25d7e0;
    virtual void keyBackClicked() = 0x25d6a0;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x25d4d0;
    virtual void textInputOpened(CCTextInputNode*) = 0x25d9c0;
    virtual void textInputClosed(CCTextInputNode*) = 0x25d820;
    virtual void textChanged(CCTextInputNode*) = 0x25d9e0;
    virtual void loginAccountFinished(int, int) = 0x25ce20;
    virtual void loginAccountFailed(AccountError) = 0x25d190;
@end

@interface AchievementsLayer
    virtual ~AchievementsLayer() = 0x1bde00;
    virtual ~AchievementsLayer() = 0x1bde30;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x1be380;
    virtual void customSetup() = 0x1bdea0;

    void loadPage(int) = 0x1be190;
@end

@interface AudioEffectsLayer
    virtual ~AudioEffectsLayer() = 0x271750;
    virtual ~AudioEffectsLayer() = 0x2718f0;
    virtual void draw() = 0x2722a0;
    virtual void updateTweenAction(float, char const*) = 0x272170;
@end

@interface CCMenuItemToggler : cocos2d::CCMenuItem
    virtual ~CCMenuItemToggler() = 0x38c90;
    virtual ~CCMenuItemToggler() = 0x38ca0;
    virtual void activate() = 0x38bc0;
    virtual void selected() = 0x38b80;
    virtual void unselected() = 0x38c00;
    virtual void setEnabled(bool) = 0x38c40;

    static CCMenuItemToggler* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x38400;
    void setSizeMult(float) = 0x38a40;
    void toggle(bool) = 0x38950;

    CCMenuItemSpriteExtra* m_onButton;
    CCMenuItemSpriteExtra* m_offButton;
    bool m_toggled;
    bool m_notClickable;
@end

@interface ColorActionSprite
    virtual ~ColorActionSprite() = 0x18b420;
    virtual ~ColorActionSprite() = 0x18b430;
    virtual bool init() = 0x175370;
@end

@interface DungeonBarsSprite
    virtual ~DungeonBarsSprite() = 0x26c4c0;
    virtual ~DungeonBarsSprite() = 0x26c4d0;
    virtual bool init() = 0x26c2b0;
    virtual void visit() = 0x26c330;
@end

@interface EditTriggersPopup
    virtual ~EditTriggersPopup() = 0x1447b0;
    virtual ~EditTriggersPopup() = 0x1447e0;
    virtual void keyBackClicked() = 0x1458a0;
    virtual void show() = 0x145850;
@end

@interface GJColorSetupLayer
    virtual ~GJColorSetupLayer() = 0xef350;
    virtual ~GJColorSetupLayer() = 0xef380;
    virtual void keyBackClicked() = 0xf0210;
    virtual void colorSelectClosed(cocos2d::CCNode*) = 0xf01e0;
@end

@interface GJRotationControl
    virtual ~GJRotationControl() = 0x320e0;
    virtual ~GJRotationControl() = 0x320f0;
    virtual bool init() = 0x31510;
    virtual void draw() = 0x31ac0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x31790;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x318b0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x31990;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x31a80;
@end

@interface GooglePlayManager
    virtual ~GooglePlayManager() = 0x246050;
    virtual ~GooglePlayManager() = 0x246070;
    virtual bool init() = 0x246130;
@end

@interface LeaderboardsLayer
    virtual ~LeaderboardsLayer() = 0x29f190;
    virtual ~LeaderboardsLayer() = 0x29f320;
    virtual void keyBackClicked() = 0x2a11c0;
    virtual void updateUserScoreFinished() = 0x2a07c0;
    virtual void updateUserScoreFailed() = 0x2a0820;
    virtual void loadLeaderboardFinished(cocos2d::CCArray*, char const*) = 0x2a08c0;
    virtual void loadLeaderboardFailed(char const*) = 0x2a0fa0;
@end

@interface LevelBrowserLayer
    virtual ~LevelBrowserLayer() = 0x251130;
    virtual ~LevelBrowserLayer() = 0x251160;
    virtual void onEnter() = 0x255b70;
    virtual void onEnterTransitionDidFinish() = 0x255be0;
    virtual void keyBackClicked() = 0x255630;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x255680;
    virtual void loadLevelsFinished(cocos2d::CCArray*, char const*) = 0x254e10;
    virtual void loadLevelsFailed(char const*) = 0x254f60;
    virtual void setupPageInfo(std::string, char const*) = 0x255050;
    virtual void setTextPopupClosed(SetTextPopup*, std::string) = 0x255760;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x255840;
    virtual void setIDPopupClosed(SetIDPopup*, int) = 0x2554f0;
@end

@interface LevelFeatureLayer
    virtual ~LevelFeatureLayer() = 0x296c30;
    virtual ~LevelFeatureLayer() = 0x296c60;
    virtual void keyBackClicked() = 0x297a00;
@end

@interface LocalLevelManager
    virtual ~LocalLevelManager() = 0x35df80;
    virtual ~LocalLevelManager() = 0x35df90;
    virtual bool init() = 0x35dfc0;
    virtual void encodeDataTo(DS_Dictionary*) = 0x35ed60;
    virtual void dataLoaded(DS_Dictionary*) = 0x35eda0;
    virtual void firstLoad() = 0x35ed10;
@end

@interface PromoInterstitial
    virtual ~PromoInterstitial() = 0x16a270;
    virtual ~PromoInterstitial() = 0x16a2a0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x169e80;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x16a0c0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x169fa0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x16a040;
    virtual void keyBackClicked() = 0x169cf0;
    virtual void show() = 0x169cc0;
@end

@interface PurchaseItemPopup
    virtual ~PurchaseItemPopup() = 0x1a2460;
    virtual ~PurchaseItemPopup() = 0x1a25e0;
    virtual void keyBackClicked() = 0x1a2fc0;
@end

@interface RewardUnlockLayer
    virtual ~RewardUnlockLayer() = 0xf51a0;
    virtual ~RewardUnlockLayer() = 0xf51d0;
    virtual void keyBackClicked() = 0xf81b0;
    virtual void currencyWillExit(CurrencyRewardLayer*) = 0xf8170;
@end

@interface SecretNumberLayer
    virtual ~SecretNumberLayer() = 0x266b90;
    virtual ~SecretNumberLayer() = 0x266bc0;
    virtual bool init() = 0x266c30;
@end

@interface SetupOpacityPopup
    virtual ~SetupOpacityPopup() = 0x32ad0;
    virtual ~SetupOpacityPopup() = 0x32b00;
    virtual void keyBackClicked() = 0x34bf0;
    virtual void show() = 0x34ba0;
    virtual void textInputClosed(CCTextInputNode*) = 0x34a20;
    virtual void textChanged(CCTextInputNode*) = 0x34a60;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x34e50;
    virtual void textInputReturn(CCTextInputNode*) = 0x34f10;
@end

@interface ShareCommentLayer
    virtual ~ShareCommentLayer() = 0x34eb90;
    virtual ~ShareCommentLayer() = 0x34ebc0;
    virtual void registerWithTouchDispatcher() = 0x350590;
    virtual void keyBackClicked() = 0x3504e0;
    virtual void textInputOpened(CCTextInputNode*) = 0x350690;
    virtual void textInputClosed(CCTextInputNode*) = 0x3505d0;
    virtual void textChanged(CCTextInputNode*) = 0x3507b0;
    virtual void uploadActionFinished(int, int) = 0x3509f0;
    virtual void uploadActionFailed(int, int) = 0x350ad0;
    virtual void onClosePopup(UploadActionPopup*) = 0x350ba0;
@end

@interface SpriteDescription
    virtual ~SpriteDescription() = 0x2e6c00;
    virtual ~SpriteDescription() = 0x2e6c50;
@end

@interface TextInputDelegate
    virtual void textChanged(CCTextInputNode*) = 0x1573f0;
    virtual void textInputOpened(CCTextInputNode*) = 0x6200;
    virtual void textInputClosed(CCTextInputNode*) = 0x157400;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0xe1810;
    virtual void textInputReturn(CCTextInputNode*) = 0xe1820;
    virtual void allowTextInput(CCTextInputNode*) = 0x6210;
@end

@interface UploadActionPopup
    virtual ~UploadActionPopup() = 0x14be50;
    virtual ~UploadActionPopup() = 0x14bff0;
    virtual void keyBackClicked() = 0x14ca10;
@end

@interface VideoOptionsLayer
    virtual ~VideoOptionsLayer() = 0x4423c0;
    virtual ~VideoOptionsLayer() = 0x4423f0;
    virtual bool init() = 0x442460;
    virtual void keyBackClicked() = 0x443f50;
@end

@interface AchievementManager
    virtual ~AchievementManager() = 0x434b90;
    virtual ~AchievementManager() = 0x434ba0;
    virtual bool init() = 0x4244c0;

    void getAllAchievements() = 0x434d60;
    void sharedState() = 0x424420;
@end

@interface AnimatedGameObject
    virtual ~AnimatedGameObject() = 0xc79b0;
    virtual ~AnimatedGameObject() = 0xc79c0;
    virtual void setOpacity(unsigned char) = 0xc8640;
    virtual void resetObject() = 0xc9720;
    virtual void activateObject() = 0xc84d0;
    virtual void deactivateObject(bool) = 0xc85e0;
    virtual void setObjectColor(cocos2d::_ccColor3B const&) = 0xc8720;
    virtual void animationFinished(char const*) = 0xc8750;
    virtual void displayFrameChanged(cocos2d::CCObject*, std::string) = 0xc9160;

    void playAnimation(int) = 0xc93d0;
    void updateChildSpriteColor(cocos2d::_ccColor3B) = 0xc8450;
@end

@interface AnimatedShopKeeper
    virtual ~AnimatedShopKeeper() = 0x1a3040;
    virtual ~AnimatedShopKeeper() = 0x1a3050;
    virtual void animationFinished(char const*) = 0x1a3130;
@end

@interface ColorChannelSprite
    virtual ~ColorChannelSprite() = 0x18b3e0;
    virtual ~ColorChannelSprite() = 0x18b3f0;
    virtual bool init() = 0x16deb0;
@end

@interface ConfigureHSVWidget
    virtual ~ConfigureHSVWidget() = 0x2372d0;
    virtual ~ConfigureHSVWidget() = 0x2372e0;
@end

@interface EditorOptionsLayer
    virtual ~EditorOptionsLayer() = 0x1471e0;
    virtual ~EditorOptionsLayer() = 0x147210;
    virtual bool init() = 0x147420;
    virtual void setupOptions() = 0x147440;
    virtual void onClose(cocos2d::CCObject*) = 0x147c30;
@end

@interface FriendRequestPopup
    virtual ~FriendRequestPopup() = 0x14cc00;
    virtual ~FriendRequestPopup() = 0x14cc30;
    virtual void keyBackClicked() = 0x14e2a0;
    virtual void uploadActionFinished(int, int) = 0x14e390;
    virtual void uploadActionFailed(int, int) = 0x14e560;
    virtual void onClosePopup(UploadActionPopup*) = 0x14e640;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x14e7c0;
@end

@interface FriendsProfilePage
    virtual ~FriendsProfilePage() = 0x3a94d0;
    virtual ~FriendsProfilePage() = 0x3a9500;
    virtual void registerWithTouchDispatcher() = 0x3aa6e0;
    virtual void keyBackClicked() = 0x3aa5e0;
    virtual void getUserListFinished(cocos2d::CCArray*, UserListType) = 0x3aa240;
    virtual void getUserListFailed(UserListType, GJErrorCode) = 0x3aa390;
    virtual void userListChanged(cocos2d::CCArray*, UserListType) = 0x3aa4a0;
    virtual void forceReloadList(UserListType) = 0x3aa4e0;
@end

@interface GJCommentListLayer
    virtual ~GJCommentListLayer() = 0x1482a0;
    virtual ~GJCommentListLayer() = 0x148440;
@end

@interface GJMoveCommandLayer
    virtual ~GJMoveCommandLayer() = 0x36f800;
    virtual ~GJMoveCommandLayer() = 0x36f830;
    virtual void keyBackClicked() = 0x374970;
    virtual void valuePopupClosed(ConfigureValuePopup*, float) = 0x373c20;
    virtual void textInputClosed(CCTextInputNode*) = 0x374430;
    virtual void textChanged(CCTextInputNode*) = 0x374470;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x374b50;
    virtual void textInputReturn(CCTextInputNode*) = 0x374c10;
@end

@interface GameEffectsManager
    virtual ~GameEffectsManager() = 0xe6a70;
    virtual ~GameEffectsManager() = 0xe6a80;
@end

@interface GroupCommandObject
    virtual ~GroupCommandObject() = 0x16e450;
    virtual ~GroupCommandObject() = 0x16e4b0;
    virtual bool init() = 0x16e590;
    virtual void updateTweenAction(float, char const*) = 0x16ead0;
@end

@interface KeybindingsManager
    virtual ~KeybindingsManager() = 0x289910;
    virtual ~KeybindingsManager() = 0x289980;
    virtual bool init() = 0x289a00;
@end

@interface LevelSettingsLayer
    virtual ~LevelSettingsLayer() = 0xa7b90;
    virtual ~LevelSettingsLayer() = 0xa7bc0;
    virtual void registerWithTouchDispatcher() = 0xac070;
    virtual void keyBackClicked() = 0xac7b0;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0xac260;
    virtual void colorSelectClosed(cocos2d::CCNode*) = 0xac100;
    virtual void customSongLayerClosed() = 0xac340;
    virtual void selectArtClosed(SelectArtLayer*) = 0xac5e0;
@end

@interface AchievementNotifier : cocos2d::CCNode
    virtual ~AchievementNotifier() = 0x4651c0;
    virtual ~AchievementNotifier() = 0x4651d0;
    virtual bool init() = 0x464e90;

    void sharedState() = 0x464e00;
    void willSwitchToScene(cocos2d::CCScene*) = 0x4650b0;
@end

@interface CCAnimateFrameCache
    virtual ~CCAnimateFrameCache() = 0x2e4f90;
    virtual ~CCAnimateFrameCache() = 0x2e4fa0;
@end

@interface CollisionBlockPopup
    virtual ~CollisionBlockPopup() = 0x12ff70;
    virtual ~CollisionBlockPopup() = 0x12ffa0;
    virtual void keyBackClicked() = 0x1317e0;
    virtual void show() = 0x131790;
    virtual void textInputClosed(CCTextInputNode*) = 0x131630;
    virtual void textChanged(CCTextInputNode*) = 0x131670;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x1318f0;
    virtual void textInputReturn(CCTextInputNode*) = 0x1319b0;
@end

@interface CommunityCreditNode
    virtual ~CommunityCreditNode() = 0x19ad00;
    virtual ~CommunityCreditNode() = 0x19ad50;
@end

@interface ConfigureValuePopup
    virtual ~ConfigureValuePopup() = 0x381ae0;
    virtual ~ConfigureValuePopup() = 0x381ca0;
    virtual void keyBackClicked() = 0x382c00;
    virtual void textInputClosed(CCTextInputNode*) = 0x382a90;
    virtual void textChanged(CCTextInputNode*) = 0x382ad0;
@end

@interface CurrencyRewardLayer
    virtual ~CurrencyRewardLayer() = 0x447950;
    virtual ~CurrencyRewardLayer() = 0x447aa0;
    virtual void update(float) = 0x44a5c0;
@end

@interface EditGameObjectPopup
    virtual ~EditGameObjectPopup() = 0x153600;
    virtual ~EditGameObjectPopup() = 0x153630;
    virtual void keyBackClicked() = 0x154070;
    virtual void show() = 0x154020;
@end

@interface FRequestProfilePage
    virtual ~FRequestProfilePage() = 0x435980;
    virtual ~FRequestProfilePage() = 0x4359b0;
    virtual void registerWithTouchDispatcher() = 0x437300;
    virtual void keyBackClicked() = 0x4372d0;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x437200;
    virtual void onClosePopup(UploadActionPopup*) = 0x437340;
    virtual void uploadActionFinished(int, int) = 0x4373a0;
    virtual void uploadActionFailed(int, int) = 0x437500;
    virtual void loadFRequestsFinished(cocos2d::CCArray*, char const*) = 0x437840;
    virtual void loadFRequestsFailed(char const*, GJErrorCode) = 0x437930;
    virtual void setupPageInfo(std::string, char const*) = 0x437ab0;
    virtual void forceReloadRequests(bool) = 0x437a60;
@end

@interface GJWriteMessagePopup
    virtual ~GJWriteMessagePopup() = 0x150d50;
    virtual ~GJWriteMessagePopup() = 0x150d80;
    virtual void registerWithTouchDispatcher() = 0x1527b0;
    virtual void keyBackClicked() = 0x152780;
    virtual void textInputOpened(CCTextInputNode*) = 0x152830;
    virtual void textInputClosed(CCTextInputNode*) = 0x1527f0;
    virtual void textChanged(CCTextInputNode*) = 0x152990;
    virtual void uploadMessageFinished(int) = 0x152fc0;
    virtual void uploadMessageFailed(int) = 0x1530a0;
    virtual void onClosePopup(UploadActionPopup*) = 0x153170;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x1532b0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x153390;
    virtual void textInputReturn(CCTextInputNode*) = 0x153450;
@end

@interface GauntletSelectLayer
    virtual ~GauntletSelectLayer() = 0x2e91e0;
    virtual ~GauntletSelectLayer() = 0x2e9210;
    virtual void onExit() = 0x2eb490;
    virtual void keyBackClicked() = 0x2eb370;
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer*, int) = 0x2eb260;
    virtual void scrollLayerScrolledToPage(BoomScrollLayer*, int) = 0x2eb150;
    virtual void loadLevelsFinished(cocos2d::CCArray*, char const*) = 0x2ea630;
    virtual void loadLevelsFailed(char const*) = 0x2ea820;
@end

@interface GravityEffectSprite
    virtual ~GravityEffectSprite() = 0x80d90;
    virtual ~GravityEffectSprite() = 0x80da0;
    virtual bool init() = 0x80b20;
    virtual void draw() = 0x80d80;
@end

@interface LevelSettingsObject
    virtual ~LevelSettingsObject() = 0xa5650;
    virtual ~LevelSettingsObject() = 0xa5660;
    virtual bool init() = 0xa5690;
@end

@interface MessagesProfilePage
    virtual ~MessagesProfilePage() = 0x106360;
    virtual ~MessagesProfilePage() = 0x106390;
    virtual void registerWithTouchDispatcher() = 0x107eb0;
    virtual void keyBackClicked() = 0x107e80;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x107b20;
    virtual void onClosePopup(UploadActionPopup*) = 0x107b90;
    virtual void uploadActionFinished(int, int) = 0x107bf0;
    virtual void uploadActionFailed(int, int) = 0x107d50;
    virtual void loadMessagesFinished(cocos2d::CCArray*, char const*) = 0x108150;
    virtual void loadMessagesFailed(char const*, GJErrorCode) = 0x108280;
    virtual void forceReloadMessages(bool) = 0x1083b0;
    virtual void setupPageInfo(std::string, char const*) = 0x108400;
@end

@interface SetupAnimationPopup
    virtual ~SetupAnimationPopup() = 0x208ad0;
    virtual ~SetupAnimationPopup() = 0x208b00;
    virtual void keyBackClicked() = 0x20ade0;
    virtual void show() = 0x20ad90;
    virtual void textInputClosed(CCTextInputNode*) = 0x20aaf0;
    virtual void textChanged(CCTextInputNode*) = 0x20ab30;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x20af30;
    virtual void textInputReturn(CCTextInputNode*) = 0x20aff0;
@end

@interface AccountRegisterLayer
    virtual ~AccountRegisterLayer() = 0x257330;
    virtual ~AccountRegisterLayer() = 0x257360;
    virtual bool init() = 0x2575d0;
    virtual void registerWithTouchDispatcher() = 0x25a910;
    virtual void keyBackClicked() = 0x25a730;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x25a380;
    virtual void textInputOpened(CCTextInputNode*) = 0x25b420;
    virtual void textInputClosed(CCTextInputNode*) = 0x25a950;
    virtual void textChanged(CCTextInputNode*) = 0x25b440;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x25b460;
    virtual void textInputReturn(CCTextInputNode*) = 0x25b520;
    virtual void allowTextInput(CCTextInputNode*) = 0x25b5d0;
    virtual void registerAccountFinished() = 0x259bf0;
    virtual void registerAccountFailed(AccountError) = 0x259d70;
@end

@interface CommunityCreditsPage
    virtual ~CommunityCreditsPage() = 0x19b080;
    virtual ~CommunityCreditsPage() = 0x19b0b0;
    virtual bool init() = 0x19b2b0;
    virtual void registerWithTouchDispatcher() = 0x19e9f0;
    virtual void keyBackClicked() = 0x19e980;
    virtual void show() = 0x19e7e0;
@end

@interface CustomizeObjectLayer
    virtual ~CustomizeObjectLayer() = 0xdd2a0;
    virtual ~CustomizeObjectLayer() = 0xdd2d0;
    virtual void keyBackClicked() = 0xe16c0;
    virtual void textInputOpened(CCTextInputNode*) = 0xe1280;
    virtual void textInputClosed(CCTextInputNode*) = 0xe1430;
    virtual void textChanged(CCTextInputNode*) = 0xe1470;
    virtual void hsvPopupClosed(HSVWidgetPopup*, cocos2d::_ccHSVValue) = 0xe1050;
    virtual void colorSelectClosed(cocos2d::CCNode*) = 0xe0c60;
    virtual void colorSetupClosed(int) = 0xe0850;
@end

@interface GJFollowCommandLayer
    virtual ~GJFollowCommandLayer() = 0x16a4b0;
    virtual ~GJFollowCommandLayer() = 0x16a4e0;
    virtual void keyBackClicked() = 0x16da20;
    virtual void textInputClosed(CCTextInputNode*) = 0x16d440;
    virtual void textChanged(CCTextInputNode*) = 0x16d480;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x16dc00;
    virtual void textInputReturn(CCTextInputNode*) = 0x16dcc0;
@end

@interface GJRotateCommandLayer
    virtual ~GJRotateCommandLayer() = 0x1b00;
    virtual ~GJRotateCommandLayer() = 0x1b30;
    virtual void keyBackClicked() = 0x5e30;
    virtual void valuePopupClosed(ConfigureValuePopup*, float) = 0x5160;
    virtual void textInputClosed(CCTextInputNode*) = 0x5890;
    virtual void textChanged(CCTextInputNode*) = 0x58d0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x6010;
    virtual void textInputReturn(CCTextInputNode*) = 0x60d0;
@end

@interface GJSpecialColorSelect
    virtual ~GJSpecialColorSelect() = 0x3830f0;
    virtual ~GJSpecialColorSelect() = 0x383120;
    virtual void keyBackClicked() = 0x383ca0;
@end

@interface MusicDelegateHandler
    virtual ~MusicDelegateHandler() = 0x2ee460;
    virtual ~MusicDelegateHandler() = 0x2ee480;
@end

@interface MusicDownloadManager
    virtual ~MusicDownloadManager() = 0x2ef0c0;
    virtual ~MusicDownloadManager() = 0x2ef0d0;
    virtual bool init() = 0x2ef100;
@end

@interface ParentalOptionsLayer
    virtual ~ParentalOptionsLayer() = 0x445d00;
    virtual ~ParentalOptionsLayer() = 0x445d30;
    virtual bool init() = 0x445da0;
    virtual void keyBackClicked() = 0x4472d0;
@end

@interface TeleportPortalObject
    virtual ~TeleportPortalObject() = 0xdc290;
    virtual ~TeleportPortalObject() = 0xdc2a0;
    virtual void setPosition(cocos2d::CCPoint const&) = 0xdad00;
    virtual void setRotation(float) = 0xdadb0;
    virtual void setStartPos(cocos2d::CCPoint) = 0xdab50;
    virtual void getSaveString() = 0xdaf00;
    virtual void addToGroup(int) = 0xdae40;
    virtual void removeFromGroup(int) = 0xdaea0;
    virtual void setRotation2(float) = 0xdae10;
    virtual void addToGroup2(int) = 0xdae20;
    virtual void removeFromGroup2(int) = 0xdae30;
@end

@interface UploadActionDelegate
    virtual void uploadActionFinished(int, int) = 0x3aa720;
    virtual void uploadActionFailed(int, int) = 0x3aa730;
@end

@interface CCMenuItemSpriteExtra
    virtual ~CCMenuItemSpriteExtra() = 0x125c00;
    virtual ~CCMenuItemSpriteExtra() = 0x125c90;
    virtual void activate() = 0x125730;
    virtual void selected() = 0x125840;
    virtual void unselected() = 0x125a70;

    static CCMenuItemSpriteExtra* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x1253c0;
    void setSizeMult(float) = 0x1255e0;
    CCMenuItemSpriteExtra() = 0x32670;
    bool init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x125450;
@end

@interface CreateGuidelinesLayer
    virtual ~CreateGuidelinesLayer() = 0x297c70;
    virtual ~CreateGuidelinesLayer() = 0x297ca0;
    virtual void update(float) = 0x299c50;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x299dd0;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x299f50;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x299f70;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x29a030;
    virtual void registerWithTouchDispatcher() = 0x29a070;
    virtual void keyBackClicked() = 0x299ce0;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x29a0b0;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x299c70;
    virtual void keyUp(cocos2d::enumKeyCodes) = 0x29a180;
@end

@interface GJPFollowCommandLayer
    virtual ~GJPFollowCommandLayer() = 0x1ae980;
    virtual ~GJPFollowCommandLayer() = 0x1ae9b0;
    virtual void keyBackClicked() = 0x1b2590;
    virtual void textInputClosed(CCTextInputNode*) = 0x1b1d80;
    virtual void textChanged(CCTextInputNode*) = 0x1b1dc0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x1b27a0;
    virtual void textInputReturn(CCTextInputNode*) = 0x1b2860;
@end

@interface MoreVideoOptionsLayer
    virtual ~MoreVideoOptionsLayer() = 0x4440b0;
    virtual ~MoreVideoOptionsLayer() = 0x4440e0;
    virtual bool init() = 0x444150;
    virtual void keyBackClicked() = 0x445ba0;
@end

@interface MusicDownloadDelegate
    virtual void loadSongInfoFinished(SongInfoObject*) = 0x320a0;
    virtual void loadSongInfoFailed(int, GJSongError) = 0x320b0;
    virtual void downloadSongFinished(SongInfoObject*) = 0x320c0;
    virtual void downloadSongFailed(int, GJSongError) = 0x320d0;
@end

@interface SetupTouchTogglePopup
    virtual ~SetupTouchTogglePopup() = 0x157600;
    virtual ~SetupTouchTogglePopup() = 0x157630;
    virtual void keyBackClicked() = 0x159850;
    virtual void show() = 0x159800;
    virtual void textInputClosed(CCTextInputNode*) = 0x159660;
    virtual void textChanged(CCTextInputNode*) = 0x1596a0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x159960;
    virtual void textInputReturn(CCTextInputNode*) = 0x159a20;
@end

@interface ColorSelectLiveOverlay
    virtual ~ColorSelectLiveOverlay() = 0x2e24c0;
    virtual ~ColorSelectLiveOverlay() = 0x2e24f0;
    virtual void keyBackClicked() = 0x2e4550;
    virtual void show() = 0x2e4620;
@end

@interface DemonFilterSelectLayer
    virtual ~DemonFilterSelectLayer() = 0x38b930;
    virtual ~DemonFilterSelectLayer() = 0x38b960;
    virtual bool init() = 0x38b9d0;
    virtual void keyBackClicked() = 0x38c060;
@end

@interface GJAccountSettingsLayer
    virtual ~GJAccountSettingsLayer() = 0x148760;
    virtual ~GJAccountSettingsLayer() = 0x148790;
    virtual void keyBackClicked() = 0x14b200;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x14abe0;
    virtual void textInputReturn(CCTextInputNode*) = 0x14aca0;
@end

@interface SetupAnimSettingsPopup
    virtual ~SetupAnimSettingsPopup() = 0x585c0;
    virtual ~SetupAnimSettingsPopup() = 0x585f0;
    virtual void keyBackClicked() = 0x599f0;
    virtual void show() = 0x599a0;
    virtual void textInputClosed(CCTextInputNode*) = 0x597b0;
    virtual void textChanged(CCTextInputNode*) = 0x597f0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x59ae0;
    virtual void textInputReturn(CCTextInputNode*) = 0x59ba0;
@end

@interface SetupCountTriggerPopup
    virtual ~SetupCountTriggerPopup() = 0x15c620;
    virtual ~SetupCountTriggerPopup() = 0x15c650;
    virtual void keyBackClicked() = 0x15ec70;
    virtual void show() = 0x15ec20;
    virtual void textInputClosed(CCTextInputNode*) = 0x15e960;
    virtual void textChanged(CCTextInputNode*) = 0x15e9a0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x15ede0;
    virtual void textInputReturn(CCTextInputNode*) = 0x15eea0;
@end

@interface SetupInstantCountPopup
    virtual ~SetupInstantCountPopup() = 0x352b70;
    virtual ~SetupInstantCountPopup() = 0x352ba0;
    virtual void keyBackClicked() = 0x355600;
    virtual void show() = 0x3555b0;
    virtual void textInputClosed(CCTextInputNode*) = 0x355230;
    virtual void textChanged(CCTextInputNode*) = 0x355270;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x355770;
    virtual void textInputReturn(CCTextInputNode*) = 0x355830;
@end

@interface SetupObjectTogglePopup
    virtual ~SetupObjectTogglePopup() = 0x1c07c0;
    virtual ~SetupObjectTogglePopup() = 0x1c07f0;
    virtual void keyBackClicked() = 0x1c27f0;
    virtual void show() = 0x1c27a0;
    virtual void textInputClosed(CCTextInputNode*) = 0x1c2620;
    virtual void textChanged(CCTextInputNode*) = 0x1c2660;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x1c2900;
    virtual void textInputReturn(CCTextInputNode*) = 0x1c29c0;
@end

@interface SpriteAnimationManager
    virtual ~SpriteAnimationManager() = 0x41e630;
    virtual ~SpriteAnimationManager() = 0x41e640;
@end

@interface BoomScrollLayerDelegate
    virtual void scrollLayerScrollingStarted(BoomScrollLayer*) = 0x204370;
    virtual void scrollLayerScrolledToPage(BoomScrollLayer*, int) = 0x23cf70;
    virtual void scrollLayerMoved(cocos2d::CCPoint) = 0x2eca30;
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer*, int) = 0x23cf80;
@end

@interface SetupPickupTriggerPopup
    virtual ~SetupPickupTriggerPopup() = 0x35dd0;
    virtual ~SetupPickupTriggerPopup() = 0x35e00;
    virtual void keyBackClicked() = 0x37f00;
    virtual void show() = 0x37eb0;
    virtual void textInputClosed(CCTextInputNode*) = 0x37c60;
    virtual void textChanged(CCTextInputNode*) = 0x37ca0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x38050;
    virtual void textInputReturn(CCTextInputNode*) = 0x38110;
@end

@interface ShareLevelSettingsLayer
    virtual ~ShareLevelSettingsLayer() = 0x12c700;
    virtual ~ShareLevelSettingsLayer() = 0x12c8c0;
    virtual void keyBackClicked() = 0x12db50;
    virtual void numberInputClosed(NumberInputLayer*) = 0x12da50;
@end

@interface PlatformDownloadDelegate
    virtual void downloadFinished(char const*) = 0x2f2db0;
    virtual void downloadFailed(char const*) = 0x2f2dc0;
@end

@interface SetupInteractObjectPopup
    virtual ~SetupInteractObjectPopup() = 0x29a360;
    virtual ~SetupInteractObjectPopup() = 0x29a390;
    virtual void keyBackClicked() = 0x29c550;
    virtual void show() = 0x29c500;
    virtual void textInputClosed(CCTextInputNode*) = 0x29c270;
    virtual void textChanged(CCTextInputNode*) = 0x29c2b0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x29c6a0;
    virtual void textInputReturn(CCTextInputNode*) = 0x29c760;
@end

@interface SetupCollisionTriggerPopup
    virtual ~SetupCollisionTriggerPopup() = 0x1d6080;
    virtual ~SetupCollisionTriggerPopup() = 0x1d60b0;
    virtual void keyBackClicked() = 0x1d8880;
    virtual void show() = 0x1d8830;
    virtual void textInputClosed(CCTextInputNode*) = 0x1d8490;
    virtual void textChanged(CCTextInputNode*) = 0x1d84d0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x1d89f0;
    virtual void textInputReturn(CCTextInputNode*) = 0x1d8ab0;
@end

@interface UpdateAccountSettingsPopup
    virtual ~UpdateAccountSettingsPopup() = 0x14b330;
    virtual ~UpdateAccountSettingsPopup() = 0x14b360;
    virtual void keyBackClicked() = 0x14bcb0;
    virtual void updateSettingsFinished() = 0x14ba40;
    virtual void updateSettingsFailed() = 0x14bb80;
@end

@interface Slider
    virtual ~Slider() = 0x18e5f0;
    virtual ~Slider() = 0x18e600;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x18e2e0;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x18e360;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x18e320;
@end

@interface UILayer
    virtual ~UILayer() = 0x280c60;
    virtual ~UILayer() = 0x280c90;
    virtual bool init() = 0x27fe40;
    virtual void draw() = 0x280980;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x280990;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x280ad0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x280af0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x280bd0;
    virtual void registerWithTouchDispatcher() = 0x280c10;
    virtual void keyBackClicked() = 0x2808e0;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x280470;
    virtual void keyUp(cocos2d::enumKeyCodes) = 0x280600;
@end

@interface EditorUI : cocos2d::CCLayer
    virtual ~EditorUI() = 0x89e0;
    virtual ~EditorUI() = 0x8a10;
    virtual void draw() = 0x2e170;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2ed60;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2f3d0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2fb00;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x30710;
    virtual void registerWithTouchDispatcher() = 0x30750;
    virtual void keyBackClicked() = 0x24c50;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x30790;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x1f590;
    virtual void songStateChanged() = 0x24760;
    virtual void colorSelectClosed(cocos2d::CCNode*) = 0x29940;
    virtual void keyUp(cocos2d::enumKeyCodes) = 0x312b0;
    virtual void scrollWheel(float, float) = 0x31370;
    virtual void angleChangeBegin() = 0x2e260;
    virtual void angleChangeEnded() = 0x2e320;
    virtual void angleChanged(float) = 0x2e3a0;
    virtual void scaleChangeBegin() = 0x25120;
    virtual void scaleChangeEnded() = 0x251e0;
    virtual void scaleChanged(float) = 0x25260;

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
    void moveObject(GameObject*, cocos2d::CCPoint) = 0x24b10;
    void onDuplicate(cocos2d::CCObject*) = 0x18ba0;
    void pasteObjects(std::string) = 0x232d0;
    void playerTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2ebf0;
    void playtestStopped() = 0x24790;
    void redoLastAction(cocos2d::CCObject*) = 0xb8e0;
    void replaceGroupID(GameObject*, int, int) = 0x27470;
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

@interface GManager
    virtual ~GManager() = 0x26fb90;
    virtual ~GManager() = 0x26fbe0;
    virtual bool init() = 0x26ee00;
    virtual void setup() = 0x26ee20;
    virtual void encodeDataTo(DS_Dictionary*) = 0x26f5b0;
    virtual void dataLoaded(DS_Dictionary*) = 0x26fb70;
    virtual void firstLoad() = 0x26fb80;
@end

@interface GameCell
    virtual ~GameCell() = 0x18fb70;
    virtual ~GameCell() = 0x18fc20;
    virtual bool init() = 0x18f980;
    virtual void draw() = 0x18fa40;
@end

@interface ListCell
    virtual ~ListCell() = 0x18fad0;
    virtual ~ListCell() = 0x18fae0;
    virtual bool init() = 0x18f7a0;
    virtual void draw() = 0x18f840;
@end

@interface SongCell
    virtual ~SongCell() = 0x11c0e0;
    virtual ~SongCell() = 0x11c110;
    virtual bool init() = 0x11c200;
    virtual void draw() = 0x11c240;
@end

@interface TextArea
    virtual ~TextArea() = 0x19faa0;
    virtual ~TextArea() = 0x19fb10;
    virtual void draw() = 0x19f890;
    virtual void setOpacity(unsigned char) = 0x19f760;
@end

@interface GJComment
    virtual ~GJComment() = 0x2dfd70;
    virtual ~GJComment() = 0x2dfd80;
    virtual bool init() = 0x2dfec0;
@end

@interface GJMapPack
    virtual ~GJMapPack() = 0x2ddd50;
    virtual ~GJMapPack() = 0x2ddd60;
    virtual bool init() = 0x2de0e0;
@end

@interface InfoLayer
    virtual ~InfoLayer() = 0x456560;
    virtual ~InfoLayer() = 0x456590;
    virtual void registerWithTouchDispatcher() = 0x45a070;
    virtual void keyBackClicked() = 0x45a000;
    virtual void show() = 0x45ab80;
    virtual void loadCommentsFinished(cocos2d::CCArray*, char const*) = 0x45a1b0;
    virtual void loadCommentsFailed(char const*) = 0x45a270;
    virtual void setupPageInfo(std::string, char const*) = 0x45a320;
    virtual void commentUploadFinished(int) = 0x45a890;
    virtual void commentUploadFailed(int, CommentError) = 0x45a960;
    virtual void updateUserScoreFinished() = 0x45a720;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x459d50;
@end

@interface KeysLayer
    virtual ~KeysLayer() = 0x44ce00;
    virtual ~KeysLayer() = 0x44cfa0;
    virtual bool init() = 0x44d340;
    virtual void keyBackClicked() = 0x453210;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x4532e0;
    virtual void dialogClosed(DialogLayer*) = 0x453090;
@end

@interface LevelCell
    virtual ~LevelCell() = 0x117820;
    virtual ~LevelCell() = 0x117850;
    virtual bool init() = 0x117a40;
    virtual void draw() = 0x11a4d0;
@end

@interface LevelPage
    virtual ~LevelPage() = 0x23aeb0;
    virtual ~LevelPage() = 0x23aee0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x23cd90;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x23ceb0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x23ced0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x23cef0;
    virtual void registerWithTouchDispatcher() = 0x23cf30;
    virtual void dialogClosed(DialogLayer*) = 0x23cad0;
@end

@interface MenuLayer : cocos2d::CCLayer, FLAlertLayerProtocol
    virtual ~MenuLayer() = 0x1d1230;
    virtual ~MenuLayer() = 0x1d1260;
    virtual bool init() = 0x1d14b0;
    virtual void keyBackClicked() = 0x1d3160;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x1d33d0;
    virtual void googlePlaySignedIn() = 0x1d2f30;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x1d3190;

    virtual void onMoreGames(cocos2d::CCObject*) = 0x1d2ad0;
    virtual void onQuit(cocos2d::CCObject*) = 0x1d2b40;
    virtual void scene(bool) = 0x1d12d0;
@end

@interface PlayLayer : GJBaseGameLayer, CCCircleWaveDelegate
    virtual ~PlayLayer() = 0x6b460;
    virtual ~PlayLayer() = 0x6b490;
    virtual void update(float) = 0x77900;
    virtual void onEnterTransitionDidFinish() = 0x806e0;
    virtual void onExit() = 0x80710;
    virtual void draw() = 0x7d160;
    virtual void visit() = 0x75ef0;
    virtual void updateTweenAction(float, char const*) = 0x7ffb0;
    virtual void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*) = 0x7c7f0;
    virtual void flipGravity(PlayerObject*, bool, bool) = 0x7cd10;
    virtual void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*) = 0x7aa10;
    virtual void timeForXPos(float) = 0x7d120;
    virtual void xPosForTime(float) = 0x7d140;
    virtual void currencyWillExit(CurrencyRewardLayer*) = 0x7e070;
    virtual void circleWaveWillBeRemoved(CCCircleWave*) = 0x7e110;
    virtual void dialogClosed(DialogLayer*) = 0x7e0b0;

    void addCircle(CCCircleWave*) = 0x7e0f0;
    void addObject(GameObject*) = 0x70e50;
    void addToGroupOld(GameObject*) = 0x77680;
    void addToSpeedObjects(GameObject*) = 0x7cfc0;
    void animateInDualGround(GameObject*, float, bool) = 0x7d710;
    void animateInGround(bool) = 0x7d9d0;
    void animateOutGround(bool) = 0x6f350;
    void animateOutGroundFinished() = 0x7de80;
    void applyEnterEffect(GameObject*) = 0x7c310;
    void cameraMoveX(float, float, float) = 0x7cbe0;
    void cameraMoveY(float, float, float) = 0x7cc60;
    void checkCollisions(PlayerObject*, float) = 0x78c90;
    void claimParticle(std::string) = 0x76ba0;
    void clearPickedUpItems() = 0x7cfa0;
    void colorObject(int, cocos2d::_ccColor3B) = 0x77810;
    void commitJumps() = 0x737e0;
    static PlayLayer* create(GJGameLevel*) = 0x6b590;
    void createCheckpoint() = 0x7e470;
    void createObjectsFromSetup(std::string) = 0x6d130;
    void createParticle(int, char const*, int, cocos2d::tCCPositionType) = 0x76800;
    void delayedResetLevel() = 0x7e050;
    void destroyPlayer(PlayerObject*, GameObject*) = 0x7ab80;
    void enterDualMode(GameObject*, bool) = 0x7d6a0;
    void exitAirMode() = 0x7dd40;
    void exitBirdMode(PlayerObject*) = 0x7dd80;
    void exitDartMode(PlayerObject*) = 0x7ddd0;
    void exitFlyMode(PlayerObject*) = 0x7dcf0;
    void exitRobotMode(PlayerObject*) = 0x7de20;
    void exitRollMode(PlayerObject*) = 0x7de60;
    void exitSpiderMode(PlayerObject*) = 0x7de40;
    void flipFinished() = 0x7e150;
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
    void updateAttempts() = 0x7fcd0;
    void updateCamera(float) = 0x6e2b0;
    void updateDualGround(PlayerObject*, int, bool) = 0x7caa0;
    void updateEffectPositions() = 0x7a6d0;
    void updateLevelColors() = 0x6f1e0;
    void updateMoveObjectsLastPosition() = 0x7a720;
    void updateProgressbar() = 0x6ed70;
    void updateReplay(float) = 0x78b60;
    void updateTimeMod(float, bool) = 0x786f0;
    void updateVisibility() = 0x6fb90;
    void vfDChk() = 0x7fcb0;
    void visitWithColorFlash() = 0x761f0;
    void willSwitchToMode(int, PlayerObject*) = 0x7b9e0;

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

@interface StatsCell
    virtual ~StatsCell() = 0x120530;
    virtual ~StatsCell() = 0x120540;
    virtual bool init() = 0x11b100;
    virtual void draw() = 0x11bf80;
@end



@interface CCScrollLayerExtDelegate
@end

@interface TableView : CCScrollLayerExt, CCScrollLayerExtDelegate
    virtual ~TableView() = 0x37eeb0;
    virtual ~TableView() = 0x37eee0;
    virtual void onEnter() = 0x37ff30;
    virtual void onExit() = 0x37ff40;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x380120;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x380be0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x3809a0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x380b20;
    virtual void registerWithTouchDispatcher() = 0x37ff50;
    virtual void scrollWheel(float, float) = 0x380cd0;
    virtual void scrllViewWillBeginDecelerating(CCScrollLayerExt*) = 0x3818a0;
    virtual void scrollViewDidEndDecelerating(CCScrollLayerExt*) = 0x3818c0;
    virtual void scrollViewTouchMoving(CCScrollLayerExt*) = 0x3818e0;
    virtual void scrollViewDidEndMoving(CCScrollLayerExt*) = 0x381900;

    static TableView* create(TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect) = 0x37eb30;
    void reloadData() = 0x37f970;

    float m_unknown = 0x1c8;
@end

@interface cocos2d::CCBezierBy
    virtual ~CCBezierBy() = 0x1f9fe0;
    virtual ~CCBezierBy() = 0x1f9ff0;
    virtual void update(float) = 0x1f6960;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f67a0;
    virtual void reverse() = 0x1f6b40;
@end


@interface cocos2d::CCDirector
    virtual ~CCDirector() = 0x2493a0;
    virtual ~CCDirector() = 0x2493b0;
    virtual bool init() = 0x248df0;
    virtual void getClassTypeInfo() = 0x24b280;
    virtual void getScheduler() = 0x24af00;
    virtual void setScheduler(cocos2d::CCScheduler*) = 0x24aec0;
    virtual void getActionManager() = 0x24af50;
    virtual void setActionManager(cocos2d::CCActionManager*) = 0x24af10;
    virtual void getTouchDispatcher() = 0x24afa0;
    virtual void setTouchDispatcher(cocos2d::CCTouchDispatcher*) = 0x24af60;
    virtual void getKeypadDispatcher() = 0x24b090;
    virtual void setKeypadDispatcher(cocos2d::CCKeypadDispatcher*) = 0x24b050;
    virtual void getKeyboardDispatcher() = 0x24aff0;
    virtual void setKeyboardDispatcher(cocos2d::CCKeyboardDispatcher*) = 0x24afb0;
    virtual void getMouseDispatcher() = 0x24b040;
    virtual void setMouseDispatcher(cocos2d::CCMouseDispatcher*) = 0x24b000;
    virtual void getAccelerometer() = 0x24b0e0;
    virtual void setAccelerometer(cocos2d::CCAccelerometer*) = 0x24b0a0;
    virtual void getDeltaTime() = 0x249bd0;
    virtual void getSceneDelegate() const = 0x24b320;
    virtual void setSceneDelegate(cocos2d::CCSceneDelegate*) = 0x24b330;

    void getScreenBottom() = 0x24b210;
    void getScreenLeft() = 0x24b220;
    void getScreenRight() = 0x24b230;
    void getScreenScaleFactorH() = 0x24b1e0;
    void getScreenScaleFactorW() = 0x24b1f0;
    void getScreenTop() = 0x24b200;
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
    virtual ~CCDrawNode() = 0x378cc0;
    virtual ~CCDrawNode() = 0x378cd0;
    virtual bool init() = 0x378e00;
    virtual void draw() = 0x379020;
@end

@interface cocos2d::CCGridBase
    virtual ~CCGridBase() = 0x287e30;
    virtual ~CCGridBase() = 0x287e90;
    virtual void blit() = 0x2880e0;
    virtual void reuse() = 0x2880f0;
    virtual void calculateVertexPoints() = 0x288100;
@end

@interface cocos2d::CCLabelTTF
    virtual ~CCLabelTTF() = 0x1fa620;
    virtual ~CCLabelTTF() = 0x1fa6f0;
    virtual bool init() = 0x1fac60;
    virtual void setString(char const*) = 0x1fad70;
    virtual void getString() = 0x1faf70;
@end

@interface cocos2d::CCMenuItem
    virtual ~CCMenuItem() = 0x1fb8e0;
    virtual ~CCMenuItem() = 0x1fb950;
    virtual void activate() = 0x1fba70;
    virtual void selected() = 0x1fb9e0;
    virtual void unselected() = 0x1fb9f0;
    virtual void registerScriptTapHandler(int) = 0x1fba00;
    virtual void unregisterScriptTapHandler() = 0x1fba30;
    virtual void isEnabled() = 0x1fbaf0;
    virtual void setEnabled(bool) = 0x1fbae0;
    virtual void isSelected() = 0x1fbb50;
@end

@interface cocos2d::CCNodeRGBA
    virtual ~CCNodeRGBA() = 0x124bb0;
    virtual ~CCNodeRGBA() = 0x124bc0;
    virtual bool init() = 0x124bf0;
    virtual void getOpacity() = 0x124cd0;
    virtual void getDisplayedOpacity() = 0x124cf0;
    virtual void setOpacity(unsigned char) = 0x124d10;
    virtual void updateDisplayedOpacity(unsigned char) = 0x124e50;
    virtual void isCascadeOpacityEnabled() = 0x124fe0;
    virtual void setCascadeOpacityEnabled(bool) = 0x125000;
    virtual void getColor() = 0x125020;
    virtual void getDisplayedColor() = 0x125040;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x125060;
    virtual void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x1251e0;
    virtual void isCascadeColorEnabled() = 0x125320;
    virtual void setCascadeColorEnabled(bool) = 0x125340;
    virtual void setOpacityModifyRGB(bool) = 0x328e0;
    virtual void isOpacityModifyRGB() = 0x328f0;
@end

@interface cocos2d::CCProfiler
    virtual ~CCProfiler() = 0x28a2e0;
    virtual ~CCProfiler() = 0x28a330;
@end

@interface cocos2d::CCRipple3D
    virtual ~CCRipple3D() = 0x129bc0;
    virtual ~CCRipple3D() = 0x129bd0;
    virtual void update(float) = 0x1286c0;
@end

@interface cocos2d::CCRotateBy
    virtual ~CCRotateBy() = 0x1f9e20;
    virtual ~CCRotateBy() = 0x1f9e30;
    virtual void update(float) = 0x1f4f90;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f4f40;
    virtual void reverse() = 0x1f5000;
@end

@interface cocos2d::CCRotateTo
    virtual ~CCRotateTo() = 0x1f9de0;
    virtual ~CCRotateTo() = 0x1f9df0;
    virtual void update(float) = 0x1f4be0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f4aa0;
    virtual void initWithDuration(float, float, float) = 0x1f4980;
@end

@interface cocos2d::CCStopGrid
    virtual ~CCStopGrid() = 0xef140;
    virtual ~CCStopGrid() = 0xef150;
    virtual void startWithTarget(cocos2d::CCNode*) = 0xeeee0;
@end

@interface cocos2d::CCTMXLayer
    virtual ~CCTMXLayer() = 0x120ce0;
    virtual ~CCTMXLayer() = 0x120cf0;
    virtual void addChild(cocos2d::CCNode*, int, int) = 0x1222b0;
    virtual void removeChild(cocos2d::CCNode*, bool) = 0x1222c0;
    virtual void getTileSet() = 0x120d20;
    virtual void setTileSet(cocos2d::CCTMXTilesetInfo*) = 0x120d30;
    virtual void getProperties() = 0x1224a0;
    virtual void setProperties(cocos2d::CCDictionary*) = 0x1224b0;
@end

@interface cocos2d::CCAnimation
    virtual ~CCAnimation() = 0x141220;
    virtual ~CCAnimation() = 0x141270;
    virtual void getDuration() = 0x141460;
@end

@interface cocos2d::CCAtlasNode
    virtual ~CCAtlasNode() = 0x1a4a30;
    virtual ~CCAtlasNode() = 0x1a4aa0;
    virtual void draw() = 0x1a4f70;
    virtual void setOpacity(unsigned char) = 0x1a51c0;
    virtual void getColor() = 0x1a5060;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x1a50b0;
    virtual void setOpacityModifyRGB(bool) = 0x1a5240;
    virtual void isOpacityModifyRGB() = 0x1a52f0;
    virtual void getTextureAtlas() = 0x1a54a0;
    virtual void setTextureAtlas(cocos2d::CCTextureAtlas*) = 0x1a5460;
    virtual void getBlendFunc() = 0x1a5320;
    virtual void setBlendFunc(cocos2d::_ccBlendFunc) = 0x1a5340;
    virtual void getQuadsToDraw() = 0x1a54b0;
    virtual void setQuadsToDraw(unsigned int) = 0x1a54c0;
    virtual void updateAtlasValues() = 0x1a4f60;
    virtual void getTexture() = 0x1a5430;
    virtual void setTexture(cocos2d::CCTexture2D*) = 0x1a5360;
@end

@interface cocos2d::CCComponent
    virtual ~CCComponent() = 0x5a420;
    virtual ~CCComponent() = 0x5a470;
    virtual void update(float) = 0x5a510;
    virtual bool init() = 0x5a4e0;
    virtual void onEnter() = 0x5a4f0;
    virtual void onExit() = 0x5a500;
    virtual void serialize(void*) = 0x5a520;
    virtual void isEnabled() const = 0x5a600;
    virtual void setEnabled(bool) = 0x5a610;
@end

@interface cocos2d::CCDelayTime
    virtual ~CCDelayTime() = 0x1fa260;
    virtual ~CCDelayTime() = 0x1fa270;
    virtual void update(float) = 0x1f8af0;
    virtual void reverse() = 0x1f8b00;
@end

@interface cocos2d::CCEaseInOut
    virtual ~CCEaseInOut() = 0x2a4880;
    virtual ~CCEaseInOut() = 0x2a48d0;
    virtual void update(float) = 0x2a1f30;
    virtual void reverse() = 0x2a1fa0;
@end

@interface cocos2d::CCFileUtils
    virtual ~CCFileUtils() = 0x23efd0;
    virtual ~CCFileUtils() = 0x23efe0;
    virtual void purgeCachedEntries() = 0x23f100;
    virtual void getFileData(char const*, char const*, unsigned long*) = 0x23f140;
    virtual void getFileDataFromZip(char const*, char const*, unsigned long*) = 0x23f2e0;
    virtual void fullPathForFilename(char const*, bool) = 0x23f940;
    virtual void removeFullPath(char const*) = 0x240710;
    virtual void loadFilenameLookupDictionaryFromFile(char const*) = 0x2416f0;
    virtual void setFilenameLookupDictionary(cocos2d::CCDictionary*) = 0x241680;
    virtual void fullPathFromRelativeFile(char const*, char const*) = 0x2408c0;
    virtual void setSearchResolutionsOrder(std::vector<std::string> const&) = 0x240ac0;
    virtual void addSearchResolutionsOrder(char const*) = 0x240d30;
    virtual void getSearchResolutionsOrder() = 0x240df0;
    virtual void setSearchPaths(std::vector<std::string> const&) = 0x240e10;
    virtual void addSearchPath(char const*) = 0x241180;
    virtual void removeSearchPath(char const*) = 0x241390;
    virtual void getSearchPaths() = 0x240e00;
    virtual void getWritablePath2() = 0x241a90;
    virtual void isAbsolutePath(std::string const&) = 0x2419c0;
    virtual void setPopupNotify(bool) = 0x2419d0;
    virtual void isPopupNotify() = 0x2419e0;
    virtual bool init() = 0x23f010;
    virtual void getNewFilename(char const*) = 0x23f3f0;
    virtual void shouldUseHD() = 0x23f4e0;
    virtual void addSuffix(std::string, std::string) = 0x23f510;
    virtual void getPathForFilename(std::string const&, std::string const&, std::string const&) = 0x23f650;
    virtual void getFullPathForDirectoryAndFilename(std::string const&, std::string const&) = 0x241900;
    virtual void createCCDictionaryWithContentsOfFile(std::string const&) = 0x23ec30;
    virtual void writeToFile(cocos2d::CCDictionary*, std::string const&) = 0x23ec40;
    virtual void createCCArrayWithContentsOfFile(std::string const&) = 0x23ec50;
@end

@interface cocos2d::CCGLProgram
    virtual ~CCGLProgram() = 0x231950;
    virtual ~CCGLProgram() = 0x231960;
@end

@interface cocos2d::CCLayerRGBA
    virtual ~CCLayerRGBA() = 0x273aa0;
    virtual ~CCLayerRGBA() = 0x273ad0;
    virtual bool init() = 0x273b40;
    virtual void getOpacity() = 0x273be0;
    virtual void getDisplayedOpacity() = 0x273c00;
    virtual void setOpacity(unsigned char) = 0x273c20;
    virtual void updateDisplayedOpacity(unsigned char) = 0x273f20;
    virtual void isCascadeOpacityEnabled() = 0x2741f0;
    virtual void setCascadeOpacityEnabled(bool) = 0x274210;
    virtual void getColor() = 0x273d60;
    virtual void getDisplayedColor() = 0x273d80;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x273da0;
    virtual void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x2740b0;
    virtual void isCascadeColorEnabled() = 0x274230;
    virtual void setCascadeColorEnabled(bool) = 0x274250;
    virtual void setOpacityModifyRGB(bool) = 0x6180;
    virtual void isOpacityModifyRGB() = 0x6190;
@end

@interface cocos2d::CCReuseGrid
    virtual ~CCReuseGrid() = 0xef180;
    virtual ~CCReuseGrid() = 0xef190;
    virtual void startWithTarget(cocos2d::CCNode*) = 0xef010;
@end

@interface cocos2d::CCScheduler
    virtual ~CCScheduler() = 0x242910;
    virtual ~CCScheduler() = 0x242970;
    virtual void update(float) = 0x2446d0;
@end

@interface cocos2d::CCSplitCols
    virtual ~CCSplitCols() = 0x45ead0;
    virtual ~CCSplitCols() = 0x45eae0;
    virtual void update(float) = 0x45e790;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x45e750;
    virtual void initWithDuration(float, unsigned int) = 0x45e5d0;
@end

@interface cocos2d::CCSplitRows
    virtual ~CCSplitRows() = 0x45ea90;
    virtual ~CCSplitRows() = 0x45eaa0;
    virtual void update(float) = 0x45e3e0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x45e3a0;
    virtual void initWithDuration(float, unsigned int) = 0x45e220;
@end

@interface cocos2d::CCTexture2D
    virtual ~CCTexture2D() = 0x246350;
    virtual ~CCTexture2D() = 0x2463b0;
    virtual void getPixelFormat() = 0x246420;
    virtual void getPixelsWide() = 0x246430;
    virtual void getPixelsHigh() = 0x246440;
    virtual void getName() = 0x246450;
    virtual void getMaxS() = 0x2464e0;
    virtual void setMaxS(float) = 0x2464f0;
    virtual void getMaxT() = 0x246500;
    virtual void setMaxT(float) = 0x246510;
    virtual void getContentSize() = 0x246460;
    virtual void getShaderProgram() = 0x246520;
    virtual void setShaderProgram(cocos2d::CCGLProgram*) = 0x246530;

    CCTexture2D() = 0x246280;
    void initPremultipliedATextureWithImage(cocos2d::CCImage*, unsigned int, unsigned int) = 0x2469a0;
    void initWithData(void const*, cocos2d::CCTexture2DPixelFormat, unsigned int, unsigned int, cocos2d::CCSize const&) = 0x2465d0;
    void setAliasTexParameters() = 0x247a20;
    void setAntiAliasTexParameters() = 0x247a80;
    void initWithImage(cocos2d::CCImage*) = 0x246940;
    void setTexParameters(cocos2d::_ccTexParams*) = 0x247980;
@end

@interface cocos2d::CCActionEase
    virtual ~CCActionEase() = 0x2a14d0;
    virtual ~CCActionEase() = 0x2a1520;
    virtual void update(float) = 0x2a15e0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x2a1580;
    virtual void stop() = 0x2a15b0;
    virtual void reverse() = 0x2a1600;
    virtual void getInnerAction() = 0x2a1620;
@end

@interface cocos2d::CCDictionary
    virtual ~CCDictionary() = 0x190390;
    virtual ~CCDictionary() = 0x1903d0;
    virtual void acceptVisitor(cocos2d::CCDataVisitor&) = 0x192790;
@end

@interface cocos2d::CCEaseBackIn
    virtual ~CCEaseBackIn() = 0x2a52d0;
    virtual ~CCEaseBackIn() = 0x2a5320;
    virtual void update(float) = 0x2a42a0;
    virtual void reverse() = 0x2a42d0;
@end

@interface cocos2d::CCEaseBounce
    virtual ~CCEaseBounce() = 0x2a5010;
    virtual ~CCEaseBounce() = 0x2a5060;
    virtual void reverse() = 0x2a3890;
@end

@interface cocos2d::CCEaseSineIn
    virtual ~CCEaseSineIn() = 0x2a4b40;
    virtual ~CCEaseSineIn() = 0x2a4b90;
    virtual void update(float) = 0x2a2780;
    virtual void reverse() = 0x2a27c0;
@end

@interface cocos2d::CCGridAction
    virtual ~CCGridAction() = 0xef070;
    virtual ~CCGridAction() = 0xef080;
    virtual void startWithTarget(cocos2d::CCNode*) = 0xee0d0;
    virtual void reverse() = 0xee1a0;
    virtual void initWithDuration(float, cocos2d::CCSize const&) = 0xee0a0;
    virtual void getGrid() = 0xee190;
@end

@interface cocos2d::CCLabelAtlas
    virtual ~CCLabelAtlas() = 0x43d950;
    virtual ~CCLabelAtlas() = 0x43d960;
    virtual void updateAtlasValues() = 0x43d590;
    virtual void setString(char const*) = 0x43d840;
    virtual void getString() = 0x43d930;
@end

@interface cocos2d::CCLayerColor
    virtual ~CCLayerColor() = 0x2743e0;
    virtual ~CCLayerColor() = 0x274410;
    virtual bool init() = 0x274800;
    virtual void setContentSize(cocos2d::CCSize const&) = 0x2749f0;
    virtual void draw() = 0x274b50;
    virtual void setOpacity(unsigned char) = 0x274db0;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x274c20;
    virtual void initWithColor(cocos2d::_ccColor4B const&, float, float) = 0x274850;
    virtual void initWithColor(cocos2d::_ccColor4B const&) = 0x2749a0;
    virtual void getBlendFunc() = 0x274480;
    virtual void setBlendFunc(cocos2d::_ccBlendFunc) = 0x2744a0;
    virtual void updateColor() = 0x274ae0;
@end

@interface cocos2d::CCPageTurn3D
    virtual ~CCPageTurn3D() = 0x194350;
    virtual ~CCPageTurn3D() = 0x194360;
    virtual void update(float) = 0x194130;
@end

@interface cocos2d::CCPointArray
    virtual ~CCPointArray() = 0x167090;
    virtual ~CCPointArray() = 0x167110;
@end

@interface cocos2d::CCProgressTo
    virtual ~CCProgressTo() = 0x23d680;
    virtual ~CCProgressTo() = 0x23d690;
    virtual void update(float) = 0x23d380;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x23d340;
@end

@interface cocos2d::CCRemoveSelf
    virtual ~CCRemoveSelf() = 0x455c90;
    virtual ~CCRemoveSelf() = 0x455ca0;
    virtual void update(float) = 0x454770;
    virtual void reverse() = 0x454790;
@end

@interface cocos2d::CCTMXMapInfo
    virtual ~CCTMXMapInfo() = 0x283600;
    virtual ~CCTMXMapInfo() = 0x283610;
    virtual void getLayers() = 0x283640;
    virtual void setLayers(cocos2d::CCArray*) = 0x283650;
    virtual void getTilesets() = 0x283690;
    virtual void setTilesets(cocos2d::CCArray*) = 0x2836a0;
    virtual void getObjectGroups() = 0x2836e0;
    virtual void setObjectGroups(cocos2d::CCArray*) = 0x2836f0;
    virtual void getProperties() = 0x283730;
    virtual void setProperties(cocos2d::CCDictionary*) = 0x283740;
    virtual void startElement(void*, char const*, char const**) = 0x2837d0;
    virtual void endElement(void*, char const*) = 0x286210;
    virtual void textHandler(void*, char const*, int) = 0x286460;
@end

@interface cocos2d::CCTextureETC
    virtual ~CCTextureETC() = 0xedee0;
    virtual ~CCTextureETC() = 0xedef0;
@end

@interface cocos2d::CCTexturePVR
    virtual ~CCTexturePVR() = 0x12f100;
    virtual ~CCTexturePVR() = 0x12f160;
@end

@interface cocos2d::XmlSaxHander
    virtual ~XmlSaxHander() = 0xbb250;
@end

@interface cocos2d::CCActionTween
    virtual ~CCActionTween() = 0x447780;
    virtual ~CCActionTween() = 0x4477d0;
    virtual void update(float) = 0x447720;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x4476f0;
    virtual void reverse() = 0x447760;
@end

@interface cocos2d::CCApplication
    virtual ~CCApplication() = 0x1a3e10;
    virtual void setAnimationInterval(double) = 0x1a3ee0;
    virtual void getCurrentLanguage() = 0x1a3f40;
    virtual void getTargetPlatform() = 0x1a3f20;
    virtual void openURL(char const*) = 0x1a4550;
@end

@interface cocos2d::CCEaseBackOut
    virtual ~CCEaseBackOut() = 0x2a5380;
    virtual ~CCEaseBackOut() = 0x2a53d0;
    virtual void update(float) = 0x2a4480;
    virtual void reverse() = 0x2a44c0;
@end

@interface cocos2d::CCEaseElastic
    virtual ~CCEaseElastic() = 0x2a4d50;
    virtual ~CCEaseElastic() = 0x2a4da0;
    virtual void reverse() = 0x2a2dd0;
@end

@interface cocos2d::CCEaseSineOut
    virtual ~CCEaseSineOut() = 0x2a4bf0;
    virtual ~CCEaseSineOut() = 0x2a4c40;
    virtual void update(float) = 0x2a2970;
    virtual void reverse() = 0x2a29a0;
@end

@interface cocos2d::CCIMEDelegate
    virtual ~CCIMEDelegate() = 0x277670;
    virtual void attachWithIME() = 0x2776a0;
    virtual void detachWithIME() = 0x277880;
    virtual void canAttachWithIME() = 0x5ef30;
    virtual void didAttachWithIME() = 0x5ef40;
    virtual void canDetachWithIME() = 0x5ef50;
    virtual void didDetachWithIME() = 0x5ef60;
    virtual void insertText(char const*, int) = 0x5ef70;
    virtual void deleteBackward() = 0x5ef80;
    virtual void getContentText() = 0x5ef90;
    virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x126e80;
    virtual void keyboardDidShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5efa0;
    virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x126e90;
    virtual void keyboardDidHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5efb0;
@end

@interface cocos2d::CCJumpTiles3D
    virtual ~CCJumpTiles3D() = 0x45ea50;
    virtual ~CCJumpTiles3D() = 0x45ea60;
    virtual void update(float) = 0x45df60;
@end

@interface cocos2d::CCLabelBMFont
    virtual ~CCLabelBMFont() = 0x347e80;
    virtual ~CCLabelBMFont() = 0x347e90;
    virtual bool init() = 0x347b10;
    virtual void setScaleX(float) = 0x34a5b0;
    virtual void setScaleY(float) = 0x34a5d0;
    virtual void setScale(float) = 0x34a590;
    virtual void setAnchorPoint(cocos2d::CCPoint const&) = 0x349440;
    virtual void setString(char const*) = 0x348990;
    virtual void setString(char const*, bool) = 0x3489e0;
    virtual void getString() = 0x348bf0;
    virtual void setCString(char const*) = 0x348c10;
    virtual void updateLabel() = 0x349480;
    virtual void setAlignment(cocos2d::CCTextAlignment) = 0x34a530;
    virtual void setWidth(float) = 0x34a550;
    virtual void setLineBreakWithoutSpace(bool) = 0x34a570;
    virtual void isOpacityModifyRGB() = 0x3490e0;
    virtual void setOpacityModifyRGB(bool) = 0x348f70;
    virtual void getOpacity() = 0x348df0;
    virtual void getDisplayedOpacity() = 0x348e10;
    virtual void setOpacity(unsigned char) = 0x348e30;
    virtual void updateDisplayedOpacity(unsigned char) = 0x349100;
    virtual void isCascadeOpacityEnabled() = 0x349400;
    virtual void setCascadeOpacityEnabled(bool) = 0x349420;
    virtual void getColor() = 0x348c30;
    virtual void getDisplayedColor() = 0x348c50;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x348c70;
    virtual void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x349210;
    virtual void isCascadeColorEnabled() = 0x3493c0;
    virtual void setCascadeColorEnabled(bool) = 0x3493e0;
    virtual void setString(unsigned short*, bool) = 0x348a60;
@end

@interface cocos2d::CCOrbitCamera
    virtual ~CCOrbitCamera() = 0x1b31f0;
    virtual ~CCOrbitCamera() = 0x1b3200;
    virtual void update(float) = 0x1b30c0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1b2de0;
@end

@interface cocos2d::CCReverseTime
    virtual ~CCReverseTime() = 0x1f8e50;
    virtual ~CCReverseTime() = 0x1f8ea0;
    virtual void update(float) = 0x1f8f70;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f8f00;
    virtual void stop() = 0x1f8f40;
    virtual void reverse() = 0x1f8fa0;
@end

// @interface cocos2d::CCScrollLayer
//    virtual  ~CCScrollLayer() = 0x2e4b40;
//    virtual  ~CCScrollLayer() = 0x2e4b70;
//    virtual  bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2e4be0;
//    virtual  void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2e4c00;
//    virtual  void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2e4d40;
// @end

@interface cocos2d::CCShaderCache
    virtual ~CCShaderCache() = 0xe6ee0;
    virtual ~CCShaderCache() = 0xe6f30;
@end

@interface cocos2d::CCSpriteFrame
    virtual ~CCSpriteFrame() = 0x1ace20;
    virtual ~CCSpriteFrame() = 0x1ace30;
@end

@interface cocos2d::CCTMXTiledMap
    virtual ~CCTMXTiledMap() = 0x2a63a0;
    virtual ~CCTMXTiledMap() = 0x2a63b0;
    virtual void getObjectGroups() = 0x2a63e0;
    virtual void setObjectGroups(cocos2d::CCArray*) = 0x2a63f0;
    virtual void getProperties() = 0x2a6430;
    virtual void setProperties(cocos2d::CCDictionary*) = 0x2a6440;
@end

@interface cocos2d::CCTiledGrid3D
    virtual ~CCTiledGrid3D() = 0x288fe0;
    virtual ~CCTiledGrid3D() = 0x288ff0;
    virtual void blit() = 0x2891c0;
    virtual void reuse() = 0x289780;
    virtual void calculateVertexPoints() = 0x289260;
@end

@interface cocos2d::CCClippingNode
    virtual ~CCClippingNode() = 0x4191e0;
    virtual ~CCClippingNode() = 0x419230;
    virtual bool init() = 0x4193e0;
    virtual void onEnter() = 0x419470;
    virtual void onEnterTransitionDidFinish() = 0x4194a0;
    virtual void onExit() = 0x419500;
    virtual void onExitTransitionDidStart() = 0x4194d0;
    virtual void visit() = 0x419530;
    virtual bool init(cocos2d::CCNode*) = 0x419400;
@end

@interface cocos2d::CCEaseBounceIn
    virtual ~CCEaseBounceIn() = 0x2a50c0;
    virtual ~CCEaseBounceIn() = 0x2a5110;
    virtual void update(float) = 0x2a3a40;
    virtual void reverse() = 0x2a3b20;
@end

@interface cocos2d::CCMotionStreak
    virtual ~CCMotionStreak() = 0x2ed330;
    virtual ~CCMotionStreak() = 0x2ed340;
    virtual void update(float) = 0x2edb40;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x2ed8b0;
    virtual void draw() = 0x2ee1b0;
    virtual void getOpacity() = 0x2eda60;
    virtual void setOpacity(unsigned char) = 0x2eda40;
    virtual void setOpacityModifyRGB(bool) = 0x2eda80;
    virtual void isOpacityModifyRGB() = 0x2edaa0;
    virtual void getTexture() = 0x2ed950;
    virtual void setTexture(cocos2d::CCTexture2D*) = 0x2ed970;
    virtual void setBlendFunc(cocos2d::_ccBlendFunc) = 0x2eda00;
    virtual void getBlendFunc() = 0x2eda20;
@end

// @interface cocos2d::CCMouseHandler
//    virtual  ~CCMouseHandler() = 0x12ede0;
//    virtual  ~CCMouseHandler() = 0x12ee50;
//    virtual  void initWithDelegate(cocos2d::CCMouseDelegate*) = 0x12ef40;
// @end

@interface cocos2d::CCParallaxNode
    virtual ~CCParallaxNode() = 0x270fe0;
    virtual ~CCParallaxNode() = 0x271040;
    virtual void removeChild(cocos2d::CCNode*, bool) = 0x2712c0;
    virtual void removeAllChildrenWithCleanup(bool) = 0x271350;
    virtual void visit() = 0x271410;
    virtual void addChild(cocos2d::CCNode*, unsigned int, cocos2d::CCPoint const&, cocos2d::CCPoint const&) = 0x271100;
    virtual void addChild(cocos2d::CCNode*, unsigned int, int) = 0x2710f0;
@end

@interface cocos2d::CCShakyTiles3D
    virtual ~CCShakyTiles3D() = 0x45e890;
    virtual ~CCShakyTiles3D() = 0x45e8a0;
    virtual void update(float) = 0x45b900;
    virtual void initWithDuration(float, cocos2d::CCSize const&, int, bool) = 0x45b7b0;
@end

@interface cocos2d::CCShuffleTiles
    virtual ~CCShuffleTiles() = 0x45c2e0;
    virtual ~CCShuffleTiles() = 0x45c330;
    virtual void update(float) = 0x45c830;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x45c590;
    virtual void initWithDuration(float, cocos2d::CCSize const&, unsigned int) = 0x45c140;
@end

@interface cocos2d::CCTMXLayerInfo
    virtual ~CCTMXLayerInfo() = 0x2828c0;
    virtual ~CCTMXLayerInfo() = 0x2828d0;
    virtual void getProperties() = 0x282900;
    virtual void setProperties(cocos2d::CCDictionary*) = 0x282910;
@end

@interface cocos2d::CCTextFieldTTF
    virtual ~CCTextFieldTTF() = 0x125ff0;
    virtual ~CCTextFieldTTF() = 0x126020;
    virtual void draw() = 0x126a00;
    virtual void setString(char const*) = 0x126ac0;
    virtual void getString() = 0x126d00;
    virtual void attachWithIME() = 0x126370;
    virtual void detachWithIME() = 0x1263f0;
    virtual void getColorSpaceHolder() = 0x126a90;
    virtual void setColorSpaceHolder(cocos2d::_ccColor3B const&) = 0x126aa0;
    virtual void setPlaceHolder(char const*) = 0x126d20;
    virtual void getPlaceHolder() = 0x126e10;
    virtual void setSecureTextEntry(bool) = 0x126e20;
    virtual void isSecureTextEntry() = 0x126e70;
    virtual void canAttachWithIME() = 0x126470;
    virtual void canDetachWithIME() = 0x1264d0;
    virtual void insertText(char const*, int) = 0x126530;
    virtual void deleteBackward() = 0x126760;
    virtual void getContentText() = 0x1269e0;
@end

@interface cocos2d::CCTextureAtlas
    virtual ~CCTextureAtlas() = 0x26fe30;
    virtual ~CCTextureAtlas() = 0x26fe40;
    virtual void getTotalQuads() = 0x26fe70;
    virtual void getCapacity() = 0x26fe80;
    virtual void getTexture() = 0x26fe90;
    virtual void setTexture(cocos2d::CCTexture2D*) = 0x26fea0;
    virtual void getQuads() = 0x26fee0;
    virtual void setQuads(cocos2d::_ccV3F_C4B_T2F_Quad*) = 0x26fef0;
@end

@interface cocos2d::CCTextureCache
    virtual ~CCTextureCache() = 0x356fe0;
    virtual ~CCTextureCache() = 0x357040;
@end

@interface cocos2d::CCTileMapAtlas
    virtual ~CCTileMapAtlas() = 0x105970;
    virtual ~CCTileMapAtlas() = 0x1059f0;
    virtual void updateAtlasValues() = 0x105f00;
    virtual void getTGAInfo() = 0x106120;
    virtual void setTGAInfo(cocos2d::sImageTGA*) = 0x106110;
@end

@interface cocos2d::CCTouchHandler
    virtual ~CCTouchHandler() = 0x247de0;
    virtual ~CCTouchHandler() = 0x247e50;
    virtual void initWithDelegate(cocos2d::CCTouchDelegate*, int) = 0x247d10;
@end

@interface cocos2d::CCTurnOffTiles
    virtual ~CCTurnOffTiles() = 0x45d660;
    virtual ~CCTurnOffTiles() = 0x45d6a0;
    virtual void update(float) = 0x45d870;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x45d7c0;
    virtual void initWithDuration(float, cocos2d::CCSize const&, unsigned int) = 0x45d4d0;
@end

@interface cocos2d::CCWavesTiles3D
    virtual ~CCWavesTiles3D() = 0x45ea10;
    virtual ~CCWavesTiles3D() = 0x45ea20;
    virtual void update(float) = 0x45dba0;
    virtual void initWithDuration(float, cocos2d::CCSize const&, unsigned int, float) = 0x45da40;
@end

@interface cocos2d::CCActionInstant
    virtual ~CCActionInstant() = 0x455b90;
    virtual ~CCActionInstant() = 0x455ba0;
    virtual void update(float) = 0x4542f0;
    virtual void isDone() = 0x4542c0;
    virtual void step(float) = 0x4542d0;
    virtual void reverse() = 0x454300;
@end

@interface cocos2d::CCActionManager
    virtual ~CCActionManager() = 0x10b980;
    virtual ~CCActionManager() = 0x10b9f0;
    virtual void update(float) = 0x10c9a0;
@end

@interface cocos2d::CCConfiguration
    virtual ~CCConfiguration() = 0x2a6c60;
    virtual ~CCConfiguration() = 0x2a6cb0;
@end

@interface cocos2d::CCEaseBackInOut
    virtual ~CCEaseBackInOut() = 0x2a5430;
    virtual ~CCEaseBackInOut() = 0x2a5480;
    virtual void update(float) = 0x2a4670;
    virtual void reverse() = 0x2a4700;
@end

@interface cocos2d::CCEaseBounceOut
    virtual ~CCEaseBounceOut() = 0x2a5170;
    virtual ~CCEaseBounceOut() = 0x2a51c0;
    virtual void update(float) = 0x2a3cd0;
    virtual void reverse() = 0x2a3d90;
@end

@interface cocos2d::CCEaseElasticIn
    virtual ~CCEaseElasticIn() = 0x2a4e00;
    virtual ~CCEaseElasticIn() = 0x2a4e50;
    virtual void update(float) = 0x2a2fb0;
    virtual void reverse() = 0x2a3050;
@end

@interface cocos2d::CCEaseSineInOut
    virtual ~CCEaseSineInOut() = 0x2a4ca0;
    virtual ~CCEaseSineInOut() = 0x2a4cf0;
    virtual void update(float) = 0x2a2b50;
    virtual void reverse() = 0x2a2b90;
@end

@interface cocos2d::CCKeypadHandler
    virtual ~CCKeypadHandler() = 0x1ff130;
    virtual ~CCKeypadHandler() = 0x1ff1a0;
    virtual void initWithDelegate(cocos2d::CCKeypadDelegate*) = 0x1ff290;
@end

@interface cocos2d::CCLayerGradient
    virtual ~CCLayerGradient() = 0x2760a0;
    virtual ~CCLayerGradient() = 0x2760b0;
    virtual bool init() = 0x275280;
    virtual void updateColor() = 0x2753c0;
    virtual void initWithColor(cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&) = 0x2752b0;
    virtual void initWithColor(cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&, cocos2d::CCPoint const&) = 0x275310;
    virtual void getStartColor() = 0x275610;
    virtual void setStartColor(cocos2d::_ccColor3B const&) = 0x275620;
    virtual void getEndColor() = 0x275670;
    virtual void setEndColor(cocos2d::_ccColor3B const&) = 0x275640;
    virtual void getStartOpacity() = 0x2756a0;
    virtual void setStartOpacity(unsigned char) = 0x275680;
    virtual void getEndOpacity() = 0x2756d0;
    virtual void setEndOpacity(unsigned char) = 0x2756b0;
    virtual void getVector() = 0x275710;
    virtual void setVector(cocos2d::CCPoint const&) = 0x2756e0;
    virtual void setCompressedInterpolation(bool) = 0x275730;
    virtual void isCompressedInterpolation() = 0x275720;
@end

@interface cocos2d::CCMenuItemImage
    virtual ~CCMenuItemImage() = 0x1febb0;
    virtual ~CCMenuItemImage() = 0x1fec20;
    virtual bool init() = 0x1fd750;
@end

@interface cocos2d::CCMenuItemLabel
    virtual ~CCMenuItemLabel() = 0x1fc0d0;
    virtual ~CCMenuItemLabel() = 0x1fc140;
    virtual void activate() = 0x1fc240;
    virtual void selected() = 0x1fc2e0;
    virtual void unselected() = 0x1fc380;
    virtual void setEnabled(bool) = 0x1fc3f0;
    virtual void getDisabledColor() = 0x1fbb80;
    virtual void setDisabledColor(cocos2d::_ccColor3B const&) = 0x1fbb90;
    virtual void getLabel() = 0x1fbbb0;
    virtual void setLabel(cocos2d::CCNode*) = 0x1fbbc0;
@end

@interface cocos2d::CCMouseDelegate
    virtual void rightKeyDown() = 0x61b0;
    virtual void rightKeyUp() = 0x61c0;
    virtual void scrollWheel(float, float) = 0x61d0;
@end

@interface cocos2d::CCPrettyPrinter
    virtual ~CCPrettyPrinter() = 0x277290;
    virtual void visitObject(cocos2d::CCObject const*) = 0x2763e0;
    virtual void visit(cocos2d::CCBool const*) = 0x276470;
    virtual void visit(cocos2d::CCInteger const*) = 0x276510;
    virtual void visit(cocos2d::CCFloat const*) = 0x2765a0;
    virtual void visit(cocos2d::CCDouble const*) = 0x276630;
    virtual void visit(cocos2d::CCString const*) = 0x2766c0;
    virtual void visit(cocos2d::CCArray const*) = 0x276700;
    virtual void visit(cocos2d::CCDictionary const*) = 0x276b50;
    virtual void visit(cocos2d::CCSet const*) = 0x276f20;
    virtual void clear() = 0x2763a0;
    virtual void getResult() = 0x2763c0;
@end

@interface cocos2d::CCProgressTimer
    virtual ~CCProgressTimer() = 0x36c3b0;
    virtual ~CCProgressTimer() = 0x36c430;
    virtual void draw() = 0x36e8f0;
    virtual void setOpacity(unsigned char) = 0x36c720;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x36c590;
    virtual void getColor() const = 0x36c700;
    virtual void getOpacity() const = 0x36c820;
    virtual void getMidpoint() = 0x36e7c0;
    virtual void setMidpoint(cocos2d::CCPoint) = 0x36e7e0;
@end

@interface cocos2d::CCRenderTexture
    virtual ~CCRenderTexture() = 0x35c5c0;
    virtual ~CCRenderTexture() = 0x35c5d0;
    virtual void draw() = 0x35d570;
    virtual void visit() = 0x35d4e0;
    virtual void getSprite() = 0x35c620;
    virtual void setSprite(cocos2d::CCSprite*) = 0x35c630;
@end

@interface cocos2d::CCRepeatForever
    virtual ~CCRepeatForever() = 0x1f3870;
    virtual ~CCRepeatForever() = 0x1f38c0;
    virtual void isDone() = 0x1f3b40;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f3a90;
    virtual void step(float) = 0x1f3ad0;
    virtual void reverse() = 0x1f3b50;
@end

@interface cocos2d::CCAccelAmplitude
    virtual ~CCAccelAmplitude() = 0xee970;
    virtual ~CCAccelAmplitude() = 0xee9d0;
    virtual void update(float) = 0xeea70;
    virtual void startWithTarget(cocos2d::CCNode*) = 0xeea40;
    virtual void reverse() = 0xeeac0;
@end

@interface cocos2d::CCActionInterval
    virtual ~CCActionInterval() = 0x1f9d60;
    virtual ~CCActionInterval() = 0x1f9d70;
    virtual void isDone() = 0x1f2640;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f2700;
    virtual void step(float) = 0x1f2660;
    virtual void reverse() = 0x1f2720;
@end

@interface cocos2d::CCAnimationCache
    virtual ~CCAnimationCache() = 0x244bd0;
    virtual ~CCAnimationCache() = 0x244c20;
@end

@interface cocos2d::CCAnimationFrame
    virtual ~CCAnimationFrame() = 0x140ab0;
    virtual ~CCAnimationFrame() = 0x140b10;
@end

@interface cocos2d::CCEaseElasticOut
    virtual ~CCEaseElasticOut() = 0x2a4eb0;
    virtual ~CCEaseElasticOut() = 0x2a4f00;
    virtual void update(float) = 0x2a3250;
    virtual void reverse() = 0x2a32f0;
@end

@interface cocos2d::CCEaseRateAction
    virtual ~CCEaseRateAction() = 0x2a1880;
    virtual ~CCEaseRateAction() = 0x2a18d0;
    virtual void reverse() = 0x2a1930;
@end

@interface cocos2d::CCFadeOutBLTiles
    virtual ~CCFadeOutBLTiles() = 0x45e950;
    virtual ~CCFadeOutBLTiles() = 0x45e960;
    virtual void testFunc(cocos2d::CCSize const&, float) = 0x45cf10;
@end

@interface cocos2d::CCFadeOutTRTiles
    virtual ~CCFadeOutTRTiles() = 0x45e910;
    virtual ~CCFadeOutTRTiles() = 0x45e920;
    virtual void update(float) = 0x45ccc0;
    virtual void testFunc(cocos2d::CCSize const&, float) = 0x45cad0;
    virtual void transformTile(cocos2d::CCPoint const&, float) = 0x45cbc0;
@end

@interface cocos2d::CCFadeOutUpTiles
    virtual ~CCFadeOutUpTiles() = 0x45e990;
    virtual ~CCFadeOutUpTiles() = 0x45e9a0;
    virtual void testFunc(cocos2d::CCSize const&, float) = 0x45d070;
    virtual void transformTile(cocos2d::CCPoint const&, float) = 0x45d0f0;
@end

@interface cocos2d::CCLayerMultiplex
    virtual ~CCLayerMultiplex() = 0x275980;
    virtual ~CCLayerMultiplex() = 0x275ad0;
@end

@interface cocos2d::CCMenuItemSprite
    virtual ~CCMenuItemSprite() = 0x1feab0;
    virtual ~CCMenuItemSprite() = 0x1feb20;
    virtual void selected() = 0x1fd3f0;
    virtual void unselected() = 0x1fd470;
    virtual void setEnabled(bool) = 0x1fd4e0;
    virtual void getNormalImage() = 0x1fcee0;
    virtual void setNormalImage(cocos2d::CCNode*) = 0x1fcef0;
    virtual void getSelectedImage() = 0x1fcfc0;
    virtual void setSelectedImage(cocos2d::CCNode*) = 0x1fcfd0;
    virtual void getDisabledImage() = 0x1fd070;
    virtual void setDisabledImage(cocos2d::CCNode*) = 0x1fd080;
    virtual void updateImagesVisibility() = 0x1fd510;

    static cocos2d::CCMenuItemSprite* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*) = 0x1fd120;
    static cocos2d::CCMenuItemSprite* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x1fd140;
    static cocos2d::CCMenuItemSprite* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x1fd2d0;
@end

@interface cocos2d::CCMenuItemToggle
    virtual ~CCMenuItemToggle() = 0x1fe7a0;
    virtual ~CCMenuItemToggle() = 0x1fe7b0;
    virtual void activate() = 0x1fe950;
    virtual void selected() = 0x1fe8f0;
    virtual void unselected() = 0x1fe920;
    virtual void setEnabled(bool) = 0x1fea00;
    virtual void getSelectedIndex() = 0x1fe8e0;
    virtual void setSelectedIndex(unsigned int) = 0x1fe7e0;
    virtual void getSubItems() = 0x1fde50;
    virtual void setSubItems(cocos2d::CCArray*) = 0x1fde10;
@end

@interface cocos2d::CCParticleSystem
    virtual ~CCParticleSystem() = 0x46b390;
    virtual ~CCParticleSystem() = 0x46b3a0;
    virtual void update(float) = 0x46be50;
    virtual bool init() = 0x4692b0;
    virtual void setScaleX(float) = 0x46cdf0;
    virtual void setScaleY(float) = 0x46ce10;
    virtual void setScale(float) = 0x46cdb0;
    virtual void setRotation(float) = 0x46cdd0;
    virtual void getBatchNode() = 0x46ccd0;
    virtual void setBatchNode(cocos2d::CCParticleBatchNode*) = 0x46cce0;
    virtual void getParticleCount() = 0x46c8a0;
    virtual void getDuration() = 0x46c8b0;
    virtual void setDuration(float) = 0x46c8c0;
    virtual void getSourcePosition() = 0x46c8d0;
    virtual void setSourcePosition(cocos2d::CCPoint const&) = 0x46c8e0;
    virtual void getPosVar() = 0x46c900;
    virtual void setPosVar(cocos2d::CCPoint const&) = 0x46c910;
    virtual void getLife() = 0x46c930;
    virtual void setLife(float) = 0x46c940;
    virtual void getLifeVar() = 0x46c950;
    virtual void setLifeVar(float) = 0x46c960;
    virtual void getAngle() = 0x46c970;
    virtual void setAngle(float) = 0x46c980;
    virtual void getAngleVar() = 0x46c990;
    virtual void setAngleVar(float) = 0x46c9a0;
    virtual void getGravity() = 0x46c780;
    virtual void setGravity(cocos2d::CCPoint const&) = 0x46c760;
    virtual void getSpeed() = 0x46c7a0;
    virtual void setSpeed(float) = 0x46c790;
    virtual void getSpeedVar() = 0x46c7c0;
    virtual void setSpeedVar(float) = 0x46c7b0;
    virtual void getTangentialAccel() = 0x46c6d0;
    virtual void setTangentialAccel(float) = 0x46c6c0;
    virtual void getTangentialAccelVar() = 0x46c6f0;
    virtual void setTangentialAccelVar(float) = 0x46c6e0;
    virtual void getRadialAccel() = 0x46c710;
    virtual void setRadialAccel(float) = 0x46c700;
    virtual void getRadialAccelVar() = 0x46c730;
    virtual void setRadialAccelVar(float) = 0x46c720;
    virtual void getRotationIsDir() = 0x46c750;
    virtual void setRotationIsDir(bool) = 0x46c740;
    virtual void getStartRadius() = 0x46c7e0;
    virtual void setStartRadius(float) = 0x46c7d0;
    virtual void getStartRadiusVar() = 0x46c800;
    virtual void setStartRadiusVar(float) = 0x46c7f0;
    virtual void getEndRadius() = 0x46c820;
    virtual void setEndRadius(float) = 0x46c810;
    virtual void getEndRadiusVar() = 0x46c840;
    virtual void setEndRadiusVar(float) = 0x46c830;
    virtual void getRotatePerSecond() = 0x46c860;
    virtual void setRotatePerSecond(float) = 0x46c850;
    virtual void getRotatePerSecondVar() = 0x46c880;
    virtual void setRotatePerSecondVar(float) = 0x46c870;
    virtual void isActive() = 0x46c890;
    virtual void isBlendAdditive() = 0x46c6a0;
    virtual void setBlendAdditive(bool) = 0x46c640;
    virtual void getStartSize() = 0x46c9b0;
    virtual void setStartSize(float) = 0x46c9c0;
    virtual void getStartSizeVar() = 0x46c9d0;
    virtual void setStartSizeVar(float) = 0x46c9e0;
    virtual void getEndSize() = 0x46c9f0;
    virtual void setEndSize(float) = 0x46ca00;
    virtual void getEndSizeVar() = 0x46ca10;
    virtual void setEndSizeVar(float) = 0x46ca20;
    virtual void getStartColor() = 0x46ca30;
    virtual void setStartColor(cocos2d::_ccColor4F const&) = 0x46ca40;
    virtual void getStartColorVar() = 0x46ca60;
    virtual void setStartColorVar(cocos2d::_ccColor4F const&) = 0x46ca70;
    virtual void getEndColor() = 0x46ca90;
    virtual void setEndColor(cocos2d::_ccColor4F const&) = 0x46caa0;
    virtual void getEndColorVar() = 0x46cac0;
    virtual void setEndColorVar(cocos2d::_ccColor4F const&) = 0x46cad0;
    virtual void getStartSpin() = 0x46caf0;
    virtual void setStartSpin(float) = 0x46cb00;
    virtual void getStartSpinVar() = 0x46cb10;
    virtual void setStartSpinVar(float) = 0x46cb20;
    virtual void getEndSpin() = 0x46cb30;
    virtual void setEndSpin(float) = 0x46cb40;
    virtual void getEndSpinVar() = 0x46cb50;
    virtual void setEndSpinVar(float) = 0x46cb60;
    virtual void getEmissionRate() = 0x46cb70;
    virtual void setEmissionRate(float) = 0x46cb80;
    virtual void getTotalParticles() = 0x46cb90;
    virtual void setTotalParticles(unsigned int) = 0x46cba0;
    virtual void getTexture() = 0x46c620;
    virtual void setTexture(cocos2d::CCTexture2D*) = 0x46c4f0;
    virtual void getBlendFunc() = 0x46cbb0;
    virtual void setBlendFunc(cocos2d::_ccBlendFunc) = 0x46cbd0;
    virtual void getOpacityModifyRGB() = 0x46cc50;
    virtual void setOpacityModifyRGB(bool) = 0x46cc60;
    virtual void getPositionType() = 0x46cc70;
    virtual void setPositionType(cocos2d::tCCPositionType) = 0x46cc80;
    virtual void isAutoRemoveOnFinish() = 0x46cc90;
    virtual void setAutoRemoveOnFinish(bool) = 0x46cca0;
    virtual void getEmitterMode() = 0x46ccb0;
    virtual void setEmitterMode(int) = 0x46ccc0;
    virtual void initWithTotalParticles(unsigned int) = 0x46b130;
    virtual void updateQuadWithParticle(cocos2d::sCCParticle*, cocos2d::CCPoint const&) = 0x46c4d0;
    virtual void postStep() = 0x46c4e0;
    virtual void updateWithNoTime() = 0x46c4b0;
    virtual void updateBlendFunc() = 0x46c5b0;
@end

@interface cocos2d::CCProfilingTimer
    virtual ~CCProfilingTimer() = 0x28a470;
    virtual ~CCProfilingTimer() = 0x28a4c0;
@end

@interface cocos2d::CCProgressFromTo
    virtual ~CCProgressFromTo() = 0x23d6c0;
    virtual ~CCProgressFromTo() = 0x23d6d0;
    virtual void update(float) = 0x23d650;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x23d640;
    virtual void reverse() = 0x23d590;
@end

@interface cocos2d::CCTMXObjectGroup
    virtual ~CCTMXObjectGroup() = 0x25f5c0;
    virtual ~CCTMXObjectGroup() = 0x25f5d0;
    virtual void getProperties() = 0x25f800;
    virtual void setProperties(cocos2d::CCDictionary*) = 0x25f810;
    virtual void getObjects() = 0x25f850;
    virtual void setObjects(cocos2d::CCArray*) = 0x25f860;
@end

@interface cocos2d::CCTMXTilesetInfo
    virtual ~CCTMXTilesetInfo() = 0x282ad0;
    virtual ~CCTMXTilesetInfo() = 0x282b50;
@end

@interface cocos2d::CCTargetedAction
    virtual ~CCTargetedAction() = 0x1f99e0;
    virtual ~CCTargetedAction() = 0x1f9a40;
    virtual void update(float) = 0x1f9d40;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f9d00;
    virtual void stop() = 0x1f9d30;
@end

@interface cocos2d::CCTransitionFade
    virtual ~CCTransitionFade() = 0x8e860;
    virtual ~CCTransitionFade() = 0x8e8c0;
    virtual void onEnter() = 0x8eb30;
    virtual void onExit() = 0x8ec60;
    virtual void initWithDuration(float, cocos2d::CCScene*) = 0x8eb10;
    virtual void initWithDuration(float, cocos2d::CCScene*, cocos2d::_ccColor3B const&) = 0x8ea50;
@end

@interface cocos2d::CCAutoreleasePool
    virtual ~CCAutoreleasePool() = 0x214100;
    virtual ~CCAutoreleasePool() = 0x214160;
@end

@interface cocos2d::CCDeccelAmplitude
    virtual ~CCDeccelAmplitude() = 0xeecd0;
    virtual ~CCDeccelAmplitude() = 0xeed20;
    virtual void update(float) = 0xeedb0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0xeed80;
    virtual void reverse() = 0xeee10;
@end

@interface cocos2d::CCEGLViewProtocol
    virtual ~CCEGLViewProtocol() = 0x29d7b0;
    virtual void getFrameSize() const = 0x29d950;
    virtual void setFrameSize(float, float) = 0x29d960;
    virtual void getVisibleSize() const = 0x29d9a0;
    virtual void getVisibleOrigin() const = 0x29d9f0;
    virtual void setDesignResolutionSize(float, float, ResolutionPolicy) = 0x29d7c0;
    virtual void getDesignResolutionSize() const = 0x29d940;
    virtual void setTouchDelegate(cocos2d::EGLTouchDelegate*) = 0x29da60;
    virtual void setViewPortInPoints(float, float, float, float) = 0x29da70;
    virtual void setScissorInPoints(float, float, float, float) = 0x29dab0;
    virtual void isScissorEnabled() = 0x29daf0;
    virtual void getScissorRect() = 0x29db10;
    virtual void setViewName(char const*) = 0x29dba0;
    virtual void handleTouchesBegin(int, int*, float*, float*) = 0x29dbd0;
    virtual void handleTouchesMove(int, int*, float*, float*) = 0x29deb0;
    virtual void handleTouchesEnd(int, int*, float*, float*) = 0x29e1d0;
    virtual void handleTouchesCancel(int, int*, float*, float*) = 0x29e260;
    virtual void pollInputEvents() = 0x29e320;
@end

@interface cocos2d::CCEaseBounceInOut
    virtual ~CCEaseBounceInOut() = 0x2a5220;
    virtual ~CCEaseBounceInOut() = 0x2a5270;
    virtual void update(float) = 0x2a3f40;
    virtual void reverse() = 0x2a40f0;
@end

@interface cocos2d::CCKeyboardHandler
    virtual ~CCKeyboardHandler() = 0x241e90;
    virtual ~CCKeyboardHandler() = 0x241f00;
    virtual void initWithDelegate(cocos2d::CCKeyboardDelegate*) = 0x241ff0;
@end

@interface cocos2d::CCMouseDispatcher
    virtual ~CCMouseDispatcher() = 0x2e8d40;
    virtual ~CCMouseDispatcher() = 0x2e8d50;
@end

@interface cocos2d::CCSpriteBatchNode
    virtual ~CCSpriteBatchNode() = 0xbb790;
    virtual ~CCSpriteBatchNode() = 0xbb800;
    virtual bool init() = 0xbb680;
    virtual void addChild(cocos2d::CCNode*) = 0xbbb40;
    virtual void addChild(cocos2d::CCNode*, int) = 0xbbb50;
    virtual void addChild(cocos2d::CCNode*, int, int) = 0xbb930;
    virtual void removeChild(cocos2d::CCNode*, bool) = 0xbbbb0;
    virtual void removeAllChildrenWithCleanup(bool) = 0xbbe30;
    virtual void reorderChild(cocos2d::CCNode*, int) = 0xbbb60;
    virtual void sortAllChildren() = 0xbbee0;
    virtual void draw() = 0xbc540;
    virtual void visit() = 0xbb880;
    virtual void getTexture() = 0xbcd70;
    virtual void setTexture(cocos2d::CCTexture2D*) = 0xbcda0;
    virtual void setBlendFunc(cocos2d::_ccBlendFunc) = 0xbcd30;
    virtual void getBlendFunc() = 0xbcd50;
@end

@interface cocos2d::CCTouchDispatcher
    virtual ~CCTouchDispatcher() = 0x280ed0;
    virtual ~CCTouchDispatcher() = 0x280ef0;
    virtual void touchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x282050;
    virtual void touchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x282090;
    virtual void touchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x2820d0;
    virtual void touchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x282110;
@end

@interface cocos2d::CCTransitionFlipX
    virtual ~CCTransitionFlipX() = 0x8cec0;
    virtual ~CCTransitionFlipX() = 0x8cf20;
    virtual void onEnter() = 0x8cf90;
@end

@interface cocos2d::CCTransitionFlipY
    virtual ~CCTransitionFlipY() = 0x8d2c0;
    virtual ~CCTransitionFlipY() = 0x8d320;
    virtual void onEnter() = 0x8d390;
@end

@interface cocos2d::CCTransitionScene
    virtual ~CCTransitionScene() = 0x89cf0;
    virtual ~CCTransitionScene() = 0x89d50;
    virtual void onEnter() = 0x8a1a0;
    virtual void onExit() = 0x8a1f0;
    virtual void cleanup() = 0x8a250;
    virtual void draw() = 0x89f40;
    virtual void initWithDuration(float, cocos2d::CCScene*) = 0x89ea0;
    virtual void sceneOrder() = 0x89f30;
@end

@interface cocos2d::CCCardinalSplineBy
    virtual ~CCCardinalSplineBy() = 0x1687c0;
    virtual ~CCCardinalSplineBy() = 0x168820;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1684b0;
    virtual void reverse() = 0x168160;
    virtual void updatePosition(cocos2d::CCPoint&) = 0x168110;
@end

@interface cocos2d::CCCardinalSplineTo
    virtual ~CCCardinalSplineTo() = 0x167960;
    virtual ~CCCardinalSplineTo() = 0x1679c0;
    virtual void update(float) = 0x167c40;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x167aa0;
    virtual void reverse() = 0x167f60;
    virtual void updatePosition(cocos2d::CCPoint&) = 0x167f30;
@end

@interface cocos2d::CCEaseElasticInOut
    virtual ~CCEaseElasticInOut() = 0x2a4f60;
    virtual ~CCEaseElasticInOut() = 0x2a4fb0;
    virtual void update(float) = 0x2a34f0;
    virtual void reverse() = 0x2a3620;
@end

@interface cocos2d::CCFadeOutDownTiles
    virtual ~CCFadeOutDownTiles() = 0x45e9d0;
    virtual ~CCFadeOutDownTiles() = 0x45e9e0;
    virtual void testFunc(cocos2d::CCSize const&, float) = 0x45d280;
@end

@interface cocos2d::CCKeyboardDelegate
    virtual void keyUp(cocos2d::enumKeyCodes) = 0x61a0;
@end

@interface cocos2d::CCKeypadDispatcher
    virtual ~CCKeypadDispatcher() = 0x360110;
    virtual ~CCKeypadDispatcher() = 0x360120;
@end

@interface cocos2d::CCShatteredTiles3D
    virtual ~CCShatteredTiles3D() = 0x45e8d0;
    virtual ~CCShatteredTiles3D() = 0x45e8e0;
    virtual void update(float) = 0x45bdc0;
    virtual void initWithDuration(float, cocos2d::CCSize const&, int, bool) = 0x45bc70;
@end

@interface cocos2d::CCSpriteFrameCache
    virtual ~CCSpriteFrameCache() = 0x198b50;
    virtual ~CCSpriteFrameCache() = 0x198b60;
@end

@interface cocos2d::CCTransitionFadeBL
    virtual ~CCTransitionFadeBL() = 0x901c0;
    virtual ~CCTransitionFadeBL() = 0x90220;
    virtual void actionWithSize(cocos2d::CCSize const&) = 0x90380;
@end

@interface cocos2d::CCTransitionFadeTR
    virtual ~CCTransitionFadeTR() = 0x8fdf0;
    virtual ~CCTransitionFadeTR() = 0x8fe50;
    virtual void onEnter() = 0x8ffc0;
    virtual void sceneOrder() = 0x8ffb0;
    virtual void actionWithSize(cocos2d::CCSize const&) = 0x900c0;
    virtual void easeActionWithAction(cocos2d::CCActionInterval*) = 0x900e0;
@end

@interface cocos2d::CCTransitionFadeUp
    virtual ~CCTransitionFadeUp() = 0x90460;
    virtual ~CCTransitionFadeUp() = 0x904c0;
    virtual void actionWithSize(cocos2d::CCSize const&) = 0x90620;
@end

@interface cocos2d::CCEaseExponentialIn
    virtual ~CCEaseExponentialIn() = 0x2a4930;
    virtual ~CCEaseExponentialIn() = 0x2a4980;
    virtual void update(float) = 0x2a2160;
    virtual void reverse() = 0x2a21b0;
@end

@interface cocos2d::CCParticleBatchNode
    virtual ~CCParticleBatchNode() = 0x205ff0;
    virtual ~CCParticleBatchNode() = 0x206050;
    virtual void addChild(cocos2d::CCNode*) = 0x206360;
    virtual void addChild(cocos2d::CCNode*, int) = 0x206370;
    virtual void addChild(cocos2d::CCNode*, int, int) = 0x206380;
    virtual void removeChild(cocos2d::CCNode*, bool) = 0x206bd0;
    virtual void removeAllChildrenWithCleanup(bool) = 0x206d10;
    virtual void reorderChild(cocos2d::CCNode*, int) = 0x2067c0;
    virtual void draw() = 0x206da0;
    virtual void visit() = 0x2062e0;
    virtual void getTexture() = 0x206f90;
    virtual void setTexture(cocos2d::CCTexture2D*) = 0x206ee0;
    virtual void setBlendFunc(cocos2d::_ccBlendFunc) = 0x206fc0;
    virtual void getBlendFunc() = 0x206fe0;
@end

@interface cocos2d::CCTiledGrid3DAction
    virtual ~CCTiledGrid3DAction() = 0xef100;
    virtual ~CCTiledGrid3DAction() = 0xef110;
    virtual void getGrid() = 0xee350;
@end

@interface cocos2d::CCTransitionMoveInB
    virtual ~CCTransitionMoveInB() = 0x8b8d0;
    virtual ~CCTransitionMoveInB() = 0x8b930;
    virtual void initScenes() = 0x8ba90;
@end

@interface cocos2d::CCTransitionMoveInL
    virtual ~CCTransitionMoveInL() = 0x8aef0;
    virtual ~CCTransitionMoveInL() = 0x8af50;
    virtual void onEnter() = 0x8b0b0;
    virtual void initScenes() = 0x8b1e0;
    virtual void action() = 0x8b180;
    virtual void easeActionWithAction(cocos2d::CCActionInterval*) = 0x8b1c0;
@end

@interface cocos2d::CCTransitionMoveInR
    virtual ~CCTransitionMoveInR() = 0x8b310;
    virtual ~CCTransitionMoveInR() = 0x8b370;
    virtual void initScenes() = 0x8b4d0;
@end

@interface cocos2d::CCTransitionMoveInT
    virtual ~CCTransitionMoveInT() = 0x8b5f0;
    virtual ~CCTransitionMoveInT() = 0x8b650;
    virtual void initScenes() = 0x8b7b0;
@end

@interface cocos2d::CCComponentContainer
    virtual ~CCComponentContainer() = 0x166350;
    virtual void get(char const*) const = 0x1663a0;
    virtual void add(cocos2d::CCComponent*) = 0x166470;
    virtual void remove(char const*) = 0x1665f0;
    virtual void remove(cocos2d::CCComponent*) = 0x1668d0;
    virtual void removeAll() = 0x166ab0;
    virtual void visit(float) = 0x166cb0;
@end

@interface cocos2d::CCEaseExponentialOut
    virtual ~CCEaseExponentialOut() = 0x2a49e0;
    virtual ~CCEaseExponentialOut() = 0x2a4a30;
    virtual void update(float) = 0x2a2360;
    virtual void reverse() = 0x2a23b0;
@end

@interface cocos2d::CCKeyboardDispatcher
    virtual ~CCKeyboardDispatcher() = 0xe7f90;
    virtual ~CCKeyboardDispatcher() = 0xe7fa0;
@end

@interface cocos2d::CCNotificationCenter
    virtual ~CCNotificationCenter() = 0x131c00;
    virtual ~CCNotificationCenter() = 0x131c50;
@end

@interface cocos2d::CCParticleSystemQuad
    virtual ~CCParticleSystemQuad() = 0x36afc0;
    virtual ~CCParticleSystemQuad() = 0x36afd0;
    virtual void draw() = 0x36b850;
    virtual void setBatchNode(cocos2d::CCParticleBatchNode*) = 0x36bb70;
    virtual void setTotalParticles(unsigned int) = 0x36b910;
    virtual void setTexture(cocos2d::CCTexture2D*) = 0x36b3c0;
    virtual void initWithTotalParticles(unsigned int) = 0x36aa80;
    virtual void updateQuadWithParticle(cocos2d::sCCParticle*, cocos2d::CCPoint const&) = 0x36b570;
    virtual void postStep() = 0x36b800;
@end

@interface cocos2d::CCScriptHandlerEntry
    virtual ~CCScriptHandlerEntry() = 0x198280;
    virtual ~CCScriptHandlerEntry() = 0x198300;
@end

@interface cocos2d::CCTransitionFadeDown
    virtual ~CCTransitionFadeDown() = 0x90700;
    virtual ~CCTransitionFadeDown() = 0x90760;
    virtual void actionWithSize(cocos2d::CCSize const&) = 0x908c0;
@end

@interface cocos2d::CCTransitionJumpZoom
    virtual ~CCTransitionJumpZoom() = 0x8aa40;
    virtual ~CCTransitionJumpZoom() = 0x8aaa0;
    virtual void onEnter() = 0x8abf0;
@end

@interface cocos2d::CCTransitionPageTurn
    virtual ~CCTransitionPageTurn() = 0x20d0d0;
    virtual ~CCTransitionPageTurn() = 0x20d0e0;
    virtual void onEnter() = 0x20d1d0;
    virtual void sceneOrder() = 0x20d1b0;
    virtual void initWithDuration(float, cocos2d::CCScene*, bool) = 0x20d190;
@end

@interface cocos2d::CCTransitionProgress
    virtual ~CCTransitionProgress() = 0x1385e0;
    virtual ~CCTransitionProgress() = 0x1385f0;
    virtual void onEnter() = 0x137970;
    virtual void onExit() = 0x137b30;
    virtual void sceneOrder() = 0x137b60;
    virtual void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x137ba0;
    virtual void setupTransition() = 0x137b70;
@end

@interface cocos2d::CCTransitionRotoZoom
    virtual ~CCTransitionRotoZoom() = 0x8a700;
    virtual ~CCTransitionRotoZoom() = 0x8a760;
    virtual void onEnter() = 0x8a7d0;
@end

@interface cocos2d::CCTransitionSlideInB
    virtual ~CCTransitionSlideInB() = 0x8c730;
    virtual ~CCTransitionSlideInB() = 0x8c790;
    virtual void sceneOrder() = 0x8c8f0;
    virtual void initScenes() = 0x8c900;
    virtual void action() = 0x8c970;
@end

@interface cocos2d::CCTransitionSlideInL
    virtual ~CCTransitionSlideInL() = 0x8bbc0;
    virtual ~CCTransitionSlideInL() = 0x8bc20;
    virtual void onEnter() = 0x8bc90;
    virtual void sceneOrder() = 0x8bd80;
    virtual void initScenes() = 0x8bd90;
    virtual void action() = 0x8be00;
    virtual void easeActionWithAction(cocos2d::CCActionInterval*) = 0x8be60;
@end

@interface cocos2d::CCTransitionSlideInR
    virtual ~CCTransitionSlideInR() = 0x8c050;
    virtual ~CCTransitionSlideInR() = 0x8c0b0;
    virtual void sceneOrder() = 0x8c210;
    virtual void initScenes() = 0x8c220;
    virtual void action() = 0x8c290;
@end

@interface cocos2d::CCTransitionSlideInT
    virtual ~CCTransitionSlideInT() = 0x8c3c0;
    virtual ~CCTransitionSlideInT() = 0x8c420;
    virtual void sceneOrder() = 0x8c580;
    virtual void initScenes() = 0x8c590;
    virtual void action() = 0x8c600;
@end

@interface cocos2d::CCBMFontConfiguration
    virtual ~CCBMFontConfiguration() = 0x346130;
    virtual ~CCBMFontConfiguration() = 0x346140;
@end

@interface cocos2d::CCDisplayLinkDirector
    virtual ~CCDisplayLinkDirector() = 0x24b240;
    virtual ~CCDisplayLinkDirector() = 0x24b250;
    virtual void setAnimationInterval(double) = 0x24b180;
    virtual void stopAnimation() = 0x24b170;
    virtual void startAnimation() = 0x24b0f0;
    virtual void mainLoop() = 0x24b130;
@end

@interface cocos2d::CCTransitionCrossFade
    virtual ~CCTransitionCrossFade() = 0x8ed70;
    virtual ~CCTransitionCrossFade() = 0x8edd0;
    virtual void onEnter() = 0x8ef30;
    virtual void onExit() = 0x8f290;
    virtual void draw() = 0x8ef20;
@end

@interface cocos2d::CCTransitionSplitCols
    virtual ~CCTransitionSplitCols() = 0x8f780;
    virtual ~CCTransitionSplitCols() = 0x8f7e0;
    virtual void onEnter() = 0x8f940;
    virtual void action() = 0x8fa30;
    virtual void easeActionWithAction(cocos2d::CCActionInterval*) = 0x8fa50;
@end

@interface cocos2d::CCTransitionSplitRows
    virtual ~CCTransitionSplitRows() = 0x8fb50;
    virtual ~CCTransitionSplitRows() = 0x8fbb0;
    virtual void action() = 0x8fc20;
@end

@interface cocos2d::CCTransitionZoomFlipX
    virtual ~CCTransitionZoomFlipX() = 0x8dae0;
    virtual ~CCTransitionZoomFlipX() = 0x8db40;
    virtual void onEnter() = 0x8dbb0;
@end

@interface cocos2d::CCTransitionZoomFlipY
    virtual ~CCTransitionZoomFlipY() = 0x8df50;
    virtual ~CCTransitionZoomFlipY() = 0x8dfb0;
    virtual void onEnter() = 0x8e020;
@end

@interface cocos2d::CCAccelDeccelAmplitude
    virtual ~CCAccelDeccelAmplitude() = 0xee610;
    virtual ~CCAccelDeccelAmplitude() = 0xee660;
    virtual void update(float) = 0xee6f0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0xee6c0;
    virtual void reverse() = 0xee750;
@end

@interface cocos2d::CCEaseExponentialInOut
    virtual ~CCEaseExponentialInOut() = 0x2a4a90;
    virtual ~CCEaseExponentialInOut() = 0x2a4ae0;
    virtual void update(float) = 0x2a2560;
    virtual void reverse() = 0x2a25d0;
@end

@interface cocos2d::CCNotificationObserver
    virtual ~CCNotificationObserver() = 0x132640;
    virtual ~CCNotificationObserver() = 0x132680;
    virtual void getTarget() = 0x1326e0;
    virtual cocos2d::SEL_CallFuncO getSelector() = 0x1326f0;
    virtual void getName() = 0x132700;
    virtual void getObject() = 0x132710;
    virtual void getHandler() = 0x132720;
    virtual void setHandler(int) = 0x132730;
@end

@interface cocos2d::CCStandardTouchHandler
    virtual ~CCStandardTouchHandler() = 0x2482a0;
    virtual ~CCStandardTouchHandler() = 0x248310;
    virtual void initWithDelegate(cocos2d::CCTouchDelegate*, int) = 0x247ed0;
@end

@interface cocos2d::CCTargetedTouchHandler
    virtual ~CCTargetedTouchHandler() = 0x248260;
    virtual ~CCTargetedTouchHandler() = 0x248270;
@end

@interface cocos2d::CCTransitionShrinkGrow
    virtual ~CCTransitionShrinkGrow() = 0x8ca90;
    virtual ~CCTransitionShrinkGrow() = 0x8caf0;
    virtual void onEnter() = 0x8cc50;
    virtual void easeActionWithAction(cocos2d::CCActionInterval*) = 0x8cde0;
@end

@interface cocos2d::CCTransitionFlipAngular
    virtual ~CCTransitionFlipAngular() = 0x8d6d0;
    virtual ~CCTransitionFlipAngular() = 0x8d730;
    virtual void onEnter() = 0x8d7a0;
@end

@interface cocos2d::CCTransitionTurnOffTiles
    virtual ~CCTransitionTurnOffTiles() = 0x8f3c0;
    virtual ~CCTransitionTurnOffTiles() = 0x8f420;
    virtual void onEnter() = 0x8f590;
    virtual void sceneOrder() = 0x8f580;
    virtual void easeActionWithAction(cocos2d::CCActionInterval*) = 0x8f6a0;
@end

@interface cocos2d::CCTouchScriptHandlerEntry
    virtual ~CCTouchScriptHandlerEntry() = 0x1987d0;
    virtual ~CCTouchScriptHandlerEntry() = 0x1987e0;
@end

@interface cocos2d::CCTransitionProgressInOut
    virtual ~CCTransitionProgressInOut() = 0x138720;
    virtual ~CCTransitionProgressInOut() = 0x138730;
    virtual void sceneOrder() = 0x1382d0;
    virtual void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x138300;
    virtual void setupTransition() = 0x1382e0;
@end

@interface cocos2d::CCTransitionProgressOutIn
    virtual ~CCTransitionProgressOutIn() = 0x138760;
    virtual ~CCTransitionProgressOutIn() = 0x138770;
    virtual void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x1384c0;
@end

@interface cocos2d::CCTransitionSceneOriented
    virtual ~CCTransitionSceneOriented() = 0x8a330;
    virtual ~CCTransitionSceneOriented() = 0x8a390;
    virtual void initWithDuration(float, cocos2d::CCScene*, cocos2d::tOrientation) = 0x8a4e0;
@end

@interface cocos2d::CCTransitionZoomFlipAngular
    virtual ~CCTransitionZoomFlipAngular() = 0x8e3d0;
    virtual ~CCTransitionZoomFlipAngular() = 0x8e430;
    virtual void onEnter() = 0x8e4a0;
@end

@interface cocos2d::CCTransitionProgressRadialCW
    virtual ~CCTransitionProgressRadialCW() = 0x138660;
    virtual ~CCTransitionProgressRadialCW() = 0x138670;
    virtual void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x137dd0;
@end

@interface cocos2d::CCTransitionProgressVertical
    virtual ~CCTransitionProgressVertical() = 0x1386e0;
    virtual ~CCTransitionProgressVertical() = 0x1386f0;
    virtual void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x138110;
@end

@interface cocos2d::CCSchedulerScriptHandlerEntry
    virtual ~CCSchedulerScriptHandlerEntry() = 0x1985f0;
    virtual ~CCSchedulerScriptHandlerEntry() = 0x198600;
@end

@interface cocos2d::CCTransitionProgressRadialCCW
    virtual ~CCTransitionProgressRadialCCW() = 0x138620;
    virtual ~CCTransitionProgressRadialCCW() = 0x138630;
    virtual void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x137bb0;
@end

@interface cocos2d::CCTransitionProgressHorizontal
    virtual ~CCTransitionProgressHorizontal() = 0x1386a0;
    virtual ~CCTransitionProgressHorizontal() = 0x1386b0;
    virtual void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x137f50;
@end

@interface cocos2d::CCSet
    virtual ~CCSet() = 0x45b050;
    virtual ~CCSet() = 0x45b060;
    virtual void acceptVisitor(cocos2d::CCDataVisitor&) = 0x45b090;
@end

@interface cocos2d::CCMenu
    virtual ~CCMenu() = 0x43a4f0;
    virtual ~CCMenu() = 0x43a500;
    virtual bool init() = 0x438b90;
    virtual void addChild(cocos2d::CCNode*) = 0x438ba0;
    virtual void addChild(cocos2d::CCNode*, int) = 0x438bb0;
    virtual void addChild(cocos2d::CCNode*, int, int) = 0x438bc0;
    virtual void removeChild(cocos2d::CCNode*, bool) = 0x438c20;
    virtual void onExit() = 0x438bd0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x438d20;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x4390b0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x438fd0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x439050;
    virtual void registerWithTouchDispatcher() = 0x438cd0;
    virtual void setOpacityModifyRGB(bool) = 0x18e6d0;
    virtual void isOpacityModifyRGB() = 0x18e6e0;
    virtual void isEnabled() = 0x18e6f0;
    virtual void setEnabled(bool) = 0x18e700;
@end

@interface cocos2d::CCNode
    virtual ~CCNode() = 0x1228d0;
    virtual ~CCNode() = 0x1228e0;
    virtual void update(float) = 0x1241a0;
    virtual bool init() = 0x122910;
    virtual void setZOrder(int) = 0x1229a0;
    virtual void _setZOrder(int) = 0x122990;
    virtual void getZOrder() = 0x122980;
    virtual void setVertexZ(float) = 0x1229f0;
    virtual void getVertexZ() = 0x1229e0;
    virtual void setScaleX(float) = 0x122b10;
    virtual void getScaleX() = 0x122b00;
    virtual void setScaleY(float) = 0x122b40;
    virtual void getScaleY() = 0x122b30;
    virtual void setScale(float) = 0x122ac0;
    virtual void getScale() = 0x122ab0;
    virtual void setScale(float, float) = 0x122ae0;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x122b70;
    virtual void getPosition() = 0x122b60;
    virtual void setPosition(float, float) = 0x122ba0;
    virtual void getPosition(float*, float*) = 0x122b90;
    virtual void setPositionX(float) = 0x122c00;
    virtual void getPositionX() = 0x122be0;
    virtual void setPositionY(float) = 0x122c40;
    virtual void getPositionY() = 0x122bf0;
    virtual void setSkewX(float) = 0x122930;
    virtual void getSkewX() = 0x122920;
    virtual void setSkewY(float) = 0x122960;
    virtual void getSkewY() = 0x122950;
    virtual void setAnchorPoint(cocos2d::CCPoint const&) = 0x122d90;
    virtual void getAnchorPoint() = 0x122d80;
    virtual void getAnchorPointInPoints() = 0x122d70;
    virtual void setContentSize(cocos2d::CCSize const&) = 0x122e50;
    virtual void getContentSize() const = 0x122e00;
    virtual void getScaledContentSize() = 0x122e10;
    virtual void setVisible(bool) = 0x122d60;
    virtual void isVisible() = 0x122d50;
    virtual void setRotation(float) = 0x122a10;
    virtual void getRotation() = 0x122a00;
    virtual void setRotationX(float) = 0x122a60;
    virtual void getRotationX() = 0x122a50;
    virtual void setRotationY(float) = 0x122a90;
    virtual void getRotationY() = 0x122a80;
    virtual void setOrderOfArrival(unsigned int) = 0x122f60;
    virtual void getOrderOfArrival() = 0x122f50;
    virtual void setGLServerState(cocos2d::ccGLServerState) = 0x122fa0;
    virtual void getGLServerState() = 0x122f90;
    virtual void ignoreAnchorPointForPosition(bool) = 0x122f00;
    virtual void isIgnoreAnchorPointForPosition() = 0x122ef0;
    virtual void addChild(cocos2d::CCNode*) = 0x1233d0;
    virtual void addChild(cocos2d::CCNode*, int) = 0x1233b0;
    virtual void addChild(cocos2d::CCNode*, int, int) = 0x1232a0;
    virtual void getChildByTag(int) = 0x123220;
    virtual void getChildren() = 0x122c80;
    virtual void getChildrenCount() const = 0x122c90;
    virtual void setParent(cocos2d::CCNode*) = 0x122ee0;
    virtual void getParent() = 0x122ed0;
    virtual void removeFromParent() = 0x1233f0;
    virtual void removeFromParentAndCleanup(bool) = 0x123410;
    virtual void removeMeAndCleanup() = 0x123440;
    virtual void removeChild(cocos2d::CCNode*) = 0x123460;
    virtual void removeChild(cocos2d::CCNode*, bool) = 0x123480;
    virtual void removeChildByTag(int) = 0x1235a0;
    virtual void removeChildByTag(int, bool) = 0x1235c0;
    virtual void removeAllChildren() = 0x123600;
    virtual void removeAllChildrenWithCleanup(bool) = 0x123620;
    virtual void reorderChild(cocos2d::CCNode*, int) = 0x123760;
    virtual void sortAllChildren() = 0x1237b0;
    virtual void getGrid() = 0x122d00;
    virtual void setGrid(cocos2d::CCGridBase*) = 0x122d10;
    virtual void getUserData() = 0x122f30;
    virtual void setUserData(void*) = 0x122f40;
    virtual void getUserObject() = 0x122f80;
    virtual void setUserObject(cocos2d::CCObject*) = 0x122fb0;
    virtual void getShaderProgram() = 0x122f70;
    virtual void setShaderProgram(cocos2d::CCGLProgram*) = 0x122ff0;
    virtual void getCamera() = 0x122cb0;
    virtual void isRunning() = 0x122ec0;
    virtual void registerScriptHandler(int) = 0x123d90;
    virtual void unregisterScriptHandler() = 0x123dc0;
    virtual void onEnter() = 0x123a90;
    virtual void onEnterTransitionDidFinish() = 0x123b90;
    virtual void onExit() = 0x123ca0;
    virtual void onExitTransitionDidStart() = 0x123c00;
    virtual void cleanup() = 0x123100;
    virtual void draw() = 0x123840;
    virtual void visit() = 0x123850;
    virtual void setActionManager(cocos2d::CCActionManager*) = 0x123e00;
    virtual void getActionManager() = 0x123e50;
    virtual void setScheduler(cocos2d::CCScheduler*) = 0x123f20;
    virtual void getScheduler() = 0x123f70;
    virtual void updateTransform() = 0x1249d0;
    virtual void nodeToParentTransform() = 0x124210;
    virtual void parentToNodeTransform() = 0x1245d0;
    virtual void nodeToWorldTransform() = 0x124670;
    virtual void worldToNodeTransform() = 0x124710;
    virtual void addComponent(cocos2d::CCComponent*) = 0x124a40;
    virtual void removeComponent(char const*) = 0x124a60;
    virtual void removeComponent(cocos2d::CCComponent*) = 0x124a80;
    virtual void removeAllComponents() = 0x124aa0;
    virtual void updateTweenAction(float, char const*) = 0x1249c0;
@end

@interface cocos2d::CCArray
    virtual ~CCArray() = 0x41a6c0;
    virtual ~CCArray() = 0x41a710;
    virtual void acceptVisitor(cocos2d::CCDataVisitor&) = 0x41a880;
@end

@interface cocos2d::CCBlink
    virtual ~CCBlink() = 0x1fa0e0;
    virtual ~CCBlink() = 0x1fa0f0;
    virtual void update(float) = 0x1f79f0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f78b0;
    virtual void stop() = 0x1f7880;
    virtual void reverse() = 0x1f7a70;
@end

@interface cocos2d::CCFlipX
    virtual ~CCFlipX() = 0x455cd0;
    virtual ~CCFlipX() = 0x455ce0;
    virtual void update(float) = 0x454910;
    virtual void reverse() = 0x454930;
@end

@interface cocos2d::CCFlipY
    virtual ~CCFlipY() = 0x455d10;
    virtual ~CCFlipY() = 0x455d20;
    virtual void update(float) = 0x454ab0;
    virtual void reverse() = 0x454ad0;
@end

@interface cocos2d::CCImage
    virtual ~CCImage() = 0x24fa80;
    virtual ~CCImage() = 0x24fac0;
@end

@interface cocos2d::CCLayer
    virtual ~CCLayer() = 0x272900;
    virtual ~CCLayer() = 0x272930;
    virtual bool init() = 0x2729a0;
    virtual void onEnter() = 0x273300;
    virtual void onEnterTransitionDidFinish() = 0x273490;
    virtual void onExit() = 0x2733c0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2734d0;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x273550;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2735d0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x273650;
    virtual void ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x2736d0;
    virtual void ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x273750;
    virtual void ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x2737d0;
    virtual void ccTouchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x273850;
    virtual void didAccelerate(cocos2d::CCAcceleration*) = 0x272ea0;
    virtual void registerWithTouchDispatcher() = 0x272b40;
    virtual void registerScriptTouchHandler(int, bool, int, bool) = 0x272bd0;
    virtual void unregisterScriptTouchHandler() = 0x272c30;
    virtual void isTouchEnabled() = 0x272ce0;
    virtual void setTouchEnabled(bool) = 0x272cf0;
    virtual void setTouchMode(cocos2d::ccTouchesMode) = 0x272d60;
    virtual void getTouchMode() = 0x272e10;
    virtual void setTouchPriority(int) = 0x272db0;
    virtual void getTouchPriority() = 0x272e00;
    virtual void isAccelerometerEnabled() = 0x272e20;
    virtual void setAccelerometerEnabled(bool) = 0x272e30;
    virtual void setAccelerometerInterval(double) = 0x272e70;
    virtual void isKeypadEnabled() = 0x272f70;
    virtual void setKeypadEnabled(bool) = 0x272f80;
    virtual void isKeyboardEnabled() = 0x273010;
    virtual void setKeyboardEnabled(bool) = 0x273020;
    virtual void isMouseEnabled() = 0x273090;
    virtual void setMouseEnabled(bool) = 0x2730a0;
    virtual void keyBackClicked() = 0x273160;
    virtual void keyMenuClicked() = 0x273200;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x273280;

    static cocos2d::CCLayer* create() = 0x272a00;
@end

@interface cocos2d::CCPlace
    virtual ~CCPlace() = 0x455d50;
    virtual ~CCPlace() = 0x455d60;
    virtual void update(float) = 0x454d70;
@end

@interface cocos2d::CCScene
    virtual ~CCScene() = 0x13c0b0;
    virtual ~CCScene() = 0x13c0c0;
    virtual bool init() = 0x13c0f0;
@end

@interface cocos2d::CCSpawn
    virtual ~CCSpawn() = 0x1f4580;
    virtual ~CCSpawn() = 0x1f45e0;
    virtual void update(float) = 0x1f46c0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f4650;
    virtual void stop() = 0x1f4690;
    virtual void reverse() = 0x1f4710;
@end

@interface cocos2d::CCSpeed
    virtual ~CCSpeed() = 0x35b910;
    virtual ~CCSpeed() = 0x35b970;
    virtual void isDone() = 0x35bc50;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x35bbe0;
    virtual void stop() = 0x35bc00;
    virtual void step(float) = 0x35bc30;
    virtual void reverse() = 0x35bc60;
@end

@interface cocos2d::CCTimer
    virtual ~CCTimer() = 0x244980;
    virtual ~CCTimer() = 0x244990;
    virtual void update(float) = 0x242440;
@end

@interface cocos2d::CCTwirl
    virtual ~CCTwirl() = 0x129cc0;
    virtual ~CCTwirl() = 0x129cd0;
    virtual void update(float) = 0x129850;
@end

@interface cocos2d::CCWaves
    virtual ~CCWaves() = 0x129c80;
    virtual ~CCWaves() = 0x129c90;
    virtual void update(float) = 0x129340;
@end

@interface cocos2d::ZipFile
    virtual ~ZipFile() = 0xeba30;
@end

@interface cocos2d::CCAction
    virtual ~CCAction() = 0x35b6b0;
    virtual ~CCAction() = 0x35b6d0;
    virtual void update(float) = 0x35b890;
    virtual void setTag(int) = 0xef0b0;
    virtual void isDone() = 0x35b870;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x35b850;
    virtual void stop() = 0x35b860;
    virtual void step(float) = 0x35b880;
@end

@interface cocos2d::CCCamera
    virtual ~CCCamera() = 0x2e0980;
    virtual ~CCCamera() = 0x2e0990;
@end

@interface cocos2d::CCEaseIn
    virtual ~CCEaseIn() = 0x2a4720;
    virtual ~CCEaseIn() = 0x2a4770;
    virtual void update(float) = 0x2a1b10;
    virtual void reverse() = 0x2a1b40;
@end

@interface cocos2d::CCFadeIn
    virtual ~CCFadeIn() = 0x1fa120;
    virtual ~CCFadeIn() = 0x1fa130;
    virtual void update(float) = 0x1f7c80;
    virtual void reverse() = 0x1f7ce0;
@end

@interface cocos2d::CCFadeTo
    virtual ~CCFadeTo() = 0x1fa1a0;
    virtual ~CCFadeTo() = 0x1fa1b0;
    virtual void update(float) = 0x1f8220;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f81c0;
@end

@interface cocos2d::CCFollow
    virtual ~CCFollow() = 0x35bdb0;
    virtual ~CCFollow() = 0x35be10;
    virtual void isDone() = 0x35c2e0;
    virtual void stop() = 0x35c300;
    virtual void step(float) = 0x35c1f0;
@end

@interface cocos2d::CCGrid3D
    virtual ~CCGrid3D() = 0x288470;
    virtual ~CCGrid3D() = 0x288480;
    virtual void blit() = 0x2884b0;
    virtual void reuse() = 0x288da0;
    virtual void calculateVertexPoints() = 0x288550;
@end

@interface cocos2d::CCJumpBy
    virtual ~CCJumpBy() = 0x1f9f60;
    virtual ~CCJumpBy() = 0x1f9f70;
    virtual void update(float) = 0x1f6160;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f6110;
    virtual void reverse() = 0x1f6290;
@end

@interface cocos2d::CCJumpTo
    virtual ~CCJumpTo() = 0x1f9fa0;
    virtual ~CCJumpTo() = 0x1f9fb0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f6570;
@end

@interface cocos2d::CCLens3D
    virtual ~CCLens3D() = 0x129b80;
    virtual ~CCLens3D() = 0x129b90;
    virtual void update(float) = 0x128140;
@end

@interface cocos2d::CCLiquid
    virtual ~CCLiquid() = 0x129c40;
    virtual ~CCLiquid() = 0x129c50;
    virtual void update(float) = 0x128ed0;
@end

@interface cocos2d::CCMoveBy
    virtual ~CCMoveBy() = 0x1f9e60;
    virtual ~CCMoveBy() = 0x1f9e70;
    virtual void update(float) = 0x1f5400;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f5360;
    virtual void reverse() = 0x1f53b0;
@end

@interface cocos2d::CCMoveTo
    virtual ~CCMoveTo() = 0x1f9ea0;
    virtual ~CCMoveTo() = 0x1f9eb0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f5740;
@end

@interface cocos2d::CCObject
    virtual ~CCObject() = 0x250d90;
    virtual ~CCObject() = 0x250e00;
    virtual void isEqual(cocos2d::CCObject const*) = 0x250f20;
    virtual void acceptVisitor(cocos2d::CCDataVisitor&) = 0x250f30;
    virtual void update(float) = 0x32660;
    virtual void encodeWithCoder(DS_Dictionary*) = 0x250f70;
    virtual bool canEncode() = 0x250f90;
    virtual void getTag() const = 0x250f50;
    virtual void setTag(int) = 0x250f60;
@end

@interface cocos2d::CCRepeat
    virtual ~CCRepeat() = 0x1f3580;
    virtual ~CCRepeat() = 0x1f35d0;
    virtual void update(float) = 0x1f36b0;
    virtual void isDone() = 0x1f37e0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f3630;
    virtual void stop() = 0x1f3680;
    virtual void reverse() = 0x1f37f0;
@end

@interface cocos2d::CCSkewBy
    virtual ~CCSkewBy() = 0x1f9f20;
    virtual ~CCSkewBy() = 0x1f9f30;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f5d00;
    virtual void reverse() = 0x1f5d40;
    virtual void initWithDuration(float, float, float) = 0x1f5cb0;
@end

@interface cocos2d::CCSkewTo
    virtual ~CCSkewTo() = 0x1f9ee0;
    virtual ~CCSkewTo() = 0x1f9ef0;
    virtual void update(float) = 0x1f5b20;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f59f0;
    virtual void initWithDuration(float, float, float) = 0x1f58d0;
@end

@interface cocos2d::CCSprite
    virtual ~CCSprite() = 0x133430;
    virtual ~CCSprite() = 0x1334a0;
    virtual bool init() = 0x132ef0;
    virtual void setVertexZ(float) = 0x134a80;
    virtual void setScaleX(float) = 0x134900;
    virtual void setScaleY(float) = 0x134980;
    virtual void setScale(float) = 0x134a00;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x134650;
    virtual void setSkewX(float) = 0x134820;
    virtual void setSkewY(float) = 0x134890;
    virtual void setAnchorPoint(cocos2d::CCPoint const&) = 0x134af0;
    virtual void setVisible(bool) = 0x134b70;
    virtual void setRotation(float) = 0x1346d0;
    virtual void setRotationX(float) = 0x134740;
    virtual void setRotationY(float) = 0x1347b0;
    virtual void ignoreAnchorPointForPosition(bool) = 0x134b60;
    virtual void addChild(cocos2d::CCNode*) = 0x134190;
    virtual void addChild(cocos2d::CCNode*, int) = 0x1341a0;
    virtual void addChild(cocos2d::CCNode*, int, int) = 0x1341b0;
    virtual void removeChild(cocos2d::CCNode*, bool) = 0x134300;
    virtual void removeAllChildrenWithCleanup(bool) = 0x134340;
    virtual void reorderChild(cocos2d::CCNode*, int) = 0x134270;
    virtual void sortAllChildren() = 0x1343f0;
    virtual void draw() = 0x134070;
    virtual void updateTransform() = 0x133b70;
    virtual void setOpacity(unsigned char) = 0x134da0;
    virtual void updateDisplayedOpacity(unsigned char) = 0x1354c0;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x134ff0;
    virtual void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x135370;
    virtual void setOpacityModifyRGB(bool) = 0x135200;
    virtual void isOpacityModifyRGB() = 0x135350;
    virtual void initWithTexture(cocos2d::CCTexture2D*) = 0x133110;
    virtual void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&) = 0x1330f0;
    virtual void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool) = 0x132f10;
    virtual void initWithSpriteFrame(cocos2d::CCSpriteFrame*) = 0x133270;
    virtual void initWithSpriteFrameName(char const*) = 0x1332c0;
    virtual void initWithFile(char const*) = 0x133180;
    virtual void initWithFile(char const*, cocos2d::CCRect const&) = 0x133210;
    virtual void setTexture(cocos2d::CCTexture2D*) = 0x135a90;
    virtual void getTexture() = 0x135c00;
    virtual void setBlendFunc(cocos2d::_ccBlendFunc) = 0x50590;
    virtual void getBlendFunc() = 0x505a0;
    virtual void setChildColor(cocos2d::_ccColor3B const&) = 0x135160;
    virtual void setChildOpacity(unsigned char) = 0x134f50;
    virtual void getBatchNode() = 0x135910;
    virtual void setBatchNode(cocos2d::CCSpriteBatchNode*) = 0x135920;
    virtual void refreshTextureRect() = 0x133520;
    virtual void setTextureRect(cocos2d::CCRect const&) = 0x133560;
    virtual void setTextureRect(cocos2d::CCRect const&, bool, cocos2d::CCSize const&) = 0x133580;
    virtual void setVertexRect(cocos2d::CCRect const&) = 0x1338f0;
    virtual void setDisplayFrame(cocos2d::CCSpriteFrame*) = 0x135610;
    virtual void isFrameDisplayed(cocos2d::CCSpriteFrame*) = 0x1356d0;
    virtual void displayFrame() = 0x135760;
    virtual void setDisplayFrameWithAnimationName(char const*, int) = 0x135680;
    virtual void isDirty() = 0x505b0;
    virtual void setDirty(bool) = 0x505c0;
    virtual void setTextureCoords(cocos2d::CCRect const&) = 0x133910;
    virtual void updateBlendFunc() = 0x135a20;
    virtual void setReorderChildDirtyRecursively() = 0x134550;
    virtual void setDirtyRecursively(bool) = 0x1345b0;
@end

@interface cocos2d::CCString
    virtual ~CCString() = 0x44c590;
    virtual ~CCString() = 0x44c5a0;
    virtual void isEqual(cocos2d::CCObject const*) = 0x44c8f0;
    virtual void acceptVisitor(cocos2d::CCDataVisitor&) = 0x44ccb0;
@end

@interface cocos2d::CCTintBy
    virtual ~CCTintBy() = 0x1fa220;
    virtual ~CCTintBy() = 0x1fa230;
    virtual void update(float) = 0x1f8870;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f8800;
    virtual void reverse() = 0x1f8950;
@end

@interface cocos2d::CCTintTo
    virtual ~CCTintTo() = 0x1fa1e0;
    virtual ~CCTintTo() = 0x1fa1f0;
    virtual void update(float) = 0x1f8510;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f84b0;
@end

@interface cocos2d::CCAnimate
    virtual ~CCAnimate() = 0x1f9530;
    virtual ~CCAnimate() = 0x1f9540;
    virtual void update(float) = 0x1f9610;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f9570;
    virtual void stop() = 0x1f95d0;
    virtual void reverse() = 0x1f9840;
@end

@interface cocos2d::CCEGLView
    virtual ~CCEGLView() = 0x295420;
    virtual void end() = 0x2954a0;
    virtual void isOpenGLReady() = 0x295470;
    virtual void swapBuffers() = 0x295510;
    virtual void setIMEKeyboardState(bool) = 0x295550;
@end

@interface cocos2d::CCEaseOut
    virtual ~CCEaseOut() = 0x2a47d0;
    virtual ~CCEaseOut() = 0x2a4820;
    virtual void update(float) = 0x2a1d20;
    virtual void reverse() = 0x2a1d50;
@end

@interface cocos2d::CCFadeOut
    virtual ~CCFadeOut() = 0x1fa160;
    virtual ~CCFadeOut() = 0x1fa170;
    virtual void update(float) = 0x1f7ee0;
    virtual void reverse() = 0x1f7f50;
@end

@interface cocos2d::CCFlipX3D
    virtual ~CCFlipX3D() = 0x129b00;
    virtual ~CCFlipX3D() = 0x129b10;
    virtual void update(float) = 0x127560;
    virtual void initWithDuration(float) = 0x1273d0;
    virtual void initWithSize(cocos2d::CCSize const&, float) = 0x127420;
@end

@interface cocos2d::CCFlipY3D
    virtual ~CCFlipY3D() = 0x129b40;
    virtual ~CCFlipY3D() = 0x129b50;
    virtual void update(float) = 0x127a50;
@end

@interface cocos2d::CCGrabber
    virtual ~CCGrabber() = 0x360fe0;
    virtual ~CCGrabber() = 0x361030;
@end

@interface cocos2d::CCScaleBy
    virtual ~CCScaleBy() = 0x1fa0a0;
    virtual ~CCScaleBy() = 0x1fa0b0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f7640;
    virtual void reverse() = 0x1f76b0;
@end

@interface cocos2d::CCScaleTo
    virtual ~CCScaleTo() = 0x1fa060;
    virtual ~CCScaleTo() = 0x1fa070;
    virtual void update(float) = 0x1f7360;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f72f0;
@end

@interface cocos2d::CCShaky3D
    virtual ~CCShaky3D() = 0x129c00;
    virtual ~CCShaky3D() = 0x129c10;
    virtual void update(float) = 0x128ae0;
@end

@interface cocos2d::CCWaves3D
    virtual ~CCWaves3D() = 0x129ac0;
    virtual ~CCWaves3D() = 0x129ad0;
    virtual void update(float) = 0x127170;
@end

@interface cocos2d::extension::CCTableView
    virtual ~CCTableView() = 0x233a60;
    virtual ~CCTableView() = 0x233ab0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x234bf0;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x234da0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x234ae0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x234e50;
@end

@interface cocos2d::extension::CCHttpClient
    virtual ~CCHttpClient() = 0x23da60;
    virtual ~CCHttpClient() = 0x23dad0;
@end

@interface cocos2d::extension::CCScrollView
    virtual ~CCScrollView() = 0x214c30;
    virtual ~CCScrollView() = 0x214c60;
    virtual bool init() = 0x214fb0;
    virtual void setContentSize(cocos2d::CCSize const&) = 0x215eb0;
    virtual void getContentSize() const = 0x215e90;
    virtual void addChild(cocos2d::CCNode*) = 0x216160;
    virtual void addChild(cocos2d::CCNode*, int) = 0x216120;
    virtual void addChild(cocos2d::CCNode*, int, int) = 0x216080;
    virtual void visit() = 0x2164a0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x216620;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x216890;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x216c70;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x216d30;
    virtual void registerWithTouchDispatcher() = 0x214ff0;
    virtual void setTouchEnabled(bool) = 0x215250;
@end

// @interface cocos2d::extension::AssetsManager::Helper
//    virtual  ~Helper() = 0x2e83e0;
//    virtual  ~Helper() = 0x2e83f0;
//    virtual  void update(float) = 0x2e8420;
// @end

// @interface cocos2d::extension::AssetsManager
//    virtual  ~AssetsManager() = 0x2e71d0;
//    virtual  void checkUpdate() = 0x2e7200;
//    virtual  void update() = 0x2e7e80;
// @end

@interface cocos2d::extension::CCScale9Sprite
    virtual ~CCScale9Sprite() = 0x211590;
    virtual ~CCScale9Sprite() = 0x2115a0;
    virtual bool init() = 0x2115d0;
    virtual void setContentSize(cocos2d::CCSize const&) = 0x2127c0;
    virtual void visit() = 0x213bf0;
    virtual void getOpacity() = 0x213f30;
    virtual void setOpacity(unsigned char) = 0x213dd0;
    virtual void updateDisplayedOpacity(unsigned char) = 0x2139b0;
    virtual void getColor() = 0x213db0;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x213c20;
    virtual void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x213a20;
    virtual void setOpacityModifyRGB(bool) = 0x213830;
    virtual void isOpacityModifyRGB() = 0x213990;
    virtual void getPreferredSize() = 0x213620;
    virtual void setPreferredSize(cocos2d::CCSize) = 0x2135f0;
    virtual void getCapInsets() = 0x2136e0;
    virtual void setCapInsets(cocos2d::CCRect) = 0x213640;
    virtual void getInsetLeft() = 0x213b30;
    virtual void setInsetLeft(float) = 0x213b70;
    virtual void getInsetTop() = 0x213b40;
    virtual void setInsetTop(float) = 0x213b90;
    virtual void getInsetRight() = 0x213b50;
    virtual void setInsetRight(float) = 0x213bb0;
    virtual void getInsetBottom() = 0x213b60;
    virtual void setInsetBottom(float) = 0x213bd0;
    virtual void initWithBatchNode(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect) = 0x211690;
    virtual void initWithBatchNode(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, cocos2d::CCRect) = 0x211630;
    virtual void initWithFile(char const*, cocos2d::CCRect, cocos2d::CCRect) = 0x212d50;
    virtual void initWithFile(char const*, cocos2d::CCRect) = 0x212e80;
    virtual void initWithFile(cocos2d::CCRect, char const*) = 0x212f80;
    virtual void initWithFile(char const*) = 0x213080;
    virtual void initWithSpriteFrame(cocos2d::CCSpriteFrame*, cocos2d::CCRect) = 0x213140;
    virtual void initWithSpriteFrame(cocos2d::CCSpriteFrame*) = 0x213250;
    virtual void initWithSpriteFrameName(char const*, cocos2d::CCRect) = 0x213310;
    virtual void initWithSpriteFrameName(char const*) = 0x213410;
    virtual void updateWithBatchNode(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect) = 0x211730;
    virtual void setSpriteFrame(cocos2d::CCSpriteFrame*) = 0x213a90;
@end

@interface cocos2d::extension::CCControlButton
    virtual ~CCControlButton() = 0x1a8380;
    virtual ~CCControlButton() = 0x1a83b0;
    virtual bool init() = 0x1a8420;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1a9c20;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1a9db0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1a9ef0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1aa1a0;
    virtual void getOpacity() = 0x1aa090;
    virtual void setOpacity(unsigned char) = 0x1a9fc0;
    virtual void getColor() = 0x1aa180;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x1aa0b0;
    virtual void setEnabled(bool) = 0x1a8b00;
    virtual void setSelected(bool) = 0x1a8b30;
    virtual void setHighlighted(bool) = 0x1a8b60;
    virtual void needsLayout() = 0x1a9700;
    virtual void getPreferredSize() = 0x1a8d20;
    virtual void setPreferredSize(cocos2d::CCSize) = 0x1a8c60;
    virtual void getZoomOnTouchDown() = 0x1a8c50;
    virtual void setZoomOnTouchDown(bool) = 0x1a8c40;
    virtual void getLabelAnchorPoint() = 0x1a8d50;
    virtual void setLabelAnchorPoint(cocos2d::CCPoint) = 0x1a8d70;
    virtual void setMargins(int, int) = 0x1a8ae0;
    virtual void initWithLabelAndBackgroundSprite(cocos2d::CCNode*, cocos2d::extension::CCScale9Sprite*) = 0x1a8480;
    virtual void initWithTitleAndFontNameAndFontSize(std::string, char const*, float) = 0x1a88f0;
    virtual void initWithBackgroundSprite(cocos2d::extension::CCScale9Sprite*) = 0x1a8a30;
    virtual void getTitleForState(unsigned int) = 0x1a8db0;
    virtual void setTitleForState(cocos2d::CCString*, unsigned int) = 0x1a8e90;
    virtual void getTitleColorForState(unsigned int) = 0x1a8f00;
    virtual void setTitleColorForState(cocos2d::_ccColor3B, unsigned int) = 0x1a8f60;
    virtual void getTitleLabelForState(unsigned int) = 0x1a9020;
    virtual void setTitleLabelForState(cocos2d::CCNode*, unsigned int) = 0x1a9060;
    virtual void setTitleTTFForState(char const*, unsigned int) = 0x1a9140;
    virtual void getTitleTTFForState(unsigned int) = 0x1a9240;
    virtual void setTitleTTFSizeForState(float, unsigned int) = 0x1a92b0;
    virtual void getTitleTTFSizeForState(unsigned int) = 0x1a9330;
    virtual void setTitleBMFontForState(char const*, unsigned int) = 0x1a93a0;
    virtual void getTitleBMFontForState(unsigned int) = 0x1a9490;
    virtual void getBackgroundSpriteForState(unsigned int) = 0x1a9500;
    virtual void setBackgroundSpriteForState(cocos2d::extension::CCScale9Sprite*, unsigned int) = 0x1a9540;
    virtual void setBackgroundSpriteFrameForState(cocos2d::CCSpriteFrame*, unsigned int) = 0x1a96d0;
@end

@interface cocos2d::extension::CCControlSlider
    virtual ~CCControlSlider() = 0x1de040;
    virtual ~CCControlSlider() = 0x1de070;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1de890;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1deaf0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1decc0;
    virtual void setEnabled(bool) = 0x1de610;
    virtual void needsLayout() = 0x1deea0;
    virtual void isTouchInside(cocos2d::CCTouch*) = 0x1de750;
    virtual void setValue(float) = 0x1de660;
    virtual void setMinimumValue(float) = 0x1de6b0;
    virtual void setMaximumValue(float) = 0x1de700;
    virtual void initWithSprites(cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*) = 0x1de320;
@end

@interface cocos2d::extension::CCControlSwitch
    virtual ~CCControlSwitch() = 0x1e5330;
    virtual ~CCControlSwitch() = 0x1e5490;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e5bc0;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e5cb0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e5d80;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e5ef0;
    virtual void setEnabled(bool) = 0x1e5b30;
@end

@interface cocos2d::extension::CCControlStepper
    virtual ~CCControlStepper() = 0x1e0960;
    virtual ~CCControlStepper() = 0x1e0990;
    virtual void update(float) = 0x1e12a0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e1470;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e1620;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e1750;
    virtual void setWraps(bool) = 0x1e0fe0;
    virtual void setMinimumValue(double) = 0x1e1060;
    virtual void setMaximumValue(double) = 0x1e1090;
    virtual void setValue(double) = 0x1e10c0;
    virtual void getValue() = 0x1e10e0;
    virtual void setStepValue(double) = 0x1e10f0;
    virtual void setValueWithSendingEvent(double, bool) = 0x1e1110;
    virtual void isContinuous() = 0x1e1100;
@end

@interface cocos2d::extension::CCControlHuePicker
    virtual ~CCControlHuePicker() = 0x1ab960;
    virtual ~CCControlHuePicker() = 0x1ab990;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1ac050;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1ac150;
    virtual void registerWithTouchDispatcher() = 0x1abcd0;
    virtual void setEnabled(bool) = 0x1abe70;
    virtual void setHue(float) = 0x1abd40;
    virtual void setHuePercentage(float) = 0x1abd70;
    virtual void initWithTargetAndPos(cocos2d::CCNode*, cocos2d::CCPoint) = 0x1abb30;
@end

// @interface cocos2d::extension::CCControlSwitchSprite
//    virtual  ~CCControlSwitchSprite() = 0x1e4760;
//    virtual  ~CCControlSwitchSprite() = 0x1e4790;
//    virtual  void draw() = 0x1e4f90;
//    virtual  void updateTweenAction(float, char const*) = 0x1e4ed0;
// @end

@interface cocos2d::extension::CCControlPotentiometer
    virtual ~CCControlPotentiometer() = 0x1ad590;
    virtual ~CCControlPotentiometer() = 0x1ad720;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1ade70;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1ae030;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1ae2a0;
    virtual void setEnabled(bool) = 0x1adb80;
    virtual void isTouchInside(cocos2d::CCTouch*) = 0x1add50;
@end

@interface cocos2d::extension::CCControlSaturationBrightnessPicker
    virtual ~CCControlSaturationBrightnessPicker() = 0x1b3550;
    virtual ~CCControlSaturationBrightnessPicker() = 0x1b3710;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1b4030;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1b4130;
    virtual void registerWithTouchDispatcher() = 0x1b3fc0;
    virtual void setEnabled(bool) = 0x1b3b00;
    virtual void initWithTargetAndPos(cocos2d::CCNode*, cocos2d::CCPoint) = 0x1b3820;
    virtual void updateWithHSV(cocos2d::extension::HSV) = 0x1b3b50;
    virtual void updateDraggerWithHSV(cocos2d::extension::HSV) = 0x1b3bf0;
@end

@interface cocos2d::extension::CCControl
    virtual ~CCControl() = 0x1a7380;
    virtual ~CCControl() = 0x1a73b0;
    virtual bool init() = 0x1a71c0;
    virtual void onEnter() = 0x1a7470;
    virtual void onExit() = 0x1a7480;
    virtual void registerWithTouchDispatcher() = 0x1a7420;
    virtual void setOpacityModifyRGB(bool) = 0x1a7c10;
    virtual void isOpacityModifyRGB() = 0x1a7d70;
    virtual void setEnabled(bool) = 0x1a7e60;
    virtual void isEnabled() = 0x1a7e90;
    virtual void setSelected(bool) = 0x1a7ea0;
    virtual void isSelected() = 0x1a7ec0;
    virtual void setHighlighted(bool) = 0x1a7ed0;
    virtual void isHighlighted() = 0x1a7ef0;
    virtual void needsLayout() = 0x1a7e50;
    virtual void sendActionsForControlEvents(unsigned int) = 0x1a7490;
    virtual void addTargetWithActionForControlEvents(cocos2d::CCObject*, cocos2d::extension::SEL_EventHandler, unsigned int) = 0x1a7820;
    virtual void removeTargetWithActionForControlEvents(cocos2d::CCObject*, cocos2d::extension::SEL_EventHandler, unsigned int) = 0x1a7950;
    virtual void getTouchLocation(cocos2d::CCTouch*) = 0x1a7d90;
    virtual void isTouchInside(cocos2d::CCTouch*) = 0x1a7de0;
@end

@interface cocos2d::extension::CCEditBox
    virtual ~CCEditBox() = 0x26cfd0;
    virtual ~CCEditBox() = 0x26d020;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x26d850;
    virtual void setAnchorPoint(cocos2d::CCPoint const&) = 0x26d910;
    virtual void setContentSize(cocos2d::CCSize const&) = 0x26d8d0;
    virtual void setVisible(bool) = 0x26d890;
    virtual void onEnter() = 0x26d980;
    virtual void onExit() = 0x26d9b0;
    virtual void visit() = 0x26d950;
    virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x26d9e0;
    virtual void keyboardDidShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x26daf0;
    virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x26db10;
    virtual void keyboardDidHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x26db80;
@end

