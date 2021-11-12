
class cocos2d::CCLayer {
    CCLayer() = 0x2725b0;
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2734d0;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x273650;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2735d0;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x273550;
    void ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x2736d0;
    void ccTouchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x273850;
    void ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x2737d0;
    void ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x273750;
    static cocos2d::CCLayer* create() = 0x272a00;
    void didAccelerate(cocos2d::CCAcceleration*) = 0x272ea0;
    void getTouchMode() = 0x272e10;
    void getTouchPriority() = 0x272e00;
    bool init() = 0x2729a0;
    void isAccelerometerEnabled() = 0x272e20;
    void isKeyboardEnabled() = 0x273010;
    void isKeypadEnabled() = 0x272f70;
    void isMouseEnabled() = 0x273090;
    void isTouchEnabled() = 0x272ce0;
    void keyBackClicked() = 0x273160;
    void keyDown(cocos2d::enumKeyCodes) = 0x273280;
    void keyMenuClicked() = 0x273200;
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
    void getBlendFunc() = 0x274480;
    bool init() = 0x274800;
    void initWithColor(cocos2d::_ccColor4B const&) = 0x2749a0;
    void initWithColor(cocos2d::_ccColor4B const&, float, float) = 0x274850;
    void setBlendFunc(cocos2d::_ccBlendFunc) = 0x2744a0;
    void setColor(cocos2d::_ccColor3B const&) = 0x274c20;
    void setContentSize(cocos2d::CCSize const&) = 0x2749f0;
    void setOpacity(unsigned char) = 0x274db0;
    void updateColor() = 0x274ae0;
    ~CCLayerColor() = 0x2743d0;
}

class cocos2d::CCLayerRGBA {
    CCLayerRGBA() = 0x2738d0;
    virtual bool init() = 0x273b40;
    virtual void getOpacity() = 0x273be0;
    virtual void getDisplayedOpacity() = 0x273c00;
    virtual void setOpacity(unsigned char) = 0x273c20;
    virtual void updateDisplayedOpacity(unsigned char) = 0x273f20;
    virtual void isCascadeOpacityEnabled() = 0x2741f0;
    virtual void setCascadeOpacityEnabled(bool) = 0x274210;
    virtual void getColor() = 0x273d60;
    virtual void getDisplayedColor() = 0x273d80;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x273da0;
    virtual void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x2740b0;
    virtual void isCascadeColorEnabled() = 0x274230;
    virtual void setCascadeColorEnabled(bool) = 0x274250;
    // virtual void setOpacityModifyRGB(bool) = 0x6180;
    // virtual void isOpacityModifyRGB() = 0x6190;
    virtual ~CCLayerRGBA() = 0x273aa0;
}
