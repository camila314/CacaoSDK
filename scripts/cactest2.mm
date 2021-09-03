@interface LevelCell
    void loadCustomLevelCell() = 0x1183b0;
    void loadLocalLevelCell() = 0x117a60;
@end

@interface LevelEditorLayer
@end

@interface LevelSettingsLayer
    bool init(LevelSettingsObject*, LevelEditorLayer*) = 0xa7e00;
    void onOpenCustomSong(cocos2d::CCObject*) = 0xabea0;
    void showCustomSongSelect() = 0xf0530;
@end

@interface MapPackCell
    void loadFromMapPack(GJMapPack*) = 0x1104c0;
@end

@interface MenuLayer
    void scene(bool) = 0x1d12d0;
@end

@interface MusicDownloadManager
    void getSongInfoObject(int) = 0x2ef780;
    void isSongDownloaded(int) = 0x2f0e10;
    void showTOS(FLAlertLayerProtocol*) = 0x2f1ab0;
@end

@interface OpacityEffectAction
@end

@interface PauseLayer
    void onResume(cocos2d::CCObject*) = 0x20c760;
@end

@interface PlatformToolbox
    void logEvent(char const*) = 0x27c290;
    void resizeWindow(float, float) = 0x27cfe0;
    void toggleFullScreen(bool) = 0x27cf90;
@end

@interface PlayLayer
@end

@interface PlayerObject
@end

@interface SelectFontLayer
    static SelectFontLayer* create(LevelEditorLayer*) = 0x143c20;
    bool init(LevelEditorLayer*) = 0x143db0;
    void onChangeFont(cocos2d::CCObject*) = 0x144450;
    void updateFontLabel() = 0x1444e0;
@end

@interface SetGroupIDLayer
@end

@interface SetupPulsePopup
@end

@interface SetupSpawnPopup
    bool init(EffectGameObject*, cocos2d::CCArray*) = 0x139950;
    void onClose(cocos2d::CCObject*) = 0x13ace0;
@end

@interface Slider
    bool init(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float) = 0x18dec0;
@end

@interface SliderTouchLogic
    static SliderTouchLogic* create(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, float) = 0x18d130;
    bool init(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, float) = 0x18d270;
@end

@interface SongCell
    void loadFromObject(SongObject*) = 0x1113f0;
@end

@interface SongInfoObject
    bool init(int, std::string, std::string, int, float, std::string, std::string, std::string, int) = 0x2f2660;
@end

@interface StatsCell
    void loadFromObject(StatsObject*) = 0x1110d0;
@end

@interface TextInputDelegate
    void allowTextInput(CCTextInputNode*) = 0x6210;
    void textInputOpened(CCTextInputNode*) = 0x6200;
@end

@interface UndoObject
@end

@interface VideoOptionsLayer
    void onApply(cocos2d::CCObject*) = 0x443740;
@end

