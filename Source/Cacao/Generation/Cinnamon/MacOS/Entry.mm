class cocos2d::CCLayerRGBA {
    virtual ~CCLayerRGBA() = 0x273aa0;
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
    virtual void setOpacityModifyRGB(bool) = 0x6180;
    virtual void isOpacityModifyRGB() = 0x6190;
}

class cocos2d::CCLayerColor {
    virtual ~CCLayerColor() = 0x2743e0;
    virtual bool init() = 0x274800;
    virtual void setContentSize(cocos2d::CCSize const&) = 0x2749f0;
    virtual void draw() = 0x274b50;
    virtual void setOpacity(unsigned char) = 0x274db0;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x274c20;
    virtual void initWithColor(cocos2d::_ccColor4B const&, float, float) = 0x274850;
    virtual void initWithColor(cocos2d::_ccColor4B const&) = 0x2749a0;
    virtual void getBlendFunc() = 0x274480;
    virtual void setBlendFunc(cocos2d::_ccBlendFunc) = 0x2744a0;
    virtual void updateColor() = 0x274ae0;
}

class cocos2d::CCMouseDelegate {
    volatile virtual void rightKeyDown() {};
    volatile virtual void rightKeyUp() {};
    volatile virtual void scrollWheel(float, float) {};
}

class cocos2d::CCKeyboardDelegate {
    volatile virtual void keyUp(cocos2d::enumKeyCodes) {};
}

class cocos2d::ui::Margin {
    volatile Margin() {};
}

class cocos2d::CCRect {
    volatile CCRect(float, float, float, float) {};
}

class cocos2d::CCSize {
    volatile CCSize(float, float) {};
}

class cocos2d::CCPoint {
    volatile CCPoint(float, float) {};
}

class cocos2d::CCNode {
    virtual ~CCNode() = 0x1228d0;
    virtual void update(float) = 0x1241a0;
    virtual bool init() = 0x122910;
    virtual void setZOrder(int) = 0x1229a0;
    virtual void _setZOrder(int) = 0x122990;
    virtual void getZOrder() = 0x122980;
    virtual void setVertexZ(float) = 0x1229f0;
    virtual void getVertexZ() = 0x1229e0;
    virtual void setScaleX(float) = 0x122b10;
    virtual void getScaleX() = 0x122b00;
    virtual void setScaleY(float) = 0x122b40;
    virtual void getScaleY() = 0x122b30;
    virtual void setScale(float) = 0x122ac0;
    virtual void getScale() = 0x122ab0;
    virtual void setScale(float, float) = 0x122ae0;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x122b70;
    virtual void getPosition() = 0x122b60;
    virtual void setPosition(float, float) = 0x122ba0;
    virtual void getPosition(float*, float*) = 0x122b90;
    virtual void setPositionX(float) = 0x122c00;
    virtual void getPositionX() = 0x122be0;
    virtual void setPositionY(float) = 0x122c40;
    virtual void getPositionY() = 0x122bf0;
    virtual void setSkewX(float) = 0x122930;
    virtual void getSkewX() = 0x122920;
    virtual void setSkewY(float) = 0x122960;
    virtual void getSkewY() = 0x122950;
    virtual void setAnchorPoint(cocos2d::CCPoint const&) = 0x122d90;
    virtual void getAnchorPoint() = 0x122d80;
    virtual void getAnchorPointInPoints() = 0x122d70;
    virtual void setContentSize(cocos2d::CCSize const&) = 0x122e50;
    virtual void getContentSize() const = 0x122e00;
    virtual void getScaledContentSize() = 0x122e10;
    virtual void setVisible(bool) = 0x122d60;
    virtual void isVisible() = 0x122d50;
    virtual void setRotation(float) = 0x122a10;
    virtual void getRotation() = 0x122a00;
    virtual void setRotationX(float) = 0x122a60;
    virtual void getRotationX() = 0x122a50;
    virtual void setRotationY(float) = 0x122a90;
    virtual void getRotationY() = 0x122a80;
    virtual void setOrderOfArrival(unsigned int) = 0x122f60;
    virtual void getOrderOfArrival() = 0x122f50;
    virtual void setGLServerState(cocos2d::ccGLServerState) = 0x122fa0;
    virtual void getGLServerState() = 0x122f90;
    virtual void ignoreAnchorPointForPosition(bool) = 0x122f00;
    virtual void isIgnoreAnchorPointForPosition() = 0x122ef0;
    virtual void addChild(cocos2d::CCNode*) = 0x1233d0;
    virtual void addChild(cocos2d::CCNode*, int) = 0x1233b0;
    virtual void addChild(cocos2d::CCNode*, int, int) = 0x1232a0;
    virtual void getChildByTag(int) = 0x123220;
    virtual void getChildren() = 0x122c80;
    virtual void getChildrenCount() const = 0x122c90;
    virtual void setParent(cocos2d::CCNode*) = 0x122ee0;
    virtual void getParent() = 0x122ed0;
    virtual void removeFromParent() = 0x1233f0;
    virtual void removeFromParentAndCleanup(bool) = 0x123410;
    virtual void removeMeAndCleanup() = 0x123440;
    virtual void removeChild(cocos2d::CCNode*) = 0x123460;
    virtual void removeChild(cocos2d::CCNode*, bool) = 0x123480;
    virtual void removeChildByTag(int) = 0x1235a0;
    virtual void removeChildByTag(int, bool) = 0x1235c0;
    virtual void removeAllChildren() = 0x123600;
    virtual void removeAllChildrenWithCleanup(bool) = 0x123620;
    virtual void reorderChild(cocos2d::CCNode*, int) = 0x123760;
    virtual void sortAllChildren() = 0x1237b0;
    virtual void getGrid() = 0x122d00;
    virtual void setGrid(cocos2d::CCGridBase*) = 0x122d10;
    virtual void getUserData() = 0x122f30;
    virtual void setUserData(void*) = 0x122f40;
    virtual void getUserObject() = 0x122f80;
    virtual void setUserObject(cocos2d::CCObject*) = 0x122fb0;
    virtual void getShaderProgram() = 0x122f70;
    virtual void setShaderProgram(cocos2d::CCGLProgram*) = 0x122ff0;
    virtual void getCamera() = 0x122cb0;
    virtual void isRunning() = 0x122ec0;
    virtual void registerScriptHandler(int) = 0x123d90;
    virtual void unregisterScriptHandler() = 0x123dc0;
    virtual void onEnter() = 0x123a90;
    virtual void onEnterTransitionDidFinish() = 0x123b90;
    virtual void onExit() = 0x123ca0;
    virtual void onExitTransitionDidStart() = 0x123c00;
    virtual void cleanup() = 0x123100;
    virtual void draw() = 0x123840;
    virtual void visit() = 0x123850;
    virtual void setActionManager(cocos2d::CCActionManager*) = 0x123e00;
    virtual void getActionManager() = 0x123e50;
    virtual void setScheduler(cocos2d::CCScheduler*) = 0x123f20;
    virtual void getScheduler() = 0x123f70;
    virtual void updateTransform() = 0x1249d0;
    virtual void nodeToParentTransform() = 0x124210;
    virtual void parentToNodeTransform() = 0x1245d0;
    virtual void nodeToWorldTransform() = 0x124670;
    virtual void worldToNodeTransform() = 0x124710;
    virtual void addComponent(cocos2d::CCComponent*) = 0x124a40;
    virtual void removeComponent(char const*) = 0x124a60;
    virtual void removeComponent(cocos2d::CCComponent*) = 0x124a80;
    virtual void removeAllComponents() = 0x124aa0;
    virtual void updateTweenAction(float, char const*) = 0x1249c0;
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
    virtual void isTouchEnabled() = 0x272ce0;
    virtual void setTouchEnabled(bool) = 0x272cf0;
    virtual void setTouchMode(cocos2d::ccTouchesMode) = 0x272d60;
    virtual void getTouchMode() = 0x272e10;
    virtual void setTouchPriority(int) = 0x272db0;
    virtual void getTouchPriority() = 0x272e00;
    virtual void isAccelerometerEnabled() = 0x272e20;
    virtual void setAccelerometerEnabled(bool) = 0x272e30;
    virtual void setAccelerometerInterval(double) = 0x272e70;
    virtual void isKeypadEnabled() = 0x272f70;
    virtual void setKeypadEnabled(bool) = 0x272f80;
    virtual void isKeyboardEnabled() = 0x273010;
    virtual void setKeyboardEnabled(bool) = 0x273020;
    virtual void isMouseEnabled() = 0x273090;
    virtual void setMouseEnabled(bool) = 0x2730a0;
    virtual void keyBackClicked() = 0x273160;
    virtual void keyMenuClicked() = 0x273200;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x273280;

    static cocos2d::CCLayer* create() = 0x272a00;
}

class cocos2d::CCObject {
    virtual ~CCObject() = 0x250d90;
    virtual void isEqual(cocos2d::CCObject const*) = 0x250f20;
    virtual void acceptVisitor(cocos2d::CCDataVisitor&) = 0x250f30;
    virtual void update(float) = 0x32660;
    virtual void encodeWithCoder(DS_Dictionary*) = 0x250f70;
    virtual bool canEncode() = 0x250f90;
    virtual void getTag() const = 0x250f50;
    virtual void setTag(int) = 0x250f60;
}

class cocos2d::CCCopying {
    volatile virtual cocos2d::CCObject* copyWithZone(cocos2d::CCZone*) {};
}



class FLAlertLayer : cocos2d::CCLayerColor {
    virtual ~FLAlertLayer() = 0x25db60;
    virtual void onEnter() = 0x25f350;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25ee40;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25f0a0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25ef60;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25f020;
    virtual void registerWithTouchDispatcher() = 0x25f2e0;
    virtual void keyBackClicked() = 0x25ed90;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x25ece0;
    virtual void show() = 0x25f120;

    bool init(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float) = 0x25e1b0;

    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float) = 0x25e0e0;
    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float) = 0x25dec0;
    
    volatile static FLAlertLayer* create(char const* title, const std::string &desc, char const* btn) {
        return FLAlertLayer::create(nullptr, title, desc, btn, nullptr, 300.0);
    };

    cocos2d::CCMenu* m_buttonMenu; // 0x1f8
    int m_controlConnected; // 0x200
    void* m_alertProtocol; // 0x208
    cocos2d::CCNode* m_scene; // 0x210
    bool m_reverseKeyBack; // 0x211
    cocos2d::ccColor3B m_color; // 0x212
    cocos2d::CCLayer* m_mainLayer; // 0x220
    int m_ZOrder;  //0x228
    bool m_noElasticity; //0x22c
    cocos2d::ccColor3B m_color2; //0x230
    ButtonSprite* m_button1; //0x238
    ButtonSprite* m_button2; //0x240
    cocos2d::CCLayerColor* m_scrollingLayer; //0x248
    int m_joystickConnected; //0x250
    bool m_containsBorder; //0x251
    bool m_noAction; //0x252
}

class ButtonSprite : cocos2d::CCSprite {
    static ButtonSprite* create(char const*) = 0x4fa10;
    static ButtonSprite* create(char const*, int, int, float, bool) = 0x4fa40;
    void updateBGImage(char const*) = 0x502d0;
    static ButtonSprite* create(char const*, float) = 0x4fa60;
    static ButtonSprite* create(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool) = 0x4fa90;
}

class FLAlertLayerProtocol {
    volatile virtual void FLAlert_Clicked(FLAlertLayer*, bool) {};
}
