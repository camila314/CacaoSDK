class CCSpritePlus : cocos2d::CCSprite {
    bool initWithSpriteFrameName(char const*) = 0x248670;
    volatile inline CCSpritePlus* getFollowingSprite() {
        return m_followingSprite;
    };
    volatile inline void setFollowingSprite(CCSpritePlus* setter) {
        m_followingSprite = setter;
    };

    cocos2d::CCArray* m_followers;
    CCSpritePlus* m_followingSprite;
    bool m_hasFollower;
    bool m_propagateScaleChanges;
    bool m_propagateFlipChanges;
}

class CCMoveCNode : cocos2d::CCNode {
    static CCMoveCNode* create() = 0x1842a0;
    bool init() = 0x18b3d0;
    ~CCMoveCNode() = 0x18b2c0;
}

class CCNodeContainer : cocos2d::CCNode {
    static CCNodeContainer* create() = 0xb1090;
    bool init() = 0xba950;
    void visit() = 0xba960;
}

class CCAnimatedSprite : cocos2d::CCSprite {
    void runAnimation(gd::string) = 0x1a6430;
    void tweenToAnimation(gd::string, float) = 0x1a65b0;
}

class CCBlockLayer {
    void disableUI() = 0x2a5a80;
    void draw() = 0x2a5c20;
    void enableUI() = 0x2a5a90;
    void enterAnimFinished() = 0x2a5bb0;
    void enterLayer() = 0x2a5aa0;
    void exitLayer() = 0x2a5b40;
    void hideLayer(bool) = 0x2a5ba0;
    bool init() = 0x2a59c0;
    void layerHidden() = 0x2a5be0;
    void layerVisible() = 0x2a5bc0;
    void registerWithTouchDispatcher() = 0x2a5ad0;
    void showLayer(bool) = 0x2a5b90;
}

class CCCircleWave : cocos2d::CCNode {
    static CCCircleWave* create(float, float, float, bool) = 0xbd270;
    static CCCircleWave* create(float, float, float, bool, bool) = 0xbd290;
    bool init(float, float, float, bool, bool) = 0xbd380;
    void followObject(cocos2d::CCNode*, bool) = 0xbd670;
    void updatePosition(float) = 0xbd630;
    cocos2d::_ccColor3B m_color = 0x134;
    CCCircleWaveDelegate* m_delegate = 0x150;
}

class CCLightFlash {
    static CCLightFlash* create() = 0x295870;
    void playEffect(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float) = 0x295900;
}

class CCMenuItemSpriteExtra {
    static CCMenuItemSpriteExtra* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x1253c0;
    void setSizeMult(float) = 0x1255e0;
    CCMenuItemSpriteExtra() = 0x32670;
    bool init(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x125450;
}

class CCMenuItemToggler : cocos2d::CCMenuItem {
    static CCMenuItemToggler* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x38400;
    void setSizeMult(float) = 0x38a40;
    void toggle(bool) = 0x38950;

    CCMenuItemSpriteExtra* m_onButton;
    CCMenuItemSpriteExtra* m_offButton;
    bool m_toggled;
    bool m_notClickable;
}


class CCScrollLayerExt : cocos2d::CCLayer {
    virtual ~CCScrollLayerExt() = 0x2359b0;
    virtual void visit() = 0x236550;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x235ef0;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x236300;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x236020;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2362a0;
    virtual void registerWithTouchDispatcher() = 0x235eb0;
    virtual void preVisitWithClippingRect(cocos2d::CCRect) = 0x2366a0;
    virtual void postVisit() = 0x236720;

    void moveToTop() = 0x235870;
    void moveToTopWithOffset(float) = 0x2357d0;
}
