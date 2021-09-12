#include <Header.hpp>

ButtonSprite* ButtonSprite::create(char const* p0) {
    return reinterpret_cast<ButtonSprite*(*)(char const*)>(base+0x4fa10)(p0);
}

ButtonSprite* ButtonSprite::create(char const* p0, int p1, int p2, float p3, bool p4) {
    return reinterpret_cast<ButtonSprite*(*)(char const*, int, int, float, bool)>(base+0x4fa40)(p0, p1, p2, p3, p4);
}

void ButtonSprite::updateBGImage(char const* p0) {
    return reinterpret_cast<void(*)(ButtonSprite*, char const*)>(base+0x502d0)(this, p0);
}

ButtonSprite* ButtonSprite::create(char const* p0, float p1) {
    return reinterpret_cast<ButtonSprite*(*)(char const*, float)>(base+0x4fa60)(p0, p1);
}

ButtonSprite* ButtonSprite::create(cocos2d::CCSprite* p0, int p1, int p2, float p3, float p4, bool p5, char const* p6, bool p7) {
    return reinterpret_cast<ButtonSprite*(*)(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool)>(base+0x4fa90)(p0, p1, p2, p3, p4, p5, p6, p7);
}

FLAlertLayer::~FLAlertLayer() {
    reinterpret_cast<FLAlertLayer*(*)(FLAlertLayer*)>(base+0x25db60)(this);
}

void FLAlertLayer::onEnter() {
    return reinterpret_cast<void(*)(FLAlertLayer*)>(base+0x25f350)(this);
}

bool FLAlertLayer::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<bool(*)(FLAlertLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x25ee40)(this, p0, p1);
}

void FLAlertLayer::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(FLAlertLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x25f0a0)(this, p0, p1);
}

void FLAlertLayer::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(FLAlertLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x25ef60)(this, p0, p1);
}

void FLAlertLayer::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(FLAlertLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x25f020)(this, p0, p1);
}

void FLAlertLayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(FLAlertLayer*)>(base+0x25f2e0)(this);
}

void FLAlertLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(FLAlertLayer*)>(base+0x25ed90)(this);
}

void FLAlertLayer::keyDown(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(FLAlertLayer*, cocos2d::enumKeyCodes)>(base+0x25ece0)(this, p0);
}

void FLAlertLayer::show() {
    return reinterpret_cast<void(*)(FLAlertLayer*)>(base+0x25f120)(this);
}

bool FLAlertLayer::init(FLAlertLayerProtocol* p0, char const* p1, std::string p2, char const* p3, char const* p4, float p5, bool p6, float p7) {
    return reinterpret_cast<bool(*)(FLAlertLayer*, FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)>(base+0x25e1b0)(this, p0, p1, p2, p3, p4, p5, p6, p7);
}

FLAlertLayer* FLAlertLayer::create(FLAlertLayerProtocol* p0, char const* p1, std::string p2, char const* p3, char const* p4, float p5) {
    return reinterpret_cast<FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float)>(base+0x25e0e0)(p0, p1, p2, p3, p4, p5);
}

FLAlertLayer* FLAlertLayer::create(FLAlertLayerProtocol* p0, char const* p1, std::string p2, char const* p3, char const* p4, float p5, bool p6, float p7) {
    return reinterpret_cast<FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)>(base+0x25dec0)(p0, p1, p2, p3, p4, p5, p6, p7);
}

cocos2d::CCObject::~CCObject() {
    reinterpret_cast<cocos2d::CCObject*(*)(cocos2d::CCObject*)>(base+0x250d90)(this);
}

void cocos2d::CCObject::isEqual(cocos2d::CCObject const*) {
    return reinterpret_cast<void(*)(cocos2d::CCObject*, cocos2d::CCObject)>(base+0x250f20)(this, const*);
}

void cocos2d::CCObject::acceptVisitor(cocos2d::CCDataVisitor& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCObject*, cocos2d::CCDataVisitor&)>(base+0x250f30)(this, p0);
}

void cocos2d::CCObject::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCObject*, float)>(base+0x32660)(this, p0);
}

void cocos2d::CCObject::encodeWithCoder(DS_Dictionary* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCObject*, DS_Dictionary*)>(base+0x250f70)(this, p0);
}

bool cocos2d::CCObject::canEncode() {
    return reinterpret_cast<bool(*)(cocos2d::CCObject*)>(base+0x250f90)(this);
}

void cocos2d::CCObject::getTag() const {
    return reinterpret_cast<void(*)(const cocos2d::CCObject*)>(base+0x250f50)(this);
}

void cocos2d::CCObject::setTag(int p0) {
    return reinterpret_cast<void(*)(cocos2d::CCObject*, int)>(base+0x250f60)(this, p0);
}

cocos2d::CCLayer::~CCLayer() {
    reinterpret_cast<cocos2d::CCLayer*(*)(cocos2d::CCLayer*)>(base+0x272900)(this);
}

bool cocos2d::CCLayer::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCLayer*)>(base+0x2729a0)(this);
}

void cocos2d::CCLayer::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*)>(base+0x273300)(this);
}

void cocos2d::CCLayer::onEnterTransitionDidFinish() {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*)>(base+0x273490)(this);
}

void cocos2d::CCLayer::onExit() {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*)>(base+0x2733c0)(this);
}

bool cocos2d::CCLayer::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<bool(*)(cocos2d::CCLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x2734d0)(this, p0, p1);
}

void cocos2d::CCLayer::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x273550)(this, p0, p1);
}

void cocos2d::CCLayer::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x2735d0)(this, p0, p1);
}

void cocos2d::CCLayer::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x273650)(this, p0, p1);
}

void cocos2d::CCLayer::ccTouchesBegan(cocos2d::CCSet* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, cocos2d::CCSet*, cocos2d::CCEvent*)>(base+0x2736d0)(this, p0, p1);
}

void cocos2d::CCLayer::ccTouchesMoved(cocos2d::CCSet* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, cocos2d::CCSet*, cocos2d::CCEvent*)>(base+0x273750)(this, p0, p1);
}

void cocos2d::CCLayer::ccTouchesEnded(cocos2d::CCSet* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, cocos2d::CCSet*, cocos2d::CCEvent*)>(base+0x2737d0)(this, p0, p1);
}

void cocos2d::CCLayer::ccTouchesCancelled(cocos2d::CCSet* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, cocos2d::CCSet*, cocos2d::CCEvent*)>(base+0x273850)(this, p0, p1);
}

void cocos2d::CCLayer::didAccelerate(cocos2d::CCAcceleration* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, cocos2d::CCAcceleration*)>(base+0x272ea0)(this, p0);
}

void cocos2d::CCLayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*)>(base+0x272b40)(this);
}

void cocos2d::CCLayer::registerScriptTouchHandler(int p0, bool p1, int p2, bool p3) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, int, bool, int, bool)>(base+0x272bd0)(this, p0, p1, p2, p3);
}

void cocos2d::CCLayer::unregisterScriptTouchHandler() {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*)>(base+0x272c30)(this);
}

void cocos2d::CCLayer::isTouchEnabled() {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*)>(base+0x272ce0)(this);
}

void cocos2d::CCLayer::setTouchEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, bool)>(base+0x272cf0)(this, p0);
}

void cocos2d::CCLayer::setTouchMode(cocos2d::ccTouchesMode p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, cocos2d::ccTouchesMode)>(base+0x272d60)(this, p0);
}

void cocos2d::CCLayer::getTouchMode() {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*)>(base+0x272e10)(this);
}

void cocos2d::CCLayer::setTouchPriority(int p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, int)>(base+0x272db0)(this, p0);
}

void cocos2d::CCLayer::getTouchPriority() {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*)>(base+0x272e00)(this);
}

void cocos2d::CCLayer::isAccelerometerEnabled() {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*)>(base+0x272e20)(this);
}

void cocos2d::CCLayer::setAccelerometerEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, bool)>(base+0x272e30)(this, p0);
}

void cocos2d::CCLayer::setAccelerometerInterval(double p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, double)>(base+0x272e70)(this, p0);
}

void cocos2d::CCLayer::isKeypadEnabled() {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*)>(base+0x272f70)(this);
}

void cocos2d::CCLayer::setKeypadEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, bool)>(base+0x272f80)(this, p0);
}

void cocos2d::CCLayer::isKeyboardEnabled() {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*)>(base+0x273010)(this);
}

void cocos2d::CCLayer::setKeyboardEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, bool)>(base+0x273020)(this, p0);
}

void cocos2d::CCLayer::isMouseEnabled() {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*)>(base+0x273090)(this);
}

void cocos2d::CCLayer::setMouseEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, bool)>(base+0x2730a0)(this, p0);
}

void cocos2d::CCLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*)>(base+0x273160)(this);
}

void cocos2d::CCLayer::keyMenuClicked() {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*)>(base+0x273200)(this);
}

void cocos2d::CCLayer::keyDown(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, cocos2d::enumKeyCodes)>(base+0x273280)(this, p0);
}

cocos2d::CCLayer* cocos2d::CCLayer::create() {
    return reinterpret_cast<cocos2d::CCLayer*(*)()>(base+0x272a00)();
}

cocos2d::CCNode::~CCNode() {
    reinterpret_cast<cocos2d::CCNode*(*)(cocos2d::CCNode*)>(base+0x1228d0)(this);
}

void cocos2d::CCNode::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x1241a0)(this, p0);
}

bool cocos2d::CCNode::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCNode*)>(base+0x122910)(this);
}

void cocos2d::CCNode::setZOrder(int p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, int)>(base+0x1229a0)(this, p0);
}

void cocos2d::CCNode::_setZOrder(int p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, int)>(base+0x122990)(this, p0);
}

void cocos2d::CCNode::getZOrder() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122980)(this);
}

void cocos2d::CCNode::setVertexZ(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x1229f0)(this, p0);
}

void cocos2d::CCNode::getVertexZ() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x1229e0)(this);
}

void cocos2d::CCNode::setScaleX(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122b10)(this, p0);
}

void cocos2d::CCNode::getScaleX() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122b00)(this);
}

void cocos2d::CCNode::setScaleY(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122b40)(this, p0);
}

void cocos2d::CCNode::getScaleY() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122b30)(this);
}

void cocos2d::CCNode::setScale(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122ac0)(this, p0);
}

void cocos2d::CCNode::getScale() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122ab0)(this);
}

void cocos2d::CCNode::setScale(float p0, float p1) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float, float)>(base+0x122ae0)(this, p0, p1);
}

void cocos2d::CCNode::setPosition(cocos2d::CCPoint const&) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCPoint)>(base+0x122b70)(this, const&);
}

void cocos2d::CCNode::getPosition() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122b60)(this);
}

void cocos2d::CCNode::setPosition(float p0, float p1) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float, float)>(base+0x122ba0)(this, p0, p1);
}

void cocos2d::CCNode::getPosition(float* p0, float* p1) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float*, float*)>(base+0x122b90)(this, p0, p1);
}

void cocos2d::CCNode::setPositionX(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122c00)(this, p0);
}

void cocos2d::CCNode::getPositionX() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122be0)(this);
}

void cocos2d::CCNode::setPositionY(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122c40)(this, p0);
}

void cocos2d::CCNode::getPositionY() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122bf0)(this);
}

void cocos2d::CCNode::setSkewX(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122930)(this, p0);
}

void cocos2d::CCNode::getSkewX() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122920)(this);
}

void cocos2d::CCNode::setSkewY(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122960)(this, p0);
}

void cocos2d::CCNode::getSkewY() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122950)(this);
}

void cocos2d::CCNode::setAnchorPoint(cocos2d::CCPoint const&) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCPoint)>(base+0x122d90)(this, const&);
}

void cocos2d::CCNode::getAnchorPoint() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122d80)(this);
}

void cocos2d::CCNode::getAnchorPointInPoints() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122d70)(this);
}

void cocos2d::CCNode::setContentSize(cocos2d::CCSize const&) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCSize)>(base+0x122e50)(this, const&);
}

void cocos2d::CCNode::getContentSize() const {
    return reinterpret_cast<void(*)(const cocos2d::CCNode*)>(base+0x122e00)(this);
}

void cocos2d::CCNode::getScaledContentSize() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122e10)(this);
}

void cocos2d::CCNode::setVisible(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, bool)>(base+0x122d60)(this, p0);
}

void cocos2d::CCNode::isVisible() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122d50)(this);
}

void cocos2d::CCNode::setRotation(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122a10)(this, p0);
}

void cocos2d::CCNode::getRotation() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122a00)(this);
}

void cocos2d::CCNode::setRotationX(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122a60)(this, p0);
}

void cocos2d::CCNode::getRotationX() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122a50)(this);
}

void cocos2d::CCNode::setRotationY(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122a90)(this, p0);
}

void cocos2d::CCNode::getRotationY() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122a80)(this);
}

void cocos2d::CCNode::setOrderOfArrival(unsigned int p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, unsigned int)>(base+0x122f60)(this, p0);
}

void cocos2d::CCNode::getOrderOfArrival() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122f50)(this);
}

void cocos2d::CCNode::setGLServerState(cocos2d::ccGLServerState p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::ccGLServerState)>(base+0x122fa0)(this, p0);
}

void cocos2d::CCNode::getGLServerState() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122f90)(this);
}

void cocos2d::CCNode::ignoreAnchorPointForPosition(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, bool)>(base+0x122f00)(this, p0);
}

void cocos2d::CCNode::isIgnoreAnchorPointForPosition() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122ef0)(this);
}

void cocos2d::CCNode::addChild(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCNode*)>(base+0x1233d0)(this, p0);
}

void cocos2d::CCNode::addChild(cocos2d::CCNode* p0, int p1) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCNode*, int)>(base+0x1233b0)(this, p0, p1);
}

void cocos2d::CCNode::addChild(cocos2d::CCNode* p0, int p1, int p2) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCNode*, int, int)>(base+0x1232a0)(this, p0, p1, p2);
}

void cocos2d::CCNode::getChildByTag(int p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, int)>(base+0x123220)(this, p0);
}

void cocos2d::CCNode::getChildren() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122c80)(this);
}

void cocos2d::CCNode::getChildrenCount() const {
    return reinterpret_cast<void(*)(const cocos2d::CCNode*)>(base+0x122c90)(this);
}

void cocos2d::CCNode::setParent(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCNode*)>(base+0x122ee0)(this, p0);
}

void cocos2d::CCNode::getParent() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122ed0)(this);
}

void cocos2d::CCNode::removeFromParent() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x1233f0)(this);
}

void cocos2d::CCNode::removeFromParentAndCleanup(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, bool)>(base+0x123410)(this, p0);
}

void cocos2d::CCNode::removeMeAndCleanup() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x123440)(this);
}

void cocos2d::CCNode::removeChild(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCNode*)>(base+0x123460)(this, p0);
}

void cocos2d::CCNode::removeChild(cocos2d::CCNode* p0, bool p1) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCNode*, bool)>(base+0x123480)(this, p0, p1);
}

void cocos2d::CCNode::removeChildByTag(int p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, int)>(base+0x1235a0)(this, p0);
}

void cocos2d::CCNode::removeChildByTag(int p0, bool p1) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, int, bool)>(base+0x1235c0)(this, p0, p1);
}

void cocos2d::CCNode::removeAllChildren() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x123600)(this);
}

void cocos2d::CCNode::removeAllChildrenWithCleanup(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, bool)>(base+0x123620)(this, p0);
}

void cocos2d::CCNode::reorderChild(cocos2d::CCNode* p0, int p1) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCNode*, int)>(base+0x123760)(this, p0, p1);
}

void cocos2d::CCNode::sortAllChildren() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x1237b0)(this);
}

void cocos2d::CCNode::getGrid() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122d00)(this);
}

void cocos2d::CCNode::setGrid(cocos2d::CCGridBase* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCGridBase*)>(base+0x122d10)(this, p0);
}

void cocos2d::CCNode::getUserData() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122f30)(this);
}

void cocos2d::CCNode::setUserData(void* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, void*)>(base+0x122f40)(this, p0);
}

void cocos2d::CCNode::getUserObject() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122f80)(this);
}

void cocos2d::CCNode::setUserObject(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCObject*)>(base+0x122fb0)(this, p0);
}

void cocos2d::CCNode::getShaderProgram() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122f70)(this);
}

void cocos2d::CCNode::setShaderProgram(cocos2d::CCGLProgram* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCGLProgram*)>(base+0x122ff0)(this, p0);
}

void cocos2d::CCNode::getCamera() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122cb0)(this);
}

void cocos2d::CCNode::isRunning() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x122ec0)(this);
}

void cocos2d::CCNode::registerScriptHandler(int p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, int)>(base+0x123d90)(this, p0);
}

void cocos2d::CCNode::unregisterScriptHandler() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x123dc0)(this);
}

void cocos2d::CCNode::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x123a90)(this);
}

void cocos2d::CCNode::onEnterTransitionDidFinish() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x123b90)(this);
}

void cocos2d::CCNode::onExit() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x123ca0)(this);
}

void cocos2d::CCNode::onExitTransitionDidStart() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x123c00)(this);
}

void cocos2d::CCNode::cleanup() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x123100)(this);
}

void cocos2d::CCNode::draw() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x123840)(this);
}

void cocos2d::CCNode::visit() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x123850)(this);
}

void cocos2d::CCNode::setActionManager(cocos2d::CCActionManager* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCActionManager*)>(base+0x123e00)(this, p0);
}

void cocos2d::CCNode::getActionManager() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x123e50)(this);
}

void cocos2d::CCNode::setScheduler(cocos2d::CCScheduler* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCScheduler*)>(base+0x123f20)(this, p0);
}

void cocos2d::CCNode::getScheduler() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x123f70)(this);
}

void cocos2d::CCNode::updateTransform() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x1249d0)(this);
}

void cocos2d::CCNode::nodeToParentTransform() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x124210)(this);
}

void cocos2d::CCNode::parentToNodeTransform() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x1245d0)(this);
}

void cocos2d::CCNode::nodeToWorldTransform() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x124670)(this);
}

void cocos2d::CCNode::worldToNodeTransform() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x124710)(this);
}

void cocos2d::CCNode::addComponent(cocos2d::CCComponent* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCComponent*)>(base+0x124a40)(this, p0);
}

void cocos2d::CCNode::removeComponent(char const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, char const*)>(base+0x124a60)(this, p0);
}

void cocos2d::CCNode::removeComponent(cocos2d::CCComponent* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCComponent*)>(base+0x124a80)(this, p0);
}

void cocos2d::CCNode::removeAllComponents() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x124aa0)(this);
}

void cocos2d::CCNode::updateTweenAction(float p0, char const* p1) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float, char const*)>(base+0x1249c0)(this, p0, p1);
}

cocos2d::CCLayerColor::~CCLayerColor() {
    reinterpret_cast<cocos2d::CCLayerColor*(*)(cocos2d::CCLayerColor*)>(base+0x2743e0)(this);
}

bool cocos2d::CCLayerColor::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCLayerColor*)>(base+0x274800)(this);
}

void cocos2d::CCLayerColor::setContentSize(cocos2d::CCSize const&) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerColor*, cocos2d::CCSize)>(base+0x2749f0)(this, const&);
}

void cocos2d::CCLayerColor::draw() {
    return reinterpret_cast<void(*)(cocos2d::CCLayerColor*)>(base+0x274b50)(this);
}

void cocos2d::CCLayerColor::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerColor*, unsigned char)>(base+0x274db0)(this, p0);
}

void cocos2d::CCLayerColor::setColor(cocos2d::_ccColor3B const&) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerColor*, cocos2d::_ccColor3B)>(base+0x274c20)(this, const&);
}

void cocos2d::CCLayerColor::initWithColor(cocos2d::_ccColor4B const&, float p1, float p2) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerColor*, cocos2d::_ccColor4B, float, float)>(base+0x274850)(this, const&, p1, p2);
}

void cocos2d::CCLayerColor::initWithColor(cocos2d::_ccColor4B const&) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerColor*, cocos2d::_ccColor4B)>(base+0x2749a0)(this, const&);
}

void cocos2d::CCLayerColor::getBlendFunc() {
    return reinterpret_cast<void(*)(cocos2d::CCLayerColor*)>(base+0x274480)(this);
}

void cocos2d::CCLayerColor::setBlendFunc(cocos2d::_ccBlendFunc p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerColor*, cocos2d::_ccBlendFunc)>(base+0x2744a0)(this, p0);
}

void cocos2d::CCLayerColor::updateColor() {
    return reinterpret_cast<void(*)(cocos2d::CCLayerColor*)>(base+0x274ae0)(this);
}

cocos2d::CCLayerRGBA::~CCLayerRGBA() {
    reinterpret_cast<cocos2d::CCLayerRGBA*(*)(cocos2d::CCLayerRGBA*)>(base+0x273aa0)(this);
}

bool cocos2d::CCLayerRGBA::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCLayerRGBA*)>(base+0x273b40)(this);
}

void cocos2d::CCLayerRGBA::getOpacity() {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*)>(base+0x273be0)(this);
}

void cocos2d::CCLayerRGBA::getDisplayedOpacity() {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*)>(base+0x273c00)(this);
}

void cocos2d::CCLayerRGBA::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*, unsigned char)>(base+0x273c20)(this, p0);
}

void cocos2d::CCLayerRGBA::updateDisplayedOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*, unsigned char)>(base+0x273f20)(this, p0);
}

void cocos2d::CCLayerRGBA::isCascadeOpacityEnabled() {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*)>(base+0x2741f0)(this);
}

void cocos2d::CCLayerRGBA::setCascadeOpacityEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*, bool)>(base+0x274210)(this, p0);
}

void cocos2d::CCLayerRGBA::getColor() {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*)>(base+0x273d60)(this);
}

void cocos2d::CCLayerRGBA::getDisplayedColor() {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*)>(base+0x273d80)(this);
}

void cocos2d::CCLayerRGBA::setColor(cocos2d::_ccColor3B const&) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*, cocos2d::_ccColor3B)>(base+0x273da0)(this, const&);
}

void cocos2d::CCLayerRGBA::updateDisplayedColor(cocos2d::_ccColor3B const&) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*, cocos2d::_ccColor3B)>(base+0x2740b0)(this, const&);
}

void cocos2d::CCLayerRGBA::isCascadeColorEnabled() {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*)>(base+0x274230)(this);
}

void cocos2d::CCLayerRGBA::setCascadeColorEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*, bool)>(base+0x274250)(this, p0);
}

void cocos2d::CCLayerRGBA::setOpacityModifyRGB(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*, bool)>(base+0x6180)(this, p0);
}

void cocos2d::CCLayerRGBA::isOpacityModifyRGB() {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*)>(base+0x6190)(this);
}
