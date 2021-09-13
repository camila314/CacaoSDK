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

class cocos2d::CCMouseDelegate {
    volatile void cocos2d::CCMouseDelegate::rightKeyDown() {};
    volatile void cocos2d::CCMouseDelegate::rightKeyUp() {};
    volatile void cocos2d::CCMouseDelegate::scrollWheel(float, float) {};
}

class cocos2d::CCKeyboardDelegate {
    volatile void cocos2d::CCKeyboardDelegate::keyDown(cocos2d::enumKeyCodes) {};
    volatile void cocos2d::CCKeyboardDelegate::keyUp(cocos2d::enumKeyCodes) {};

    volatile cocos2d::CCKeyboardDelegate::CCKeyboardDelegate() {};
}

class cocos2d::ui::Margin {
    volatile cocos2d::ui::Margin::Margin() {};
}

class cocos2d::CCRect {
    volatile cocos2d::CCRect::CCRect(float, float, float, float) {};
}

class cocos2d::CCSize {
    volatile cocos2d::CCSize::CCSize(float, float) {};
    volatile cocos2d::CCSize::CCSize() {};
}

class cocos2d::CCPoint {
    volatile cocos2d::CCPoint::CCPoint(float, float) {};
    volatile cocos2d::CCPoint::CCPoint() {};
}

class cocos2d::CCNode {
    virtual ~CCNode() = 0x1228d0;
    virtual void update(float) = 0x1241a0;
    virtual bool init() = 0x122910;
    virtual void setZOrder(int) = 0x1229a0;
    virtual void _setZOrder(int) = 0x122990;
    virtual int getZOrder() = 0x122980;
    virtual void setVertexZ(float) = 0x1229f0;
    virtual float getVertexZ() = 0x1229e0;
    virtual void setScaleX(float) = 0x122b10;
    virtual float getScaleX() = 0x122b00;
    virtual void setScaleY(float) = 0x122b40;
    virtual float getScaleY() = 0x122b30;
    virtual void setScale(float) = 0x122ac0;
    virtual float getScale() = 0x122ab0;
    virtual void setScale(float, float) = 0x122ae0;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x122b70;
    virtual cocos2d::CCPoint const& getPosition() = 0x122b60;
    virtual void setPosition(float, float) = 0x122ba0;
    virtual void getPosition(float*, float*) = 0x122b90;
    virtual void setPositionX(float) = 0x122c00;
    virtual float getPositionX() = 0x122be0;
    virtual void setPositionY(float) = 0x122c40;
    virtual float getPositionY() = 0x122bf0;
    virtual void setSkewX(float) = 0x122930;
    virtual float getSkewX() = 0x122920;
    virtual void setSkewY(float) = 0x122960;
    virtual float getSkewY() = 0x122950;
    virtual void setAnchorPoint(cocos2d::CCPoint const&) = 0x122d90;
    virtual cocos2d::CCPoint const& getAnchorPoint() = 0x122d80;
    virtual cocos2d::CCPoint const& getAnchorPointInPoints() = 0x122d70;
    virtual void setContentSize(cocos2d::CCSize const&) = 0x122e50;
    virtual cocos2d::CCSize const& getContentSize() const = 0x122e00;
    virtual cocos2d::CCSize getScaledContentSize() = 0x122e10;
    virtual void setVisible(bool) = 0x122d60;
    virtual bool isVisible() = 0x122d50;
    virtual void setRotation(float) = 0x122a10;
    virtual float getRotation() = 0x122a00;
    virtual void setRotationX(float) = 0x122a60;
    virtual float getRotationX() = 0x122a50;
    virtual void setRotationY(float) = 0x122a90;
    virtual float getRotationY() = 0x122a80;
    virtual void setOrderOfArrival(unsigned int) = 0x122f60;
    virtual unsigned int getOrderOfArrival() = 0x122f50;
    virtual void setGLServerState(cocos2d::ccGLServerState) = 0x122fa0;
    virtual cocos2d::ccGLServerState getGLServerState() = 0x122f90;
    virtual void ignoreAnchorPointForPosition(bool) = 0x122f00;
    virtual bool isIgnoreAnchorPointForPosition() = 0x122ef0;
    virtual void addChild(cocos2d::CCNode*) = 0x1233d0;
    virtual void addChild(cocos2d::CCNode*, int) = 0x1233b0;
    virtual void addChild(cocos2d::CCNode*, int, int) = 0x1232a0;
    virtual cocos2d::CCNode* getChildByTag(int) = 0x123220;
    virtual cocos2d::CCArray* getChildren() = 0x122c80;
    virtual unsigned int getChildrenCount() const = 0x122c90;
    virtual void setParent(cocos2d::CCNode*) = 0x122ee0;
    virtual cocos2d::CCNode* getParent() = 0x122ed0;
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
    virtual cocos2d::CCGridBase* getGrid() = 0x122d00;
    virtual void setGrid(cocos2d::CCGridBase*) = 0x122d10;
    virtual void* getUserData() = 0x122f30;
    virtual void setUserData(void*) = 0x122f40;
    virtual cocos2d::CCObject* getUserObject() = 0x122f80;
    virtual void setUserObject(cocos2d::CCObject*) = 0x122fb0;
    virtual cocos2d::CCGLProgram* getShaderProgram() = 0x122f70;
    virtual void setShaderProgram(cocos2d::CCGLProgram*) = 0x122ff0;
    virtual cocos2d::CCCamera* getCamera() = 0x122cb0;
    virtual bool isRunning() = 0x122ec0;
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
    virtual cocos2d::CCActionManager* getActionManager() = 0x123e50;
    virtual void setScheduler(cocos2d::CCScheduler*) = 0x123f20;
    virtual cocos2d::CCScheduler* getScheduler() = 0x123f70;
    virtual void updateTransform() = 0x1249d0;
    virtual const cocos2d::CCAffineTransform nodeToParentTransform() = 0x124210;
    virtual const cocos2d::CCAffineTransform parentToNodeTransform() = 0x1245d0;
    virtual cocos2d::CCAffineTransform nodeToWorldTransform() = 0x124670;
    virtual cocos2d::CCAffineTransform worldToNodeTransform() = 0x124710;
    virtual bool addComponent(cocos2d::CCComponent*) = 0x124a40;
    virtual bool removeComponent(char const*) = 0x124a60;
    virtual bool removeComponent(cocos2d::CCComponent*) = 0x124a80;
    virtual void removeAllComponents() = 0x124aa0;
    virtual void updateTweenAction(float, char const*) = 0x1249c0;

    CCNode() = 0x122550;
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

class cocos2d::CCObject {
    virtual ~CCObject() = 0x250d90;
    virtual bool isEqual(cocos2d::CCObject const*) = 0x250f20;
    virtual void acceptVisitor(cocos2d::CCDataVisitor&) = 0x250f30;
    virtual void update(float) = 0x32660;
    virtual void encodeWithCoder(DS_Dictionary*) = 0x250f70;
    virtual bool canEncode() = 0x250f90;
    virtual int getTag() const = 0x250f50;
    virtual void setTag(int) = 0x250f60;

    CCObject() = 0x250ca0;
}

class cocos2d::CCCopying {
    volatile cocos2d::CCObject* cocos2d::CCCopying::copyWithZone(cocos2d::CCZone*) {
        return 0;
    };
}
