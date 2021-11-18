class ArtistCell {
    virtual ~ArtistCell() = 0x11c6a0;
    virtual ~ArtistCell() = 0x11c6d0;
    virtual bool init() = 0x11c7c0;
    virtual void draw() = 0x11c980;
}

class ButtonSprite : cocos2d::CCSprite {
    static ButtonSprite* create(char const*) = 0x4fa10;
    static ButtonSprite* create(char const*, int, int, float, bool) = 0x4fa40;
    void updateBGImage(char const*) = 0x502d0;
    static ButtonSprite* create(char const*, float) = 0x4fa60;
    static ButtonSprite* create(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool) = 0x4fa90;
}

class GJItemIcon {
    virtual ~GJItemIcon() = 0x1bcd10;
    virtual ~GJItemIcon() = 0x1bcd20;
    virtual void setOpacity(unsigned char) = 0x1bd9d0;
}

class GJUserCell {
    virtual ~GJUserCell() = 0x11ddc0;
    virtual ~GJUserCell() = 0x11dfa0;
    virtual bool init() = 0x11e180;
    virtual void draw() = 0x11e790;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x11e860;
    virtual void uploadActionFinished(int, int) = 0x11eae0;
    virtual void uploadActionFailed(int, int) = 0x11ecb0;
    virtual void onClosePopup(UploadActionPopup*) = 0x11edb0;
}

class CCSpritePlus : cocos2d::CCSprite {
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
}



class GameObject : CCSpritePlus {
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
}

class GaragePage {
    virtual ~GaragePage() = 0x1bb670;
    virtual ~GaragePage() = 0x1bb6a0;
    virtual void listButtonBarSwitchedPage(ListButtonBar*, int) = 0x1bc2f0;
}

class HardStreak {
    virtual ~HardStreak() = 0x5bf00;
    virtual bool init() = 0x5c090;
}

class PauseLayer {
    virtual ~PauseLayer() = 0x20b140;
    virtual ~PauseLayer() = 0x20b170;
    virtual void keyBackClicked() = 0x20cd80;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x20cc80;
    virtual void customSetup() = 0x20b300;
    virtual void keyUp(cocos2d::enumKeyCodes) = 0x20cd60;
}

class RingObject {
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
}

class SetIDLayer {
    virtual ~SetIDLayer() = 0x168c80;
    virtual ~SetIDLayer() = 0x168e20;
    virtual void keyBackClicked() = 0x169670;
}

class SetIDPopup {
    virtual ~SetIDPopup() = 0x154210;
    virtual ~SetIDPopup() = 0x154240;
    virtual void keyBackClicked() = 0x155310;
    virtual void show() = 0x1552c0;
    virtual void textInputClosed(CCTextInputNode*) = 0x155140;
    virtual void textChanged(CCTextInputNode*) = 0x155180;
    virtual void valueChanged() = 0x1552b0;
}

class ShardsPage {
    virtual ~ShardsPage() = 0x27d3e0;
    virtual ~ShardsPage() = 0x27d410;
    virtual bool init() = 0x27d610;
    virtual void registerWithTouchDispatcher() = 0x27fc40;
    virtual void keyBackClicked() = 0x27fbd0;
    virtual void show() = 0x27fa30;
}

class SongsLayer {
    virtual ~SongsLayer() = 0x29ebe0;
    virtual ~SongsLayer() = 0x29ec10;
    virtual void customSetup() = 0x29ec80;
}

class StatsLayer {
    virtual ~StatsLayer() = 0x59d50;
    virtual ~StatsLayer() = 0x59d80;
    virtual void customSetup() = 0x59df0;
}

class UndoObject {
    virtual ~UndoObject() = 0xa2fd0;
    virtual ~UndoObject() = 0xa3030;
}

class AppDelegate {
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
}

class CCCountdown {
    virtual ~CCCountdown() = 0x468cf0;
    virtual ~CCCountdown() = 0x468d00;
    virtual bool init() = 0x468870;
    virtual void setOpacity(unsigned char) = 0x468c70;
}

class CCMoveCNode {
    virtual ~CCMoveCNode() = 0x18b310;
    virtual ~CCMoveCNode() = 0x18b360;
    virtual bool init() = 0x18b3d0;
}

class CommentCell {
    virtual ~CommentCell() = 0x11cb20;
    virtual ~CommentCell() = 0x11ccc0;
    virtual bool init() = 0x11ce80;
    virtual void draw() = 0x11d1f0;
    virtual void likedItem(LikeItemType, int, bool) = 0x11d2c0;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x11d4b0;
}

class DialogLayer {
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
}

class GJGameLevel {
    virtual ~GJGameLevel() = 0x2db2d0;
    virtual ~GJGameLevel() = 0x2db2e0;
    virtual void encodeWithCoder(DS_Dictionary*) = 0x2dd1c0;
    virtual bool canEncode() = 0x2ddae0;
    virtual bool init() = 0x2db310;
}

class GJListLayer : cocos2d::CCLayerColor {
    virtual ~GJListLayer() = 0x344350;
    virtual ~GJListLayer() = 0x3444d0;
}

class GJScoreCell {
    virtual ~GJScoreCell() = 0x11d5e0;
    virtual ~GJScoreCell() = 0x11d610;
    virtual bool init() = 0x11d710;
    virtual void draw() = 0x11d9b0;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x11d8e0;
}

class GJShopLayer {
    virtual ~GJShopLayer() = 0x19fe10;
    virtual ~GJShopLayer() = 0x19fe40;
    virtual void keyBackClicked() = 0x1a2370;
    virtual void didPurchaseItem(GJStoreItem*) = 0x1a1ae0;
}

class GJUserScore {
    virtual ~GJUserScore() = 0x2de3f0;
    virtual ~GJUserScore() = 0x2de400;
    virtual bool init() = 0x2de5a0;
}

class GJWorldNode {
    virtual ~GJWorldNode() = 0x2016b0;
    virtual ~GJWorldNode() = 0x2016c0;
}

class GameManager : cocos2d::CCNode {
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
}

class MapPackCell {
    virtual ~MapPackCell() = 0x11a670;
    virtual ~MapPackCell() = 0x11a7f0;
    virtual bool init() = 0x11a9c0;
    virtual void draw() = 0x11ae80;
}

class ProfilePage {
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
    virtual void setupPageInfo(gd::string, char const*) = 0x464410;
    virtual void commentUploadFinished(int) = 0x464770;
    virtual void commentUploadFailed(int, CommentError) = 0x464800;
    virtual void commentDeleteFailed(int, int) = 0x4648e0;
    virtual void onClosePopup(UploadActionPopup*) = 0x463510;
    virtual void uploadActionFinished(int, int) = 0x463570;
    virtual void uploadActionFailed(int, int) = 0x463710;
}

class RewardsPage {
    virtual ~RewardsPage() = 0xf35a0;
    virtual ~RewardsPage() = 0xf35d0;
    virtual bool init() = 0xf3800;
    virtual void registerWithTouchDispatcher() = 0xf5040;
    virtual void keyBackClicked() = 0xf4fd0;
    virtual void show() = 0xf4e70;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0xf4fb0;
    virtual void rewardsStatusFinished(int) = 0xf4ae0;
    virtual void rewardsStatusFailed() = 0xf4d70;
}

class SecretLayer {
    virtual ~SecretLayer() = 0x362f30;
    virtual ~SecretLayer() = 0x3630d0;
    virtual bool init() = 0x363340;
    virtual void keyBackClicked() = 0x368450;
    virtual void textInputOpened(CCTextInputNode*) = 0x366d30;
    virtual void textInputClosed(CCTextInputNode*) = 0x366f30;
    virtual void textChanged(CCTextInputNode*) = 0x367050;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x366d10;
}

class SpeedObject {
    virtual ~SpeedObject() = 0x80a00;
    virtual ~SpeedObject() = 0x80a50;
}

class UploadPopup {
    virtual ~UploadPopup() = 0x12b9c0;
    virtual ~UploadPopup() = 0x12b9f0;
    virtual void keyBackClicked() = 0x12c600;
    virtual void show() = 0x12c5a0;
    virtual void levelUploadFinished(GJGameLevel*) = 0x12c080;
    virtual void levelUploadFailed(GJGameLevel*) = 0x12c340;
}

class AccountLayer {
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
}

class TableViewDataSource {
    volatile virtual void willTweenToIndexPath(CCIndexPath&, TableViewCell*, TableView*) {}
    volatile virtual void didEndTweenToIndexPath(CCIndexPath&, TableView*) {}
    volatile virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) {}
    volatile virtual void TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) {}
    volatile virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) {}
    volatile virtual void cellHeightForRowAtIndexPath(CCIndexPath&, TableView*) {}
    volatile virtual void didSelectRowAtIndexPath(CCIndexPath&, TableView*) {}
}

class TableViewDelegate {
    volatile virtual int numberOfRowsInSection(unsigned int, TableView*) {return 0;}
    volatile virtual void numberOfSectionsInTableView(TableView*) {}
    volatile virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView*, TableViewCellEditingStyle, CCIndexPath&) {}
    volatile virtual void cellForRowAtIndexPath(CCIndexPath&, TableView*) {}
}

class BoomListView : cocos2d::CCLayer, TableViewDataSource, TableViewDelegate {
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
}

class CCBlockLayer {
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
}

class CCCircleWave : cocos2d::CCNode {
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
}

class CCCircleWaveDelegate {

}

class CCLightFlash {
    virtual ~CCLightFlash() = 0x296210;
    virtual ~CCLightFlash() = 0x296260;
    virtual bool init() = 0x2958f0;
}

class CCLightStrip {
    virtual ~CCLightStrip() = 0x2968b0;
    virtual ~CCLightStrip() = 0x2968c0;
    virtual void draw() = 0x296410;
    virtual void updateTweenAction(float, char const*) = 0x2965a0;
}

class CreatorLayer {
    virtual ~CreatorLayer() = 0x141940;
    virtual ~CreatorLayer() = 0x141970;
    virtual bool init() = 0x141c10;
    virtual void keyBackClicked() = 0x143950;
    virtual void sceneWillResume() = 0x1438f0;
    virtual void dialogClosed(DialogLayer*) = 0x143830;
}

class FLAlertLayerProtocol {
    volatile virtual void FLAlert_Clicked(FLAlertLayer*, bool) {};
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

    bool init(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float) = 0x25e1b0;

    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float) = 0x25e0e0;
    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float) = 0x25dec0;
    
    volatile static FLAlertLayer* create(char const* title, const gd::string &desc, char const* btn) {return FLAlertLayer::create(NULL, title, desc, btn, NULL, 300.0);}

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

class GJHttpResult {
    virtual ~GJHttpResult() = 0x2dff80;
    virtual ~GJHttpResult() = 0x2e0000;
}

class GJRewardItem {
    virtual ~GJRewardItem() = 0x4d250;
    virtual ~GJRewardItem() = 0x4d2a0;
    virtual void encodeWithCoder(DS_Dictionary*) = 0x4d7f0;
    virtual bool canEncode() = 0x4d850;
}

class GauntletNode {
    virtual ~GauntletNode() = 0x2eb4f0;
    virtual ~GauntletNode() = 0x2eb500;
}

class LoadingLayer {
    virtual ~LoadingLayer() = 0x1e0330;
    virtual ~LoadingLayer() = 0x1e0470;
}

class OptionsLayer {
    virtual ~OptionsLayer() = 0x43dbd0;
    virtual ~OptionsLayer() = 0x43dc00;
    virtual void customSetup() = 0x43dc70;
    virtual void layerHidden() = 0x43f200;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x43f270;
}

class PlayerObject {
    virtual ~PlayerObject() = 0x217220;
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
}

class SecretLayer2 {
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
}

class SecretLayer3 {
    virtual ~SecretLayer3() = 0x266cf0;
    virtual ~SecretLayer3() = 0x266e50;
    virtual bool init() = 0x267040;
    virtual void onExit() = 0x26c270;
    virtual void keyBackClicked() = 0x26c240;
    virtual void dialogClosed(DialogLayer*) = 0x26bf10;
}

class SecretLayer4 {
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
}

class SetTextPopup {
    virtual ~SetTextPopup() = 0x1563f0;
    virtual ~SetTextPopup() = 0x156420;
    virtual void keyBackClicked() = 0x157050;
    virtual void show() = 0x157000;
    virtual void textInputClosed(CCTextInputNode*) = 0x156ef0;
    virtual void textChanged(CCTextInputNode*) = 0x156f30;
}

class SimplePlayer {
    virtual ~SimplePlayer() = 0x1bdb10;
    virtual ~SimplePlayer() = 0x1bdb20;
    virtual void setOpacity(unsigned char) = 0x1bcc40;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x1bc9b0;
}

class SlideInLayer {
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
}

class SupportLayer {
    virtual ~SupportLayer() = 0x1d8d60;
    virtual ~SupportLayer() = 0x1d8f70;
    virtual void customSetup() = 0x1d90b0;
    virtual void uploadActionFinished(int, int) = 0x1d9de0;
    virtual void uploadActionFailed(int, int) = 0x1d9f00;
    virtual void onClosePopup(UploadActionPopup*) = 0x1d9d90;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x1da170;
}

class CreateMenuItem : CCMenuItemSpriteExtra {
    static CreateMenuItem* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x1c580;
}

class BoomListLayer {
    virtual ~BoomListLayer() = 0x245f00;
    virtual ~BoomListLayer() = 0x245f30;
}

class CCAlertCircle {
    virtual ~CCAlertCircle() = 0xbe050;
    virtual ~CCAlertCircle() = 0xbe0a0;
    virtual bool init() = 0xbdea0;
    virtual void draw() = 0xbdf40;
}

class ChallengeNode {
    virtual ~ChallengeNode() = 0x1dce50;
    virtual ~ChallengeNode() = 0x1dcea0;
}

class DrawGridLayer {
    virtual ~DrawGridLayer() = 0xa3640;
    virtual ~DrawGridLayer() = 0xa3670;
    virtual void update(float) = 0xa3b30;
    virtual void draw() = 0xa3c40;
}

class EditButtonBar : cocos2d::CCNode {
    virtual ~EditButtonBar() = 0x350d80;
    virtual ~EditButtonBar() = 0x350de0;

    void loadFromItems(cocos2d::CCArray*, int, int, bool) = 0x351010;

    cocos2d::CCArray* m_objectSlots = 0x130;
}

class ExtendedLayer {
    virtual ~ExtendedLayer() = 0x1e4250;
    virtual ~ExtendedLayer() = 0x1e4260;
    virtual bool init() = 0x1e41e0;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x1e41f0;
}

class GJChestSprite {
    virtual ~GJChestSprite() = 0xf81e0;
    virtual ~GJChestSprite() = 0xf81f0;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0xf8270;
}

class GJGarageLayer {
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
}

class GJGroundLayer {
    virtual ~GJGroundLayer() = 0x356c30;
    virtual ~GJGroundLayer() = 0x356c40;
    virtual void draw() = 0x356a60;
    virtual void showGround() = 0x356920;
    virtual void fadeInGround(float) = 0x356930;
    virtual void fadeOutGround(float) = 0x356a30;
}

class GJMessageCell {
    virtual ~GJMessageCell() = 0x11fa90;
    virtual ~GJMessageCell() = 0x11fac0;
    virtual bool init() = 0x11fc00;
    virtual void draw() = 0x11fef0;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x11ffc0;
    virtual void uploadActionFinished(int, int) = 0x120180;
    virtual void uploadActionFailed(int, int) = 0x120310;
    virtual void onClosePopup(UploadActionPopup*) = 0x120410;
}

class GJRequestCell {
    virtual ~GJRequestCell() = 0x11ef10;
    virtual ~GJRequestCell() = 0x11ef40;
    virtual bool init() = 0x11f080;
    virtual void draw() = 0x11f390;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x11f460;
    virtual void uploadActionFinished(int, int) = 0x11f640;
    virtual void uploadActionFailed(int, int) = 0x11f800;
    virtual void onClosePopup(UploadActionPopup*) = 0x11f930;
}

class GJRobotSprite {
    virtual ~GJRobotSprite() = 0x34aaf0;
    virtual bool init() = 0x34ad50;
    virtual void setOpacity(unsigned char) = 0x34bcc0;
    virtual void hideSecondary() = 0x34c3b0;
}

class GJSongBrowser {
    virtual ~GJSongBrowser() = 0x368780;
    virtual ~GJSongBrowser() = 0x3687b0;
    virtual void customSetup() = 0x368ab0;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x3690a0;
}

class GJSpriteColor {
    virtual ~GJSpriteColor() = 0x343d40;
    virtual ~GJSpriteColor() = 0x343d50;
    virtual bool init() = 0x343c90;
}

class GJUserMessage {
    virtual ~GJUserMessage() = 0x2deaf0;
    virtual ~GJUserMessage() = 0x2deb00;
    virtual bool init() = 0x2debf0;
}

class GauntletLayer {
    virtual ~GauntletLayer() = 0x1d36c0;
    virtual ~GauntletLayer() = 0x1d36f0;
    virtual void keyBackClicked() = 0x1d5e20;
    virtual void loadLevelsFinished(cocos2d::CCArray*, char const*) = 0x1d5410;
    virtual void loadLevelsFailed(char const*) = 0x1d55d0;
}

class LikeItemLayer {
    virtual ~LikeItemLayer() = 0x35f4c0;
    virtual ~LikeItemLayer() = 0x35f660;
    virtual void keyBackClicked() = 0x35ff20;
}

class ListButtonBar {
    virtual ~ListButtonBar() = 0x210720;
    virtual ~ListButtonBar() = 0x210770;
}

class LoadingCircle {
    virtual ~LoadingCircle() = 0x277e60;
    virtual ~LoadingCircle() = 0x277e90;
    virtual bool init() = 0x277f00;
    virtual void draw() = 0x278170;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2781d0;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2781e0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2781f0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x278200;
    virtual void registerWithTouchDispatcher() = 0x278190;
}

class MenuGameLayer {
    virtual ~MenuGameLayer() = 0x28ef90;
    virtual ~MenuGameLayer() = 0x28efc0;
    virtual void update(float) = 0x28fa70;
    virtual bool init() = 0x28f150;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x290650;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x290770;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x290790;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2907b0;
    virtual void registerWithTouchDispatcher() = 0x2907f0;
}

class MyLevelsLayer {
    virtual ~MyLevelsLayer() = 0x350d0;
    virtual ~MyLevelsLayer() = 0x351b0;
    virtual bool init() = 0x35470;
    virtual void keyBackClicked() = 0x35b90;
}

class ObjectDecoder {
    virtual ~ObjectDecoder() = 0x437fb0;
    virtual ~ObjectDecoder() = 0x437fc0;
    virtual bool init() = 0x437f80;
}

class ObjectManager {
    virtual ~ObjectManager() = 0x43c970;
    virtual ~ObjectManager() = 0x43c9e0;
    virtual bool init() = 0x43b280;
}

class ObjectToolbox {
    virtual ~ObjectToolbox() = 0x3b2ca0;
    virtual ~ObjectToolbox() = 0x3b2d00;
    virtual bool init() = 0x3b2d80;

    char const* intKeyToFrame(int) = 0x4173b0;
    static ObjectToolbox* sharedState() = 0x3b2bc0;

    cocos2d::CCDictionary* m_strKeyObjects = 0x120;
    cocos2d::CCDictionary* m_intKeyObjects = 0x128;
}

class SongInfoLayer {
    virtual ~SongInfoLayer() = 0x369630;
    virtual ~SongInfoLayer() = 0x369660;
    virtual void keyBackClicked() = 0x36a980;
}

class TableViewCell : cocos2d::CCLayer {
    virtual ~TableViewCell() = 0x384130;
    virtual ~TableViewCell() = 0x384160;

    TableViewCell(char const*, float, float) = 0x383de0;
    volatile char pad[0x1c0-0x170];
    float m_parentHeight;
    float m_height;
    cocos2d::CCLayerColor* m_backgroundLayer;
    cocos2d::CCLayer* m_mainLayer;
}

class TutorialLayer {
    virtual ~TutorialLayer() = 0x286bd0;
    virtual ~TutorialLayer() = 0x286c00;
    virtual bool init() = 0x286e00;
    virtual void keyBackClicked() = 0x2878d0;
}

class TutorialPopup {
    virtual ~TutorialPopup() = 0x344de0;
    virtual ~TutorialPopup() = 0x344e10;
    virtual void keyBackClicked() = 0x344ae0;
    virtual void show() = 0x344bb0;
}

class AchievementBar {
    virtual ~AchievementBar() = 0x379f40;
    virtual ~AchievementBar() = 0x379f50;
    virtual void setOpacity(unsigned char) = 0x37b9b0;
}

class CCContentLayer {
    virtual ~CCContentLayer() = 0x464cd0;
    virtual ~CCContentLayer() = 0x464ce0;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x464c60;
}

class CCCounterLabel {
    virtual ~CCCounterLabel() = 0x29eaa0;
    virtual ~CCCounterLabel() = 0x29eab0;
}

class ChallengesPage {
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
}

class CurrencySprite {
    virtual ~CurrencySprite() = 0x44b5e0;
    virtual ~CurrencySprite() = 0x44b650;
}

class CustomListView {
    virtual ~CustomListView() = 0x10d370;
    virtual ~CustomListView() = 0x10d3a0;
    virtual void setupList() = 0x116e70;
    virtual void getListCell(char const*) = 0x10d560;
    virtual void loadCell(TableViewCell*, int) = 0x10e610;
}

class CustomSongCell {
    virtual ~CustomSongCell() = 0x11c320;
    virtual ~CustomSongCell() = 0x11c350;
    virtual bool init() = 0x11c440;
    virtual void draw() = 0x11c5c0;
}

class DailyLevelNode {
    virtual ~DailyLevelNode() = 0x10aaa0;
    virtual ~DailyLevelNode() = 0x10ab20;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x10b750;
}

class DailyLevelPage {
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
}

class EditLevelLayer {
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
}

class GJMessagePopup {
    virtual ~GJMessagePopup() = 0x14e9a0;
    virtual ~GJMessagePopup() = 0x14e9d0;
    virtual void keyBackClicked() = 0x1504a0;
    virtual void downloadMessageFinished(GJUserMessage*) = 0x150510;
    virtual void downloadMessageFailed(int) = 0x1505e0;
    virtual void uploadActionFinished(int, int) = 0x150680;
    virtual void uploadActionFailed(int, int) = 0x150820;
    virtual void onClosePopup(UploadActionPopup*) = 0x150900;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x150a00;
}

class GJOptionsLayer {
    virtual ~GJOptionsLayer() = 0x145a40;
    virtual ~GJOptionsLayer() = 0x145a70;
    virtual bool init() = 0x145c60;
    virtual void keyBackClicked() = 0x147190;
    virtual void setupOptions() = 0x1464d0;
    virtual void onClose(cocos2d::CCObject*) = 0x147160;
}

class GJRewardObject {
    virtual ~GJRewardObject() = 0x4e170;
    virtual ~GJRewardObject() = 0x4e180;
    virtual void encodeWithCoder(DS_Dictionary*) = 0x4d170;
    virtual bool canEncode() = 0x4d1f0;
}

class GJScaleControl {
    virtual ~GJScaleControl() = 0x32180;
    virtual ~GJScaleControl() = 0x32190;
    virtual bool init() = 0x31b30;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x31d30;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x31e60;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x31fb0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x32060;
}

class GJSearchObject {
    virtual ~GJSearchObject() = 0x2decb0;
    virtual ~GJSearchObject() = 0x2ded60;
}

class GJSpiderSprite {
    virtual ~GJSpiderSprite() = 0x34c4a0;
    virtual bool init() = 0x34c700;
}

class GameObjectCopy {
    virtual ~GameObjectCopy() = 0xa3290;
}

class HSVWidgetPopup {
    virtual ~HSVWidgetPopup() = 0x236890;
    virtual ~HSVWidgetPopup() = 0x236a30;
    virtual void keyBackClicked() = 0x2371e0;
}

class LevelInfoLayer {
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
}

class RateDemonLayer {
    virtual ~RateDemonLayer() = 0x12dfc0;
    virtual ~RateDemonLayer() = 0x12dff0;
    virtual void keyBackClicked() = 0x12ec20;
    virtual void uploadActionFinished(int, int) = 0x12e960;
    virtual void uploadActionFailed(int, int) = 0x12ea40;
    virtual void onClosePopup(UploadActionPopup*) = 0x12eb40;
}

class RateLevelLayer {
    virtual ~RateLevelLayer() = 0x2e1a60;
    virtual ~RateLevelLayer() = 0x2e1a90;
    virtual void keyBackClicked() = 0x2e2250;
}

class RateStarsLayer {
    virtual ~RateStarsLayer() = 0x135db0;
    virtual ~RateStarsLayer() = 0x135de0;
    virtual void keyBackClicked() = 0x136ec0;
    virtual void uploadActionFinished(int, int) = 0x136c10;
    virtual void uploadActionFailed(int, int) = 0x136cf0;
    virtual void onClosePopup(UploadActionPopup*) = 0x136de0;
}

class ScrollingLayer {
    virtual ~ScrollingLayer() = 0x41b150;
    virtual ~ScrollingLayer() = 0x41b160;
    virtual void draw() = 0x41abc0;
    virtual void visit() = 0x41acb0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x41ae10;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x41afb0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x41b0d0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x41b110;
}

class SelectArtLayer {
    virtual ~SelectArtLayer() = 0xac9c0;
    virtual ~SelectArtLayer() = 0xac9f0;
    virtual void keyBackClicked() = 0xad440;
}

class SetFolderPopup {
    virtual ~SetFolderPopup() = 0x155480;
    virtual ~SetFolderPopup() = 0x1554b0;
    virtual void valueChanged() = 0x155d40;
    virtual void setTextPopupClosed(SetTextPopup*, gd::string) = 0x1561b0;
}

class SetItemIDLayer {
    virtual ~SetItemIDLayer() = 0x5a790;
    virtual ~SetItemIDLayer() = 0x5a7c0;
    virtual void keyBackClicked() = 0x5bb90;
    virtual void show() = 0x5bb40;
    virtual void textInputClosed(CCTextInputNode*) = 0x5b9e0;
    virtual void textChanged(CCTextInputNode*) = 0x5ba20;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x5bca0;
    virtual void textInputReturn(CCTextInputNode*) = 0x5bd60;
}

class SongInfoObject : cocos2d::CCNode {
    virtual ~SongInfoObject() = 0x2f2040;
    virtual ~SongInfoObject() = 0x2f2050;
    virtual void encodeWithCoder(DS_Dictionary*) = 0x2f2c70;
    virtual bool canEncode() = 0x2f2da0;

    int m_unknown0;
    gd::string m_unknown1;
    gd::string m_artist;
    gd::string m_unknown2;
    gd::string m_youtube;
    gd::string m_unknown3;
    int m_unknown4;
    float m_unknown5;
    unsigned short m_pad;
    unsigned short m_metadata;
    int m_uuid;
}

class StartPosObject {
    virtual ~StartPosObject() = 0xda6d0;
    virtual ~StartPosObject() = 0xda740;
    virtual bool init() = 0xda8a0;
    virtual void getSaveString() = 0xda960;
}

class WorldLevelPage {
    virtual ~WorldLevelPage() = 0x202e70;
    virtual ~WorldLevelPage() = 0x202ea0;
    virtual void keyBackClicked() = 0x204300;
    virtual void show() = 0x2041c0;
}

class AchievementCell {
    virtual ~AchievementCell() = 0x120490;
    virtual ~AchievementCell() = 0x1204a0;
    virtual bool init() = 0x117730;
    virtual void draw() = 0x117740;

    void loadFromDict(cocos2d::CCDictionary*) = 0x10eaa0;
}

class BoomScrollLayer {
    virtual ~BoomScrollLayer() = 0x1e2d40;
    virtual ~BoomScrollLayer() = 0x1e2d70;
    virtual void visit() = 0x1e2f80;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e3c40;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e3d90;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e3ff0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e3b40;
    virtual void registerWithTouchDispatcher() = 0x1e3970;
}

class CCNodeContainer {
    virtual ~CCNodeContainer() = 0xba9b0;
    virtual ~CCNodeContainer() = 0xba9c0;
    virtual bool init() = 0xba950;
    virtual void visit() = 0xba960;
}

class CCSpriteWithHue {
    virtual ~CCSpriteWithHue() = 0x35a7c0;
    virtual ~CCSpriteWithHue() = 0x35a7d0;
    virtual void draw() = 0x35a400;
    virtual void initWithTexture(cocos2d::CCTexture2D*) = 0x359d10;
    virtual void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&) = 0x359d80;
    virtual void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool) = 0x359b80;
    virtual void initWithSpriteFrame(cocos2d::CCSpriteFrame*) = 0x359da0;
    virtual void updateColor() = 0x359f70;
}

class CCTextInputNode : cocos2d::CCLayer, cocos2d::CCIMEDelegate, cocos2d::CCTextFieldDelegate {
    virtual ~CCTextInputNode() = 0x5ceb0;
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

    gd::string getString() = 0x5d6f0;
    void refreshLabel() = 0x5d730;
    void setAllowedChars(gd::string) = 0x5d360;
    void setLabelNormalColor(cocos2d::_ccColor3B) = 0x5dab0;
    void setLabelPlaceholderColor(cocos2d::_ccColor3B) = 0x5da90;
    void setLabelPlaceholderScale(float) = 0x5da70;
    void setMaxLabelScale(float) = 0x5da30;
    void setMaxLabelWidth(float) = 0x5da50;
    void setString(gd::string) = 0x5d3e0;
    void updateLabel(gd::string) = 0x5d4a0;
    void forceOffset() = 0x5ec70;

    void* m_unknown0;
    gd::string m_caption; // 0x188
    int m_unknown1;
    bool m_selected; // 0x194
    gd::string m_allowedChars; // 0x198
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
}

class CustomSongLayer {
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
}

class EndPortalObject {
    virtual ~EndPortalObject() = 0x1db080;
    virtual ~EndPortalObject() = 0x1db090;
    virtual bool init() = 0x1da980;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x1dae70;
    virtual void setVisible(bool) = 0x1daf30;
    virtual void triggerObject(GJBaseGameLayer*) = 0x1dadc0;
    virtual void calculateSpawnXPos() = 0x1dae50;
}

class FileSaveManager {
    virtual ~FileSaveManager() = 0x68d0;
    virtual ~FileSaveManager() = 0x68e0;
    virtual bool init() = 0x6360;
    virtual void firstLoad() = 0x6390;
}

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
    void updateLayerCapacity(gd::string) = 0xb1680;
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

class GJChallengeItem {
    virtual ~GJChallengeItem() = 0x4e1b0;
    virtual ~GJChallengeItem() = 0x4e200;
    virtual void encodeWithCoder(DS_Dictionary*) = 0x4df60;
    virtual bool canEncode() = 0x4e020;
}

class GJDropDownLayer : cocos2d::CCLayerColor {
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
}

class GJEffectManager {
    virtual ~GJEffectManager() = 0x1800b0;
    virtual ~GJEffectManager() = 0x1800c0;
    virtual bool init() = 0x180230;
}

class GJFriendRequest {
    virtual ~GJFriendRequest() = 0x2de830;
    virtual ~GJFriendRequest() = 0x2de8b0;
    virtual bool init() = 0x2dea00;
}

class GJObjectDecoder {
    virtual ~GJObjectDecoder() = 0x41e890;
    virtual ~GJObjectDecoder() = 0x41e8a0;
    virtual bool init() = 0x41e780;
    virtual void getDecodedObject(int, DS_Dictionary*) = 0x41e790;
}

class InfoAlertButton {
    virtual ~InfoAlertButton() = 0x2ece40;
    virtual ~InfoAlertButton() = 0x2eced0;
    virtual void activate() = 0x2ecd70;
}

class LabelGameObject {
    virtual ~LabelGameObject() = 0xdb7e0;
    virtual ~LabelGameObject() = 0xdb850;
    virtual bool init() = 0xdb990;
    virtual void setOpacity(unsigned char) = 0xdba40;
    virtual void setupCustomSprites() = 0xdb9b0;
    virtual void addMainSpriteToParent(bool) = 0xdbce0;
    virtual void getSaveString() = 0xdbd50;
    virtual void setObjectColor(cocos2d::_ccColor3B const&) = 0xdbca0;
}

class MoreSearchLayer {
    virtual ~MoreSearchLayer() = 0x389610;
    virtual ~MoreSearchLayer() = 0x389640;
    virtual bool init() = 0x3896b0;
    virtual void keyBackClicked() = 0x38b820;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x38b6b0;
    virtual void textInputReturn(CCTextInputNode*) = 0x38b770;
}

class RetryLevelLayer {
    virtual ~RetryLevelLayer() = 0x28dde0;
    virtual ~RetryLevelLayer() = 0x28de10;
    virtual void keyBackClicked() = 0x28ed10;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x28ec30;
    virtual void customSetup() = 0x28de80;
    virtual void showLayer(bool) = 0x28eaf0;
    virtual void enterAnimFinished() = 0x28ebf0;
    virtual void keyUp(cocos2d::enumKeyCodes) = 0x28ecf0;
}

class SelectFontLayer {
    virtual ~SelectFontLayer() = 0x143b80;
    virtual ~SelectFontLayer() = 0x143bb0;
    virtual void keyBackClicked() = 0x1445f0;
}

class SetGroupIDLayer {
    virtual ~SetGroupIDLayer() = 0x194520;
    virtual ~SetGroupIDLayer() = 0x194550;
    virtual void keyBackClicked() = 0x198050;
    virtual void textInputClosed(CCTextInputNode*) = 0x197ab0;
    virtual void textChanged(CCTextInputNode*) = 0x197af0;
}

class SetupPulsePopup {
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
}

class SetupShakePopup {
    virtual ~SetupShakePopup() = 0x3adb60;
    virtual ~SetupShakePopup() = 0x3adb90;
    virtual void keyBackClicked() = 0x3b00d0;
    virtual void show() = 0x3b0080;
    virtual void textInputClosed(CCTextInputNode*) = 0x3afc80;
    virtual void textChanged(CCTextInputNode*) = 0x3afcc0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x3b0260;
    virtual void textInputReturn(CCTextInputNode*) = 0x3b0320;
}

class SetupSpawnPopup {
    virtual ~SetupSpawnPopup() = 0x1396f0;
    virtual ~SetupSpawnPopup() = 0x139720;
    virtual void keyBackClicked() = 0x13bc50;
    virtual void show() = 0x13bc00;
    virtual void textInputClosed(CCTextInputNode*) = 0x13b950;
    virtual void textChanged(CCTextInputNode*) = 0x13b990;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x13bda0;
    virtual void textInputReturn(CCTextInputNode*) = 0x13be60;
}

class ShareLevelLayer {
    virtual ~ShareLevelLayer() = 0x129e50;
    virtual ~ShareLevelLayer() = 0x129e80;
    virtual void keyBackClicked() = 0x12b830;
}

class TopArtistsLayer {
    virtual ~TopArtistsLayer() = 0x1929f0;
    virtual ~TopArtistsLayer() = 0x192a20;
    virtual bool init() = 0x192c30;
    virtual void registerWithTouchDispatcher() = 0x1935b0;
    virtual void keyBackClicked() = 0x193540;
    virtual void show() = 0x193e40;
    virtual void loadListFinished(cocos2d::CCArray*, char const*) = 0x193600;
    virtual void loadListFailed(char const*) = 0x1936f0;
    virtual void setupPageInfo(gd::string, char const*) = 0x193730;
}

class AccountHelpLayer {
    virtual ~AccountHelpLayer() = 0x83b50;
    virtual ~AccountHelpLayer() = 0x83d50;
    virtual void customSetup() = 0x83e80;
    virtual void layerHidden() = 0x84b60;
    virtual void accountStatusChanged() = 0x84a20;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x84a50;
}

class CCAnimatedSprite {
    virtual ~CCAnimatedSprite() = 0x1a6db0;
    virtual ~CCAnimatedSprite() = 0x1a6dc0;
    virtual void setOpacity(unsigned char) = 0x1a6af0;
    virtual void animationFinished(char const*) = 0x1a6ad0;
    virtual void animationFinishedO(cocos2d::CCObject*) = 0x1a6aa0;
}

class CCContentManager {
    virtual ~CCContentManager() = 0xc6960;
    virtual ~CCContentManager() = 0xc69b0;
}

class CCPartAnimSprite {
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
}

class CCScrollLayerExt {
    virtual ~CCScrollLayerExt() = 0x2359b0;
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
}

class CheckpointObject {
    virtual ~CheckpointObject() = 0x808e0;
    virtual ~CheckpointObject() = 0x808f0;
    virtual bool init() = 0x80920;
}

class ColorSelectPopup {
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
}

class CustomSongWidget {
    virtual ~CustomSongWidget() = 0x37bb90;
    virtual ~CustomSongWidget() = 0x37bc20;
    virtual void loadSongInfoFinished(SongInfoObject*) = 0x37e400;
    virtual void loadSongInfoFailed(int, GJSongError) = 0x37e5a0;
    virtual void downloadSongFinished(SongInfoObject*) = 0x37e7b0;
    virtual void downloadSongFailed(int, GJSongError) = 0x37e8c0;
    virtual void songStateChanged() = 0x37e390;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x37ea00;
}

class EditorPauseLayer {
    virtual ~EditorPauseLayer() = 0x13c3b0;
    virtual ~EditorPauseLayer() = 0x13c570;
    virtual void keyBackClicked() = 0x13f320;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x13f3a0;
    virtual void customSetup() = 0x13cc00;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x13f1b0;
}

class EffectGameObject {
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
}

class FollowRewardPage {
    virtual ~FollowRewardPage() = 0x22f270;
    virtual ~FollowRewardPage() = 0x22f2a0;
    virtual bool init() = 0x22f4a0;
    virtual void registerWithTouchDispatcher() = 0x230eb0;
    virtual void keyBackClicked() = 0x230e40;
    virtual void show() = 0x230c10;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x230da0;
    virtual void updateRate() = 0x230950;
}

class GJAccountManager {
    virtual ~GJAccountManager() = 0x87990;
    virtual ~GJAccountManager() = 0x879a0;
    virtual bool init() = 0x879d0;
}

class GJFlyGroundLayer {
    virtual ~GJFlyGroundLayer() = 0x356cd0;
    virtual ~GJFlyGroundLayer() = 0x356ce0;
    virtual bool init() = 0x356c00;
}

class GJLevelScoreCell {
    virtual ~GJLevelScoreCell() = 0x11da90;
    virtual ~GJLevelScoreCell() = 0x11dac0;
    virtual bool init() = 0x11dbb0;
    virtual void draw() = 0x11dc00;
}

class GJMoreGamesLayer {
    virtual ~GJMoreGamesLayer() = 0x43a790;
    virtual ~GJMoreGamesLayer() = 0x43a7c0;
    virtual void customSetup() = 0x43ae60;
}

class GameLevelManager {
    virtual ~GameLevelManager() = 0x2b7b60;
    virtual ~GameLevelManager() = 0x2b7b70;
    virtual bool init() = 0x2b7ba0;
}

class GameSoundManager {
    virtual ~GameSoundManager() = 0x362cc0;
    virtual ~GameSoundManager() = 0x362cd0;
    virtual bool init() = 0x3611d0;
}

class GameStatsManager {
    virtual ~GameStatsManager() = 0x392f0;
    virtual ~GameStatsManager() = 0x39300;
    virtual bool init() = 0x39330;
}

class GhostTrailEffect {
    virtual ~GhostTrailEffect() = 0x360600;
    virtual ~GhostTrailEffect() = 0x360610;
    virtual bool init() = 0x360730;
    virtual void draw() = 0x360d20;
}

class KeybindingsLayer {
    virtual ~KeybindingsLayer() = 0x375460;
    virtual ~KeybindingsLayer() = 0x375600;
    virtual bool init() = 0x375890;
    virtual void keyBackClicked() = 0x376f30;
}



class LevelLeaderboard {
    virtual ~LevelLeaderboard() = 0x20d4b0;
    virtual ~LevelLeaderboard() = 0x20d4e0;
    virtual void registerWithTouchDispatcher() = 0x20e7a0;
    virtual void keyBackClicked() = 0x20e730;
    virtual void show() = 0x20ec40;
    virtual void loadLeaderboardFinished(cocos2d::CCArray*, char const*) = 0x20e980;
    virtual void loadLeaderboardFailed(char const*) = 0x20ead0;
    virtual void updateUserScoreFinished() = 0x20e660;
    virtual void updateUserScoreFailed() = 0x20e690;
}

class LevelSearchLayer {
    virtual ~LevelSearchLayer() = 0x384430;
    virtual ~LevelSearchLayer() = 0x384460;
    virtual bool init() = 0x384770;
    virtual void keyBackClicked() = 0x3891f0;
    virtual void textInputOpened(CCTextInputNode*) = 0x3885f0;
    virtual void textInputClosed(CCTextInputNode*) = 0x3887f0;
    virtual void textChanged(CCTextInputNode*) = 0x388910;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x388580;
    virtual void demonFilterSelectClosed(int) = 0x388040;
}

class LevelSelectLayer {
    virtual ~LevelSelectLayer() = 0x2381d0;
    virtual ~LevelSelectLayer() = 0x238200;
    virtual void keyBackClicked() = 0x23a5e0;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x23a680;
    virtual void updatePageWithObject(cocos2d::CCObject*, cocos2d::CCObject*) = 0x2390a0;
    virtual void scrollLayerMoved(cocos2d::CCPoint) = 0x23a100;
}

class MoreOptionsLayer {
    virtual ~MoreOptionsLayer() = 0x43f3d0;
    virtual ~MoreOptionsLayer() = 0x43f400;
    virtual bool init() = 0x43f470;
    virtual void keyBackClicked() = 0x441f50;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x4420a0;
    virtual void textInputReturn(CCTextInputNode*) = 0x442160;
    virtual void googlePlaySignedIn() = 0x442210;
}

class NumberInputLayer {
    virtual ~NumberInputLayer() = 0x255db0;
    virtual ~NumberInputLayer() = 0x255de0;
    virtual bool init() = 0x255ff0;
    virtual void registerWithTouchDispatcher() = 0x256a70;
    virtual void keyBackClicked() = 0x2569c0;
}

class PlayerCheckpoint {
    virtual ~PlayerCheckpoint() = 0x80760;
    virtual ~PlayerCheckpoint() = 0x80770;
    virtual bool init() = 0x807a0;
}

class SetTargetIDLayer {
    virtual ~SetTargetIDLayer() = 0x159c80;
    virtual ~SetTargetIDLayer() = 0x159cb0;
    virtual void keyBackClicked() = 0x15b990;
    virtual void show() = 0x15b940;
    virtual void textInputClosed(CCTextInputNode*) = 0x15b680;
    virtual void textChanged(CCTextInputNode*) = 0x15b6c0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x15baa0;
    virtual void textInputReturn(CCTextInputNode*) = 0x15bb60;
}

class SetupRotatePopup {
    virtual ~SetupRotatePopup() = 0x2f2f80;
    virtual ~SetupRotatePopup() = 0x2f2fb0;
    virtual void keyBackClicked() = 0x2f47c0;
    virtual void show() = 0x2f4770;
    virtual void textInputClosed(CCTextInputNode*) = 0x2f45d0;
    virtual void textChanged(CCTextInputNode*) = 0x2f4610;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x2f48b0;
    virtual void textInputReturn(CCTextInputNode*) = 0x2f4970;
}

class SliderTouchLogic {
    virtual ~SliderTouchLogic() = 0x18e690;
    virtual ~SliderTouchLogic() = 0x18e6a0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x18d630;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x18d760;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x18d730;
    virtual void registerWithTouchDispatcher() = 0x18da90;
}

class SongOptionsLayer {
    virtual ~SongOptionsLayer() = 0xf2460;
    virtual ~SongOptionsLayer() = 0xf2490;
    virtual void keyBackClicked() = 0xf33c0;
}

class WorldSelectLayer {
    virtual ~WorldSelectLayer() = 0x1ff360;
    virtual ~WorldSelectLayer() = 0x1ff390;
    virtual void onExit() = 0x201320;
    virtual void keyBackClicked() = 0x201250;
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer*, int) = 0x201140;
    virtual void scrollLayerScrolledToPage(BoomScrollLayer*, int) = 0x201030;
    virtual void scrollLayerMoved(cocos2d::CCPoint) = 0x201370;
}

class AccountLoginLayer {
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
}

class AchievementsLayer {
    virtual ~AchievementsLayer() = 0x1bde00;
    virtual ~AchievementsLayer() = 0x1bde30;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x1be380;
    virtual void customSetup() = 0x1bdea0;

    void loadPage(int) = 0x1be190;
}

class AudioEffectsLayer {
    virtual ~AudioEffectsLayer() = 0x271750;
    virtual ~AudioEffectsLayer() = 0x2718f0;
    virtual void draw() = 0x2722a0;
    virtual void updateTweenAction(float, char const*) = 0x272170;
}

class CCMenuItemToggler : cocos2d::CCMenuItem {
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
}

class ColorActionSprite {
    virtual ~ColorActionSprite() = 0x18b420;
    virtual ~ColorActionSprite() = 0x18b430;
    virtual bool init() = 0x175370;
}

class DungeonBarsSprite {
    virtual ~DungeonBarsSprite() = 0x26c4c0;
    virtual ~DungeonBarsSprite() = 0x26c4d0;
    virtual bool init() = 0x26c2b0;
    virtual void visit() = 0x26c330;
}

class EditTriggersPopup {
    virtual ~EditTriggersPopup() = 0x1447b0;
    virtual ~EditTriggersPopup() = 0x1447e0;
    virtual void keyBackClicked() = 0x1458a0;
    virtual void show() = 0x145850;
}

class GJColorSetupLayer {
    virtual ~GJColorSetupLayer() = 0xef350;
    virtual ~GJColorSetupLayer() = 0xef380;
    virtual void keyBackClicked() = 0xf0210;
    virtual void colorSelectClosed(cocos2d::CCNode*) = 0xf01e0;
}

class GJRotationControl {
    virtual ~GJRotationControl() = 0x320e0;
    virtual ~GJRotationControl() = 0x320f0;
    virtual bool init() = 0x31510;
    virtual void draw() = 0x31ac0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x31790;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x318b0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x31990;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x31a80;
}

class GooglePlayManager {
    virtual ~GooglePlayManager() = 0x246050;
    virtual ~GooglePlayManager() = 0x246070;
    virtual bool init() = 0x246130;
}

class LeaderboardsLayer {
    virtual ~LeaderboardsLayer() = 0x29f190;
    virtual ~LeaderboardsLayer() = 0x29f320;
    virtual void keyBackClicked() = 0x2a11c0;
    virtual void updateUserScoreFinished() = 0x2a07c0;
    virtual void updateUserScoreFailed() = 0x2a0820;
    virtual void loadLeaderboardFinished(cocos2d::CCArray*, char const*) = 0x2a08c0;
    virtual void loadLeaderboardFailed(char const*) = 0x2a0fa0;
}

class LevelBrowserLayer {
    virtual ~LevelBrowserLayer() = 0x251130;
    virtual ~LevelBrowserLayer() = 0x251160;
    virtual void onEnter() = 0x255b70;
    virtual void onEnterTransitionDidFinish() = 0x255be0;
    virtual void keyBackClicked() = 0x255630;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x255680;
    virtual void loadLevelsFinished(cocos2d::CCArray*, char const*) = 0x254e10;
    virtual void loadLevelsFailed(char const*) = 0x254f60;
    virtual void setupPageInfo(gd::string, char const*) = 0x255050;
    virtual void setTextPopupClosed(SetTextPopup*, gd::string) = 0x255760;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x255840;
    virtual void setIDPopupClosed(SetIDPopup*, int) = 0x2554f0;
}

class LevelFeatureLayer {
    virtual ~LevelFeatureLayer() = 0x296c30;
    virtual ~LevelFeatureLayer() = 0x296c60;
    virtual void keyBackClicked() = 0x297a00;
}

class LocalLevelManager {
    virtual ~LocalLevelManager() = 0x35df80;
    virtual ~LocalLevelManager() = 0x35df90;
    virtual bool init() = 0x35dfc0;
    virtual void encodeDataTo(DS_Dictionary*) = 0x35ed60;
    virtual void dataLoaded(DS_Dictionary*) = 0x35eda0;
    virtual void firstLoad() = 0x35ed10;
}

class PromoInterstitial {
    virtual ~PromoInterstitial() = 0x16a270;
    virtual ~PromoInterstitial() = 0x16a2a0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x169e80;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x16a0c0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x169fa0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x16a040;
    virtual void keyBackClicked() = 0x169cf0;
    virtual void show() = 0x169cc0;
}

class PurchaseItemPopup {
    virtual ~PurchaseItemPopup() = 0x1a2460;
    virtual ~PurchaseItemPopup() = 0x1a25e0;
    virtual void keyBackClicked() = 0x1a2fc0;
}

class RewardUnlockLayer {
    virtual ~RewardUnlockLayer() = 0xf51a0;
    virtual ~RewardUnlockLayer() = 0xf51d0;
    virtual void keyBackClicked() = 0xf81b0;
    virtual void currencyWillExit(CurrencyRewardLayer*) = 0xf8170;
}

class SecretNumberLayer {
    virtual ~SecretNumberLayer() = 0x266b90;
    virtual ~SecretNumberLayer() = 0x266bc0;
    virtual bool init() = 0x266c30;
}

class SetupOpacityPopup {
    virtual ~SetupOpacityPopup() = 0x32ad0;
    virtual ~SetupOpacityPopup() = 0x32b00;
    virtual void keyBackClicked() = 0x34bf0;
    virtual void show() = 0x34ba0;
    virtual void textInputClosed(CCTextInputNode*) = 0x34a20;
    virtual void textChanged(CCTextInputNode*) = 0x34a60;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x34e50;
    virtual void textInputReturn(CCTextInputNode*) = 0x34f10;
}

class ShareCommentLayer {
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
}

class SpriteDescription {
    virtual ~SpriteDescription() = 0x2e6c00;
    virtual ~SpriteDescription() = 0x2e6c50;
}

class TextInputDelegate {
    virtual void textChanged(CCTextInputNode*) = 0x1573f0;
    virtual void textInputOpened(CCTextInputNode*) = 0x6200;
    virtual void textInputClosed(CCTextInputNode*) = 0x157400;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0xe1810;
    virtual void textInputReturn(CCTextInputNode*) = 0xe1820;
    virtual void allowTextInput(CCTextInputNode*) = 0x6210;
}

class UploadActionPopup {
    virtual ~UploadActionPopup() = 0x14be50;
    virtual ~UploadActionPopup() = 0x14bff0;
    virtual void keyBackClicked() = 0x14ca10;
}

class VideoOptionsLayer {
    virtual ~VideoOptionsLayer() = 0x4423c0;
    virtual ~VideoOptionsLayer() = 0x4423f0;
    virtual bool init() = 0x442460;
    virtual void keyBackClicked() = 0x443f50;
}

class AchievementManager {
    virtual ~AchievementManager() = 0x434b90;
    virtual ~AchievementManager() = 0x434ba0;
    virtual bool init() = 0x4244c0;

    void getAllAchievements() = 0x434d60;
    void sharedState() = 0x424420;
}

class AnimatedGameObject {
    virtual ~AnimatedGameObject() = 0xc79b0;
    virtual ~AnimatedGameObject() = 0xc79c0;
    virtual void setOpacity(unsigned char) = 0xc8640;
    virtual void resetObject() = 0xc9720;
    virtual void activateObject() = 0xc84d0;
    virtual void deactivateObject(bool) = 0xc85e0;
    virtual void setObjectColor(cocos2d::_ccColor3B const&) = 0xc8720;
    virtual void animationFinished(char const*) = 0xc8750;
    virtual void displayFrameChanged(cocos2d::CCObject*, gd::string) = 0xc9160;

    void playAnimation(int) = 0xc93d0;
    void updateChildSpriteColor(cocos2d::_ccColor3B) = 0xc8450;
}

class AnimatedShopKeeper {
    virtual ~AnimatedShopKeeper() = 0x1a3040;
    virtual ~AnimatedShopKeeper() = 0x1a3050;
    virtual void animationFinished(char const*) = 0x1a3130;
}

class ColorChannelSprite {
    virtual ~ColorChannelSprite() = 0x18b3e0;
    virtual ~ColorChannelSprite() = 0x18b3f0;
    virtual bool init() = 0x16deb0;
}

class ConfigureHSVWidget {
    virtual ~ConfigureHSVWidget() = 0x2372d0;
    virtual ~ConfigureHSVWidget() = 0x2372e0;
}

class EditorOptionsLayer {
    virtual ~EditorOptionsLayer() = 0x1471e0;
    virtual ~EditorOptionsLayer() = 0x147210;
    virtual bool init() = 0x147420;
    virtual void setupOptions() = 0x147440;
    virtual void onClose(cocos2d::CCObject*) = 0x147c30;
}

class FriendRequestPopup {
    virtual ~FriendRequestPopup() = 0x14cc00;
    virtual ~FriendRequestPopup() = 0x14cc30;
    virtual void keyBackClicked() = 0x14e2a0;
    virtual void uploadActionFinished(int, int) = 0x14e390;
    virtual void uploadActionFailed(int, int) = 0x14e560;
    virtual void onClosePopup(UploadActionPopup*) = 0x14e640;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x14e7c0;
}

class FriendsProfilePage {
    virtual ~FriendsProfilePage() = 0x3a94d0;
    virtual ~FriendsProfilePage() = 0x3a9500;
    virtual void registerWithTouchDispatcher() = 0x3aa6e0;
    virtual void keyBackClicked() = 0x3aa5e0;
    virtual void getUserListFinished(cocos2d::CCArray*, UserListType) = 0x3aa240;
    virtual void getUserListFailed(UserListType, GJErrorCode) = 0x3aa390;
    virtual void userListChanged(cocos2d::CCArray*, UserListType) = 0x3aa4a0;
    virtual void forceReloadList(UserListType) = 0x3aa4e0;
}

class GJCommentListLayer {
    virtual ~GJCommentListLayer() = 0x1482a0;
    virtual ~GJCommentListLayer() = 0x148440;
}

class GJMoveCommandLayer {
    virtual ~GJMoveCommandLayer() = 0x36f800;
    virtual ~GJMoveCommandLayer() = 0x36f830;
    virtual void keyBackClicked() = 0x374970;
    virtual void valuePopupClosed(ConfigureValuePopup*, float) = 0x373c20;
    virtual void textInputClosed(CCTextInputNode*) = 0x374430;
    virtual void textChanged(CCTextInputNode*) = 0x374470;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x374b50;
    virtual void textInputReturn(CCTextInputNode*) = 0x374c10;
}

class GameEffectsManager {
    virtual ~GameEffectsManager() = 0xe6a70;
    virtual ~GameEffectsManager() = 0xe6a80;
}

class GroupCommandObject {
    virtual ~GroupCommandObject() = 0x16e450;
    virtual ~GroupCommandObject() = 0x16e4b0;
    virtual bool init() = 0x16e590;
    virtual void updateTweenAction(float, char const*) = 0x16ead0;
}

class KeybindingsManager {
    virtual ~KeybindingsManager() = 0x289910;
    virtual ~KeybindingsManager() = 0x289980;
    virtual bool init() = 0x289a00;
}

class LevelSettingsLayer {
    virtual ~LevelSettingsLayer() = 0xa7b90;
    virtual ~LevelSettingsLayer() = 0xa7bc0;
    virtual void registerWithTouchDispatcher() = 0xac070;
    virtual void keyBackClicked() = 0xac7b0;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0xac260;
    virtual void colorSelectClosed(cocos2d::CCNode*) = 0xac100;
    virtual void customSongLayerClosed() = 0xac340;
    virtual void selectArtClosed(SelectArtLayer*) = 0xac5e0;
}

class AchievementNotifier : cocos2d::CCNode {
    virtual ~AchievementNotifier() = 0x4651c0;
    virtual ~AchievementNotifier() = 0x4651d0;
    virtual bool init() = 0x464e90;

    void sharedState() = 0x464e00;
    void willSwitchToScene(cocos2d::CCScene*) = 0x4650b0;
}

class CCAnimateFrameCache {
    virtual ~CCAnimateFrameCache() = 0x2e4f90;
    virtual ~CCAnimateFrameCache() = 0x2e4fa0;
}

class CollisionBlockPopup {
    virtual ~CollisionBlockPopup() = 0x12ff70;
    virtual ~CollisionBlockPopup() = 0x12ffa0;
    virtual void keyBackClicked() = 0x1317e0;
    virtual void show() = 0x131790;
    virtual void textInputClosed(CCTextInputNode*) = 0x131630;
    virtual void textChanged(CCTextInputNode*) = 0x131670;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x1318f0;
    virtual void textInputReturn(CCTextInputNode*) = 0x1319b0;
}

class CommunityCreditNode {
    virtual ~CommunityCreditNode() = 0x19ad00;
    virtual ~CommunityCreditNode() = 0x19ad50;
}

class ConfigureValuePopup {
    virtual ~ConfigureValuePopup() = 0x381ae0;
    virtual ~ConfigureValuePopup() = 0x381ca0;
    virtual void keyBackClicked() = 0x382c00;
    virtual void textInputClosed(CCTextInputNode*) = 0x382a90;
    virtual void textChanged(CCTextInputNode*) = 0x382ad0;
}

class CurrencyRewardLayer {
    virtual ~CurrencyRewardLayer() = 0x447950;
    virtual ~CurrencyRewardLayer() = 0x447aa0;
    virtual void update(float) = 0x44a5c0;
}

class EditGameObjectPopup {
    virtual ~EditGameObjectPopup() = 0x153600;
    virtual ~EditGameObjectPopup() = 0x153630;
    virtual void keyBackClicked() = 0x154070;
    virtual void show() = 0x154020;
}

class FRequestProfilePage {
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
    virtual void setupPageInfo(gd::string, char const*) = 0x437ab0;
    virtual void forceReloadRequests(bool) = 0x437a60;
}

class GJWriteMessagePopup {
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
}

class GauntletSelectLayer {
    virtual ~GauntletSelectLayer() = 0x2e91e0;
    virtual ~GauntletSelectLayer() = 0x2e9210;
    virtual void onExit() = 0x2eb490;
    virtual void keyBackClicked() = 0x2eb370;
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer*, int) = 0x2eb260;
    virtual void scrollLayerScrolledToPage(BoomScrollLayer*, int) = 0x2eb150;
    virtual void loadLevelsFinished(cocos2d::CCArray*, char const*) = 0x2ea630;
    virtual void loadLevelsFailed(char const*) = 0x2ea820;
}

class GravityEffectSprite {
    virtual ~GravityEffectSprite() = 0x80d90;
    virtual ~GravityEffectSprite() = 0x80da0;
    virtual bool init() = 0x80b20;
    virtual void draw() = 0x80d80;
}

class LevelSettingsObject {
    virtual ~LevelSettingsObject() = 0xa5650;
    virtual ~LevelSettingsObject() = 0xa5660;
    virtual bool init() = 0xa5690;
}

class MessagesProfilePage {
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
    virtual void setupPageInfo(gd::string, char const*) = 0x108400;
}

class SetupAnimationPopup {
    virtual ~SetupAnimationPopup() = 0x208ad0;
    virtual ~SetupAnimationPopup() = 0x208b00;
    virtual void keyBackClicked() = 0x20ade0;
    virtual void show() = 0x20ad90;
    virtual void textInputClosed(CCTextInputNode*) = 0x20aaf0;
    virtual void textChanged(CCTextInputNode*) = 0x20ab30;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x20af30;
    virtual void textInputReturn(CCTextInputNode*) = 0x20aff0;
}

class AccountRegisterLayer {
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
}

class CommunityCreditsPage {
    virtual ~CommunityCreditsPage() = 0x19b080;
    virtual ~CommunityCreditsPage() = 0x19b0b0;
    virtual bool init() = 0x19b2b0;
    virtual void registerWithTouchDispatcher() = 0x19e9f0;
    virtual void keyBackClicked() = 0x19e980;
    virtual void show() = 0x19e7e0;
}

class CustomizeObjectLayer {
    virtual ~CustomizeObjectLayer() = 0xdd2a0;
    virtual ~CustomizeObjectLayer() = 0xdd2d0;
    virtual void keyBackClicked() = 0xe16c0;
    virtual void textInputOpened(CCTextInputNode*) = 0xe1280;
    virtual void textInputClosed(CCTextInputNode*) = 0xe1430;
    virtual void textChanged(CCTextInputNode*) = 0xe1470;
    virtual void hsvPopupClosed(HSVWidgetPopup*, cocos2d::_ccHSVValue) = 0xe1050;
    virtual void colorSelectClosed(cocos2d::CCNode*) = 0xe0c60;
    virtual void colorSetupClosed(int) = 0xe0850;
}

class GJFollowCommandLayer {
    virtual ~GJFollowCommandLayer() = 0x16a4b0;
    virtual ~GJFollowCommandLayer() = 0x16a4e0;
    virtual void keyBackClicked() = 0x16da20;
    virtual void textInputClosed(CCTextInputNode*) = 0x16d440;
    virtual void textChanged(CCTextInputNode*) = 0x16d480;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x16dc00;
    virtual void textInputReturn(CCTextInputNode*) = 0x16dcc0;
}

class GJRotateCommandLayer {
    virtual ~GJRotateCommandLayer() = 0x1b00;
    virtual ~GJRotateCommandLayer() = 0x1b30;
    virtual void keyBackClicked() = 0x5e30;
    virtual void valuePopupClosed(ConfigureValuePopup*, float) = 0x5160;
    virtual void textInputClosed(CCTextInputNode*) = 0x5890;
    virtual void textChanged(CCTextInputNode*) = 0x58d0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x6010;
    virtual void textInputReturn(CCTextInputNode*) = 0x60d0;
}

class GJSpecialColorSelect {
    virtual ~GJSpecialColorSelect() = 0x3830f0;
    virtual ~GJSpecialColorSelect() = 0x383120;
    virtual void keyBackClicked() = 0x383ca0;
}

class MusicDelegateHandler {
    virtual ~MusicDelegateHandler() = 0x2ee460;
    virtual ~MusicDelegateHandler() = 0x2ee480;
}

class MusicDownloadManager {
    virtual ~MusicDownloadManager() = 0x2ef0c0;
    virtual ~MusicDownloadManager() = 0x2ef0d0;
    virtual bool init() = 0x2ef100;
}

class ParentalOptionsLayer {
    virtual ~ParentalOptionsLayer() = 0x445d00;
    virtual ~ParentalOptionsLayer() = 0x445d30;
    virtual bool init() = 0x445da0;
    virtual void keyBackClicked() = 0x4472d0;
}

class TeleportPortalObject {
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
}

class UploadActionDelegate {
    virtual void uploadActionFinished(int, int) = 0x3aa720;
    virtual void uploadActionFailed(int, int) = 0x3aa730;
}

class CCMenuItemSpriteExtra {
    virtual ~CCMenuItemSpriteExtra() = 0x125c00;
    virtual ~CCMenuItemSpriteExtra() = 0x125c90;
    virtual void activate() = 0x125730;
    virtual void selected() = 0x125840;
    virtual void unselected() = 0x125a70;

    static CCMenuItemSpriteExtra* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x1253c0;
    void setSizeMult(float) = 0x1255e0;
    CCMenuItemSpriteExtra() = 0x32670;
    bool init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x125450;
}

class CreateGuidelinesLayer {
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
}

class GJPFollowCommandLayer {
    virtual ~GJPFollowCommandLayer() = 0x1ae980;
    virtual ~GJPFollowCommandLayer() = 0x1ae9b0;
    virtual void keyBackClicked() = 0x1b2590;
    virtual void textInputClosed(CCTextInputNode*) = 0x1b1d80;
    virtual void textChanged(CCTextInputNode*) = 0x1b1dc0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x1b27a0;
    virtual void textInputReturn(CCTextInputNode*) = 0x1b2860;
}

class MoreVideoOptionsLayer {
    virtual ~MoreVideoOptionsLayer() = 0x4440b0;
    virtual ~MoreVideoOptionsLayer() = 0x4440e0;
    virtual bool init() = 0x444150;
    virtual void keyBackClicked() = 0x445ba0;
}

class MusicDownloadDelegate {
    virtual void loadSongInfoFinished(SongInfoObject*) = 0x320a0;
    virtual void loadSongInfoFailed(int, GJSongError) = 0x320b0;
    virtual void downloadSongFinished(SongInfoObject*) = 0x320c0;
    virtual void downloadSongFailed(int, GJSongError) = 0x320d0;
}

class SetupTouchTogglePopup {
    virtual ~SetupTouchTogglePopup() = 0x157600;
    virtual ~SetupTouchTogglePopup() = 0x157630;
    virtual void keyBackClicked() = 0x159850;
    virtual void show() = 0x159800;
    virtual void textInputClosed(CCTextInputNode*) = 0x159660;
    virtual void textChanged(CCTextInputNode*) = 0x1596a0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x159960;
    virtual void textInputReturn(CCTextInputNode*) = 0x159a20;
}

class ColorSelectLiveOverlay {
    virtual ~ColorSelectLiveOverlay() = 0x2e24c0;
    virtual ~ColorSelectLiveOverlay() = 0x2e24f0;
    virtual void keyBackClicked() = 0x2e4550;
    virtual void show() = 0x2e4620;
}

class DemonFilterSelectLayer {
    virtual ~DemonFilterSelectLayer() = 0x38b930;
    virtual ~DemonFilterSelectLayer() = 0x38b960;
    virtual bool init() = 0x38b9d0;
    virtual void keyBackClicked() = 0x38c060;
}

class GJAccountSettingsLayer {
    virtual ~GJAccountSettingsLayer() = 0x148760;
    virtual ~GJAccountSettingsLayer() = 0x148790;
    virtual void keyBackClicked() = 0x14b200;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x14abe0;
    virtual void textInputReturn(CCTextInputNode*) = 0x14aca0;
}

class SetupAnimSettingsPopup {
    virtual ~SetupAnimSettingsPopup() = 0x585c0;
    virtual ~SetupAnimSettingsPopup() = 0x585f0;
    virtual void keyBackClicked() = 0x599f0;
    virtual void show() = 0x599a0;
    virtual void textInputClosed(CCTextInputNode*) = 0x597b0;
    virtual void textChanged(CCTextInputNode*) = 0x597f0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x59ae0;
    virtual void textInputReturn(CCTextInputNode*) = 0x59ba0;
}

class SetupCountTriggerPopup {
    virtual ~SetupCountTriggerPopup() = 0x15c620;
    virtual ~SetupCountTriggerPopup() = 0x15c650;
    virtual void keyBackClicked() = 0x15ec70;
    virtual void show() = 0x15ec20;
    virtual void textInputClosed(CCTextInputNode*) = 0x15e960;
    virtual void textChanged(CCTextInputNode*) = 0x15e9a0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x15ede0;
    virtual void textInputReturn(CCTextInputNode*) = 0x15eea0;
}

class SetupInstantCountPopup {
    virtual ~SetupInstantCountPopup() = 0x352b70;
    virtual ~SetupInstantCountPopup() = 0x352ba0;
    virtual void keyBackClicked() = 0x355600;
    virtual void show() = 0x3555b0;
    virtual void textInputClosed(CCTextInputNode*) = 0x355230;
    virtual void textChanged(CCTextInputNode*) = 0x355270;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x355770;
    virtual void textInputReturn(CCTextInputNode*) = 0x355830;
}

class SetupObjectTogglePopup {
    virtual ~SetupObjectTogglePopup() = 0x1c07c0;
    virtual ~SetupObjectTogglePopup() = 0x1c07f0;
    virtual void keyBackClicked() = 0x1c27f0;
    virtual void show() = 0x1c27a0;
    virtual void textInputClosed(CCTextInputNode*) = 0x1c2620;
    virtual void textChanged(CCTextInputNode*) = 0x1c2660;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x1c2900;
    virtual void textInputReturn(CCTextInputNode*) = 0x1c29c0;
}

class SpriteAnimationManager {
    virtual ~SpriteAnimationManager() = 0x41e630;
    virtual ~SpriteAnimationManager() = 0x41e640;
}

class BoomScrollLayerDelegate {
    virtual void scrollLayerScrollingStarted(BoomScrollLayer*) = 0x204370;
    virtual void scrollLayerScrolledToPage(BoomScrollLayer*, int) = 0x23cf70;
    virtual void scrollLayerMoved(cocos2d::CCPoint) = 0x2eca30;
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer*, int) = 0x23cf80;
}

class SetupPickupTriggerPopup {
    virtual ~SetupPickupTriggerPopup() = 0x35dd0;
    virtual ~SetupPickupTriggerPopup() = 0x35e00;
    virtual void keyBackClicked() = 0x37f00;
    virtual void show() = 0x37eb0;
    virtual void textInputClosed(CCTextInputNode*) = 0x37c60;
    virtual void textChanged(CCTextInputNode*) = 0x37ca0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x38050;
    virtual void textInputReturn(CCTextInputNode*) = 0x38110;
}

class ShareLevelSettingsLayer {
    virtual ~ShareLevelSettingsLayer() = 0x12c700;
    virtual ~ShareLevelSettingsLayer() = 0x12c8c0;
    virtual void keyBackClicked() = 0x12db50;
    virtual void numberInputClosed(NumberInputLayer*) = 0x12da50;
}

class PlatformDownloadDelegate {
    virtual void downloadFinished(char const*) = 0x2f2db0;
    virtual void downloadFailed(char const*) = 0x2f2dc0;
}

class SetupInteractObjectPopup {
    virtual ~SetupInteractObjectPopup() = 0x29a360;
    virtual ~SetupInteractObjectPopup() = 0x29a390;
    virtual void keyBackClicked() = 0x29c550;
    virtual void show() = 0x29c500;
    virtual void textInputClosed(CCTextInputNode*) = 0x29c270;
    virtual void textChanged(CCTextInputNode*) = 0x29c2b0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x29c6a0;
    virtual void textInputReturn(CCTextInputNode*) = 0x29c760;
}

class SetupCollisionTriggerPopup {
    virtual ~SetupCollisionTriggerPopup() = 0x1d6080;
    virtual ~SetupCollisionTriggerPopup() = 0x1d60b0;
    virtual void keyBackClicked() = 0x1d8880;
    virtual void show() = 0x1d8830;
    virtual void textInputClosed(CCTextInputNode*) = 0x1d8490;
    virtual void textChanged(CCTextInputNode*) = 0x1d84d0;
    virtual void textInputShouldOffset(CCTextInputNode*, float) = 0x1d89f0;
    virtual void textInputReturn(CCTextInputNode*) = 0x1d8ab0;
}

class UpdateAccountSettingsPopup {
    virtual ~UpdateAccountSettingsPopup() = 0x14b330;
    virtual ~UpdateAccountSettingsPopup() = 0x14b360;
    virtual void keyBackClicked() = 0x14bcb0;
    virtual void updateSettingsFinished() = 0x14ba40;
    virtual void updateSettingsFailed() = 0x14bb80;
}

class Slider {
    virtual ~Slider() = 0x18e5f0;
    virtual ~Slider() = 0x18e600;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x18e2e0;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x18e360;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x18e320;
}

class UILayer {
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
}

class EditorUI : cocos2d::CCLayer {
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
    void pasteObjects(gd::string) = 0x232d0;
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
    gd::string m_clipboard = 0x458;
}

class GManager {
    virtual ~GManager() = 0x26fb90;
    virtual ~GManager() = 0x26fbe0;
    virtual bool init() = 0x26ee00;
    virtual void setup() = 0x26ee20;
    virtual void encodeDataTo(DS_Dictionary*) = 0x26f5b0;
    virtual void dataLoaded(DS_Dictionary*) = 0x26fb70;
    virtual void firstLoad() = 0x26fb80;
}

class GameCell {
    virtual ~GameCell() = 0x18fb70;
    virtual ~GameCell() = 0x18fc20;
    virtual bool init() = 0x18f980;
    virtual void draw() = 0x18fa40;
}

class ListCell {
    virtual ~ListCell() = 0x18fad0;
    virtual ~ListCell() = 0x18fae0;
    virtual bool init() = 0x18f7a0;
    virtual void draw() = 0x18f840;
}

class SongCell {
    virtual ~SongCell() = 0x11c0e0;
    virtual ~SongCell() = 0x11c110;
    virtual bool init() = 0x11c200;
    virtual void draw() = 0x11c240;
}

class TextArea {
    virtual ~TextArea() = 0x19faa0;
    virtual ~TextArea() = 0x19fb10;
    virtual void draw() = 0x19f890;
    virtual void setOpacity(unsigned char) = 0x19f760;
}

class GJComment {
    virtual ~GJComment() = 0x2dfd70;
    virtual ~GJComment() = 0x2dfd80;
    virtual bool init() = 0x2dfec0;
}

class GJMapPack {
    virtual ~GJMapPack() = 0x2ddd50;
    virtual ~GJMapPack() = 0x2ddd60;
    virtual bool init() = 0x2de0e0;
}

class InfoLayer {
    virtual ~InfoLayer() = 0x456560;
    virtual ~InfoLayer() = 0x456590;
    virtual void registerWithTouchDispatcher() = 0x45a070;
    virtual void keyBackClicked() = 0x45a000;
    virtual void show() = 0x45ab80;
    virtual void loadCommentsFinished(cocos2d::CCArray*, char const*) = 0x45a1b0;
    virtual void loadCommentsFailed(char const*) = 0x45a270;
    virtual void setupPageInfo(gd::string, char const*) = 0x45a320;
    virtual void commentUploadFinished(int) = 0x45a890;
    virtual void commentUploadFailed(int, CommentError) = 0x45a960;
    virtual void updateUserScoreFinished() = 0x45a720;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x459d50;
}

class KeysLayer {
    virtual ~KeysLayer() = 0x44ce00;
    virtual ~KeysLayer() = 0x44cfa0;
    virtual bool init() = 0x44d340;
    virtual void keyBackClicked() = 0x453210;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x4532e0;
    virtual void dialogClosed(DialogLayer*) = 0x453090;
}

class LevelCell {
    virtual ~LevelCell() = 0x117820;
    virtual ~LevelCell() = 0x117850;
    virtual bool init() = 0x117a40;
    virtual void draw() = 0x11a4d0;
}

class LevelPage {
    virtual ~LevelPage() = 0x23aeb0;
    virtual ~LevelPage() = 0x23aee0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x23cd90;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x23ceb0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x23ced0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x23cef0;
    virtual void registerWithTouchDispatcher() = 0x23cf30;
    virtual void dialogClosed(DialogLayer*) = 0x23cad0;
}

class MenuLayer : cocos2d::CCLayer, FLAlertLayerProtocol {
    virtual ~MenuLayer() = 0x1d1230;
    virtual ~MenuLayer() = 0x1d1260;
    virtual bool init() = 0x1d14b0;
    virtual void keyBackClicked() = 0x1d3160;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x1d33d0;
    virtual void googlePlaySignedIn() = 0x1d2f30;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x1d3190;

    void onMoreGames(cocos2d::CCObject*) = 0x1d2ad0;
    void onQuit(cocos2d::CCObject*) = 0x1d2b40;
    void scene(bool) = 0x1d12d0;
}

class PlayLayer : GJBaseGameLayer, CCCircleWaveDelegate {
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
    void claimParticle(gd::string) = 0x76ba0;
    void clearPickedUpItems() = 0x7cfa0;
    void colorObject(int, cocos2d::_ccColor3B) = 0x77810;
    void commitJumps() = 0x737e0;
    static PlayLayer* create(GJGameLevel*) = 0x6b590;
    void createCheckpoint() = 0x7e470;
    void createObjectsFromSetup(gd::string) = 0x6d130;
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
    void getParticleKey2(gd::string) = 0x767b0;
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
    void loadSavedObjectsState(gd::string) = 0x7f3d0;
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
    void setupReplay(gd::string) = 0x7e1e0;
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
}

class StatsCell {
    virtual ~StatsCell() = 0x120530;
    virtual ~StatsCell() = 0x120540;
    virtual bool init() = 0x11b100;
    virtual void draw() = 0x11bf80;
}



class CCScrollLayerExtDelegate {
}

class TableView : CCScrollLayerExt, CCScrollLayerExtDelegate {
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
}

