

class GManager : cocos2d::CCNode {
    volatile virtual void setup() {};

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

class LocalLevelManager {
    static LocalLevelManager* sharedState() = 0x35dd60;
}

class MusicDownloadManager {
    void incrementPriorityForSong(int) = 0x2ef750;
    static MusicDownloadManager* sharedState() = 0x2ee4c0;
}

class ObjectToolbox {
    bool init() = 0x3b2d80;
    char const* intKeyToFrame(int) = 0x4173b0;
    static ObjectToolbox* sharedState() = 0x3b2bc0;

    cocos2d::CCDictionary* m_strKeyObjects = 0x120;
    cocos2d::CCDictionary* m_intKeyObjects = 0x128;
}

class PlatformToolbox {
    void hideCursor() = 0x27c340;
    void showCursor() = 0x27c360;
}

class GJEffectManager : cocos2d::CCNode {
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
    void loadState(gd::string) = 0x188db0;
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
    void setupFromString(gd::string) = 0x186290;
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
    gd::vector<InheritanceNode*> m_inheritanceNodesForGroup;
    cocos2d::CCDictionary* m_f01a8;
    cocos2d::CCDictionary* m_collisionActionsForGroup1;
    cocos2d::CCDictionary* m_collisionActionsForGroup2;
    gd::vector<ColorAction*> m_colorActionsForGroup;
    gd::vector<ColorActionSprite*> m_colorSpritesForGroup;
    bool m_pulseExistsForGroup[1100];
    bool m_f063c;
    bool m_opactiyExistsForGroup[1100];
    int m_itemValues[1100];
    int m_unusued;
    int* m_unused2;
    cocos2d::CCArray* m_f1bc8;
    cocos2d::CCArray* m_inheritanceChain;
    cocos2d::CCDictionary* m_f1bd8;
    gd::vector<bool> m_groupToggled;
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
}
