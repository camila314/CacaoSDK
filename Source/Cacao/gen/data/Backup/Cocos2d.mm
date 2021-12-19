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



class cocos2d::CCNode {
    CCNode() = 0x122550;
    void _setZOrder(int) = 0x122990;
    void addChild(cocos2d::CCNode*) = 0x1233d0;
    void addChild(cocos2d::CCNode*, int) = 0x1233b0;
    void addChild(cocos2d::CCNode*, int, int) = 0x1232a0;
    void addComponent(cocos2d::CCComponent*) = 0x124a40;
    void cleanup() = 0x123100;
    void convertToNodeSpace(cocos2d::CCPoint const&) = 0x124750;
    void convertToWorldSpace(cocos2d::CCPoint const&) = 0x124790;
    static cocos2d::CCNode* create() = 0x1230a0;
    void draw() = 0x123840;
    void getActionByTag(int) = 0x123ee0;
    void getActionManager() = 0x123e50;
    void getAnchorPoint() = 0x122d80;
    void getAnchorPointInPoints() = 0x122d70;
    void getCamera() = 0x122cb0;
    void getChildByTag(int) = 0x123220;
    void getChildren() = 0x122c80;
    void getChildrenCount() const = 0x122c90;
    void getContentSize() const = 0x122e00;
    void getGLServerState() = 0x122f90;
    void getGrid() = 0x122d00;
    void getOrderOfArrival() = 0x122f50;
    void getParent() = 0x122ed0;
    void getPosition() = 0x122b60;
    void getPosition(float*, float*) = 0x122b90;
    void getPositionX() = 0x122be0;
    void getPositionY() = 0x122bf0;
    void getRotation() = 0x122a00;
    void getRotationX() = 0x122a50;
    void getRotationY() = 0x122a80;
    void getScale() = 0x122ab0;
    void getScaleX() = 0x122b00;
    void getScaleY() = 0x122b30;
    void getScaledContentSize() = 0x122e10;
    void getScheduler() = 0x123f70;
    void getShaderProgram() = 0x122f70;
    void getSkewX() = 0x122920;
    void getSkewY() = 0x122950;
    void getUserData() = 0x122f30;
    void getUserObject() = 0x122f80;
    void getVertexZ() = 0x1229e0;
    void getZOrder() = 0x122980;
    void ignoreAnchorPointForPosition(bool) = 0x122f00;
    bool init() = 0x122910;
    void isIgnoreAnchorPointForPosition() = 0x122ef0;
    void isRunning() = 0x122ec0;
    void isVisible() = 0x122d50;
    void nodeToParentTransform() = 0x124210;
    void nodeToWorldTransform() = 0x124670;
    void onEnter() = 0x123a90;
    void onEnterTransitionDidFinish() = 0x123b90;
    void onExit() = 0x123ca0;
    void onExitTransitionDidStart() = 0x123c00;
    void parentToNodeTransform() = 0x1245d0;
    void pauseSchedulerAndActions() = 0x123d60;
    void registerScriptHandler(int) = 0x123d90;
    void removeAllChildren() = 0x123600;
    void removeAllChildrenWithCleanup(bool) = 0x123620;
    void removeAllComponents() = 0x124aa0;
    void removeChild(cocos2d::CCNode*) = 0x123460;
    void removeChild(cocos2d::CCNode*, bool) = 0x123480;
    void removeChildByTag(int) = 0x1235a0;
    void removeChildByTag(int, bool) = 0x1235c0;
    void removeComponent(char const*) = 0x124a60;
    void removeComponent(cocos2d::CCComponent*) = 0x124a80;
    void removeFromParent() = 0x1233f0;
    void removeFromParentAndCleanup(bool) = 0x123410;
    void removeMeAndCleanup() = 0x123440;
    void reorderChild(cocos2d::CCNode*, int) = 0x123760;
    void resumeSchedulerAndActions() = 0x123b60;
    void runAction(cocos2d::CCAction*) = 0x123e60;
    void schedule(cocos2d::SEL_SCHEDULE) = 0x1240b0;
    void schedule(cocos2d::SEL_SCHEDULE, float) = 0x124120;
    void scheduleUpdate() = 0x123f80;
    void setActionManager(cocos2d::CCActionManager*) = 0x123e00;
    void setAnchorPoint(cocos2d::CCPoint const&) = 0x122d90;
    void setContentSize(cocos2d::CCSize const&) = 0x122e50;
    void setGLServerState(cocos2d::ccGLServerState) = 0x122fa0;
    void setGrid(cocos2d::CCGridBase*) = 0x122d10;
    void setOrderOfArrival(unsigned int) = 0x122f60;
    void setParent(cocos2d::CCNode*) = 0x122ee0;
    void setPosition(cocos2d::CCPoint const&) = 0x122b70;
    void setPosition(float, float) = 0x122ba0;
    void setPositionX(float) = 0x122c00;
    void setPositionY(float) = 0x122c40;
    void setRotation(float) = 0x122a10;
    void setRotationX(float) = 0x122a60;
    void setRotationY(float) = 0x122a90;
    void setScale(float) = 0x122ac0;
    void setScale(float, float) = 0x122ae0;
    void setScaleX(float) = 0x122b10;
    void setScaleY(float) = 0x122b40;
    void setScheduler(cocos2d::CCScheduler*) = 0x123f20;
    void setShaderProgram(cocos2d::CCGLProgram*) = 0x122ff0;
    void setSkewX(float) = 0x122930;
    void setSkewY(float) = 0x122960;
    void setUserData(void*) = 0x122f40;
    void setUserObject(cocos2d::CCObject*) = 0x122fb0;
    void setVertexZ(float) = 0x1229f0;
    void setVisible(bool) = 0x122d60;
    void setZOrder(int) = 0x1229a0;
    void sortAllChildren() = 0x1237b0;
    void stopActionByTag(int) = 0x123ec0;
    void stopAllActions() = 0x123190;
    void unregisterScriptHandler() = 0x123dc0;
    void unschedule(cocos2d::SEL_SCHEDULE) = 0x124180;
    void unscheduleAllSelectors() = 0x1231b0;
    void unscheduleUpdate() = 0x124060;
    void update(float) = 0x1241a0;
    void updateTransform() = 0x1249d0;
    void updateTweenAction(float, char const*) = 0x1249c0;
    void visit() = 0x123850;
    void worldToNodeTransform() = 0x124710;
    ~CCNode() = 0x122750;
}

class cocos2d::CCNodeRGBA {
    CCNodeRGBA() = 0x124b30;
    virtual ~CCNodeRGBA() = 0x124bb0;
    virtual void init() = 0x124bf0;
    virtual void getOpacity() = 0x124cd0;
    virtual void getDisplayedOpacity() = 0x124cf0;
    virtual void setOpacity(GLubyte) = 0x124d10;
    virtual void updateDisplayedOpacity(GLubyte) = 0x124e50;
    virtual void isCascadeOpacityEnabled() = 0x124fe0;
    virtual void setCascadeOpacityEnabled(bool) = 0x125000;
    virtual void getColor() = 0x125020;
    virtual void getDisplayedColor() = 0x125040;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x125060;
    virtual void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x1251e0;
    virtual void isCascadeColorEnabled() = 0x125320;
    virtual void setCascadeColorEnabled(bool) = 0x125340;
}


class cocos2d::CCSprite {
    virtual ~CCSprite() = 0x133430;
    virtual void init() = 0x132ef0;
    virtual void setVertexZ(float) = 0x134a80;
    virtual void setScaleX(float) = 0x134900;
    virtual void setScaleY(float) = 0x134980;
    virtual void setScale(float) = 0x134a00;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x134650;
    virtual void setSkewX(float) = 0x134820;
    virtual void setSkewY(float) = 0x134890;
    virtual void setAnchorPoint(cocos2d::CCPoint const&) = 0x134af0;
    virtual void setVisible(bool) = 0x134b70;
    virtual void setRotation(float) = 0x1346d0;
    virtual void setRotationX(float) = 0x134740;
    virtual void setRotationY(float) = 0x1347b0;
    virtual void ignoreAnchorPointForPosition(bool) = 0x134b60;
    virtual void addChild(cocos2d::CCNode*) = 0x134190;
    virtual void addChild(cocos2d::CCNode*, int) = 0x1341a0;
    virtual void addChild(cocos2d::CCNode*, int, int) = 0x1341b0;
    virtual void removeChild(cocos2d::CCNode*, bool) = 0x134300;
    virtual void removeAllChildrenWithCleanup(bool) = 0x134340;
    virtual void reorderChild(cocos2d::CCNode*, int) = 0x134270;
    virtual void sortAllChildren() = 0x1343f0;
    virtual void draw() = 0x134070;
    virtual void updateTransform() = 0x133b70;
    virtual void setOpacity(unsigned char) = 0x134da0;
    virtual void updateDisplayedOpacity(unsigned char) = 0x1354c0;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x134ff0;
    virtual void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x135370;
    virtual void setOpacityModifyRGB(bool) = 0x135200;
    virtual void isOpacityModifyRGB() = 0x135350;
    virtual void initWithTexture(cocos2d::CCTexture2D*) = 0x133110;
    virtual void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&) = 0x1330f0;
    virtual void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool) = 0x132f10;
    virtual void initWithSpriteFrame(cocos2d::CCSpriteFrame*) = 0x133270;
    virtual void initWithSpriteFrameName(char const*) = 0x1332c0;
    virtual void initWithFile(char const*) = 0x133180;
    virtual void initWithFile(char const*, cocos2d::CCRect const&) = 0x133210;
    virtual void setTexture(cocos2d::CCTexture2D*) = 0x135a90;
    virtual void getTexture() = 0x135c00;
    // virtual void setBlendFunc(cocos2d::_ccBlendFunc) = 0x50590;
    // virtual cocos2d::_ccBlendFunc getBlendFunc() = 0x505a0;
    virtual void setChildColor(cocos2d::_ccColor3B const&) = 0x135160;
    virtual void setChildOpacity(unsigned char) = 0x134f50;
    virtual void getBatchNode() = 0x135910;
    virtual void setBatchNode(cocos2d::CCSpriteBatchNode*) = 0x135920;
    virtual void refreshTextureRect() = 0x133520;
    virtual void setTextureRect(cocos2d::CCRect const&) = 0x133560;
    virtual void setTextureRect(cocos2d::CCRect const&, bool, cocos2d::CCSize const&) = 0x133580;
    virtual void setVertexRect(cocos2d::CCRect const&) = 0x1338f0;
    virtual void setDisplayFrame(cocos2d::CCSpriteFrame*) = 0x135610;
    virtual void isFrameDisplayed(cocos2d::CCSpriteFrame*) = 0x1356d0;
    virtual void displayFrame() = 0x135760;
    virtual void setDisplayFrameWithAnimationName(char const*, int) = 0x135680;
    // virtual void isDirty() = 0x505b0;
    // virtual void setDirty(bool) = 0x505c0;
    virtual void setTextureCoords(cocos2d::CCRect const&) = 0x133910;
    virtual void updateBlendFunc() = 0x135a20;
    virtual void setReorderChildDirtyRecursively() = 0x134550;
    virtual void setDirtyRecursively(bool) = 0x1345b0;

    CCSprite() = 0x133300;

    static cocos2d::CCSprite* create() = 0x132df0;
    static cocos2d::CCSprite* create(char const*) = 0x132a80;
}


class cocos2d::CCObject {
    CCObject() = 0x250ca0;
    void acceptVisitor(cocos2d::CCDataVisitor&) = 0x250f30;
    void autorelease() = 0x250ed0;
    void canEncode() = 0x250f90;
    void encodeWithCoder(DS_Dictionary*) = 0x250f70;
    void getTag() const = 0x250f50;
    void isEqual(cocos2d::CCObject const*) = 0x250f20;
    void release() = 0x250ea0;
    void retain() = 0x250ec0;
    void setTag(int) = 0x250f60;
    ~CCObject() = 0x250d90;
}

class cocos2d::CCCopying {
    volatile cocos2d::CCObject* cocos2d::CCCopying::copyWithZone(cocos2d::CCZone*) {
        // 2 people complimented my hair today i feel happy
        //
        // add 3 to that c:
        return 0;
    }
}

class cocos2d::CCMouseDelegate {
    volatile void cocos2d::CCMouseDelegate::rightKeyDown() {};
    volatile void cocos2d::CCMouseDelegate::rightKeyUp() {};
    volatile void cocos2d::CCMouseDelegate::scrollWheel(float, float) {};

    // volatile cocos2d::CCMouseDelegate::CCMouseDelegate() {};
}

class cocos2d::CCKeyboardDelegate {
    volatile void cocos2d::CCKeyboardDelegate::keyDown(cocos2d::enumKeyCodes) {};
    volatile void cocos2d::CCKeyboardDelegate::keyUp(cocos2d::enumKeyCodes) {};

    volatile cocos2d::CCKeyboardDelegate::CCKeyboardDelegate() {};
}

class cocos2d::CCMouseDelegate {

    volatile cocos2d::CCMouseDelegate::CCMouseDelegate() {};
}

class cocos2d::CCIMEDelegate {
    virtual ~CCIMEDelegate() = 0x277670;
    virtual bool attachWithIME() = 0x2776a0;
    virtual bool detachWithIME() = 0x277880;
    // virtual bool canAttachWithIME() = 0x5ef30;
    // virtual bool didAttachWithIME() = 0x5ef40;
    // virtual bool canDetachWithIME() = 0x5ef50;
    // virtual bool didDetachWithIME() = 0x5ef60;
    // virtual void insertText(char const*, int) = 0x5ef70;
    // virtual void deleteBackward() = 0x5ef80;
    // virtual void getContentText() = 0x5ef90;
    // virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x126e80;
    // virtual void keyboardDidShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5efa0;
    // virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x126e90;
    // virtual void keyboardDidHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5efb0;

    CCIMEDelegate() = 0x277310;
}

class cocos2d::CCDrawNode {
    void clear() = 0x379e80;
    static cocos2d::CCDrawNode* create() = 0x378d00;
    void drawPolygon(cocos2d::CCPoint*, unsigned int, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&) = 0x3797f0;
    void drawSegment(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&) = 0x3792d0;
    void getBlendFunc() const = 0x379ea0;
    bool init() = 0x378e00;
    void setBlendFunc(cocos2d::_ccBlendFunc const&) = 0x379eb0;
    void draw() = 0x379020;
    virtual ~CCDrawNode() = 0x378cc0;
}

class cocos2d::CCMenu {
    void alignItemsHorizontallyWithPadding(float) = 0x4393e0;
    void alignItemsVerticallyWithPadding(float) = 0x439190;
    static cocos2d::CCMenu* create() = 0x438720;
    static cocos2d::CCMenu* createWithArray(cocos2d::CCArray*) = 0x4387e0;
    static cocos2d::CCMenu* createWithItem(cocos2d::CCMenuItem*) = 0x438b80;
}


class cocos2d::CCMenuItem {
    virtual ~CCMenuItem() = 0x1fb8e0;
    virtual void activate() = 0x1fba70;
    virtual void selected() = 0x1fb9e0;
    virtual void unselected() = 0x1fb9f0;
    virtual void registerScriptTapHandler(int) = 0x1fba00;
    virtual void unregisterScriptTapHandler() = 0x1fba30;
    virtual void isEnabled() = 0x1fbaf0;
    virtual void setEnabled(bool) = 0x1fbae0;
    virtual void isSelected() = 0x1fbb50;
}

class cocos2d::CCMenuItemSprite {
    // virtual ~CCMenuItemSprite() = 0x1feab0;
    virtual void selected() = 0x1fd3f0;
    virtual void unselected() = 0x1fd470;
    virtual void setEnabled(bool) = 0x1fd4e0;
    virtual void getNormalImage() = 0x1fcee0;
    virtual void setNormalImage(cocos2d::CCNode*) = 0x1fcef0;
    virtual void getSelectedImage() = 0x1fcfc0;
    virtual void setSelectedImage(cocos2d::CCNode*) = 0x1fcfd0;
    virtual void getDisabledImage() = 0x1fd070;
    virtual void setDisabledImage(cocos2d::CCNode*) = 0x1fd080;
    virtual void updateImagesVisibility() = 0x1fd510;

    static void create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*) = 0x1fd120;
    static void create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x1fd140;
    static void create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x1fd2d0;
}

class cocos2d::CCMenuItemImage {
    // virtual ~CCMenuItemImage() = 0x1febb0;
    virtual void init() = 0x1fd750;
}

class cocos2d::CCMenuItemLabel {
    virtual ~CCMenuItemLabel() = 0x1fc0d0;
    virtual void activate() = 0x1fc240;
    virtual void selected() = 0x1fc2e0;
    virtual void unselected() = 0x1fc380;
    virtual void setEnabled(bool) = 0x1fc3f0;
    virtual void getDisabledColor() = 0x1fbb80;
    virtual void setDisabledColor(cocos2d::_ccColor3B const&) = 0x1fbb90;
    virtual void getLabel() = 0x1fbbb0;
    virtual void setLabel(cocos2d::CCNode*) = 0x1fbbc0;
}

class cocos2d::CCKeyboardDispatcher {
    void dispatchKeyboardMSG(cocos2d::enumKeyCodes, bool) = 0xe8190;
}

class cocos2d::CCLabelBMFont {
    static cocos2d::CCLabelBMFont* create(char const*, char const*) = 0x347660;
    void limitLabelWidth(float, float, float) = 0x34a6e0;
    void setScale(float) = 0x34a5d0;
    void setString(char const*, bool) = 0x3489e0;
    void setAnchorPoint(cocos2d::CCPoint const&) = 0x349440;
}

class cocos2d::CCLabelTTF {
    void updateTexture() = 0x1fadc0;
}


class cocos2d::CCActionTween {
    static cocos2d::CCActionTween* create(float, char const*, float, float) = 0x447590;
}

class cocos2d::CCAnimate {
    static cocos2d::CCAnimate* create(cocos2d::CCAnimation*) = 0x1f8fc0;
}

class cocos2d::CCAnimation {
    static void createWithSpriteFrames(cocos2d::CCArray*, float) = 0x140df0;
}

class cocos2d::CCApplication {
    void getCurrentLanguage() = 0x1a3f40;
    void getTargetPlatform() = 0x1a3f20;
    void openURL(char const*) = 0x1a4550;
    void setAnimationInterval(double) = 0x1a3ee0;
}

class cocos2d::CCApplicationProtocol {
    bool gameDidSave() = 0x1a45f0;
}

class cocos2d::CCArray {
    void addObject(cocos2d::CCObject*) = 0x419f90;
    void addObjectNew(cocos2d::CCObject*) = 0x41a450;
    void addObjectsFromArray(cocos2d::CCArray*) = 0x41a2d0;
    void containsObject(cocos2d::CCObject*) const = 0x41a3e0;
    void count() const = 0x41a2f0;
    static cocos2d::CCArray* create() = 0x419cb0;
    static void createWithObject(cocos2d::CCObject*) = 0x419d50;
    void fastRemoveObject(cocos2d::CCObject*) = 0x41a520;
    void fastRemoveObjectAtIndex(unsigned int) = 0x41a500;
    void fastRemoveObjectAtIndexNew(unsigned int) = 0x41a510;
    void lastObject() = 0x41a360;
    void objectAtIndex(unsigned int) = 0x41a340;
    void removeAllObjects() = 0x41a4f0;
    void removeLastObject(bool) = 0x41a470;
    void removeObject(cocos2d::CCObject*, bool) = 0x41a490;
    void removeObjectAtIndex(unsigned int, bool) = 0x41a4b0;
    void stringAtIndex(unsigned int) = 0x41a320;
}

class cocos2d::CCBezierTo {
    static cocos2d::CCBezierTo* create(float, cocos2d::_ccBezierConfig const&) = 0x1f6c10;
}

class cocos2d::CCCallFunc {
    static cocos2d::CCCallFunc* create(int) = 0x454d90;
}

class cocos2d::CCClippingNode {
    static cocos2d::CCClippingNode* create() = 0x4192a0;
    static cocos2d::CCClippingNode* create(cocos2d::CCNode*) = 0x419330;
    void getAlphaThreshold() const = 0x419a10;
    void getStencil() const = 0x4199c0;
    void isInverted() const = 0x419a30;
    void onEnter() = 0x419470;
    void onEnterTransitionDidFinish() = 0x4194a0;
    void onExit() = 0x419500;
    void onExitTransitionDidStart() = 0x4194d0;
    void setAlphaThreshold(float) = 0x419a20;
    void setInverted(bool) = 0x419a40;
    void setStencil(cocos2d::CCNode*) = 0x4199d0;
    void visit() = 0x419530;
}

class cocos2d::CCDelayTime {
    static cocos2d::CCDelayTime* create(float) = 0x1f4380;
}

class cocos2d::CCDictionary {
    void allKeys() = 0x190450;
    void count() = 0x190430;
    static cocos2d::CCDictionary* create() = 0x192650;
    void objectForKey(long) = 0x190bb0;
<<<<<<< HEAD
    void objectForKey(gd::string const&) = 0x190870;
    void removeAllObjects() = 0x190220;
    void removeObjectForKey(long) = 0x1921d0;
    void setObject(cocos2d::CCObject*, long) = 0x191790;
    void setObject(cocos2d::CCObject*, gd::string const&) = 0x190dc0;
    void valueForKey(long) = 0x190cf0;
    void valueForKey(gd::string const&) = 0x1907a0;
=======
    void objectForKey(std::string const&) = 0x190870;
    void removeAllObjects() = 0x190220;
    void removeObjectForKey(long) = 0x1921d0;
    void setObject(cocos2d::CCObject*, long) = 0x191790;
    void setObject(cocos2d::CCObject*, std::string const&) = 0x190dc0;
    void valueForKey(long) = 0x190cf0;
    void valueForKey(std::string const&) = 0x1907a0;
>>>>>>> 92a4394a2eaaf820894c9dd32d878543e8d6f5de
}

class cocos2d::CCDirector {
    void getTouchDispatcher() = 0x24afa0;
    void getWinSize() = 0x24a0f0;
    void pushScene(cocos2d::CCScene*) = 0x24a620;
    void replaceScene(cocos2d::CCScene*) = 0x24a6d0;
    void resetSmoothFixCounter() = 0x249bc0;
    static void sharedDirector() = 0x248cb0;
    void calculateDeltaTime() = 0x2497a0;
    void calculateMPF() = 0x19eac0;
    void convertToGL(cocos2d::CCPoint const&) = 0x24a210;
    void drawScene() = 0x249690;
    void setNextScene() = 0x2498d0;
    void showStats() = 0x2499e0;
    void updateContentScale(cocos2d::TextureQuality) = 0x249ff0;
}



class cocos2d::CCEaseElasticOut {
    static cocos2d::CCEaseElasticOut* create(cocos2d::CCActionInterval*, float) = 0x2a3080;
}

class cocos2d::CCEaseIn {
    static cocos2d::CCEaseIn* create(cocos2d::CCActionInterval*, float) = 0x2a1960;
}

class cocos2d::CCEaseInOut {
    static cocos2d::CCEaseInOut* create(cocos2d::CCActionInterval*, float) = 0x2a1d80;
}

class cocos2d::CCEaseOut {
    static cocos2d::CCEaseOut* create(cocos2d::CCActionInterval*, float) = 0x2a1b70;
}

class cocos2d::CCFadeOut {
    static cocos2d::CCFadeOut* create(float) = 0x1f7d80;
}

class cocos2d::CCFadeTo {
    static cocos2d::CCFadeTo* create(float, unsigned char) = 0x1f7ff0;
}

class cocos2d::CCHide {
    static cocos2d::CCHide* create() = 0x4543e0;
}

class cocos2d::CCImage {
    CCImage() = 0x24fa00;
    virtual ~CCImage() = 0x24fa80;
    void initWithImageData(void*, int, cocos2d::CCImage::EImageFormat, int, int, int) = 0x24fcb0;
}


class cocos2d::CCMotionStreak {
    void reset() = 0x2ee190;
    void resumeStroke() = 0x2edb30;
    void stopStroke() = 0x2edb20;
}


class cocos2d::CCMoveBy {
    static cocos2d::CCMoveBy* create(float, cocos2d::CCPoint const&) = 0x1f50e0;
}

class cocos2d::CCMoveTo {
    static cocos2d::CCMoveTo* create(float, cocos2d::CCPoint const&) = 0x1f54d0;
}

class cocos2d::CCParticleSystem {
    void resetSystem() = 0x46bd50;
    void resumeSystem() = 0x46bd40;
    void stopSystem() = 0x46bd10;
}

class cocos2d::CCParticleSystemQuad {
    static cocos2d::CCParticleSystemQuad* create(char const*) = 0x36b000;
}

class cocos2d::CCPoolManager {
    void pop() = 0x214620;
    static cocos2d::CCPoolManager* sharedPoolManager() = 0x2142c0;
}

class cocos2d::CCRenderTexture {
    void begin() = 0x35ce10;
    void end() = 0x35d2c0;
    static cocos2d::CCRenderTexture* create(int, int, cocos2d::CCTexture2DPixelFormat) = 0x35c720;
    void newCCImage(bool) = 0x35d7d0;
}

class cocos2d::CCRepeatForever {
    static cocos2d::CCRepeatForever* create(cocos2d::CCActionInterval*) = 0x1f3920;
}

class cocos2d::CCRotateBy {
    static cocos2d::CCRotateBy* create(float, float) = 0x1f4c50;
}

class cocos2d::CCScaleTo {
    static cocos2d::CCScaleTo* create(float, float) = 0x1f6ff0;
    static cocos2d::CCScaleTo* create(float, float, float) = 0x1f70f0;
}

class cocos2d::CCScene {
    static cocos2d::CCScene* create() = 0x13c140;
    void getHighestChildZ() = 0x13c200;
}

class cocos2d::CCScheduler {
    void scheduleSelector(cocos2d::SEL_SCHEDULE, cocos2d::CCObject*, float, unsigned int, float, bool) = 0x242b20;
    void scheduleUpdateForTarget(cocos2d::CCObject*, int, bool) = 0x2438d0;
    void unscheduleAllForTarget(cocos2d::CCObject*) = 0x243e40;
}

class cocos2d::CCSequence {
}


class cocos2d::CCSpriteBatchNode {
    static cocos2d::CCSpriteBatchNode* create(char const*, unsigned int) = 0xbb540;
    static void createWithTexture(cocos2d::CCTexture2D*, unsigned int) = 0xbb310;
    void getUsedAtlasCapacity() = 0xbc6b0;
    void increaseAtlasCapacity(unsigned int) = 0xbc670;
}

class cocos2d::CCSpriteFrameCache {
    void addSpriteFramesWithFile(char const*) = 0x199a10;
    static cocos2d::CCSpriteFrameCache* sharedSpriteFrameCache() = 0x198970;
    void spriteFrameByName(char const*) = 0x19a7e0;
}

class cocos2d::CCString {
    virtual ~CCString() = 0x44c590;
    virtual void isEqual(cocos2d::CCObject const*) = 0x44c8f0;
    virtual void acceptVisitor(cocos2d::CCDataVisitor&) = 0x44ccb0;
    virtual cocos2d::CCObject* copyWithZone(cocos2d::CCZone*) = 0x44c870;
<<<<<<< HEAD
    CCString(gd::string const&) = 0x44c310;
=======
    CCString(std::string const&) = 0x44c310;
>>>>>>> 92a4394a2eaaf820894c9dd32d878543e8d6f5de
    void boolValue() const = 0x44c810;
    void doubleValue() const = 0x44c7f0;
    void floatValue() const = 0x44c7d0;
    void getCString() const = 0x44c470;
    void intValue() const = 0x44c780;
}

class cocos2d::CCTexture2D {
    ~CCTexture2D() = 0x246350;
    CCTexture2D() = 0x246280;
    void getContentSize() = 0x246460;
    void getMaxS() = 0x2464e0;
    void getMaxT() = 0x246500;
    void getName() = 0x246450;
    void getPixelFormat() = 0x246420;
    void getPixelsHigh() = 0x246440;
    void getPixelsWide() = 0x246430;
    void getShaderProgram() = 0x246520;
    void initPremultipliedATextureWithImage(cocos2d::CCImage*, unsigned int, unsigned int) = 0x2469a0;
    void initWithData(void const*, cocos2d::CCTexture2DPixelFormat, unsigned int, unsigned int, cocos2d::CCSize const&) = 0x2465d0;
    void setAliasTexParameters() = 0x247a20;
    void setAntiAliasTexParameters() = 0x247a80;
    void setMaxS(float) = 0x2464f0;
    void setMaxT(float) = 0x246510;
    void setShaderProgram(cocos2d::CCGLProgram*) = 0x246530;
    void initWithImage(cocos2d::CCImage*) = 0x246940;
    void setTexParameters(cocos2d::_ccTexParams*) = 0x247980;
}

class cocos2d::CCTextureCache {
    void addImage(char const*, bool) = 0x358120;
    static cocos2d::CCTextureCache* sharedTextureCache() = 0x356e00;
}

class cocos2d::CCTintTo {
    static cocos2d::CCTintTo* create(float, unsigned char, unsigned char, unsigned char) = 0x1f82a0;
}

class cocos2d::CCTouch {
    void getDelta() const = 0x38340;
    void getLocationInView() const = 0x38250;
}

class cocos2d::CCTouchDispatcher {
    void decrementForcePrio(int) = 0x280f70;
    void incrementForcePrio(int) = 0x280f60;
}

class cocos2d::CCTransitionFade {
    static cocos2d::CCTransitionFade* create(float, cocos2d::CCScene*) = 0x8ea30;
}

class cocos2d::ZipUtils {
<<<<<<< HEAD
    void compressString(gd::string, bool, int) = 0xe9a50;
    void decompressString(gd::string, bool, int) = 0xea380;
=======
    void compressString(std::string, bool, int) = 0xe9a50;
    void decompressString(std::string, bool, int) = 0xea380;
>>>>>>> 92a4394a2eaaf820894c9dd32d878543e8d6f5de
}

class cocos2d::extension::CCControlColourPicker {
    void setColorValue(cocos2d::_ccColor3B const&) = 0x1aac10;
}

class cocos2d::extension::CCControlUtils {
    static cocos2d::extension::HSV HSVfromRGB(cocos2d::extension::RGBA) = 0x1e6750;
    static cocos2d::extension::RGBA RGBfromHSV(cocos2d::extension::HSV) = 0x1e6850;
}

class cocos2d::extension::CCScale9Sprite {
    CCScale9Sprite() = 0x211330;
    static cocos2d::extension::CCScale9Sprite* create(char const*) = 0x2130d0;
    static cocos2d::extension::CCScale9Sprite* create(char const*, cocos2d::CCRect) = 0x212ef0;
    virtual ~CCScale9Sprite() = 0x211590;
    virtual bool init() = 0x2115d0;
    virtual void setContentSize(cocos2d::CCSize const&) = 0x2127c0;
    virtual void visit() = 0x213bf0;
    virtual void getOpacity() = 0x213f30;
    virtual void setOpacity(unsigned char) = 0x213dd0;
    virtual void updateDisplayedOpacity(unsigned char) = 0x2139b0;
    virtual void getColor() = 0x213db0;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x213c20;
    virtual void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x213a20;
    virtual void setOpacityModifyRGB(bool) = 0x213830;
    virtual void isOpacityModifyRGB() = 0x213990;
    virtual void getPreferredSize() = 0x213620;
    virtual void setPreferredSize(cocos2d::CCSize) = 0x2135f0;
    virtual void getCapInsets() = 0x2136e0;
    virtual void setCapInsets(cocos2d::CCRect) = 0x213640;
    virtual void getInsetLeft() = 0x213b30;
    virtual void setInsetLeft(float) = 0x213b70;
    virtual void getInsetTop() = 0x213b40;
    virtual void setInsetTop(float) = 0x213b90;
    virtual void getInsetRight() = 0x213b50;
    virtual void setInsetRight(float) = 0x213bb0;
    virtual void getInsetBottom() = 0x213b60;
    virtual void setInsetBottom(float) = 0x213bd0;
    virtual void initWithBatchNode(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect) = 0x211690;
    virtual void initWithBatchNode(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, cocos2d::CCRect) = 0x211630;
    virtual void initWithFile(char const*, cocos2d::CCRect, cocos2d::CCRect) = 0x212d50;
    virtual void initWithFile(char const*, cocos2d::CCRect) = 0x212e80;
    virtual void initWithFile(cocos2d::CCRect, char const*) = 0x212f80;
    virtual void initWithFile(char const*) = 0x213080;
    virtual void initWithSpriteFrame(cocos2d::CCSpriteFrame*, cocos2d::CCRect) = 0x213140;
    virtual void initWithSpriteFrame(cocos2d::CCSpriteFrame*) = 0x213250;
    virtual void initWithSpriteFrameName(char const*, cocos2d::CCRect) = 0x213310;
    virtual void initWithSpriteFrameName(char const*) = 0x213410;
    virtual void updateWithBatchNode(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect) = 0x211730;
    virtual void setSpriteFrame(cocos2d::CCSpriteFrame*) = 0x213a90;
}

class cocos2d::extension::CCScrollView {
    CCScrollView() = 0x214800;
    virtual ~CCScrollView() = 0x214c30;
    virtual bool init() = 0x214fb0;
    virtual void setContentSize(cocos2d::CCSize const&) = 0x215eb0;
    virtual void getContentSize() const = 0x215e90;
    virtual void addChild(cocos2d::CCNode*) = 0x216160;
    virtual void addChild(cocos2d::CCNode*, int) = 0x216120;
    virtual void addChild(cocos2d::CCNode*, int, int) = 0x216080;
    virtual void visit() = 0x2164a0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x216620;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x216890;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x216c70;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x216d30;
    virtual void registerWithTouchDispatcher() = 0x214ff0;
    virtual void setTouchEnabled(bool) = 0x215250;
}

