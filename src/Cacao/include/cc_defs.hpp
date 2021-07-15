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
void setupTypeinfos();

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
};

class CreatorLayer : public cocos2d::CCLayer, public GDObj {

};

class GJListLayer : public GDObj {

};

class GJGameLevel : public cocos2d::CCNode, public GDObj {
public:
    static GJGameLevel* create();
    
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
    CLASS_PARAM(bool, official, 0x324);
};

class CCTextInputNode;

class TextInputDelegate {
    virtual void textChanged(CCTextInputNode*) {};
    virtual void textInputOpened(CCTextInputNode*) {};
    virtual void textInputClosed(CCTextInputNode*) {};
    virtual void textInputShouldOffset(CCTextInputNode*, float) {};
    virtual void textInputReturn(CCTextInputNode*) {};
    virtual bool allowTextInput(CCTextInputNode*) {return true;};
};

class UploadActionDelegate {
    virtual void uploadActionFinished(int, int);
    virtual void uploadActionFailed(int, int);
};

class UploadPopupDelegate {
    virtual void onClosePopup(void);
};

class SetIDPopupDelegate {
    virtual void setIDPopupClosed(int);
};

class ColorPickerDelegate {
    virtual void colorValueChanged(cocos2d::ccColor3B color);
};

class GJSpecialColorSelectDelegate {
    virtual void colorSelectClosed(int);
};

class CCSpritePlus : public cocos2d::CCSprite {
public:
  virtual void setFlipX(bool);
  virtual void setFlipY(bool);
  virtual void setPosition(cocos2d::CCPoint const&);
  virtual void setRotation(float);
  virtual void setScale(float);
  virtual void setScaleX(float);
  virtual void setScaleY(float);
  inline CCSpritePlus* getFollowingSprite() {return m_followingSprite;}
  inline void setFollowingSprite(CCSpritePlus* setter) {m_followingSprite = setter;}

protected:
  cocos2d::CCArray *m_followers;
  CCSpritePlus *m_followingSprite;
  bool m_hasFollower;
  bool m_propagateScaleChanges;
  bool m_propagateFlipChanges;
};

class InheritanceNode : public cocos2d::CCObject, public GDObj {

};

class GJBaseGameLayer;
class ColorAction;
class ColorActionSprite;
class GJEffectManager : public cocos2d::CCNode, public GDObj {
 public:
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
    char m_p1bbc[12]; //padding
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
    void countChangedForItem(int item);
    void updateColors(cocos2d::_ccColor3B c1, cocos2d::_ccColor3B c2);
    void toggleGroup(int group, bool activate);
};

class LevelSettingsObject : public cocos2d::CCNode, public GDObj {
public:
    CLASS_PARAM(GJGameLevel*, level, 0x150);
    CLASS_PARAM(GJEffectManager*, effectManager, 0x120);
    CLASS_PARAM(int, fontType, 0x144);
    CLASS_PARAM(bool, is2Player, 0x142);
    static LevelSettingsObject* objectFromString(std::string str);
};

class GameLevelManager : public GDObj {
public:
    static GameLevelManager* sharedState();
    GJGameLevel* createNewLevel();
    CLASS_PARAM(cocos2d::CCDictionary*, timerDict, 0x1e8);
};

class AppDelegate : public GDObj {
public:
    CLASS_PARAM(cocos2d::CCScene*, runningScene, 0x28);
    static AppDelegate* get();
};

class GameSoundManager : public GDObj {
public:
    static GameSoundManager* sharedManager();
    void stopBackgroundMusic();
    virtual ~GameSoundManager();
};

class FMODAudioEngine : public cocos2d::CCNode, public GDObj {
 public:
    static FMODAudioEngine* sharedEngine();
    CLASS_PARAM(float, backgroundVolume, 0x130);
    CLASS_PARAM(float, sfxVolume, 0x134);
};
class GameObject : public CCSpritePlus, public GDObj{
public:
    GameObject();
    void init(char const* frame);
    void setPosition(cocos2d::CCPoint const& pt);
    void destroyObject();
    int getGroupID(int index);
    void playShineEffect();
    void setupCoinArt();
    static GameObject* objectFromString(std::string str, bool ldm);
    void updateCustomScale(float newScale);
    CLASS_PARAM(int, type, 0x370);
    CLASS_PARAM(int, id, 0x3c4);
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
    //void setStartPos(cocos2d::CCPoint p); // todo: make virtual
    //void calculateSpawnXPos();


    virtual void setFlipX(bool);
    virtual void setFlipY(bool);
    virtual void customSetup();
    virtual void setupCustomSprites();
    virtual void addMainSpriteToParent(bool);
    virtual void resetObject();
    virtual void triggerObject(GJBaseGameLayer*);
    virtual void activateObject();
    virtual void deactivateObject(bool);
    virtual void getObjectRect();
    virtual void getObjectRect(float, float);
    virtual void getObjectRect2(float, float);
    virtual void getObjectTextureRect();
    virtual void getRealPosition();
    virtual void setStartPos(cocos2d::CCPoint);
    virtual void updateStartValues();
    virtual void customObjectSetup(std::string&);
    virtual std::string getSaveString();
    virtual void isFlipX();
    virtual void isFlipY();
    virtual void setRScaleX(float);
    virtual void setRScaleY(float);
    virtual void setRScale(float);
    virtual void getRScaleX();
    virtual void getRScaleY();
    virtual void calculateSpawnXPos();
    virtual void triggerActivated(float);
    virtual void powerOnObject();
    virtual void powerOffObject();
    virtual void setObjectColor(cocos2d::_ccColor3B const&);
    virtual void setGlowColor(cocos2d::_ccColor3B const&);
    virtual void getOrientedBox();
    virtual void addToGroup(int);
    virtual void removeFromGroup(int);
    virtual void spawnXPosition();
    virtual void getObjectRectDirty() const;
    virtual void setObjectRectDirty(bool);
    virtual void getOrientedRectDirty() const;
    virtual void setOrientedRectDirty(bool);
    virtual void getType() const;
    virtual void setType(int);
    virtual void getStartPos() const;
    virtual void animationFinished(char const*);
};

class EndPortalObject : public GameObject {
 public:
    static EndPortalObject* create();
    void updateColors(cocos2d::_ccColor3B c1);
};

class SpawnTriggerAction : public cocos2d::CCNode { // omg
 public:
    bool timerEnded;
    float delay;
    float timer;
    int group;
    int uuid;
};

class EffectGameObject : public GameObject {
public:
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

class LabelGameObject : public GameObject {
 public:
  static LabelGameObject* create(char const* frame);
};

class GameToolbox : public cocos2d::CCNode {
 public:
    static std::map<std::string, std::string> stringSetupToMap(std::string st, char const* seperator);
};

// mat thank uwu
class HardStreak : public cocos2d::CCDrawNode { 
public:
    cocos2d::CCArray* m_pointsArr; // 0x0160
    cocos2d::CCPoint m_currentPoint; // 0x0168
    float m_waveSize; // 0x0170
    float m_pulseSize; // 0x0174
    bool m_isSolid; // 0x0178
};

class PlayerObject : public GameObject { 
public:
    static PlayerObject* create(int icn, int icon, cocos2d::CCLayer*);
    void addAllParticles();
    void setColor(cocos2d::_ccColor3B const&);
    void setSecondColor(cocos2d::_ccColor3B const&);
    void flipGravity(bool, bool);
    void pushButton(int);
    CLASS_PARAM(cocos2d::_ccColor3B, pCol1, 0x7c2);
    CLASS_PARAM(cocos2d::_ccColor3B, pCol2, 0x7c5);
    CLASS_PARAM(double, yAccel, 0x760);
    CLASS_PARAM(float, xPos, 0x7c8);
    CLASS_PARAM(float, yPos, 0x7cc);
    CLASS_PARAM(bool, isShip, 0x770);
    CLASS_PARAM(bool, isUpsideDown, 0x776);
    CLASS_PARAM(float, vSize, 0x77c);
    CLASS_PARAM(bool, isHolding, 0x745);
    CLASS_PARAM(bool, hasJustHeld, 0x746);
    CLASS_PARAM(bool, onGround, 0x778);
    CLASS_PARAM(bool, isSliding, 0x7a0);
    CLASS_PARAM(bool, dead, 0x777);
    CLASS_PARAM(double, speed, 0x608);
    CLASS_PARAM(HardStreak *, waveStreak, 0x600);
};

class GJBaseGameLayer : public cocos2d::CCLayer, public GDObj {
public:
    void toggleGroupTriggered(int group, bool activate);
    void pushButton(int, bool player2);
    void releaseButton(int, bool player2);
    void spawnGroup(int group);
    void updateCounters(int item, int value);
    void addToSection(GameObject* ob);
    CLASS_PARAM(GJEffectManager *, effectManager, 0x180);
    CLASS_PARAM(cocos2d::CCLayer*, objectLayer, 0x188);
    CLASS_PARAM(cocos2d::CCArray*, objects, 0x3a0);
    CLASS_PARAM(PlayerObject*, player1, 0x380);
    CLASS_PARAM(PlayerObject*, player2, 0x388);
    CLASS_PARAM(LevelSettingsObject*, levelSettings, 0x390);
    CLASS_PARAM(cocos2d::CCDictionary*, unknownDict, 0x398);
};


class EditorUI;
class LevelEditorLayer : public GJBaseGameLayer {
public:
    void createObjectsFromString(std::string st, bool undo);
    GameObject* addObjectFromString(std::string st);
    GameObject* createObject(int id, cocos2d::CCPoint p, bool undo);
    int getNextFreeGroupID(cocos2d::CCArray* objects);
    void removeObject(GameObject* o, bool undo);
    void removeAllObjects();
    void undoLastAction();
    void redoLastAction();
    CLASS_PARAM(cocos2d::CCArray*, objects, 0x3a0);
    CLASS_PARAM(EditorUI*, editorUI, 0x5d8);
};

class EditButtonBar : public cocos2d::CCNode, public GDObj {
 public:
    void loadFromItems(cocos2d::CCArray*, int, int, bool);
    CLASS_PARAM(cocos2d::CCArray*, objectSlots, 0x130);
};

class Slider : public cocos2d::CCLayer, public GDObj {
 public:
    static Slider* create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, char const*, char const*, float);
    static Slider* create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), float);
    void setBarVisibility(bool);
    float getValue();
    void setValue(float);
};

class CreateMenuItem : public CCMenuItemSpriteExtra, public GDObj {
public:
    static CreateMenuItem* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
};

class EditorUI : public cocos2d::CCLayer, public GDObj {
public:
    void pasteObjects(std::string str);
    void undoLastAction();
    void redoLastAction();
    void deselectAll();
    void onDuplicate(CCObject* stub);
    void enableButton(CreateMenuItem* cmi);
    void disableButton(CreateMenuItem* cmi);
    CCMenuItemSpriteExtra* getCreateBtn(int obid, int four);
    void updateButtons();
    cocos2d::CCArray* getSelectedObjects();
    void selectObjects(cocos2d::CCArray* objs, bool keep);
    void moveObject(GameObject *go, cocos2d::CCPoint pos);
    CLASS_PARAM(LevelEditorLayer*, editorLayer, 0x408);
    CLASS_PARAM(cocos2d::CCArray*, editBars, 0x358);
    CLASS_PARAM(cocos2d::CCNode*, locationSlider, 0x228);
    CLASS_PARAM(GameObject*, lastSelectedObject, 0x440);
    CLASS_PARAM(std::string, clipboard, 0x458);
};

class PlayLayer : public GJBaseGameLayer {
public:
    static PlayLayer* create(GJGameLevel* l);
    static void switchToScene(GJGameLevel* l);
    void resetLevel();
    void addObject(GameObject* gob);
    virtual void update(float);
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

class ObjectToolbox : public GDObj {
public:
    static ObjectToolbox* sharedState();
    char const* intKeyToFrame(int key);
    CLASS_PARAM(cocos2d::CCDictionary*, strKeyObjects, 0x120);
    CLASS_PARAM(cocos2d::CCDictionary*, intKeyObjects, 0x128);
};

class ButtonSprite : public cocos2d::CCSprite, public GDObj {
public:
    static ButtonSprite* create(char const* text, int width, int relativeWidth, float scale, bool relative);
    static ButtonSprite* create(char const* text);
};

class FLAlertLayer : public cocos2d::CCLayerColor, public GDObj {
public:
    FLAlertLayer();
    static FLAlertLayer* create(void* fdsg, char const* x, const std::string &thing, char const* l, char const* u, float f);
    
    static FLAlertLayer* create(char const* title, const std::string &desc, char const* btn) {
        return FLAlertLayer::create(NULL, title, desc, btn, NULL, 300.0);
    }
    virtual ~FLAlertLayer();
    virtual void onEnter(void);
    virtual bool ccTouchBegan(cocos2d::CCTouch *cct,cocos2d::CCEvent *cce);
    virtual void ccTouchMoved(cocos2d::CCTouch *,cocos2d::CCEvent *);
    virtual void ccTouchEnded(cocos2d::CCTouch *,cocos2d::CCEvent *);
    virtual void ccTouchCancelled(cocos2d::CCTouch *,cocos2d::CCEvent *);
    virtual void registerWithTouchDispatcher(void);
    virtual void keyBackClicked(void);
    virtual void keyDown(cocos2d::enumKeyCodes);
    virtual void show(void);
    CLASS_PARAM(cocos2d::CCLayer*, mainLayer, 0x220);
    CLASS_PARAM(cocos2d::CCMenu*, mainMenu, 0x1f8);

    cocos2d::CCMenu* m_buttonMenu; // 0x1f8
    int m_controlConnected; // 0x200
    void* m_alertProtocol; // 0x208
    cocos2d::CCNode* m_scene; // 0x210
    bool m_reverseKeyBack; // 0x211
    cocos2d::ccColor3B m_color; // 0x212
    cocos2d::CCLayer* m_mainLayer; // 0x220
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

class GJDropDownLayer : public cocos2d::CCLayerColor {
 public:
    bool init(char const*, float);
    static GJDropDownLayer* create(char const*);

    void registerWithTouchDispatcher() override {GJDropDownLayer::registerWithTouchDispatcher();}
    void draw(void) override {GJDropDownLayer::draw();};

    virtual ~GJDropDownLayer() {GJDropDownLayer::~GJDropDownLayer();};
    virtual void customSetup() {GJDropDownLayer::customSetup();};
    virtual void enterLayer() {GJDropDownLayer::enterLayer();};
    virtual void exitLayer(cocos2d::CCObject* btn) {GJDropDownLayer::exitLayer(btn);};
    virtual void showLayer(bool noTransition) {GJDropDownLayer::showLayer(noTransition);};
    virtual void hideLayer(bool noTransition) {};
    virtual void layerVisible() {};
    virtual void layerHidden() {};
    virtual void enterAnimFinished() {};
    virtual void disableUI() {};
    virtual void enableUI() {GJDropDownLayer::enableUI();};
 protected:
    cocos2d::CCPoint m_obEndPosition;
    cocos2d::CCPoint m_obStartPosition;
    cocos2d::CCMenu* m_buttonMenu;
    GJListLayer* m_listLayer;
    bool m_controllerEnabled; //?
    cocos2d::CCLayer* m_mainLayer;
    bool m_hidden; //?
    void* m_unknown;
};


class FLAlertLayerProtocol {
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) {}
};

class TextArea : public ButtonSprite {
public:
    static TextArea* create(std::string a, char const*, float textSize, float maxWidth, cocos2d::CCPoint position, float returnSize, bool idk);
};

class LevelInfoLayer : public cocos2d::CCLayer, public GDObj {

};

class MenuLayer : public cocos2d::CCLayer, public GDObj {
public:
    void onQuit(cocos2d::CCObject*);
    void keyBackClicked();
};
class MoreVideoOptionsLayer : public FLAlertLayer {
public:
    static MoreVideoOptionsLayer* create();
    bool init();

};

class GJSearchObject : public cocos2d::CCNode, public GDObj {
public:
    static GJSearchObject* create(SearchType);
    static GJSearchObject* create(int, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, int, int);
    SearchType m_searchType;
};

class LevelBrowserLayer : public cocos2d::CCLayer, public GDObj {
public:
    static cocos2d::CCScene* scene(GJSearchObject* search);
};

class EditorPauseLayer : public GDObj {
public:
    static EditorPauseLayer* create(LevelEditorLayer* editor);
    void saveLevel();
    virtual ~EditorPauseLayer();
};

class PauseLayer : public FLAlertLayer {
    
};

class GJAccountManager : public GDObj {
public:
    static GJAccountManager* sharedState();

    CLASS_PARAM(char const*, password, 0x128);
    CLASS_PARAM(char const*, username, 0x130);
};

class GameManager : public cocos2d::CCNode, public GDObj {
public:
    static GameManager* sharedState();
    bool getGameVariable(char const* var);
    void setGameVariable(char const* var, bool val);
    int getIntGameVariable(char const *var);
    void fadeInMusic(char const* ye);
    void reloadAllStep5();
    void doQuickSave();
    void reloadAll(bool a, bool b, bool c);
    void accountStatusChanged();
    void load();
    void loadFont(int fkey);

    void setSecondColorIdx(int idx);
    void setFirstColorIdx(int idx);
    cocos2d::_ccColor3B const& colorForIdx(int idx);
    std::string& manFile();
    virtual ~GameManager();

    CLASS_PARAM(PlayLayer*, playLayer, 0x180);
    CLASS_PARAM(LevelEditorLayer*, editorLayer, 0x188);
    CLASS_PARAM(int, scene, 0x1f4);
};

class InfoLayer : public cocos2d::CCLayer, public GDObj {
public:
    void loadPage(int type, bool yes);
    void onRefreshComments(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    CLASS_PARAM(cocos2d::CCLayer*, mainLayer, 0x220);
    CLASS_PARAM(cocos2d::CCMenu*, rightMenu, 0x1f8);
};

class CCMenuItemToggler : public cocos2d::CCNodeRGBA, public GDObj {
public:
    static CCMenuItemToggler* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*));
    void toggle(bool t);
    void setSizeMult(float);
    CLASS_PARAM(bool, toggled, 0x168);
};

class CCTextInputNode : public cocos2d::CCLayer, public cocos2d::CCIMEDelegate, public GDObj {
public:
    static CCTextInputNode* create(float x, float y, char const* placeholder, char const* font, int, char const*);
    bool init(float x, float y, char const* placeholder, char const* font, int, char const*);
    void setAllowedChars(std::string allowed);
    void setMaxLabelScale(float max);
    void setMaxLabelWidth(float max);
    void setLabelPlaceholderScale(float max);
    void setLabelPlaceholderColor(cocos2d::ccColor3B);
    std::string getString();
    char const* getString_s(); // modification, spooky
    void setString(std::string update);
    CLASS_PARAM(TextInputDelegate*, inputDelegate, 0x1c8);
 //protected:
    void* m_unknown0;
    void* m_unknown1;
    std::string m_caption; // 0x188
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
};

class SetupSpawnPopup : public FLAlertLayer {
 public:
    CLASS_PARAM(EffectGameObject*, object, 0x258);
    CLASS_PARAM(CCTextInputNode*, numInput, 0x290);
    void createToggleButton(std::string name, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool enabled, cocos2d::CCMenu* menu, cocos2d::CCPoint location, cocos2d::CCArray* idk);
    virtual ~SetupSpawnPopup();
    virtual void keyBackClicked();
    virtual void show();
    virtual void textInputClosed(CCTextInputNode*);
    virtual void textChanged(CCTextInputNode*);
    virtual void textInputShouldOffset(CCTextInputNode*, float);
    virtual void textInputReturn(CCTextInputNode*);
};

class LoadingLayer {

};

class ColorAction : public cocos2d::CCNode {

};

class ColorActionSprite : public cocos2d::CCNode {

};

class ColorSelectPopup : public FLAlertLayer, ColorPickerDelegate, TextInputDelegate, GJSpecialColorSelectDelegate {
public:
    CLASS_PARAM(cocos2d::extension::CCControlColourPicker*, colorPicker, 0x268);
    CLASS_PARAM(bool, copyColor, 0x372);
    CLASS_PARAM(bool, isColorTrigger, 0x2fd);
};

class SetupPulsePopup : public FLAlertLayer, ColorPickerDelegate, TextInputDelegate, GJSpecialColorSelectDelegate {
public:
    CLASS_PARAM(cocos2d::extension::CCControlColourPicker*, colorPicker, 0x268);
    CLASS_PARAM(cocos2d::CCSprite*, currentColorSpr, 0x2d0);
    CLASS_PARAM(cocos2d::CCSprite*, prevColorSpr, 0x2d8);
    CLASS_PARAM(int, pulseMode, 0x38c);
};

class DS_Dictionary {
public:
    bool loadRootSubDictFromFile(const char* fileName);
    bool saveRootSubDictToFile(const char* fileName);
    bool stepIntoSubDictWithKey(const char* key);
    void stepOutOfSubDict();
    void stepBackToRootSubDict();
    void setSubDictForKey(const char* key);
    void setIntegerForKey(const char* key, int value);
    int getIntegerForKey(const char* key);
    void setBoolForKey(const char* key, bool value);
    int getBoolForKey(const char* key);
    void setFloatForKey(const char* key, float value);
    float getFloatForKey(const char* key);
    void setStringForKey(const char* key, std::string value);
    std::string getStringForKey(const char* key);
    std::vector<std::string> getAllKeys();
};

class GManager : public cocos2d::CCNode, public GDObj  {
    protected:
        std::string m_sFileName;
        bool m_bSetup;
        bool m_bSaved;

    public:
        void save() {}
        virtual void setup() {}
};

class CountTriggerAction : public cocos2d::CCNode, public GDObj {
 public:
    int m_previousCount;
    int m_targetCount;
    int m_targetID;
    bool m_activateGroup;
    CLASS_PARAM(bool, multiActivate, 0x138);
};
#endif
