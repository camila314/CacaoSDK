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
    void objectForKey(std::string const&) = 0x190870;
    void removeAllObjects() = 0x190220;
    void removeObjectForKey(long) = 0x1921d0;
    void setObject(cocos2d::CCObject*, long) = 0x191790;
    void setObject(cocos2d::CCObject*, std::string const&) = 0x190dc0;
    void valueForKey(long) = 0x190cf0;
    void valueForKey(std::string const&) = 0x1907a0;
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
    CCString(std::string const&) = 0x44c310;
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

// class cocos2d::ZipUtils {
//     void compressString(std::string, bool, int) = 0xe9a50;
//     void decompressString(std::string, bool, int) = 0xea380;
// }

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
