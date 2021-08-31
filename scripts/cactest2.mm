@interface AchievementCell
    void loadFromDict(cocos2d::CCDictionary*) = 0x10eaa0, 116;
@end

@interface AchievementManager
    void getAllAchievements() = 0x434d60, 129;
    void sharedState() = 0x424420, 143;
@end

@interface AchievementsLayer
    void customSetup() = 0x1bdea0, 160;
    void loadPage(int) = 0x1be190, 162;
@end

@interface ArtistCell
@end

@interface BoomListView
@end

@interface ButtonSprite
    static ButtonSprite* create(char const*, float) = 0x4fa60, 337;
    static ButtonSprite* create(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool) = 0x4fa90, 343;
@end

@interface CCBlockLayer
    void disableUI() = 0x2a5a80, 396;
    void draw() = 0x2a5c20, 397;
    void enableUI() = 0x2a5a90, 398;
    void enterAnimFinished() = 0x2a5bb0, 399;
    void enterLayer() = 0x2a5aa0, 400;
    void exitLayer() = 0x2a5b40, 401;
    void hideLayer(bool) = 0x2a5ba0, 402;
    bool init() = 0x2a59c0, 403;
    void layerHidden() = 0x2a5be0, 405;
    void layerVisible() = 0x2a5bc0, 406;
    void registerWithTouchDispatcher() = 0x2a5ad0, 407;
    void showLayer(bool) = 0x2a5b90, 408;
@end

@interface CCCircleWave
    bool init(float, float, float, bool, bool) = 0xbd380, 424;
@end

@interface CCMenuItemSpriteExtra
    CCMenuItemSpriteExtra() = 0x32670, 492;
    bool init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_CallFuncO) = 0x125450, 495;
@end

@interface CCMoveCNode
@end

@interface CCNodeContainer
@end

@interface ColorSelectLiveOverlay
@end

@interface ColorSelectPopup
@end

@interface CommentCell
    void loadFromComment(GJComment*) = 0x111c70, 856;
@end

@interface CreateMenuItem
@end

@interface CustomListView
    void getListCell(char const*) = 0x10d560, 1010;
    void loadCell(TableViewCell*, int) = 0x10e610, 1011;
    void setupList() = 0x116e70, 1013;
@end

@interface CustomSongCell
    void loadFromObject(SongInfoObject*) = 0x110220, 1021;
@end

@interface CustomSongLayer
    bool init(LevelSettingsObject*) = 0xf06f0, 1030;
    void onArtists(cocos2d::CCObject*) = 0xf1950, 1032;
    void onSongBrowser(cocos2d::CCObject*) = 0xf18a0, 1041;
@end

@interface CustomSongWidget
    static CustomSongWidget* create(SongInfoObject*, LevelSettingsObject*, bool, bool, bool, bool, bool) = 0x37bcc0, 1057;
    void getSongInfoIfUnloaded() = 0x37e020, 1061;
@end

@interface DrawGridLayer
@end

@interface EditorPauseLayer
    void customSetup() = 0x13cc00, 1409;
    bool init(LevelEditorLayer*) = 0x13c7a0, 1411;
@end

@interface EditorUI
    void playerTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2ebf0, 1579;
@end

@interface FLAlertLayer
@end

@interface GJBaseGameLayer
@end

@interface GJDropDownLayer
@end

@interface GJEffectManager
@end

@interface GJLevelScoreCell
    void loadFromScore(GJUserScore*) = 0x114aa0, 2421;
@end

@interface GJMessageCell
    void loadFromMessage(GJUserMessage*) = 0x1163d0, 2450;
@end

@interface GJMoreGamesLayer
    static GJMoreGamesLayer* create() = 0x43a5f0, 2484;
    void customSetup() = 0x43ae60, 2485;
    void getMoreGamesList() = 0x43a830, 2486;
@end

@interface GJMoveCommandLayer
@end

@interface GJRequestCell
    void loadFromScore(GJUserScore*) = 0x115b70, 2613;
@end

@interface GJScoreCell
    void loadFromScore(GJUserScore*) = 0x113aa0, 2765;
@end

@interface GJSongBrowser
    static GJSongBrowser* create(LevelSettingsObject*) = 0x3685d0, 2810;
    bool init(LevelSettingsObject*) = 0x352550, 2812;
    void loadPage(int) = 0x368820, 2813;
@end

@interface GJUserCell
    void loadFromScore(GJUserScore*) = 0x115300, 2863;
@end

@interface GameManager
    void getGTexture(int) = 0x1cca40, 3271;
    bool init() = 0x1c2ec0, 3283;
    void reportAchievementWithID(char const*, int, bool) = 0x1c6460, 3306;
    void resolutionForKey(int) = 0x1d0b40, 3311;
    void update(float) = 0x1d0270, 3356;
@end

@interface GameObjectCopy
@end

@interface GameSoundManager
@end

@interface InfoAlertButton
    static InfoAlertButton* create(std::string, std::string, float) = 0x2ecad0, 3905;
@end

@interface LevelCell
    void loadCustomLevelCell() = 0x1183b0, 4104;
    void loadLocalLevelCell() = 0x117a60, 4106;
@end

@interface LevelEditorLayer
@end

@interface LevelSettingsLayer
    bool init(LevelSettingsObject*, LevelEditorLayer*) = 0xa7e00, 4444;
    void onOpenCustomSong(cocos2d::CCObject*) = 0xabea0, 4460;
    void showCustomSongSelect() = 0xf0530, 4470;
@end

@interface MapPackCell
    void loadFromMapPack(GJMapPack*) = 0x1104c0, 4597;
@end

@interface MenuLayer
    void scene(bool) = 0x1d12d0, 4655;
@end

@interface MusicDownloadManager
    void getSongInfoObject(int) = 0x2ef780, 4824;
    void isSongDownloaded(int) = 0x2f0e10, 4833;
    void showTOS(FLAlertLayerProtocol*) = 0x2f1ab0, 4846;
@end

@interface OpacityEffectAction
@end

@interface PauseLayer
    void onResume(cocos2d::CCObject*) = 0x20c760, 5002;
@end

@interface PlatformToolbox
    void logEvent(char const*) = 0x27c290, 5029;
    void resizeWindow(float, float) = 0x27cfe0, 5039;
    void toggleFullScreen(bool) = 0x27cf90, 5053;
@end

@interface PlayLayer
@end

@interface PlayerObject
@end

@interface SelectFontLayer
    static SelectFontLayer* create(LevelEditorLayer*) = 0x143c20, 5727;
    bool init(LevelEditorLayer*) = 0x143db0, 5728;
    void onChangeFont(cocos2d::CCObject*) = 0x144450, 5730;
    void updateFontLabel() = 0x1444e0, 5732;
@end

@interface SetGroupIDLayer
@end

@interface SetupPulsePopup
@end

@interface SetupSpawnPopup
    bool init(EffectGameObject*, cocos2d::CCArray*) = 0x139950, 6241;
    void onClose(cocos2d::CCObject*) = 0x13ace0, 6243;
@end

@interface Slider
    bool init(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, char const*, char const*, char const*, char const*, float) = 0x18dec0, 6405;
@end

@interface SliderTouchLogic
    static SliderTouchLogic* create(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, char const*, char const*, float) = 0x18d130, 6429;
    bool init(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, char const*, char const*, float) = 0x18d270, 6430;
@end

@interface SongCell
    void loadFromObject(SongObject*) = 0x1113f0, 6441;
@end

@interface SongInfoObject
    bool init(int, std::string, std::string, int, float, std::string, std::string, std::string, int) = 0x2f2660, 6465;
@end

@interface StatsCell
    void loadFromObject(StatsObject*) = 0x1110d0, 6557;
@end

@interface TableViewDelegate
    void TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) = 0x120480, 6636;
    void didEndTweenToIndexPath(CCIndexPath&, TableView*) = 0x120470, 6639;
    void willTweenToIndexPath(CCIndexPath&, TableViewCell*, TableView*) = 0x120460, 6640;
@end

@interface TextInputDelegate
    void allowTextInput(CCTextInputNode*) = 0x6210, 6685;
    void textInputOpened(CCTextInputNode*) = 0x6200, 6688;
@end

@interface UndoObject
@end

@interface VideoOptionsLayer
    void onApply(cocos2d::CCObject*) = 0x443740, 6824;
@end

@interface cocos2d::CCApplication
    void getCurrentLanguage() = 0x1a3f40, 7063;
    void getTargetPlatform() = 0x1a3f20, 7064;
    void openURL(char const*) = 0x1a4550, 7065;
    void setAnimationInterval(double) = 0x1a3ee0, 7067;
@end

@interface cocos2d::CCApplicationProtocol
    void gameDidSave() = 0x1a45f0, 7074;
@end

@interface cocos2d::CCArray
    static cocos2d::CCArray* create(cocos2d::CCObject*, ...) = 0x419fc0, 7092;
@end

@interface cocos2d::CCClippingNode
    static cocos2d::CCClippingNode* create() = 0x4192a0, 7300;
    static cocos2d::CCClippingNode* create(cocos2d::CCNode*) = 0x419330, 7299;
    void getAlphaThreshold() = 0x419a10, 7301;
    void getStencil() = 0x4199c0, 7302;
    void isInverted() = 0x419a30, 7305;
    void onEnter() = 0x419470, 7306;
    void onEnterTransitionDidFinish() = 0x4194a0, 7307;
    void onExit() = 0x419500, 7308;
    void onExitTransitionDidStart() = 0x4194d0, 7309;
    void setAlphaThreshold(float) = 0x419a20, 7310;
    void setInverted(bool) = 0x419a40, 7311;
    void setStencil(cocos2d::CCNode*) = 0x4199d0, 7312;
    void visit() = 0x419530, 7313;
@end

@interface cocos2d::CCDirector
    void calculateDeltaTime() = 0x2497a0, 7446;
    void calculateMPF() = 0x19eac0, 7447;
    void convertToGL(cocos2d::CCPoint const&) = 0x24a210, 7449;
    void drawScene() = 0x249690, 7452;
    void setNextScene() = 0x2498d0, 7512;
    void showStats() = 0x2499e0, 7522;
    void updateContentScale(cocos2d::TextureQuality) = 0x249ff0, 7523;
@end

@interface cocos2d::CCIMEDelegate
    CCIMEDelegate() = 0x277310, 7984;
    void attachWithIME() = 0x2776a0, 7985;
    void canAttachWithIME() = 0x5ef30, 7986;
    void canDetachWithIME() = 0x5ef50, 7987;
    void deleteBackward() = 0x5ef80, 7988;
    void detachWithIME() = 0x277880, 7989;
    void didAttachWithIME() = 0x5ef40, 7990;
    void didDetachWithIME() = 0x5ef60, 7991;
    void getContentText() = 0x5ef90, 7992;
    void insertText(char const*, int) = 0x5ef70, 7993;
    void keyboardDidHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5efb0, 7994;
    void keyboardDidShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5efa0, 7995;
    ~CCIMEDelegate() = 0x277500, 8000;
@end

@interface cocos2d::CCImage
@end

@interface cocos2d::CCLabelBMFont
    void setAnchorPoint(cocos2d::CCPoint const&) = 0x349440, 8146;
@end

@interface cocos2d::CCLabelTTF
    void updateTexture() = 0x1fadc0, 8202;
@end

@interface cocos2d::CCLayer
@end

@interface cocos2d::CCLayerColor
@end

@interface cocos2d::CCNode
@end

@interface cocos2d::CCNodeRGBA
@end

@interface cocos2d::CCObject
@end

@interface cocos2d::CCPoint
@end

@interface cocos2d::CCPoolManager
    void pop() = 0x214620, 9121;
    void sharedPoolManager() = 0x2142c0, 9125;
@end

@interface cocos2d::CCRect
@end

@interface cocos2d::CCRenderTexture
@end

@interface cocos2d::CCScene
    void getHighestChildZ() = 0x13c200, 9373;
@end

@interface cocos2d::CCSequence
    static cocos2d::CCSequence* create(cocos2d::CCFiniteTimeAction*, ...) = 0x1f2860, 9433;
@end

@interface cocos2d::CCSize
    void equals(cocos2d::CCSize const&) = 0x137510, 9524;
@end

@interface cocos2d::CCSprite
    void createWithTexture(cocos2d::CCTexture2D*) = 0x132790, 9601;
    void setFlipX(bool) = 0x134be0, 9636;
    void setScaleX(float) = 0x134900, 9646;
    void setScaleY(float) = 0x134980, 9647;
@end

@interface cocos2d::CCSpriteBatchNode
    static cocos2d::CCSpriteBatchNode* create(char const*, unsigned int) = 0xbb540, 9674;
@end

@interface cocos2d::CCString
    void createWithFormat(char const*, ...) = 0x44cab0, 9778;
@end

@interface cocos2d::CCTextFieldDelegate
    void onDraw(cocos2d::CCTextFieldTTF*) = 0x5efd0, 9916;
    void onTextFieldDeleteBackward(cocos2d::CCTextFieldTTF*, char const*, int) = 0x5efc0, 9918;
@end

@interface cocos2d::CCTexture2D
    void getContentSize() = 0x246460, 9957;
    void getMaxS() = 0x2464e0, 9959;
    void getMaxT() = 0x246500, 9960;
    void getName() = 0x246450, 9961;
    void getPixelFormat() = 0x246420, 9962;
    void getPixelsHigh() = 0x246440, 9963;
    void getPixelsWide() = 0x246430, 9964;
    void getShaderProgram() = 0x246520, 9965;
    void initPremultipliedATextureWithImage(cocos2d::CCImage*, unsigned int, unsigned int) = 0x2469a0, 9968;
    void initWithData(void const*, cocos2d::CCTexture2DPixelFormat, unsigned int, unsigned int, cocos2d::CCSize const&) = 0x2465d0, 9969;
    void setAliasTexParameters() = 0x247a20, 9979;
    void setAntiAliasTexParameters() = 0x247a80, 9980;
    void setMaxS(float) = 0x2464f0, 9982;
    void setMaxT(float) = 0x246510, 9983;
    void setShaderProgram(cocos2d::CCGLProgram*) = 0x246530, 9984;
@end

@interface cocos2d::CCTouch
    void getDelta() = 0x38340, 10150;
    void getLocation() = 0x382b0, 10151;
    void getLocationInView() = 0x38250, 10152;
@end

