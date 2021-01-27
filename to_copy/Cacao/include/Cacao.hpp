#ifndef __CACAO_HPP__
#define __CACAO_HPP__

#include <cocos2dx/cocos2d.h>
#include <CCMenuItemSpriteExtra.h>
#include <cocos2dext/cocos-ext.h>
#include <GDML/GDML.hpp>
#include <iostream>
#include <string>

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

class EventLoop {
private:

	static void runLoop(void* instance) {
		auto event = EventLoop::sharedState();

		if(event->usesEveryFrame) {
			event->everyFrame(" ");
		}

		if(event->thequeue.size()) {
			event->thequeue[0].first(event->thequeue[0].second);

			event->thequeue.erase(event->thequeue.begin());
		}
		return FCAST(EventLoop::runLoop, event->container->getOriginal(getBase()+0x249690))(instance);
	}
public:
	queuefunc everyFrame;
	bool usesEveryFrame;

	ModContainer* container;
	static EventLoop* shared;
	std::vector<std::pair<queuefunc, std::string> > thequeue;

	static EventLoop* sharedState() {
		if(!EventLoop::shared)
			EventLoop::shared = new EventLoop();
		return EventLoop::shared;
	}
	void dispatch_main(queuefunc f, std::string s) {
		thequeue.push_back(std::make_pair(f, s));
	}
	void start() {
		container->enable();
	}
	EventLoop() {
		usesEveryFrame = false;
		everyFrame = NULL;

		container = new ModContainer("MainEventLoop");
		container->registerHook(getBase()+0x249690,(func_t)EventLoop::runLoop);
	}

};
EventLoop* EventLoop::shared = 0;


#define CLASS_PARAM(__TYPE__,__GETTER__, __OFFSET__) \
	inline __TYPE__ _##__GETTER__() { \
		if (this) {\
			return *(__TYPE__*)((long)this+__OFFSET__); \
		} else { \
			return (__TYPE__)NULL; \
		}; \
	}

#define STRUCT_PARAM(__TYPE__,__GETTER__, __OFFSET__) \
	inline __TYPE__ _##__GETTER__() { \
		return *(__TYPE__*)((long)this+__OFFSET__); \
	}
class GDObj { 
public:
	void* valOffset(long offset);
	void setValOffset(long offset, void* setter);
};

class EditorUI : public GDObj {
public:
	void pasteObjects(std::string str);
	void undoLastAction();
	void redoLastAction();
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

	CLASS_PARAM(float, positionX, 0x38);
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


#endif