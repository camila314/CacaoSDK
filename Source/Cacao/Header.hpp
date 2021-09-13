#pragma once
#include <Base/HeaderBase.hpp>

class FLAlertLayerProtocol;
class ButtonSprite;
class FLAlertLayer;
class MenuLayer;

class FLAlertLayerProtocol {
public:
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) {};
};

class ButtonSprite : public cocos2d::CCSprite {
public:
    static ButtonSprite* create(char const*);
    static ButtonSprite* create(char const*, int, int, float, bool);
    void updateBGImage(char const*);
    static ButtonSprite* create(char const*, float);
    static ButtonSprite* create(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool);
};

class FLAlertLayer : public cocos2d::CCLayerColor {
public:
    virtual ~FLAlertLayer();
    virtual void onEnter();
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    virtual void registerWithTouchDispatcher();
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes);
    virtual void show();
    bool init(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float);
    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float);
    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float);
    static FLAlertLayer* create(char const* title, const gd::string &desc, char const* btn) {
        return FLAlertLayer::create(nullptr, title, desc, btn, nullptr, 300.0);
    };
    cocos2d::CCMenu* m_buttonMenu;
    int m_controlConnected;
    FLAlertLayerProtocol* m_alertProtocol;
    cocos2d::CCNode* m_scene;
    bool m_reverseKeyBack;
    cocos2d::ccColor3B m_color;
    cocos2d::CCLayer* m_mainLayer;
    int m_ZOrder;
    bool m_noElasticity;
    cocos2d::ccColor3B m_color2;
    ButtonSprite* m_button1;
    ButtonSprite* m_button2;
    cocos2d::CCLayerColor* m_scrollingLayer;
    int m_joystickConnected;
    bool m_containsBorder;
    bool m_noAction;
};

class MenuLayer : public cocos2d::CCLayer, public FLAlertLayerProtocol {
public:
    virtual ~MenuLayer();
    virtual bool init();
    virtual void keyBackClicked();
    virtual void keyDown(cocos2d::enumKeyCodes);
    virtual void googlePlaySignedIn();
    virtual void FLAlert_Clicked(FLAlertLayer*, bool);
    void onMoreGames(cocos2d::CCObject*);
    void onQuit(cocos2d::CCObject*);
    void scene(bool);
};
