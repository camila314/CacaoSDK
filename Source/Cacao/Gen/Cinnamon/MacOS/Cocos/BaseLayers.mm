class cocos2d::CCLayerRGBA {
    virtual ~CCLayerRGBA() = 0x273aa0;
    virtual bool init() = 0x273b40;
    virtual GLubyte getOpacity() = 0x273be0;
    virtual GLubyte getDisplayedOpacity() = 0x273c00;
    virtual void setOpacity(unsigned char) = 0x273c20;
    virtual void updateDisplayedOpacity(unsigned char) = 0x273f20;
    virtual bool isCascadeOpacityEnabled() = 0x2741f0;
    virtual void setCascadeOpacityEnabled(bool) = 0x274210;
    virtual cocos2d::_ccColor3B const& getColor() = 0x273d60;
    virtual cocos2d::_ccColor3B const& getDisplayedColor() = 0x273d80;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x273da0;
    virtual void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x2740b0;
    virtual bool isCascadeColorEnabled() = 0x274230;
    virtual void setCascadeColorEnabled(bool) = 0x274250;
    // virtual void setOpacityModifyRGB(bool) = 0x6180;
    // virtual bool isOpacityModifyRGB() = 0x6190;
}

class cocos2d::CCLayerColor {
    virtual ~CCLayerColor() = 0x2743e0;
    virtual bool init() = 0x274800;
    virtual void setContentSize(cocos2d::CCSize const&) = 0x2749f0;
    virtual void draw() = 0x274b50;
    virtual void setOpacity(unsigned char) = 0x274db0;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x274c20;
    virtual bool initWithColor(cocos2d::_ccColor4B const&, float, float) = 0x274850;
    virtual bool initWithColor(cocos2d::_ccColor4B const&) = 0x2749a0;
    virtual cocos2d::ccBlendFunc getBlendFunc() = 0x274480;
    virtual void setBlendFunc(cocos2d::_ccBlendFunc) = 0x2744a0;
    virtual void updateColor() = 0x274ae0;
}

class cocos2d::CCLayer {
    virtual ~CCLayer() = 0x272900;
    virtual bool init() = 0x2729a0;
    virtual void onEnter() = 0x273300;
    virtual void onEnterTransitionDidFinish() = 0x273490;
    virtual void onExit() = 0x2733c0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2734d0;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x273550;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2735d0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x273650;
    virtual void ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x2736d0;
    virtual void ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x273750;
    virtual void ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x2737d0;
    virtual void ccTouchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x273850;
    virtual void didAccelerate(cocos2d::CCAcceleration*) = 0x272ea0;
    virtual void registerWithTouchDispatcher() = 0x272b40;
    virtual void registerScriptTouchHandler(int, bool, int, bool) = 0x272bd0;
    virtual void unregisterScriptTouchHandler() = 0x272c30;
    virtual bool isTouchEnabled() = 0x272ce0;
    virtual void setTouchEnabled(bool) = 0x272cf0;
    virtual void setTouchMode(cocos2d::ccTouchesMode) = 0x272d60;
    virtual int getTouchMode() = 0x272e10;
    virtual void setTouchPriority(int) = 0x272db0;
    virtual int getTouchPriority() = 0x272e00;
    virtual bool isAccelerometerEnabled() = 0x272e20;
    virtual void setAccelerometerEnabled(bool) = 0x272e30;
    virtual void setAccelerometerInterval(double) = 0x272e70;
    virtual bool isKeypadEnabled() = 0x272f70;
    virtual void setKeypadEnabled(bool) = 0x272f80;
    virtual bool isKeyboardEnabled() = 0x273010;
    virtual void setKeyboardEnabled(bool) = 0x273020;
    virtual bool isMouseEnabled() = 0x273090;
    virtual void setMouseEnabled(bool) = 0x2730a0;
    virtual void keyBackClicked() = 0x273160;
    virtual void keyMenuClicked() = 0x273200;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x273280;

    CCLayer() = 0x2725b0;

    static cocos2d::CCLayer* create() = 0x272a00;
}

