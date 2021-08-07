@interface AchievementCell
    void loadFromDict(cocos2d::CCDictionary*) = 0x10eaa0, 116;
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

@interface CCMenuItemToggler
@end

@interface CCMoveCNode
@end

@interface CCNodeContainer
@end

@interface CCTextInputNode
    void forceOffset() = 0x5ec70, 642;
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

@interface GJGroundLayer
    void loadGroundSprites(int, bool) = 0x3563d0, 2393;
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
    bool init() = 0x1c2ec0, 3283;
    void reportAchievementWithID(char const*, int, bool) = 0x1c6460, 3306;
    void update(float) = 0x1d0270, 3356;
@end

@interface GameObjectCopy
@end

@interface GameSoundManager
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

@interface MusicDownloadManager
    void isSongDownloaded(int) = 0x2f0e10, 4833;
    void showTOS(FLAlertLayerProtocol*) = 0x2f1ab0, 4846;
@end

@interface OpacityEffectAction
@end

@interface PlatformToolbox
    void logEvent(char const*) = 0x27c290, 5029;
@end

@interface PlayLayer
@end

@interface PlayerObject
@end

@interface SetGroupIDLayer
@end

@interface SetupPulsePopup
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

@interface StatsCell
    void loadFromObject(StatsObject*) = 0x1110d0, 6557;
@end

@interface TableViewCell
    TableViewCell(char const*, float, float) = 0x383de0, 6629;
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

@interface TopArtistsLayer
    static TopArtistsLayer* create() = 0x192a90, 6698;
@end

@interface UndoObject
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
    void convertToGL(cocos2d::CCPoint const&) = 0x24a210, 7449;
@end

@interface cocos2d::CCImage
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
@end

@interface cocos2d::CCSprite
    void createWithTexture(cocos2d::CCTexture2D*) = 0x132790, 9601;
@end

@interface cocos2d::CCString
    void createWithFormat(char const*, ...) = 0x44cab0, 9778;
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

