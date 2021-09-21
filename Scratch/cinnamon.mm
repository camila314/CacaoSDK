







































class ColorPickerDelegate {
}

class ColorSelectLiveOverlay {
}



class ConfigureValuePopup {
}







class CurrencyRewardLayer {
}





class CustomSongWidget {
    static CustomSongWidget* create(SongInfoObject*, LevelSettingsObject*, bool, bool, bool, bool, bool) = 0x37bcc0;
    void getSongInfoIfUnloaded() = 0x37e020;
}



class CustomizeObjectLayer {
    void colorSelectClosed(cocos2d::CCNode*) = 0xe1050;
    static CustomizeObjectLayer* create(GameObject*, cocos2d::CCArray*) = 0xdd340;
    bool init(GameObject*, cocos2d::CCArray*) = 0xdd560;
    void textChanged(CCTextInputNode*) = 0xe1470;
    void textInputClosed(CCTextInputNode*) = 0xe1430;
}

class DelayedSpawnNode {
    static DelayedSpawnNode* create() = 0x9b360;
}

class DialogLayer {
    static DialogLayer* create(DialogObject*, int) = 0x2047c0;
}

class DialogObject {
    static DialogObject* create(gd::string, gd::string, int, float, bool, cocos2d::_ccColor3B) = 0x204410;
}

class DrawGridLayer {
    void addPlayer2Point(cocos2d::CCPoint, bool) = 0xa25b0;
    void addPlayerPoint(cocos2d::CCPoint) = 0xa39c0;
    void addToSpeedObjects(GameObject*) = 0x99900;
    static DrawGridLayer* create(cocos2d::CCNode*, LevelEditorLayer*) = 0x920c0;
    void draw() = 0xa3c40;
    bool init(cocos2d::CCNode*, LevelEditorLayer*) = 0xa36e0;
    void timeForXPos(float) = 0x9b330;
    void update(float) = 0xa3b30;
    void updateTimeMarkers() = 0x92950;
    void xPosForTime(float) = 0x9c830;
    ~DrawGridLayer() = 0xa3480;
}

class EditButtonBar : cocos2d::CCNode {
    void loadFromItems(cocos2d::CCArray*, int, int, bool) = 0x351010;

    cocos2d::CCArray* m_objectSlots = 0x130;
}

class FMODAudioEngine : cocos2d::CCNode {
    float backgroundVolume = 0x130;
    float sfxVolume = 0x134;
}

class FollowRewardPage {
    static FollowRewardPage* create() = 0x22f140;
}

class GJAccountManager {
    static GJAccountManager* sharedState() = 0x85070;

    char const* m_password = 0x128;
    char const* m_username = 0x130;
}



class GJColorSetupLayer {
    void updateSpriteColors() = 0xefe50;
}

class GJComment {

}





class GJFollowCommandLayer {
    static GJFollowCommandLayer* create(EffectGameObject*, cocos2d::CCArray*) = 0x16a550;
    void onUpdateGroupID(cocos2d::CCObject*) = 0x16c8f0;
    void onUpdateGroupID2(cocos2d::CCObject*) = 0x16c9e0;
    void textChanged(CCTextInputNode*) = 0x16d480;
    void updateTargetGroupID() = 0x16cfe0;
    void updateTargetGroupID2() = 0x16d1c0;
}

class GJGameLevel : cocos2d::CCNode {
    static GJGameLevel* create() = 0x2b83e0;
    void getAudioFileName() = 0x2dbe70;
    void getCoinKey(int) = 0x2ce360;
    void getLengthKey(int) = 0x2dbba0;
    void getNormalPercent() = 0x2b8b20;
    void levelWasAltered() = 0x2db530;
    void savePercentage(int, bool, int, int, bool) = 0x2db700;

    int m_levelId = 0x130;
    gd::string m_name = 0x138;
    gd::string m_levelString = 0x148;
    gd::string m_author = 0x150;
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
}

class GJGroundLayer {
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
}

class GJLevelScoreCell {
    void loadFromScore(GJUserScore*) = 0x114aa0;
}

class GJListLayer : cocos2d::CCLayerColor {
}

class GJUserMessage {
}

class GJMessageCell {
    void loadFromMessage(GJUserMessage*) = 0x1163d0;
}

class GJMoreGamesLayer {
    static GJMoreGamesLayer* create() = 0x43a5f0;
    void customSetup() = 0x43ae60;
    void getMoreGamesList() = 0x43a830;
}

class GJMoveCommandLayer {
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
}

class GJPFollowCommandLayer {
    static GJPFollowCommandLayer* create(EffectGameObject*, cocos2d::CCArray*) = 0x1aea20;
    void textChanged(CCTextInputNode*) = 0x1b1dc0;
    void updateTargetGroupID() = 0x1b1a60;
}

class GJRequestCell {
    void loadFromScore(GJUserScore*) = 0x115b70;
}

class GJRobotSprite {
    static GJRobotSprite* create() = 0x34ac00;
    void updateColor02(cocos2d::_ccColor3B) = 0x34bbd0;
    void updateFrame(int) = 0x34bdd0;
}

class GJRotateCommandLayer {
    static GJRotateCommandLayer* create(EffectGameObject*, cocos2d::CCArray*) = 0x1ba0;
    void onUpdateGroupID(cocos2d::CCObject*) = 0x4bb0;
    void onUpdateGroupID2(cocos2d::CCObject*) = 0x4ca0;
    void textChanged(CCTextInputNode*) = 0x58d0;
    void updateTargetGroupID() = 0x54b0;
    void updateTargetGroupID2() = 0x5690;
}

class GJScoreCell {
    void loadFromScore(GJUserScore*) = 0x113aa0;
}

class GJSearchObject : cocos2d::CCNode {
    static GJSearchObject* create(SearchType) = 0x2df120;
    static GJSearchObject* create(SearchType, gd::string, gd::string, gd::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, int, int) = 0x2dee30;
    void getPageObject(int) = 0x2df9a0;

    SearchType m_searchType;
}

class GJSongBrowser {
    static GJSongBrowser* create(LevelSettingsObject*) = 0x3685d0;
    bool init(LevelSettingsObject*) = 0x352550;
    void loadPage(int) = 0x368820;
}

class GJSpecialColorSelect {
    void textForColorIdx(int) = 0x383a50;
}



class GJSpiderSprite {
    static GJSpiderSprite* create() = 0x34c5b0;
}

class GJUserScore {
}

class GJUserCell {
    void loadFromScore(GJUserScore*) = 0x115300;
}

class GManager : cocos2d::CCNode {
    volatile virtual void setup() {}

    void save() = 0x26f300;
    void saveData(DS_Dictionary*, gd::string) = 0x26f4b0;
    void saveGMTo(gd::string) = 0x26f3b0;

    gd::string m_sFileName;
    bool m_bSetup;
    bool m_bSaved;
}

class GameLevelManager {
    GJGameLevel* createNewLevel() = 0x2b8180;
    static GameLevelManager* sharedState() = 0x2a8340;
    void getPageInfo(char const*) = 0x2c0050;
    cocos2d::CCArray* getStoredOnlineLevels(char const*) = 0x2bfe80;
    void getTopArtists(int, int) = 0x2ce3d0;
    void getTopArtistsKey(int) = 0x2ce7a0;
    void makeTimeStamp(char const*) = 0x2bfd90;

    cocos2d::CCDictionary* m_timerDict = 0x1e8;
}

class GameManager : cocos2d::CCNode {
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
}



class GameSoundManager {
    void disableMetering() = 0x362d80;
    void enableMetering() = 0x362d00;
    void getMeteringValue() = 0x362db0;
    void playBackgroundMusic(gd::string, bool, bool) = 0x362070;
    void playEffect(gd::string, float, float, float) = 0x3623d0;
    void sharedManager() = 0x3610f0;
    void stopBackgroundMusic() = 0x362130;
    ~GameSoundManager() = 0x362c00;
}

class GameStatsManager {
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
}

class GameToolbox : cocos2d::CCNode {
    static void createToggleButton(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*) = 0x28bdd0;
    static void getRelativeOffset(GameObject*, cocos2d::CCPoint) = 0x28c060;
    static void multipliedColorValue(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float) = 0x28cb90;
    static void stringSetupToDict(gd::string, char const*) = 0x28d700;
    static gd::map<gd::string, gd::string> stringSetupToMap(gd::string, char const*) = 0x28d4c0;
    static void transformColor(cocos2d::_ccColor3B const&, cocos2d::_ccHSVValue) = 0x28c950;
    static void transformColor(cocos2d::_ccColor3B const&, float, float, float) = 0x28c930;
}

class GravityEffectSprite {
    static GravityEffectSprite* create() = 0x6d0a0;
    bool init() = 0x80b20;
    void updateSpritesColor(cocos2d::_ccColor3B) = 0x7ce30;
}

class GroupCommandObject {
    static GroupCommandObject* create() = 0x18b460;
    static GroupCommandObject* createFromString(gd::string) = 0x16ece0;
    void easeToText(int) = 0x16ecb0;
    void getEasedAction(cocos2d::CCActionInterval*, int, float) = 0x16e7b0;
    void runMoveCommand(cocos2d::CCPoint, float, int, float, bool, bool) = 0x16e640;
    void runRotateCommand(float, float, int, float, bool) = 0x16e8f0;
}

class HardStreak : cocos2d::CCDrawNode {
    virtual ~HardStreak() = 0x5bf00;
    virtual bool init() = 0x5c090;
    
    void addPoint(cocos2d::CCPoint) = 0x5c950;
    void reset() = 0x5c930;
    void resumeStroke() = 0x5c210;
    void stopStroke() = 0x5c8f0;

    cocos2d::CCArray* m_pointsArr; // 0x0160
    cocos2d::CCPoint m_currentPoint; // 0x0168
    float m_waveSize; // 0x0170
    float m_pulseSize; // 0x0174
    bool m_isSolid; // 0x0178
}

class InfoAlertButton {
    static InfoAlertButton* create(gd::string, gd::string, float) = 0x2ecad0;
}

class InfoLayer : cocos2d::CCLayer {
    void loadPage(int, bool) = 0x458fb0;
    void onRefreshComments(cocos2d::CCObject*) = 0x459b60;
}

class InheritanceNode : cocos2d::CCObject {
}

class LevelBrowserLayer : cocos2d::CCLayer {
    void loadPage(GJSearchObject*) = 0x253650;
    static cocos2d::CCScene* scene(GJSearchObject*) = 0x2511d0;
    void setIDPopupClosed(SetIDPopup*, int) = 0x2554f0;
}

class LevelEditorLayer : GJBaseGameLayer {
    void activateTriggerEffect(EffectGameObject*, float, float, float) = 0x9b520;
    GameObject* addObjectFromString(gd::string) = 0x94640;
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
    void createObjectsFromSetup(gd::string) = 0x92230;
    void createObjectsFromString(gd::string, bool) = 0x94730;
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
}

class LevelInfoLayer : cocos2d::CCLayer {
}

class LevelSettingsLayer {
    static LevelSettingsLayer* create(LevelSettingsObject*, LevelEditorLayer*) = 0xa7c30;
}



class LevelTools {
    void getAudioString(int) = 0x293880;
    void verifyLevelIntegrity(gd::string, int) = 0x294360;
    void xPosForTime(float, cocos2d::CCArray*, int) = 0x293d90;
}

class LoadingLayer {
    void loadAssets() = 0x1dfb20;
}



class OBB2D : cocos2d::CCNode  {
    void calculateWithCenter(cocos2d::CCPoint, float, float, float) = 0x35a9c0;
    static OBB2D* create(cocos2d::CCPoint, float, float, float) = 0x35a890;
    void getBoundingRect() = 0x35b2b0;
    void overlaps(OBB2D*) = 0x35b0a0;
    void overlaps1Way(OBB2D*) = 0x35b0d0;
}

























class SpeedObject {
    static SpeedObject* create(GameObject*, int, float) = 0x77450;
    bool init(GameObject*, int, float) = 0x77400;
}



class TeleportPortalObject {
    static TeleportPortalObject* create(char const*) = 0xdaa50;
    void getTeleportXOff(cocos2d::CCNode*) = 0xdac20;
}


















class cocos2d::CCActionTween {
    static cocos2d::CCActionTween* create(float, char const*, float, float) = 0x447590;
}

class cocos2d::CCAnimate {
    static cocos2d::CCAnimate* create(cocos2d::CCAnimation*) = 0x1f8fc0;
}

class cocos2d::CCAnimation {
    void createWithSpriteFrames(cocos2d::CCArray*, float) = 0x140df0;
}

class cocos2d::CCApplication {
    void getCurrentLanguage() = 0x1a3f40;
    void getTargetPlatform() = 0x1a3f20;
    void openURL(char const*) = 0x1a4550;
    void setAnimationInterval(double) = 0x1a3ee0;
}

class cocos2d::CCApplicationProtocol {
    bool gameDidSave() = 0x1a45f0;
}

class cocos2d::CCArray {
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
}

class cocos2d::CCBezierTo {
    static cocos2d::CCBezierTo* create(float, cocos2d::_ccBezierConfig const&) = 0x1f6c10;
}

class cocos2d::CCCallFunc {
    static cocos2d::CCCallFunc* create(int) = 0x454d90;
}

class cocos2d::CCClippingNode {
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
}

class cocos2d::CCCopying {
    void copyWithZone(cocos2d::CCZone*) = 0x250c90;
}

class cocos2d::CCDelayTime {
    static cocos2d::CCDelayTime* create(float) = 0x1f4380;
}

class cocos2d::CCDictionary {
    void allKeys() = 0x190450;
    void count() = 0x190430;
    static cocos2d::CCDictionary* create() = 0x192650;
    void objectForKey(long) = 0x190bb0;
    void objectForKey(gd::string const&) = 0x190870;
    void removeAllObjects() = 0x190220;
    void removeObjectForKey(long) = 0x1921d0;
    void setObject(cocos2d::CCObject*, long) = 0x191790;
    void setObject(cocos2d::CCObject*, gd::string const&) = 0x190dc0;
    void valueForKey(long) = 0x190cf0;
    void valueForKey(gd::string const&) = 0x1907a0;
}

class cocos2d::CCDirector {
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
}

class cocos2d::CCDrawNode {
    void clear() = 0x379e80;
    static cocos2d::CCDrawNode* create() = 0x378d00;
    void drawPolygon(cocos2d::CCPoint*, unsigned int, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&) = 0x3797f0;
    void drawSegment(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&) = 0x3792d0;
    void getBlendFunc() = 0x379ea0;
    bool init() = 0x378e00;
    void setBlendFunc(cocos2d::_ccBlendFunc const&) = 0x379eb0;
}

class cocos2d::CCEaseElasticOut {
    static cocos2d::CCEaseElasticOut* create(cocos2d::CCActionInterval*, float) = 0x2a3080;
}

class cocos2d::CCEaseIn {
    static cocos2d::CCEaseIn* create(cocos2d::CCActionInterval*, float) = 0x2a1960;
}

class cocos2d::CCEaseInOut {
    static cocos2d::CCEaseInOut* create(cocos2d::CCActionInterval*, float) = 0x2a1d80;
}

class cocos2d::CCEaseOut {
    static cocos2d::CCEaseOut* create(cocos2d::CCActionInterval*, float) = 0x2a1b70;
}

class cocos2d::CCFadeOut {
    static cocos2d::CCFadeOut* create(float) = 0x1f7d80;
}

class cocos2d::CCFadeTo {
    static cocos2d::CCFadeTo* create(float, unsigned char) = 0x1f7ff0;
}

class cocos2d::CCHide {
    static cocos2d::CCHide* create() = 0x4543e0;
}

class cocos2d::CCImage {
    CCImage() = 0x24fa00;
    void initWithImageData(void*, int, cocos2d::CCImage::EImageFormat, int, int, int) = 0x24fcb0;
}

class cocos2d::CCIMEDelegate {
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
}

class cocos2d::CCKeyboardDelegate {
    void keyUp(cocos2d::enumKeyCodes) = 0x61a0;
}

class cocos2d::CCKeyboardDispatcher // :trol: {
    void dispatchKeyboardMSG(cocos2d::enumKeyCodes, bool) = 0xe8190, 9193848;
}

class cocos2d::CCLabelBMFont {
    static cocos2d::CCLabelBMFont* create(char const*, char const*) = 0x347660;
    void limitLabelWidth(float, float, float) = 0x34a6e0;
    void setScale(float) = 0x34a5d0;
    void setString(char const*, bool) = 0x3489e0;
    void setAnchorPoint(cocos2d::CCPoint const&) = 0x349440;
}

class cocos2d::CCLabelTTF {
    void updateTexture() = 0x1fadc0;
}

class cocos2d::CCLayer {
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
}

class cocos2d::CCLayerColor {
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
}

class cocos2d::CCLayerRGBA {
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
}

class cocos2d::CCMenu {
    void alignItemsHorizontallyWithPadding(float) = 0x4393e0;
    void alignItemsVerticallyWithPadding(float) = 0x439190;
    static cocos2d::CCMenu* create() = 0x438720;
    void createWithArray(cocos2d::CCArray*) = 0x4387e0;
    void createWithItem(cocos2d::CCMenuItem*) = 0x438b80;
}

class cocos2d::CCMotionStreak {
    void reset() = 0x2ee190;
    void resumeStroke() = 0x2edb30;
    void stopStroke() = 0x2edb20;
}

class cocos2d::CCMouseDelegate {
    void rightKeyDown() = 0x61b0;
    void rightKeyUp() = 0x61c0;
    void scrollWheel(float, float) = 0x61d0;
}

class cocos2d::CCMoveBy {
    static cocos2d::CCMoveBy* create(float, cocos2d::CCPoint const&) = 0x1f50e0;
}

class cocos2d::CCMoveTo {
    static cocos2d::CCMoveTo* create(float, cocos2d::CCPoint const&) = 0x1f54d0;
}

class cocos2d::CCNode {
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
}

class cocos2d::CCNodeRGBA {
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
}

class cocos2d::CCObject {
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
}

class cocos2d::CCParticleSystem {
    void resetSystem() = 0x46bd50;
    void resumeSystem() = 0x46bd40;
    void stopSystem() = 0x46bd10;
}

class cocos2d::CCParticleSystemQuad {
    static cocos2d::CCParticleSystemQuad* create(char const*) = 0x36b000;
}

class cocos2d::CCPoint {
    CCPoint() = 0x137050;
    CCPoint(cocos2d::CCPoint const&) = 0x137090;
    CCPoint(float, float) = 0x137000;

    cocos2d::CCPoint operator*(float) = 0x137180;
    cocos2d::CCPoint operator+(cocos2d::CCPoint const&) = 0x1370f0;
    cocos2d::CCPoint operator-() = 0x137150;
    cocos2d::CCPoint operator-(cocos2d::CCPoint const&) = 0x137120;
    cocos2d::CCPoint operator/(float) = 0x1371a0;
    cocos2d::CCPoint& operator=(cocos2d::CCPoint const&) = 0x1370c0;
    
    void equals(cocos2d::CCPoint const&) = 0x1371d0;
}

class cocos2d::CCPoolManager {
    void pop() = 0x214620;
    void sharedPoolManager() = 0x2142c0;
}

class cocos2d::CCRect {
    CCRect() = 0x137550;
    CCRect(cocos2d::CCRect const&) = 0x137630;
    CCRect(float, float, float, float) = 0x137020;

    cocos2d::CCRect& operator=(cocos2d::CCRect const&) = 0x137670;

    void containsPoint(cocos2d::CCPoint const&) = 0x1377b0;
    void equals(cocos2d::CCRect const&) = 0x1376a0;
    void getMaxX() = 0x137710;
    void getMaxY() = 0x137760;
    void getMinX() = 0x137750;
    void getMinY() = 0x1377a0;
    void intersectsRect(cocos2d::CCRect const&) = 0x137800;
}

class cocos2d::CCRenderTexture {
    void begin() = 0x35ce10;
    void end() = 0x35d2c0;
    static cocos2d::CCRenderTexture* create(int, int, cocos2d::CCTexture2DPixelFormat) = 0x35c720;
    void newCCImage(bool) = 0x35d7d0;
}

class cocos2d::CCRepeatForever {
    static cocos2d::CCRepeatForever* create(cocos2d::CCActionInterval*) = 0x1f3920;
}

class cocos2d::CCRotateBy {
    static cocos2d::CCRotateBy* create(float, float) = 0x1f4c50;
}

class cocos2d::CCScaleTo {
    static cocos2d::CCScaleTo* create(float, float) = 0x1f6ff0;
    static cocos2d::CCScaleTo* create(float, float, float) = 0x1f70f0;
}

class cocos2d::CCScene {
    static cocos2d::CCScene* create() = 0x13c140;
    void getHighestChildZ() = 0x13c200;
}

class cocos2d::CCScheduler {
    void scheduleSelector(cocos2d::SEL_SCHEDULE, cocos2d::CCObject*, float, unsigned int, float, bool) = 0x242b20;
    void scheduleUpdateForTarget(cocos2d::CCObject*, int, bool) = 0x2438d0;
    void unscheduleAllForTarget(cocos2d::CCObject*) = 0x243e40;
}

class cocos2d::CCSequence {
    static cocos2d::CCSequence* create(cocos2d::CCFiniteTimeAction*, ...) = 0x1f2860;
}

class cocos2d::CCSize {
    CCSize() = 0x1373c0;
    CCSize(cocos2d::CCSize const&) = 0x137400;
    CCSize(float, float) = 0x137010;

    cocos2d::CCSize operator/(float) = 0x1374e0;
    cocos2d::CCSize& operator=(cocos2d::CCSize const&) = 0x137430;

    void equals(cocos2d::CCSize const&) = 0x137510;
}

class cocos2d::CCSprite {
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
}

class cocos2d::CCSpriteBatchNode {
    static cocos2d::CCSpriteBatchNode* create(char const*, unsigned int) = 0xbb540;
    static void createWithTexture(cocos2d::CCTexture2D*, unsigned int) = 0xbb310;
    void getUsedAtlasCapacity() = 0xbc6b0;
    void increaseAtlasCapacity(unsigned int) = 0xbc670;
}

class cocos2d::CCSpriteFrameCache {
    void addSpriteFramesWithFile(char const*) = 0x199a10;
    void sharedSpriteFrameCache() = 0x198970;
    void spriteFrameByName(char const*) = 0x19a7e0;
}

class cocos2d::CCString {
    CCString(gd::string const&) = 0x44c310;
    void boolValue() = 0x44c810;
    static void createWithFormat(char const*, ...) = 0x44cab0;
    void doubleValue() = 0x44c7f0;
    void floatValue() = 0x44c7d0;
    void getCString() = 0x44c470;
    void intValue() = 0x44c780;
}

class cocos2d::CCTextFieldDelegate {
    void onDraw(cocos2d::CCTextFieldTTF*) = 0x5efd0;
    void onTextFieldDeleteBackward(cocos2d::CCTextFieldTTF*, char const*, int) = 0x5efc0;
}

class cocos2d::CCTexture2D {
    CCTexture2D() = 0x246280;
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
    void initWithImage(cocos2d::CCImage*) = 0x246940;
    void setTexParameters(cocos2d::_ccTexParams*) = 0x247980;
}

class cocos2d::CCTextureCache {
    void addImage(char const*, bool) = 0x358120;
    static void sharedTextureCache() = 0x356e00;
}

class cocos2d::CCTintTo {
    static cocos2d::CCTintTo* create(float, unsigned char, unsigned char, unsigned char) = 0x1f82a0;
}

class cocos2d::CCTouch {
    void getDelta() = 0x38340;
    void getLocation() = 0x382b0;
    void getLocationInView() = 0x38250;
}

class cocos2d::CCTouchDispatcher {
    void decrementForcePrio(int) = 0x280f70;
    void incrementForcePrio(int) = 0x280f60;
}

class cocos2d::CCTransitionFade {
    static cocos2d::CCTransitionFade* create(float, cocos2d::CCScene*) = 0x8ea30;
}

class cocos2d::ZipUtils {
    void compressString(gd::string, bool, int) = 0xe9a50;
    void decompressString(gd::string, bool, int) = 0xea380;
}

class cocos2d::extension::CCControlColourPicker {
    void setColorValue(cocos2d::_ccColor3B const&) = 0x1aac10;
}

class cocos2d::extension::CCControlUtils {
    static cocos2d::extension::HSV HSVfromRGB(cocos2d::extension::RGBA) = 0x1e6750;
    static cocos2d::extension::RGBA RGBfromHSV(cocos2d::extension::HSV) = 0x1e6850;
}

class cocos2d::extension::CCScale9Sprite {
    CCScale9Sprite() = 0x211330;
    static cocos2d::extension::CCScale9Sprite* create(char const*) = 0x2130d0;
    static cocos2d::extension::CCScale9Sprite* create(char const*, cocos2d::CCRect) = 0x212ef0;
    void setContentSize(cocos2d::CCSize const&) = 0x2127c0;
}

class cocos2d::extension::CCScrollView {
    CCScrollView() = 0x214800;
}

class ColorSelectPopup : FLAlertLayer, ColorPickerDelegate, TextInputDelegate, GJSpecialColorSelectDelegate {
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
}

class SetupPulsePopup : FLAlertLayer, ColorPickerDelegate, TextInputDelegate, GJSpecialColorSelectDelegate {
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
}
