#include <Header.hpp>


GJBaseGameLayer::~GJBaseGameLayer() {
    return reinterpret_cast<GJBaseGameLayer*(*)(GJBaseGameLayer*)>(base+0xafbf0)(this);
}

bool GJBaseGameLayer::init() {
    return reinterpret_cast<bool(*)(GJBaseGameLayer*)>(base+0xafc90)(this);
}

void GJBaseGameLayer::objectsCollided(int p0, int p1) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, int, int)>(base+0xb6d90)(this, p0, p1);
}

void GJBaseGameLayer::createMoveCommand(cocos2d::CCPoint p0, int p1, float p2, int p3, float p4, bool p5, bool p6, int p7) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, cocos2d::CCPoint, int, float, int, float, bool, bool, int)>(base+0xb73a0)(this, p0, p1, p2, p3, p4, p5, p6, p7);
}

void GJBaseGameLayer::updateColor(cocos2d::_ccColor3B p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue p5, int p6, bool p7, int p8, EffectGameObject* p9) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)>(base+0xb7420)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
}

void GJBaseGameLayer::flipGravity(PlayerObject* p0, bool p1, bool p2) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, PlayerObject*, bool, bool)>(base+0xba990)(this, p0, p1, p2);
}

void GJBaseGameLayer::calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)>(base+0xba9a0)(this, p0, p1, p2, p3, p4, p5);
}

void GJBaseGameLayer::toggleGroupTriggered(int p0, bool p1) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, int, bool)>(base+0xb75a0)(this, p0, p1);
}

void GJBaseGameLayer::spawnGroup(int p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, int)>(base+0xb7050)(this, p0);
}

void GJBaseGameLayer::addToSection(GameObject* p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, GameObject*)>(base+0xb7b70)(this, p0);
}

void GJBaseGameLayer::addToGroup(GameObject* p0, int p1, bool p2) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, GameObject*, int, bool)>(base+0xb77f0)(this, p0, p1, p2);
}

void GJBaseGameLayer::removeFromGroup(GameObject* p0, int p1) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, GameObject*, int)>(base+0xb7a60)(this, p0, p1);
}

void GJBaseGameLayer::addObjectCounter(LabelGameObject* p0, int p1) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, LabelGameObject*, int)>(base+0xb9eb0)(this, p0, p1);
}

void GJBaseGameLayer::addToGroups(GameObject* p0, bool p1) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, GameObject*, bool)>(base+0xb7780)(this, p0, p1);
}

void GJBaseGameLayer::atlasValue(int p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, int)>(base+0xb21e0)(this, p0);
}

void GJBaseGameLayer::bumpPlayer(PlayerObject* p0, GameObject* p1) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, PlayerObject*, GameObject*)>(base+0xb6860)(this, p0, p1);
}

void GJBaseGameLayer::calculateOpacityValues(EffectGameObject* p0, EffectGameObject* p1, float p2, GJEffectManager* p3) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, EffectGameObject*, EffectGameObject*, float, GJEffectManager*)>(base+0xb5be0)(this, p0, p1, p2, p3);
}

void GJBaseGameLayer::checkSpawnObjects() {
    return reinterpret_cast<void(*)(GJBaseGameLayer*)>(base+0xb6f90)(this);
}

void GJBaseGameLayer::collectItem(int p0, int p1) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, int, int)>(base+0xb9e20)(this, p0, p1);
}

void GJBaseGameLayer::collectedObject(EffectGameObject* p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, EffectGameObject*)>(base+0xb9b60)(this, p0);
}

void GJBaseGameLayer::createTextLayers() {
    return reinterpret_cast<void(*)(GJBaseGameLayer*)>(base+0xb5260)(this);
}

void GJBaseGameLayer::damagingObjectsInRect(cocos2d::CCRect p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, cocos2d::CCRect)>(base+0xb6140)(this, p0);
}

void GJBaseGameLayer::enableHighCapacityMode() {
    return reinterpret_cast<void(*)(GJBaseGameLayer*)>(base+0xb11e0)(this);
}

void GJBaseGameLayer::getCapacityString() {
    return reinterpret_cast<void(*)(GJBaseGameLayer*)>(base+0xb2210)(this);
}

void GJBaseGameLayer::getGroundHeightForMode(int p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, int)>(base+0xb6630)(this, p0);
}

void GJBaseGameLayer::getGroup(int p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, int)>(base+0xb6f20)(this, p0);
}

void GJBaseGameLayer::getMoveDeltaForObjects(int p0, int p1) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, int, int)>(base+0xb6db0)(this, p0, p1);
}

void GJBaseGameLayer::getOptimizedGroup(int p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, int)>(base+0xb7940)(this, p0);
}

void GJBaseGameLayer::getStaticGroup(int p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, int)>(base+0xb79a0)(this, p0);
}

void GJBaseGameLayer::isGroupDisabledForObject(GameObject* p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, GameObject*)>(base+0xb5cc0)(this, p0);
}

void GJBaseGameLayer::isGroupDisabledForObjectFull(GameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, GameObject*, cocos2d::CCArray*)>(base+0xb5de0)(this, p0, p1);
}

void GJBaseGameLayer::loadUpToPosition(float p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, float)>(base+0xba680)(this, p0);
}

void GJBaseGameLayer::objectIntersectsCircle(GameObject* p0, GameObject* p1) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, GameObject*, GameObject*)>(base+0xb66e0)(this, p0, p1);
}

void GJBaseGameLayer::objectTriggered(EffectGameObject* p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, EffectGameObject*)>(base+0xb71b0)(this, p0);
}

void GJBaseGameLayer::optimizeMoveGroups() {
    return reinterpret_cast<void(*)(GJBaseGameLayer*)>(base+0xb96c0)(this);
}

void GJBaseGameLayer::parentForZLayer(int p0, bool p1, int p2) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, int, bool, int)>(base+0xb55d0)(this, p0, p1, p2);
}

void GJBaseGameLayer::playerTouchedRing(PlayerObject* p0, GameObject* p1) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, PlayerObject*, GameObject*)>(base+0xb69e0)(this, p0, p1);
}

void GJBaseGameLayer::processColorObject(EffectGameObject* p0, int p1, cocos2d::CCDictionary* p2, float p3, GJEffectManager* p4) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, EffectGameObject*, int, cocos2d::CCDictionary*, float, GJEffectManager*)>(base+0xb5a90)(this, p0, p1, p2, p3, p4);
}

void GJBaseGameLayer::processFollowActions() {
    return reinterpret_cast<void(*)(GJBaseGameLayer*)>(base+0xb8fd0)(this);
}

void GJBaseGameLayer::processMoveActions() {
    return reinterpret_cast<void(*)(GJBaseGameLayer*)>(base+0xb86c0)(this);
}

void GJBaseGameLayer::processMoveActionsStep(float p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, float)>(base+0xb7ea0)(this, p0);
}

void GJBaseGameLayer::processOpacityObject(EffectGameObject* p0, cocos2d::CCDictionary* p1, float p2, GJEffectManager* p3) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, EffectGameObject*, cocos2d::CCDictionary*, float, GJEffectManager*)>(base+0xb5ae0)(this, p0, p1, p2, p3);
}

void GJBaseGameLayer::processPlayerFollowActions(float p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, float)>(base+0xb8b50)(this, p0);
}

void GJBaseGameLayer::processRotationActions() {
    return reinterpret_cast<void(*)(GJBaseGameLayer*)>(base+0xb7fd0)(this);
}

void GJBaseGameLayer::pushButton(int p0, bool p1) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, int, bool)>(base+0xb9920)(this, p0, p1);
}

void GJBaseGameLayer::rectIntersectsCircle(cocos2d::CCRect p0, cocos2d::CCPoint p1, float p2) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, cocos2d::CCRect, cocos2d::CCPoint, float)>(base+0xb6470)(this, p0, p1, p2);
}

void GJBaseGameLayer::refreshCounterLabels() {
    return reinterpret_cast<void(*)(GJBaseGameLayer*)>(base+0xb9fc0)(this);
}

void GJBaseGameLayer::releaseButton(int p0, bool p1) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, int, bool)>(base+0xb9a00)(this, p0, p1);
}

void GJBaseGameLayer::removeFromGroups(GameObject* p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, GameObject*)>(base+0xb7a00)(this, p0);
}

void GJBaseGameLayer::removeObjectFromSection(GameObject* p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, GameObject*)>(base+0xb7e00)(this, p0);
}

void GJBaseGameLayer::reorderObjectSection(GameObject* p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, GameObject*)>(base+0xb7cb0)(this, p0);
}

void GJBaseGameLayer::resetGroupCounters(bool p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, bool)>(base+0xba300)(this, p0);
}

void GJBaseGameLayer::resetMoveOptimizedValue() {
    return reinterpret_cast<void(*)(GJBaseGameLayer*)>(base+0xb9670)(this);
}

void GJBaseGameLayer::sectionForPos(float p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, float)>(base+0xb6120)(this, p0);
}

void GJBaseGameLayer::setupLayers() {
    return reinterpret_cast<void(*)(GJBaseGameLayer*)>(base+0xaffe0)(this);
}

void GJBaseGameLayer::shouldExitHackedLevel() {
    return reinterpret_cast<void(*)(GJBaseGameLayer*)>(base+0xb1100)(this);
}

void GJBaseGameLayer::spawnGroupTriggered(int p0, float p1, int p2) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, int, float, int)>(base+0xb7020)(this, p0, p1, p2);
}

void GJBaseGameLayer::staticObjectsInRect(cocos2d::CCRect p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, cocos2d::CCRect)>(base+0xb5f90)(this, p0);
}

void GJBaseGameLayer::testInstantCountTrigger(int p0, int p1, int p2, bool p3, int p4) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, int, int, int, bool, int)>(base+0xb9ae0)(this, p0, p1, p2, p3, p4);
}

void GJBaseGameLayer::toggleGroup(int p0, bool p1) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, int, bool)>(base+0xb75f0)(this, p0, p1);
}

void GJBaseGameLayer::togglePlayerVisibility(bool p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, bool)>(base+0xba910)(this, p0);
}

void GJBaseGameLayer::triggerMoveCommand(EffectGameObject* p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, EffectGameObject*)>(base+0xb7290)(this, p0);
}

void GJBaseGameLayer::updateCollisionBlocks() {
    return reinterpret_cast<void(*)(GJBaseGameLayer*)>(base+0xb6a30)(this);
}

void GJBaseGameLayer::updateCounters(int p0, int p1) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, int, int)>(base+0xb9bc0)(this, p0, p1);
}

void GJBaseGameLayer::updateDisabledObjectsLastPos(cocos2d::CCArray* p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, cocos2d::CCArray*)>(base+0xb95b0)(this, p0);
}

void GJBaseGameLayer::updateLayerCapacity(std::string p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, std::string)>(base+0xb1680)(this, p0);
}

void GJBaseGameLayer::updateLegacyLayerCapacity(int p0, int p1, int p2, int p3) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, int, int, int, int)>(base+0xb1590)(this, p0, p1, p2, p3);
}

void GJBaseGameLayer::updateOBB2(cocos2d::CCRect p0) {
    return reinterpret_cast<void(*)(GJBaseGameLayer*, cocos2d::CCRect)>(base+0xb63f0)(this, p0);
}

void GJBaseGameLayer::updateQueuedLabels() {
    return reinterpret_cast<void(*)(GJBaseGameLayer*)>(base+0xb9f30)(this);
}
