// Copyright camden314 2021
#ifndef __CC_DEFS_HPP__
#define __CC_DEFS_HPP__

#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <string>
#include <map>
#include <GDML/GDML.hpp>
#include <CCMenuItemSpriteExtra.h>
#include <cocos2dx/cocos2d.h>
#include <cocos2dext/cocos-ext.h>


#define GM (GameManager::sharedState())
#define LEL (GM->_editorLayer())
#define PL (GM->_playLayer())
#define GJBL (LEL ? static_cast<GJBaseGameLayer*>(LEL) : static_cast<GJBaseGameLayer*>(PL))
#define WINSIZE (CCDirector::sharedDirector()->getWinSize())

typedef void(*queuefunc)(std::string);

//thanks pie
enum SearchType {
    kSearch          = 0x0,
    kMostDownloaded  = 0x1,
    kMostLiked       = 0x2,
    kTrending        = 0x3,
    kRecent          = 0x4,
    kUsersLevels     = 0x5,
    kFeatured        = 0x6,
    kMagic           = 0x7,
    kMapPacks        = 0x9,
    kAwarded         = 0xB,
    kFollowed        = 0xC,
    kFriends         = 0xD,
    kFindUsers       = 0xE,
    kHallOfFame      = 0x10,
    kMyLevels        = 0x62,
    kSavedLevels     = 0x63
};

typedef struct GameModes {
    bool cube;
    bool ship;
    bool ufo;
    bool ball;
    bool wave;
    bool robot;
    bool spider;
} GameModes;

typedef struct LevelDifficulty {
    int32_t denominator;
    int32_t numerator;  
} LevelDifficulty;

#define CLASS_PARAM(__TYPE__, __GETTER__, __OFFSET__) \
    inline __TYPE__& _##__GETTER__() { \
        return *((__TYPE__*)((long)this + __OFFSET__)); \
    }

#define STRUCT_PARAM(__TYPE__, __GETTER__, __OFFSET__) \
    inline __TYPE__ _##__GETTER__() { \
        return *(__TYPE__*)((long)this+__OFFSET__); \
    }

int xCompSpeed(void const*, void const*);
int xCompRealPos(void const*, void const*);


class GDObj { 
public:

    void* valOffset(long offset);
    void setValOffset(long offset, void* setter);
    template <typename T>
    T& __member(long offset) {
        return *reinterpret_cast<T*>(valOffset(offset));
    }
};


enum GameObjectType {};
enum PulseEffectType {};
enum TouchTriggerType {};
enum PlayerButton {};
enum GhostType {};
enum IconType {};


class AnimatedGameObject;
class AppDelegate;
class AudioEffectsLayer;
class ButtonSprite;
class CCAnimatedSprite;
class CCCircleWave;
class CCLightFlash;
class CCMenuItemSpriteExtra;
class CCMenuItemToggler;
class CCMoveCNode;
class CCNodeContainer;
class CCSpritePlus;
class CCTextInputNode;
class CheckpointObject;
class CollisionBlockPopup;
class CollisionTriggerAction;
class ColorAction;
class ColorChannelSprite;
class ColorSelectLiveOverlay;
class ColorSelectPopup;
class CountTriggerAction;
class CreateMenuItem;
class CreatorLayer;
class CustomizeObjectLayer;
class DelayedSpawnNode;
class DialogLayer;
class DialogObject;
class DrawGridLayer;
class EditButtonBar;
class EditorOptionsLayer;
class EditorPauseLayer;
class EditorUI;
class EffectGameObject;
class EndLevelLayer;
class EndPortalObject;
class FLAlertLayer;
class FollowRewardPage;
class GJAccountManager;
class GJBaseGameLayer;
class GJColorSetupLayer;
class GJDropDownLayer;
class GJEffectManager;
class GJFollowCommandLayer;
class GJGameLevel;
class GJGroundLayer;
class GJMoveCommandLayer;
class GJPFollowCommandLayer;
class GJRobotSprite;
class GJRotateCommandLayer;
class GJSearchObject;
class GJSpecialColorSelect;
class GJSpiderSprite;
class GManager;
class GameLevelManager;
class GameManager;
class GameObject;
class GameObjectCopy;
class GameSoundManager;
class GameStatsManager;
class GameToolbox;
class GravityEffectSprite;
class GroupCommandObject;
class HardStreak;
class InfoLayer;
class LabelGameObject;
class LevelBrowserLayer;
class LevelEditorLayer;
class LevelSettingsLayer;
class LevelSettingsObject;
class LevelTools;
class LoadingLayer;
class LocalLevelManager;
class MenuGameLayer;
class MenuLayer;
class MoreVideoOptionsLayer;
class MusicDownloadManager;
class OBB2D;
class ObjectToolbox;
class OpacityEffectAction;
class PauseLayer;
class PlatformToolbox;
class PlayLayer;
class PlayerCheckpoint;
class PlayerObject;
class PulseEffectAction;
class RetryLevelLayer;
class SetGroupIDLayer;
class SetIDLayer;
class SetItemIDLayer;
class SetTargetIDLayer;
class SetupAnimationPopup;
class SetupCollisionTriggerPopup;
class SetupCountTriggerPopup;
class SetupInstantCountPopup;
class SetupInteractObjectPopup;
class SetupObjectTogglePopup;
class SetupOpacityPopup;
class SetupPickupTriggerPopup;
class SetupPulsePopup;
class SetupShakePopup;
class SetupSpawnPopup;
class SetupTouchTogglePopup;
class SimplePlayer;
class Slider;
class SliderThumb;
class SpawnTriggerAction;
class SpeedObject;
class TeleportPortalObject;
class TextArea;
class TextInputDelegate;
class ToggleTriggerAction;
class TouchToggleAction;
class UILayer;
class UndoObject;


class AnimatedGameObject : public GDObj {
    void playAnimation(int);
    void updateChildSpriteColor(cocos2d::_ccColor3B);
};

class AppDelegate : public GDObj {
    void bgScale();
    static AppDelegate* get();
};

class AudioEffectsLayer : public GDObj {
    void audioStep(float);
    static AudioEffectsLayer* create(std::string);
    void resetAudioVars();
};

class ButtonSprite : public GDObj {
    static ButtonSprite* create(char const*);
    static ButtonSprite* create(char const*, int, int, float, bool);
    void updateBGImage(char const*);
};

class CCAnimatedSprite : public GDObj {
    void runAnimation(std::string);
    void tweenToAnimation(std::string, float);
};

class CCCircleWave : public GDObj {
    static CCCircleWave* create(float, float, float, bool);
    static CCCircleWave* create(float, float, float, bool, bool);
    void followObject(cocos2d::CCNode*, bool);
    void updatePosition(float);
};

class CCLightFlash : public GDObj {
    static CCLightFlash* create();
    void playEffect(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float);
};

class CCMenuItemSpriteExtra : public GDObj {
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_CallFuncO);
    void setSizeMult(float);
};

class CCMenuItemToggler : public GDObj {
    static CCMenuItemToggler* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_CallFuncO);
    void setSizeMult(float);
};

class CCMoveCNode : public GDObj {
    static CCMoveCNode* create();
    bool init();
    ~CCMoveCNode();
};

class CCNodeContainer : public GDObj {
    static CCNodeContainer* create();
    bool init();
    void visit();
};

class CCSpritePlus : public GDObj {
    bool initWithSpriteFrameName(char const*);
};

class CCTextInputNode : public GDObj {
    static CCTextInputNode* create(float, float, char const*, char const*, int, char const*);
    std::string getString();
    void refreshLabel();
    void setAllowedChars(std::string);
    void setLabelPlaceholderColor(cocos2d::_ccColor3B);
    void setLabelPlaceholderScale(float);
    void setMaxLabelScale(float);
    void setMaxLabelWidth(float);
    void setString(std::string);
    void updateLabel(std::string);
};

class CheckpointObject : public GDObj {
    static CheckpointObject* create();
    void getObject();
};

class CollisionBlockPopup : public GDObj {
    static CollisionBlockPopup* create(EffectGameObject*, cocos2d::CCArray*);
    void onNextItemID(cocos2d::CCObject*);
};

class CollisionTriggerAction : public GDObj {
    static CollisionTriggerAction* createFromString(std::string);
};

class ColorAction : public GDObj {
    void getSaveString();
    void setupFromDict(cocos2d::CCDictionary*);
    void setupFromString(std::string);
};

class ColorChannelSprite : public GDObj {
    void updateBlending(bool);
    void updateCopyLabel(int, bool);
    void updateOpacity(float);
    void updateValues(ColorAction*);
};

class ColorSelectLiveOverlay : public GDObj {
};

class ColorSelectPopup : public GDObj {
    void colorValueChanged(cocos2d::_ccColor3B);
    static ColorSelectPopup* create(EffectGameObject*, cocos2d::CCArray*);
    bool init(EffectGameObject*, cocos2d::CCArray*, ColorAction*);
    void onDefault(cocos2d::CCObject*);
    void onMultiTrigger(cocos2d::CCObject*);
    void onPlayerColor1(cocos2d::CCObject*);
    void onPlayerColor2(cocos2d::CCObject*);
    void onSpawnedByTrigger(cocos2d::CCObject*);
    void onToggleHSVMode(cocos2d::CCObject*);
    void onTouchTriggered(cocos2d::CCObject*);
    void show();
    void sliderChanged(cocos2d::CCObject*);
    void updateCopyColor();
    void updateCopyColorTextInputLabel();
    void updateDurLabel();
    void updateHSVMode();
    void updateOpacityLabel();
    void updateTouchTriggered();
    ~ColorSelectPopup();
};

class CountTriggerAction : public GDObj {
    static CountTriggerAction* createFromString(std::string);
};

class CreateMenuItem : public GDObj {
};

class CreatorLayer : public GDObj {
    void onMyLevels(cocos2d::CCObject*);
    void onSavedLevels(cocos2d::CCObject*);
};

class CustomizeObjectLayer : public GDObj {
    void colorSelectClosed(cocos2d::CCNode*);
    static CustomizeObjectLayer* create(GameObject*, cocos2d::CCArray*);
    bool init(GameObject*, cocos2d::CCArray*);
    void textChanged(CCTextInputNode*);
    void textInputClosed(CCTextInputNode*);
};

class DelayedSpawnNode : public GDObj {
    static DelayedSpawnNode* create();
};

class DialogLayer : public GDObj {
    static DialogLayer* create(DialogObject*, int);
};

class DialogObject : public GDObj {
    static DialogObject* create(std::string, std::string, int, float, bool, cocos2d::_ccColor3B);
};

class DrawGridLayer : public GDObj {
    void addPlayer2Point(cocos2d::CCPoint, bool);
    void addPlayerPoint(cocos2d::CCPoint);
    void addToSpeedObjects(GameObject*);
    static DrawGridLayer* create(cocos2d::CCNode*, LevelEditorLayer*);
    bool init(cocos2d::CCNode*, LevelEditorLayer*);
    void timeForXPos(float);
    void update(float);
    void updateTimeMarkers();
    void xPosForTime(float);
    ~DrawGridLayer();
};

class EditButtonBar : public GDObj {
    void loadFromItems(cocos2d::CCArray*, int, int, bool);
};

class EditorOptionsLayer : public GDObj {
    void onButtonsPerRow(cocos2d::CCObject*);
};

class EditorPauseLayer : public GDObj {
    static EditorPauseLayer* create(LevelEditorLayer*);
    void saveLevel();
};

class EditorUI : public cocos2d::CCLayer, public GDObj {
    cocos2d::CCLayer constrainGameLayerPosition();
    void create(LevelEditorLayer*);
    void deselectAll();
    void onDeselectAll(CCObject*);
    void disableButton(CreateMenuItem*);
    void editButtonUsable();
    void editObject(cocos2d::CCObject*);
    void enableButton(CreateMenuItem*);
    CCMenuItemSpriteExtra* getCreateBtn(int, int);
    void getGroupCenter(cocos2d::CCArray*, bool);
    cocos2d::CCArray* getSelectedObjects();
    void init(LevelEditorLayer*);
    virtual void keyDown(cocos2d::enumKeyCodes);
    void moveObject(GameObject*, cocos2d::CCPoint);
    void onDuplicate(cocos2d::CCObject*);
    void pasteObjects(std::string);
    void playtestStopped();
    void redoLastAction(cocos2d::CCObject*);
    void replaceGroupID(GameObject*, int, int);
    void scaleChanged(float);
    void scaleObjects(cocos2d::CCArray*, float, cocos2d::CCPoint);
    void selectObjects(cocos2d::CCArray*, bool);
    void setupCreateMenu();
    void undoLastAction(cocos2d::CCObject*);
    void updateButtons();
    void updateObjectInfoLabel();
    void updateSlider();
    void updateZoom(float);
    CLASS_PARAM(LevelEditorLayer*, editorLayer, 0x408);
    CLASS_PARAM(cocos2d::CCArray*, editBars, 0x358);
    CLASS_PARAM(cocos2d::CCNode*, locationSlider, 0x228);
    CLASS_PARAM(GameObject*, lastSelectedObject, 0x440);
    CLASS_PARAM(std::string, clipboard, 0x458);
};

class EffectGameObject : public GDObj {
    static EffectGameObject* create(char const*);
    void getTargetColorIndex();
    void triggerObject(GJBaseGameLayer*);
};

class EndLevelLayer : public GDObj {
    static EndLevelLayer* create();
};

class EndPortalObject : public GDObj {
    static EndPortalObject* create();
    void updateColors(cocos2d::_ccColor3B);
};

class FLAlertLayer : public GDObj {
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float);
    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float);
    bool init(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float);
    void keyBackClicked();
    void keyDown(cocos2d::enumKeyCodes);
    void onEnter();
    void registerWithTouchDispatcher();
    void show();
    ~FLAlertLayer();
};

class FollowRewardPage : public GDObj {
    static FollowRewardPage* create();
};

class GJAccountManager : public GDObj {
    static GJAccountManager* sharedState();
};

class GJBaseGameLayer : public GDObj {
    void addObjectCounter(LabelGameObject*, int);
    void addToGroup(GameObject*, int, bool);
    void addToGroups(GameObject*, bool);
    void addToSection(GameObject*);
    void atlasValue(int);
    void bumpPlayer(PlayerObject*, GameObject*);
    virtual void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*);
    void calculateOpacityValues(EffectGameObject*, EffectGameObject*, float, GJEffectManager*);
    void checkSpawnObjects();
    void collectItem(int, int);
    void collectedObject(EffectGameObject*);
    void createMoveCommand(cocos2d::CCPoint, int, float, int, float, bool, bool, int);
    void createTextLayers();
    void damagingObjectsInRect(cocos2d::CCRect);
    void enableHighCapacityMode();
    void flipGravity(PlayerObject*, bool, bool);
    void getCapacityString();
    void getGroundHeightForMode(int);
    void getGroup(int);
    void getMoveDeltaForObjects(int, int);
    void getOptimizedGroup(int);
    void getStaticGroup(int);
    bool init();
    void isGroupDisabledForObject(GameObject*);
    void isGroupDisabledForObjectFull(GameObject*, cocos2d::CCArray*);
    void loadUpToPosition(float);
    void objectIntersectsCircle(GameObject*, GameObject*);
    void objectTriggered(EffectGameObject*);
    void objectsCollided(int, int);
    void optimizeMoveGroups();
    void parentForZLayer(int, bool, int);
    void playerTouchedRing(PlayerObject*, GameObject*);
    void processColorObject(EffectGameObject*, int, cocos2d::CCDictionary*, float, GJEffectManager*);
    void processFollowActions();
    void processMoveActions();
    void processMoveActionsStep(float);
    void processOpacityObject(EffectGameObject*, cocos2d::CCDictionary*, float, GJEffectManager*);
    void processPlayerFollowActions(float);
    void processRotationActions();
    void pushButton(int, bool);
    void rectIntersectsCircle(cocos2d::CCRect, cocos2d::CCPoint, float);
    void refreshCounterLabels();
    void releaseButton(int, bool);
    void removeFromGroup(GameObject*, int);
    void removeFromGroups(GameObject*);
    void removeObjectFromSection(GameObject*);
    void reorderObjectSection(GameObject*);
    void resetGroupCounters(bool);
    void resetMoveOptimizedValue();
    void sectionForPos(float);
    void setupLayers();
    void shouldExitHackedLevel();
    void spawnGroup(int);
    void spawnGroupTriggered(int, float, int);
    void staticObjectsInRect(cocos2d::CCRect);
    void testInstantCountTrigger(int, int, int, bool, int);
    void toggleGroup(int, bool);
    void toggleGroupTriggered(int, bool);
    void togglePlayerVisibility(bool);
    void triggerMoveCommand(EffectGameObject*);
    void updateCollisionBlocks();
    void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*);
    void updateCounters(int, int);
    void updateDisabledObjectsLastPos(cocos2d::CCArray*);
    void updateLayerCapacity(std::string);
    void updateLegacyLayerCapacity(int, int, int, int);
    void updateOBB2(cocos2d::CCRect);
    void updateQueuedLabels();
    ~GJBaseGameLayer();
};

class GJColorSetupLayer : public GDObj {
    void updateSpriteColors();
};

class GJDropDownLayer : public cocos2d::CCLayerColor, public GDObj {
    cocos2d::CCLayerColor GJDropDownLayer* create(char const*);
    virtual void customSetup();
    virtual void enterLayer();
    virtual void exitLayer(cocos2d::CCObject*);
    virtual void showLayer(bool);
    virtual void hideLayer(bool);
    virtual void layerVisible();
    virtual void layerHidden();
    virtual void enterAnimFinished();
    virtual void disableUI();
    virtual void enableUI();
    void draw();
    bool init(char const*, float);
    void registerWithTouchDispatcher();
    cocos2d::CCPoint m_endPosition;
    cocos2d::CCPoint m_startPosition;
    cocos2d::CCMenu* m_buttonMenu;
    GJListLayer* m_listLayer;
    bool m_controllerEnabled;
    cocos2d::CCLayer* m_mainLayer;
    bool m_hidden;
    void* m_unknown;
};

class GJEffectManager : public GDObj {
    void activeColorForIndex(int);
    void activeOpacityForIndex(int);
    void addAllInheritedColorActions(cocos2d::CCArray*);
    void addGroupPulseEffect(PulseEffectAction*);
    void calculateBaseActiveColors();
    void calculateInheritedColor(int, ColorAction*);
    void calculateLightBGColor(cocos2d::_ccColor3B);
    void colorActionChanged(ColorAction*);
    void colorExists(int);
    void colorForEffect(cocos2d::_ccColor3B, cocos2d::_ccHSVValue);
    void colorForGroupID(int, cocos2d::_ccColor3B const&, bool);
    void colorForIndex(int);
    void colorForPulseEffect(cocos2d::_ccColor3B const&, PulseEffectAction*);
    void countChangedForItem(int);
    void countForItem(int);
    static GJEffectManager* create();
    void createFollowCommand(float, float, float, int, int, bool, int);
    void createMoveCommand(cocos2d::CCPoint, int, float, int, float, bool, bool, int);
    void createPlayerFollowCommand(float, float, int, float, float, int, int);
    void createRotateCommand(int, float, int, int, int, float, bool, int);
    void getAllColorActions();
    void getAllColorSprites();
    const cocos2d::_ccColor3B& getColorAction(int);
    const cocos2d::_ccColor3B& getColorSprite(int);
    void getCurrentStateString();
    void getLoadedMoveOffset();
    void getMixedColor(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float);
    uint8_t getOpacityActionForGroup(int);
    void getSaveString();
    void handleObjectCollision(bool, int, int);
    void hasActiveDualTouch();
    void hasBeenTriggered(int);
    void hasPulseEffectForGroupID(int);
    bool init();
    bool isGroupEnabled(int);
    void keyForGroupIDColor(int, cocos2d::_ccColor3B const&, bool);
    void loadState(std::string);
    void objectsCollided(int, int);
    void opacityForIndex(int);
    float opacityModForGroup(int);
    void playerButton(bool, bool);
    void playerDied();
    void postCollisionCheck();
    void preCollisionCheck();
    void prepareMoveActions(float, bool);
    void processColors();
    void processCopyColorPulseActions();
    void processInheritedColors();
    void processPulseActions();
    void registerCollisionTrigger(int, int, int, bool, bool, int);
    void removeAllPulseActions();
    void removeColorAction(int);
    void reset();
    void resetColorCache();
    void resetEffects();
    void resetMoveActions();
    void resetToggledGroups();
    void resetTriggeredIDs();
    void runCountTrigger(int, int, bool, int, bool, int);
    void runDeathTrigger(int, bool, int);
    void runOpacityActionOnGroup(int, float, float, int);
    void runPulseEffect(int, bool, float, float, float, PulseEffectType, cocos2d::_ccColor3B, cocos2d::_ccHSVValue, int, bool, bool, bool, int);
    void runTouchTriggerCommand(int, bool, TouchTriggerType, bool, int);
    void setColorAction(ColorAction*, int);
    void setFollowing(int, int, bool);
    void setupFromString(std::string);
    void shouldBlend(int);
    void spawnGroup(int, float, int);
    void stopActionsForTrigger(EffectGameObject*);
    void stopMoveActionsForGroup(int);
    void storeTriggeredID(int);
    void toggleGroup(int, bool);
    void traverseInheritanceChain(InheritanceNode*);
    void updateActiveOpacityEffects();
    void updateColorAction(ColorAction*);
    void updateColorEffects(float);
    void updateColors(cocos2d::_ccColor3B, cocos2d::_ccColor3B);
    void updateEffects(float);
    void updateOpacityAction(OpacityEffectAction*);
    void updateOpacityEffects(float);
    void updatePulseEffects(float);
    void updateSpawnTriggers(float);
    void wasFollowing(int, int);
    void wouldCreateLoop(InheritanceNode*, int);
    ~GJEffectManager();
};

class GJFollowCommandLayer : public GDObj {
    static GJFollowCommandLayer* create(EffectGameObject*, cocos2d::CCArray*);
    void onUpdateGroupID(cocos2d::CCObject*);
    void onUpdateGroupID2(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetGroupID();
    void updateTargetGroupID2();
};

class GJGameLevel : public GDObj {
    static GJGameLevel* create();
    void getAudioFileName();
    void getCoinKey(int);
    void getLengthKey(int);
    void getNormalPercent();
    void levelWasAltered();
    void savePercentage(int, bool, int, int, bool);
};

class GJGroundLayer : public GDObj {
    static GJGroundLayer* create(int, int);
    void deactivateGround();
    void getGroundY();
    void updateGround01Color(cocos2d::_ccColor3B);
    void updateGround02Color(cocos2d::_ccColor3B);
    void updateGroundPos(cocos2d::CCPoint);
    void updateGroundWidth();
};

class GJMoveCommandLayer : public GDObj {
    static GJMoveCommandLayer* create(EffectGameObject*, cocos2d::CCArray*);
    bool init(EffectGameObject*, cocos2d::CCArray*);
    void keyBackClicked();
    void onUpdateGroupID(cocos2d::CCObject*);
    void onUpdateGroupID2(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void textInputClosed(CCTextInputNode*);
    void textInputReturn(CCTextInputNode*);
    void textInputShouldOffset(CCTextInputNode*, float);
    void updateEditorLabel();
    void updateMoveTargetElements();
    void updateTargetGroupID();
    void updateTargetGroupID2();
    void updateTextInputLabel();
    void updateTextInputLabel2();
    void updateValueXLabel();
    void updateValueYLabel();
    void valuePopupClosed(ConfigureValuePopup*, float);
    ~GJMoveCommandLayer();
};

class GJPFollowCommandLayer : public GDObj {
    static GJPFollowCommandLayer* create(EffectGameObject*, cocos2d::CCArray*);
    void textChanged(CCTextInputNode*);
    void updateTargetGroupID();
};

class GJRobotSprite : public GDObj {
    static GJRobotSprite* create();
    void updateColor02(cocos2d::_ccColor3B);
    void updateFrame(int);
};

class GJRotateCommandLayer : public GDObj {
    static GJRotateCommandLayer* create(EffectGameObject*, cocos2d::CCArray*);
    void onUpdateGroupID(cocos2d::CCObject*);
    void onUpdateGroupID2(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetGroupID();
    void updateTargetGroupID2();
};

class GJSearchObject : public GDObj {
    static GJSearchObject* create(SearchType);
    static GJSearchObject* create(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, int, int);
    void getPageObject(int);
};

class GJSpecialColorSelect : public GDObj {
    void textForColorIdx(int);
};

class GJSpiderSprite : public GDObj {
    static GJSpiderSprite* create();
};

class GManager : public GDObj {
    void save();
    void saveData(DS_Dictionary*, std::string);
    void saveGMTo(std::string);
};

class GameLevelManager : public GDObj {
    GJGameLevel* createNewLevel();
    static GameLevelManager* sharedState();
};

class GameManager : public GDObj {
    void accountStatusChanged();
    const cocos2d::_ccColor3B& colorForIdx(int);
    void didExitPlayscene();
    void doQuickSave();
    void fadeInMusic(char const*);
    void getBGTexture(int);
    void getFontFile(int);
    bool getGameVariable(char const*);
    int getIntGameVariable(char const*);
    void getUGV(char const*);
    void loadDeathEffect(int);
    void loadFont(int);
    void reloadAll(bool, bool, bool);
    void reloadAllStep5();
    void reportPercentageForLevel(int, int, bool);
    void setGameVariable(char const*, bool);
    void setIntGameVariable(char const*, int);
    void setUGV(char const*, bool);
    static GameManager* sharedState();
    ~GameManager();
};

class GameObject : public GDObj {
    void activateObject();
    void activatedByPlayer(GameObject*);
    void addColorSprite();
    void addColorSpriteToParent(bool);
    void addMainSpriteToParent(bool);
    void addToGroup(int);
    void addToTempOffset(float, float);
    void calculateOrientedBox();
    void calculateSpawnXPos();
    void canChangeCustomColor();
    void colorForMode(int, bool);
    void commonSetup();
    void copyGroups(GameObject*);
    static GameObject* createWithFrame(char const*);
    static GameObject* createWithKey(int);
    void customSetup();
    void deactivateObject(bool);
    void destroyObject();
    void determineSlopeDirection();
    void getActiveColorForMode(int, bool);
    void getBallFrame(int);
    void getBoxOffset();
    const cocos2d::_ccColor3B& getColorIndex();
    void getDidUpdateLastPosition();
    void getGroupID(int);
    void getLastPosition();
    void getMainColorMode();
    cocos2d::CCRect* getObjectRect();
    void getObjectRect(float, float);
    void getObjectRect2(float, float);
    void getObjectRectDirty();
    void getObjectTextureRect();
    void getObjectZOrder();
    void getOrientedRectDirty();
    void getRScaleX();
    void getRScaleY();
    std::string getSaveString();
    void getSecondaryColorMode();
    void getSectionIdx();
    void getStartPos();
    void getType();
    void groupWasDisabled();
    void groupWasEnabled();
    void hasBeenActivated();
    void hasBeenActivatedByPlayer(GameObject*);
    void hasSecondaryColor();
    void ignoreEnter();
    void ignoreFade();
    bool initWithTexture(cocos2d::CCTexture2D*);
    void isBasicTrigger();
    void isColorTrigger();
    void isFlipX();
    void isFlipY();
    void isSpawnableTrigger();
    void isSpecialObject();
    static GameObject* objectFromString(std::string, bool);
    void playShineEffect();
    void powerOffObject();
    void powerOnObject();
    void quickUpdatePosition();
    void removeFromGroup(int);
    void removeGlow();
    void resetGroupDisabled();
    void saveActiveColors();
    void selectObject(cocos2d::_ccColor3B);
    void setChildColor(cocos2d::_ccColor3B const&);
    void setDefaultMainColorMode(int);
    void setDidUpdateLastPosition(bool const&);
    void setGlowColor(cocos2d::_ccColor3B const&);
    void setGlowOpacity(unsigned char);
    void setLastPosition(cocos2d::CCPoint const&);
    void setMainColorMode(int);
    void setObjectColor(cocos2d::_ccColor3B const&);
    void setObjectRectDirty(bool);
    void setOrientedRectDirty(bool);
    void setPosition(cocos2d::CCPoint const&);
    void setRScale(float);
    void setRScaleX(float);
    void setRScaleY(float);
    void setSectionIdx(int const&);
    void setStartPos(cocos2d::CCPoint);
    void setType(GameObjectType);
    void setupCoinArt();
    void setupCustomSprites();
    void slopeFloorTop();
    void slopeWallLeft();
    void spawnXPosition();
    void triggerActivated(float);
    void triggerObject(GJBaseGameLayer*);
    void updateCustomScale(float);
    void updateMainColor();
    void updateOrientedBox();
    void updateSecondaryColor();
    void updateStartPos();
    void updateStartValues();
    void updateState();
    void updateSyncedAnimation(float);
};

class GameObjectCopy : public GDObj {
    static GameObjectCopy* create(GameObject*);
    void resetObject();
    ~GameObjectCopy();
};

class GameSoundManager : public GDObj {
    void disableMetering();
    void enableMetering();
    void getMeteringValue();
    void playBackgroundMusic(std::string, bool, bool);
    void playEffect(std::string, float, float, float);
    void sharedManager();
    void stopBackgroundMusic();
    ~GameSoundManager();
};

class GameStatsManager : public GDObj {
    void awardCurrencyForLevel(GJGameLevel*);
    void awardDiamondsForLevel(GJGameLevel*);
    void awardSecretKey();
    void getSecretCoinKey(char const*);
    void getStat(char const*);
    void hasPendingUserCoin(char const*);
    void hasSecretCoin(char const*);
    void hasUserCoin(char const*);
    void incrementStat(char const*);
    void incrementStat(char const*, int);
    void sharedState();
    void storePendingUserCoin(char const*);
    void storeSecretCoin(char const*);
    void storeUserCoin(char const*);
};

class GameToolbox : public GDObj {
    void createToggleButton(std::string, cocos2d::SEL_CallFuncO, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*);
    static void getRelativeOffset(GameObject*, cocos2d::CCPoint);
    static void multipliedColorValue(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float);
    static void stringSetupToDict(std::string, char const*);
    void stringSetupToMap(std::string, char const*);
    static void transformColor(cocos2d::_ccColor3B const&, cocos2d::_ccHSVValue);
    static void transformColor(cocos2d::_ccColor3B const&, float, float, float);
};

class GravityEffectSprite : public GDObj {
    static GravityEffectSprite* create();
    bool init();
    void updateSpritesColor(cocos2d::_ccColor3B);
};

class GroupCommandObject : public GDObj {
    static GroupCommandObject* create();
    static GroupCommandObject* createFromString(std::string);
    void easeToText(int);
    void getEasedAction(cocos2d::CCActionInterval*, int, float);
    void runMoveCommand(cocos2d::CCPoint, float, int, float, bool, bool);
    void runRotateCommand(float, float, int, float, bool);
};

class HardStreak : public GDObj {
    void addPoint(cocos2d::CCPoint);
    void reset();
    void resumeStroke();
    void stopStroke();
};

class InfoLayer : public GDObj {
    void loadPage(int, bool);
    void onRefreshComments(cocos2d::CCObject*);
};

class LabelGameObject : public GDObj {
    bool init();
    void setObjectColor(cocos2d::_ccColor3B const&);
};

class LevelBrowserLayer : public GDObj {
    void loadPage(GJSearchObject*);
    static cocos2d::CCScene* scene(GJSearchObject*);
    void setIDPopupClosed(SetIDPopup*, int);
};

class LevelEditorLayer : public GDObj {
    void activateTriggerEffect(EffectGameObject*, float, float, float);
    GameObject* addObjectFromString(std::string);
    void addSpecial(GameObject*);
    void addToGroup(GameObject*, int, bool);
    void addToRedoList(UndoObject*);
    void addToUndoList(UndoObject*, bool);
    void animateInDualGround(GameObject*, float, bool);
    virtual void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*);
    void checkCollisions(PlayerObject*, float);
    static LevelEditorLayer* create(GJGameLevel*);
    void createBackground();
    void createGroundLayer();
    GameObject* createObject(int, cocos2d::CCPoint, bool);
    void createObjectsFromSetup(std::string);
    void createObjectsFromString(std::string, bool);
    void draw();
    void flipGravity(PlayerObject*, bool, bool);
    void getLastObjectX();
    void getLevelString();
    void getNextColorChannel();
    void getNextFreeBlockID(cocos2d::CCArray*);
    int getNextFreeGroupID(cocos2d::CCArray*);
    void getNextFreeItemID(cocos2d::CCArray*);
    void getObjectRect(GameObject*, bool);
    void getRelativeOffset(GameObject*);
    void handleAction(bool, cocos2d::CCArray*);
    bool init(GJGameLevel*);
    void levelSettingsUpdated();
    void objectAtPosition(cocos2d::CCPoint);
    void objectMoved(GameObject*);
    void objectsInRect(cocos2d::CCRect, bool);
    void onPlaytest();
    void onStopPlaytest();
    void playMusic();
    void recreateGroups();
    void redoLastAction();
    void removeAllObjects();
    void removeAllObjectsOfType(int);
    void removeFromGroup(GameObject*, int);
    void removeObject(GameObject*, bool);
    void removeSpecial(GameObject*);
    void resetMovingObjects();
    void resetObjectVector();
    void resetToggledGroups();
    void resetToggledGroupsAndObjects();
    void resetUnusedColorChannels();
    void rotationForSlopeNearObject(GameObject*);
    void runColorEffect(EffectGameObject*, int, float, float, bool);
    void scene(GJGameLevel*);
    void setupLevelStart(LevelSettingsObject*);
    void sortStickyGroups();
    void stopTriggersInGroup(int, float);
    void timeForXPos(float);
    void toggleDualMode(GameObject*, bool, PlayerObject*, bool);
    void toggleGroupPreview(int, bool);
    void transferDefaultColors(GJEffectManager*, GJEffectManager*);
    void undoLastAction();
    void update(float);
    void updateBGAndGColors();
    void updateBlendValues();
    void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*);
    void updateDualGround(PlayerObject*, int, bool);
    void updateEditorMode();
    void updateGameObjectsNew();
    void updateGround(float);
    void updateGroundWidth();
    void updateOptions();
    void updateToggledGroups();
    void updateVisibility(float);
    void xPosForTime(float);
    ~LevelEditorLayer();
};

class LevelSettingsLayer : public GDObj {
    static LevelSettingsLayer* create(LevelSettingsObject*, LevelEditorLayer*);
};

class LevelSettingsObject : public GDObj {
    static LevelSettingsObject* create();
    bool init();
    void objectFromDict(cocos2d::CCDictionary*);
    static LevelSettingsObject* objectFromString(std::string);
    void setupColorsFromLegacyMode(cocos2d::CCDictionary*);
};

class LevelTools : public GDObj {
    void getAudioString(int);
    void verifyLevelIntegrity(std::string, int);
    void xPosForTime(float, cocos2d::CCArray*, int);
};

class LoadingLayer : public GDObj {
    void loadAssets();
};

class LocalLevelManager : public GDObj {
    static LocalLevelManager* sharedState();
};

class MenuGameLayer : public GDObj {
    void resetPlayer();
    void update(float);
};

class MenuLayer : public GDObj {
    virtual void keyBackClicked();
    void onMoreGames(cocos2d::CCObject*);
    void onQuit(cocos2d::CCObject*);
};

class MoreVideoOptionsLayer : public GDObj {
    static MoreVideoOptionsLayer* create();
    bool init();
};

class MusicDownloadManager : public GDObj {
    void incrementPriorityForSong(int);
    static MusicDownloadManager* sharedState();
};

class OBB2D : public cocos2d::CCNode, public GDObj {
    cocos2d::CCNode calculateWithCenter(cocos2d::CCPoint, float, float, float);
    static OBB2D* create(cocos2d::CCPoint, float, float, float);
    void getBoundingRect();
    void overlaps(OBB2D*);
    void overlaps1Way(OBB2D*);
};

class ObjectToolbox : public GDObj {
    bool init();
    void intKeyToFrame(int);
    static ObjectToolbox* sharedState();
};

class OpacityEffectAction : public GDObj {
    static OpacityEffectAction* create(float, float, float, int);
    static OpacityEffectAction* createFromString(std::string);
    bool init(float, float, float, int);
    void step(float);
};

class PauseLayer : public GDObj {
    static PauseLayer* create(bool);
    void onEdit(cocos2d::CCObject*);
};

class PlatformToolbox : public GDObj {
    void hideCursor();
    void showCursor();
};

class PlayLayer : public GDObj {
    void addCircle(CCCircleWave*);
    void addObject(GameObject*);
    void addToGroupOld(GameObject*);
    void addToSpeedObjects(GameObject*);
    void animateInDualGround(GameObject*, float, bool);
    void animateInGround(bool);
    void animateOutGround(bool);
    void animateOutGroundFinished();
    void applyEnterEffect(GameObject*);
    virtual void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*);
    void cameraMoveX(float, float, float);
    void cameraMoveY(float, float, float);
    void checkCollisions(PlayerObject*, float);
    void circleWaveWillBeRemoved(CCCircleWave*);
    void claimParticle(std::string);
    void clearPickedUpItems();
    void colorObject(int, cocos2d::_ccColor3B);
    void commitJumps();
    static PlayLayer* create(GJGameLevel*);
    void createCheckpoint();
    void createObjectsFromSetup(std::string);
    void createParticle(int, char const*, int, cocos2d::tCCPositionType);
    void currencyWillExit(CurrencyRewardLayer*);
    void delayedResetLevel();
    void destroyPlayer(PlayerObject*, GameObject*);
    void dialogClosed(DialogLayer*);
    virtual void draw();
    void enterDualMode(GameObject*, bool);
    void exitAirMode();
    void exitBirdMode(PlayerObject*);
    void exitDartMode(PlayerObject*);
    void exitFlyMode(PlayerObject*);
    void exitRobotMode(PlayerObject*);
    void exitRollMode(PlayerObject*);
    void exitSpiderMode(PlayerObject*);
    void flipFinished();
    virtual void flipGravity(PlayerObject*, bool, bool);
    void flipObjects();
    void fullReset();
    void getLastCheckpoint();
    void getMaxPortalY();
    void getMinPortalY();
    void getObjectsState();
    void getOtherPlayer(PlayerObject*);
    void getParticleKey(int, char const*, int, cocos2d::tCCPositionType);
    void getParticleKey2(std::string);
    void getRelativeMod(cocos2d::CCPoint, float, float, float);
    void getTempMilliTime();
    void gravityEffectFinished();
    void hasItem(int);
    void hasUniqueCoin(GameObject*);
    void incrementJumps();
    bool init(GJGameLevel*);
    void isFlipping();
    void levelComplete();
    void lightningFlash(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, int, bool, float);
    void lightningFlash(cocos2d::CCPoint, cocos2d::_ccColor3B);
    void loadDefaultColors();
    void loadFromCheckpoint(CheckpointObject*);
    void loadLastCheckpoint();
    void loadSavedObjectsState(std::string);
    void markCheckpoint();
    void moveCameraToPos(cocos2d::CCPoint);
    virtual void onEnterTransitionDidFinish();
    virtual void onExit();
    void onQuit();
    void optimizeColorGroups();
    void optimizeOpacityGroups();
    void optimizeSaveRequiredGroups();
    void pauseGame(bool);
    void pickupItem(GameObject*);
    void playAnimationCommand(int, int);
    void playEndAnimationToPos(cocos2d::CCPoint);
    void playExitDualEffect(PlayerObject*);
    void playFlashEffect(float, int, float);
    void playGravityEffect(bool);
    void playSpeedParticle(float);
    void playerWillSwitchMode(PlayerObject*, GameObject*);
    void prepareSpawnObjects();
    void processItems();
    void processLoadedMoveActions();
    void recordAction(bool, PlayerObject*);
    void registerActiveObject(GameObject*);
    void registerStateObject(GameObject*);
    void removeAllObjects();
    void removeFromGroupOld(GameObject*);
    void removeLastCheckpoint();
    void removePlayer2();
    void resetLevel();
    void resume();
    void resumeAndRestart();
    void saveRecordAction(bool, PlayerObject*);
    void scene(GJGameLevel*);
    void setupLevelStart(LevelSettingsObject*);
    void setupReplay(std::string);
    void shakeCamera(float, float, float);
    void shouldBlend(int);
    void showCompleteEffect();
    void showCompleteText();
    void showEndLayer();
    void showHint();
    void showNewBest(bool, int, int, bool, bool, bool);
    void showRetryLayer();
    void showTwoPlayerGuide();
    void sortGroups();
    void spawnCircle();
    void spawnFirework();
    void spawnParticle(char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint);
    void spawnPlayer2();
    void startGame();
    void startMusic();
    void startRecording();
    void startRecordingDelayed();
    void stopCameraShake();
    void stopRecording();
    void storeCheckpoint(CheckpointObject*);
    void switchToFlyMode(PlayerObject*, GameObject*, bool, int);
    void switchToRobotMode(PlayerObject*, GameObject*, bool);
    void switchToRollMode(PlayerObject*, GameObject*, bool);
    void switchToSpiderMode(PlayerObject*, GameObject*, bool);
    void timeForXPos(float);
    void timeForXPos2(float, bool);
    void toggleBGEffectVisibility(bool);
    void toggleDualMode(GameObject*, bool, PlayerObject*, bool);
    void toggleFlipped(bool, bool);
    void toggleGhostEffect(int);
    void toggleGlitter(bool);
    void togglePracticeMode(bool);
    void toggleProgressbar();
    void tryStartRecord();
    void unclaimParticle(char const*, cocos2d::CCParticleSystemQuad*);
    void unregisterActiveObject(GameObject*);
    void unregisterStateObject(GameObject*);
    virtual void update(float);
    void updateAttempts();
    void updateCamera(float);
    virtual void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*);
    void updateDualGround(PlayerObject*, int, bool);
    void updateEffectPositions();
    void updateLevelColors();
    void updateMoveObjectsLastPosition();
    void updateProgressbar();
    void updateReplay(float);
    void updateTimeMod(float, bool);
    virtual void updateTweenAction(float, char const*);
    void updateVisibility();
    void vfDChk();
    virtual void visit();
    void visitWithColorFlash();
    void willSwitchToMode(int, PlayerObject*);
    void xPosForTime(float);
    ~PlayLayer();
};

class PlayerCheckpoint : public GDObj {
    static PlayerCheckpoint* create();
};

class PlayerObject : public GDObj {
    void activateStreak();
    void addAllParticles();
    void addToTouchedRings(GameObject*);
    virtual void animationFinished(char const*);
    void boostPlayer(float);
    void bumpPlayer(float, int);
    void buttonDown(PlayerButton);
    void checkSnapJumpToObject(GameObject*);
    void collidedWithObject(float, GameObject*);
    void collidedWithObject(float, GameObject*, cocos2d::CCRect);
    void collidedWithSlope(float, GameObject*, bool);
    void convertToClosestRotation(float);
    void copyAttributes(PlayerObject*);
    static PlayerObject* create(int, int, cocos2d::CCLayer*);
    void deactivateParticle();
    void deactivateStreak(bool);
    void fadeOutStreak2(float);
    void flashPlayer(float, float, cocos2d::_ccColor3B, cocos2d::_ccColor3B);
    void flipGravity(bool, bool);
    void flipMod();
    void getActiveMode();
    void getModifiedSlopeYVel();
    void getOldPosition(float);
    virtual void getOrientedBox();
    virtual void getRealPosition();
    void getSecondColor();
    void gravityDown();
    void gravityUp();
    void hardFlipGravity();
    void hitGround(bool);
    void incrementJumps();
    bool init(int, int, cocos2d::CCLayer*);
    void isBoostValid(float);
    void isFlying();
    void isSafeFlip(float);
    void isSafeMode(float);
    void isSafeSpiderFlip(float);
    void levelFlipFinished();
    void levelFlipping();
    void levelWillFlip();
    void loadFromCheckpoint(PlayerCheckpoint*);
    void lockPlayer();
    void logValues();
    void modeDidChange();
    void placeStreakPoint();
    void playBurstEffect();
    void playDeathEffect();
    void playDynamicSpiderRun();
    void playerDestroyed(bool);
    void playerIsFalling();
    void playerTeleported();
    void playingEndEffect();
    void postCollision(float);
    void preCollision();
    void preSlopeCollision(float, GameObject*);
    void propellPlayer(float);
    void pushButton(PlayerButton);
    void pushDown();
    void pushPlayer(float);
    void releaseButton(PlayerButton);
    void removeAllParticles();
    void removePendingCheckpoint();
    void resetAllParticles();
    void resetCollisionLog();
    virtual void resetObject();
    void resetPlayerIcon();
    void resetStateVariables();
    void resetStreak();
    void ringJump(GameObject*);
    void runBallRotation(float);
    void runBallRotation2();
    void runNormalRotation();
    void runRotateAction(bool);
    void saveToCheckpoint(PlayerCheckpoint*);
    virtual void setColor(cocos2d::_ccColor3B const&);
    virtual void setFlipX(bool);
    virtual void setFlipY(bool);
    virtual void setOpacity(unsigned char);
    virtual void setPosition(cocos2d::CCPoint const&);
    virtual void setRotation(float);
    virtual void setScale(float);
    virtual void setScaleX(float);
    virtual void setScaleY(float);
    void setSecondColor(cocos2d::_ccColor3B const&);
    virtual void setVisible(bool);
    void setupStreak();
    void spawnCircle();
    void spawnCircle2();
    void spawnDualCircle();
    void spawnFromPlayer(PlayerObject*);
    void spawnPortalCircle(cocos2d::_ccColor3B, float);
    void spawnScaleCircle();
    void specialGroundHit();
    void speedDown();
    void speedUp();
    void spiderTestJump(bool);
    void startDashing(GameObject*);
    void stopBurstEffect();
    void stopDashing();
    void stopRotation(bool);
    void storeCollision(bool, int);
    void switchedToMode(GameObjectType);
    void testForMoving(float, GameObject*);
    void toggleBirdMode(bool);
    void toggleDartMode(bool);
    void toggleFlyMode(bool);
    void toggleGhostEffect(GhostType);
    void togglePlayerScale(bool);
    void toggleRobotMode(bool);
    void toggleRollMode(bool);
    void toggleSpiderMode(bool);
    void toggleVisibility(bool);
    void touchedObject(GameObject*);
    void tryPlaceCheckpoint();
    virtual void update(float);
    void updateCheckpointMode(bool);
    void updateCheckpointTest();
    void updateCollide(bool, int);
    void updateCollideBottom(float, int);
    void updateCollideTop(float, int);
    void updateDashAnimation();
    void updateDashArt();
    void updateGlowColor();
    void updateJump(float);
    void updateJumpVariables();
    void updatePlayerBirdFrame(int);
    void updatePlayerDartFrame(int);
    void updatePlayerFrame(int);
    void updatePlayerGlow();
    void updatePlayerRobotFrame(int);
    void updatePlayerRollFrame(int);
    void updatePlayerScale();
    void updatePlayerShipFrame(int);
    void updatePlayerSpiderFrame(int);
    void updatePlayerSpriteExtra(std::string);
    void updateRobotAnimationSpeed();
    void updateRotation(float);
    void updateRotation(float, float);
    void updateShipRotation(float);
    void updateShipSpriteExtra(std::string);
    void updateSlopeRotation(float);
    void updateSlopeYVelocity(float);
    void updateSpecial(float);
    void updateStateVariables();
    void updateTimeMod(float);
    void usingWallLimitedMode();
    void yStartDown();
    void yStartUp();
    ~PlayerObject();
};

class PulseEffectAction : public GDObj {
    static PulseEffectAction* createFromString(std::string);
    void getSaveString();
};

class RetryLevelLayer : public GDObj {
    static RetryLevelLayer* create();
};

class SetGroupIDLayer : public GDObj {
    void onNextGroupID1(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateGroupIDLabel();
    ~SetGroupIDLayer();
};

class SetIDLayer : public GDObj {
    static SetIDLayer* create(GameObject*);
};

class SetItemIDLayer : public GDObj {
    static SetItemIDLayer* create(EffectGameObject*, cocos2d::CCArray*);
};

class SetTargetIDLayer : public GDObj {
    static SetTargetIDLayer* create(EffectGameObject*, cocos2d::CCArray*, std::string);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SetupAnimationPopup : public GDObj {
    static SetupAnimationPopup* create(EffectGameObject*, cocos2d::CCArray*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SetupCollisionTriggerPopup : public GDObj {
    static SetupCollisionTriggerPopup* create(EffectGameObject*, cocos2d::CCArray*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SetupCountTriggerPopup : public GDObj {
    static SetupCountTriggerPopup* create(EffectGameObject*, cocos2d::CCArray*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SetupInstantCountPopup : public GDObj {
    static SetupInstantCountPopup* create(EffectGameObject*, cocos2d::CCArray*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SetupInteractObjectPopup : public GDObj {
    static SetupInteractObjectPopup* create(EffectGameObject*, cocos2d::CCArray*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SetupObjectTogglePopup : public GDObj {
    static SetupObjectTogglePopup* create(EffectGameObject*, cocos2d::CCArray*);
    bool init(EffectGameObject*, cocos2d::CCArray*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SetupOpacityPopup : public GDObj {
    static SetupOpacityPopup* create(EffectGameObject*, cocos2d::CCArray*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SetupPickupTriggerPopup : public GDObj {
    static SetupPickupTriggerPopup* create(EffectGameObject*, cocos2d::CCArray*);
    void onItemIDArrow(cocos2d::CCObject*);
    void onNextItemID(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateItemID();
};

class SetupPulsePopup : public GDObj {
    void colorValueChanged(cocos2d::_ccColor3B);
    static SetupPulsePopup* create(EffectGameObject*, cocos2d::CCArray*);
    bool init(EffectGameObject*, cocos2d::CCArray*);
    void onSelectPulseMode(cocos2d::CCObject*);
    void onSelectTargetMode(cocos2d::CCObject*);
    void onUpdateCustomColor(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateCopyColorTextInputLabel();
    void updateEditorLabel();
    void updateFadeOutLabel(bool);
    void updateTargetID();
    void updateTextInputLabel();
    ~SetupPulsePopup();
};

class SetupShakePopup : public GDObj {
    static SetupShakePopup* create(EffectGameObject*, cocos2d::CCArray*);
};

class SetupSpawnPopup : public GDObj {
    static SetupSpawnPopup* create(EffectGameObject*, cocos2d::CCArray*);
    void createToggleButton(std::string, cocos2d::SEL_CallFuncO, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SetupTouchTogglePopup : public GDObj {
    static SetupTouchTogglePopup* create(EffectGameObject*, cocos2d::CCArray*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SimplePlayer : public GDObj {
    static SimplePlayer* create(int);
    void setSecondColor(cocos2d::_ccColor3B const&);
    void updateColors();
    void updatePlayerFrame(int, IconType);
};

class Slider : public GDObj {
    static Slider* create(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, char const*, char const*, char const*, char const*, float);
    static Slider* create(cocos2d::CCNode*, cocos2d::SEL_CallFuncO, float);
    void getValue();
    void setBarVisibility(bool);
    void setValue(float);
};

class SliderThumb : public GDObj {
    void getValue();
};

class SpawnTriggerAction : public GDObj {
    static SpawnTriggerAction* createFromString(std::string);
};

class SpeedObject : public GDObj {
    static SpeedObject* create(GameObject*, int, float);
    bool init(GameObject*, int, float);
};

class TeleportPortalObject : public GDObj {
    static TeleportPortalObject* create(char const*);
    void getTeleportXOff(cocos2d::CCNode*);
};

class TextArea : public GDObj {
    static TextArea* create(std::string, char const*, float, float, cocos2d::CCPoint, float, bool);
};

class TextInputDelegate : public GDObj {
    bool allowTextInput(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
};

class ToggleTriggerAction : public GDObj {
    static ToggleTriggerAction* createFromString(std::string);
};

class TouchToggleAction : public GDObj {
    static TouchToggleAction* createFromString(std::string);
};

class UILayer : public GDObj {
    static UILayer* create();
    void disableMenu();
    void enableMenu();
    void pCommand(cocos2d::CCNode*);
    void toggleCheckpointsMenu(bool);
};

class UndoObject : public GDObj {
    static UndoObject* create(GameObject*, UndoCommand);
    static UndoObject* createWithArray(cocos2d::CCArray*, UndoCommand);
    ~UndoObject();
};

#endif
