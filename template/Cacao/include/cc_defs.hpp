// Copyright camila314 & alk1m123 2021
#pragma once 

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
enum BoomListType {};
enum TableViewCellEditingStyle {};

class FLAlertLayer;
class AchievementCell;
class AchievementsLayer;
class AchievementManager;
class AchievementNotifier;
class AnimatedGameObject;
class AppDelegate;
class SongInfoObject;
class ArtistCell;
class AudioEffectsLayer;
class CCIndexPath;
class TableViewCell;
class TableViewDelegate;
class TableViewDataSource;
class CCScrollLayerExt;
class CCScrollLayerExtDelegate;
class TableView;
class BoomListView;
class BoomScrollLayer;
class ButtonSprite;
class CCAnimatedSprite;
class CCBlockLayer;
class CCCircleWave;
class CCCircleWaveDelegate;
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
class ColorActionSprite;
class ColorChannelSprite;
class ColorPickerDelegate;
class ColorSelectLiveOverlay;
class CommentCell;
class ConfigureValuePopup;
class CountTriggerAction;
class CreateMenuItem;
class CreatorLayer;
class CurrencyRewardLayer;
class CustomSongCell;
class CustomSongLayer;
class CustomSongWidget;
class CustomListView;
class CustomizeObjectLayer;
class DelayedSpawnNode;
class DialogLayer;
class DialogObject;
class DrawGridLayer;
class EditButtonBar;
class EditorOptionsLayer;
class EditorPauseLayer;
class EditorUI;
class EndLevelLayer;
class FLAlertLayerProtocol;
class FMODAudioEngine;
class FollowRewardPage;
class GJAccountManager;
class GJBaseGameLayer;
class GJColorSetupLayer;
class GJComment;
class GJDropDownLayer;
class GJEffectManager;
class GJFollowCommandLayer;
class GJGameLevel;
class GJGroundLayer;
class GJLevelScoreCell;
class GJListLayer;
class GJUserMessage;
class GJMessageCell;
class GJMoreGamesLayer;
class GJMoveCommandLayer;
class GJPFollowCommandLayer;
class GJRequestCell;
class GJRobotSprite;
class GJRotateCommandLayer;
class GJScoreCell;
class GJSearchObject;
class GJSongBrowser;
class GJSpecialColorSelect;
class GJSpecialColorSelectDelegate;
class GJSpiderSprite;
class GJUserScore;
class GJUserCell;
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
class InfoAlertButton;
class InfoLayer;
class InheritanceNode;
class EffectGameObject;
class EndPortalObject;
class LabelGameObject;
class LevelBrowserLayer;
class LevelEditorLayer;
class LevelInfoLayer;
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
class SetIDPopup;
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
class GJCommentListLayer;
class TopArtistsLayer;
class TouchToggleAction;
class UILayer;
class UndoCommand;
class UndoObject;
class ColorSelectPopup;
class SetupPulsePopup;


class FLAlertLayer : public cocos2d::CCLayerColor, public GDObj {
public:
    virtual void onEnter();
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes);
    virtual void show();
    virtual bool init(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float);
    virtual ~FLAlertLayer();
    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float);
    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float);
    static FLAlertLayer* create(char const* title, const std::string &desc, char const* btn) {return FLAlertLayer::create(NULL, title, desc, btn, NULL, 300.0);}
    cocos2d::CCMenu* m_buttonMenu;
    int m_controlConnected;
    void* m_alertProtocol;
    cocos2d::CCNode* m_scene;
    bool m_reverseKeyBack;
    cocos2d::ccColor3B m_color;
    cocos2d::CCLayer* m_mainLayer;
    int m_ZOrder;
    bool m_noElasticity;
    cocos2d::ccColor3B m_color2;
    ButtonSprite* m_button1;
    ButtonSprite* m_button2;
    CCLayerColor* m_scrollingLayer;
    int m_joystickConnected;
    bool m_containsBorder;
    bool m_noAction;
};

class AchievementCell : public GDObj {
public:
    void loadFromDict(cocos2d::CCDictionary*);
};

class AchievementsLayer : public GDObj {
public:
    void customSetup();
    void loadPage(int);
};

class AchievementManager : public GDObj {
public:
    void getAllAchievements();
    void sharedState();
};

class AchievementNotifier : public cocos2d::CCNode, public GDObj {
public:
    void sharedState();
    void willSwitchToScene(cocos2d::CCScene*);
};

class AnimatedGameObject : public GDObj {
public:
    void playAnimation(int);
    void updateChildSpriteColor(cocos2d::_ccColor3B);
};

class AppDelegate : public GDObj {
public:
    void bgScale();
    virtual bool applicationDidFinishLaunching();
    virtual void applicationDidEnterBackground();
    virtual void applicationWillEnterForeground();
    virtual bool applicationWillBecomeActive();
    virtual bool applicationWillResignActive();
    virtual void trySaveGame();
    virtual void willSwitchToScene(cocos2d::CCScene*);
    static AppDelegate* get();
    CLASS_PARAM(cocos2d::CCScene*, runningScene, 0x28);
};

class SongInfoObject : public cocos2d::CCNode, public GDObj {
public:
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
};

class ArtistCell : public GDObj {
public:
    ArtistCell(char const*, float, float);
    void draw();
    bool init();
    void loadFromObject(SongInfoObject*);
    void onNewgrounds(cocos2d::CCObject*);
    void updateBGColor(int);
    char m_pad[0x1e0];
};

class AudioEffectsLayer : public GDObj {
public:
    void audioStep(float);
    static AudioEffectsLayer* create(std::string);
    void resetAudioVars();
};

class CCIndexPath : public GDObj {
public:
};

class TableViewCell : public cocos2d::CCLayer, public GDObj {
public:
    TableViewCell(char const*, float, float);
    char pad[0x1c0-0x170];
    float m_parentHeight;
    float m_height;
    cocos2d::CCLayerColor* m_backgroundLayer;
    cocos2d::CCLayer* m_mainLayer;
};

class TableViewDelegate : public GDObj {
public:
    virtual int numberOfRowsInSection(unsigned int, TableView*) {return 0;}
    virtual void numberOfSectionsInTableView(TableView*) {}
    virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView*, TableViewCellEditingStyle, CCIndexPath&) {}
    virtual void cellForRowAtIndexPath(CCIndexPath&, TableView*) {}
    void TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*);
    void didEndTweenToIndexPath(CCIndexPath&, TableView*);
    void willTweenToIndexPath(CCIndexPath&, TableViewCell*, TableView*);
};

class TableViewDataSource : public GDObj {
public:
    virtual void willTweenToIndexPath(CCIndexPath&, TableViewCell*, TableView*) {}
    virtual void didEndTweenToIndexPath(CCIndexPath&, TableView*) {}
    virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) {}
    virtual void TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) {}
    virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) {}
    virtual void cellHeightForRowAtIndexPath(CCIndexPath&, TableView*) {}
    virtual void didSelectRowAtIndexPath(CCIndexPath&, TableView*) {}
};

class CCScrollLayerExt : public GDObj {
public:
    void moveToTop();
    void moveToTopWithOffset(float);
};

class CCScrollLayerExtDelegate : public GDObj {
public:
};

class TableView : public CCScrollLayerExt, public CCScrollLayerExtDelegate{
public:
    static TableView* create(TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect);
    void reloadData();
    CLASS_PARAM(float, unknown, 0x1c8);
};

class BoomListView : public cocos2d::CCLayer, public TableViewDataSource, public TableViewDelegate{
public:
    static BoomListView* create(cocos2d::CCArray*, float, float, int, BoomListType);
    bool init(cocos2d::CCArray*, float, float, int, BoomListType);
    void draw();
    virtual void setupList();
    virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*);
    virtual void cellHeightForRowAtIndexPath(CCIndexPath&, TableView*);
    virtual void didSelectRowAtIndexPath(CCIndexPath&, TableView*);
    virtual int numberOfRowsInSection(unsigned int, TableView*);
    virtual void numberOfSectionsInTableView(TableView*);
    virtual void cellForRowAtIndexPath(CCIndexPath&, TableView*);
    virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView*, TableViewCellEditingStyle, CCIndexPath&);
    virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*);
    virtual TableViewCell* getListCell(char const*);
    virtual void loadCell(TableViewCell*, int);
    TableView* m_tableView;
    cocos2d::CCArray* m_content;
    BoomListType m_type;
    float m_width;
    float m_height;
    float m_cellHeight;
    int m_page;
};

class BoomScrollLayer : public GDObj {
public:
    BoomScrollLayer();
};

class ButtonSprite : public cocos2d::CCSprite, public GDObj {
public:
    static ButtonSprite* create(char const*);
    static ButtonSprite* create(char const*, int, int, float, bool);
    void updateBGImage(char const*);
    static ButtonSprite* create(char const*, float);
    static ButtonSprite* create(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool);
};

class CCAnimatedSprite : public cocos2d::CCSprite, public GDObj {
public:
    void runAnimation(std::string);
    void tweenToAnimation(std::string, float);
};

class CCBlockLayer : public GDObj {
public:
    void disableUI();
    void draw();
    void enableUI();
    void enterAnimFinished();
    void enterLayer();
    void exitLayer();
    void hideLayer(bool);
    bool init();
    void layerHidden();
    void layerVisible();
    void registerWithTouchDispatcher();
    void showLayer(bool);
};

class CCCircleWave : public cocos2d::CCNode, public GDObj {
public:
    static CCCircleWave* create(float, float, float, bool);
    static CCCircleWave* create(float, float, float, bool, bool);
    bool init(float, float, float, bool, bool);
    void followObject(cocos2d::CCNode*, bool);
    void updatePosition(float);
    CLASS_PARAM(cocos2d::_ccColor3B, color, 0x134);
    CLASS_PARAM(CCCircleWaveDelegate*, delegate, 0x150);
};

class CCCircleWaveDelegate : public GDObj {
public:
};

class CCLightFlash : public GDObj {
public:
    static CCLightFlash* create();
    void playEffect(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float);
};

class CCMenuItemToggler : public cocos2d::CCMenuItem, public GDObj {
public:
    static CCMenuItemToggler* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler);
    void setSizeMult(float);
    void toggle(bool);
    CCMenuItemSpriteExtra* m_onButton;
    CCMenuItemSpriteExtra* m_offButton;
    bool m_toggled;
    bool m_notClickable;
};

class CCMoveCNode : public GDObj {
public:
    static CCMoveCNode* create();
    bool init();
    ~CCMoveCNode();
};

class CCNodeContainer : public GDObj {
public:
    static CCNodeContainer* create();
    bool init();
    void visit();
};

class CCSpritePlus : public cocos2d::CCSprite, public GDObj {
public:
    bool initWithSpriteFrameName(char const*);
    inline CCSpritePlus* getFollowingSprite() {return m_followingSprite;}
    inline void setFollowingSprite(CCSpritePlus* setter) {m_followingSprite = setter;}
    cocos2d::CCArray* m_followers;
    CCSpritePlus* m_followingSprite;
    bool m_hasFollower;
    bool m_propagateScaleChanges;
    bool m_propagateFlipChanges;
};

class CCTextInputNode : public cocos2d::CCLayer, public cocos2d::CCIMEDelegate, public cocos2d::CCTextFieldDelegate, public GDObj {
public:
    static CCTextInputNode* create(float, float, char const*, char const*, int, char const*);
    std::string getString();
    void refreshLabel();
    void setAllowedChars(std::string);
    void setLabelNormalColor(cocos2d::_ccColor3B);
    void setLabelPlaceholderColor(cocos2d::_ccColor3B);
    void setLabelPlaceholderScale(float);
    void setMaxLabelScale(float);
    void setMaxLabelWidth(float);
    void setString(std::string);
    void updateLabel(std::string);
    void forceOffset();
    virtual void registerWithTouchDispatcher();
    bool init(float, float, char const*, char const*, int, char const*);
    virtual void visit();
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    virtual void textChanged();
    virtual void onClickTrackNode(bool);
    virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&);
    virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&);
    virtual bool onTextFieldInsertText(cocos2d::CCTextFieldTTF*, char const*, int);
    virtual bool onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF*);
    virtual bool onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF*);
    void* m_unknown0;
    std::string m_caption;
    int m_unknown1;
    bool m_selected;
    std::string m_allowedChars;
    float m_maxLabelWidth;
    float m_maxLabelScale;
    float m_placeholderScale;
    cocos2d::ccColor3B m_placeholderColor;
    cocos2d::ccColor3B m_textColor;
    cocos2d::CCLabelBMFont* m_cursor;
    cocos2d::CCTextFieldTTF* m_textField;
    TextInputDelegate* m_delegate;
    int m_maxLabelLength;
    cocos2d::CCLabelBMFont* m_placeholderLabel;
    bool m_unknown2;
    bool m_unknown3;
    bool m_forceOffset;
};

class CheckpointObject : public GDObj {
public:
    static CheckpointObject* create();
    void getObject();
};

class CollisionBlockPopup : public GDObj {
public:
    static CollisionBlockPopup* create(EffectGameObject*, cocos2d::CCArray*);
    void onNextItemID(cocos2d::CCObject*);
};

class CollisionTriggerAction : public GDObj {
public:
    static CollisionTriggerAction* createFromString(std::string);
};

class ColorAction : public cocos2d::CCNode, public GDObj {
public:
    void getSaveString();
    void setupFromDict(cocos2d::CCDictionary*);
    void setupFromString(std::string);
    CLASS_PARAM(cocos2d::_ccColor3B, color, 0x12c);
};

class ColorActionSprite : public cocos2d::CCNode, public GDObj {
public:
    float m_opacity;
    cocos2d::_ccColor3B m_f0124;
    cocos2d::_ccColor3B m_activeColor;
};

class ColorChannelSprite : public GDObj {
public:
    void updateBlending(bool);
    void updateCopyLabel(int, bool);
    void updateOpacity(float);
    void updateValues(ColorAction*);
};

class ColorPickerDelegate : public GDObj {
public:
};

class ColorSelectLiveOverlay : public GDObj {
public:
};

class CommentCell : public GDObj {
public:
    void loadFromComment(GJComment*);
};

class ConfigureValuePopup : public GDObj {
public:
};

class CountTriggerAction : public cocos2d::CCNode, public GDObj {
public:
    static CountTriggerAction* createFromString(std::string);
    int m_previousCount;
    int m_targetCount;
    int m_targetID;
    bool m_activateGroup;
    CLASS_PARAM(bool, multiActivate, 0x138);
};

class CreateMenuItem : public CCMenuItemSpriteExtra{
public:
};

class CreatorLayer : public cocos2d::CCLayer, public GDObj {
public:
    void onMyLevels(cocos2d::CCObject*);
    void onSavedLevels(cocos2d::CCObject*);
};

class CurrencyRewardLayer : public GDObj {
public:
};

class CustomSongCell : public GDObj {
public:
    void loadFromObject(SongInfoObject*);
};

class CustomSongLayer : public GDObj {
public:
    bool init(LevelSettingsObject*);
    void onArtists(cocos2d::CCObject*);
    void onSongBrowser(cocos2d::CCObject*);
};

class CustomSongWidget : public GDObj {
public:
    static CustomSongWidget* create(SongInfoObject*, LevelSettingsObject*, bool, bool, bool, bool, bool);
    void getSongInfoIfUnloaded();
};

class CustomListView : public cocos2d::CCLayerColor, public GDObj {
public:
    static CustomListView* create(cocos2d::CCArray*, float, float, int, BoomListType);
    void getListCell(char const*);
    void loadCell(TableViewCell*, int);
    void setupList();
};

class CustomizeObjectLayer : public GDObj {
public:
    void colorSelectClosed(cocos2d::CCNode*);
    static CustomizeObjectLayer* create(GameObject*, cocos2d::CCArray*);
    bool init(GameObject*, cocos2d::CCArray*);
    void textChanged(CCTextInputNode*);
    void textInputClosed(CCTextInputNode*);
};

class DelayedSpawnNode : public GDObj {
public:
    static DelayedSpawnNode* create();
};

class DialogLayer : public GDObj {
public:
    static DialogLayer* create(DialogObject*, int);
};

class DialogObject : public GDObj {
public:
    static DialogObject* create(std::string, std::string, int, float, bool, cocos2d::_ccColor3B);
};

class DrawGridLayer : public GDObj {
public:
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

class EditButtonBar : public cocos2d::CCNode, public GDObj {
public:
    void loadFromItems(cocos2d::CCArray*, int, int, bool);
    CLASS_PARAM(cocos2d::CCArray*, objectSlots, 0x130);
};

class EditorOptionsLayer : public GDObj {
public:
    void onButtonsPerRow(cocos2d::CCObject*);
};

class EditorPauseLayer : public FLAlertLayer{
public:
    void customSetup();
    bool init(LevelEditorLayer*);
    static EditorPauseLayer* create(LevelEditorLayer*);
    void saveLevel();
};

class EditorUI : public cocos2d::CCLayer, public GDObj {
public:
    void constrainGameLayerPosition();
    void create(LevelEditorLayer*);
    void deselectAll();
    void onDeselectAll(cocos2d::CCObject*);
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
    void playerTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
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

class EndLevelLayer : public GDObj {
public:
    static EndLevelLayer* create();
};

class FLAlertLayerProtocol : public GDObj {
public:
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) {};
};

class FMODAudioEngine : public cocos2d::CCNode, public GDObj {
public:
    CLASS_PARAM(float, backgroundVolume, 0x130);
    CLASS_PARAM(float, sfxVolume, 0x134);
};

class FollowRewardPage : public GDObj {
public:
    static FollowRewardPage* create();
};

class GJAccountManager : public GDObj {
public:
    static GJAccountManager* sharedState();
    CLASS_PARAM(char const*, password, 0x128);
    CLASS_PARAM(char const*, username, 0x130);
};

class GJBaseGameLayer : public cocos2d::CCLayer, public GDObj {
public:
    virtual void objectsCollided(int, int);
    virtual void createMoveCommand(cocos2d::CCPoint, int, float, int, float, bool, bool, int);
    virtual void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*);
    virtual void flipGravity(PlayerObject*, bool, bool);
    virtual void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*);
    virtual void toggleGroupTriggered(int, bool);
    virtual void spawnGroup(int);
    virtual void addToSection(GameObject*);
    virtual void addToGroup(GameObject*, int, bool);
    virtual void removeFromGroup(GameObject*, int);
    virtual bool init();
    void addObjectCounter(LabelGameObject*, int);
    void addToGroups(GameObject*, bool);
    void atlasValue(int);
    void bumpPlayer(PlayerObject*, GameObject*);
    void calculateOpacityValues(EffectGameObject*, EffectGameObject*, float, GJEffectManager*);
    void checkSpawnObjects();
    void collectItem(int, int);
    void collectedObject(EffectGameObject*);
    void createTextLayers();
    void damagingObjectsInRect(cocos2d::CCRect);
    void enableHighCapacityMode();
    void getCapacityString();
    void getGroundHeightForMode(int);
    void getGroup(int);
    void getMoveDeltaForObjects(int, int);
    void getOptimizedGroup(int);
    void getStaticGroup(int);
    void isGroupDisabledForObject(GameObject*);
    void isGroupDisabledForObjectFull(GameObject*, cocos2d::CCArray*);
    void loadUpToPosition(float);
    void objectIntersectsCircle(GameObject*, GameObject*);
    void objectTriggered(EffectGameObject*);
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
    void removeFromGroups(GameObject*);
    void removeObjectFromSection(GameObject*);
    void reorderObjectSection(GameObject*);
    void resetGroupCounters(bool);
    void resetMoveOptimizedValue();
    void sectionForPos(float);
    void setupLayers();
    void shouldExitHackedLevel();
    void spawnGroupTriggered(int, float, int);
    void staticObjectsInRect(cocos2d::CCRect);
    void testInstantCountTrigger(int, int, int, bool, int);
    void toggleGroup(int, bool);
    void togglePlayerVisibility(bool);
    void triggerMoveCommand(EffectGameObject*);
    void updateCollisionBlocks();
    void updateCounters(int, int);
    void updateDisabledObjectsLastPos(cocos2d::CCArray*);
    void updateLayerCapacity(std::string);
    void updateLegacyLayerCapacity(int, int, int, int);
    void updateOBB2(cocos2d::CCRect);
    void updateQueuedLabels();
    ~GJBaseGameLayer();
    CLASS_PARAM(GJEffectManager*, effectManager, 0x180);
    CLASS_PARAM(cocos2d::CCLayer*, objectLayer, 0x188);
    CLASS_PARAM(cocos2d::CCArray*, objects, 0x3a0);
    CLASS_PARAM(PlayerObject*, player1, 0x380);
    CLASS_PARAM(PlayerObject*, player2, 0x388);
    CLASS_PARAM(LevelSettingsObject*, levelSettings, 0x390);
    CLASS_PARAM(cocos2d::CCDictionary*, unknownDict, 0x398);
};

class GJColorSetupLayer : public GDObj {
public:
    void updateSpriteColors();
};

class GJComment : public GDObj {
public:
};

class GJDropDownLayer : public cocos2d::CCLayerColor, public GDObj {
public:
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
    virtual void draw();
    virtual bool init(char const*, float);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    static GJDropDownLayer* create(char const*);
    cocos2d::CCPoint m_endPosition;
    cocos2d::CCPoint m_startPosition;
    cocos2d::CCMenu* m_buttonMenu;
    GJListLayer* m_listLayer;
    bool m_controllerEnabled;
    cocos2d::CCLayer* m_mainLayer;
    bool m_hidden;
    void* m_unknown;
};

class GJEffectManager : public cocos2d::CCNode, public GDObj {
public:
    virtual bool init();
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
    cocos2d::_ccColor3B colorForGroupID(int, cocos2d::_ccColor3B const&, bool);
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
    OpacityEffectAction* runOpacityActionOnGroup(int, float, float, int);
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
};

class GJFollowCommandLayer : public GDObj {
public:
    static GJFollowCommandLayer* create(EffectGameObject*, cocos2d::CCArray*);
    void onUpdateGroupID(cocos2d::CCObject*);
    void onUpdateGroupID2(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetGroupID();
    void updateTargetGroupID2();
};

class GJGameLevel : public cocos2d::CCNode, public GDObj {
public:
    static GJGameLevel* create();
    void getAudioFileName();
    void getCoinKey(int);
    void getLengthKey(int);
    void getNormalPercent();
    void levelWasAltered();
    void savePercentage(int, bool, int, int, bool);
    CLASS_PARAM(int, levelId, 0x130);
    CLASS_PARAM(std::string, name, 0x138);
    CLASS_PARAM(std::string, levelString, 0x148);
    CLASS_PARAM(std::string, author, 0x150);
    CLASS_PARAM(int, audioTrack, 0x18c);
    CLASS_PARAM(int, songID, 0x190);
    STRUCT_PARAM(LevelDifficulty, difficulty, 0x1ac);
    CLASS_PARAM(bool, lowDetail, 0x1c5);
    CLASS_PARAM(int, bestNormal, 0x214);
    CLASS_PARAM(int, bestPractice, 0x238);
    CLASS_PARAM(int, score, 0x248);
    CLASS_PARAM(int, epic, 0x24c);
    CLASS_PARAM(int, demon, 0x26c);
    CLASS_PARAM(int, stars, 0x27c);
    CLASS_PARAM(OBB2D*, hitbox, 0x2b0);
    CLASS_PARAM(bool, official, 0x324);
};

class GJGroundLayer : public GDObj {
public:
    static GJGroundLayer* create(int, int);
    void createLine(int);
    void deactivateGround();
    void getGroundY();
    bool init(int, int);
    void loadGroundSprites(int, bool);
    void updateGround01Color(cocos2d::_ccColor3B);
    void updateGround02Color(cocos2d::_ccColor3B);
    void updateGroundPos(cocos2d::CCPoint);
    void updateGroundWidth();
};

class GJLevelScoreCell : public GDObj {
public:
    void loadFromScore(GJUserScore*);
};

class GJListLayer : public cocos2d::CCLayerColor, public GDObj {
public:
};

class GJUserMessage : public GDObj {
public:
};

class GJMessageCell : public GDObj {
public:
    void loadFromMessage(GJUserMessage*);
};

class GJMoreGamesLayer : public GDObj {
public:
    static GJMoreGamesLayer* create();
    void customSetup();
    void getMoreGamesList();
};

class GJMoveCommandLayer : public GDObj {
public:
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
public:
    static GJPFollowCommandLayer* create(EffectGameObject*, cocos2d::CCArray*);
    void textChanged(CCTextInputNode*);
    void updateTargetGroupID();
};

class GJRequestCell : public GDObj {
public:
    void loadFromScore(GJUserScore*);
};

class GJRobotSprite : public GDObj {
public:
    static GJRobotSprite* create();
    void updateColor02(cocos2d::_ccColor3B);
    void updateFrame(int);
};

class GJRotateCommandLayer : public GDObj {
public:
    static GJRotateCommandLayer* create(EffectGameObject*, cocos2d::CCArray*);
    void onUpdateGroupID(cocos2d::CCObject*);
    void onUpdateGroupID2(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetGroupID();
    void updateTargetGroupID2();
};

class GJScoreCell : public GDObj {
public:
    void loadFromScore(GJUserScore*);
};

class GJSearchObject : public cocos2d::CCNode, public GDObj {
public:
    static GJSearchObject* create(SearchType);
    static GJSearchObject* create(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, int, int);
    void getPageObject(int);
    SearchType m_searchType;
};

class GJSongBrowser : public GDObj {
public:
    static GJSongBrowser* create(LevelSettingsObject*);
    bool init(LevelSettingsObject*);
    void loadPage(int);
};

class GJSpecialColorSelect : public GDObj {
public:
    void textForColorIdx(int);
};

class GJSpecialColorSelectDelegate : public GDObj {
public:
};

class GJSpiderSprite : public GDObj {
public:
    static GJSpiderSprite* create();
};

class GJUserScore : public GDObj {
public:
};

class GJUserCell : public GDObj {
public:
    void loadFromScore(GJUserScore*);
};

class GManager : public cocos2d::CCNode, public GDObj {
public:
    virtual void setup() {}
    void save();
    void saveData(DS_Dictionary*, std::string);
    void saveGMTo(std::string);
    std::string m_sFileName;
    bool m_bSetup;
    bool m_bSaved;
};

class GameLevelManager : public GDObj {
public:
    GJGameLevel* createNewLevel();
    static GameLevelManager* sharedState();
    void getPageInfo(char const*);
    cocos2d::CCArray* getStoredOnlineLevels(char const*);
    void getTopArtists(int, int);
    void getTopArtistsKey(int);
    void makeTimeStamp(char const*);
    CLASS_PARAM(cocos2d::CCDictionary*, timerDict, 0x1e8);
};

class GameManager : public cocos2d::CCNode, public GDObj {
public:
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
    void getGTexture(int);
    bool init();
    void reportAchievementWithID(char const*, int, bool);
    void resolutionForKey(int);
    void update(float);
    CLASS_PARAM(PlayLayer*, playLayer, 0x180);
    CLASS_PARAM(LevelEditorLayer*, editorLayer, 0x188);
    CLASS_PARAM(int, scene, 0x1f4);
    CLASS_PARAM(bool, ldm, 0x2a1);
};

class GameObject : public CCSpritePlus{
public:
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
    int getGroupID(int);
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
    CLASS_PARAM(int, type, 0x370);
    CLASS_PARAM(int, id, 0x3c4);
    CLASS_PARAM(OBB2D*, hitbox, 0x2b0);
    CLASS_PARAM(bool, inEditLayer, 0x279);
    CLASS_PARAM(cocos2d::CCPoint, startPos, 0x37c);
    CLASS_PARAM(bool, touchTriggered, 0x378);
    CLASS_PARAM(bool, spawnTriggered, 0x379);
    CLASS_PARAM(int, uuid, 0x36c);
    CLASS_PARAM(int, colorID, 0x3bc);
    CLASS_PARAM(int, zOrder, 0x42c);
    CLASS_PARAM(int, unknownType, 0x3d4);
    CLASS_PARAM(int, coinID, 0x3e8);
    CLASS_PARAM(float, scale, 0x3c0);
    CLASS_PARAM(float, multiScaleMultiplier, 0x44c);
};

class GameObjectCopy : public GDObj {
public:
    static GameObjectCopy* create(GameObject*);
    void resetObject();
    ~GameObjectCopy();
};

class GameSoundManager : public GDObj {
public:
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
public:
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

class GameToolbox : public cocos2d::CCNode, public GDObj {
public:
    static void createToggleButton(std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*);
    static void getRelativeOffset(GameObject*, cocos2d::CCPoint);
    static void multipliedColorValue(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float);
    static void stringSetupToDict(std::string, char const*);
    static std::map<std::string, std::string> stringSetupToMap(std::string, char const*);
    static void transformColor(cocos2d::_ccColor3B const&, cocos2d::_ccHSVValue);
    static void transformColor(cocos2d::_ccColor3B const&, float, float, float);
};

class GravityEffectSprite : public GDObj {
public:
    static GravityEffectSprite* create();
    bool init();
    void updateSpritesColor(cocos2d::_ccColor3B);
};

class GroupCommandObject : public GDObj {
public:
    static GroupCommandObject* create();
    static GroupCommandObject* createFromString(std::string);
    void easeToText(int);
    void getEasedAction(cocos2d::CCActionInterval*, int, float);
    void runMoveCommand(cocos2d::CCPoint, float, int, float, bool, bool);
    void runRotateCommand(float, float, int, float, bool);
};

class HardStreak : public cocos2d::CCDrawNode, public GDObj {
public:
    void addPoint(cocos2d::CCPoint);
    void reset();
    void resumeStroke();
    void stopStroke();
    cocos2d::CCArray* m_pointsArr;
    cocos2d::CCPoint m_currentPoint;
    float m_waveSize;
    float m_pulseSize;
    bool m_isSolid;
};

class InfoAlertButton : public GDObj {
public:
    static InfoAlertButton* create(std::string, std::string, float);
};

class InfoLayer : public cocos2d::CCLayer, public GDObj {
public:
    void loadPage(int, bool);
    void onRefreshComments(cocos2d::CCObject*);
};

class InheritanceNode : public cocos2d::CCObject, public GDObj {
public:
};

class EffectGameObject : public GameObject{
public:
    static EffectGameObject* create(char const*);
    void getTargetColorIndex();
    void triggerObject(GJBaseGameLayer*);
    CLASS_PARAM(int, targetGroup, 0x4F8);
    CLASS_PARAM(bool, activateGroup, 0x578);
    CLASS_PARAM(bool, touchHoldMode, 0x579);
    CLASS_PARAM(int, animationID, 0x584);
    CLASS_PARAM(float, spawnDelay, 0x588);
    CLASS_PARAM(bool, multiTrigger, 0x594);
    CLASS_PARAM(int, targetCount, 0x598);
    CLASS_PARAM(int, compareType, 0x5A0);
    CLASS_PARAM(int, itemBlockBID, 0x5A8);
    CLASS_PARAM(int, itemBlockID, 0x5B0);
};

class EndPortalObject : public GameObject{
public:
    static EndPortalObject* create();
    void updateColors(cocos2d::_ccColor3B);
};

class LabelGameObject : public GameObject{
public:
    bool init();
    void setObjectColor(cocos2d::_ccColor3B const&);
};

class LevelBrowserLayer : public cocos2d::CCLayer, public GDObj {
public:
    void loadPage(GJSearchObject*);
    static cocos2d::CCScene* scene(GJSearchObject*);
    void setIDPopupClosed(SetIDPopup*, int);
};

class LevelEditorLayer : public GJBaseGameLayer{
public:
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
    CLASS_PARAM(cocos2d::CCArray*, objects, 0x3a0);
    CLASS_PARAM(EditorUI*, editorUI, 0x5d8);
};

class LevelInfoLayer : public cocos2d::CCLayer, public GDObj {
public:
};

class LevelSettingsLayer : public GDObj {
public:
    static LevelSettingsLayer* create(LevelSettingsObject*, LevelEditorLayer*);
};

class LevelSettingsObject : public cocos2d::CCNode, public GDObj {
public:
    static LevelSettingsObject* create();
    bool init();
    void objectFromDict(cocos2d::CCDictionary*);
    static LevelSettingsObject* objectFromString(std::string);
    void setupColorsFromLegacyMode(cocos2d::CCDictionary*);
    CLASS_PARAM(GJGameLevel*, level, 0x150);
    CLASS_PARAM(GJEffectManager*, effectManager, 0x120);
    CLASS_PARAM(int, fontType, 0x144);
    CLASS_PARAM(bool, is2Player, 0x132);
};

class LevelTools : public GDObj {
public:
    void getAudioString(int);
    void verifyLevelIntegrity(std::string, int);
    void xPosForTime(float, cocos2d::CCArray*, int);
};

class LoadingLayer : public GDObj {
public:
    void loadAssets();
};

class LocalLevelManager : public GDObj {
public:
    static LocalLevelManager* sharedState();
};

class MenuGameLayer : public GDObj {
public:
    void resetPlayer();
    void update(float);
};

class MenuLayer : public cocos2d::CCLayer, public FLAlertLayerProtocol{
public:
    virtual void keyBackClicked();
    void onMoreGames(cocos2d::CCObject*);
    void onQuit(cocos2d::CCObject*);
};

class MoreVideoOptionsLayer : public FLAlertLayer{
public:
    static MoreVideoOptionsLayer* create();
    bool init();
};

class MusicDownloadManager : public GDObj {
public:
    void incrementPriorityForSong(int);
    static MusicDownloadManager* sharedState();
};

class OBB2D : public cocos2d::CCNode, public GDObj {
public:
    void calculateWithCenter(cocos2d::CCPoint, float, float, float);
    static OBB2D* create(cocos2d::CCPoint, float, float, float);
    void getBoundingRect();
    void overlaps(OBB2D*);
    void overlaps1Way(OBB2D*);
};

class ObjectToolbox : public GDObj {
public:
    bool init();
    char const* intKeyToFrame(int);
    static ObjectToolbox* sharedState();
    CLASS_PARAM(cocos2d::CCDictionary*, strKeyObjects, 0x120);
    CLASS_PARAM(cocos2d::CCDictionary*, intKeyObjects, 0x128);
};

class OpacityEffectAction : public cocos2d::CCNode, public GDObj {
public:
    static OpacityEffectAction* create(float, float, float, int);
    static OpacityEffectAction* createFromString(std::string);
    bool init(float, float, float, int);
    void step(float);
    float m_time;
    float m_beginOpacity;
    float m_endOpacity;
    bool m_finished;
    float m_elapsed;
    int m_group;
    float m_opacity;
    int m_uuid;
    float m_delta;
};

class PauseLayer : public FLAlertLayer{
public:
    static PauseLayer* create(bool);
    void onEdit(cocos2d::CCObject*);
};

class PlatformToolbox : public GDObj {
public:
    void hideCursor();
    void showCursor();
};

class PlayLayer : public GJBaseGameLayer, public CCCircleWaveDelegate{
public:
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
    CLASS_PARAM(bool, gameStarted, 0x4dc);
    CLASS_PARAM(EndPortalObject*, endPortal, 0x530);
    CLASS_PARAM(float, length, 0x5f8);
    CLASS_PARAM(float, trueLength, 0x5fc);
    CLASS_PARAM(GJGameLevel*, level, 0x728);
    CLASS_PARAM(int, attempt, 0x754);
    CLASS_PARAM(bool, testMode, 0x738);
    CLASS_PARAM(bool, practiceMode, 0x739);
    CLASS_PARAM(float, time, 0x760);
    STRUCT_PARAM(GameModes, gameModes, 0x76f);
};

class PlayerCheckpoint : public GDObj {
public:
    static PlayerCheckpoint* create();
};

class PlayerObject : public GameObject{
public:
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
    CLASS_PARAM(HardStreak*, waveStreak, 0x600);
    CLASS_PARAM(double, speed, 0x608);
    CLASS_PARAM(double, gravity, 0x618);
    CLASS_PARAM(bool, inPlayLayer, 0x62c);
    CLASS_PARAM(GJRobotSprite*, robotSprite, 0x6a8);
    CLASS_PARAM(GJSpiderSprite*, spiderSprite, 0x6b0);
    CLASS_PARAM(bool, isHolding, 0x745);
    CLASS_PARAM(bool, hasJustHeld, 0x746);
    CLASS_PARAM(double, yAccel, 0x760);
    CLASS_PARAM(bool, isShip, 0x770);
    CLASS_PARAM(bool, isBird, 0x771);
    CLASS_PARAM(bool, isBall, 0x772);
    CLASS_PARAM(bool, isDart, 0x773);
    CLASS_PARAM(bool, isRobot, 0x774);
    CLASS_PARAM(bool, isSpider, 0x775);
    CLASS_PARAM(bool, upsideDown, 0x776);
    CLASS_PARAM(bool, dead, 0x777);
    CLASS_PARAM(bool, onGround, 0x778);
    CLASS_PARAM(float, vehicleSize, 0x77c);
    CLASS_PARAM(cocos2d::CCPoint, lastPortalLocation, 0x78c);
    CLASS_PARAM(bool, isSliding, 0x7a0);
    CLASS_PARAM(bool, isRising, 0x7a1);
    CLASS_PARAM(cocos2d::CCPoint, lastHitGround, 0x7a4);
    CLASS_PARAM(GameObject*, lastPortal, 0x7b8);
    CLASS_PARAM(cocos2d::_ccColor3B, pCol1, 0x7c2);
    CLASS_PARAM(cocos2d::_ccColor3B, pCol2, 0x7c5);
    CLASS_PARAM(float, xPos, 0x7c8);
    CLASS_PARAM(float, yPos, 0x7cc);
};

class PulseEffectAction : public cocos2d::CCNode, public GDObj {
public:
    static PulseEffectAction* createFromString(std::string);
    void getSaveString();
    CLASS_PARAM(int, group, 0x130);
};

class RetryLevelLayer : public GDObj {
public:
    static RetryLevelLayer* create();
};

class SetGroupIDLayer : public GDObj {
public:
    void onNextGroupID1(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateGroupIDLabel();
    ~SetGroupIDLayer();
};

class SetIDLayer : public GDObj {
public:
    static SetIDLayer* create(GameObject*);
};

class SetIDPopup : public GDObj {
public:
};

class SetItemIDLayer : public GDObj {
public:
    static SetItemIDLayer* create(EffectGameObject*, cocos2d::CCArray*);
};

class SetTargetIDLayer : public GDObj {
public:
    static SetTargetIDLayer* create(EffectGameObject*, cocos2d::CCArray*, std::string);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SetupAnimationPopup : public FLAlertLayer{
public:
    static SetupAnimationPopup* create(EffectGameObject*, cocos2d::CCArray*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SetupCollisionTriggerPopup : public FLAlertLayer{
public:
    static SetupCollisionTriggerPopup* create(EffectGameObject*, cocos2d::CCArray*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SetupCountTriggerPopup : public FLAlertLayer{
public:
    static SetupCountTriggerPopup* create(EffectGameObject*, cocos2d::CCArray*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SetupInstantCountPopup : public FLAlertLayer{
public:
    static SetupInstantCountPopup* create(EffectGameObject*, cocos2d::CCArray*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SetupInteractObjectPopup : public FLAlertLayer{
public:
    static SetupInteractObjectPopup* create(EffectGameObject*, cocos2d::CCArray*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SetupObjectTogglePopup : public FLAlertLayer{
public:
    static SetupObjectTogglePopup* create(EffectGameObject*, cocos2d::CCArray*);
    bool init(EffectGameObject*, cocos2d::CCArray*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SetupOpacityPopup : public FLAlertLayer{
public:
    static SetupOpacityPopup* create(EffectGameObject*, cocos2d::CCArray*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SetupPickupTriggerPopup : public FLAlertLayer{
public:
    static SetupPickupTriggerPopup* create(EffectGameObject*, cocos2d::CCArray*);
    void onItemIDArrow(cocos2d::CCObject*);
    void onNextItemID(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateItemID();
};

class SetupShakePopup : public FLAlertLayer{
public:
    static SetupShakePopup* create(EffectGameObject*, cocos2d::CCArray*);
};

class SetupSpawnPopup : public FLAlertLayer{
public:
    static SetupSpawnPopup* create(EffectGameObject*, cocos2d::CCArray*);
    void createToggleButton(std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
    CLASS_PARAM(EffectGameObject*, object, 0x258);
    CLASS_PARAM(CCTextInputNode*, numInput, 0x290);
};

class SetupTouchTogglePopup : public FLAlertLayer{
public:
    static SetupTouchTogglePopup* create(EffectGameObject*, cocos2d::CCArray*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateTargetID();
};

class SimplePlayer : public GDObj {
public:
    static SimplePlayer* create(int);
    void setSecondColor(cocos2d::_ccColor3B const&);
    void updateColors();
    void updatePlayerFrame(int, IconType);
};

class Slider : public cocos2d::CCLayer, public GDObj {
public:
    static Slider* create(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float);
    static Slider* create(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, float);
    void getValue();
    void setBarVisibility(bool);
    void setValue(float);
};

class SliderThumb : public GDObj {
public:
    void getValue();
};

class SpawnTriggerAction : public cocos2d::CCNode, public GDObj {
public:
    static SpawnTriggerAction* createFromString(std::string);
    bool m_timerEnded;
    float m_delay;
    float m_timer;
    int m_group;
    int m_uuid;
};

class SpeedObject : public GDObj {
public:
    static SpeedObject* create(GameObject*, int, float);
    bool init(GameObject*, int, float);
};

class TeleportPortalObject : public GDObj {
public:
    static TeleportPortalObject* create(char const*);
    void getTeleportXOff(cocos2d::CCNode*);
};

class TextArea : public ButtonSprite{
public:
    static TextArea* create(std::string, char const*, float, float, cocos2d::CCPoint, float, bool);
};

class TextInputDelegate : public GDObj {
public:
    virtual void textChanged(CCTextInputNode*) {};
    virtual void textInputOpened(CCTextInputNode*) {};
    virtual void textInputClosed(CCTextInputNode*) {};
    virtual void textInputShouldOffset(CCTextInputNode*, float) {};
    virtual void textInputReturn(CCTextInputNode*) {};
    virtual bool allowTextInput(CCTextInputNode*) {return true;};
};

class ToggleTriggerAction : public GDObj {
public:
    static ToggleTriggerAction* createFromString(std::string);
};

class GJCommentListLayer : public cocos2d::CCLayerColor, public GDObj {
public:
    static GJCommentListLayer* create(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool);
};

class TopArtistsLayer : public FLAlertLayer{
public:
    static TopArtistsLayer* create();
    void setupLeaderboard(cocos2d::CCArray*);
    virtual bool init();
    void loadPage(int);
    void setupPageInfo(std::string, char const*);
    CLASS_PARAM(cocos2d::CCNode*, unknown, 0x220);
    CLASS_PARAM(GJCommentListLayer*, commentLayer, 0x260);
};

class TouchToggleAction : public GDObj {
public:
    static TouchToggleAction* createFromString(std::string);
};

class UILayer : public GDObj {
public:
    static UILayer* create();
    void disableMenu();
    void enableMenu();
    void pCommand(cocos2d::CCNode*);
    void toggleCheckpointsMenu(bool);
};

class UndoCommand : public GDObj {
public:
};

class UndoObject : public GDObj {
public:
    static UndoObject* create(GameObject*, UndoCommand);
    static UndoObject* createWithArray(cocos2d::CCArray*, UndoCommand);
    ~UndoObject();
};

class ColorSelectPopup : public FLAlertLayer, public ColorPickerDelegate, public TextInputDelegate, public GJSpecialColorSelectDelegate{
public:
    void colorValueChanged(cocos2d::_ccColor3B);
    static ColorSelectPopup* create(EffectGameObject*, cocos2d::CCArray*);
    virtual bool init(EffectGameObject*, cocos2d::CCArray*, ColorAction*);
    void onDefault(cocos2d::CCObject*);
    void onMultiTrigger(cocos2d::CCObject*);
    void onPlayerColor1(cocos2d::CCObject*);
    void onPlayerColor2(cocos2d::CCObject*);
    void onSpawnedByTrigger(cocos2d::CCObject*);
    void onToggleHSVMode(cocos2d::CCObject*);
    void onTouchTriggered(cocos2d::CCObject*);
    virtual void show();
    void sliderChanged(cocos2d::CCObject*);
    void updateCopyColor();
    void updateCopyColorTextInputLabel();
    void updateDurLabel();
    void updateHSVMode();
    void updateOpacityLabel();
    void updateTouchTriggered();
    ~ColorSelectPopup();
    CLASS_PARAM(cocos2d::extension::CCControlColourPicker*, colorPicker, 0x268);
    CLASS_PARAM(bool, copyColor, 0x372);
    CLASS_PARAM(bool, isColorTrigger, 0x2fd);
};

class SetupPulsePopup : public FLAlertLayer, public ColorPickerDelegate, public TextInputDelegate, public GJSpecialColorSelectDelegate{
public:
    void colorValueChanged(cocos2d::_ccColor3B);
    static SetupPulsePopup* create(EffectGameObject*, cocos2d::CCArray*);
    virtual bool init(EffectGameObject*, cocos2d::CCArray*);
    void onSelectPulseMode(cocos2d::CCObject*);
    void onSelectTargetMode(cocos2d::CCObject*);
    void onUpdateCustomColor(cocos2d::CCObject*);
    virtual void textChanged(CCTextInputNode*);
    void updateCopyColorTextInputLabel();
    void updateEditorLabel();
    void updateFadeOutLabel(bool);
    void updateTargetID();
    void updateTextInputLabel();
    ~SetupPulsePopup();
    CLASS_PARAM(cocos2d::extension::CCControlColourPicker*, colorPicker, 0x268);
    CLASS_PARAM(cocos2d::CCSprite*, currentColorSpr, 0x2d0);
    CLASS_PARAM(cocos2d::CCSprite*, prevColorSpr, 0x2d8);
    CLASS_PARAM(int, pulseMode, 0x38c);
    CLASS_PARAM(int, targetMode, 0x390);
};

