
class cocos2d::CCBezierBy {
    virtual ~CCBezierBy() = 0x1f9fe0;
    virtual void update(float) = 0x1f6960;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f67a0;
    virtual void reverse() = 0x1f6b40;
}


class cocos2d::CCDirector {
    virtual ~CCDirector() = 0x2493a0;
    virtual bool init() = 0x248df0;
    virtual void getClassTypeInfo() = 0x24b280;
    virtual void getScheduler() = 0x24af00;
    virtual void setScheduler(cocos2d::CCScheduler*) = 0x24aec0;
    virtual void getActionManager() = 0x24af50;
    virtual void setActionManager(cocos2d::CCActionManager*) = 0x24af10;
    virtual void getTouchDispatcher() = 0x24afa0;
    virtual void setTouchDispatcher(cocos2d::CCTouchDispatcher*) = 0x24af60;
    virtual void getKeypadDispatcher() = 0x24b090;
    virtual void setKeypadDispatcher(cocos2d::CCKeypadDispatcher*) = 0x24b050;
    virtual void getKeyboardDispatcher() = 0x24aff0;
    virtual void setKeyboardDispatcher(cocos2d::CCKeyboardDispatcher*) = 0x24afb0;
    virtual void getMouseDispatcher() = 0x24b040;
    virtual void setMouseDispatcher(cocos2d::CCMouseDispatcher*) = 0x24b000;
    virtual void getAccelerometer() = 0x24b0e0;
    virtual void setAccelerometer(cocos2d::CCAccelerometer*) = 0x24b0a0;
    virtual void getDeltaTime() = 0x249bd0;
    virtual void getSceneDelegate() const = 0x24b320;
    virtual void setSceneDelegate(cocos2d::CCSceneDelegate*) = 0x24b330;

    void getScreenBottom() = 0x24b210;
    void getScreenLeft() = 0x24b220;
    void getScreenRight() = 0x24b230;
    void getScreenScaleFactorH() = 0x24b1e0;
    void getScreenScaleFactorW() = 0x24b1f0;
    void getScreenTop() = 0x24b200;
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

class cocos2d::CCGridBase {
    virtual ~CCGridBase() = 0x287e30;
    virtual void blit() = 0x2880e0;
    virtual void reuse() = 0x2880f0;
    virtual void calculateVertexPoints() = 0x288100;
}

class cocos2d::CCLabelTTF {
    virtual ~CCLabelTTF() = 0x1fa620;
    virtual bool init() = 0x1fac60;
    virtual void setString(char const*) = 0x1fad70;
    virtual void getString() = 0x1faf70;
}

class cocos2d::CCProfiler {
    virtual ~CCProfiler() = 0x28a2e0;
}

class cocos2d::CCRipple3D {
    virtual ~CCRipple3D() = 0x129bc0;
    virtual void update(float) = 0x1286c0;
}

class cocos2d::CCRotateBy {
    virtual ~CCRotateBy() = 0x1f9e20;
    virtual void update(float) = 0x1f4f90;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f4f40;
    virtual void reverse() = 0x1f5000;
}

class cocos2d::CCRotateTo {
    virtual ~CCRotateTo() = 0x1f9de0;
    virtual void update(float) = 0x1f4be0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f4aa0;
    virtual void initWithDuration(float, float, float) = 0x1f4980;
}

class cocos2d::CCStopGrid {
    virtual ~CCStopGrid() = 0xef140;
    virtual void startWithTarget(cocos2d::CCNode*) = 0xeeee0;
}

class cocos2d::CCTMXLayer {
    virtual ~CCTMXLayer() = 0x120ce0;
    virtual void addChild(cocos2d::CCNode*, int, int) = 0x1222b0;
    virtual void removeChild(cocos2d::CCNode*, bool) = 0x1222c0;
    virtual void getTileSet() = 0x120d20;
    virtual void setTileSet(cocos2d::CCTMXTilesetInfo*) = 0x120d30;
    virtual void getProperties() = 0x1224a0;
    virtual void setProperties(cocos2d::CCDictionary*) = 0x1224b0;
}

class cocos2d::CCAnimation {
    virtual ~CCAnimation() = 0x141220;
    virtual void getDuration() = 0x141460;
}

class cocos2d::CCAtlasNode {
    virtual ~CCAtlasNode() = 0x1a4a30;
    virtual void draw() = 0x1a4f70;
    virtual void setOpacity(unsigned char) = 0x1a51c0;
    virtual void getColor() = 0x1a5060;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x1a50b0;
    virtual void setOpacityModifyRGB(bool) = 0x1a5240;
    virtual void isOpacityModifyRGB() = 0x1a52f0;
    virtual void getTextureAtlas() = 0x1a54a0;
    virtual void setTextureAtlas(cocos2d::CCTextureAtlas*) = 0x1a5460;
    virtual void getBlendFunc() = 0x1a5320;
    virtual void setBlendFunc(cocos2d::_ccBlendFunc) = 0x1a5340;
    virtual void getQuadsToDraw() = 0x1a54b0;
    virtual void setQuadsToDraw(unsigned int) = 0x1a54c0;
    virtual void updateAtlasValues() = 0x1a4f60;
    virtual void getTexture() = 0x1a5430;
    virtual void setTexture(cocos2d::CCTexture2D*) = 0x1a5360;
}

class cocos2d::CCComponent {
    virtual ~CCComponent() = 0x5a420;
    virtual void update(float) = 0x5a510;
    virtual bool init() = 0x5a4e0;
    virtual void onEnter() = 0x5a4f0;
    virtual void onExit() = 0x5a500;
    virtual void serialize(void*) = 0x5a520;
    virtual void isEnabled() const = 0x5a600;
    virtual void setEnabled(bool) = 0x5a610;
}

class cocos2d::CCDelayTime {
    virtual ~CCDelayTime() = 0x1fa260;
    virtual void update(float) = 0x1f8af0;
    virtual void reverse() = 0x1f8b00;
}

class cocos2d::CCEaseInOut {
    virtual ~CCEaseInOut() = 0x2a4880;
    virtual void update(float) = 0x2a1f30;
    virtual void reverse() = 0x2a1fa0;
}

class cocos2d::CCFileUtils {
    virtual ~CCFileUtils() = 0x23efd0;
    virtual void purgeCachedEntries() = 0x23f100;
    virtual void getFileData(char const*, char const*, unsigned long*) = 0x23f140;
    virtual void getFileDataFromZip(char const*, char const*, unsigned long*) = 0x23f2e0;
    virtual void fullPathForFilename(char const*, bool) = 0x23f940;
    virtual void removeFullPath(char const*) = 0x240710;
    virtual void loadFilenameLookupDictionaryFromFile(char const*) = 0x2416f0;
    virtual void setFilenameLookupDictionary(cocos2d::CCDictionary*) = 0x241680;
    virtual void fullPathFromRelativeFile(char const*, char const*) = 0x2408c0;
    virtual void setSearchResolutionsOrder(gd::vector<gd::string> const&) = 0x240ac0;
    virtual void addSearchResolutionsOrder(char const*) = 0x240d30;
    virtual void getSearchResolutionsOrder() = 0x240df0;
    virtual void setSearchPaths(gd::vector<gd::string> const&) = 0x240e10;
    virtual void addSearchPath(char const*) = 0x241180;
    virtual void removeSearchPath(char const*) = 0x241390;
    virtual void getSearchPaths() = 0x240e00;
    virtual void getWritablePath2() = 0x241a90;
    virtual void isAbsolutePath(gd::string const&) = 0x2419c0;
    virtual void setPopupNotify(bool) = 0x2419d0;
    virtual void isPopupNotify() = 0x2419e0;
    virtual bool init() = 0x23f010;
    virtual void getNewFilename(char const*) = 0x23f3f0;
    virtual void shouldUseHD() = 0x23f4e0;
    virtual void addSuffix(gd::string, gd::string) = 0x23f510;
    virtual void getPathForFilename(gd::string const&, gd::string const&, gd::string const&) = 0x23f650;
    virtual void getFullPathForDirectoryAndFilename(gd::string const&, gd::string const&) = 0x241900;
    virtual void createCCDictionaryWithContentsOfFile(gd::string const&) = 0x23ec30;
    virtual void writeToFile(cocos2d::CCDictionary*, gd::string const&) = 0x23ec40;
    virtual void createCCArrayWithContentsOfFile(gd::string const&) = 0x23ec50;
}

class cocos2d::CCGLProgram {
    virtual ~CCGLProgram() = 0x231950;
}

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

class cocos2d::CCReuseGrid {
    virtual ~CCReuseGrid() = 0xef180;
    virtual void startWithTarget(cocos2d::CCNode*) = 0xef010;
}

class cocos2d::CCScheduler {
    virtual ~CCScheduler() = 0x242910;
    virtual void update(float) = 0x2446d0;
}

class cocos2d::CCSplitCols {
    virtual ~CCSplitCols() = 0x45ead0;
    virtual void update(float) = 0x45e790;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x45e750;
    virtual void initWithDuration(float, unsigned int) = 0x45e5d0;
}

class cocos2d::CCSplitRows {
    virtual ~CCSplitRows() = 0x45ea90;
    virtual void update(float) = 0x45e3e0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x45e3a0;
    virtual void initWithDuration(float, unsigned int) = 0x45e220;
}

class cocos2d::CCTexture2D {
    virtual ~CCTexture2D() = 0x246350;
    virtual void getPixelFormat() = 0x246420;
    virtual void getPixelsWide() = 0x246430;
    virtual void getPixelsHigh() = 0x246440;
    virtual void getName() = 0x246450;
    virtual void getMaxS() = 0x2464e0;
    virtual void setMaxS(float) = 0x2464f0;
    virtual void getMaxT() = 0x246500;
    virtual void setMaxT(float) = 0x246510;
    virtual void getContentSize() = 0x246460;
    virtual void getShaderProgram() = 0x246520;
    virtual void setShaderProgram(cocos2d::CCGLProgram*) = 0x246530;

    CCTexture2D() = 0x246280;
    void initPremultipliedATextureWithImage(cocos2d::CCImage*, unsigned int, unsigned int) = 0x2469a0;
    void initWithData(void const*, cocos2d::CCTexture2DPixelFormat, unsigned int, unsigned int, cocos2d::CCSize const&) = 0x2465d0;
    void setAliasTexParameters() = 0x247a20;
    void setAntiAliasTexParameters() = 0x247a80;
    void initWithImage(cocos2d::CCImage*) = 0x246940;
    void setTexParameters(cocos2d::_ccTexParams*) = 0x247980;
}

class cocos2d::CCActionEase {
    virtual ~CCActionEase() = 0x2a14d0;
    virtual void update(float) = 0x2a15e0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x2a1580;
    virtual void stop() = 0x2a15b0;
    virtual void reverse() = 0x2a1600;
    virtual void getInnerAction() = 0x2a1620;
}

class cocos2d::CCDictionary {
    virtual ~CCDictionary() = 0x190390;
    virtual void acceptVisitor(cocos2d::CCDataVisitor&) = 0x192790;
}

class cocos2d::CCEaseBackIn {
    virtual ~CCEaseBackIn() = 0x2a52d0;
    virtual void update(float) = 0x2a42a0;
    virtual void reverse() = 0x2a42d0;
}

class cocos2d::CCEaseBounce {
    virtual ~CCEaseBounce() = 0x2a5010;
    virtual void reverse() = 0x2a3890;
}

class cocos2d::CCEaseSineIn {
    virtual ~CCEaseSineIn() = 0x2a4b40;
    virtual void update(float) = 0x2a2780;
    virtual void reverse() = 0x2a27c0;
}

class cocos2d::CCGridAction {
    virtual ~CCGridAction() = 0xef070;
    virtual void startWithTarget(cocos2d::CCNode*) = 0xee0d0;
    virtual void reverse() = 0xee1a0;
    virtual void initWithDuration(float, cocos2d::CCSize const&) = 0xee0a0;
    virtual void getGrid() = 0xee190;
}

class cocos2d::CCLabelAtlas {
    virtual ~CCLabelAtlas() = 0x43d950;
    virtual void updateAtlasValues() = 0x43d590;
    virtual void setString(char const*) = 0x43d840;
    virtual void getString() = 0x43d930;
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

class cocos2d::CCPageTurn3D {
    virtual ~CCPageTurn3D() = 0x194350;
    virtual void update(float) = 0x194130;
}

class cocos2d::CCPointArray {
    virtual ~CCPointArray() = 0x167090;
}

class cocos2d::CCProgressTo {
    virtual ~CCProgressTo() = 0x23d680;
    virtual void update(float) = 0x23d380;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x23d340;
}

class cocos2d::CCRemoveSelf {
    virtual ~CCRemoveSelf() = 0x455c90;
    virtual void update(float) = 0x454770;
    virtual void reverse() = 0x454790;
}

class cocos2d::CCTMXMapInfo {
    virtual ~CCTMXMapInfo() = 0x283600;
    virtual void getLayers() = 0x283640;
    virtual void setLayers(cocos2d::CCArray*) = 0x283650;
    virtual void getTilesets() = 0x283690;
    virtual void setTilesets(cocos2d::CCArray*) = 0x2836a0;
    virtual void getObjectGroups() = 0x2836e0;
    virtual void setObjectGroups(cocos2d::CCArray*) = 0x2836f0;
    virtual void getProperties() = 0x283730;
    virtual void setProperties(cocos2d::CCDictionary*) = 0x283740;
    virtual void startElement(void*, char const*, char const**) = 0x2837d0;
    virtual void endElement(void*, char const*) = 0x286210;
    virtual void textHandler(void*, char const*, int) = 0x286460;
}

class cocos2d::CCTextureETC {
    virtual ~CCTextureETC() = 0xedee0;
}

class cocos2d::CCTexturePVR {
    virtual ~CCTexturePVR() = 0x12f100;
}

class cocos2d::XmlSaxHander {
    virtual ~XmlSaxHander() = 0xbb250;
}

class cocos2d::CCActionTween {
    virtual ~CCActionTween() = 0x447780;
    virtual void update(float) = 0x447720;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x4476f0;
    virtual void reverse() = 0x447760;
}

class cocos2d::CCApplication {
    virtual ~CCApplication() = 0x1a3e10;
    virtual void getCurrentLanguage() = 0x1a3f40;
    virtual void getTargetPlatform() = 0x1a3f20;
    virtual void openURL(char const*) = 0x1a4550;
}

class cocos2d::CCEaseBackOut {
    virtual ~CCEaseBackOut() = 0x2a5380;
    virtual void update(float) = 0x2a4480;
    virtual void reverse() = 0x2a44c0;
}

class cocos2d::CCEaseElastic {
    virtual ~CCEaseElastic() = 0x2a4d50;
    virtual void reverse() = 0x2a2dd0;
}

class cocos2d::CCEaseSineOut {
    virtual ~CCEaseSineOut() = 0x2a4bf0;
    virtual void update(float) = 0x2a2970;
    virtual void reverse() = 0x2a29a0;
}

class cocos2d::CCIMEDelegate {
    virtual ~CCIMEDelegate() = 0x277670;
    virtual void detachWithIME() = 0x277880;
    virtual void canAttachWithIME() = 0x5ef30;
    virtual void didAttachWithIME() = 0x5ef40;
    virtual void canDetachWithIME() = 0x5ef50;
    virtual void didDetachWithIME() = 0x5ef60;
    virtual void insertText(char const*, int) = 0x5ef70;
    virtual void deleteBackward() = 0x5ef80;
    virtual void getContentText() = 0x5ef90;
    virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x126e80;
    virtual void keyboardDidShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5efa0;
    virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x126e90;
    virtual void keyboardDidHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5efb0;
}

class cocos2d::CCJumpTiles3D {
    virtual ~CCJumpTiles3D() = 0x45ea50;
    virtual void update(float) = 0x45df60;
}

class cocos2d::CCLabelBMFont {
    virtual ~CCLabelBMFont() = 0x347e80;
    virtual bool init() = 0x347b10;
    virtual void setScaleX(float) = 0x34a5b0;
    virtual void setScaleY(float) = 0x34a5d0;
    virtual void setScale(float) = 0x34a590;
    virtual void setAnchorPoint(cocos2d::CCPoint const&) = 0x349440;
    virtual void setString(char const*) = 0x348990;
    virtual void setString(char const*, bool) = 0x3489e0;
    virtual void getString() = 0x348bf0;
    virtual void setCString(char const*) = 0x348c10;
    virtual void updateLabel() = 0x349480;
    virtual void setAlignment(cocos2d::CCTextAlignment) = 0x34a530;
    virtual void setWidth(float) = 0x34a550;
    virtual void setLineBreakWithoutSpace(bool) = 0x34a570;
    virtual void isOpacityModifyRGB() = 0x3490e0;
    virtual void setOpacityModifyRGB(bool) = 0x348f70;
    virtual void getOpacity() = 0x348df0;
    virtual void getDisplayedOpacity() = 0x348e10;
    virtual void setOpacity(unsigned char) = 0x348e30;
    virtual void updateDisplayedOpacity(unsigned char) = 0x349100;
    virtual void isCascadeOpacityEnabled() = 0x349400;
    virtual void setCascadeOpacityEnabled(bool) = 0x349420;
    virtual void getColor() = 0x348c30;
    virtual void getDisplayedColor() = 0x348c50;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x348c70;
    virtual void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x349210;
    virtual void isCascadeColorEnabled() = 0x3493c0;
    virtual void setCascadeColorEnabled(bool) = 0x3493e0;
    virtual void setString(unsigned short*, bool) = 0x348a60;
}

class cocos2d::CCOrbitCamera {
    virtual ~CCOrbitCamera() = 0x1b31f0;
    virtual void update(float) = 0x1b30c0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1b2de0;
}

class cocos2d::CCReverseTime {
    virtual ~CCReverseTime() = 0x1f8e50;
    virtual void update(float) = 0x1f8f70;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f8f00;
    virtual void stop() = 0x1f8f40;
    virtual void reverse() = 0x1f8fa0;
}

// class cocos2d::CCScrollLayer {
//    virtual  ~CCScrollLayer() = 0x2e4b40;
//    virtual  ~CCScrollLayer() = 0x2e4b70;
//    virtual  bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2e4be0;
//    virtual  void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2e4c00;
//    virtual  void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2e4d40;
// }

class cocos2d::CCShaderCache {
    virtual ~CCShaderCache() = 0xe6ee0;
}

class cocos2d::CCSpriteFrame {
    virtual ~CCSpriteFrame() = 0x1ace20;
}

class cocos2d::CCTMXTiledMap {
    virtual ~CCTMXTiledMap() = 0x2a63a0;
    virtual void getObjectGroups() = 0x2a63e0;
    virtual void setObjectGroups(cocos2d::CCArray*) = 0x2a63f0;
    virtual void getProperties() = 0x2a6430;
    virtual void setProperties(cocos2d::CCDictionary*) = 0x2a6440;
}

class cocos2d::CCTiledGrid3D {
    virtual ~CCTiledGrid3D() = 0x288fe0;
    virtual void blit() = 0x2891c0;
    virtual void reuse() = 0x289780;
    virtual void calculateVertexPoints() = 0x289260;
}

class cocos2d::CCClippingNode {
    virtual ~CCClippingNode() = 0x4191e0;
    virtual bool init() = 0x4193e0;
    virtual void onEnter() = 0x419470;
    virtual void onEnterTransitionDidFinish() = 0x4194a0;
    virtual void onExit() = 0x419500;
    virtual void onExitTransitionDidStart() = 0x4194d0;
    virtual void visit() = 0x419530;
    virtual bool init(cocos2d::CCNode*) = 0x419400;
}

class cocos2d::CCEaseBounceIn {
    virtual ~CCEaseBounceIn() = 0x2a50c0;
    virtual void update(float) = 0x2a3a40;
    virtual void reverse() = 0x2a3b20;
}

class cocos2d::CCMotionStreak {
    virtual ~CCMotionStreak() = 0x2ed330;
    virtual void update(float) = 0x2edb40;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x2ed8b0;
    virtual void draw() = 0x2ee1b0;
    virtual void getOpacity() = 0x2eda60;
    virtual void setOpacity(unsigned char) = 0x2eda40;
    virtual void setOpacityModifyRGB(bool) = 0x2eda80;
    virtual void isOpacityModifyRGB() = 0x2edaa0;
    virtual void getTexture() = 0x2ed950;
    virtual void setTexture(cocos2d::CCTexture2D*) = 0x2ed970;
    virtual void setBlendFunc(cocos2d::_ccBlendFunc) = 0x2eda00;
    virtual void getBlendFunc() = 0x2eda20;
}

// class cocos2d::CCMouseHandler {
//    virtual  ~CCMouseHandler() = 0x12ede0;
//    virtual  ~CCMouseHandler() = 0x12ee50;
//    virtual  void initWithDelegate(cocos2d::CCMouseDelegate*) = 0x12ef40;
// }

class cocos2d::CCParallaxNode {
    virtual ~CCParallaxNode() = 0x270fe0;
    virtual void removeChild(cocos2d::CCNode*, bool) = 0x2712c0;
    virtual void removeAllChildrenWithCleanup(bool) = 0x271350;
    virtual void visit() = 0x271410;
    virtual void addChild(cocos2d::CCNode*, unsigned int, cocos2d::CCPoint const&, cocos2d::CCPoint const&) = 0x271100;
    virtual void addChild(cocos2d::CCNode*, unsigned int, int) = 0x2710f0;
}

class cocos2d::CCShakyTiles3D {
    virtual ~CCShakyTiles3D() = 0x45e890;
    virtual void update(float) = 0x45b900;
    virtual void initWithDuration(float, cocos2d::CCSize const&, int, bool) = 0x45b7b0;
}

class cocos2d::CCShuffleTiles {
    virtual ~CCShuffleTiles() = 0x45c2e0;
    virtual void update(float) = 0x45c830;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x45c590;
    virtual void initWithDuration(float, cocos2d::CCSize const&, unsigned int) = 0x45c140;
}

class cocos2d::CCTMXLayerInfo {
    virtual ~CCTMXLayerInfo() = 0x2828c0;
    virtual void getProperties() = 0x282900;
    virtual void setProperties(cocos2d::CCDictionary*) = 0x282910;
}

class cocos2d::CCTextFieldTTF {
    virtual ~CCTextFieldTTF() = 0x125ff0;
    virtual void draw() = 0x126a00;
    virtual void setString(char const*) = 0x126ac0;
    virtual void getString() = 0x126d00;
    virtual void attachWithIME() = 0x126370;
    virtual void detachWithIME() = 0x1263f0;
    virtual void getColorSpaceHolder() = 0x126a90;
    virtual void setColorSpaceHolder(cocos2d::_ccColor3B const&) = 0x126aa0;
    virtual void setPlaceHolder(char const*) = 0x126d20;
    virtual void getPlaceHolder() = 0x126e10;
    virtual void setSecureTextEntry(bool) = 0x126e20;
    virtual void isSecureTextEntry() = 0x126e70;
    virtual void canAttachWithIME() = 0x126470;
    virtual void canDetachWithIME() = 0x1264d0;
    virtual void insertText(char const*, int) = 0x126530;
    virtual void deleteBackward() = 0x126760;
    virtual void getContentText() = 0x1269e0;
}

class cocos2d::CCTextureAtlas {
    virtual ~CCTextureAtlas() = 0x26fe30;
    virtual void getTotalQuads() = 0x26fe70;
    virtual void getCapacity() = 0x26fe80;
    virtual void getTexture() = 0x26fe90;
    virtual void setTexture(cocos2d::CCTexture2D*) = 0x26fea0;
    virtual void getQuads() = 0x26fee0;
    virtual void setQuads(cocos2d::_ccV3F_C4B_T2F_Quad*) = 0x26fef0;
}

class cocos2d::CCTextureCache {
    virtual ~CCTextureCache() = 0x356fe0;
}

class cocos2d::CCTileMapAtlas {
    virtual ~CCTileMapAtlas() = 0x105970;
    virtual void updateAtlasValues() = 0x105f00;
    virtual void getTGAInfo() = 0x106120;
    virtual void setTGAInfo(cocos2d::sImageTGA*) = 0x106110;
}

class cocos2d::CCTouchHandler {
    virtual ~CCTouchHandler() = 0x247de0;
    virtual void initWithDelegate(cocos2d::CCTouchDelegate*, int) = 0x247d10;
}

class cocos2d::CCTurnOffTiles {
    virtual ~CCTurnOffTiles() = 0x45d660;
    virtual void update(float) = 0x45d870;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x45d7c0;
    virtual void initWithDuration(float, cocos2d::CCSize const&, unsigned int) = 0x45d4d0;
}

class cocos2d::CCWavesTiles3D {
    virtual ~CCWavesTiles3D() = 0x45ea10;
    virtual void update(float) = 0x45dba0;
    virtual void initWithDuration(float, cocos2d::CCSize const&, unsigned int, float) = 0x45da40;
}

class cocos2d::CCActionInstant {
    virtual ~CCActionInstant() = 0x455b90;
    virtual void update(float) = 0x4542f0;
    virtual void isDone() = 0x4542c0;
    virtual void step(float) = 0x4542d0;
    virtual void reverse() = 0x454300;
}

class cocos2d::CCActionManager {
    virtual ~CCActionManager() = 0x10b980;
    virtual void update(float) = 0x10c9a0;
}

class cocos2d::CCConfiguration {
    virtual ~CCConfiguration() = 0x2a6c60;
}

class cocos2d::CCEaseBackInOut {
    virtual ~CCEaseBackInOut() = 0x2a5430;
    virtual void update(float) = 0x2a4670;
    virtual void reverse() = 0x2a4700;
}

class cocos2d::CCEaseBounceOut {
    virtual ~CCEaseBounceOut() = 0x2a5170;
    virtual void update(float) = 0x2a3cd0;
    virtual void reverse() = 0x2a3d90;
}

class cocos2d::CCEaseElasticIn {
    virtual ~CCEaseElasticIn() = 0x2a4e00;
    virtual void update(float) = 0x2a2fb0;
    virtual void reverse() = 0x2a3050;
}

class cocos2d::CCEaseSineInOut {
    virtual ~CCEaseSineInOut() = 0x2a4ca0;
    virtual void update(float) = 0x2a2b50;
    virtual void reverse() = 0x2a2b90;
}

class cocos2d::CCKeypadHandler {
    virtual ~CCKeypadHandler() = 0x1ff130;
    virtual void initWithDelegate(cocos2d::CCKeypadDelegate*) = 0x1ff290;
}

class cocos2d::CCLayerGradient {
    virtual ~CCLayerGradient() = 0x2760a0;
    virtual bool init() = 0x275280;
    virtual void updateColor() = 0x2753c0;
    virtual void initWithColor(cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&) = 0x2752b0;
    virtual void initWithColor(cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&, cocos2d::CCPoint const&) = 0x275310;
    virtual void getStartColor() = 0x275610;
    virtual void setStartColor(cocos2d::_ccColor3B const&) = 0x275620;
    virtual void getEndColor() = 0x275670;
    virtual void setEndColor(cocos2d::_ccColor3B const&) = 0x275640;
    virtual void getStartOpacity() = 0x2756a0;
    virtual void setStartOpacity(unsigned char) = 0x275680;
    virtual void getEndOpacity() = 0x2756d0;
    virtual void setEndOpacity(unsigned char) = 0x2756b0;
    virtual void getVector() = 0x275710;
    virtual void setVector(cocos2d::CCPoint const&) = 0x2756e0;
    virtual void setCompressedInterpolation(bool) = 0x275730;
    virtual void isCompressedInterpolation() = 0x275720;
}

class cocos2d::CCMenuItemImage {
    virtual ~CCMenuItemImage() = 0x1febb0;
    virtual bool init() = 0x1fd750;
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

class cocos2d::CCMouseDelegate {
    virtual void rightKeyDown() = 0x61b0;
    virtual void rightKeyUp() = 0x61c0;
    virtual void scrollWheel(float, float) = 0x61d0;
}

class cocos2d::CCPrettyPrinter {
    virtual ~CCPrettyPrinter() = 0x277290;
    virtual void visit(cocos2d::CCBool const*) = 0x276470;
    virtual void visit(cocos2d::CCInteger const*) = 0x276510;
    virtual void visit(cocos2d::CCFloat const*) = 0x2765a0;
    virtual void visit(cocos2d::CCDouble const*) = 0x276630;
    virtual void visit(cocos2d::CCString const*) = 0x2766c0;
    virtual void visit(cocos2d::CCArray const*) = 0x276700;
    virtual void visit(cocos2d::CCDictionary const*) = 0x276b50;
    virtual void visit(cocos2d::CCSet const*) = 0x276f20;
    virtual void clear() = 0x2763a0;
    virtual void getResult() = 0x2763c0;
}

class cocos2d::CCProgressTimer {
    virtual ~CCProgressTimer() = 0x36c3b0;
    virtual void draw() = 0x36e8f0;
    virtual void setOpacity(unsigned char) = 0x36c720;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x36c590;
    virtual void getColor() const = 0x36c700;
    virtual void getOpacity() const = 0x36c820;
    virtual void getMidpoint() = 0x36e7c0;
    virtual void setMidpoint(cocos2d::CCPoint) = 0x36e7e0;
}

class cocos2d::CCRenderTexture {
    virtual ~CCRenderTexture() = 0x35c5c0;
    virtual void draw() = 0x35d570;
    virtual void visit() = 0x35d4e0;
    virtual void getSprite() = 0x35c620;
    virtual void setSprite(cocos2d::CCSprite*) = 0x35c630;
}

class cocos2d::CCRepeatForever {
    virtual ~CCRepeatForever() = 0x1f3870;
    virtual void isDone() = 0x1f3b40;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f3a90;
    virtual void step(float) = 0x1f3ad0;
    virtual void reverse() = 0x1f3b50;
}

class cocos2d::CCAccelAmplitude {
    virtual ~CCAccelAmplitude() = 0xee970;
    virtual void update(float) = 0xeea70;
    virtual void startWithTarget(cocos2d::CCNode*) = 0xeea40;
    virtual void reverse() = 0xeeac0;
}

class cocos2d::CCActionInterval {
    virtual ~CCActionInterval() = 0x1f9d60;
    virtual void isDone() = 0x1f2640;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f2700;
    virtual void step(float) = 0x1f2660;
    virtual void reverse() = 0x1f2720;
}

class cocos2d::CCAnimationCache {
    virtual ~CCAnimationCache() = 0x244bd0;
}

class cocos2d::CCAnimationFrame {
    virtual ~CCAnimationFrame() = 0x140ab0;
}

class cocos2d::CCEaseElasticOut {
    virtual ~CCEaseElasticOut() = 0x2a4eb0;
    virtual void update(float) = 0x2a3250;
    virtual void reverse() = 0x2a32f0;
}

class cocos2d::CCEaseRateAction {
    virtual ~CCEaseRateAction() = 0x2a1880;
    virtual void reverse() = 0x2a1930;
}

class cocos2d::CCFadeOutBLTiles {
    virtual ~CCFadeOutBLTiles() = 0x45e950;
    virtual void testFunc(cocos2d::CCSize const&, float) = 0x45cf10;
}

class cocos2d::CCFadeOutTRTiles {
    virtual ~CCFadeOutTRTiles() = 0x45e910;
    virtual void update(float) = 0x45ccc0;
    virtual void testFunc(cocos2d::CCSize const&, float) = 0x45cad0;
    virtual void transformTile(cocos2d::CCPoint const&, float) = 0x45cbc0;
}

class cocos2d::CCFadeOutUpTiles {
    virtual ~CCFadeOutUpTiles() = 0x45e990;
    virtual void testFunc(cocos2d::CCSize const&, float) = 0x45d070;
    virtual void transformTile(cocos2d::CCPoint const&, float) = 0x45d0f0;
}

class cocos2d::CCLayerMultiplex {
    virtual ~CCLayerMultiplex() = 0x275980;
}

class cocos2d::CCMenuItemSprite {
    virtual ~CCMenuItemSprite() = 0x1feab0;
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

    static cocos2d::CCMenuItemSprite* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*) = 0x1fd120;
    static cocos2d::CCMenuItemSprite* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x1fd140;
    static cocos2d::CCMenuItemSprite* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x1fd2d0;
}

class cocos2d::CCMenuItemToggle {
    virtual ~CCMenuItemToggle() = 0x1fe7a0;
    virtual void activate() = 0x1fe950;
    virtual void selected() = 0x1fe8f0;
    virtual void unselected() = 0x1fe920;
    virtual void setEnabled(bool) = 0x1fea00;
    virtual void getSelectedIndex() = 0x1fe8e0;
    virtual void setSelectedIndex(unsigned int) = 0x1fe7e0;
    virtual void getSubItems() = 0x1fde50;
    virtual void setSubItems(cocos2d::CCArray*) = 0x1fde10;
}

class cocos2d::CCParticleSystem {
    virtual ~CCParticleSystem() = 0x46b390;
    virtual void update(float) = 0x46be50;
    virtual bool init() = 0x4692b0;
    virtual void setScaleX(float) = 0x46cdf0;
    virtual void setScaleY(float) = 0x46ce10;
    virtual void setScale(float) = 0x46cdb0;
    virtual void setRotation(float) = 0x46cdd0;
    virtual void getBatchNode() = 0x46ccd0;
    virtual void setBatchNode(cocos2d::CCParticleBatchNode*) = 0x46cce0;
    virtual void getParticleCount() = 0x46c8a0;
    virtual void getDuration() = 0x46c8b0;
    virtual void setDuration(float) = 0x46c8c0;
    virtual void getSourcePosition() = 0x46c8d0;
    virtual void setSourcePosition(cocos2d::CCPoint const&) = 0x46c8e0;
    virtual void getPosVar() = 0x46c900;
    virtual void setPosVar(cocos2d::CCPoint const&) = 0x46c910;
    virtual void getLife() = 0x46c930;
    virtual void setLife(float) = 0x46c940;
    virtual void getLifeVar() = 0x46c950;
    virtual void setLifeVar(float) = 0x46c960;
    virtual void getAngle() = 0x46c970;
    virtual void setAngle(float) = 0x46c980;
    virtual void getAngleVar() = 0x46c990;
    virtual void setAngleVar(float) = 0x46c9a0;
    virtual void getGravity() = 0x46c780;
    virtual void setGravity(cocos2d::CCPoint const&) = 0x46c760;
    virtual void getSpeed() = 0x46c7a0;
    virtual void setSpeed(float) = 0x46c790;
    virtual void getSpeedVar() = 0x46c7c0;
    virtual void setSpeedVar(float) = 0x46c7b0;
    virtual void getTangentialAccel() = 0x46c6d0;
    virtual void setTangentialAccel(float) = 0x46c6c0;
    virtual void getTangentialAccelVar() = 0x46c6f0;
    virtual void setTangentialAccelVar(float) = 0x46c6e0;
    virtual void getRadialAccel() = 0x46c710;
    virtual void setRadialAccel(float) = 0x46c700;
    virtual void getRadialAccelVar() = 0x46c730;
    virtual void setRadialAccelVar(float) = 0x46c720;
    virtual void getRotationIsDir() = 0x46c750;
    virtual void setRotationIsDir(bool) = 0x46c740;
    virtual void getStartRadius() = 0x46c7e0;
    virtual void setStartRadius(float) = 0x46c7d0;
    virtual void getStartRadiusVar() = 0x46c800;
    virtual void setStartRadiusVar(float) = 0x46c7f0;
    virtual void getEndRadius() = 0x46c820;
    virtual void setEndRadius(float) = 0x46c810;
    virtual void getEndRadiusVar() = 0x46c840;
    virtual void setEndRadiusVar(float) = 0x46c830;
    virtual void getRotatePerSecond() = 0x46c860;
    virtual void setRotatePerSecond(float) = 0x46c850;
    virtual void getRotatePerSecondVar() = 0x46c880;
    virtual void setRotatePerSecondVar(float) = 0x46c870;
    virtual void isActive() = 0x46c890;
    virtual void isBlendAdditive() = 0x46c6a0;
    virtual void setBlendAdditive(bool) = 0x46c640;
    virtual void getStartSize() = 0x46c9b0;
    virtual void setStartSize(float) = 0x46c9c0;
    virtual void getStartSizeVar() = 0x46c9d0;
    virtual void setStartSizeVar(float) = 0x46c9e0;
    virtual void getEndSize() = 0x46c9f0;
    virtual void setEndSize(float) = 0x46ca00;
    virtual void getEndSizeVar() = 0x46ca10;
    virtual void setEndSizeVar(float) = 0x46ca20;
    virtual void getStartColor() = 0x46ca30;
    virtual void setStartColor(cocos2d::_ccColor4F const&) = 0x46ca40;
    virtual void getStartColorVar() = 0x46ca60;
    virtual void setStartColorVar(cocos2d::_ccColor4F const&) = 0x46ca70;
    virtual void getEndColor() = 0x46ca90;
    virtual void setEndColor(cocos2d::_ccColor4F const&) = 0x46caa0;
    virtual void getEndColorVar() = 0x46cac0;
    virtual void setEndColorVar(cocos2d::_ccColor4F const&) = 0x46cad0;
    virtual void getStartSpin() = 0x46caf0;
    virtual void setStartSpin(float) = 0x46cb00;
    virtual void getStartSpinVar() = 0x46cb10;
    virtual void setStartSpinVar(float) = 0x46cb20;
    virtual void getEndSpin() = 0x46cb30;
    virtual void setEndSpin(float) = 0x46cb40;
    virtual void getEndSpinVar() = 0x46cb50;
    virtual void setEndSpinVar(float) = 0x46cb60;
    virtual void getEmissionRate() = 0x46cb70;
    virtual void setEmissionRate(float) = 0x46cb80;
    virtual void getTotalParticles() = 0x46cb90;
    virtual void setTotalParticles(unsigned int) = 0x46cba0;
    virtual void getTexture() = 0x46c620;
    virtual void setTexture(cocos2d::CCTexture2D*) = 0x46c4f0;
    virtual void getBlendFunc() = 0x46cbb0;
    virtual void setBlendFunc(cocos2d::_ccBlendFunc) = 0x46cbd0;
    virtual void getOpacityModifyRGB() = 0x46cc50;
    virtual void setOpacityModifyRGB(bool) = 0x46cc60;
    virtual void getPositionType() = 0x46cc70;
    virtual void setPositionType(cocos2d::tCCPositionType) = 0x46cc80;
    virtual void isAutoRemoveOnFinish() = 0x46cc90;
    virtual void setAutoRemoveOnFinish(bool) = 0x46cca0;
    virtual void getEmitterMode() = 0x46ccb0;
    virtual void setEmitterMode(int) = 0x46ccc0;
    virtual void initWithTotalParticles(unsigned int) = 0x46b130;
    virtual void updateQuadWithParticle(cocos2d::sCCParticle*, cocos2d::CCPoint const&) = 0x46c4d0;
    virtual void postStep() = 0x46c4e0;
    virtual void updateWithNoTime() = 0x46c4b0;
    virtual void updateBlendFunc() = 0x46c5b0;
}

class cocos2d::CCProfilingTimer {
    virtual ~CCProfilingTimer() = 0x28a470;
}

class cocos2d::CCProgressFromTo {
    virtual ~CCProgressFromTo() = 0x23d6c0;
    virtual void update(float) = 0x23d650;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x23d640;
    virtual void reverse() = 0x23d590;
}

class cocos2d::CCTMXObjectGroup {
    virtual ~CCTMXObjectGroup() = 0x25f5c0;
    virtual void getProperties() = 0x25f800;
    virtual void setProperties(cocos2d::CCDictionary*) = 0x25f810;
    virtual void getObjects() = 0x25f850;
    virtual void setObjects(cocos2d::CCArray*) = 0x25f860;
}

class cocos2d::CCTMXTilesetInfo {
    virtual ~CCTMXTilesetInfo() = 0x282ad0;
}

class cocos2d::CCTargetedAction {
    virtual ~CCTargetedAction() = 0x1f99e0;
    virtual void update(float) = 0x1f9d40;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f9d00;
    virtual void stop() = 0x1f9d30;
}

class cocos2d::CCTransitionFade {
    virtual ~CCTransitionFade() = 0x8e860;
    virtual void onEnter() = 0x8eb30;
    virtual void onExit() = 0x8ec60;
    virtual void initWithDuration(float, cocos2d::CCScene*) = 0x8eb10;
    virtual void initWithDuration(float, cocos2d::CCScene*, cocos2d::_ccColor3B const&) = 0x8ea50;
}

class cocos2d::CCAutoreleasePool {
    virtual ~CCAutoreleasePool() = 0x214100;
}

class cocos2d::CCDeccelAmplitude {
    virtual ~CCDeccelAmplitude() = 0xeecd0;
    virtual void update(float) = 0xeedb0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0xeed80;
    virtual void reverse() = 0xeee10;
}

class cocos2d::CCEGLViewProtocol {
    virtual ~CCEGLViewProtocol() = 0x29d7b0;
    virtual void setFrameSize(float, float) = 0x29d960;
    virtual void getVisibleSize() const = 0x29d9a0;
    virtual void getVisibleOrigin() const = 0x29d9f0;
    virtual void setDesignResolutionSize(float, float, ResolutionPolicy) = 0x29d7c0;
    virtual void getDesignResolutionSize() const = 0x29d940;
    virtual void setTouchDelegate(cocos2d::EGLTouchDelegate*) = 0x29da60;
    virtual void setViewPortInPoints(float, float, float, float) = 0x29da70;
    virtual void setScissorInPoints(float, float, float, float) = 0x29dab0;
    virtual void isScissorEnabled() = 0x29daf0;
    virtual void getScissorRect() = 0x29db10;
    virtual void setViewName(char const*) = 0x29dba0;
    virtual void handleTouchesBegin(int, int*, float*, float*) = 0x29dbd0;
    virtual void handleTouchesMove(int, int*, float*, float*) = 0x29deb0;
    virtual void handleTouchesEnd(int, int*, float*, float*) = 0x29e1d0;
    virtual void handleTouchesCancel(int, int*, float*, float*) = 0x29e260;
    virtual void pollInputEvents() = 0x29e320;
}

class cocos2d::CCEaseBounceInOut {
    virtual ~CCEaseBounceInOut() = 0x2a5220;
    virtual void update(float) = 0x2a3f40;
    virtual void reverse() = 0x2a40f0;
}

class cocos2d::CCKeyboardHandler {
    virtual ~CCKeyboardHandler() = 0x241e90;
    virtual void initWithDelegate(cocos2d::CCKeyboardDelegate*) = 0x241ff0;
}

class cocos2d::CCMouseDispatcher {
    virtual ~CCMouseDispatcher() = 0x2e8d40;
}

class cocos2d::CCSpriteBatchNode {
    virtual ~CCSpriteBatchNode() = 0xbb790;
    virtual bool init() = 0xbb680;
    virtual void addChild(cocos2d::CCNode*) = 0xbbb40;
    virtual void addChild(cocos2d::CCNode*, int) = 0xbbb50;
    virtual void addChild(cocos2d::CCNode*, int, int) = 0xbb930;
    virtual void removeChild(cocos2d::CCNode*, bool) = 0xbbbb0;
    virtual void removeAllChildrenWithCleanup(bool) = 0xbbe30;
    virtual void reorderChild(cocos2d::CCNode*, int) = 0xbbb60;
    virtual void sortAllChildren() = 0xbbee0;
    virtual void draw() = 0xbc540;
    virtual void visit() = 0xbb880;
    virtual void getTexture() = 0xbcd70;
    virtual void setTexture(cocos2d::CCTexture2D*) = 0xbcda0;
    virtual void setBlendFunc(cocos2d::_ccBlendFunc) = 0xbcd30;
    virtual void getBlendFunc() = 0xbcd50;
}

class cocos2d::CCTouchDispatcher {
    virtual ~CCTouchDispatcher() = 0x280ed0;
    virtual void touchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x282050;
    virtual void touchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x282090;
    virtual void touchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x2820d0;
    virtual void touchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x282110;
}

class cocos2d::CCTransitionFlipX {
    virtual ~CCTransitionFlipX() = 0x8cec0;
    virtual void onEnter() = 0x8cf90;
}

class cocos2d::CCTransitionFlipY {
    virtual ~CCTransitionFlipY() = 0x8d2c0;
    virtual void onEnter() = 0x8d390;
}

class cocos2d::CCTransitionScene {
    virtual ~CCTransitionScene() = 0x89cf0;
    virtual void onEnter() = 0x8a1a0;
    virtual void onExit() = 0x8a1f0;
    virtual void cleanup() = 0x8a250;
    virtual void draw() = 0x89f40;
    virtual void initWithDuration(float, cocos2d::CCScene*) = 0x89ea0;
    virtual void sceneOrder() = 0x89f30;
}

class cocos2d::CCCardinalSplineBy {
    virtual ~CCCardinalSplineBy() = 0x1687c0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1684b0;
    virtual void reverse() = 0x168160;
    virtual void updatePosition(cocos2d::CCPoint&) = 0x168110;
}

class cocos2d::CCCardinalSplineTo {
    virtual ~CCCardinalSplineTo() = 0x167960;
    virtual void update(float) = 0x167c40;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x167aa0;
    virtual void reverse() = 0x167f60;
    virtual void updatePosition(cocos2d::CCPoint&) = 0x167f30;
}

class cocos2d::CCEaseElasticInOut {
    virtual ~CCEaseElasticInOut() = 0x2a4f60;
    virtual void update(float) = 0x2a34f0;
    virtual void reverse() = 0x2a3620;
}

class cocos2d::CCFadeOutDownTiles {
    virtual ~CCFadeOutDownTiles() = 0x45e9d0;
    virtual void testFunc(cocos2d::CCSize const&, float) = 0x45d280;
}

class cocos2d::CCKeyboardDelegate {
    virtual void keyUp(cocos2d::enumKeyCodes) = 0x61a0;
}

class cocos2d::CCKeypadDispatcher {
    virtual ~CCKeypadDispatcher() = 0x360110;
}

class cocos2d::CCShatteredTiles3D {
    virtual ~CCShatteredTiles3D() = 0x45e8d0;
    virtual void update(float) = 0x45bdc0;
    virtual void initWithDuration(float, cocos2d::CCSize const&, int, bool) = 0x45bc70;
}

class cocos2d::CCSpriteFrameCache {
    virtual ~CCSpriteFrameCache() = 0x198b50;
}

class cocos2d::CCTransitionFadeBL {
    virtual ~CCTransitionFadeBL() = 0x901c0;
    virtual void actionWithSize(cocos2d::CCSize const&) = 0x90380;
}

class cocos2d::CCTransitionFadeTR {
    virtual ~CCTransitionFadeTR() = 0x8fdf0;
    virtual void onEnter() = 0x8ffc0;
    virtual void sceneOrder() = 0x8ffb0;
    virtual void actionWithSize(cocos2d::CCSize const&) = 0x900c0;
    virtual void easeActionWithAction(cocos2d::CCActionInterval*) = 0x900e0;
}

class cocos2d::CCTransitionFadeUp {
    virtual ~CCTransitionFadeUp() = 0x90460;
    virtual void actionWithSize(cocos2d::CCSize const&) = 0x90620;
}

class cocos2d::CCEaseExponentialIn {
    virtual ~CCEaseExponentialIn() = 0x2a4930;
    virtual void update(float) = 0x2a2160;
    virtual void reverse() = 0x2a21b0;
}

class cocos2d::CCParticleBatchNode {
    virtual ~CCParticleBatchNode() = 0x205ff0;
    virtual void addChild(cocos2d::CCNode*) = 0x206360;
    virtual void addChild(cocos2d::CCNode*, int) = 0x206370;
    virtual void addChild(cocos2d::CCNode*, int, int) = 0x206380;
    virtual void removeChild(cocos2d::CCNode*, bool) = 0x206bd0;
    virtual void removeAllChildrenWithCleanup(bool) = 0x206d10;
    virtual void reorderChild(cocos2d::CCNode*, int) = 0x2067c0;
    virtual void draw() = 0x206da0;
    virtual void visit() = 0x2062e0;
    virtual void getTexture() = 0x206f90;
    virtual void setTexture(cocos2d::CCTexture2D*) = 0x206ee0;
    virtual void setBlendFunc(cocos2d::_ccBlendFunc) = 0x206fc0;
    virtual void getBlendFunc() = 0x206fe0;
}

class cocos2d::CCTiledGrid3DAction {
    virtual ~CCTiledGrid3DAction() = 0xef100;
    virtual void getGrid() = 0xee350;
}

class cocos2d::CCTransitionMoveInB {
    virtual ~CCTransitionMoveInB() = 0x8b8d0;
    virtual void initScenes() = 0x8ba90;
}

class cocos2d::CCTransitionMoveInL {
    virtual ~CCTransitionMoveInL() = 0x8aef0;
    virtual void onEnter() = 0x8b0b0;
    virtual void initScenes() = 0x8b1e0;
    virtual void action() = 0x8b180;
    virtual void easeActionWithAction(cocos2d::CCActionInterval*) = 0x8b1c0;
}

class cocos2d::CCTransitionMoveInR {
    virtual ~CCTransitionMoveInR() = 0x8b310;
    virtual void initScenes() = 0x8b4d0;
}

class cocos2d::CCTransitionMoveInT {
    virtual ~CCTransitionMoveInT() = 0x8b5f0;
    virtual void initScenes() = 0x8b7b0;
}

class cocos2d::CCComponentContainer {
    virtual ~CCComponentContainer() = 0x166350;
    virtual void add(cocos2d::CCComponent*) = 0x166470;
    virtual void remove(char const*) = 0x1665f0;
    virtual void remove(cocos2d::CCComponent*) = 0x1668d0;
    virtual void removeAll() = 0x166ab0;
    virtual void visit(float) = 0x166cb0;
}

class cocos2d::CCEaseExponentialOut {
    virtual ~CCEaseExponentialOut() = 0x2a49e0;
    virtual void update(float) = 0x2a2360;
    virtual void reverse() = 0x2a23b0;
}

class cocos2d::CCKeyboardDispatcher {
    virtual ~CCKeyboardDispatcher() = 0xe7f90;
}

class cocos2d::CCNotificationCenter {
    virtual ~CCNotificationCenter() = 0x131c00;
}

class cocos2d::CCParticleSystemQuad {
    virtual ~CCParticleSystemQuad() = 0x36afc0;
    virtual void draw() = 0x36b850;
    virtual void setBatchNode(cocos2d::CCParticleBatchNode*) = 0x36bb70;
    virtual void setTotalParticles(unsigned int) = 0x36b910;
    virtual void setTexture(cocos2d::CCTexture2D*) = 0x36b3c0;
    virtual void initWithTotalParticles(unsigned int) = 0x36aa80;
    virtual void updateQuadWithParticle(cocos2d::sCCParticle*, cocos2d::CCPoint const&) = 0x36b570;
    virtual void postStep() = 0x36b800;
}

class cocos2d::CCScriptHandlerEntry {
    virtual ~CCScriptHandlerEntry() = 0x198280;
}

class cocos2d::CCTransitionFadeDown {
    virtual ~CCTransitionFadeDown() = 0x90700;
    virtual void actionWithSize(cocos2d::CCSize const&) = 0x908c0;
}

class cocos2d::CCTransitionJumpZoom {
    virtual ~CCTransitionJumpZoom() = 0x8aa40;
    virtual void onEnter() = 0x8abf0;
}

class cocos2d::CCTransitionPageTurn {
    virtual ~CCTransitionPageTurn() = 0x20d0d0;
    virtual void onEnter() = 0x20d1d0;
    virtual void sceneOrder() = 0x20d1b0;
    virtual void initWithDuration(float, cocos2d::CCScene*, bool) = 0x20d190;
}

class cocos2d::CCTransitionProgress {
    virtual ~CCTransitionProgress() = 0x1385e0;
    virtual void onEnter() = 0x137970;
    virtual void onExit() = 0x137b30;
    virtual void sceneOrder() = 0x137b60;
    virtual void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x137ba0;
    virtual void setupTransition() = 0x137b70;
}

class cocos2d::CCTransitionRotoZoom {
    virtual ~CCTransitionRotoZoom() = 0x8a700;
    virtual void onEnter() = 0x8a7d0;
}

class cocos2d::CCTransitionSlideInB {
    virtual ~CCTransitionSlideInB() = 0x8c730;
    virtual void sceneOrder() = 0x8c8f0;
    virtual void initScenes() = 0x8c900;
    virtual void action() = 0x8c970;
}

class cocos2d::CCTransitionSlideInL {
    virtual ~CCTransitionSlideInL() = 0x8bbc0;
    virtual void onEnter() = 0x8bc90;
    virtual void sceneOrder() = 0x8bd80;
    virtual void initScenes() = 0x8bd90;
    virtual void action() = 0x8be00;
    virtual void easeActionWithAction(cocos2d::CCActionInterval*) = 0x8be60;
}

class cocos2d::CCTransitionSlideInR {
    virtual ~CCTransitionSlideInR() = 0x8c050;
    virtual void sceneOrder() = 0x8c210;
    virtual void initScenes() = 0x8c220;
    virtual void action() = 0x8c290;
}

class cocos2d::CCTransitionSlideInT {
    virtual ~CCTransitionSlideInT() = 0x8c3c0;
    virtual void sceneOrder() = 0x8c580;
    virtual void initScenes() = 0x8c590;
    virtual void action() = 0x8c600;
}

class cocos2d::CCBMFontConfiguration {
    virtual ~CCBMFontConfiguration() = 0x346130;
}

class cocos2d::CCDisplayLinkDirector {
    virtual ~CCDisplayLinkDirector() = 0x24b240;
    virtual void setAnimationInterval(double) = 0x24b180;
    virtual void stopAnimation() = 0x24b170;
    virtual void startAnimation() = 0x24b0f0;
    virtual void mainLoop() = 0x24b130;
}

class cocos2d::CCTransitionCrossFade {
    virtual ~CCTransitionCrossFade() = 0x8ed70;
    virtual void onEnter() = 0x8ef30;
    virtual void onExit() = 0x8f290;
    virtual void draw() = 0x8ef20;
}

class cocos2d::CCTransitionSplitCols {
    virtual ~CCTransitionSplitCols() = 0x8f780;
    virtual void onEnter() = 0x8f940;
    virtual void action() = 0x8fa30;
    virtual void easeActionWithAction(cocos2d::CCActionInterval*) = 0x8fa50;
}

class cocos2d::CCTransitionSplitRows {
    virtual ~CCTransitionSplitRows() = 0x8fb50;
    virtual void action() = 0x8fc20;
}

class cocos2d::CCTransitionZoomFlipX {
    virtual ~CCTransitionZoomFlipX() = 0x8dae0;
    virtual void onEnter() = 0x8dbb0;
}

class cocos2d::CCTransitionZoomFlipY {
    virtual ~CCTransitionZoomFlipY() = 0x8df50;
    virtual void onEnter() = 0x8e020;
}

class cocos2d::CCAccelDeccelAmplitude {
    virtual ~CCAccelDeccelAmplitude() = 0xee610;
    virtual void update(float) = 0xee6f0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0xee6c0;
    virtual void reverse() = 0xee750;
}

class cocos2d::CCEaseExponentialInOut {
    virtual ~CCEaseExponentialInOut() = 0x2a4a90;
    virtual void update(float) = 0x2a2560;
    virtual void reverse() = 0x2a25d0;
}

class cocos2d::CCNotificationObserver {
    virtual ~CCNotificationObserver() = 0x132640;
    virtual void getTarget() = 0x1326e0;
    virtual cocos2d::SEL_CallFuncO getSelector() = 0x1326f0;
    virtual void getName() = 0x132700;
    virtual void getObject() = 0x132710;
    virtual void getHandler() = 0x132720;
    virtual void setHandler(int) = 0x132730;
}

class cocos2d::CCStandardTouchHandler {
    virtual ~CCStandardTouchHandler() = 0x2482a0;
    virtual void initWithDelegate(cocos2d::CCTouchDelegate*, int) = 0x247ed0;
}

class cocos2d::CCTargetedTouchHandler {
    virtual ~CCTargetedTouchHandler() = 0x248260;
}

class cocos2d::CCTransitionShrinkGrow {
    virtual ~CCTransitionShrinkGrow() = 0x8ca90;
    virtual void onEnter() = 0x8cc50;
    virtual void easeActionWithAction(cocos2d::CCActionInterval*) = 0x8cde0;
}

class cocos2d::CCTransitionFlipAngular {
    virtual ~CCTransitionFlipAngular() = 0x8d6d0;
    virtual void onEnter() = 0x8d7a0;
}

class cocos2d::CCTransitionTurnOffTiles {
    virtual ~CCTransitionTurnOffTiles() = 0x8f3c0;
    virtual void onEnter() = 0x8f590;
    virtual void sceneOrder() = 0x8f580;
    virtual void easeActionWithAction(cocos2d::CCActionInterval*) = 0x8f6a0;
}

class cocos2d::CCTouchScriptHandlerEntry {
    virtual ~CCTouchScriptHandlerEntry() = 0x1987d0;
}

class cocos2d::CCTransitionProgressInOut {
    virtual ~CCTransitionProgressInOut() = 0x138720;
    virtual void sceneOrder() = 0x1382d0;
    virtual void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x138300;
    virtual void setupTransition() = 0x1382e0;
}

class cocos2d::CCTransitionProgressOutIn {
    virtual ~CCTransitionProgressOutIn() = 0x138760;
    virtual void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x1384c0;
}

class cocos2d::CCTransitionSceneOriented {
    virtual ~CCTransitionSceneOriented() = 0x8a330;
    virtual void initWithDuration(float, cocos2d::CCScene*, cocos2d::tOrientation) = 0x8a4e0;
}

class cocos2d::CCTransitionZoomFlipAngular {
    virtual ~CCTransitionZoomFlipAngular() = 0x8e3d0;
    virtual void onEnter() = 0x8e4a0;
}

class cocos2d::CCTransitionProgressRadialCW {
    virtual ~CCTransitionProgressRadialCW() = 0x138660;
    virtual void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x137dd0;
}

class cocos2d::CCTransitionProgressVertical {
    virtual ~CCTransitionProgressVertical() = 0x1386e0;
    virtual void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x138110;
}

class cocos2d::CCSchedulerScriptHandlerEntry {
    virtual ~CCSchedulerScriptHandlerEntry() = 0x1985f0;
}

class cocos2d::CCTransitionProgressRadialCCW {
    virtual ~CCTransitionProgressRadialCCW() = 0x138620;
    virtual void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x137bb0;
}

class cocos2d::CCTransitionProgressHorizontal {
    virtual ~CCTransitionProgressHorizontal() = 0x1386a0;
    virtual void progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture*) = 0x137f50;
}

class cocos2d::CCSet {
    virtual ~CCSet() = 0x45b050;
    virtual void acceptVisitor(cocos2d::CCDataVisitor&) = 0x45b090;
}

class cocos2d::CCMenu {
    virtual ~CCMenu() = 0x43a4f0;
    virtual bool init() = 0x438b90;
    virtual void addChild(cocos2d::CCNode*) = 0x438ba0;
    virtual void addChild(cocos2d::CCNode*, int) = 0x438bb0;
    virtual void addChild(cocos2d::CCNode*, int, int) = 0x438bc0;
    virtual void removeChild(cocos2d::CCNode*, bool) = 0x438c20;
    virtual void onExit() = 0x438bd0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x438d20;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x4390b0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x438fd0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x439050;
    virtual void registerWithTouchDispatcher() = 0x438cd0;
    virtual void setOpacityModifyRGB(bool) = 0x18e6d0;
    virtual void isOpacityModifyRGB() = 0x18e6e0;
    virtual void isEnabled() = 0x18e6f0;
    virtual void setEnabled(bool) = 0x18e700;
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

class cocos2d::CCArray {
    virtual ~CCArray() = 0x41a6c0;
    virtual void acceptVisitor(cocos2d::CCDataVisitor&) = 0x41a880;
}

class cocos2d::CCBlink {
    virtual ~CCBlink() = 0x1fa0e0;
    virtual void update(float) = 0x1f79f0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f78b0;
    virtual void stop() = 0x1f7880;
    virtual void reverse() = 0x1f7a70;
}

class cocos2d::CCFlipX {
    virtual ~CCFlipX() = 0x455cd0;
    virtual void update(float) = 0x454910;
    virtual void reverse() = 0x454930;
}

class cocos2d::CCFlipY {
    virtual ~CCFlipY() = 0x455d10;
    virtual void update(float) = 0x454ab0;
    virtual void reverse() = 0x454ad0;
}

class cocos2d::CCImage {
    virtual ~CCImage() = 0x24fa80;
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

class cocos2d::CCPlace {
    virtual ~CCPlace() = 0x455d50;
    virtual void update(float) = 0x454d70;
}

class cocos2d::CCScene {
    virtual ~CCScene() = 0x13c0b0;
    virtual bool init() = 0x13c0f0;
}

class cocos2d::CCSpawn {
    virtual ~CCSpawn() = 0x1f4580;
    virtual void update(float) = 0x1f46c0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f4650;
    virtual void stop() = 0x1f4690;
    virtual void reverse() = 0x1f4710;
}

class cocos2d::CCSpeed {
    virtual ~CCSpeed() = 0x35b910;
    virtual void isDone() = 0x35bc50;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x35bbe0;
    virtual void stop() = 0x35bc00;
    virtual void step(float) = 0x35bc30;
    virtual void reverse() = 0x35bc60;
}

class cocos2d::CCTimer {
    virtual ~CCTimer() = 0x244980;
    virtual void update(float) = 0x242440;
}

class cocos2d::CCTwirl {
    virtual ~CCTwirl() = 0x129cc0;
    virtual void update(float) = 0x129850;
}

class cocos2d::CCWaves {
    virtual ~CCWaves() = 0x129c80;
    virtual void update(float) = 0x129340;
}

class cocos2d::ZipFile {
    virtual ~ZipFile() = 0xeba30;
}

class cocos2d::CCAction {
    virtual ~CCAction() = 0x35b6b0;
    virtual void update(float) = 0x35b890;
    virtual void setTag(int) = 0xef0b0;
    virtual void isDone() = 0x35b870;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x35b850;
    virtual void stop() = 0x35b860;
    virtual void step(float) = 0x35b880;
}

class cocos2d::CCCamera {
    virtual ~CCCamera() = 0x2e0980;
}

class cocos2d::CCEaseIn {
    virtual ~CCEaseIn() = 0x2a4720;
    virtual void update(float) = 0x2a1b10;
    virtual void reverse() = 0x2a1b40;
}

class cocos2d::CCFadeIn {
    virtual ~CCFadeIn() = 0x1fa120;
    virtual void update(float) = 0x1f7c80;
    virtual void reverse() = 0x1f7ce0;
}

class cocos2d::CCFadeTo {
    virtual ~CCFadeTo() = 0x1fa1a0;
    virtual void update(float) = 0x1f8220;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f81c0;
}

class cocos2d::CCFollow {
    virtual ~CCFollow() = 0x35bdb0;
    virtual void isDone() = 0x35c2e0;
    virtual void stop() = 0x35c300;
    virtual void step(float) = 0x35c1f0;
}

class cocos2d::CCGrid3D {
    virtual ~CCGrid3D() = 0x288470;
    virtual void blit() = 0x2884b0;
    virtual void reuse() = 0x288da0;
    virtual void calculateVertexPoints() = 0x288550;
}

class cocos2d::CCJumpBy {
    virtual ~CCJumpBy() = 0x1f9f60;
    virtual void update(float) = 0x1f6160;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f6110;
    virtual void reverse() = 0x1f6290;
}

class cocos2d::CCJumpTo {
    virtual ~CCJumpTo() = 0x1f9fa0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f6570;
}

class cocos2d::CCLens3D {
    virtual ~CCLens3D() = 0x129b80;
    virtual void update(float) = 0x128140;
}

class cocos2d::CCLiquid {
    virtual ~CCLiquid() = 0x129c40;
    virtual void update(float) = 0x128ed0;
}

class cocos2d::CCMoveBy {
    virtual ~CCMoveBy() = 0x1f9e60;
    virtual void update(float) = 0x1f5400;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f5360;
    virtual void reverse() = 0x1f53b0;
}

class cocos2d::CCMoveTo {
    virtual ~CCMoveTo() = 0x1f9ea0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f5740;
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

class cocos2d::CCRepeat {
    virtual ~CCRepeat() = 0x1f3580;
    virtual void update(float) = 0x1f36b0;
    virtual void isDone() = 0x1f37e0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f3630;
    virtual void stop() = 0x1f3680;
    virtual void reverse() = 0x1f37f0;
}

class cocos2d::CCSkewBy {
    virtual ~CCSkewBy() = 0x1f9f20;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f5d00;
    virtual void reverse() = 0x1f5d40;
    virtual void initWithDuration(float, float, float) = 0x1f5cb0;
}

class cocos2d::CCSkewTo {
    virtual ~CCSkewTo() = 0x1f9ee0;
    virtual void update(float) = 0x1f5b20;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f59f0;
    virtual void initWithDuration(float, float, float) = 0x1f58d0;
}



class cocos2d::CCString {
    virtual ~CCString() = 0x44c590;
    virtual void isEqual(cocos2d::CCObject const*) = 0x44c8f0;
    virtual void acceptVisitor(cocos2d::CCDataVisitor&) = 0x44ccb0;
}

class cocos2d::CCTintBy {
    virtual ~CCTintBy() = 0x1fa220;
    virtual void update(float) = 0x1f8870;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f8800;
    virtual void reverse() = 0x1f8950;
}

class cocos2d::CCTintTo {
    virtual ~CCTintTo() = 0x1fa1e0;
    virtual void update(float) = 0x1f8510;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f84b0;
}

class cocos2d::CCAnimate {
    virtual ~CCAnimate() = 0x1f9530;
    virtual void update(float) = 0x1f9610;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f9570;
    virtual void stop() = 0x1f95d0;
    virtual void reverse() = 0x1f9840;
}

class cocos2d::CCEGLView {
    virtual ~CCEGLView() = 0x295420;
    virtual void isOpenGLReady() = 0x295470;
    virtual void swapBuffers() = 0x295510;
    virtual void setIMEKeyboardState(bool) = 0x295550;
}

class cocos2d::CCEaseOut {
    virtual ~CCEaseOut() = 0x2a47d0;
    virtual void update(float) = 0x2a1d20;
    virtual void reverse() = 0x2a1d50;
}

class cocos2d::CCFadeOut {
    virtual ~CCFadeOut() = 0x1fa160;
    virtual void update(float) = 0x1f7ee0;
    virtual void reverse() = 0x1f7f50;
}

class cocos2d::CCFlipX3D {
    virtual ~CCFlipX3D() = 0x129b00;
    virtual void update(float) = 0x127560;
    virtual void initWithDuration(float) = 0x1273d0;
    virtual void initWithSize(cocos2d::CCSize const&, float) = 0x127420;
}

class cocos2d::CCFlipY3D {
    virtual ~CCFlipY3D() = 0x129b40;
    virtual void update(float) = 0x127a50;
}

class cocos2d::CCGrabber {
    virtual ~CCGrabber() = 0x360fe0;
}

class cocos2d::CCScaleBy {
    virtual ~CCScaleBy() = 0x1fa0a0;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f7640;
    virtual void reverse() = 0x1f76b0;
}

class cocos2d::CCScaleTo {
    virtual ~CCScaleTo() = 0x1fa060;
    virtual void update(float) = 0x1f7360;
    virtual void startWithTarget(cocos2d::CCNode*) = 0x1f72f0;
}

class cocos2d::CCShaky3D {
    virtual ~CCShaky3D() = 0x129c00;
    virtual void update(float) = 0x128ae0;
}

class cocos2d::CCWaves3D {
    virtual ~CCWaves3D() = 0x129ac0;
    virtual void update(float) = 0x127170;
}

class cocos2d::extension::CCTableView {
    virtual ~CCTableView() = 0x233a60;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x234bf0;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x234da0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x234ae0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x234e50;
}

class cocos2d::extension::CCHttpClient {
    virtual ~CCHttpClient() = 0x23da60;
}

class cocos2d::extension::CCScrollView {
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

// class cocos2d::extension::AssetsManager::Helper {
//    virtual  ~Helper() = 0x2e83e0;
//    virtual  ~Helper() = 0x2e83f0;
//    virtual  void update(float) = 0x2e8420;
// }

// class cocos2d::extension::AssetsManager {
//    virtual  ~AssetsManager() = 0x2e71d0;
//    virtual  void checkUpdate() = 0x2e7200;
//    virtual  void update() = 0x2e7e80;
// }

class cocos2d::extension::CCScale9Sprite {
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

class cocos2d::extension::CCControlButton {
    virtual ~CCControlButton() = 0x1a8380;
    virtual bool init() = 0x1a8420;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1a9c20;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1a9db0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1a9ef0;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1aa1a0;
    virtual void getOpacity() = 0x1aa090;
    virtual void setOpacity(unsigned char) = 0x1a9fc0;
    virtual void getColor() = 0x1aa180;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x1aa0b0;
    virtual void setEnabled(bool) = 0x1a8b00;
    virtual void setSelected(bool) = 0x1a8b30;
    virtual void setHighlighted(bool) = 0x1a8b60;
    virtual void needsLayout() = 0x1a9700;
    virtual void getPreferredSize() = 0x1a8d20;
    virtual void setPreferredSize(cocos2d::CCSize) = 0x1a8c60;
    virtual void getZoomOnTouchDown() = 0x1a8c50;
    virtual void setZoomOnTouchDown(bool) = 0x1a8c40;
    virtual void getLabelAnchorPoint() = 0x1a8d50;
    virtual void setLabelAnchorPoint(cocos2d::CCPoint) = 0x1a8d70;
    virtual void setMargins(int, int) = 0x1a8ae0;
    virtual void initWithLabelAndBackgroundSprite(cocos2d::CCNode*, cocos2d::extension::CCScale9Sprite*) = 0x1a8480;
    virtual void initWithTitleAndFontNameAndFontSize(gd::string, char const*, float) = 0x1a88f0;
    virtual void initWithBackgroundSprite(cocos2d::extension::CCScale9Sprite*) = 0x1a8a30;
    virtual void getTitleForState(unsigned int) = 0x1a8db0;
    virtual void setTitleForState(cocos2d::CCString*, unsigned int) = 0x1a8e90;
    virtual void getTitleColorForState(unsigned int) = 0x1a8f00;
    virtual void setTitleColorForState(cocos2d::_ccColor3B, unsigned int) = 0x1a8f60;
    virtual void getTitleLabelForState(unsigned int) = 0x1a9020;
    virtual void setTitleLabelForState(cocos2d::CCNode*, unsigned int) = 0x1a9060;
    virtual void setTitleTTFForState(char const*, unsigned int) = 0x1a9140;
    virtual void getTitleTTFForState(unsigned int) = 0x1a9240;
    virtual void setTitleTTFSizeForState(float, unsigned int) = 0x1a92b0;
    virtual void getTitleTTFSizeForState(unsigned int) = 0x1a9330;
    virtual void setTitleBMFontForState(char const*, unsigned int) = 0x1a93a0;
    virtual void getTitleBMFontForState(unsigned int) = 0x1a9490;
    virtual void getBackgroundSpriteForState(unsigned int) = 0x1a9500;
    virtual void setBackgroundSpriteForState(cocos2d::extension::CCScale9Sprite*, unsigned int) = 0x1a9540;
    virtual void setBackgroundSpriteFrameForState(cocos2d::CCSpriteFrame*, unsigned int) = 0x1a96d0;
}

class cocos2d::extension::CCControlSlider {
    virtual ~CCControlSlider() = 0x1de040;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1de890;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1deaf0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1decc0;
    virtual void setEnabled(bool) = 0x1de610;
    virtual void needsLayout() = 0x1deea0;
    virtual void isTouchInside(cocos2d::CCTouch*) = 0x1de750;
    virtual void setValue(float) = 0x1de660;
    virtual void setMinimumValue(float) = 0x1de6b0;
    virtual void setMaximumValue(float) = 0x1de700;
    virtual void initWithSprites(cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*) = 0x1de320;
}

class cocos2d::extension::CCControlSwitch {
    virtual ~CCControlSwitch() = 0x1e5330;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e5bc0;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e5cb0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e5d80;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e5ef0;
    virtual void setEnabled(bool) = 0x1e5b30;
}

class cocos2d::extension::CCControlStepper {
    virtual ~CCControlStepper() = 0x1e0960;
    virtual void update(float) = 0x1e12a0;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e1470;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e1620;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1e1750;
    virtual void setWraps(bool) = 0x1e0fe0;
    virtual void setMinimumValue(double) = 0x1e1060;
    virtual void setMaximumValue(double) = 0x1e1090;
    virtual void setValue(double) = 0x1e10c0;
    virtual void getValue() = 0x1e10e0;
    virtual void setStepValue(double) = 0x1e10f0;
    virtual void setValueWithSendingEvent(double, bool) = 0x1e1110;
    virtual void isContinuous() = 0x1e1100;
}

class cocos2d::extension::CCControlHuePicker {
    virtual ~CCControlHuePicker() = 0x1ab960;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1ac050;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1ac150;
    virtual void registerWithTouchDispatcher() = 0x1abcd0;
    virtual void setEnabled(bool) = 0x1abe70;
    virtual void setHue(float) = 0x1abd40;
    virtual void setHuePercentage(float) = 0x1abd70;
    virtual void initWithTargetAndPos(cocos2d::CCNode*, cocos2d::CCPoint) = 0x1abb30;
}

// class cocos2d::extension::CCControlSwitchSprite {
//    virtual  ~CCControlSwitchSprite() = 0x1e4760;
//    virtual  ~CCControlSwitchSprite() = 0x1e4790;
//    virtual  void draw() = 0x1e4f90;
//    virtual  void updateTweenAction(float, char const*) = 0x1e4ed0;
// }

class cocos2d::extension::CCControlPotentiometer {
    virtual ~CCControlPotentiometer() = 0x1ad590;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1ade70;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1ae030;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1ae2a0;
    virtual void setEnabled(bool) = 0x1adb80;
    virtual void isTouchInside(cocos2d::CCTouch*) = 0x1add50;
}

class cocos2d::extension::CCControlSaturationBrightnessPicker {
    virtual ~CCControlSaturationBrightnessPicker() = 0x1b3550;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1b4030;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x1b4130;
    virtual void registerWithTouchDispatcher() = 0x1b3fc0;
    virtual void setEnabled(bool) = 0x1b3b00;
    virtual void initWithTargetAndPos(cocos2d::CCNode*, cocos2d::CCPoint) = 0x1b3820;
    virtual void updateWithHSV(cocos2d::extension::HSV) = 0x1b3b50;
    virtual void updateDraggerWithHSV(cocos2d::extension::HSV) = 0x1b3bf0;
}

class cocos2d::extension::CCControl {
    virtual ~CCControl() = 0x1a7380;
    virtual bool init() = 0x1a71c0;
    virtual void onEnter() = 0x1a7470;
    virtual void onExit() = 0x1a7480;
    virtual void registerWithTouchDispatcher() = 0x1a7420;
    virtual void setOpacityModifyRGB(bool) = 0x1a7c10;
    virtual void isOpacityModifyRGB() = 0x1a7d70;
    virtual void setEnabled(bool) = 0x1a7e60;
    virtual void isEnabled() = 0x1a7e90;
    virtual void setSelected(bool) = 0x1a7ea0;
    virtual void isSelected() = 0x1a7ec0;
    virtual void setHighlighted(bool) = 0x1a7ed0;
    virtual void isHighlighted() = 0x1a7ef0;
    virtual void needsLayout() = 0x1a7e50;
    virtual void sendActionsForControlEvents(unsigned int) = 0x1a7490;
    virtual void addTargetWithActionForControlEvents(cocos2d::CCObject*, cocos2d::extension::SEL_EventHandler, unsigned int) = 0x1a7820;
    virtual void removeTargetWithActionForControlEvents(cocos2d::CCObject*, cocos2d::extension::SEL_EventHandler, unsigned int) = 0x1a7950;
    virtual void getTouchLocation(cocos2d::CCTouch*) = 0x1a7d90;
    virtual void isTouchInside(cocos2d::CCTouch*) = 0x1a7de0;
}

class cocos2d::extension::CCEditBox {
    virtual ~CCEditBox() = 0x26cfd0;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x26d850;
    virtual void setAnchorPoint(cocos2d::CCPoint const&) = 0x26d910;
    virtual void setContentSize(cocos2d::CCSize const&) = 0x26d8d0;
    virtual void setVisible(bool) = 0x26d890;
    virtual void onEnter() = 0x26d980;
    virtual void onExit() = 0x26d9b0;
    virtual void visit() = 0x26d950;
    virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x26d9e0;
    virtual void keyboardDidShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x26daf0;
    virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x26db10;
    virtual void keyboardDidHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x26db80;
}
