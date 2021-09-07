@interface ArtistCell
    ~ArtistCell() = 0x11c6a0;
    ~ArtistCell() = 0x11c6d0;
    bool init() = 0x11c7c0;
    void draw() = 0x11c980;
@end

@interface GJItemIcon
    ~GJItemIcon() = 0x1bcd10;
    ~GJItemIcon() = 0x1bcd20;
    void setOpacity(unsigned char) = 0x1bd9d0;
@end

@interface GJUserCell
    ~GJUserCell() = 0x11ddc0;
    ~GJUserCell() = 0x11dfa0;
    bool init() = 0x11e180;
    void draw() = 0x11e790;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x11e860;
    void uploadActionFinished(int, int) = 0x11eae0;
    void uploadActionFailed(int, int) = 0x11ecb0;
    void onClosePopup(UploadActionPopup*) = 0x11edb0;
@end

@interface GameObject
    ~GameObject() = 0x2f4ca0;
    ~GameObject() = 0x2f4cb0;
    void update(float) = 0x2fbb90;
    void setScaleX(float) = 0x335b00;
    void setScaleY(float) = 0x335b90;
    void setScale(float) = 0x335c20;
    void setPosition(cocos2d::CCPoint const&) = 0x335850;
    void setVisible(bool) = 0x336280;
    void setRotation(float) = 0x335970;
    void setOpacity(unsigned char) = 0x335f10;
    void initWithTexture(cocos2d::CCTexture2D*) = 0x2f56a0;
    void setChildColor(cocos2d::_ccColor3B const&) = 0x341f20;
    void setFlipX(bool) = 0x335a60;
    void setFlipY(bool) = 0x335ab0;
    void customSetup() = 0x2fbba0;
    void setupCustomSprites() = 0x307f60;
    void addMainSpriteToParent(bool) = 0x33a5b0;
    void resetObject() = 0x2fa620;
    void triggerObject(GJBaseGameLayer*) = 0x2fa8f0;
    void activateObject() = 0x2faf60;
    void deactivateObject(bool) = 0x2fb8f0;
    void getObjectRect() = 0x3352b0;
    void getObjectRect(float, float) = 0x3352d0;
    void getObjectRect2(float, float) = 0x3354e0;
    void getObjectTextureRect() = 0x3355b0;
    void getRealPosition() = 0x335750;
    void setStartPos(cocos2d::CCPoint) = 0x2fa520;
    void updateStartValues() = 0x2fa800;
    void getSaveString() = 0x33d3d0;
    void isFlipX() = 0x335a40;
    void isFlipY() = 0x335a50;
    void setRScaleX(float) = 0x335cb0;
    void setRScaleY(float) = 0x335d60;
    void setRScale(float) = 0x335e10;
    void getRScaleX() = 0x335e50;
    void getRScaleY() = 0x335e80;
    void calculateSpawnXPos() = 0x336970;
    void triggerActivated(float) = 0x336990;
    void powerOnObject() = 0x3369a0;
    void powerOffObject() = 0x3369c0;
    void setObjectColor(cocos2d::_ccColor3B const&) = 0x341c90;
    void setGlowColor(cocos2d::_ccColor3B const&) = 0x341ed0;
    void getOrientedBox() = 0x342ad0;
    void addToGroup(int) = 0x33ad00;
    void removeFromGroup(int) = 0x33ada0;
    void spawnXPosition() = 0xdc1b0;
    void getObjectRectDirty() const = 0xdc1d0;
    void setObjectRectDirty(bool) = 0xdc1e0;
    void getOrientedRectDirty() const = 0xdc1f0;
    void setOrientedRectDirty(bool) = 0xdc200;
    void getType() const = 0xdc210;
    void setType(GameObjectType) = 0xdc220;
    void getStartPos() const = 0xdc230;
@end

@interface GaragePage
    ~GaragePage() = 0x1bb670;
    ~GaragePage() = 0x1bb6a0;
    void listButtonBarSwitchedPage(ListButtonBar*, int) = 0x1bc2f0;
@end

@interface HardStreak
    ~HardStreak() = 0x5bf00;
    ~HardStreak() = 0x5bf60;
    bool init() = 0x5c090;
@end

@interface PauseLayer
    ~PauseLayer() = 0x20b140;
    ~PauseLayer() = 0x20b170;
    void keyBackClicked() = 0x20cd80;
    void keyDown(cocos2d::enumKeyCodes) = 0x20cc80;
    void customSetup() = 0x20b300;
    void keyUp(cocos2d::enumKeyCodes) = 0x20cd60;
@end

@interface RingObject
    ~RingObject() = 0xdc250;
    ~RingObject() = 0xdc260;
    void setScale(float) = 0xc6fb0;
    void setRotation(float) = 0xc7010;
    void resetObject() = 0xc6f90;
    void getSaveString() = 0xc73a0;
    void setRScale(float) = 0xc6fe0;
    void triggerActivated(float) = 0xc6e10;
    void powerOnObject() = 0xc6e20;
    void powerOffObject() = 0xc6f70;
@end

@interface SetIDLayer
    ~SetIDLayer() = 0x168c80;
    ~SetIDLayer() = 0x168e20;
    void keyBackClicked() = 0x169670;
@end

@interface SetIDPopup
    ~SetIDPopup() = 0x154210;
    ~SetIDPopup() = 0x154240;
    void keyBackClicked() = 0x155310;
    void show() = 0x1552c0;
    void textInputClosed(CCTextInputNode*) = 0x155140;
    void textChanged(CCTextInputNode*) = 0x155180;
    void valueChanged() = 0x1552b0;
@end

@interface ShardsPage
    ~ShardsPage() = 0x27d3e0;
    ~ShardsPage() = 0x27d410;
    bool init() = 0x27d610;
    void registerWithTouchDispatcher() = 0x27fc40;
    void keyBackClicked() = 0x27fbd0;
    void show() = 0x27fa30;
@end

@interface SongsLayer
    ~SongsLayer() = 0x29ebe0;
    ~SongsLayer() = 0x29ec10;
    void customSetup() = 0x29ec80;
@end

@interface StatsLayer
    ~StatsLayer() = 0x59d50;
    ~StatsLayer() = 0x59d80;
    void customSetup() = 0x59df0;
@end

@interface UndoObject
    ~UndoObject() = 0xa2fd0;
    ~UndoObject() = 0xa3030;
@end

@interface AppDelegate
    ~AppDelegate() = 0x3aa800;
    void applicationDidFinishLaunching() = 0x3aa900;
    void applicationDidEnterBackground() = 0x3aabe0;
    void applicationWillEnterForeground() = 0x3aac80;
    void applicationWillBecomeActive() = 0x3aab30;
    void applicationWillResignActive() = 0x3aab50;
    void trySaveGame() = 0x3aaf10;
    void willSwitchToScene(cocos2d::CCScene*) = 0x3aaf40;
@end

@interface CCCountdown
    ~CCCountdown() = 0x468cf0;
    ~CCCountdown() = 0x468d00;
    bool init() = 0x468870;
    void setOpacity(unsigned char) = 0x468c70;
@end

@interface CCMoveCNode
    ~CCMoveCNode() = 0x18b310;
    ~CCMoveCNode() = 0x18b360;
    bool init() = 0x18b3d0;
@end

@interface CommentCell
    ~CommentCell() = 0x11cb20;
    ~CommentCell() = 0x11ccc0;
    bool init() = 0x11ce80;
    void draw() = 0x11d1f0;
    void likedItem(LikeItemType, int, bool) = 0x11d2c0;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x11d4b0;
@end

@interface DialogLayer
    ~DialogLayer() = 0x204720;
    ~DialogLayer() = 0x204750;
    void onEnter() = 0x205900;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x205790;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x205820;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2057e0;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x205840;
    void registerWithTouchDispatcher() = 0x205890;
    void keyBackClicked() = 0x2056a0;
    void keyDown(cocos2d::enumKeyCodes) = 0x205ce0;
    void fadeInTextFinished(TextArea*) = 0x205930;
@end

@interface GJGameLevel
    ~GJGameLevel() = 0x2db2d0;
    ~GJGameLevel() = 0x2db2e0;
    void encodeWithCoder(DS_Dictionary*) = 0x2dd1c0;
    void canEncode() = 0x2ddae0;
    bool init() = 0x2db310;
@end

@interface GJListLayer
    ~GJListLayer() = 0x344350;
    ~GJListLayer() = 0x3444d0;
@end

@interface GJScoreCell
    ~GJScoreCell() = 0x11d5e0;
    ~GJScoreCell() = 0x11d610;
    bool init() = 0x11d710;
    void draw() = 0x11d9b0;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x11d8e0;
@end

@interface GJShopLayer
    ~GJShopLayer() = 0x19fe10;
    ~GJShopLayer() = 0x19fe40;
    void keyBackClicked() = 0x1a2370;
    void didPurchaseItem(GJStoreItem*) = 0x1a1ae0;
@end

@interface GJUserScore
    ~GJUserScore() = 0x2de3f0;
    ~GJUserScore() = 0x2de400;
    bool init() = 0x2de5a0;
@end

@interface GJWorldNode
    ~GJWorldNode() = 0x2016b0;
    ~GJWorldNode() = 0x2016c0;
@end

@interface GameManager
    ~GameManager() = 0x1d0fe0;
    ~GameManager() = 0x1d0ff0;
    void update(float) = 0x1d0270;
    bool init() = 0x1c2ec0;
    void encodeDataTo(DS_Dictionary*) = 0x1cfd90;
    void dataLoaded(DS_Dictionary*) = 0x1ce7f0;
    void firstLoad() = 0x1cf6a0;
@end

@interface MapPackCell
    ~MapPackCell() = 0x11a670;
    ~MapPackCell() = 0x11a7f0;
    bool init() = 0x11a9c0;
    void draw() = 0x11ae80;
@end

@interface ProfilePage
    ~ProfilePage() = 0x45ee30;
    ~ProfilePage() = 0x45ee60;
    void registerWithTouchDispatcher() = 0x464a60;
    void keyBackClicked() = 0x4637e0;
    void show() = 0x4639c0;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x463340;
    void updateUserScoreFinished() = 0x463850;
    void updateUserScoreFailed() = 0x463920;
    void getUserInfoFinished(GJUserScore*) = 0x463cd0;
    void getUserInfoFailed(int) = 0x463fb0;
    void userInfoChanged(GJUserScore*) = 0x464070;
    void loadCommentsFinished(cocos2d::CCArray*, char const*) = 0x464250;
    void loadCommentsFailed(char const*) = 0x464340;
    void setupPageInfo(std::string, char const*) = 0x464410;
    void commentUploadFinished(int) = 0x464770;
    void commentUploadFailed(int, CommentError) = 0x464800;
    void commentDeleteFailed(int, int) = 0x4648e0;
    void onClosePopup(UploadActionPopup*) = 0x463510;
    void uploadActionFinished(int, int) = 0x463570;
    void uploadActionFailed(int, int) = 0x463710;
@end

@interface RewardsPage
    ~RewardsPage() = 0xf35a0;
    ~RewardsPage() = 0xf35d0;
    bool init() = 0xf3800;
    void registerWithTouchDispatcher() = 0xf5040;
    void keyBackClicked() = 0xf4fd0;
    void show() = 0xf4e70;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0xf4fb0;
    void rewardsStatusFinished(int) = 0xf4ae0;
    void rewardsStatusFailed() = 0xf4d70;
@end

@interface SecretLayer
    ~SecretLayer() = 0x362f30;
    ~SecretLayer() = 0x3630d0;
    bool init() = 0x363340;
    void keyBackClicked() = 0x368450;
    void textInputOpened(CCTextInputNode*) = 0x366d30;
    void textInputClosed(CCTextInputNode*) = 0x366f30;
    void textChanged(CCTextInputNode*) = 0x367050;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x366d10;
@end

@interface SpeedObject
    ~SpeedObject() = 0x80a00;
    ~SpeedObject() = 0x80a50;
@end

@interface UploadPopup
    ~UploadPopup() = 0x12b9c0;
    ~UploadPopup() = 0x12b9f0;
    void keyBackClicked() = 0x12c600;
    void show() = 0x12c5a0;
    void levelUploadFinished(GJGameLevel*) = 0x12c080;
    void levelUploadFailed(GJGameLevel*) = 0x12c340;
@end

@interface AccountLayer
    ~AccountLayer() = 0x81b80;
    ~AccountLayer() = 0x81bb0;
    void customSetup() = 0x81c20;
    void layerHidden() = 0x83950;
    void backupAccountFinished() = 0x830e0;
    void backupAccountFailed(BackupAccountError) = 0x832d0;
    void syncAccountFinished() = 0x83490;
    void syncAccountFailed(BackupAccountError) = 0x83630;
    void accountStatusChanged() = 0x830b0;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x83830;
@end

@interface BoomListView
    ~BoomListView() = 0x18ea10;
    ~BoomListView() = 0x18ebb0;
    void draw() = 0x18f790;
    void setupList() = 0x18ef90;
    void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) = 0x18f030;
    void cellHeightForRowAtIndexPath(CCIndexPath&, TableView*) = 0x18f070;
    void didSelectRowAtIndexPath(CCIndexPath&, TableView*) = 0x18f090;
    void numberOfRowsInSection(unsigned int, TableView*) = 0x18f0b0;
    void numberOfSectionsInTableView(TableView*) = 0x18f0e0;
    void cellForRowAtIndexPath(CCIndexPath&, TableView*) = 0x18f100;
    void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView*, TableViewCellEditingStyle, CCIndexPath&) = 0x18f770;
    void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) = 0x18f050;
    void getListCell(char const*) = 0x18f200;
    void loadCell(TableViewCell*, int) = 0x18f4a0;
@end

@interface CCBlockLayer
    ~CCBlockLayer() = 0x2a5620;
    ~CCBlockLayer() = 0x2a57d0;
    bool init() = 0x2a59c0;
    void draw() = 0x2a5c20;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2a5c50;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2a5cb0;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2a5c70;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2a5c90;
    void registerWithTouchDispatcher() = 0x2a5ad0;
    void keyBackClicked() = 0x2a5b10;
    void customSetup() = 0x2a5a70;
    void enterLayer() = 0x2a5aa0;
    void exitLayer() = 0x2a5b40;
    void showLayer(bool) = 0x2a5b90;
    void hideLayer(bool) = 0x2a5ba0;
    void layerVisible() = 0x2a5bc0;
    void layerHidden() = 0x2a5be0;
    void enterAnimFinished() = 0x2a5bb0;
    void disableUI() = 0x2a5a80;
    void enableUI() = 0x2a5a90;
@end

@interface CCCircleWave
    ~CCCircleWave() = 0xbd1b0;
    ~CCCircleWave() = 0xbd200;
    void setPosition(cocos2d::CCPoint const&) = 0xbd600;
    void removeMeAndCleanup() = 0xbdac0;
    void draw() = 0xbd960;
    void updateTweenAction(float, char const*) = 0xbd710;
@end

@interface CCLightFlash
    ~CCLightFlash() = 0x296210;
    ~CCLightFlash() = 0x296260;
    bool init() = 0x2958f0;
@end

@interface CCLightStrip
    ~CCLightStrip() = 0x2968b0;
    ~CCLightStrip() = 0x2968c0;
    void draw() = 0x296410;
    void updateTweenAction(float, char const*) = 0x2965a0;
@end

@interface CCSpritePlus
    ~CCSpritePlus() = 0x248400;
    ~CCSpritePlus() = 0x248470;
    void setScaleX(float) = 0x248950;
    void setScaleY(float) = 0x2489d0;
    void setScale(float) = 0x248a50;
    void setPosition(cocos2d::CCPoint const&) = 0x2486b0;
    void setRotation(float) = 0x248730;
    void initWithTexture(cocos2d::CCTexture2D*) = 0x248690;
    void initWithSpriteFrameName(char const*) = 0x248670;
    void setFlipX(bool) = 0x2487b0;
    void setFlipY(bool) = 0x248880;
@end

@interface CreatorLayer
    ~CreatorLayer() = 0x141940;
    ~CreatorLayer() = 0x141970;
    bool init() = 0x141c10;
    void keyBackClicked() = 0x143950;
    void sceneWillResume() = 0x1438f0;
    void dialogClosed(DialogLayer*) = 0x143830;
@end

@interface FLAlertLayer
    ~FLAlertLayer() = 0x25db60;
    ~FLAlertLayer() = 0x25dd00;
    void onEnter() = 0x25f350;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25ee40;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25f0a0;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25ef60;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25f020;
    void registerWithTouchDispatcher() = 0x25f2e0;
    void keyBackClicked() = 0x25ed90;
    void keyDown(cocos2d::enumKeyCodes) = 0x25ece0;
    void show() = 0x25f120;
@end

@interface GJHttpResult
    ~GJHttpResult() = 0x2dff80;
    ~GJHttpResult() = 0x2e0000;
@end

@interface GJRewardItem
    ~GJRewardItem() = 0x4d250;
    ~GJRewardItem() = 0x4d2a0;
    void encodeWithCoder(DS_Dictionary*) = 0x4d7f0;
    void canEncode() = 0x4d850;
@end

@interface GauntletNode
    ~GauntletNode() = 0x2eb4f0;
    ~GauntletNode() = 0x2eb500;
@end

@interface LoadingLayer
    ~LoadingLayer() = 0x1e0330;
    ~LoadingLayer() = 0x1e0470;
@end

@interface OptionsLayer
    ~OptionsLayer() = 0x43dbd0;
    ~OptionsLayer() = 0x43dc00;
    void customSetup() = 0x43dc70;
    void layerHidden() = 0x43f200;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x43f270;
@end

@interface PlayerObject
    ~PlayerObject() = 0x217220;
    ~PlayerObject() = 0x217230;
    void update(float) = 0x218bf0;
    void setScaleX(float) = 0x22e7f0;
    void setScaleY(float) = 0x22e830;
    void setScale(float) = 0x22e870;
    void setPosition(cocos2d::CCPoint const&) = 0x22c8b0;
    void setVisible(bool) = 0x22e8b0;
    void setRotation(float) = 0x22e6e0;
    void setOpacity(unsigned char) = 0x22d400;
    void setColor(cocos2d::_ccColor3B const&) = 0x22cdf0;
    void setFlipX(bool) = 0x22e720;
    void setFlipY(bool) = 0x22e7b0;
    void resetObject() = 0x223170;
    void getRealPosition() = 0x22d5f0;
    void getOrientedBox() = 0x22dee0;
    void animationFinished(char const*) = 0x22e9d0;
@end

@interface SecretLayer2
    ~SecretLayer2() = 0x25f9e0;
    ~SecretLayer2() = 0x25fbb0;
    bool init() = 0x25fe70;
    void onExit() = 0x266b30;
    void keyBackClicked() = 0x266a30;
    void textInputOpened(CCTextInputNode*) = 0x265880;
    void textInputClosed(CCTextInputNode*) = 0x265a80;
    void textChanged(CCTextInputNode*) = 0x265ba0;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x265860;
    void dialogClosed(DialogLayer*) = 0x264880;
@end

@interface SecretLayer3
    ~SecretLayer3() = 0x266cf0;
    ~SecretLayer3() = 0x266e50;
    bool init() = 0x267040;
    void onExit() = 0x26c270;
    void keyBackClicked() = 0x26c240;
    void dialogClosed(DialogLayer*) = 0x26bf10;
@end

@interface SecretLayer4
    ~SecretLayer4() = 0x1ed200;
    ~SecretLayer4() = 0x1ed3b0;
    bool init() = 0x1ed640;
    void onExit() = 0x1f2220;
    void keyBackClicked() = 0x1f2120;
    void textInputOpened(CCTextInputNode*) = 0x1f0ff0;
    void textInputClosed(CCTextInputNode*) = 0x1f11f0;
    void textChanged(CCTextInputNode*) = 0x1f1310;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x1f0fd0;
    void dialogClosed(DialogLayer*) = 0x1f0a90;
@end

@interface SetTextPopup
    ~SetTextPopup() = 0x1563f0;
    ~SetTextPopup() = 0x156420;
    void keyBackClicked() = 0x157050;
    void show() = 0x157000;
    void textInputClosed(CCTextInputNode*) = 0x156ef0;
    void textChanged(CCTextInputNode*) = 0x156f30;
@end

@interface SimplePlayer
    ~SimplePlayer() = 0x1bdb10;
    ~SimplePlayer() = 0x1bdb20;
    void setOpacity(unsigned char) = 0x1bcc40;
    void setColor(cocos2d::_ccColor3B const&) = 0x1bc9b0;
@end

@interface SlideInLayer
    ~SlideInLayer() = 0x1388e0;
    ~SlideInLayer() = 0x138a90;
    bool init() = 0x138cf0;
    void draw() = 0x1394a0;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1394d0;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x139530;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1394f0;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x139510;
    void registerWithTouchDispatcher() = 0x139190;
    void keyBackClicked() = 0x1391d0;
    void customSetup() = 0x139110;
    void enterLayer() = 0x139160;
    void exitLayer(cocos2d::CCObject*) = 0x139210;
    void showLayer(bool) = 0x139270;
    void hideLayer(bool) = 0x139360;
    void layerVisible() = 0x139440;
    void layerHidden() = 0x139460;
    void enterAnimFinished() = 0x139430;
    void disableUI() = 0x139120;
    void enableUI() = 0x139140;
@end

@interface SupportLayer
    ~SupportLayer() = 0x1d8d60;
    ~SupportLayer() = 0x1d8f70;
    void customSetup() = 0x1d90b0;
    void uploadActionFinished(int, int) = 0x1d9de0;
    void uploadActionFailed(int, int) = 0x1d9f00;
    void onClosePopup(UploadActionPopup*) = 0x1d9d90;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x1da170;
@end

@interface BoomListLayer
    ~BoomListLayer() = 0x245f00;
    ~BoomListLayer() = 0x245f30;
@end

@interface CCAlertCircle
    ~CCAlertCircle() = 0xbe050;
    ~CCAlertCircle() = 0xbe0a0;
    bool init() = 0xbdea0;
    void draw() = 0xbdf40;
@end

@interface ChallengeNode
    ~ChallengeNode() = 0x1dce50;
    ~ChallengeNode() = 0x1dcea0;
@end

@interface DrawGridLayer
    ~DrawGridLayer() = 0xa3640;
    ~DrawGridLayer() = 0xa3670;
    void update(float) = 0xa3b30;
    void draw() = 0xa3c40;
@end

@interface EditButtonBar
    ~EditButtonBar() = 0x350d80;
    ~EditButtonBar() = 0x350de0;
@end

@interface ExtendedLayer
    ~ExtendedLayer() = 0x1e4250;
    ~ExtendedLayer() = 0x1e4260;
    bool init() = 0x1e41e0;
    void setPosition(cocos2d::CCPoint const&) = 0x1e41f0;
@end

@interface GJChestSprite
    ~GJChestSprite() = 0xf81e0;
    ~GJChestSprite() = 0xf81f0;
    void setColor(cocos2d::_ccColor3B const&) = 0xf8270;
@end

@interface GJGarageLayer
    ~GJGarageLayer() = 0x1b4430;
    ~GJGarageLayer() = 0x1b4640;
    bool init() = 0x1b4980;
    void keyBackClicked() = 0x1bb630;
    void textInputOpened(CCTextInputNode*) = 0x1b7dc0;
    void textInputClosed(CCTextInputNode*) = 0x1b8040;
    void textChanged(CCTextInputNode*) = 0x1b82c0;
    void listButtonBarSwitchedPage(ListButtonBar*, int) = 0x1bad10;
    void updateRate() = 0x1bb420;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x1bb050;
    void dialogClosed(DialogLayer*) = 0x1bb160;
@end

@interface GJGroundLayer
    ~GJGroundLayer() = 0x356c30;
    ~GJGroundLayer() = 0x356c40;
    void draw() = 0x356a60;
    void showGround() = 0x356920;
    void fadeInGround(float) = 0x356930;
    void fadeOutGround(float) = 0x356a30;
@end

@interface GJMessageCell
    ~GJMessageCell() = 0x11fa90;
    ~GJMessageCell() = 0x11fac0;
    bool init() = 0x11fc00;
    void draw() = 0x11fef0;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x11ffc0;
    void uploadActionFinished(int, int) = 0x120180;
    void uploadActionFailed(int, int) = 0x120310;
    void onClosePopup(UploadActionPopup*) = 0x120410;
@end

@interface GJRequestCell
    ~GJRequestCell() = 0x11ef10;
    ~GJRequestCell() = 0x11ef40;
    bool init() = 0x11f080;
    void draw() = 0x11f390;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x11f460;
    void uploadActionFinished(int, int) = 0x11f640;
    void uploadActionFailed(int, int) = 0x11f800;
    void onClosePopup(UploadActionPopup*) = 0x11f930;
@end

@interface GJRobotSprite
    ~GJRobotSprite() = 0x34aaf0;
    ~GJRobotSprite() = 0x34ab70;
    bool init() = 0x34ad50;
    void setOpacity(unsigned char) = 0x34bcc0;
    void hideSecondary() = 0x34c3b0;
@end

@interface GJSongBrowser
    ~GJSongBrowser() = 0x368780;
    ~GJSongBrowser() = 0x3687b0;
    void customSetup() = 0x368ab0;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x3690a0;
@end

@interface GJSpriteColor
    ~GJSpriteColor() = 0x343d40;
    ~GJSpriteColor() = 0x343d50;
    bool init() = 0x343c90;
@end

@interface GJUserMessage
    ~GJUserMessage() = 0x2deaf0;
    ~GJUserMessage() = 0x2deb00;
    bool init() = 0x2debf0;
@end

@interface GauntletLayer
    ~GauntletLayer() = 0x1d36c0;
    ~GauntletLayer() = 0x1d36f0;
    void keyBackClicked() = 0x1d5e20;
    void loadLevelsFinished(cocos2d::CCArray*, char const*) = 0x1d5410;
    void loadLevelsFailed(char const*) = 0x1d55d0;
@end

@interface LikeItemLayer
    ~LikeItemLayer() = 0x35f4c0;
    ~LikeItemLayer() = 0x35f660;
    void keyBackClicked() = 0x35ff20;
@end

@interface ListButtonBar
    ~ListButtonBar() = 0x210720;
    ~ListButtonBar() = 0x210770;
@end

@interface LoadingCircle
    ~LoadingCircle() = 0x277e60;
    ~LoadingCircle() = 0x277e90;
    bool init() = 0x277f00;
    void draw() = 0x278170;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2781d0;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2781e0;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2781f0;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x278200;
    void registerWithTouchDispatcher() = 0x278190;
@end

@interface MenuGameLayer
    ~MenuGameLayer() = 0x28ef90;
    ~MenuGameLayer() = 0x28efc0;
    void update(float) = 0x28fa70;
    bool init() = 0x28f150;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x290650;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x290770;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x290790;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2907b0;
    void registerWithTouchDispatcher() = 0x2907f0;
@end

@interface MyLevelsLayer
    ~MyLevelsLayer() = 0x350d0;
    ~MyLevelsLayer() = 0x351b0;
    bool init() = 0x35470;
    void keyBackClicked() = 0x35b90;
@end

@interface ObjectDecoder
    ~ObjectDecoder() = 0x437fb0;
    ~ObjectDecoder() = 0x437fc0;
    bool init() = 0x437f80;
@end

@interface ObjectManager
    ~ObjectManager() = 0x43c970;
    ~ObjectManager() = 0x43c9e0;
    bool init() = 0x43b280;
@end

@interface ObjectToolbox
    ~ObjectToolbox() = 0x3b2ca0;
    ~ObjectToolbox() = 0x3b2d00;
    bool init() = 0x3b2d80;
@end

@interface SongInfoLayer
    ~SongInfoLayer() = 0x369630;
    ~SongInfoLayer() = 0x369660;
    void keyBackClicked() = 0x36a980;
@end

@interface TableViewCell
    ~TableViewCell() = 0x384130;
    ~TableViewCell() = 0x384160;
@end

@interface TutorialLayer
    ~TutorialLayer() = 0x286bd0;
    ~TutorialLayer() = 0x286c00;
    bool init() = 0x286e00;
    void keyBackClicked() = 0x2878d0;
@end

@interface TutorialPopup
    ~TutorialPopup() = 0x344de0;
    ~TutorialPopup() = 0x344e10;
    void keyBackClicked() = 0x344ae0;
    void show() = 0x344bb0;
@end

@interface AchievementBar
    ~AchievementBar() = 0x379f40;
    ~AchievementBar() = 0x379f50;
    void setOpacity(unsigned char) = 0x37b9b0;
@end

@interface CCContentLayer
    ~CCContentLayer() = 0x464cd0;
    ~CCContentLayer() = 0x464ce0;
    void setPosition(cocos2d::CCPoint const&) = 0x464c60;
@end

@interface CCCounterLabel
    ~CCCounterLabel() = 0x29eaa0;
    ~CCCounterLabel() = 0x29eab0;
@end

@interface ChallengesPage
    ~ChallengesPage() = 0x1db2b0;
    ~ChallengesPage() = 0x1db2e0;
    bool init() = 0x1db520;
    void registerWithTouchDispatcher() = 0x1dcc50;
    void keyBackClicked() = 0x1dcbc0;
    void show() = 0x1dca10;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x1dcba0;
    void challengeStatusFinished() = 0x1dc520;
    void challengeStatusFailed() = 0x1dc830;
    void currencyWillExit(CurrencyRewardLayer*) = 0x1dcdb0;
@end

@interface CurrencySprite
    ~CurrencySprite() = 0x44b5e0;
    ~CurrencySprite() = 0x44b650;
@end

@interface CustomListView
    ~CustomListView() = 0x10d370;
    ~CustomListView() = 0x10d3a0;
    void setupList() = 0x116e70;
    void getListCell(char const*) = 0x10d560;
    void loadCell(TableViewCell*, int) = 0x10e610;
@end

@interface CustomSongCell
    ~CustomSongCell() = 0x11c320;
    ~CustomSongCell() = 0x11c350;
    bool init() = 0x11c440;
    void draw() = 0x11c5c0;
@end

@interface DailyLevelNode
    ~DailyLevelNode() = 0x10aaa0;
    ~DailyLevelNode() = 0x10ab20;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x10b750;
@end

@interface DailyLevelPage
    ~DailyLevelPage() = 0x108a20;
    ~DailyLevelPage() = 0x108a50;
    void registerWithTouchDispatcher() = 0x10a6f0;
    void keyBackClicked() = 0x10a660;
    void show() = 0x10a4b0;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x10a640;
    void dailyStatusFinished(bool) = 0x109be0;
    void dailyStatusFailed(bool) = 0x10a090;
    void levelDownloadFinished(GJGameLevel*) = 0x10a1b0;
    void levelDownloadFailed(int) = 0x10a280;
@end

@interface EditLevelLayer
    ~EditLevelLayer() = 0xe1d70;
    ~EditLevelLayer() = 0xe1da0;
    void keyBackClicked() = 0xe6670;
    void keyDown(cocos2d::enumKeyCodes) = 0xe66a0;
    void setIDPopupClosed(SetIDPopup*, int) = 0xe6560;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0xe5e70;
    void textInputOpened(CCTextInputNode*) = 0xe5540;
    void textInputClosed(CCTextInputNode*) = 0xe51e0;
    void textChanged(CCTextInputNode*) = 0xe57a0;
    void uploadActionFinished(int, int) = 0xe6740;
    void uploadActionFailed(int, int) = 0xe68c0;
    void onClosePopup(UploadActionPopup*) = 0xe66f0;
@end

@interface GJMessagePopup
    ~GJMessagePopup() = 0x14e9a0;
    ~GJMessagePopup() = 0x14e9d0;
    void keyBackClicked() = 0x1504a0;
    void downloadMessageFinished(GJUserMessage*) = 0x150510;
    void downloadMessageFailed(int) = 0x1505e0;
    void uploadActionFinished(int, int) = 0x150680;
    void uploadActionFailed(int, int) = 0x150820;
    void onClosePopup(UploadActionPopup*) = 0x150900;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x150a00;
@end

@interface GJOptionsLayer
    ~GJOptionsLayer() = 0x145a40;
    ~GJOptionsLayer() = 0x145a70;
    bool init() = 0x145c60;
    void keyBackClicked() = 0x147190;
    void setupOptions() = 0x1464d0;
    void onClose(cocos2d::CCObject*) = 0x147160;
@end

@interface GJRewardObject
    ~GJRewardObject() = 0x4e170;
    ~GJRewardObject() = 0x4e180;
    void encodeWithCoder(DS_Dictionary*) = 0x4d170;
    void canEncode() = 0x4d1f0;
@end

@interface GJScaleControl
    ~GJScaleControl() = 0x32180;
    ~GJScaleControl() = 0x32190;
    bool init() = 0x31b30;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x31d30;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x31e60;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x31fb0;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x32060;
@end

@interface GJSearchObject
    ~GJSearchObject() = 0x2decb0;
    ~GJSearchObject() = 0x2ded60;
@end

@interface GJSpiderSprite
    ~GJSpiderSprite() = 0x34c4a0;
    ~GJSpiderSprite() = 0x34c520;
    bool init() = 0x34c700;
@end

@interface GameObjectCopy
    ~GameObjectCopy() = 0xa3290;
    ~GameObjectCopy() = 0xa32e0;
@end

@interface HSVWidgetPopup
    ~HSVWidgetPopup() = 0x236890;
    ~HSVWidgetPopup() = 0x236a30;
    void keyBackClicked() = 0x2371e0;
@end

@interface LevelInfoLayer
    ~LevelInfoLayer() = 0x15f1b0;
    ~LevelInfoLayer() = 0x15f1e0;
    void keyBackClicked() = 0x166160;
    void keyDown(cocos2d::enumKeyCodes) = 0x166190;
    void numberInputClosed(NumberInputLayer*) = 0x1657a0;
    void levelDownloadFinished(GJGameLevel*) = 0x164c00;
    void levelDownloadFailed(int) = 0x164d50;
    void levelUpdateFinished(GJGameLevel*, UpdateResponse) = 0x164e60;
    void levelUpdateFailed(int) = 0x165010;
    void levelDeleteFinished(int) = 0x165120;
    void levelDeleteFailed(int) = 0x165230;
    void rateLevelClosed() = 0x165e60;
    void likedItem(LikeItemType, int, bool) = 0x165e90;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x165f90;
    void setIDPopupClosed(SetIDPopup*, int) = 0x163e60;
@end

@interface RateDemonLayer
    ~RateDemonLayer() = 0x12dfc0;
    ~RateDemonLayer() = 0x12dff0;
    void keyBackClicked() = 0x12ec20;
    void uploadActionFinished(int, int) = 0x12e960;
    void uploadActionFailed(int, int) = 0x12ea40;
    void onClosePopup(UploadActionPopup*) = 0x12eb40;
@end

@interface RateLevelLayer
    ~RateLevelLayer() = 0x2e1a60;
    ~RateLevelLayer() = 0x2e1a90;
    void keyBackClicked() = 0x2e2250;
@end

@interface RateStarsLayer
    ~RateStarsLayer() = 0x135db0;
    ~RateStarsLayer() = 0x135de0;
    void keyBackClicked() = 0x136ec0;
    void uploadActionFinished(int, int) = 0x136c10;
    void uploadActionFailed(int, int) = 0x136cf0;
    void onClosePopup(UploadActionPopup*) = 0x136de0;
@end

@interface ScrollingLayer
    ~ScrollingLayer() = 0x41b150;
    ~ScrollingLayer() = 0x41b160;
    void draw() = 0x41abc0;
    void visit() = 0x41acb0;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x41ae10;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x41afb0;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x41b0d0;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x41b110;
@end

@interface SelectArtLayer
    ~SelectArtLayer() = 0xac9c0;
    ~SelectArtLayer() = 0xac9f0;
    void keyBackClicked() = 0xad440;
@end

@interface SetFolderPopup
    ~SetFolderPopup() = 0x155480;
    ~SetFolderPopup() = 0x1554b0;
    void valueChanged() = 0x155d40;
    void setTextPopupClosed(SetTextPopup*, std::string) = 0x1561b0;
@end

@interface SetItemIDLayer
    ~SetItemIDLayer() = 0x5a790;
    ~SetItemIDLayer() = 0x5a7c0;
    void keyBackClicked() = 0x5bb90;
    void show() = 0x5bb40;
    void textInputClosed(CCTextInputNode*) = 0x5b9e0;
    void textChanged(CCTextInputNode*) = 0x5ba20;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x5bca0;
    void textInputReturn(CCTextInputNode*) = 0x5bd60;
@end

@interface SongInfoObject
    ~SongInfoObject() = 0x2f2040;
    ~SongInfoObject() = 0x2f2050;
    void encodeWithCoder(DS_Dictionary*) = 0x2f2c70;
    void canEncode() = 0x2f2da0;
@end

@interface StartPosObject
    ~StartPosObject() = 0xda6d0;
    ~StartPosObject() = 0xda740;
    bool init() = 0xda8a0;
    void getSaveString() = 0xda960;
@end

@interface WorldLevelPage
    ~WorldLevelPage() = 0x202e70;
    ~WorldLevelPage() = 0x202ea0;
    void keyBackClicked() = 0x204300;
    void show() = 0x2041c0;
@end

@interface AchievementCell
    ~AchievementCell() = 0x120490;
    ~AchievementCell() = 0x1204a0;
    bool init() = 0x117730;
    void draw() = 0x117740;
@end

@interface BoomScrollLayer
    ~BoomScrollLayer() = 0x1e2d40;
    ~BoomScrollLayer() = 0x1e2d70;
    void visit() = 0x1e2f80;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e3c40;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e3d90;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e3ff0;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e3b40;
    void registerWithTouchDispatcher() = 0x1e3970;
@end

@interface CCNodeContainer
    ~CCNodeContainer() = 0xba9b0;
    ~CCNodeContainer() = 0xba9c0;
    bool init() = 0xba950;
    void visit() = 0xba960;
@end

@interface CCSpriteWithHue
    ~CCSpriteWithHue() = 0x35a7c0;
    ~CCSpriteWithHue() = 0x35a7d0;
    void draw() = 0x35a400;
    void initWithTexture(cocos2d::CCTexture2D*) = 0x359d10;
    void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&) = 0x359d80;
    void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool) = 0x359b80;
    void initWithSpriteFrame(cocos2d::CCSpriteFrame*) = 0x359da0;
    void updateColor() = 0x359f70;
@end

@interface CCTextInputNode
    ~CCTextInputNode() = 0x5ceb0;
    ~CCTextInputNode() = 0x5cf00;
    void visit() = 0x5d380;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x5ec80;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x5eea0;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x5ee60;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x5ee80;
    void registerWithTouchDispatcher() = 0x5eec0;
    void textChanged() = 0x5dd70;
    void onClickTrackNode(bool) = 0x5dd40;
    void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5dad0;
    void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5dc20;
    void onTextFieldInsertText(cocos2d::CCTextFieldTTF*, char const*, int) = 0x5de50;
    void onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF*) = 0x5e2c0;
    void onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF*) = 0x5e610;
@end

@interface CustomSongLayer
    ~CustomSongLayer() = 0xf0490;
    ~CustomSongLayer() = 0xf04c0;
    void keyBackClicked() = 0xf21c0;
    void show() = 0xf22a0;
    void textChanged(CCTextInputNode*) = 0xf1fb0;
    void textInputOpened(CCTextInputNode*) = 0xf1f10;
    void textInputClosed(CCTextInputNode*) = 0xf1e70;
    void textInputShouldOffset(CCTextInputNode*, float) = 0xf1fd0;
    void textInputReturn(CCTextInputNode*) = 0xf2090;
    void dropDownLayerWillClose(GJDropDownLayer*) = 0xf2140;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0xf1be0;
@end

@interface EndPortalObject
    ~EndPortalObject() = 0x1db080;
    ~EndPortalObject() = 0x1db090;
    bool init() = 0x1da980;
    void setPosition(cocos2d::CCPoint const&) = 0x1dae70;
    void setVisible(bool) = 0x1daf30;
    void triggerObject(GJBaseGameLayer*) = 0x1dadc0;
    void calculateSpawnXPos() = 0x1dae50;
@end

@interface FileSaveManager
    ~FileSaveManager() = 0x68d0;
    ~FileSaveManager() = 0x68e0;
    bool init() = 0x6360;
    void firstLoad() = 0x6390;
@end

@interface GJBaseGameLayer
    ~GJBaseGameLayer() = 0xafbf0;
    ~GJBaseGameLayer() = 0xafc20;
    bool init() = 0xafc90;
    void objectsCollided(int, int) = 0xb6d90;
    void createMoveCommand(cocos2d::CCPoint, int, float, int, float, bool, bool, int) = 0xb73a0;
    void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*) = 0xb7420;
    void flipGravity(PlayerObject*, bool, bool) = 0xba990;
    void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*) = 0xba9a0;
    void toggleGroupTriggered(int, bool) = 0xb75a0;
    void spawnGroup(int) = 0xb7050;
    void addToSection(GameObject*) = 0xb7b70;
    void addToGroup(GameObject*, int, bool) = 0xb77f0;
    void removeFromGroup(GameObject*, int) = 0xb7a60;
@end

@interface GJChallengeItem
    ~GJChallengeItem() = 0x4e1b0;
    ~GJChallengeItem() = 0x4e200;
    void encodeWithCoder(DS_Dictionary*) = 0x4df60;
    void canEncode() = 0x4e020;
@end

@interface GJDropDownLayer
    ~GJDropDownLayer() = 0x351d00;
    ~GJDropDownLayer() = 0x351ea0;
    void draw() = 0x352910;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x352940;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x3529a0;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x352960;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x352980;
    void registerWithTouchDispatcher() = 0x3525f0;
    void keyBackClicked() = 0x352630;
    void customSetup() = 0x352570;
    void enterLayer() = 0x3525c0;
    void exitLayer(cocos2d::CCObject*) = 0x352670;
    void showLayer(bool) = 0x3526c0;
    void hideLayer(bool) = 0x3527b0;
    void layerVisible() = 0x3528b0;
    void layerHidden() = 0x3528d0;
    void enterAnimFinished() = 0x3528a0;
    void disableUI() = 0x352580;
    void enableUI() = 0x3525a0;
@end

@interface GJEffectManager
    ~GJEffectManager() = 0x1800b0;
    ~GJEffectManager() = 0x1800c0;
    bool init() = 0x180230;
@end

@interface GJFriendRequest
    ~GJFriendRequest() = 0x2de830;
    ~GJFriendRequest() = 0x2de8b0;
    bool init() = 0x2dea00;
@end

@interface GJObjectDecoder
    ~GJObjectDecoder() = 0x41e890;
    ~GJObjectDecoder() = 0x41e8a0;
    bool init() = 0x41e780;
    void getDecodedObject(int, DS_Dictionary*) = 0x41e790;
@end

@interface InfoAlertButton
    ~InfoAlertButton() = 0x2ece40;
    ~InfoAlertButton() = 0x2eced0;
    void activate() = 0x2ecd70;
@end

@interface LabelGameObject
    ~LabelGameObject() = 0xdb7e0;
    ~LabelGameObject() = 0xdb850;
    bool init() = 0xdb990;
    void setOpacity(unsigned char) = 0xdba40;
    void setupCustomSprites() = 0xdb9b0;
    void addMainSpriteToParent(bool) = 0xdbce0;
    void getSaveString() = 0xdbd50;
    void setObjectColor(cocos2d::_ccColor3B const&) = 0xdbca0;
@end

@interface MoreSearchLayer
    ~MoreSearchLayer() = 0x389610;
    ~MoreSearchLayer() = 0x389640;
    bool init() = 0x3896b0;
    void keyBackClicked() = 0x38b820;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x38b6b0;
    void textInputReturn(CCTextInputNode*) = 0x38b770;
@end

@interface RetryLevelLayer
    ~RetryLevelLayer() = 0x28dde0;
    ~RetryLevelLayer() = 0x28de10;
    void keyBackClicked() = 0x28ed10;
    void keyDown(cocos2d::enumKeyCodes) = 0x28ec30;
    void customSetup() = 0x28de80;
    void showLayer(bool) = 0x28eaf0;
    void enterAnimFinished() = 0x28ebf0;
    void keyUp(cocos2d::enumKeyCodes) = 0x28ecf0;
@end

@interface SelectFontLayer
    ~SelectFontLayer() = 0x143b80;
    ~SelectFontLayer() = 0x143bb0;
    void keyBackClicked() = 0x1445f0;
@end

@interface SetGroupIDLayer
    ~SetGroupIDLayer() = 0x194520;
    ~SetGroupIDLayer() = 0x194550;
    void keyBackClicked() = 0x198050;
    void textInputClosed(CCTextInputNode*) = 0x197ab0;
    void textChanged(CCTextInputNode*) = 0x197af0;
@end

@interface SetupPulsePopup
    ~SetupPulsePopup() = 0x1e6ca0;
    ~SetupPulsePopup() = 0x1e6cd0;
    void keyBackClicked() = 0x1ec840;
    void show() = 0x1ec870;
    void colorValueChanged(cocos2d::_ccColor3B) = 0x1ec680;
    void textInputOpened(CCTextInputNode*) = 0x1ec900;
    void textInputClosed(CCTextInputNode*) = 0x1ec920;
    void textChanged(CCTextInputNode*) = 0x1ec960;
    void colorSelectClosed(GJSpecialColorSelect*, int) = 0x1ebf20;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x1ecf20;
    void textInputReturn(CCTextInputNode*) = 0x1ecfe0;
@end

@interface SetupShakePopup
    ~SetupShakePopup() = 0x3adb60;
    ~SetupShakePopup() = 0x3adb90;
    void keyBackClicked() = 0x3b00d0;
    void show() = 0x3b0080;
    void textInputClosed(CCTextInputNode*) = 0x3afc80;
    void textChanged(CCTextInputNode*) = 0x3afcc0;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x3b0260;
    void textInputReturn(CCTextInputNode*) = 0x3b0320;
@end

@interface SetupSpawnPopup
    ~SetupSpawnPopup() = 0x1396f0;
    ~SetupSpawnPopup() = 0x139720;
    void keyBackClicked() = 0x13bc50;
    void show() = 0x13bc00;
    void textInputClosed(CCTextInputNode*) = 0x13b950;
    void textChanged(CCTextInputNode*) = 0x13b990;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x13bda0;
    void textInputReturn(CCTextInputNode*) = 0x13be60;
@end

@interface ShareLevelLayer
    ~ShareLevelLayer() = 0x129e50;
    ~ShareLevelLayer() = 0x129e80;
    void keyBackClicked() = 0x12b830;
@end

@interface TopArtistsLayer
    ~TopArtistsLayer() = 0x1929f0;
    ~TopArtistsLayer() = 0x192a20;
    bool init() = 0x192c30;
    void registerWithTouchDispatcher() = 0x1935b0;
    void keyBackClicked() = 0x193540;
    void show() = 0x193e40;
    void loadListFinished(cocos2d::CCArray*, char const*) = 0x193600;
    void loadListFailed(char const*) = 0x1936f0;
    void setupPageInfo(std::string, char const*) = 0x193730;
@end

@interface AccountHelpLayer
    ~AccountHelpLayer() = 0x83b50;
    ~AccountHelpLayer() = 0x83d50;
    void customSetup() = 0x83e80;
    void layerHidden() = 0x84b60;
    void accountStatusChanged() = 0x84a20;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x84a50;
@end

@interface CCAnimatedSprite
    ~CCAnimatedSprite() = 0x1a6db0;
    ~CCAnimatedSprite() = 0x1a6dc0;
    void setOpacity(unsigned char) = 0x1a6af0;
    void animationFinished(char const*) = 0x1a6ad0;
    void animationFinishedO(cocos2d::CCObject*) = 0x1a6aa0;
@end

@interface CCContentManager
    ~CCContentManager() = 0xc6960;
    ~CCContentManager() = 0xc69b0;
@end

@interface CCPartAnimSprite
    ~CCPartAnimSprite() = 0x1c04c0;
    ~CCPartAnimSprite() = 0x1c04d0;
    void setScaleX(float) = 0x1bff50;
    void setScaleY(float) = 0x1bff70;
    void setScale(float) = 0x1bff30;
    void setOpacity(unsigned char) = 0x1c01d0;
    void setBlendFunc(cocos2d::_ccBlendFunc) = 0x1bff90;
    void setDisplayFrame(cocos2d::CCSpriteFrame*) = 0x1bfa40;
    void isFrameDisplayed(cocos2d::CCSpriteFrame*) = 0x1bfc20;
    void displayFrame() = 0x1bfc40;
@end

@interface CCScrollLayerExt
    ~CCScrollLayerExt() = 0x2359b0;
    ~CCScrollLayerExt() = 0x235af0;
    void visit() = 0x236550;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x235ef0;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x236300;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x236020;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2362a0;
    void registerWithTouchDispatcher() = 0x235eb0;
    void preVisitWithClippingRect(cocos2d::CCRect) = 0x2366a0;
    void postVisit() = 0x236720;
@end

@interface CheckpointObject
    ~CheckpointObject() = 0x808e0;
    ~CheckpointObject() = 0x808f0;
    bool init() = 0x80920;
@end

@interface ColorSelectPopup
    ~ColorSelectPopup() = 0x41ead0;
    ~ColorSelectPopup() = 0x41eb00;
    void keyBackClicked() = 0x423540;
    void show() = 0x423570;
    void colorValueChanged(cocos2d::_ccColor3B) = 0x423320;
    void textInputClosed(CCTextInputNode*) = 0x423820;
    void textChanged(CCTextInputNode*) = 0x423860;
    void colorSelectClosed(GJSpecialColorSelect*, int) = 0x423c80;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x423fa0;
    void textInputReturn(CCTextInputNode*) = 0x424060;
@end

@interface CustomSongWidget
    ~CustomSongWidget() = 0x37bb90;
    ~CustomSongWidget() = 0x37bc20;
    void loadSongInfoFinished(SongInfoObject*) = 0x37e400;
    void loadSongInfoFailed(int, GJSongError) = 0x37e5a0;
    void downloadSongFinished(SongInfoObject*) = 0x37e7b0;
    void downloadSongFailed(int, GJSongError) = 0x37e8c0;
    void songStateChanged() = 0x37e390;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x37ea00;
@end

@interface EditorPauseLayer
    ~EditorPauseLayer() = 0x13c3b0;
    ~EditorPauseLayer() = 0x13c570;
    void keyBackClicked() = 0x13f320;
    void keyDown(cocos2d::enumKeyCodes) = 0x13f3a0;
    void customSetup() = 0x13cc00;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x13f1b0;
@end

@interface EffectGameObject
    ~EffectGameObject() = 0xc9750;
    ~EffectGameObject() = 0xc9760;
    void customSetup() = 0xca370;
    void triggerObject(GJBaseGameLayer*) = 0xc9870;
    void getSaveString() = 0xcd7e0;
    void triggerActivated(float) = 0xca310;
    void spawnXPosition() = 0xca2d0;
@end

@interface FollowRewardPage
    ~FollowRewardPage() = 0x22f270;
    ~FollowRewardPage() = 0x22f2a0;
    bool init() = 0x22f4a0;
    void registerWithTouchDispatcher() = 0x230eb0;
    void keyBackClicked() = 0x230e40;
    void show() = 0x230c10;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x230da0;
    void updateRate() = 0x230950;
@end

@interface GJAccountManager
    ~GJAccountManager() = 0x87990;
    ~GJAccountManager() = 0x879a0;
    bool init() = 0x879d0;
@end

@interface GJFlyGroundLayer
    ~GJFlyGroundLayer() = 0x356cd0;
    ~GJFlyGroundLayer() = 0x356ce0;
    bool init() = 0x356c00;
@end

@interface GJLevelScoreCell
    ~GJLevelScoreCell() = 0x11da90;
    ~GJLevelScoreCell() = 0x11dac0;
    bool init() = 0x11dbb0;
    void draw() = 0x11dc00;
@end

@interface GJMoreGamesLayer
    ~GJMoreGamesLayer() = 0x43a790;
    ~GJMoreGamesLayer() = 0x43a7c0;
    void customSetup() = 0x43ae60;
@end

@interface GameLevelManager
    ~GameLevelManager() = 0x2b7b60;
    ~GameLevelManager() = 0x2b7b70;
    bool init() = 0x2b7ba0;
@end

@interface GameSoundManager
    ~GameSoundManager() = 0x362cc0;
    ~GameSoundManager() = 0x362cd0;
    bool init() = 0x3611d0;
@end

@interface GameStatsManager
    ~GameStatsManager() = 0x392f0;
    ~GameStatsManager() = 0x39300;
    bool init() = 0x39330;
@end

@interface GhostTrailEffect
    ~GhostTrailEffect() = 0x360600;
    ~GhostTrailEffect() = 0x360610;
    bool init() = 0x360730;
    void draw() = 0x360d20;
@end

@interface KeybindingsLayer
    ~KeybindingsLayer() = 0x375460;
    ~KeybindingsLayer() = 0x375600;
    bool init() = 0x375890;
    void keyBackClicked() = 0x376f30;
@end

@interface LevelEditorLayer
    ~LevelEditorLayer() = 0x90e80;
    ~LevelEditorLayer() = 0x90eb0;
    void update(float) = 0xa1b70;
    void draw() = 0xa2a70;
    void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*) = 0x9c200;
    void flipGravity(PlayerObject*, bool, bool) = 0xa04e0;
    void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*) = 0x9c590;
    void addToGroup(GameObject*, int, bool) = 0x9dab0;
    void removeFromGroup(GameObject*, int) = 0x9db60;
    void timeForXPos(float) = 0x9c7d0;
    void xPosForTime(float) = 0x9c800;
    void levelSettingsUpdated() = 0x93f30;
@end

@interface LevelLeaderboard
    ~LevelLeaderboard() = 0x20d4b0;
    ~LevelLeaderboard() = 0x20d4e0;
    void registerWithTouchDispatcher() = 0x20e7a0;
    void keyBackClicked() = 0x20e730;
    void show() = 0x20ec40;
    void loadLeaderboardFinished(cocos2d::CCArray*, char const*) = 0x20e980;
    void loadLeaderboardFailed(char const*) = 0x20ead0;
    void updateUserScoreFinished() = 0x20e660;
    void updateUserScoreFailed() = 0x20e690;
@end

@interface LevelSearchLayer
    ~LevelSearchLayer() = 0x384430;
    ~LevelSearchLayer() = 0x384460;
    bool init() = 0x384770;
    void keyBackClicked() = 0x3891f0;
    void textInputOpened(CCTextInputNode*) = 0x3885f0;
    void textInputClosed(CCTextInputNode*) = 0x3887f0;
    void textChanged(CCTextInputNode*) = 0x388910;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x388580;
    void demonFilterSelectClosed(int) = 0x388040;
@end

@interface LevelSelectLayer
    ~LevelSelectLayer() = 0x2381d0;
    ~LevelSelectLayer() = 0x238200;
    void keyBackClicked() = 0x23a5e0;
    void keyDown(cocos2d::enumKeyCodes) = 0x23a680;
    void updatePageWithObject(cocos2d::CCObject*, cocos2d::CCObject*) = 0x2390a0;
    void scrollLayerMoved(cocos2d::CCPoint) = 0x23a100;
@end

@interface MoreOptionsLayer
    ~MoreOptionsLayer() = 0x43f3d0;
    ~MoreOptionsLayer() = 0x43f400;
    bool init() = 0x43f470;
    void keyBackClicked() = 0x441f50;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x4420a0;
    void textInputReturn(CCTextInputNode*) = 0x442160;
    void googlePlaySignedIn() = 0x442210;
@end

@interface NumberInputLayer
    ~NumberInputLayer() = 0x255db0;
    ~NumberInputLayer() = 0x255de0;
    bool init() = 0x255ff0;
    void registerWithTouchDispatcher() = 0x256a70;
    void keyBackClicked() = 0x2569c0;
@end

@interface PlayerCheckpoint
    ~PlayerCheckpoint() = 0x80760;
    ~PlayerCheckpoint() = 0x80770;
    bool init() = 0x807a0;
@end

@interface SetTargetIDLayer
    ~SetTargetIDLayer() = 0x159c80;
    ~SetTargetIDLayer() = 0x159cb0;
    void keyBackClicked() = 0x15b990;
    void show() = 0x15b940;
    void textInputClosed(CCTextInputNode*) = 0x15b680;
    void textChanged(CCTextInputNode*) = 0x15b6c0;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x15baa0;
    void textInputReturn(CCTextInputNode*) = 0x15bb60;
@end

@interface SetupRotatePopup
    ~SetupRotatePopup() = 0x2f2f80;
    ~SetupRotatePopup() = 0x2f2fb0;
    void keyBackClicked() = 0x2f47c0;
    void show() = 0x2f4770;
    void textInputClosed(CCTextInputNode*) = 0x2f45d0;
    void textChanged(CCTextInputNode*) = 0x2f4610;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x2f48b0;
    void textInputReturn(CCTextInputNode*) = 0x2f4970;
@end

@interface SliderTouchLogic
    ~SliderTouchLogic() = 0x18e690;
    ~SliderTouchLogic() = 0x18e6a0;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x18d630;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x18d760;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x18d730;
    void registerWithTouchDispatcher() = 0x18da90;
@end

@interface SongOptionsLayer
    ~SongOptionsLayer() = 0xf2460;
    ~SongOptionsLayer() = 0xf2490;
    void keyBackClicked() = 0xf33c0;
@end

@interface WorldSelectLayer
    ~WorldSelectLayer() = 0x1ff360;
    ~WorldSelectLayer() = 0x1ff390;
    void onExit() = 0x201320;
    void keyBackClicked() = 0x201250;
    void scrollLayerWillScrollToPage(BoomScrollLayer*, int) = 0x201140;
    void scrollLayerScrolledToPage(BoomScrollLayer*, int) = 0x201030;
    void scrollLayerMoved(cocos2d::CCPoint) = 0x201370;
@end

@interface AccountLoginLayer
    ~AccountLoginLayer() = 0x25b7e0;
    ~AccountLoginLayer() = 0x25b810;
    void registerWithTouchDispatcher() = 0x25d7e0;
    void keyBackClicked() = 0x25d6a0;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x25d4d0;
    void textInputOpened(CCTextInputNode*) = 0x25d9c0;
    void textInputClosed(CCTextInputNode*) = 0x25d820;
    void textChanged(CCTextInputNode*) = 0x25d9e0;
    void loginAccountFinished(int, int) = 0x25ce20;
    void loginAccountFailed(AccountError) = 0x25d190;
@end

@interface AchievementsLayer
    ~AchievementsLayer() = 0x1bde00;
    ~AchievementsLayer() = 0x1bde30;
    void keyDown(cocos2d::enumKeyCodes) = 0x1be380;
    void customSetup() = 0x1bdea0;
@end

@interface AudioEffectsLayer
    ~AudioEffectsLayer() = 0x271750;
    ~AudioEffectsLayer() = 0x2718f0;
    void draw() = 0x2722a0;
    void updateTweenAction(float, char const*) = 0x272170;
@end

@interface CCMenuItemToggler
    ~CCMenuItemToggler() = 0x38c90;
    ~CCMenuItemToggler() = 0x38ca0;
    void activate() = 0x38bc0;
    void selected() = 0x38b80;
    void unselected() = 0x38c00;
    void setEnabled(bool) = 0x38c40;
@end

@interface ColorActionSprite
    ~ColorActionSprite() = 0x18b420;
    ~ColorActionSprite() = 0x18b430;
    bool init() = 0x175370;
@end

@interface DungeonBarsSprite
    ~DungeonBarsSprite() = 0x26c4c0;
    ~DungeonBarsSprite() = 0x26c4d0;
    bool init() = 0x26c2b0;
    void visit() = 0x26c330;
@end

@interface EditTriggersPopup
    ~EditTriggersPopup() = 0x1447b0;
    ~EditTriggersPopup() = 0x1447e0;
    void keyBackClicked() = 0x1458a0;
    void show() = 0x145850;
@end

@interface GJColorSetupLayer
    ~GJColorSetupLayer() = 0xef350;
    ~GJColorSetupLayer() = 0xef380;
    void keyBackClicked() = 0xf0210;
    void colorSelectClosed(cocos2d::CCNode*) = 0xf01e0;
@end

@interface GJRotationControl
    ~GJRotationControl() = 0x320e0;
    ~GJRotationControl() = 0x320f0;
    bool init() = 0x31510;
    void draw() = 0x31ac0;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x31790;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x318b0;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x31990;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x31a80;
@end

@interface GooglePlayManager
    ~GooglePlayManager() = 0x246050;
    ~GooglePlayManager() = 0x246070;
    bool init() = 0x246130;
@end

@interface LeaderboardsLayer
    ~LeaderboardsLayer() = 0x29f190;
    ~LeaderboardsLayer() = 0x29f320;
    void keyBackClicked() = 0x2a11c0;
    void updateUserScoreFinished() = 0x2a07c0;
    void updateUserScoreFailed() = 0x2a0820;
    void loadLeaderboardFinished(cocos2d::CCArray*, char const*) = 0x2a08c0;
    void loadLeaderboardFailed(char const*) = 0x2a0fa0;
@end

@interface LevelBrowserLayer
    ~LevelBrowserLayer() = 0x251130;
    ~LevelBrowserLayer() = 0x251160;
    void onEnter() = 0x255b70;
    void onEnterTransitionDidFinish() = 0x255be0;
    void keyBackClicked() = 0x255630;
    void keyDown(cocos2d::enumKeyCodes) = 0x255680;
    void loadLevelsFinished(cocos2d::CCArray*, char const*) = 0x254e10;
    void loadLevelsFailed(char const*) = 0x254f60;
    void setupPageInfo(std::string, char const*) = 0x255050;
    void setTextPopupClosed(SetTextPopup*, std::string) = 0x255760;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x255840;
    void setIDPopupClosed(SetIDPopup*, int) = 0x2554f0;
@end

@interface LevelFeatureLayer
    ~LevelFeatureLayer() = 0x296c30;
    ~LevelFeatureLayer() = 0x296c60;
    void keyBackClicked() = 0x297a00;
@end

@interface LocalLevelManager
    ~LocalLevelManager() = 0x35df80;
    ~LocalLevelManager() = 0x35df90;
    bool init() = 0x35dfc0;
    void encodeDataTo(DS_Dictionary*) = 0x35ed60;
    void dataLoaded(DS_Dictionary*) = 0x35eda0;
    void firstLoad() = 0x35ed10;
@end

@interface PromoInterstitial
    ~PromoInterstitial() = 0x16a270;
    ~PromoInterstitial() = 0x16a2a0;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x169e80;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x16a0c0;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x169fa0;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x16a040;
    void keyBackClicked() = 0x169cf0;
    void show() = 0x169cc0;
@end

@interface PurchaseItemPopup
    ~PurchaseItemPopup() = 0x1a2460;
    ~PurchaseItemPopup() = 0x1a25e0;
    void keyBackClicked() = 0x1a2fc0;
@end

@interface RewardUnlockLayer
    ~RewardUnlockLayer() = 0xf51a0;
    ~RewardUnlockLayer() = 0xf51d0;
    void keyBackClicked() = 0xf81b0;
    void currencyWillExit(CurrencyRewardLayer*) = 0xf8170;
@end

@interface SecretNumberLayer
    ~SecretNumberLayer() = 0x266b90;
    ~SecretNumberLayer() = 0x266bc0;
    bool init() = 0x266c30;
@end

@interface SetupOpacityPopup
    ~SetupOpacityPopup() = 0x32ad0;
    ~SetupOpacityPopup() = 0x32b00;
    void keyBackClicked() = 0x34bf0;
    void show() = 0x34ba0;
    void textInputClosed(CCTextInputNode*) = 0x34a20;
    void textChanged(CCTextInputNode*) = 0x34a60;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x34e50;
    void textInputReturn(CCTextInputNode*) = 0x34f10;
@end

@interface ShareCommentLayer
    ~ShareCommentLayer() = 0x34eb90;
    ~ShareCommentLayer() = 0x34ebc0;
    void registerWithTouchDispatcher() = 0x350590;
    void keyBackClicked() = 0x3504e0;
    void textInputOpened(CCTextInputNode*) = 0x350690;
    void textInputClosed(CCTextInputNode*) = 0x3505d0;
    void textChanged(CCTextInputNode*) = 0x3507b0;
    void uploadActionFinished(int, int) = 0x3509f0;
    void uploadActionFailed(int, int) = 0x350ad0;
    void onClosePopup(UploadActionPopup*) = 0x350ba0;
@end

@interface SpriteDescription
    ~SpriteDescription() = 0x2e6c00;
    ~SpriteDescription() = 0x2e6c50;
@end

@interface TableViewDelegate
    void willTweenToIndexPath(CCIndexPath&, TableViewCell*, TableView*) = 0x120460;
    void didEndTweenToIndexPath(CCIndexPath&, TableView*) = 0x120470;
    void TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) = 0x120480;
@end

@interface TextInputDelegate
    void textChanged(CCTextInputNode*) = 0x1573f0;
    void textInputOpened(CCTextInputNode*) = 0x6200;
    void textInputClosed(CCTextInputNode*) = 0x157400;
    void textInputShouldOffset(CCTextInputNode*, float) = 0xe1810;
    void textInputReturn(CCTextInputNode*) = 0xe1820;
    void allowTextInput(CCTextInputNode*) = 0x6210;
@end

@interface UploadActionPopup
    ~UploadActionPopup() = 0x14be50;
    ~UploadActionPopup() = 0x14bff0;
    void keyBackClicked() = 0x14ca10;
@end

@interface VideoOptionsLayer
    ~VideoOptionsLayer() = 0x4423c0;
    ~VideoOptionsLayer() = 0x4423f0;
    bool init() = 0x442460;
    void keyBackClicked() = 0x443f50;
@end

@interface AchievementManager
    ~AchievementManager() = 0x434b90;
    ~AchievementManager() = 0x434ba0;
    bool init() = 0x4244c0;
@end

@interface AnimatedGameObject
    ~AnimatedGameObject() = 0xc79b0;
    ~AnimatedGameObject() = 0xc79c0;
    void setOpacity(unsigned char) = 0xc8640;
    void resetObject() = 0xc9720;
    void activateObject() = 0xc84d0;
    void deactivateObject(bool) = 0xc85e0;
    void setObjectColor(cocos2d::_ccColor3B const&) = 0xc8720;
    void animationFinished(char const*) = 0xc8750;
    void displayFrameChanged(cocos2d::CCObject*, std::string) = 0xc9160;
@end

@interface AnimatedShopKeeper
    ~AnimatedShopKeeper() = 0x1a3040;
    ~AnimatedShopKeeper() = 0x1a3050;
    void animationFinished(char const*) = 0x1a3130;
@end

@interface ColorChannelSprite
    ~ColorChannelSprite() = 0x18b3e0;
    ~ColorChannelSprite() = 0x18b3f0;
    bool init() = 0x16deb0;
@end

@interface ConfigureHSVWidget
    ~ConfigureHSVWidget() = 0x2372d0;
    ~ConfigureHSVWidget() = 0x2372e0;
@end

@interface EditorOptionsLayer
    ~EditorOptionsLayer() = 0x1471e0;
    ~EditorOptionsLayer() = 0x147210;
    bool init() = 0x147420;
    void setupOptions() = 0x147440;
    void onClose(cocos2d::CCObject*) = 0x147c30;
@end

@interface FriendRequestPopup
    ~FriendRequestPopup() = 0x14cc00;
    ~FriendRequestPopup() = 0x14cc30;
    void keyBackClicked() = 0x14e2a0;
    void uploadActionFinished(int, int) = 0x14e390;
    void uploadActionFailed(int, int) = 0x14e560;
    void onClosePopup(UploadActionPopup*) = 0x14e640;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x14e7c0;
@end

@interface FriendsProfilePage
    ~FriendsProfilePage() = 0x3a94d0;
    ~FriendsProfilePage() = 0x3a9500;
    void registerWithTouchDispatcher() = 0x3aa6e0;
    void keyBackClicked() = 0x3aa5e0;
    void getUserListFinished(cocos2d::CCArray*, UserListType) = 0x3aa240;
    void getUserListFailed(UserListType, GJErrorCode) = 0x3aa390;
    void userListChanged(cocos2d::CCArray*, UserListType) = 0x3aa4a0;
    void forceReloadList(UserListType) = 0x3aa4e0;
@end

@interface GJCommentListLayer
    ~GJCommentListLayer() = 0x1482a0;
    ~GJCommentListLayer() = 0x148440;
@end

@interface GJMoveCommandLayer
    ~GJMoveCommandLayer() = 0x36f800;
    ~GJMoveCommandLayer() = 0x36f830;
    void keyBackClicked() = 0x374970;
    void valuePopupClosed(ConfigureValuePopup*, float) = 0x373c20;
    void textInputClosed(CCTextInputNode*) = 0x374430;
    void textChanged(CCTextInputNode*) = 0x374470;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x374b50;
    void textInputReturn(CCTextInputNode*) = 0x374c10;
@end

@interface GameEffectsManager
    ~GameEffectsManager() = 0xe6a70;
    ~GameEffectsManager() = 0xe6a80;
@end

@interface GroupCommandObject
    ~GroupCommandObject() = 0x16e450;
    ~GroupCommandObject() = 0x16e4b0;
    bool init() = 0x16e590;
    void updateTweenAction(float, char const*) = 0x16ead0;
@end

@interface KeybindingsManager
    ~KeybindingsManager() = 0x289910;
    ~KeybindingsManager() = 0x289980;
    bool init() = 0x289a00;
@end

@interface LevelSettingsLayer
    ~LevelSettingsLayer() = 0xa7b90;
    ~LevelSettingsLayer() = 0xa7bc0;
    void registerWithTouchDispatcher() = 0xac070;
    void keyBackClicked() = 0xac7b0;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0xac260;
    void colorSelectClosed(cocos2d::CCNode*) = 0xac100;
    void customSongLayerClosed() = 0xac340;
    void selectArtClosed(SelectArtLayer*) = 0xac5e0;
@end

@interface AchievementNotifier
    ~AchievementNotifier() = 0x4651c0;
    ~AchievementNotifier() = 0x4651d0;
    bool init() = 0x464e90;
@end

@interface CCAnimateFrameCache
    ~CCAnimateFrameCache() = 0x2e4f90;
    ~CCAnimateFrameCache() = 0x2e4fa0;
@end

@interface CollisionBlockPopup
    ~CollisionBlockPopup() = 0x12ff70;
    ~CollisionBlockPopup() = 0x12ffa0;
    void keyBackClicked() = 0x1317e0;
    void show() = 0x131790;
    void textInputClosed(CCTextInputNode*) = 0x131630;
    void textChanged(CCTextInputNode*) = 0x131670;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x1318f0;
    void textInputReturn(CCTextInputNode*) = 0x1319b0;
@end

@interface CommunityCreditNode
    ~CommunityCreditNode() = 0x19ad00;
    ~CommunityCreditNode() = 0x19ad50;
@end

@interface ConfigureValuePopup
    ~ConfigureValuePopup() = 0x381ae0;
    ~ConfigureValuePopup() = 0x381ca0;
    void keyBackClicked() = 0x382c00;
    void textInputClosed(CCTextInputNode*) = 0x382a90;
    void textChanged(CCTextInputNode*) = 0x382ad0;
@end

@interface CurrencyRewardLayer
    ~CurrencyRewardLayer() = 0x447950;
    ~CurrencyRewardLayer() = 0x447aa0;
    void update(float) = 0x44a5c0;
@end

@interface EditGameObjectPopup
    ~EditGameObjectPopup() = 0x153600;
    ~EditGameObjectPopup() = 0x153630;
    void keyBackClicked() = 0x154070;
    void show() = 0x154020;
@end

@interface FRequestProfilePage
    ~FRequestProfilePage() = 0x435980;
    ~FRequestProfilePage() = 0x4359b0;
    void registerWithTouchDispatcher() = 0x437300;
    void keyBackClicked() = 0x4372d0;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x437200;
    void onClosePopup(UploadActionPopup*) = 0x437340;
    void uploadActionFinished(int, int) = 0x4373a0;
    void uploadActionFailed(int, int) = 0x437500;
    void loadFRequestsFinished(cocos2d::CCArray*, char const*) = 0x437840;
    void loadFRequestsFailed(char const*, GJErrorCode) = 0x437930;
    void setupPageInfo(std::string, char const*) = 0x437ab0;
    void forceReloadRequests(bool) = 0x437a60;
@end

@interface GJWriteMessagePopup
    ~GJWriteMessagePopup() = 0x150d50;
    ~GJWriteMessagePopup() = 0x150d80;
    void registerWithTouchDispatcher() = 0x1527b0;
    void keyBackClicked() = 0x152780;
    void textInputOpened(CCTextInputNode*) = 0x152830;
    void textInputClosed(CCTextInputNode*) = 0x1527f0;
    void textChanged(CCTextInputNode*) = 0x152990;
    void uploadMessageFinished(int) = 0x152fc0;
    void uploadMessageFailed(int) = 0x1530a0;
    void onClosePopup(UploadActionPopup*) = 0x153170;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x1532b0;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x153390;
    void textInputReturn(CCTextInputNode*) = 0x153450;
@end

@interface GauntletSelectLayer
    ~GauntletSelectLayer() = 0x2e91e0;
    ~GauntletSelectLayer() = 0x2e9210;
    void onExit() = 0x2eb490;
    void keyBackClicked() = 0x2eb370;
    void scrollLayerWillScrollToPage(BoomScrollLayer*, int) = 0x2eb260;
    void scrollLayerScrolledToPage(BoomScrollLayer*, int) = 0x2eb150;
    void loadLevelsFinished(cocos2d::CCArray*, char const*) = 0x2ea630;
    void loadLevelsFailed(char const*) = 0x2ea820;
@end

@interface GravityEffectSprite
    ~GravityEffectSprite() = 0x80d90;
    ~GravityEffectSprite() = 0x80da0;
    bool init() = 0x80b20;
    void draw() = 0x80d80;
@end

@interface LevelSettingsObject
    ~LevelSettingsObject() = 0xa5650;
    ~LevelSettingsObject() = 0xa5660;
    bool init() = 0xa5690;
@end

@interface MessagesProfilePage
    ~MessagesProfilePage() = 0x106360;
    ~MessagesProfilePage() = 0x106390;
    void registerWithTouchDispatcher() = 0x107eb0;
    void keyBackClicked() = 0x107e80;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x107b20;
    void onClosePopup(UploadActionPopup*) = 0x107b90;
    void uploadActionFinished(int, int) = 0x107bf0;
    void uploadActionFailed(int, int) = 0x107d50;
    void loadMessagesFinished(cocos2d::CCArray*, char const*) = 0x108150;
    void loadMessagesFailed(char const*, GJErrorCode) = 0x108280;
    void forceReloadMessages(bool) = 0x1083b0;
    void setupPageInfo(std::string, char const*) = 0x108400;
@end

@interface SetupAnimationPopup
    ~SetupAnimationPopup() = 0x208ad0;
    ~SetupAnimationPopup() = 0x208b00;
    void keyBackClicked() = 0x20ade0;
    void show() = 0x20ad90;
    void textInputClosed(CCTextInputNode*) = 0x20aaf0;
    void textChanged(CCTextInputNode*) = 0x20ab30;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x20af30;
    void textInputReturn(CCTextInputNode*) = 0x20aff0;
@end

@interface AccountRegisterLayer
    ~AccountRegisterLayer() = 0x257330;
    ~AccountRegisterLayer() = 0x257360;
    bool init() = 0x2575d0;
    void registerWithTouchDispatcher() = 0x25a910;
    void keyBackClicked() = 0x25a730;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x25a380;
    void textInputOpened(CCTextInputNode*) = 0x25b420;
    void textInputClosed(CCTextInputNode*) = 0x25a950;
    void textChanged(CCTextInputNode*) = 0x25b440;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x25b460;
    void textInputReturn(CCTextInputNode*) = 0x25b520;
    void allowTextInput(CCTextInputNode*) = 0x25b5d0;
    void registerAccountFinished() = 0x259bf0;
    void registerAccountFailed(AccountError) = 0x259d70;
@end

@interface CommunityCreditsPage
    ~CommunityCreditsPage() = 0x19b080;
    ~CommunityCreditsPage() = 0x19b0b0;
    bool init() = 0x19b2b0;
    void registerWithTouchDispatcher() = 0x19e9f0;
    void keyBackClicked() = 0x19e980;
    void show() = 0x19e7e0;
@end

@interface CustomizeObjectLayer
    ~CustomizeObjectLayer() = 0xdd2a0;
    ~CustomizeObjectLayer() = 0xdd2d0;
    void keyBackClicked() = 0xe16c0;
    void textInputOpened(CCTextInputNode*) = 0xe1280;
    void textInputClosed(CCTextInputNode*) = 0xe1430;
    void textChanged(CCTextInputNode*) = 0xe1470;
    void hsvPopupClosed(HSVWidgetPopup*, cocos2d::_ccHSVValue) = 0xe1050;
    void colorSelectClosed(cocos2d::CCNode*) = 0xe0c60;
    void colorSetupClosed(int) = 0xe0850;
@end

@interface GJFollowCommandLayer
    ~GJFollowCommandLayer() = 0x16a4b0;
    ~GJFollowCommandLayer() = 0x16a4e0;
    void keyBackClicked() = 0x16da20;
    void textInputClosed(CCTextInputNode*) = 0x16d440;
    void textChanged(CCTextInputNode*) = 0x16d480;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x16dc00;
    void textInputReturn(CCTextInputNode*) = 0x16dcc0;
@end

@interface GJRotateCommandLayer
    ~GJRotateCommandLayer() = 0x1b00;
    ~GJRotateCommandLayer() = 0x1b30;
    void keyBackClicked() = 0x5e30;
    void valuePopupClosed(ConfigureValuePopup*, float) = 0x5160;
    void textInputClosed(CCTextInputNode*) = 0x5890;
    void textChanged(CCTextInputNode*) = 0x58d0;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x6010;
    void textInputReturn(CCTextInputNode*) = 0x60d0;
@end

@interface GJSpecialColorSelect
    ~GJSpecialColorSelect() = 0x3830f0;
    ~GJSpecialColorSelect() = 0x383120;
    void keyBackClicked() = 0x383ca0;
@end

@interface MusicDelegateHandler
    ~MusicDelegateHandler() = 0x2ee460;
    ~MusicDelegateHandler() = 0x2ee480;
@end

@interface MusicDownloadManager
    ~MusicDownloadManager() = 0x2ef0c0;
    ~MusicDownloadManager() = 0x2ef0d0;
    bool init() = 0x2ef100;
@end

@interface ParentalOptionsLayer
    ~ParentalOptionsLayer() = 0x445d00;
    ~ParentalOptionsLayer() = 0x445d30;
    bool init() = 0x445da0;
    void keyBackClicked() = 0x4472d0;
@end

@interface TeleportPortalObject
    ~TeleportPortalObject() = 0xdc290;
    ~TeleportPortalObject() = 0xdc2a0;
    void setPosition(cocos2d::CCPoint const&) = 0xdad00;
    void setRotation(float) = 0xdadb0;
    void setStartPos(cocos2d::CCPoint) = 0xdab50;
    void getSaveString() = 0xdaf00;
    void addToGroup(int) = 0xdae40;
    void removeFromGroup(int) = 0xdaea0;
    void setRotation2(float) = 0xdae10;
    void addToGroup2(int) = 0xdae20;
    void removeFromGroup2(int) = 0xdae30;
@end

@interface UploadActionDelegate
    void uploadActionFinished(int, int) = 0x3aa720;
    void uploadActionFailed(int, int) = 0x3aa730;
@end

@interface CCMenuItemSpriteExtra
    ~CCMenuItemSpriteExtra() = 0x125c00;
    ~CCMenuItemSpriteExtra() = 0x125c90;
    void activate() = 0x125730;
    void selected() = 0x125840;
    void unselected() = 0x125a70;
@end

@interface CreateGuidelinesLayer
    ~CreateGuidelinesLayer() = 0x297c70;
    ~CreateGuidelinesLayer() = 0x297ca0;
    void update(float) = 0x299c50;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x299dd0;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x299f50;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x299f70;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x29a030;
    void registerWithTouchDispatcher() = 0x29a070;
    void keyBackClicked() = 0x299ce0;
    void keyDown(cocos2d::enumKeyCodes) = 0x29a0b0;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x299c70;
    void keyUp(cocos2d::enumKeyCodes) = 0x29a180;
@end

@interface GJPFollowCommandLayer
    ~GJPFollowCommandLayer() = 0x1ae980;
    ~GJPFollowCommandLayer() = 0x1ae9b0;
    void keyBackClicked() = 0x1b2590;
    void textInputClosed(CCTextInputNode*) = 0x1b1d80;
    void textChanged(CCTextInputNode*) = 0x1b1dc0;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x1b27a0;
    void textInputReturn(CCTextInputNode*) = 0x1b2860;
@end

@interface MoreVideoOptionsLayer
    ~MoreVideoOptionsLayer() = 0x4440b0;
    ~MoreVideoOptionsLayer() = 0x4440e0;
    bool init() = 0x444150;
    void keyBackClicked() = 0x445ba0;
@end

@interface MusicDownloadDelegate
    void loadSongInfoFinished(SongInfoObject*) = 0x320a0;
    void loadSongInfoFailed(int, GJSongError) = 0x320b0;
    void downloadSongFinished(SongInfoObject*) = 0x320c0;
    void downloadSongFailed(int, GJSongError) = 0x320d0;
@end

@interface SetupTouchTogglePopup
    ~SetupTouchTogglePopup() = 0x157600;
    ~SetupTouchTogglePopup() = 0x157630;
    void keyBackClicked() = 0x159850;
    void show() = 0x159800;
    void textInputClosed(CCTextInputNode*) = 0x159660;
    void textChanged(CCTextInputNode*) = 0x1596a0;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x159960;
    void textInputReturn(CCTextInputNode*) = 0x159a20;
@end

@interface ColorSelectLiveOverlay
    ~ColorSelectLiveOverlay() = 0x2e24c0;
    ~ColorSelectLiveOverlay() = 0x2e24f0;
    void keyBackClicked() = 0x2e4550;
    void show() = 0x2e4620;
@end

@interface DemonFilterSelectLayer
    ~DemonFilterSelectLayer() = 0x38b930;
    ~DemonFilterSelectLayer() = 0x38b960;
    bool init() = 0x38b9d0;
    void keyBackClicked() = 0x38c060;
@end

@interface GJAccountSettingsLayer
    ~GJAccountSettingsLayer() = 0x148760;
    ~GJAccountSettingsLayer() = 0x148790;
    void keyBackClicked() = 0x14b200;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x14abe0;
    void textInputReturn(CCTextInputNode*) = 0x14aca0;
@end

@interface SetupAnimSettingsPopup
    ~SetupAnimSettingsPopup() = 0x585c0;
    ~SetupAnimSettingsPopup() = 0x585f0;
    void keyBackClicked() = 0x599f0;
    void show() = 0x599a0;
    void textInputClosed(CCTextInputNode*) = 0x597b0;
    void textChanged(CCTextInputNode*) = 0x597f0;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x59ae0;
    void textInputReturn(CCTextInputNode*) = 0x59ba0;
@end

@interface SetupCountTriggerPopup
    ~SetupCountTriggerPopup() = 0x15c620;
    ~SetupCountTriggerPopup() = 0x15c650;
    void keyBackClicked() = 0x15ec70;
    void show() = 0x15ec20;
    void textInputClosed(CCTextInputNode*) = 0x15e960;
    void textChanged(CCTextInputNode*) = 0x15e9a0;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x15ede0;
    void textInputReturn(CCTextInputNode*) = 0x15eea0;
@end

@interface SetupInstantCountPopup
    ~SetupInstantCountPopup() = 0x352b70;
    ~SetupInstantCountPopup() = 0x352ba0;
    void keyBackClicked() = 0x355600;
    void show() = 0x3555b0;
    void textInputClosed(CCTextInputNode*) = 0x355230;
    void textChanged(CCTextInputNode*) = 0x355270;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x355770;
    void textInputReturn(CCTextInputNode*) = 0x355830;
@end

@interface SetupObjectTogglePopup
    ~SetupObjectTogglePopup() = 0x1c07c0;
    ~SetupObjectTogglePopup() = 0x1c07f0;
    void keyBackClicked() = 0x1c27f0;
    void show() = 0x1c27a0;
    void textInputClosed(CCTextInputNode*) = 0x1c2620;
    void textChanged(CCTextInputNode*) = 0x1c2660;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x1c2900;
    void textInputReturn(CCTextInputNode*) = 0x1c29c0;
@end

@interface SpriteAnimationManager
    ~SpriteAnimationManager() = 0x41e630;
    ~SpriteAnimationManager() = 0x41e640;
@end

@interface BoomScrollLayerDelegate
    void scrollLayerScrollingStarted(BoomScrollLayer*) = 0x204370;
    void scrollLayerScrolledToPage(BoomScrollLayer*, int) = 0x23cf70;
    void scrollLayerMoved(cocos2d::CCPoint) = 0x2eca30;
    void scrollLayerWillScrollToPage(BoomScrollLayer*, int) = 0x23cf80;
@end

@interface SetupPickupTriggerPopup
    ~SetupPickupTriggerPopup() = 0x35dd0;
    ~SetupPickupTriggerPopup() = 0x35e00;
    void keyBackClicked() = 0x37f00;
    void show() = 0x37eb0;
    void textInputClosed(CCTextInputNode*) = 0x37c60;
    void textChanged(CCTextInputNode*) = 0x37ca0;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x38050;
    void textInputReturn(CCTextInputNode*) = 0x38110;
@end

@interface ShareLevelSettingsLayer
    ~ShareLevelSettingsLayer() = 0x12c700;
    ~ShareLevelSettingsLayer() = 0x12c8c0;
    void keyBackClicked() = 0x12db50;
    void numberInputClosed(NumberInputLayer*) = 0x12da50;
@end

@interface PlatformDownloadDelegate
    void downloadFinished(char const*) = 0x2f2db0;
    void downloadFailed(char const*) = 0x2f2dc0;
@end

@interface SetupInteractObjectPopup
    ~SetupInteractObjectPopup() = 0x29a360;
    ~SetupInteractObjectPopup() = 0x29a390;
    void keyBackClicked() = 0x29c550;
    void show() = 0x29c500;
    void textInputClosed(CCTextInputNode*) = 0x29c270;
    void textChanged(CCTextInputNode*) = 0x29c2b0;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x29c6a0;
    void textInputReturn(CCTextInputNode*) = 0x29c760;
@end

@interface SetupCollisionTriggerPopup
    ~SetupCollisionTriggerPopup() = 0x1d6080;
    ~SetupCollisionTriggerPopup() = 0x1d60b0;
    void keyBackClicked() = 0x1d8880;
    void show() = 0x1d8830;
    void textInputClosed(CCTextInputNode*) = 0x1d8490;
    void textChanged(CCTextInputNode*) = 0x1d84d0;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x1d89f0;
    void textInputReturn(CCTextInputNode*) = 0x1d8ab0;
@end

@interface UpdateAccountSettingsPopup
    ~UpdateAccountSettingsPopup() = 0x14b330;
    ~UpdateAccountSettingsPopup() = 0x14b360;
    void keyBackClicked() = 0x14bcb0;
    void updateSettingsFinished() = 0x14ba40;
    void updateSettingsFailed() = 0x14bb80;
@end

@interface Slider
    ~Slider() = 0x18e5f0;
    ~Slider() = 0x18e600;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x18e2e0;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x18e360;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x18e320;
@end

@interface UILayer
    ~UILayer() = 0x280c60;
    ~UILayer() = 0x280c90;
    bool init() = 0x27fe40;
    void draw() = 0x280980;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x280990;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x280ad0;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x280af0;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x280bd0;
    void registerWithTouchDispatcher() = 0x280c10;
    void keyBackClicked() = 0x2808e0;
    void keyDown(cocos2d::enumKeyCodes) = 0x280470;
    void keyUp(cocos2d::enumKeyCodes) = 0x280600;
@end

@interface EditorUI
    ~EditorUI() = 0x89e0;
    ~EditorUI() = 0x8a10;
    void draw() = 0x2e170;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2ed60;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2f3d0;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2fb00;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x30710;
    void registerWithTouchDispatcher() = 0x30750;
    void keyBackClicked() = 0x24c50;
    void keyDown(cocos2d::enumKeyCodes) = 0x30790;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x1f590;
    void songStateChanged() = 0x24760;
    void colorSelectClosed(cocos2d::CCNode*) = 0x29940;
    void keyUp(cocos2d::enumKeyCodes) = 0x312b0;
    void scrollWheel(float, float) = 0x31370;
    void angleChangeBegin() = 0x2e260;
    void angleChangeEnded() = 0x2e320;
    void angleChanged(float) = 0x2e3a0;
    void scaleChangeBegin() = 0x25120;
    void scaleChangeEnded() = 0x251e0;
    void scaleChanged(float) = 0x25260;
@end

@interface GManager
    ~GManager() = 0x26fb90;
    ~GManager() = 0x26fbe0;
    bool init() = 0x26ee00;
    void setup() = 0x26ee20;
    void encodeDataTo(DS_Dictionary*) = 0x26f5b0;
    void dataLoaded(DS_Dictionary*) = 0x26fb70;
    void firstLoad() = 0x26fb80;
@end

@interface GameCell
    ~GameCell() = 0x18fb70;
    ~GameCell() = 0x18fc20;
    bool init() = 0x18f980;
    void draw() = 0x18fa40;
@end

@interface ListCell
    ~ListCell() = 0x18fad0;
    ~ListCell() = 0x18fae0;
    bool init() = 0x18f7a0;
    void draw() = 0x18f840;
@end

@interface SongCell
    ~SongCell() = 0x11c0e0;
    ~SongCell() = 0x11c110;
    bool init() = 0x11c200;
    void draw() = 0x11c240;
@end

@interface TextArea
    ~TextArea() = 0x19faa0;
    ~TextArea() = 0x19fb10;
    void draw() = 0x19f890;
    void setOpacity(unsigned char) = 0x19f760;
@end

@interface GJComment
    ~GJComment() = 0x2dfd70;
    ~GJComment() = 0x2dfd80;
    bool init() = 0x2dfec0;
@end

@interface GJMapPack
    ~GJMapPack() = 0x2ddd50;
    ~GJMapPack() = 0x2ddd60;
    bool init() = 0x2de0e0;
@end

@interface InfoLayer
    ~InfoLayer() = 0x456560;
    ~InfoLayer() = 0x456590;
    void registerWithTouchDispatcher() = 0x45a070;
    void keyBackClicked() = 0x45a000;
    void show() = 0x45ab80;
    void loadCommentsFinished(cocos2d::CCArray*, char const*) = 0x45a1b0;
    void loadCommentsFailed(char const*) = 0x45a270;
    void setupPageInfo(std::string, char const*) = 0x45a320;
    void commentUploadFinished(int) = 0x45a890;
    void commentUploadFailed(int, CommentError) = 0x45a960;
    void updateUserScoreFinished() = 0x45a720;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x459d50;
@end

@interface KeysLayer
    ~KeysLayer() = 0x44ce00;
    ~KeysLayer() = 0x44cfa0;
    bool init() = 0x44d340;
    void keyBackClicked() = 0x453210;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x4532e0;
    void dialogClosed(DialogLayer*) = 0x453090;
@end

@interface LevelCell
    ~LevelCell() = 0x117820;
    ~LevelCell() = 0x117850;
    bool init() = 0x117a40;
    void draw() = 0x11a4d0;
@end

@interface LevelPage
    ~LevelPage() = 0x23aeb0;
    ~LevelPage() = 0x23aee0;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x23cd90;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x23ceb0;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x23ced0;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x23cef0;
    void registerWithTouchDispatcher() = 0x23cf30;
    void dialogClosed(DialogLayer*) = 0x23cad0;
@end

@interface MenuLayer
    ~MenuLayer() = 0x1d1230;
    ~MenuLayer() = 0x1d1260;
    bool init() = 0x1d14b0;
    void keyBackClicked() = 0x1d3160;
    void keyDown(cocos2d::enumKeyCodes) = 0x1d33d0;
    void googlePlaySignedIn() = 0x1d2f30;
    void FLAlert_Clicked(FLAlertLayer*, bool) = 0x1d3190;
@end

@interface PlayLayer
    ~PlayLayer() = 0x6b460;
    ~PlayLayer() = 0x6b490;
    void update(float) = 0x77900;
    void onEnterTransitionDidFinish() = 0x806e0;
    void onExit() = 0x80710;
    void draw() = 0x7d160;
    void visit() = 0x75ef0;
    void updateTweenAction(float, char const*) = 0x7ffb0;
    void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*) = 0x7c7f0;
    void flipGravity(PlayerObject*, bool, bool) = 0x7cd10;
    void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*) = 0x7aa10;
    void timeForXPos(float) = 0x7d120;
    void xPosForTime(float) = 0x7d140;
    void currencyWillExit(CurrencyRewardLayer*) = 0x7e070;
    void circleWaveWillBeRemoved(CCCircleWave*) = 0x7e110;
    void dialogClosed(DialogLayer*) = 0x7e0b0;
@end

@interface StatsCell
    ~StatsCell() = 0x120530;
    ~StatsCell() = 0x120540;
    bool init() = 0x11b100;
    void draw() = 0x11bf80;
@end

@interface TableView
    ~TableView() = 0x37eeb0;
    ~TableView() = 0x37eee0;
    void onEnter() = 0x37ff30;
    void onExit() = 0x37ff40;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x380120;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x380be0;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x3809a0;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x380b20;
    void registerWithTouchDispatcher() = 0x37ff50;
    void scrollWheel(float, float) = 0x380cd0;
    void scrllViewWillBeginDecelerating(CCScrollLayerExt*) = 0x3818a0;
    void scrollViewDidEndDecelerating(CCScrollLayerExt*) = 0x3818c0;
    void scrollViewTouchMoving(CCScrollLayerExt*) = 0x3818e0;
    void scrollViewDidEndMoving(CCScrollLayerExt*) = 0x381900;
@end

@interface cocos2d::CCBezierBy
    ~CCBezierBy() = 0x1f9fe0;
    ~CCBezierBy() = 0x1f9ff0;
    void update(float) = 0x1f6960;
    void startWithTarget(cocos2d::CCNode*) = 0x1f67a0;
    void reverse() = 0x1f6b40;
@end

@interface cocos2d::CCBezierTo
    ~CCBezierTo() = 0x1fa020;
    ~CCBezierTo() = 0x1fa030;
    void startWithTarget(cocos2d::CCNode*) = 0x1f6f30;
@end

@interface cocos2d::CCDirector
    ~CCDirector() = 0x2493a0;
    ~CCDirector() = 0x2493b0;
    bool init() = 0x248df0;
    void getClassTypeInfo() = 0x24b280;
    void getScheduler() = 0x24af00;
    void setScheduler(cocos2d::CCScheduler*) = 0x24aec0;
    void getActionManager() = 0x24af50;
    void setActionManager(cocos2d::CCActionManager*) = 0x24af10;
    void getTouchDispatcher() = 0x24afa0;
    void setTouchDispatcher(cocos2d::CCTouchDispatcher*) = 0x24af60;
    void getKeypadDispatcher() = 0x24b090;
    void setKeypadDispatcher(cocos2d::CCKeypadDispatcher*) = 0x24b050;
    void getKeyboardDispatcher() = 0x24aff0;
    void setKeyboardDispatcher(cocos2d::CCKeyboardDispatcher*) = 0x24afb0;
    void getMouseDispatcher() = 0x24b040;
    void setMouseDispatcher(cocos2d::CCMouseDispatcher*) = 0x24b000;
    void getAccelerometer() = 0x24b0e0;
    void setAccelerometer(cocos2d::CCAccelerometer*) = 0x24b0a0;
    void getDeltaTime() = 0x249bd0;
    void getSceneDelegate() const = 0x24b320;
    void setSceneDelegate(cocos2d::CCSceneDelegate*) = 0x24b330;
@end

@interface cocos2d::CCDrawNode
    ~CCDrawNode() = 0x378cc0;
    ~CCDrawNode() = 0x378cd0;
    bool init() = 0x378e00;
    void draw() = 0x379020;
@end

@interface cocos2d::CCGridBase
    ~CCGridBase() = 0x287e30;
    ~CCGridBase() = 0x287e90;
    void blit() = 0x2880e0;
    void reuse() = 0x2880f0;
    void calculateVertexPoints() = 0x288100;
@end

@interface cocos2d::CCLabelTTF
    ~CCLabelTTF() = 0x1fa620;
    ~CCLabelTTF() = 0x1fa6f0;
    bool init() = 0x1fac60;
    void setString(char const*) = 0x1fad70;
    void getString() = 0x1faf70;
@end

@interface cocos2d::CCMenuItem
    ~CCMenuItem() = 0x1fb8e0;
    ~CCMenuItem() = 0x1fb950;
    void activate() = 0x1fba70;
    void selected() = 0x1fb9e0;
    void unselected() = 0x1fb9f0;
    void registerScriptTapHandler(int) = 0x1fba00;
    void unregisterScriptTapHandler() = 0x1fba30;
    void isEnabled() = 0x1fbaf0;
    void setEnabled(bool) = 0x1fbae0;
    void isSelected() = 0x1fbb50;
@end

@interface cocos2d::CCNodeRGBA
    ~CCNodeRGBA() = 0x124bb0;
    ~CCNodeRGBA() = 0x124bc0;
    bool init() = 0x124bf0;
    void getOpacity() = 0x124cd0;
    void getDisplayedOpacity() = 0x124cf0;
    void setOpacity(unsigned char) = 0x124d10;
    void updateDisplayedOpacity(unsigned char) = 0x124e50;
    void isCascadeOpacityEnabled() = 0x124fe0;
    void setCascadeOpacityEnabled(bool) = 0x125000;
    void getColor() = 0x125020;
    void getDisplayedColor() = 0x125040;
    void setColor(cocos2d::_ccColor3B const&) = 0x125060;
    void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x1251e0;
    void isCascadeColorEnabled() = 0x125320;
    void setCascadeColorEnabled(bool) = 0x125340;
    void setOpacityModifyRGB(bool) = 0x328e0;
    void isOpacityModifyRGB() = 0x328f0;
@end

@interface cocos2d::CCProfiler
    ~CCProfiler() = 0x28a2e0;
    ~CCProfiler() = 0x28a330;
@end

@interface cocos2d::CCRipple3D
    ~CCRipple3D() = 0x129bc0;
    ~CCRipple3D() = 0x129bd0;
    void update(float) = 0x1286c0;
@end

@interface cocos2d::CCRotateBy
    ~CCRotateBy() = 0x1f9e20;
    ~CCRotateBy() = 0x1f9e30;
    void update(float) = 0x1f4f90;
    void startWithTarget(cocos2d::CCNode*) = 0x1f4f40;
    void reverse() = 0x1f5000;
@end

@interface cocos2d::CCRotateTo
    ~CCRotateTo() = 0x1f9de0;
    ~CCRotateTo() = 0x1f9df0;
    void update(float) = 0x1f4be0;
    void startWithTarget(cocos2d::CCNode*) = 0x1f4aa0;
    void initWithDuration(float, float, float) = 0x1f4980;
@end

@interface cocos2d::CCStopGrid
    ~CCStopGrid() = 0xef140;
    ~CCStopGrid() = 0xef150;
    void startWithTarget(cocos2d::CCNode*) = 0xeeee0;
@end

@interface cocos2d::CCTMXLayer
    ~CCTMXLayer() = 0x120ce0;
    ~CCTMXLayer() = 0x120cf0;
    void addChild(cocos2d::CCNode*, int, int) = 0x1222b0;
    void removeChild(cocos2d::CCNode*, bool) = 0x1222c0;
    void getTileSet() = 0x120d20;
    void setTileSet(cocos2d::CCTMXTilesetInfo*) = 0x120d30;
    void getProperties() = 0x1224a0;
    void setProperties(cocos2d::CCDictionary*) = 0x1224b0;
@end

@interface cocos2d::CCAnimation
    ~CCAnimation() = 0x141220;
    ~CCAnimation() = 0x141270;
    void getDuration() = 0x141460;
@end

@interface cocos2d::CCAtlasNode
    ~CCAtlasNode() = 0x1a4a30;
    ~CCAtlasNode() = 0x1a4aa0;
    void draw() = 0x1a4f70;
    void setOpacity(unsigned char) = 0x1a51c0;
    void getColor() = 0x1a5060;
    void setColor(cocos2d::_ccColor3B const&) = 0x1a50b0;
    void setOpacityModifyRGB(bool) = 0x1a5240;
    void isOpacityModifyRGB() = 0x1a52f0;
    void getTextureAtlas() = 0x1a54a0;
    void setTextureAtlas(cocos2d::CCTextureAtlas*) = 0x1a5460;
    void getBlendFunc() = 0x1a5320;
    void setBlendFunc(cocos2d::_ccBlendFunc) = 0x1a5340;
    void getQuadsToDraw() = 0x1a54b0;
    void setQuadsToDraw(unsigned int) = 0x1a54c0;
    void updateAtlasValues() = 0x1a4f60;
    void getTexture() = 0x1a5430;
    void setTexture(cocos2d::CCTexture2D*) = 0x1a5360;
@end

@interface cocos2d::CCComponent
    ~CCComponent() = 0x5a420;
    ~CCComponent() = 0x5a470;
    void update(float) = 0x5a510;
    bool init() = 0x5a4e0;
    void onEnter() = 0x5a4f0;
    void onExit() = 0x5a500;
    void serialize(void*) = 0x5a520;
    void isEnabled() const = 0x5a600;
    void setEnabled(bool) = 0x5a610;
@end

@interface cocos2d::CCDelayTime
    ~CCDelayTime() = 0x1fa260;
    ~CCDelayTime() = 0x1fa270;
    void update(float) = 0x1f8af0;
    void reverse() = 0x1f8b00;
@end

@interface cocos2d::CCEaseInOut
    ~CCEaseInOut() = 0x2a4880;
    ~CCEaseInOut() = 0x2a48d0;
    void update(float) = 0x2a1f30;
    void reverse() = 0x2a1fa0;
@end

@interface cocos2d::CCFileUtils
    ~CCFileUtils() = 0x23efd0;
    ~CCFileUtils() = 0x23efe0;
    void purgeCachedEntries() = 0x23f100;
    void getFileData(char const*, char const*, unsigned long*) = 0x23f140;
    void getFileDataFromZip(char const*, char const*, unsigned long*) = 0x23f2e0;
    void fullPathForFilename(char const*, bool) = 0x23f940;
    void removeFullPath(char const*) = 0x240710;
    void loadFilenameLookupDictionaryFromFile(char const*) = 0x2416f0;
    void setFilenameLookupDictionary(cocos2d::CCDictionary*) = 0x241680;
    void fullPathFromRelativeFile(char const*, char const*) = 0x2408c0;
    void setSearchResolutionsOrder(std::vector<std::string> const&) = 0x240ac0;
    void addSearchResolutionsOrder(char const*) = 0x240d30;
    void getSearchResolutionsOrder() = 0x240df0;
    void setSearchPaths(std::vector<std::string> const&) = 0x240e10;
    void addSearchPath(char const*) = 0x241180;
    void removeSearchPath(char const*) = 0x241390;
    void getSearchPaths() = 0x240e00;
    void getWritablePath2() = 0x241a90;
    void isAbsolutePath(std::string const&) = 0x2419c0;
    void setPopupNotify(bool) = 0x2419d0;
    void isPopupNotify() = 0x2419e0;
    bool init() = 0x23f010;
    void getNewFilename(char const*) = 0x23f3f0;
    void shouldUseHD() = 0x23f4e0;
    void addSuffix(std::string, std::string) = 0x23f510;
    void getPathForFilename(std::string const&, std::string const&, std::string const&) = 0x23f650;
    void getFullPathForDirectoryAndFilename(std::string const&, std::string const&) = 0x241900;
    void createCCDictionaryWithContentsOfFile(std::string const&) = 0x23ec30;
    void writeToFile(cocos2d::CCDictionary*, std::string const&) = 0x23ec40;
    void createCCArrayWithContentsOfFile(std::string const&) = 0x23ec50;
@end

@interface cocos2d::CCGLProgram
    ~CCGLProgram() = 0x231950;
    ~CCGLProgram() = 0x231960;
@end

@interface cocos2d::CCLayerRGBA
    ~CCLayerRGBA() = 0x273aa0;
    ~CCLayerRGBA() = 0x273ad0;
    bool init() = 0x273b40;
    void getOpacity() = 0x273be0;
    void getDisplayedOpacity() = 0x273c00;
    void setOpacity(unsigned char) = 0x273c20;
    void updateDisplayedOpacity(unsigned char) = 0x273f20;
    void isCascadeOpacityEnabled() = 0x2741f0;
    void setCascadeOpacityEnabled(bool) = 0x274210;
    void getColor() = 0x273d60;
    void getDisplayedColor() = 0x273d80;
    void setColor(cocos2d::_ccColor3B const&) = 0x273da0;
    void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x2740b0;
    void isCascadeColorEnabled() = 0x274230;
    void setCascadeColorEnabled(bool) = 0x274250;
    void setOpacityModifyRGB(bool) = 0x6180;
    void isOpacityModifyRGB() = 0x6190;
@end

@interface cocos2d::CCReuseGrid
    ~CCReuseGrid() = 0xef180;
    ~CCReuseGrid() = 0xef190;
    void startWithTarget(cocos2d::CCNode*) = 0xef010;
@end

@interface cocos2d::CCScheduler
    ~CCScheduler() = 0x242910;
    ~CCScheduler() = 0x242970;
    void update(float) = 0x2446d0;
@end

@interface cocos2d::CCSplitCols
    ~CCSplitCols() = 0x45ead0;
    ~CCSplitCols() = 0x45eae0;
    void update(float) = 0x45e790;
    void startWithTarget(cocos2d::CCNode*) = 0x45e750;
    void initWithDuration(float, unsigned int) = 0x45e5d0;
@end

@interface cocos2d::CCSplitRows
    ~CCSplitRows() = 0x45ea90;
    ~CCSplitRows() = 0x45eaa0;
    void update(float) = 0x45e3e0;
    void startWithTarget(cocos2d::CCNode*) = 0x45e3a0;
    void initWithDuration(float, unsigned int) = 0x45e220;
@end

@interface cocos2d::CCTexture2D
    ~CCTexture2D() = 0x246350;
    ~CCTexture2D() = 0x2463b0;
    void getPixelFormat() = 0x246420;
    void getPixelsWide() = 0x246430;
    void getPixelsHigh() = 0x246440;
    void getName() = 0x246450;
    void getMaxS() = 0x2464e0;
    void setMaxS(float) = 0x2464f0;
    void getMaxT() = 0x246500;
    void setMaxT(float) = 0x246510;
    void getContentSize() = 0x246460;
    void getShaderProgram() = 0x246520;
    void setShaderProgram(cocos2d::CCGLProgram*) = 0x246530;
@end

@interface cocos2d::CCActionEase
    ~CCActionEase() = 0x2a14d0;
    ~CCActionEase() = 0x2a1520;
    void update(float) = 0x2a15e0;
    void startWithTarget(cocos2d::CCNode*) = 0x2a1580;
    void stop() = 0x2a15b0;
    void reverse() = 0x2a1600;
    void getInnerAction() = 0x2a1620;
@end

@interface cocos2d::CCDictionary
    ~CCDictionary() = 0x190390;
    ~CCDictionary() = 0x1903d0;
    void acceptVisitor(cocos2d::CCDataVisitor&) = 0x192790;
@end

@interface cocos2d::CCEaseBackIn
    ~CCEaseBackIn() = 0x2a52d0;
    ~CCEaseBackIn() = 0x2a5320;
    void update(float) = 0x2a42a0;
    void reverse() = 0x2a42d0;
@end

@interface cocos2d::CCEaseBounce
    ~CCEaseBounce() = 0x2a5010;
    ~CCEaseBounce() = 0x2a5060;
    void reverse() = 0x2a3890;
@end

@interface cocos2d::CCEaseSineIn
    ~CCEaseSineIn() = 0x2a4b40;
    ~CCEaseSineIn() = 0x2a4b90;
    void update(float) = 0x2a2780;
    void reverse() = 0x2a27c0;
@end

@interface cocos2d::CCGridAction
    ~CCGridAction() = 0xef070;
    ~CCGridAction() = 0xef080;
    void startWithTarget(cocos2d::CCNode*) = 0xee0d0;
    void reverse() = 0xee1a0;
    void initWithDuration(float, cocos2d::CCSize const&) = 0xee0a0;
    void getGrid() = 0xee190;
@end

@interface cocos2d::CCLabelAtlas
    ~CCLabelAtlas() = 0x43d950;
    ~CCLabelAtlas() = 0x43d960;
    void updateAtlasValues() = 0x43d590;
    void setString(char const*) = 0x43d840;
    void getString() = 0x43d930;
@end

@interface cocos2d::CCLayerColor
    ~CCLayerColor() = 0x2743e0;
    ~CCLayerColor() = 0x274410;
    bool init() = 0x274800;
    void setContentSize(cocos2d::CCSize const&) = 0x2749f0;
    void draw() = 0x274b50;
    void setOpacity(unsigned char) = 0x274db0;
    void setColor(cocos2d::_ccColor3B const&) = 0x274c20;
    void initWithColor(cocos2d::_ccColor4B const&, float, float) = 0x274850;
    void initWithColor(cocos2d::_ccColor4B const&) = 0x2749a0;
    void getBlendFunc() = 0x274480;
    void setBlendFunc(cocos2d::_ccBlendFunc) = 0x2744a0;
    void updateColor() = 0x274ae0;
@end

@interface cocos2d::CCPageTurn3D
    ~CCPageTurn3D() = 0x194350;
    ~CCPageTurn3D() = 0x194360;
    void update(float) = 0x194130;
@end

@interface cocos2d::CCPointArray
    ~CCPointArray() = 0x167090;
    ~CCPointArray() = 0x167110;
@end

@interface cocos2d::CCProgressTo
    ~CCProgressTo() = 0x23d680;
    ~CCProgressTo() = 0x23d690;
    void update(float) = 0x23d380;
    void startWithTarget(cocos2d::CCNode*) = 0x23d340;
@end

@interface cocos2d::CCRemoveSelf
    ~CCRemoveSelf() = 0x455c90;
    ~CCRemoveSelf() = 0x455ca0;
    void update(float) = 0x454770;
    void reverse() = 0x454790;
@end

@interface cocos2d::CCTMXMapInfo
    ~CCTMXMapInfo() = 0x283600;
    ~CCTMXMapInfo() = 0x283610;
    void getLayers() = 0x283640;
    void setLayers(cocos2d::CCArray*) = 0x283650;
    void getTilesets() = 0x283690;
    void setTilesets(cocos2d::CCArray*) = 0x2836a0;
    void getObjectGroups() = 0x2836e0;
    void setObjectGroups(cocos2d::CCArray*) = 0x2836f0;
    void getProperties() = 0x283730;
    void setProperties(cocos2d::CCDictionary*) = 0x283740;
    void startElement(void*, char const*, char const**) = 0x2837d0;
    void endElement(void*, char const*) = 0x286210;
    void textHandler(void*, char const*, int) = 0x286460;
@end

@interface cocos2d::CCTextureETC
    ~CCTextureETC() = 0xedee0;
    ~CCTextureETC() = 0xedef0;
@end

@interface cocos2d::CCTexturePVR
    ~CCTexturePVR() = 0x12f100;
    ~CCTexturePVR() = 0x12f160;
@end

@interface cocos2d::XmlSaxHander
    ~XmlSaxHander() = 0xbb250;
@end

@interface cocos2d::CCActionTween
    ~CCActionTween() = 0x447780;
    ~CCActionTween() = 0x4477d0;
    void update(float) = 0x447720;
    void startWithTarget(cocos2d::CCNode*) = 0x4476f0;
    void reverse() = 0x447760;
@end

@interface cocos2d::CCApplication
    ~CCApplication() = 0x1a3e10;
    void setAnimationInterval(double) = 0x1a3ee0;
    void getCurrentLanguage() = 0x1a3f40;
    void getTargetPlatform() = 0x1a3f20;
    void openURL(char const*) = 0x1a4550;
@end

@interface cocos2d::CCEaseBackOut
    ~CCEaseBackOut() = 0x2a5380;
    ~CCEaseBackOut() = 0x2a53d0;
    void update(float) = 0x2a4480;
    void reverse() = 0x2a44c0;
@end

@interface cocos2d::CCEaseElastic
    ~CCEaseElastic() = 0x2a4d50;
    ~CCEaseElastic() = 0x2a4da0;
    void reverse() = 0x2a2dd0;
@end

@interface cocos2d::CCEaseSineOut
    ~CCEaseSineOut() = 0x2a4bf0;
    ~CCEaseSineOut() = 0x2a4c40;
    void update(float) = 0x2a2970;
    void reverse() = 0x2a29a0;
@end

@interface cocos2d::CCIMEDelegate
    ~CCIMEDelegate() = 0x277670;
    void attachWithIME() = 0x2776a0;
    void detachWithIME() = 0x277880;
    void canAttachWithIME() = 0x5ef30;
    void didAttachWithIME() = 0x5ef40;
    void canDetachWithIME() = 0x5ef50;
    void didDetachWithIME() = 0x5ef60;
    void insertText(char const*, int) = 0x5ef70;
    void deleteBackward() = 0x5ef80;
    void getContentText() = 0x5ef90;
    void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x126e80;
    void keyboardDidShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5efa0;
    void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x126e90;
    void keyboardDidHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5efb0;
@end

@interface cocos2d::CCJumpTiles3D
    ~CCJumpTiles3D() = 0x45ea50;
    ~CCJumpTiles3D() = 0x45ea60;
    void update(float) = 0x45df60;
@end

@interface cocos2d::CCLabelBMFont
    ~CCLabelBMFont() = 0x347e80;
    ~CCLabelBMFont() = 0x347e90;
    bool init() = 0x347b10;
    void setScaleX(float) = 0x34a5b0;
    void setScaleY(float) = 0x34a5d0;
    void setScale(float) = 0x34a590;
    void setAnchorPoint(cocos2d::CCPoint const&) = 0x349440;
    void setString(char const*) = 0x348990;
    void setString(char const*, bool) = 0x3489e0;
    void getString() = 0x348bf0;
    void setCString(char const*) = 0x348c10;
    void updateLabel() = 0x349480;
    void setAlignment(cocos2d::CCTextAlignment) = 0x34a530;
    void setWidth(float) = 0x34a550;
    void setLineBreakWithoutSpace(bool) = 0x34a570;
    void isOpacityModifyRGB() = 0x3490e0;
    void setOpacityModifyRGB(bool) = 0x348f70;
    void getOpacity() = 0x348df0;
    void getDisplayedOpacity() = 0x348e10;
    void setOpacity(unsigned char) = 0x348e30;
    void updateDisplayedOpacity(unsigned char) = 0x349100;
    void isCascadeOpacityEnabled() = 0x349400;
    void setCascadeOpacityEnabled(bool) = 0x349420;
    void getColor() = 0x348c30;
    void getDisplayedColor() = 0x348c50;
    void setColor(cocos2d::_ccColor3B const&) = 0x348c70;
    void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x349210;
    void isCascadeColorEnabled() = 0x3493c0;
    void setCascadeColorEnabled(bool) = 0x3493e0;
    void setString(unsigned short*, bool) = 0x348a60;
@end

@interface cocos2d::CCOrbitCamera
    ~CCOrbitCamera() = 0x1b31f0;
    ~CCOrbitCamera() = 0x1b3200;
    void update(float) = 0x1b30c0;
    void startWithTarget(cocos2d::CCNode*) = 0x1b2de0;
@end

@interface cocos2d::CCReverseTime
    ~CCReverseTime() = 0x1f8e50;
    ~CCReverseTime() = 0x1f8ea0;
    void update(float) = 0x1f8f70;
    void startWithTarget(cocos2d::CCNode*) = 0x1f8f00;
    void stop() = 0x1f8f40;
    void reverse() = 0x1f8fa0;
@end

// @interface cocos2d::CCScrollLayer
//     ~CCScrollLayer() = 0x2e4b40;
//     ~CCScrollLayer() = 0x2e4b70;
//     void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2e4be0;
//     void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2e4c00;
//     void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2e4d40;
// @end

@interface cocos2d::CCShaderCache
    ~CCShaderCache() = 0xe6ee0;
    ~CCShaderCache() = 0xe6f30;
@end

@interface cocos2d::CCSpriteFrame
    ~CCSpriteFrame() = 0x1ace20;
    ~CCSpriteFrame() = 0x1ace30;
@end

@interface cocos2d::CCTMXTiledMap
    ~CCTMXTiledMap() = 0x2a63a0;
    ~CCTMXTiledMap() = 0x2a63b0;
    void getObjectGroups() = 0x2a63e0;
    void setObjectGroups(cocos2d::CCArray*) = 0x2a63f0;
    void getProperties() = 0x2a6430;
    void setProperties(cocos2d::CCDictionary*) = 0x2a6440;
@end

@interface cocos2d::CCTiledGrid3D
    ~CCTiledGrid3D() = 0x288fe0;
    ~CCTiledGrid3D() = 0x288ff0;
    void blit() = 0x2891c0;
    void reuse() = 0x289780;
    void calculateVertexPoints() = 0x289260;
@end

@interface cocos2d::CCClippingNode
    ~CCClippingNode() = 0x4191e0;
    ~CCClippingNode() = 0x419230;
    bool init() = 0x4193e0;
    void onEnter() = 0x419470;
    void onEnterTransitionDidFinish() = 0x4194a0;
    void onExit() = 0x419500;
    void onExitTransitionDidStart() = 0x4194d0;
    void visit() = 0x419530;
    bool init(cocos2d::CCNode*) = 0x419400;
@end

@interface cocos2d::CCEaseBounceIn
    ~CCEaseBounceIn() = 0x2a50c0;
    ~CCEaseBounceIn() = 0x2a5110;
    void update(float) = 0x2a3a40;
    void reverse() = 0x2a3b20;
@end

@interface cocos2d::CCMotionStreak
    ~CCMotionStreak() = 0x2ed330;
    ~CCMotionStreak() = 0x2ed340;
    void update(float) = 0x2edb40;
    void setPosition(cocos2d::CCPoint const&) = 0x2ed8b0;
    void draw() = 0x2ee1b0;
    void getOpacity() = 0x2eda60;
    void setOpacity(unsigned char) = 0x2eda40;
    void setOpacityModifyRGB(bool) = 0x2eda80;
    void isOpacityModifyRGB() = 0x2edaa0;
    void getTexture() = 0x2ed950;
    void setTexture(cocos2d::CCTexture2D*) = 0x2ed970;
    void setBlendFunc(cocos2d::_ccBlendFunc) = 0x2eda00;
    void getBlendFunc() = 0x2eda20;
@end

// @interface cocos2d::CCMouseHandler
//     ~CCMouseHandler() = 0x12ede0;
//     ~CCMouseHandler() = 0x12ee50;
//     void initWithDelegate(cocos2d::CCMouseDelegate*) = 0x12ef40;
// @end

@interface cocos2d::CCParallaxNode
    ~CCParallaxNode() = 0x270fe0;
    ~CCParallaxNode() = 0x271040;
    void removeChild(cocos2d::CCNode*, bool) = 0x2712c0;
    void removeAllChildrenWithCleanup(bool) = 0x271350;
    void visit() = 0x271410;
    void addChild(cocos2d::CCNode*, unsigned int, cocos2d::CCPoint const&, cocos2d::CCPoint const&) = 0x271100;
    void addChild(cocos2d::CCNode*, unsigned int, int) = 0x2710f0;
@end

@interface cocos2d::CCShakyTiles3D
    ~CCShakyTiles3D() = 0x45e890;
    ~CCShakyTiles3D() = 0x45e8a0;
    void update(float) = 0x45b900;
    void initWithDuration(float, cocos2d::CCSize const&, int, bool) = 0x45b7b0;
@end

@interface cocos2d::CCShuffleTiles
    ~CCShuffleTiles() = 0x45c2e0;
    ~CCShuffleTiles() = 0x45c330;
    void update(float) = 0x45c830;
    void startWithTarget(cocos2d::CCNode*) = 0x45c590;
    void initWithDuration(float, cocos2d::CCSize const&, unsigned int) = 0x45c140;
@end

@interface cocos2d::CCTMXLayerInfo
    ~CCTMXLayerInfo() = 0x2828c0;
    ~CCTMXLayerInfo() = 0x2828d0;
    void getProperties() = 0x282900;
    void setProperties(cocos2d::CCDictionary*) = 0x282910;
@end

@interface cocos2d::CCTextFieldTTF
    ~CCTextFieldTTF() = 0x125ff0;
    ~CCTextFieldTTF() = 0x126020;
    void draw() = 0x126a00;
    void setString(char const*) = 0x126ac0;
    void getString() = 0x126d00;
    void attachWithIME() = 0x126370;
    void detachWithIME() = 0x1263f0;
    void getColorSpaceHolder() = 0x126a90;
    void setColorSpaceHolder(cocos2d::_ccColor3B const&) = 0x126aa0;
    void setPlaceHolder(char const*) = 0x126d20;
    void getPlaceHolder() = 0x126e10;
    void setSecureTextEntry(bool) = 0x126e20;
    void isSecureTextEntry() = 0x126e70;
    void canAttachWithIME() = 0x126470;
    void canDetachWithIME() = 0x1264d0;
    void insertText(char const*, int) = 0x126530;
    void deleteBackward() = 0x126760;
    void getContentText() = 0x1269e0;
@end

@interface cocos2d::CCTextureAtlas
    ~CCTextureAtlas() = 0x26fe30;
    ~CCTextureAtlas() = 0x26fe40;
    void getTotalQuads() = 0x26fe70;
    void getCapacity() = 0x26fe80;
    void getTexture() = 0x26fe90;
    void setTexture(cocos2d::CCTexture2D*) = 0x26fea0;
    void getQuads() = 0x26fee0;
    void setQuads(cocos2d::_ccV3F_C4B_T2F_Quad*) = 0x26fef0;
@end

@interface cocos2d::CCTextureCache
    ~CCTextureCache() = 0x356fe0;
    ~CCTextureCache() = 0x357040;
@end

@interface cocos2d::CCTileMapAtlas
    ~CCTileMapAtlas() = 0x105970;
    ~CCTileMapAtlas() = 0x1059f0;
    void updateAtlasValues() = 0x105f00;
    void getTGAInfo() = 0x106120;
    void setTGAInfo(cocos2d::sImageTGA*) = 0x106110;
@end

@interface cocos2d::CCTouchHandler
    ~CCTouchHandler() = 0x247de0;
    ~CCTouchHandler() = 0x247e50;
    void initWithDelegate(cocos2d::CCTouchDelegate*, int) = 0x247d10;
@end

@interface cocos2d::CCTurnOffTiles
    ~CCTurnOffTiles() = 0x45d660;
    ~CCTurnOffTiles() = 0x45d6a0;
    void update(float) = 0x45d870;
    void startWithTarget(cocos2d::CCNode*) = 0x45d7c0;
    void initWithDuration(float, cocos2d::CCSize const&, unsigned int) = 0x45d4d0;
@end

@interface cocos2d::CCWavesTiles3D
    ~CCWavesTiles3D() = 0x45ea10;
    ~CCWavesTiles3D() = 0x45ea20;
    void update(float) = 0x45dba0;
    void initWithDuration(float, cocos2d::CCSize const&, unsigned int, float) = 0x45da40;
@end

@interface cocos2d::CCActionInstant
    ~CCActionInstant() = 0x455b90;
    ~CCActionInstant() = 0x455ba0;
    void update(float) = 0x4542f0;
    void isDone() = 0x4542c0;
    void step(float) = 0x4542d0;
    void reverse() = 0x454300;
@end

@interface cocos2d::CCActionManager
    ~CCActionManager() = 0x10b980;
    ~CCActionManager() = 0x10b9f0;
    void update(float) = 0x10c9a0;
@end

@interface cocos2d::CCConfiguration
    ~CCConfiguration() = 0x2a6c60;
    ~CCConfiguration() = 0x2a6cb0;
@end

@interface cocos2d::CCEaseBackInOut
    ~CCEaseBackInOut() = 0x2a5430;
    ~CCEaseBackInOut() = 0x2a5480;
    void update(float) = 0x2a4670;
    void reverse() = 0x2a4700;
@end

@interface cocos2d::CCEaseBounceOut
    ~CCEaseBounceOut() = 0x2a5170;
    ~CCEaseBounceOut() = 0x2a51c0;
    void update(float) = 0x2a3cd0;
    void reverse() = 0x2a3d90;
@end

@interface cocos2d::CCEaseElasticIn
    ~CCEaseElasticIn() = 0x2a4e00;
    ~CCEaseElasticIn() = 0x2a4e50;
    void update(float) = 0x2a2fb0;
    void reverse() = 0x2a3050;
@end

@interface cocos2d::CCEaseSineInOut
    ~CCEaseSineInOut() = 0x2a4ca0;
    ~CCEaseSineInOut() = 0x2a4cf0;
    void update(float) = 0x2a2b50;
    void reverse() = 0x2a2b90;
@end

@interface cocos2d::CCKeypadHandler
    ~CCKeypadHandler() = 0x1ff130;
    ~CCKeypadHandler() = 0x1ff1a0;
    void initWithDelegate(cocos2d::CCKeypadDelegate*) = 0x1ff290;
@end

@interface cocos2d::CCLayerGradient
    ~CCLayerGradient() = 0x2760a0;
    ~CCLayerGradient() = 0x2760b0;
    bool init() = 0x275280;
    void updateColor() = 0x2753c0;
    void initWithColor(cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&) = 0x2752b0;
    void initWithColor(cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&, cocos2d::CCPoint const&) = 0x275310;
    void getStartColor() = 0x275610;
    void setStartColor(cocos2d::_ccColor3B const&) = 0x275620;
    void getEndColor() = 0x275670;
    void setEndColor(cocos2d::_ccColor3B const&) = 0x275640;
    void getStartOpacity() = 0x2756a0;
    void setStartOpacity(unsigned char) = 0x275680;
    void getEndOpacity() = 0x2756d0;
    void setEndOpacity(unsigned char) = 0x2756b0;
    void getVector() = 0x275710;
    void setVector(cocos2d::CCPoint const&) = 0x2756e0;
    void setCompressedInterpolation(bool) = 0x275730;
    void isCompressedInterpolation() = 0x275720;
@end

@interface cocos2d::CCMenuItemImage
    ~CCMenuItemImage() = 0x1febb0;
    ~CCMenuItemImage() = 0x1fec20;
    bool init() = 0x1fd750;
@end

@interface cocos2d::CCMenuItemLabel
    ~CCMenuItemLabel() = 0x1fc0d0;
    ~CCMenuItemLabel() = 0x1fc140;
    void activate() = 0x1fc240;
    void selected() = 0x1fc2e0;
    void unselected() = 0x1fc380;
    void setEnabled(bool) = 0x1fc3f0;
    void getDisabledColor() = 0x1fbb80;
    void setDisabledColor(cocos2d::_ccColor3B const&) = 0x1fbb90;
    void getLabel() = 0x1fbbb0;
    void setLabel(cocos2d::CCNode*) = 0x1fbbc0;
@end

@interface cocos2d::CCMouseDelegate
    void rightKeyDown() = 0x61b0;
    void rightKeyUp() = 0x61c0;
    void scrollWheel(float, float) = 0x61d0;
@end

@interface cocos2d::CCPrettyPrinter
    ~CCPrettyPrinter() = 0x277290;
    void visitObject(cocos2d::CCObject const*) = 0x2763e0;
    void visit(cocos2d::CCBool const*) = 0x276470;
    void visit(cocos2d::CCInteger const*) = 0x276510;
    void visit(cocos2d::CCFloat const*) = 0x2765a0;
    void visit(cocos2d::CCDouble const*) = 0x276630;
    void visit(cocos2d::CCString const*) = 0x2766c0;
    void visit(cocos2d::CCArray const*) = 0x276700;
    void visit(cocos2d::CCDictionary const*) = 0x276b50;
    void visit(cocos2d::CCSet const*) = 0x276f20;
    void clear() = 0x2763a0;
    void getResult() = 0x2763c0;
@end

@interface cocos2d::CCProgressTimer
    ~CCProgressTimer() = 0x36c3b0;
    ~CCProgressTimer() = 0x36c430;
    void draw() = 0x36e8f0;
    void setOpacity(unsigned char) = 0x36c720;
    void setColor(cocos2d::_ccColor3B const&) = 0x36c590;
    void getColor() const = 0x36c700;
    void getOpacity() const = 0x36c820;
    void getMidpoint() = 0x36e7c0;
    void setMidpoint(cocos2d::CCPoint) = 0x36e7e0;
@end

@interface cocos2d::CCRenderTexture
    ~CCRenderTexture() = 0x35c5c0;
    ~CCRenderTexture() = 0x35c5d0;
    void draw() = 0x35d570;
    void visit() = 0x35d4e0;
    void getSprite() = 0x35c620;
    void setSprite(cocos2d::CCSprite*) = 0x35c630;
@end

@interface cocos2d::CCRepeatForever
    ~CCRepeatForever() = 0x1f3870;
    ~CCRepeatForever() = 0x1f38c0;
    void isDone() = 0x1f3b40;
    void startWithTarget(cocos2d::CCNode*) = 0x1f3a90;
    void step(float) = 0x1f3ad0;
    void reverse() = 0x1f3b50;
@end

@interface cocos2d::CCAccelAmplitude
    ~CCAccelAmplitude() = 0xee970;
    ~CCAccelAmplitude() = 0xee9d0;
    void update(float) = 0xeea70;
    void startWithTarget(cocos2d::CCNode*) = 0xeea40;
    void reverse() = 0xeeac0;
@end

@interface cocos2d::CCActionInterval
    ~CCActionInterval() = 0x1f9d60;
    ~CCActionInterval() = 0x1f9d70;
    void isDone() = 0x1f2640;
    void startWithTarget(cocos2d::CCNode*) = 0x1f2700;
    void step(float) = 0x1f2660;
    void reverse() = 0x1f2720;
@end

@interface cocos2d::CCAnimationCache
    ~CCAnimationCache() = 0x244bd0;
    ~CCAnimationCache() = 0x244c20;
@end

@interface cocos2d::CCAnimationFrame
    ~CCAnimationFrame() = 0x140ab0;
    ~CCAnimationFrame() = 0x140b10;
@end

@interface cocos2d::CCEaseElasticOut
    ~CCEaseElasticOut() = 0x2a4eb0;
    ~CCEaseElasticOut() = 0x2a4f00;
    void update(float) = 0x2a3250;
    void reverse() = 0x2a32f0;
@end

@interface cocos2d::CCEaseRateAction
    ~CCEaseRateAction() = 0x2a1880;
    ~CCEaseRateAction() = 0x2a18d0;
    void reverse() = 0x2a1930;
@end

@interface cocos2d::CCFadeOutBLTiles
    ~CCFadeOutBLTiles() = 0x45e950;
    ~CCFadeOutBLTiles() = 0x45e960;
    void testFunc(cocos2d::CCSize const&, float) = 0x45cf10;
@end

@interface cocos2d::CCFadeOutTRTiles
    ~CCFadeOutTRTiles() = 0x45e910;
    ~CCFadeOutTRTiles() = 0x45e920;
    void update(float) = 0x45ccc0;
    void testFunc(cocos2d::CCSize const&, float) = 0x45cad0;
    void transformTile(cocos2d::CCPoint const&, float) = 0x45cbc0;
@end

@interface cocos2d::CCFadeOutUpTiles
    ~CCFadeOutUpTiles() = 0x45e990;
    ~CCFadeOutUpTiles() = 0x45e9a0;
    void testFunc(cocos2d::CCSize const&, float) = 0x45d070;
    void transformTile(cocos2d::CCPoint const&, float) = 0x45d0f0;
@end

@interface cocos2d::CCLayerMultiplex
    ~CCLayerMultiplex() = 0x275980;
    ~CCLayerMultiplex() = 0x275ad0;
@end

@interface cocos2d::CCMenuItemSprite
    ~CCMenuItemSprite() = 0x1feab0;
    ~CCMenuItemSprite() = 0x1feb20;
    void selected() = 0x1fd3f0;
    void unselected() = 0x1fd470;
    void setEnabled(bool) = 0x1fd4e0;
    void getNormalImage() = 0x1fcee0;
    void setNormalImage(cocos2d::CCNode*) = 0x1fcef0;
    void getSelectedImage() = 0x1fcfc0;
    void setSelectedImage(cocos2d::CCNode*) = 0x1fcfd0;
    void getDisabledImage() = 0x1fd070;
    void setDisabledImage(cocos2d::CCNode*) = 0x1fd080;
    void updateImagesVisibility() = 0x1fd510;
@end

@interface cocos2d::CCMenuItemToggle
    ~CCMenuItemToggle() = 0x1fe7a0;
    ~CCMenuItemToggle() = 0x1fe7b0;
    void activate() = 0x1fe950;
    void selected() = 0x1fe8f0;
    void unselected() = 0x1fe920;
    void setEnabled(bool) = 0x1fea00;
    void getSelectedIndex() = 0x1fe8e0;
    void setSelectedIndex(unsigned int) = 0x1fe7e0;
    void getSubItems() = 0x1fde50;
    void setSubItems(cocos2d::CCArray*) = 0x1fde10;
@end

@interface cocos2d::CCParticleSystem
    ~CCParticleSystem() = 0x46b390;
    ~CCParticleSystem() = 0x46b3a0;
    void update(float) = 0x46be50;
    bool init() = 0x4692b0;
    void setScaleX(float) = 0x46cdf0;
    void setScaleY(float) = 0x46ce10;
    void setScale(float) = 0x46cdb0;
    void setRotation(float) = 0x46cdd0;
    void getBatchNode() = 0x46ccd0;
    void setBatchNode(cocos2d::CCParticleBatchNode*) = 0x46cce0;
    void getParticleCount() = 0x46c8a0;
    void getDuration() = 0x46c8b0;
    void setDuration(float) = 0x46c8c0;
    void getSourcePosition() = 0x46c8d0;
    void setSourcePosition(cocos2d::CCPoint const&) = 0x46c8e0;
    void getPosVar() = 0x46c900;
    void setPosVar(cocos2d::CCPoint const&) = 0x46c910;
    void getLife() = 0x46c930;
    void setLife(float) = 0x46c940;
    void getLifeVar() = 0x46c950;
    void setLifeVar(float) = 0x46c960;
    void getAngle() = 0x46c970;
    void setAngle(float) = 0x46c980;
    void getAngleVar() = 0x46c990;
    void setAngleVar(float) = 0x46c9a0;
    void getGravity() = 0x46c780;
    void setGravity(cocos2d::CCPoint const&) = 0x46c760;
    void getSpeed() = 0x46c7a0;
    void setSpeed(float) = 0x46c790;
    void getSpeedVar() = 0x46c7c0;
    void setSpeedVar(float) = 0x46c7b0;
    void getTangentialAccel() = 0x46c6d0;
    void setTangentialAccel(float) = 0x46c6c0;
    void getTangentialAccelVar() = 0x46c6f0;
    void setTangentialAccelVar(float) = 0x46c6e0;
    void getRadialAccel() = 0x46c710;
    void setRadialAccel(float) = 0x46c700;
    void getRadialAccelVar() = 0x46c730;
    void setRadialAccelVar(float) = 0x46c720;
    void getRotationIsDir() = 0x46c750;
    void setRotationIsDir(bool) = 0x46c740;
    void getStartRadius() = 0x46c7e0;
    void setStartRadius(float) = 0x46c7d0;
    void getStartRadiusVar() = 0x46c800;
    void setStartRadiusVar(float) = 0x46c7f0;
    void getEndRadius() = 0x46c820;
    void setEndRadius(float) = 0x46c810;
    void getEndRadiusVar() = 0x46c840;
    void setEndRadiusVar(float) = 0x46c830;
    void getRotatePerSecond() = 0x46c860;
    void setRotatePerSecond(float) = 0x46c850;
    void getRotatePerSecondVar() = 0x46c880;
    void setRotatePerSecondVar(float) = 0x46c870;
    void isActive() = 0x46c890;
    void isBlendAdditive() = 0x46c6a0;
    void setBlendAdditive(bool) = 0x46c640;
    void getStartSize() = 0x46c9b0;
    void setStartSize(float) = 0x46c9c0;
    void getStartSizeVar() = 0x46c9d0;
    void setStartSizeVar(float) = 0x46c9e0;
    void getEndSize() = 0x46c9f0;
    void setEndSize(float) = 0x46ca00;
    void getEndSizeVar() = 0x46ca10;
    void setEndSizeVar(float) = 0x46ca20;
    void getStartColor() = 0x46ca30;
    void setStartColor(cocos2d::_ccColor4F const&) = 0x46ca40;
    void getStartColorVar() = 0x46ca60;
    void setStartColorVar(cocos2d::_ccColor4F const&) = 0x46ca70;
    void getEndColor() = 0x46ca90;
    void setEndColor(cocos2d::_ccColor4F const&) = 0x46caa0;
    void getEndColorVar() = 0x46cac0;
    void setEndColorVar(cocos2d::_ccColor4F const&) = 0x46cad0;
    void getStartSpin() = 0x46caf0;
    void setStartSpin(float) = 0x46cb00;
    void getStartSpinVar() = 0x46cb10;
    void setStartSpinVar(float) = 0x46cb20;
    void getEndSpin() = 0x46cb30;
    void setEndSpin(float) = 0x46cb40;
    void getEndSpinVar() = 0x46cb50;
    void setEndSpinVar(float) = 0x46cb60;
    void getEmissionRate() = 0x46cb70;
    void setEmissionRate(float) = 0x46cb80;
    void getTotalParticles() = 0x46cb90;
    void setTotalParticles(unsigned int) = 0x46cba0;
    void getTexture() = 0x46c620;
    void setTexture(cocos2d::CCTexture2D*) = 0x46c4f0;
    void getBlendFunc() = 0x46cbb0;
    void setBlendFunc(cocos2d::_ccBlendFunc) = 0x46cbd0;
    void getOpacityModifyRGB() = 0x46cc50;
    void setOpacityModifyRGB(bool) = 0x46cc60;
    void getPositionType() = 0x46cc70;
    void setPositionType(cocos2d::tCCPositionType) = 0x46cc80;
    void isAutoRemoveOnFinish() = 0x46cc90;
    void setAutoRemoveOnFinish(bool) = 0x46cca0;
    void getEmitterMode() = 0x46ccb0;
    void setEmitterMode(int) = 0x46ccc0;
    void initWithTotalParticles(unsigned int) = 0x46b130;
    void updateQuadWithParticle(cocos2d::sCCParticle*, cocos2d::CCPoint const&) = 0x46c4d0;
    void postStep() = 0x46c4e0;
    void updateWithNoTime() = 0x46c4b0;
    void updateBlendFunc() = 0x46c5b0;
@end

@interface cocos2d::CCProfilingTimer
    ~CCProfilingTimer() = 0x28a470;
    ~CCProfilingTimer() = 0x28a4c0;
@end

@interface cocos2d::CCProgressFromTo
    ~CCProgressFromTo() = 0x23d6c0;
    ~CCProgressFromTo() = 0x23d6d0;
    void update(float) = 0x23d650;
    void startWithTarget(cocos2d::CCNode*) = 0x23d640;
    void reverse() = 0x23d590;
@end

@interface cocos2d::CCTMXObjectGroup
    ~CCTMXObjectGroup() = 0x25f5c0;
    ~CCTMXObjectGroup() = 0x25f5d0;
    void getProperties() = 0x25f800;
    void setProperties(cocos2d::CCDictionary*) = 0x25f810;
    void getObjects() = 0x25f850;
    void setObjects(cocos2d::CCArray*) = 0x25f860;
@end

@interface cocos2d::CCTMXTilesetInfo
    ~CCTMXTilesetInfo() = 0x282ad0;
    ~CCTMXTilesetInfo() = 0x282b50;
@end

@interface cocos2d::CCTargetedAction
    ~CCTargetedAction() = 0x1f99e0;
    ~CCTargetedAction() = 0x1f9a40;
    void update(float) = 0x1f9d40;
    void startWithTarget(cocos2d::CCNode*) = 0x1f9d00;
    void stop() = 0x1f9d30;
@end

@interface cocos2d::CCTransitionFade
    ~CCTransitionFade() = 0x8e860;
    ~CCTransitionFade() = 0x8e8c0;
    void onEnter() = 0x8eb30;
    void onExit() = 0x8ec60;
    void initWithDuration(float, cocos2d::CCScene*) = 0x8eb10;
    void initWithDuration(float, cocos2d::CCScene*, cocos2d::_ccColor3B const&) = 0x8ea50;
@end

@interface cocos2d::CCAutoreleasePool
    ~CCAutoreleasePool() = 0x214100;
    ~CCAutoreleasePool() = 0x214160;
@end

@interface cocos2d::CCDeccelAmplitude
    ~CCDeccelAmplitude() = 0xeecd0;
    ~CCDeccelAmplitude() = 0xeed20;
    void update(float) = 0xeedb0;
    void startWithTarget(cocos2d::CCNode*) = 0xeed80;
    void reverse() = 0xeee10;
@end

@interface cocos2d::CCEGLViewProtocol
    ~CCEGLViewProtocol() = 0x29d7b0;
    void getFrameSize() const = 0x29d950;
    void setFrameSize(float, float) = 0x29d960;
    void getVisibleSize() const = 0x29d9a0;
    void getVisibleOrigin() const = 0x29d9f0;
    void setDesignResolutionSize(float, float, ResolutionPolicy) = 0x29d7c0;
    void getDesignResolutionSize() const = 0x29d940;
    void setTouchDelegate(cocos2d::EGLTouchDelegate*) = 0x29da60;
    void setViewPortInPoints(float, float, float, float) = 0x29da70;
    void setScissorInPoints(float, float, float, float) = 0x29dab0;
    void isScissorEnabled() = 0x29daf0;
    void getScissorRect() = 0x29db10;
    void setViewName(char const*) = 0x29dba0;
    void handleTouchesBegin(int, int*, float*, float*) = 0x29dbd0;
    void handleTouchesMove(int, int*, float*, float*) = 0x29deb0;
    void handleTouchesEnd(int, int*, float*, float*) = 0x29e1d0;
    void handleTouchesCancel(int, int*, float*, float*) = 0x29e260;
    void pollInputEvents() = 0x29e320;
@end

@interface cocos2d::CCEaseBounceInOut
    ~CCEaseBounceInOut() = 0x2a5220;
    ~CCEaseBounceInOut() = 0x2a5270;
    void update(float) = 0x2a3f40;
    void reverse() = 0x2a40f0;
@end

@interface cocos2d::CCKeyboardHandler
    ~CCKeyboardHandler() = 0x241e90;
    ~CCKeyboardHandler() = 0x241f00;
    void initWithDelegate(cocos2d::CCKeyboardDelegate*) = 0x241ff0;
@end

@interface cocos2d::CCMouseDispatcher
    ~CCMouseDispatcher() = 0x2e8d40;
    ~CCMouseDispatcher() = 0x2e8d50;
@end

@interface cocos2d::CCSpriteBatchNode
    ~CCSpriteBatchNode() = 0xbb790;
    ~CCSpriteBatchNode() = 0xbb800;
    bool init() = 0xbb680;
    void addChild(cocos2d::CCNode*) = 0xbbb40;
    void addChild(cocos2d::CCNode*, int) = 0xbbb50;
    void addChild(cocos2d::CCNode*, int, int) = 0xbb930;
    void removeChild(cocos2d::CCNode*, bool) = 0xbbbb0;
    void removeAllChildrenWithCleanup(bool) = 0xbbe30;
    void reorderChild(cocos2d::CCNode*, int) = 0xbbb60;
    void sortAllChildren() = 0xbbee0;
    void draw() = 0xbc540;
    void visit() = 0xbb880;
    void getTexture() = 0xbcd70;
    void setTexture(cocos2d::CCTexture2D*) = 0xbcda0;
    void setBlendFunc(cocos2d::_ccBlendFunc) = 0xbcd30;
    void getBlendFunc() = 0xbcd50;
@end

@interface cocos2d::CCTouchDispatcher
    ~CCTouchDispatcher() = 0x280ed0;
    ~CCTouchDispatcher() = 0x280ef0;
    void touchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x282050;
    void touchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x282090;
    void touchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x2820d0;
    void touchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x282110;
@end

@interface cocos2d::CCTransitionFlipX
    ~CCTransitionFlipX() = 0x8cec0;
    ~CCTransitionFlipX() = 0x8cf20;
    void onEnter() = 0x8cf90;
@end

@interface cocos2d::CCTransitionFlipY
    ~CCTransitionFlipY() = 0x8d2c0;
    ~CCTransitionFlipY() = 0x8d320;
    void onEnter() = 0x8d390;
@end

@interface cocos2d::CCTransitionScene
    ~CCTransitionScene() = 0x89cf0;
    ~CCTransitionScene() = 0x89d50;
    void onEnter() = 0x8a1a0;
    void onExit() = 0x8a1f0;
    void cleanup() = 0x8a250;
    void draw() = 0x89f40;
    void initWithDuration(float, cocos2d::CCScene*) = 0x89ea0;
    void sceneOrder() = 0x89f30;
@end

@interface cocos2d::CCCardinalSplineBy
    ~CCCardinalSplineBy() = 0x1687c0;
    ~CCCardinalSplineBy() = 0x168820;
    void startWithTarget(cocos2d::CCNode*) = 0x1684b0;
    void reverse() = 0x168160;
    void updatePosition(cocos2d::CCPoint&) = 0x168110;
@end

@interface cocos2d::CCCardinalSplineTo
    ~CCCardinalSplineTo() = 0x167960;
    ~CCCardinalSplineTo() = 0x1679c0;
    void update(float) = 0x167c40;
    void startWithTarget(cocos2d::CCNode*) = 0x167aa0;
    void reverse() = 0x167f60;
    void updatePosition(cocos2d::CCPoint&) = 0x167f30;
@end

@interface cocos2d::CCEaseElasticInOut
    ~CCEaseElasticInOut() = 0x2a4f60;
    ~CCEaseElasticInOut() = 0x2a4fb0;
    void update(float) = 0x2a34f0;
    void reverse() = 0x2a3620;
@end

@interface cocos2d::CCFadeOutDownTiles
    ~CCFadeOutDownTiles() = 0x45e9d0;
    ~CCFadeOutDownTiles() = 0x45e9e0;
    void testFunc(cocos2d::CCSize const&, float) = 0x45d280;
@end

@interface cocos2d::CCKeyboardDelegate
    void keyUp(cocos2d::enumKeyCodes) = 0x61a0;
@end

@interface cocos2d::CCKeypadDispatcher
    ~CCKeypadDispatcher() = 0x360110;
    ~CCKeypadDispatcher() = 0x360120;
@end

@interface cocos2d::CCShatteredTiles3D
    ~CCShatteredTiles3D() = 0x45e8d0;
    ~CCShatteredTiles3D() = 0x45e8e0;
    void update(float) = 0x45bdc0;
    void initWithDuration(float, cocos2d::CCSize const&, int, bool) = 0x45bc70;
@end

@interface cocos2d::CCSpriteFrameCache
    ~CCSpriteFrameCache() = 0x198b50;
    ~CCSpriteFrameCache() = 0x198b60;
@end

@interface cocos2d::CCTransitionFadeBL
    ~CCTransitionFadeBL() = 0x901c0;
    ~CCTransitionFadeBL() = 0x90220;
    void actionWithSize(cocos2d::CCSize const&) = 0x90380;
@end

@interface cocos2d::CCTransitionFadeTR
    ~CCTransitionFadeTR() = 0x8fdf0;
    ~CCTransitionFadeTR() = 0x8fe50;
    void onEnter() = 0x8ffc0;
    void sceneOrder() = 0x8ffb0;
    void actionWithSize(cocos2d::CCSize const&) = 0x900c0;
    void easeActionWithAction(cocos2d::CCActionInterval*) = 0x900e0;
@end

@interface cocos2d::CCTransitionFadeUp
    ~CCTransitionFadeUp() = 0x90460;
    ~CCTransitionFadeUp() = 0x904c0;
    void actionWithSize(cocos2d::CCSize const&) = 0x90620;
@end

@interface cocos2d::CCEaseExponentialIn
    ~CCEaseExponentialIn() = 0x2a4930;
    ~CCEaseExponentialIn() = 0x2a4980;
    void update(float) = 0x2a2160;
    void reverse() = 0x2a21b0;
@end

@interface cocos2d::CCParticleBatchNode
    ~CCParticleBatchNode() = 0x205ff0;
    ~CCParticleBatchNode() = 0x206050;
    void addChild(cocos2d::CCNode*) = 0x206360;
    void addChild(cocos2d::CCNode*, int) = 0x206370;
    void addChild(cocos2d::CCNode*, int, int) = 0x206380;
    void removeChild(cocos2d::CCNode*, bool) = 0x206bd0;
    void removeAllChildrenWithCleanup(bool) = 0x206d10;
    void reorderChild(cocos2d::CCNode*, int) = 0x2067c0;
    void draw() = 0x206da0;
    void visit() = 0x2062e0;
    void getTexture() = 0x206f90;
    void setTexture(cocos2d::CCTexture2D*) = 0x206ee0;
    void setBlendFunc(cocos2d::_ccBlendFunc) = 0x206fc0;
    void getBlendFunc() = 0x206fe0;
@end

@interface cocos2d::CCTiledGrid3DAction
    ~CCTiledGrid3DAction() = 0xef100;
    ~CCTiledGrid3DAction() = 0xef110;
    void getGrid() = 0xee350;
@end

@interface cocos2d::CCTransitionMoveInB
    ~CCTransitionMoveInB() = 0x8b8d0;
    ~CCTransitionMoveInB() = 0x8b930;
    void initScenes() = 0x8ba90;
@end

@interface cocos2d::CCTransitionMoveInL
    ~CCTransitionMoveInL() = 0x8aef0;
    ~CCTransitionMoveInL() = 0x8af50;
    void onEnter() = 0x8b0b0;
    void initScenes() = 0x8b1e0;
    void action() = 0x8b180;
    void easeActionWithAction(cocos2d::CCActionInterval*) = 0x8b1c0;
@end

@interface cocos2d::CCTransitionMoveInR
    ~CCTransitionMoveInR() = 0x8b310;
    ~CCTransitionMoveInR() = 0x8b370;
    void initScenes() = 0x8b4d0;
@end

@interface cocos2d::CCTransitionMoveInT
    ~CCTransitionMoveInT() = 0x8b5f0;
    ~CCTransitionMoveInT() = 0x8b650;
    void initScenes() = 0x8b7b0;
@end

@interface cocos2d::CCComponentContainer
    ~CCComponentContainer() = 0x166350;
    void get(char const*) const = 0x1663a0;
    void add(cocos2d::CCComponent*) = 0x166470;
    void remove(char const*) = 0x1665f0;
    void remove(cocos2d::CCComponent*) = 0x1668d0;
    void removeAll() = 0x166ab0;
    void visit(float) = 0x166cb0;
@end

@interface cocos2d::CCEaseExponentialOut
    ~CCEaseExponentialOut() = 0x2a49e0;
    ~CCEaseExponentialOut() = 0x2a4a30;
    void update(float) = 0x2a2360;
    void reverse() = 0x2a23b0;
@end

@interface cocos2d::CCKeyboardDispatcher
    ~CCKeyboardDispatcher() = 0xe7f90;
    ~CCKeyboardDispatcher() = 0xe7fa0;
@end

@interface cocos2d::CCNotificationCenter
    ~CCNotificationCenter() = 0x131c00;
    ~CCNotificationCenter() = 0x131c50;
@end

@interface cocos2d::CCParticleSystemQuad
    ~CCParticleSystemQuad() = 0x36afc0;
    ~CCParticleSystemQuad() = 0x36afd0;
    void draw() = 0x36b850;
    void setBatchNode(cocos2d::CCParticleBatchNode*) = 0x36bb70;
    void setTotalParticles(unsigned int) = 0x36b910;
    void setTexture(cocos2d::CCTexture2D*) = 0x36b3c0;
    void initWithTotalParticles(unsigned int) = 0x36aa80;
    void updateQuadWithParticle(cocos2d::sCCParticle*, cocos2d::CCPoint const&) = 0x36b570;
    void postStep() = 0x36b800;
@end

@interface cocos2d::CCScriptHandlerEntry
    ~CCScriptHandlerEntry() = 0x198280;
    ~CCScriptHandlerEntry() = 0x198300;
@end

@interface cocos2d::CCTransitionFadeDown
    ~CCTransitionFadeDown() = 0x90700;
    ~CCTransitionFadeDown() = 0x90760;
    void actionWithSize(cocos2d::CCSize const&) = 0x908c0;
@end

@interface cocos2d::CCTransitionJumpZoom
    ~CCTransitionJumpZoom() = 0x8aa40;
    ~CCTransitionJumpZoom() = 0x8aaa0;
    void onEnter() = 0x8abf0;
@end

@interface cocos2d::CCTransitionPageTurn
    ~CCTransitionPageTurn() = 0x20d0d0;
    ~CCTransitionPageTurn() = 0x20d0e0;
    void onEnter() = 0x20d1d0;
    void sceneOrder() = 0x20d1b0;
    void initWithDuration(float, cocos2d::CCScene*, bool) = 0x20d190;
@end

@interface cocos2d::CCTransitionProgress
    ~CCTransitionProgress() = 0x1385e0;
    ~CCTransitionProgress() = 0x1385f0;
    void onEnter() = 0x137970;
    void onExit() = 0x137b30;
    void sceneOrder() = 0x137b60;
    void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x137ba0;
    void setupTransition() = 0x137b70;
@end

@interface cocos2d::CCTransitionRotoZoom
    ~CCTransitionRotoZoom() = 0x8a700;
    ~CCTransitionRotoZoom() = 0x8a760;
    void onEnter() = 0x8a7d0;
@end

@interface cocos2d::CCTransitionSlideInB
    ~CCTransitionSlideInB() = 0x8c730;
    ~CCTransitionSlideInB() = 0x8c790;
    void sceneOrder() = 0x8c8f0;
    void initScenes() = 0x8c900;
    void action() = 0x8c970;
@end

@interface cocos2d::CCTransitionSlideInL
    ~CCTransitionSlideInL() = 0x8bbc0;
    ~CCTransitionSlideInL() = 0x8bc20;
    void onEnter() = 0x8bc90;
    void sceneOrder() = 0x8bd80;
    void initScenes() = 0x8bd90;
    void action() = 0x8be00;
    void easeActionWithAction(cocos2d::CCActionInterval*) = 0x8be60;
@end

@interface cocos2d::CCTransitionSlideInR
    ~CCTransitionSlideInR() = 0x8c050;
    ~CCTransitionSlideInR() = 0x8c0b0;
    void sceneOrder() = 0x8c210;
    void initScenes() = 0x8c220;
    void action() = 0x8c290;
@end

@interface cocos2d::CCTransitionSlideInT
    ~CCTransitionSlideInT() = 0x8c3c0;
    ~CCTransitionSlideInT() = 0x8c420;
    void sceneOrder() = 0x8c580;
    void initScenes() = 0x8c590;
    void action() = 0x8c600;
@end

@interface cocos2d::CCBMFontConfiguration
    ~CCBMFontConfiguration() = 0x346130;
    ~CCBMFontConfiguration() = 0x346140;
@end

@interface cocos2d::CCDisplayLinkDirector
    ~CCDisplayLinkDirector() = 0x24b240;
    ~CCDisplayLinkDirector() = 0x24b250;
    void setAnimationInterval(double) = 0x24b180;
    void stopAnimation() = 0x24b170;
    void startAnimation() = 0x24b0f0;
    void mainLoop() = 0x24b130;
@end

@interface cocos2d::CCTransitionCrossFade
    ~CCTransitionCrossFade() = 0x8ed70;
    ~CCTransitionCrossFade() = 0x8edd0;
    void onEnter() = 0x8ef30;
    void onExit() = 0x8f290;
    void draw() = 0x8ef20;
@end

@interface cocos2d::CCTransitionSplitCols
    ~CCTransitionSplitCols() = 0x8f780;
    ~CCTransitionSplitCols() = 0x8f7e0;
    void onEnter() = 0x8f940;
    void action() = 0x8fa30;
    void easeActionWithAction(cocos2d::CCActionInterval*) = 0x8fa50;
@end

@interface cocos2d::CCTransitionSplitRows
    ~CCTransitionSplitRows() = 0x8fb50;
    ~CCTransitionSplitRows() = 0x8fbb0;
    void action() = 0x8fc20;
@end

@interface cocos2d::CCTransitionZoomFlipX
    ~CCTransitionZoomFlipX() = 0x8dae0;
    ~CCTransitionZoomFlipX() = 0x8db40;
    void onEnter() = 0x8dbb0;
@end

@interface cocos2d::CCTransitionZoomFlipY
    ~CCTransitionZoomFlipY() = 0x8df50;
    ~CCTransitionZoomFlipY() = 0x8dfb0;
    void onEnter() = 0x8e020;
@end

@interface cocos2d::CCAccelDeccelAmplitude
    ~CCAccelDeccelAmplitude() = 0xee610;
    ~CCAccelDeccelAmplitude() = 0xee660;
    void update(float) = 0xee6f0;
    void startWithTarget(cocos2d::CCNode*) = 0xee6c0;
    void reverse() = 0xee750;
@end

@interface cocos2d::CCEaseExponentialInOut
    ~CCEaseExponentialInOut() = 0x2a4a90;
    ~CCEaseExponentialInOut() = 0x2a4ae0;
    void update(float) = 0x2a2560;
    void reverse() = 0x2a25d0;
@end

@interface cocos2d::CCNotificationObserver
    ~CCNotificationObserver() = 0x132640;
    ~CCNotificationObserver() = 0x132680;
    void getTarget() = 0x1326e0;
    cocos2d::SEL_CallFuncO getSelector() = 0x1326f0;
    void getName() = 0x132700;
    void getObject() = 0x132710;
    void getHandler() = 0x132720;
    void setHandler(int) = 0x132730;
@end

@interface cocos2d::CCStandardTouchHandler
    ~CCStandardTouchHandler() = 0x2482a0;
    ~CCStandardTouchHandler() = 0x248310;
    void initWithDelegate(cocos2d::CCTouchDelegate*, int) = 0x247ed0;
@end

@interface cocos2d::CCTargetedTouchHandler
    ~CCTargetedTouchHandler() = 0x248260;
    ~CCTargetedTouchHandler() = 0x248270;
@end

@interface cocos2d::CCTransitionShrinkGrow
    ~CCTransitionShrinkGrow() = 0x8ca90;
    ~CCTransitionShrinkGrow() = 0x8caf0;
    void onEnter() = 0x8cc50;
    void easeActionWithAction(cocos2d::CCActionInterval*) = 0x8cde0;
@end

@interface cocos2d::CCTransitionFlipAngular
    ~CCTransitionFlipAngular() = 0x8d6d0;
    ~CCTransitionFlipAngular() = 0x8d730;
    void onEnter() = 0x8d7a0;
@end

@interface cocos2d::CCTransitionTurnOffTiles
    ~CCTransitionTurnOffTiles() = 0x8f3c0;
    ~CCTransitionTurnOffTiles() = 0x8f420;
    void onEnter() = 0x8f590;
    void sceneOrder() = 0x8f580;
    void easeActionWithAction(cocos2d::CCActionInterval*) = 0x8f6a0;
@end

@interface cocos2d::CCTouchScriptHandlerEntry
    ~CCTouchScriptHandlerEntry() = 0x1987d0;
    ~CCTouchScriptHandlerEntry() = 0x1987e0;
@end

@interface cocos2d::CCTransitionProgressInOut
    ~CCTransitionProgressInOut() = 0x138720;
    ~CCTransitionProgressInOut() = 0x138730;
    void sceneOrder() = 0x1382d0;
    void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x138300;
    void setupTransition() = 0x1382e0;
@end

@interface cocos2d::CCTransitionProgressOutIn
    ~CCTransitionProgressOutIn() = 0x138760;
    ~CCTransitionProgressOutIn() = 0x138770;
    void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x1384c0;
@end

@interface cocos2d::CCTransitionSceneOriented
    ~CCTransitionSceneOriented() = 0x8a330;
    ~CCTransitionSceneOriented() = 0x8a390;
    void initWithDuration(float, cocos2d::CCScene*, cocos2d::tOrientation) = 0x8a4e0;
@end

@interface cocos2d::CCTransitionZoomFlipAngular
    ~CCTransitionZoomFlipAngular() = 0x8e3d0;
    ~CCTransitionZoomFlipAngular() = 0x8e430;
    void onEnter() = 0x8e4a0;
@end

@interface cocos2d::CCTransitionProgressRadialCW
    ~CCTransitionProgressRadialCW() = 0x138660;
    ~CCTransitionProgressRadialCW() = 0x138670;
    void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x137dd0;
@end

@interface cocos2d::CCTransitionProgressVertical
    ~CCTransitionProgressVertical() = 0x1386e0;
    ~CCTransitionProgressVertical() = 0x1386f0;
    void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x138110;
@end

@interface cocos2d::CCSchedulerScriptHandlerEntry
    ~CCSchedulerScriptHandlerEntry() = 0x1985f0;
    ~CCSchedulerScriptHandlerEntry() = 0x198600;
@end

@interface cocos2d::CCTransitionProgressRadialCCW
    ~CCTransitionProgressRadialCCW() = 0x138620;
    ~CCTransitionProgressRadialCCW() = 0x138630;
    void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x137bb0;
@end

@interface cocos2d::CCTransitionProgressHorizontal
    ~CCTransitionProgressHorizontal() = 0x1386a0;
    ~CCTransitionProgressHorizontal() = 0x1386b0;
    void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x137f50;
@end

@interface cocos2d::CCSet
    ~CCSet() = 0x45b050;
    ~CCSet() = 0x45b060;
    void acceptVisitor(cocos2d::CCDataVisitor&) = 0x45b090;
@end

@interface cocos2d::CCMenu
    ~CCMenu() = 0x43a4f0;
    ~CCMenu() = 0x43a500;
    bool init() = 0x438b90;
    void addChild(cocos2d::CCNode*) = 0x438ba0;
    void addChild(cocos2d::CCNode*, int) = 0x438bb0;
    void addChild(cocos2d::CCNode*, int, int) = 0x438bc0;
    void removeChild(cocos2d::CCNode*, bool) = 0x438c20;
    void onExit() = 0x438bd0;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x438d20;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x4390b0;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x438fd0;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x439050;
    void registerWithTouchDispatcher() = 0x438cd0;
    void setOpacityModifyRGB(bool) = 0x18e6d0;
    void isOpacityModifyRGB() = 0x18e6e0;
    void isEnabled() = 0x18e6f0;
    void setEnabled(bool) = 0x18e700;
@end

@interface cocos2d::CCNode
    ~CCNode() = 0x1228d0;
    ~CCNode() = 0x1228e0;
    void update(float) = 0x1241a0;
    bool init() = 0x122910;
    void setZOrder(int) = 0x1229a0;
    void _setZOrder(int) = 0x122990;
    void getZOrder() = 0x122980;
    void setVertexZ(float) = 0x1229f0;
    void getVertexZ() = 0x1229e0;
    void setScaleX(float) = 0x122b10;
    void getScaleX() = 0x122b00;
    void setScaleY(float) = 0x122b40;
    void getScaleY() = 0x122b30;
    void setScale(float) = 0x122ac0;
    void getScale() = 0x122ab0;
    void setScale(float, float) = 0x122ae0;
    void setPosition(cocos2d::CCPoint const&) = 0x122b70;
    void getPosition() = 0x122b60;
    void setPosition(float, float) = 0x122ba0;
    void getPosition(float*, float*) = 0x122b90;
    void setPositionX(float) = 0x122c00;
    void getPositionX() = 0x122be0;
    void setPositionY(float) = 0x122c40;
    void getPositionY() = 0x122bf0;
    void setSkewX(float) = 0x122930;
    void getSkewX() = 0x122920;
    void setSkewY(float) = 0x122960;
    void getSkewY() = 0x122950;
    void setAnchorPoint(cocos2d::CCPoint const&) = 0x122d90;
    void getAnchorPoint() = 0x122d80;
    void getAnchorPointInPoints() = 0x122d70;
    void setContentSize(cocos2d::CCSize const&) = 0x122e50;
    void getContentSize() const = 0x122e00;
    void getScaledContentSize() = 0x122e10;
    void setVisible(bool) = 0x122d60;
    void isVisible() = 0x122d50;
    void setRotation(float) = 0x122a10;
    void getRotation() = 0x122a00;
    void setRotationX(float) = 0x122a60;
    void getRotationX() = 0x122a50;
    void setRotationY(float) = 0x122a90;
    void getRotationY() = 0x122a80;
    void setOrderOfArrival(unsigned int) = 0x122f60;
    void getOrderOfArrival() = 0x122f50;
    void setGLServerState(cocos2d::ccGLServerState) = 0x122fa0;
    void getGLServerState() = 0x122f90;
    void ignoreAnchorPointForPosition(bool) = 0x122f00;
    void isIgnoreAnchorPointForPosition() = 0x122ef0;
    void addChild(cocos2d::CCNode*) = 0x1233d0;
    void addChild(cocos2d::CCNode*, int) = 0x1233b0;
    void addChild(cocos2d::CCNode*, int, int) = 0x1232a0;
    void getChildByTag(int) = 0x123220;
    void getChildren() = 0x122c80;
    void getChildrenCount() const = 0x122c90;
    void setParent(cocos2d::CCNode*) = 0x122ee0;
    void getParent() = 0x122ed0;
    void removeFromParent() = 0x1233f0;
    void removeFromParentAndCleanup(bool) = 0x123410;
    void removeMeAndCleanup() = 0x123440;
    void removeChild(cocos2d::CCNode*) = 0x123460;
    void removeChild(cocos2d::CCNode*, bool) = 0x123480;
    void removeChildByTag(int) = 0x1235a0;
    void removeChildByTag(int, bool) = 0x1235c0;
    void removeAllChildren() = 0x123600;
    void removeAllChildrenWithCleanup(bool) = 0x123620;
    void reorderChild(cocos2d::CCNode*, int) = 0x123760;
    void sortAllChildren() = 0x1237b0;
    void getGrid() = 0x122d00;
    void setGrid(cocos2d::CCGridBase*) = 0x122d10;
    void getUserData() = 0x122f30;
    void setUserData(void*) = 0x122f40;
    void getUserObject() = 0x122f80;
    void setUserObject(cocos2d::CCObject*) = 0x122fb0;
    void getShaderProgram() = 0x122f70;
    void setShaderProgram(cocos2d::CCGLProgram*) = 0x122ff0;
    void getCamera() = 0x122cb0;
    void isRunning() = 0x122ec0;
    void registerScriptHandler(int) = 0x123d90;
    void unregisterScriptHandler() = 0x123dc0;
    void onEnter() = 0x123a90;
    void onEnterTransitionDidFinish() = 0x123b90;
    void onExit() = 0x123ca0;
    void onExitTransitionDidStart() = 0x123c00;
    void cleanup() = 0x123100;
    void draw() = 0x123840;
    void visit() = 0x123850;
    void setActionManager(cocos2d::CCActionManager*) = 0x123e00;
    void getActionManager() = 0x123e50;
    void setScheduler(cocos2d::CCScheduler*) = 0x123f20;
    void getScheduler() = 0x123f70;
    void updateTransform() = 0x1249d0;
    void nodeToParentTransform() = 0x124210;
    void parentToNodeTransform() = 0x1245d0;
    void nodeToWorldTransform() = 0x124670;
    void worldToNodeTransform() = 0x124710;
    void addComponent(cocos2d::CCComponent*) = 0x124a40;
    void removeComponent(char const*) = 0x124a60;
    void removeComponent(cocos2d::CCComponent*) = 0x124a80;
    void removeAllComponents() = 0x124aa0;
    void updateTweenAction(float, char const*) = 0x1249c0;
@end

@interface cocos2d::CCArray
    ~CCArray() = 0x41a6c0;
    ~CCArray() = 0x41a710;
    void acceptVisitor(cocos2d::CCDataVisitor&) = 0x41a880;
@end

@interface cocos2d::CCBlink
    ~CCBlink() = 0x1fa0e0;
    ~CCBlink() = 0x1fa0f0;
    void update(float) = 0x1f79f0;
    void startWithTarget(cocos2d::CCNode*) = 0x1f78b0;
    void stop() = 0x1f7880;
    void reverse() = 0x1f7a70;
@end

@interface cocos2d::CCFlipX
    ~CCFlipX() = 0x455cd0;
    ~CCFlipX() = 0x455ce0;
    void update(float) = 0x454910;
    void reverse() = 0x454930;
@end

@interface cocos2d::CCFlipY
    ~CCFlipY() = 0x455d10;
    ~CCFlipY() = 0x455d20;
    void update(float) = 0x454ab0;
    void reverse() = 0x454ad0;
@end

@interface cocos2d::CCImage
    ~CCImage() = 0x24fa80;
    ~CCImage() = 0x24fac0;
@end

@interface cocos2d::CCLayer
    ~CCLayer() = 0x272900;
    ~CCLayer() = 0x272930;
    bool init() = 0x2729a0;
    void onEnter() = 0x273300;
    void onEnterTransitionDidFinish() = 0x273490;
    void onExit() = 0x2733c0;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2734d0;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x273550;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2735d0;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x273650;
    void ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x2736d0;
    void ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x273750;
    void ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x2737d0;
    void ccTouchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x273850;
    void didAccelerate(cocos2d::CCAcceleration*) = 0x272ea0;
    void registerWithTouchDispatcher() = 0x272b40;
    void registerScriptTouchHandler(int, bool, int, bool) = 0x272bd0;
    void unregisterScriptTouchHandler() = 0x272c30;
    void isTouchEnabled() = 0x272ce0;
    void setTouchEnabled(bool) = 0x272cf0;
    void setTouchMode(cocos2d::ccTouchesMode) = 0x272d60;
    void getTouchMode() = 0x272e10;
    void setTouchPriority(int) = 0x272db0;
    void getTouchPriority() = 0x272e00;
    void isAccelerometerEnabled() = 0x272e20;
    void setAccelerometerEnabled(bool) = 0x272e30;
    void setAccelerometerInterval(double) = 0x272e70;
    void isKeypadEnabled() = 0x272f70;
    void setKeypadEnabled(bool) = 0x272f80;
    void isKeyboardEnabled() = 0x273010;
    void setKeyboardEnabled(bool) = 0x273020;
    void isMouseEnabled() = 0x273090;
    void setMouseEnabled(bool) = 0x2730a0;
    void keyBackClicked() = 0x273160;
    void keyMenuClicked() = 0x273200;
    void keyDown(cocos2d::enumKeyCodes) = 0x273280;
@end

@interface cocos2d::CCPlace
    ~CCPlace() = 0x455d50;
    ~CCPlace() = 0x455d60;
    void update(float) = 0x454d70;
@end

@interface cocos2d::CCScene
    ~CCScene() = 0x13c0b0;
    ~CCScene() = 0x13c0c0;
    bool init() = 0x13c0f0;
@end

@interface cocos2d::CCSpawn
    ~CCSpawn() = 0x1f4580;
    ~CCSpawn() = 0x1f45e0;
    void update(float) = 0x1f46c0;
    void startWithTarget(cocos2d::CCNode*) = 0x1f4650;
    void stop() = 0x1f4690;
    void reverse() = 0x1f4710;
@end

@interface cocos2d::CCSpeed
    ~CCSpeed() = 0x35b910;
    ~CCSpeed() = 0x35b970;
    void isDone() = 0x35bc50;
    void startWithTarget(cocos2d::CCNode*) = 0x35bbe0;
    void stop() = 0x35bc00;
    void step(float) = 0x35bc30;
    void reverse() = 0x35bc60;
@end

@interface cocos2d::CCTimer
    ~CCTimer() = 0x244980;
    ~CCTimer() = 0x244990;
    void update(float) = 0x242440;
@end

@interface cocos2d::CCTwirl
    ~CCTwirl() = 0x129cc0;
    ~CCTwirl() = 0x129cd0;
    void update(float) = 0x129850;
@end

@interface cocos2d::CCWaves
    ~CCWaves() = 0x129c80;
    ~CCWaves() = 0x129c90;
    void update(float) = 0x129340;
@end

@interface cocos2d::ZipFile
    ~ZipFile() = 0xeba30;
@end

@interface cocos2d::CCAction
    ~CCAction() = 0x35b6b0;
    ~CCAction() = 0x35b6d0;
    void update(float) = 0x35b890;
    void setTag(int) = 0xef0b0;
    void isDone() = 0x35b870;
    void startWithTarget(cocos2d::CCNode*) = 0x35b850;
    void stop() = 0x35b860;
    void step(float) = 0x35b880;
@end

@interface cocos2d::CCCamera
    ~CCCamera() = 0x2e0980;
    ~CCCamera() = 0x2e0990;
@end

@interface cocos2d::CCEaseIn
    ~CCEaseIn() = 0x2a4720;
    ~CCEaseIn() = 0x2a4770;
    void update(float) = 0x2a1b10;
    void reverse() = 0x2a1b40;
@end

@interface cocos2d::CCFadeIn
    ~CCFadeIn() = 0x1fa120;
    ~CCFadeIn() = 0x1fa130;
    void update(float) = 0x1f7c80;
    void reverse() = 0x1f7ce0;
@end

@interface cocos2d::CCFadeTo
    ~CCFadeTo() = 0x1fa1a0;
    ~CCFadeTo() = 0x1fa1b0;
    void update(float) = 0x1f8220;
    void startWithTarget(cocos2d::CCNode*) = 0x1f81c0;
@end

@interface cocos2d::CCFollow
    ~CCFollow() = 0x35bdb0;
    ~CCFollow() = 0x35be10;
    void isDone() = 0x35c2e0;
    void stop() = 0x35c300;
    void step(float) = 0x35c1f0;
@end

@interface cocos2d::CCGrid3D
    ~CCGrid3D() = 0x288470;
    ~CCGrid3D() = 0x288480;
    void blit() = 0x2884b0;
    void reuse() = 0x288da0;
    void calculateVertexPoints() = 0x288550;
@end

@interface cocos2d::CCJumpBy
    ~CCJumpBy() = 0x1f9f60;
    ~CCJumpBy() = 0x1f9f70;
    void update(float) = 0x1f6160;
    void startWithTarget(cocos2d::CCNode*) = 0x1f6110;
    void reverse() = 0x1f6290;
@end

@interface cocos2d::CCJumpTo
    ~CCJumpTo() = 0x1f9fa0;
    ~CCJumpTo() = 0x1f9fb0;
    void startWithTarget(cocos2d::CCNode*) = 0x1f6570;
@end

@interface cocos2d::CCLens3D
    ~CCLens3D() = 0x129b80;
    ~CCLens3D() = 0x129b90;
    void update(float) = 0x128140;
@end

@interface cocos2d::CCLiquid
    ~CCLiquid() = 0x129c40;
    ~CCLiquid() = 0x129c50;
    void update(float) = 0x128ed0;
@end

@interface cocos2d::CCMoveBy
    ~CCMoveBy() = 0x1f9e60;
    ~CCMoveBy() = 0x1f9e70;
    void update(float) = 0x1f5400;
    void startWithTarget(cocos2d::CCNode*) = 0x1f5360;
    void reverse() = 0x1f53b0;
@end

@interface cocos2d::CCMoveTo
    ~CCMoveTo() = 0x1f9ea0;
    ~CCMoveTo() = 0x1f9eb0;
    void startWithTarget(cocos2d::CCNode*) = 0x1f5740;
@end

@interface cocos2d::CCObject
    ~CCObject() = 0x250d90;
    ~CCObject() = 0x250e00;
    void isEqual(cocos2d::CCObject const*) = 0x250f20;
    void acceptVisitor(cocos2d::CCDataVisitor&) = 0x250f30;
    void update(float) = 0x32660;
    void encodeWithCoder(DS_Dictionary*) = 0x250f70;
    void canEncode() = 0x250f90;
    void getTag() const = 0x250f50;
    void setTag(int) = 0x250f60;
@end

@interface cocos2d::CCRepeat
    ~CCRepeat() = 0x1f3580;
    ~CCRepeat() = 0x1f35d0;
    void update(float) = 0x1f36b0;
    void isDone() = 0x1f37e0;
    void startWithTarget(cocos2d::CCNode*) = 0x1f3630;
    void stop() = 0x1f3680;
    void reverse() = 0x1f37f0;
@end

@interface cocos2d::CCSkewBy
    ~CCSkewBy() = 0x1f9f20;
    ~CCSkewBy() = 0x1f9f30;
    void startWithTarget(cocos2d::CCNode*) = 0x1f5d00;
    void reverse() = 0x1f5d40;
    void initWithDuration(float, float, float) = 0x1f5cb0;
@end

@interface cocos2d::CCSkewTo
    ~CCSkewTo() = 0x1f9ee0;
    ~CCSkewTo() = 0x1f9ef0;
    void update(float) = 0x1f5b20;
    void startWithTarget(cocos2d::CCNode*) = 0x1f59f0;
    void initWithDuration(float, float, float) = 0x1f58d0;
@end

@interface cocos2d::CCSprite
    ~CCSprite() = 0x133430;
    ~CCSprite() = 0x1334a0;
    bool init() = 0x132ef0;
    void setVertexZ(float) = 0x134a80;
    void setScaleX(float) = 0x134900;
    void setScaleY(float) = 0x134980;
    void setScale(float) = 0x134a00;
    void setPosition(cocos2d::CCPoint const&) = 0x134650;
    void setSkewX(float) = 0x134820;
    void setSkewY(float) = 0x134890;
    void setAnchorPoint(cocos2d::CCPoint const&) = 0x134af0;
    void setVisible(bool) = 0x134b70;
    void setRotation(float) = 0x1346d0;
    void setRotationX(float) = 0x134740;
    void setRotationY(float) = 0x1347b0;
    void ignoreAnchorPointForPosition(bool) = 0x134b60;
    void addChild(cocos2d::CCNode*) = 0x134190;
    void addChild(cocos2d::CCNode*, int) = 0x1341a0;
    void addChild(cocos2d::CCNode*, int, int) = 0x1341b0;
    void removeChild(cocos2d::CCNode*, bool) = 0x134300;
    void removeAllChildrenWithCleanup(bool) = 0x134340;
    void reorderChild(cocos2d::CCNode*, int) = 0x134270;
    void sortAllChildren() = 0x1343f0;
    void draw() = 0x134070;
    void updateTransform() = 0x133b70;
    void setOpacity(unsigned char) = 0x134da0;
    void updateDisplayedOpacity(unsigned char) = 0x1354c0;
    void setColor(cocos2d::_ccColor3B const&) = 0x134ff0;
    void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x135370;
    void setOpacityModifyRGB(bool) = 0x135200;
    void isOpacityModifyRGB() = 0x135350;
    void initWithTexture(cocos2d::CCTexture2D*) = 0x133110;
    void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&) = 0x1330f0;
    void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool) = 0x132f10;
    void initWithSpriteFrame(cocos2d::CCSpriteFrame*) = 0x133270;
    void initWithSpriteFrameName(char const*) = 0x1332c0;
    void initWithFile(char const*) = 0x133180;
    void initWithFile(char const*, cocos2d::CCRect const&) = 0x133210;
    void setTexture(cocos2d::CCTexture2D*) = 0x135a90;
    void getTexture() = 0x135c00;
    void setBlendFunc(cocos2d::_ccBlendFunc) = 0x50590;
    void getBlendFunc() = 0x505a0;
    void setChildColor(cocos2d::_ccColor3B const&) = 0x135160;
    void setChildOpacity(unsigned char) = 0x134f50;
    void getBatchNode() = 0x135910;
    void setBatchNode(cocos2d::CCSpriteBatchNode*) = 0x135920;
    void refreshTextureRect() = 0x133520;
    void setTextureRect(cocos2d::CCRect const&) = 0x133560;
    void setTextureRect(cocos2d::CCRect const&, bool, cocos2d::CCSize const&) = 0x133580;
    void setVertexRect(cocos2d::CCRect const&) = 0x1338f0;
    void setDisplayFrame(cocos2d::CCSpriteFrame*) = 0x135610;
    void isFrameDisplayed(cocos2d::CCSpriteFrame*) = 0x1356d0;
    void displayFrame() = 0x135760;
    void setDisplayFrameWithAnimationName(char const*, int) = 0x135680;
    void isDirty() = 0x505b0;
    void setDirty(bool) = 0x505c0;
    void setTextureCoords(cocos2d::CCRect const&) = 0x133910;
    void updateBlendFunc() = 0x135a20;
    void setReorderChildDirtyRecursively() = 0x134550;
    void setDirtyRecursively(bool) = 0x1345b0;
@end

@interface cocos2d::CCString
    ~CCString() = 0x44c590;
    ~CCString() = 0x44c5a0;
    void isEqual(cocos2d::CCObject const*) = 0x44c8f0;
    void acceptVisitor(cocos2d::CCDataVisitor&) = 0x44ccb0;
@end

@interface cocos2d::CCTintBy
    ~CCTintBy() = 0x1fa220;
    ~CCTintBy() = 0x1fa230;
    void update(float) = 0x1f8870;
    void startWithTarget(cocos2d::CCNode*) = 0x1f8800;
    void reverse() = 0x1f8950;
@end

@interface cocos2d::CCTintTo
    ~CCTintTo() = 0x1fa1e0;
    ~CCTintTo() = 0x1fa1f0;
    void update(float) = 0x1f8510;
    void startWithTarget(cocos2d::CCNode*) = 0x1f84b0;
@end

@interface cocos2d::CCAnimate
    ~CCAnimate() = 0x1f9530;
    ~CCAnimate() = 0x1f9540;
    void update(float) = 0x1f9610;
    void startWithTarget(cocos2d::CCNode*) = 0x1f9570;
    void stop() = 0x1f95d0;
    void reverse() = 0x1f9840;
@end

@interface cocos2d::CCEGLView
    ~CCEGLView() = 0x295420;
    void end() = 0x2954a0;
    void isOpenGLReady() = 0x295470;
    void swapBuffers() = 0x295510;
    void setIMEKeyboardState(bool) = 0x295550;
@end

@interface cocos2d::CCEaseOut
    ~CCEaseOut() = 0x2a47d0;
    ~CCEaseOut() = 0x2a4820;
    void update(float) = 0x2a1d20;
    void reverse() = 0x2a1d50;
@end

@interface cocos2d::CCFadeOut
    ~CCFadeOut() = 0x1fa160;
    ~CCFadeOut() = 0x1fa170;
    void update(float) = 0x1f7ee0;
    void reverse() = 0x1f7f50;
@end

@interface cocos2d::CCFlipX3D
    ~CCFlipX3D() = 0x129b00;
    ~CCFlipX3D() = 0x129b10;
    void update(float) = 0x127560;
    void initWithDuration(float) = 0x1273d0;
    void initWithSize(cocos2d::CCSize const&, float) = 0x127420;
@end

@interface cocos2d::CCFlipY3D
    ~CCFlipY3D() = 0x129b40;
    ~CCFlipY3D() = 0x129b50;
    void update(float) = 0x127a50;
@end

@interface cocos2d::CCGrabber
    ~CCGrabber() = 0x360fe0;
    ~CCGrabber() = 0x361030;
@end

@interface cocos2d::CCScaleBy
    ~CCScaleBy() = 0x1fa0a0;
    ~CCScaleBy() = 0x1fa0b0;
    void startWithTarget(cocos2d::CCNode*) = 0x1f7640;
    void reverse() = 0x1f76b0;
@end

@interface cocos2d::CCScaleTo
    ~CCScaleTo() = 0x1fa060;
    ~CCScaleTo() = 0x1fa070;
    void update(float) = 0x1f7360;
    void startWithTarget(cocos2d::CCNode*) = 0x1f72f0;
@end

@interface cocos2d::CCShaky3D
    ~CCShaky3D() = 0x129c00;
    ~CCShaky3D() = 0x129c10;
    void update(float) = 0x128ae0;
@end

@interface cocos2d::CCWaves3D
    ~CCWaves3D() = 0x129ac0;
    ~CCWaves3D() = 0x129ad0;
    void update(float) = 0x127170;
@end

@interface cocos2d::extension::CCTableView
    ~CCTableView() = 0x233a60;
    ~CCTableView() = 0x233ab0;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x234bf0;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x234da0;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x234ae0;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x234e50;
@end

@interface cocos2d::extension::CCHttpClient
    ~CCHttpClient() = 0x23da60;
    ~CCHttpClient() = 0x23dad0;
@end

@interface cocos2d::extension::CCScrollView
    ~CCScrollView() = 0x214c30;
    ~CCScrollView() = 0x214c60;
    bool init() = 0x214fb0;
    void setContentSize(cocos2d::CCSize const&) = 0x215eb0;
    void getContentSize() const = 0x215e90;
    void addChild(cocos2d::CCNode*) = 0x216160;
    void addChild(cocos2d::CCNode*, int) = 0x216120;
    void addChild(cocos2d::CCNode*, int, int) = 0x216080;
    void visit() = 0x2164a0;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x216620;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x216890;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x216c70;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x216d30;
    void registerWithTouchDispatcher() = 0x214ff0;
    void setTouchEnabled(bool) = 0x215250;
@end

// @interface cocos2d::extension::AssetsManager::Helper
//     ~Helper() = 0x2e83e0;
//     ~Helper() = 0x2e83f0;
//     void update(float) = 0x2e8420;
// @end

// @interface cocos2d::extension::AssetsManager
//     ~AssetsManager() = 0x2e71d0;
//     void checkUpdate() = 0x2e7200;
//     void update() = 0x2e7e80;
// @end

@interface cocos2d::extension::CCScale9Sprite
    ~CCScale9Sprite() = 0x211590;
    ~CCScale9Sprite() = 0x2115a0;
    bool init() = 0x2115d0;
    void setContentSize(cocos2d::CCSize const&) = 0x2127c0;
    void visit() = 0x213bf0;
    void getOpacity() = 0x213f30;
    void setOpacity(unsigned char) = 0x213dd0;
    void updateDisplayedOpacity(unsigned char) = 0x2139b0;
    void getColor() = 0x213db0;
    void setColor(cocos2d::_ccColor3B const&) = 0x213c20;
    void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x213a20;
    void setOpacityModifyRGB(bool) = 0x213830;
    void isOpacityModifyRGB() = 0x213990;
    void getPreferredSize() = 0x213620;
    void setPreferredSize(cocos2d::CCSize) = 0x2135f0;
    void getCapInsets() = 0x2136e0;
    void setCapInsets(cocos2d::CCRect) = 0x213640;
    void getInsetLeft() = 0x213b30;
    void setInsetLeft(float) = 0x213b70;
    void getInsetTop() = 0x213b40;
    void setInsetTop(float) = 0x213b90;
    void getInsetRight() = 0x213b50;
    void setInsetRight(float) = 0x213bb0;
    void getInsetBottom() = 0x213b60;
    void setInsetBottom(float) = 0x213bd0;
    void initWithBatchNode(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect) = 0x211690;
    void initWithBatchNode(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, cocos2d::CCRect) = 0x211630;
    void initWithFile(char const*, cocos2d::CCRect, cocos2d::CCRect) = 0x212d50;
    void initWithFile(char const*, cocos2d::CCRect) = 0x212e80;
    void initWithFile(cocos2d::CCRect, char const*) = 0x212f80;
    void initWithFile(char const*) = 0x213080;
    void initWithSpriteFrame(cocos2d::CCSpriteFrame*, cocos2d::CCRect) = 0x213140;
    void initWithSpriteFrame(cocos2d::CCSpriteFrame*) = 0x213250;
    void initWithSpriteFrameName(char const*, cocos2d::CCRect) = 0x213310;
    void initWithSpriteFrameName(char const*) = 0x213410;
    void updateWithBatchNode(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect) = 0x211730;
    void setSpriteFrame(cocos2d::CCSpriteFrame*) = 0x213a90;
@end

@interface cocos2d::extension::CCControlButton
    ~CCControlButton() = 0x1a8380;
    ~CCControlButton() = 0x1a83b0;
    bool init() = 0x1a8420;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1a9c20;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1a9db0;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1a9ef0;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1aa1a0;
    void getOpacity() = 0x1aa090;
    void setOpacity(unsigned char) = 0x1a9fc0;
    void getColor() = 0x1aa180;
    void setColor(cocos2d::_ccColor3B const&) = 0x1aa0b0;
    void setEnabled(bool) = 0x1a8b00;
    void setSelected(bool) = 0x1a8b30;
    void setHighlighted(bool) = 0x1a8b60;
    void needsLayout() = 0x1a9700;
    void getPreferredSize() = 0x1a8d20;
    void setPreferredSize(cocos2d::CCSize) = 0x1a8c60;
    void getZoomOnTouchDown() = 0x1a8c50;
    void setZoomOnTouchDown(bool) = 0x1a8c40;
    void getLabelAnchorPoint() = 0x1a8d50;
    void setLabelAnchorPoint(cocos2d::CCPoint) = 0x1a8d70;
    void setMargins(int, int) = 0x1a8ae0;
    void initWithLabelAndBackgroundSprite(cocos2d::CCNode*, cocos2d::extension::CCScale9Sprite*) = 0x1a8480;
    void initWithTitleAndFontNameAndFontSize(std::string, char const*, float) = 0x1a88f0;
    void initWithBackgroundSprite(cocos2d::extension::CCScale9Sprite*) = 0x1a8a30;
    void getTitleForState(unsigned int) = 0x1a8db0;
    void setTitleForState(cocos2d::CCString*, unsigned int) = 0x1a8e90;
    void getTitleColorForState(unsigned int) = 0x1a8f00;
    void setTitleColorForState(cocos2d::_ccColor3B, unsigned int) = 0x1a8f60;
    void getTitleLabelForState(unsigned int) = 0x1a9020;
    void setTitleLabelForState(cocos2d::CCNode*, unsigned int) = 0x1a9060;
    void setTitleTTFForState(char const*, unsigned int) = 0x1a9140;
    void getTitleTTFForState(unsigned int) = 0x1a9240;
    void setTitleTTFSizeForState(float, unsigned int) = 0x1a92b0;
    void getTitleTTFSizeForState(unsigned int) = 0x1a9330;
    void setTitleBMFontForState(char const*, unsigned int) = 0x1a93a0;
    void getTitleBMFontForState(unsigned int) = 0x1a9490;
    void getBackgroundSpriteForState(unsigned int) = 0x1a9500;
    void setBackgroundSpriteForState(cocos2d::extension::CCScale9Sprite*, unsigned int) = 0x1a9540;
    void setBackgroundSpriteFrameForState(cocos2d::CCSpriteFrame*, unsigned int) = 0x1a96d0;
@end

@interface cocos2d::extension::CCControlSlider
    ~CCControlSlider() = 0x1de040;
    ~CCControlSlider() = 0x1de070;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1de890;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1deaf0;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1decc0;
    void setEnabled(bool) = 0x1de610;
    void needsLayout() = 0x1deea0;
    void isTouchInside(cocos2d::CCTouch*) = 0x1de750;
    void setValue(float) = 0x1de660;
    void setMinimumValue(float) = 0x1de6b0;
    void setMaximumValue(float) = 0x1de700;
    void initWithSprites(cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*) = 0x1de320;
@end

@interface cocos2d::extension::CCControlSwitch
    ~CCControlSwitch() = 0x1e5330;
    ~CCControlSwitch() = 0x1e5490;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e5bc0;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e5cb0;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e5d80;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e5ef0;
    void setEnabled(bool) = 0x1e5b30;
@end

@interface cocos2d::extension::CCControlStepper
    ~CCControlStepper() = 0x1e0960;
    ~CCControlStepper() = 0x1e0990;
    void update(float) = 0x1e12a0;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e1470;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e1620;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e1750;
    void setWraps(bool) = 0x1e0fe0;
    void setMinimumValue(double) = 0x1e1060;
    void setMaximumValue(double) = 0x1e1090;
    void setValue(double) = 0x1e10c0;
    void getValue() = 0x1e10e0;
    void setStepValue(double) = 0x1e10f0;
    void setValueWithSendingEvent(double, bool) = 0x1e1110;
    void isContinuous() = 0x1e1100;
@end

@interface cocos2d::extension::CCControlHuePicker
    ~CCControlHuePicker() = 0x1ab960;
    ~CCControlHuePicker() = 0x1ab990;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1ac050;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1ac150;
    void registerWithTouchDispatcher() = 0x1abcd0;
    void setEnabled(bool) = 0x1abe70;
    void setHue(float) = 0x1abd40;
    void setHuePercentage(float) = 0x1abd70;
    void initWithTargetAndPos(cocos2d::CCNode*, cocos2d::CCPoint) = 0x1abb30;
@end

// @interface cocos2d::extension::CCControlSwitchSprite
//     ~CCControlSwitchSprite() = 0x1e4760;
//     ~CCControlSwitchSprite() = 0x1e4790;
//     void draw() = 0x1e4f90;
//     void updateTweenAction(float, char const*) = 0x1e4ed0;
// @end

@interface cocos2d::extension::CCControlPotentiometer
    ~CCControlPotentiometer() = 0x1ad590;
    ~CCControlPotentiometer() = 0x1ad720;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1ade70;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1ae030;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1ae2a0;
    void setEnabled(bool) = 0x1adb80;
    void isTouchInside(cocos2d::CCTouch*) = 0x1add50;
@end

@interface cocos2d::extension::CCControlSaturationBrightnessPicker
    ~CCControlSaturationBrightnessPicker() = 0x1b3550;
    ~CCControlSaturationBrightnessPicker() = 0x1b3710;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1b4030;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1b4130;
    void registerWithTouchDispatcher() = 0x1b3fc0;
    void setEnabled(bool) = 0x1b3b00;
    void initWithTargetAndPos(cocos2d::CCNode*, cocos2d::CCPoint) = 0x1b3820;
    void updateWithHSV(cocos2d::extension::HSV) = 0x1b3b50;
    void updateDraggerWithHSV(cocos2d::extension::HSV) = 0x1b3bf0;
@end

@interface cocos2d::extension::CCControl
    ~CCControl() = 0x1a7380;
    ~CCControl() = 0x1a73b0;
    bool init() = 0x1a71c0;
    void onEnter() = 0x1a7470;
    void onExit() = 0x1a7480;
    void registerWithTouchDispatcher() = 0x1a7420;
    void setOpacityModifyRGB(bool) = 0x1a7c10;
    void isOpacityModifyRGB() = 0x1a7d70;
    void setEnabled(bool) = 0x1a7e60;
    void isEnabled() = 0x1a7e90;
    void setSelected(bool) = 0x1a7ea0;
    void isSelected() = 0x1a7ec0;
    void setHighlighted(bool) = 0x1a7ed0;
    void isHighlighted() = 0x1a7ef0;
    void needsLayout() = 0x1a7e50;
    void sendActionsForControlEvents(unsigned int) = 0x1a7490;
    void addTargetWithActionForControlEvents(cocos2d::CCObject*, cocos2d::extension::SEL_EventHandler, unsigned int) = 0x1a7820;
    void removeTargetWithActionForControlEvents(cocos2d::CCObject*, cocos2d::extension::SEL_EventHandler, unsigned int) = 0x1a7950;
    void getTouchLocation(cocos2d::CCTouch*) = 0x1a7d90;
    void isTouchInside(cocos2d::CCTouch*) = 0x1a7de0;
@end

@interface cocos2d::extension::CCEditBox
    ~CCEditBox() = 0x26cfd0;
    ~CCEditBox() = 0x26d020;
    void setPosition(cocos2d::CCPoint const&) = 0x26d850;
    void setAnchorPoint(cocos2d::CCPoint const&) = 0x26d910;
    void setContentSize(cocos2d::CCSize const&) = 0x26d8d0;
    void setVisible(bool) = 0x26d890;
    void onEnter() = 0x26d980;
    void onExit() = 0x26d9b0;
    void visit() = 0x26d950;
    void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x26d9e0;
    void keyboardDidShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x26daf0;
    void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x26db10;
    void keyboardDidHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x26db80;
@end

