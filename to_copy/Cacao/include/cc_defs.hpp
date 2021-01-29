// Copyright camden314 2021
#ifndef __CC_DEFS_HPP__
#define __CC_DEFS_HPP__

#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <string>
#include <GDML/GDML.hpp>
#include <CCMenuItemSpriteExtra.h>
#include <cocos2dx/cocos2d.h>
#include <cocos2dext/cocos-ext.h>

typedef void(*queuefunc)(std::string);

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
    inline __TYPE__ _##__GETTER__() { \
        if (this) {\
            return *(__TYPE__*)((long)this+__OFFSET__); \
        } else { \
            return (__TYPE__)NULL; \
        }; \
    }

#define STRUCT_PARAM(__TYPE__, __GETTER__, __OFFSET__) \
    inline __TYPE__ _##__GETTER__() { \
        return *(__TYPE__*)((long)this+__OFFSET__); \
    }

class GDObj { 
public:
    void* valOffset(long offset);
    void setValOffset(long offset, void* setter);
private:
    char pad[0x1000];
};

class GJGameLevel : public GDObj {
public:
    CLASS_PARAM(std::string, name, 0x138);
    CLASS_PARAM(int, levelId, 0x130);
    CLASS_PARAM(int, bestNormal, 0x214);
    CLASS_PARAM(int, bestPractice, 0x238);
    CLASS_PARAM(std::string, author, 0x150);
    STRUCT_PARAM(LevelDifficulty, difficulty, 0x1b0);
};

class LevelSettingsObject : public GDObj {
public:
    CLASS_PARAM(GJGameLevel*, level, 0x150);
};

class GameLevelManager : public GDObj {
public:
    static GameLevelManager* sharedState();
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

class GameObject : public cocos2d::CCNode, public GDObj{
public:
    GameObject();
    void init(char const* frame);
    void setPosition(cocos2d::CCPoint const& pt);
    void destroyObject();
    int getGroupID(int index);
};

class PlayerObject : public GameObject { 
public:
    static PlayerObject* create(int icn, int icon, cocos2d::CCLayer*);
    void addAllParticles();
    void setColor(cocos2d::_ccColor3B const&);
    void setSecondColor(cocos2d::_ccColor3B const&);
    CLASS_PARAM(double, yAccel, 0x760);

};

class GJGameBaseLayer : public cocos2d::CCLayer, public GDObj {
public:
    CLASS_PARAM(cocos2d::CCArray*, objects, 0x3a0);
    CLASS_PARAM(PlayerObject*, player1, 0x380);
    CLASS_PARAM(PlayerObject*, player2, 0x388);
    CLASS_PARAM(LevelSettingsObject*, levelSettings, 0x390);
};

class LevelEditorLayer : public GJGameBaseLayer {
public:
    void createObjectsFromString(std::string st, bool idk);
    void removeAllObjects();
    void undoLastAction();
    void redoLastAction();
    CLASS_PARAM(cocos2d::CCArray*, objects, 0x3a0);
};

class EditorUI : public cocos2d::CCLayer, public GDObj {
public:
    void pasteObjects(std::string str);
    void undoLastAction();
    void redoLastAction();
    cocos2d::CCArray* getSelectedObjects();
    void selectObjects(cocos2d::CCArray* objs, bool keep);
    CLASS_PARAM(LevelEditorLayer*, editorLayer, 0x408);
};

class PlayLayer : public GJGameBaseLayer {
public:
    static PlayLayer* create();
    CLASS_PARAM(float, length, 0x5f8);
    CLASS_PARAM(int, attempt, 0x754);
    CLASS_PARAM(bool, practiceMode, 0x739);
    CLASS_PARAM(float, time, 0x760);
    STRUCT_PARAM(GameModes, gameModes, 0x76f);
};

class ObjectToolbox : public GDObj {
public:
    static ObjectToolbox* sharedState();
};

class FLAlertLayer : public cocos2d::CCLayerColor, public GDObj {
public:
    FLAlertLayer();
    static FLAlertLayer* create(void* fdsg, char const* x, const std::string &thing, char const* l, char const* u, float f);
    
    static FLAlertLayer* create(char const* title, const std::string &desc, char const* btn) {
        return FLAlertLayer::create(NULL, title, desc, btn, NULL, 300.0);
    }
    int show();
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

class GJSearchObject : public GDObj {
public:
    static GJSearchObject* create(int, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, int, int);
};

class LevelBrowserLayer : public GDObj {
public:
    static cocos2d::CCScene* scene(GJSearchObject* search);
};

class EditorPauseLayer : public GDObj {
public:
    static EditorPauseLayer* create(LevelEditorLayer* editor);
    void saveLevel();
    virtual ~EditorPauseLayer();
};

class GJAccountManager : public GDObj {
public:
    static GJAccountManager* sharedState();

    CLASS_PARAM(char const*, password, 0x128);
    CLASS_PARAM(char const*, username, 0x130);
};



class GameManager : public GDObj {
public:
    static GameManager* sharedState();
    bool getGameVariable(char const* var);
    void setGameVariable(char const* var, bool val);
    void fadeInMusic(char const* ye);
    void reloadAllStep5();
    void doQuickSave();
    void reloadAll(bool a, bool b, bool c);
    void accountStatusChanged();
    void load();

    void setSecondColorIdx(int idx);
    void setFirstColorIdx(int idx);
    cocos2d::_ccColor3B const& colorForIdx(int idx);
    std::string& manFile();
    virtual ~GameManager();

    CLASS_PARAM(PlayLayer*, playLayer, 0x180);
    CLASS_PARAM(LevelEditorLayer*, editorLayer, 0x188);
    CLASS_PARAM(int, scene, 0x1f4);
};

class ButtonSprite : public cocos2d::CCSprite, public GDObj {
public:
    static ButtonSprite* create(char const* text, int width, int relativeWidth, float scale, bool relative);
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
    void setSizeMult(float);
};

#endif