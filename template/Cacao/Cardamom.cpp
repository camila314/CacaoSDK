#include <cc_defs.hpp>

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

void AchievementCell::loadFromDict(cocos2d::CCDictionary* p0) {
    return reinterpret_cast<void(*)(AchievementCell*, cocos2d::CCDictionary*)>(base+0x10eaa0)(this, p0);
}

void AchievementsLayer::customSetup() {
    return reinterpret_cast<void(*)(AchievementsLayer*)>(base+0x1bdea0)(this);
}

void AchievementsLayer::loadPage(int p0) {
    return reinterpret_cast<void(*)(AchievementsLayer*, int)>(base+0x1be190)(this, p0);
}

void AchievementManager::getAllAchievements() {
    return reinterpret_cast<void(*)(AchievementManager*)>(base+0x434d60)(this);
}

void AchievementManager::sharedState() {
    return reinterpret_cast<void(*)(AchievementManager*)>(base+0x424420)(this);
}

void AchievementNotifier::sharedState() {
    return reinterpret_cast<void(*)(AchievementNotifier*)>(base+0x464e00)(this);
}

void AchievementNotifier::willSwitchToScene(cocos2d::CCScene* p0) {
    return reinterpret_cast<void(*)(AchievementNotifier*, cocos2d::CCScene*)>(base+0x4650b0)(this, p0);
}

void AnimatedGameObject::playAnimation(int p0) {
    return reinterpret_cast<void(*)(AnimatedGameObject*, int)>(base+0xc93d0)(this, p0);
}

void AnimatedGameObject::updateChildSpriteColor(cocos2d::_ccColor3B p0) {
    return reinterpret_cast<void(*)(AnimatedGameObject*, cocos2d::_ccColor3B)>(base+0xc8450)(this, p0);
}

void AppDelegate::bgScale() {
    return reinterpret_cast<void(*)(AppDelegate*)>(base+0x3aaab0)(this);
}

bool AppDelegate::applicationDidFinishLaunching() {
    return reinterpret_cast<bool(*)(AppDelegate*)>(base+0x3aa900)(this);
}

void AppDelegate::applicationDidEnterBackground() {
    return reinterpret_cast<void(*)(AppDelegate*)>(base+0x3aabe0)(this);
}

void AppDelegate::applicationWillEnterForeground() {
    return reinterpret_cast<void(*)(AppDelegate*)>(base+0x3aac80)(this);
}

bool AppDelegate::applicationWillBecomeActive() {
    return reinterpret_cast<bool(*)(AppDelegate*)>(base+0x3aab30)(this);
}

bool AppDelegate::applicationWillResignActive() {
    return reinterpret_cast<bool(*)(AppDelegate*)>(base+0x3aab50)(this);
}

void AppDelegate::trySaveGame() {
    return reinterpret_cast<void(*)(AppDelegate*)>(base+0x3aaf10)(this);
}

void AppDelegate::willSwitchToScene(cocos2d::CCScene* p0) {
    return reinterpret_cast<void(*)(AppDelegate*, cocos2d::CCScene*)>(base+0x3aaf40)(this, p0);
}

AppDelegate* AppDelegate::get() {
    return reinterpret_cast<AppDelegate*(*)()>(base+0x3aab10)();
}

void ArtistCell::draw() {
    return reinterpret_cast<void(*)(ArtistCell*)>(base+0x11c980)(this);
}

bool ArtistCell::init() {
    return reinterpret_cast<bool(*)(ArtistCell*)>(base+0x11c7c0)(this);
}

void ArtistCell::loadFromObject(SongInfoObject* p0) {
    return reinterpret_cast<void(*)(ArtistCell*, SongInfoObject*)>(base+0x1118b0)(this, p0);
}

void ArtistCell::onNewgrounds(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(ArtistCell*, cocos2d::CCObject*)>(base+0x11c7e0)(this, p0);
}

void ArtistCell::updateBGColor(int p0) {
    return reinterpret_cast<void(*)(ArtistCell*, int)>(base+0x110460)(this, p0);
}

void AudioEffectsLayer::audioStep(float p0) {
    return reinterpret_cast<void(*)(AudioEffectsLayer*, float)>(base+0x271f40)(this, p0);
}

AudioEffectsLayer* AudioEffectsLayer::create(std::string p0) {
    return reinterpret_cast<AudioEffectsLayer*(*)(std::string)>(base+0x271a00)(p0);
}

void AudioEffectsLayer::resetAudioVars() {
    return reinterpret_cast<void(*)(AudioEffectsLayer*)>(base+0x271ee0)(this);
}

void TableViewDelegate::TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2) {
    return reinterpret_cast<void(*)(TableViewDelegate*, CCIndexPath&, TableViewCell*, TableView*)>(base+0x120480)(this, p0, p1, p2);
}

void TableViewDelegate::didEndTweenToIndexPath(CCIndexPath& p0, TableView* p1) {
    return reinterpret_cast<void(*)(TableViewDelegate*, CCIndexPath&, TableView*)>(base+0x120470)(this, p0, p1);
}

void TableViewDelegate::willTweenToIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2) {
    return reinterpret_cast<void(*)(TableViewDelegate*, CCIndexPath&, TableViewCell*, TableView*)>(base+0x120460)(this, p0, p1, p2);
}

void CCScrollLayerExt::moveToTop() {
    return reinterpret_cast<void(*)(CCScrollLayerExt*)>(base+0x235870)(this);
}

void CCScrollLayerExt::moveToTopWithOffset(float p0) {
    return reinterpret_cast<void(*)(CCScrollLayerExt*, float)>(base+0x2357d0)(this, p0);
}

TableView* TableView::create(TableViewDelegate* p0, TableViewDataSource* p1, cocos2d::CCRect p2) {
    return reinterpret_cast<TableView*(*)(TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect)>(base+0x37eb30)(p0, p1, p2);
}

void TableView::reloadData() {
    return reinterpret_cast<void(*)(TableView*)>(base+0x37f970)(this);
}

BoomListView* BoomListView::create(cocos2d::CCArray* p0, float p1, float p2, int p3, BoomListType p4) {
    return reinterpret_cast<BoomListView*(*)(cocos2d::CCArray*, float, float, int, BoomListType)>(base+0x18ecb0)(p0, p1, p2, p3, p4);
}

bool BoomListView::init(cocos2d::CCArray* p0, float p1, float p2, int p3, BoomListType p4) {
    return reinterpret_cast<bool(*)(BoomListView*, cocos2d::CCArray*, float, float, int, BoomListType)>(base+0x18ee00)(this, p0, p1, p2, p3, p4);
}

void BoomListView::draw() {
    return reinterpret_cast<void(*)(BoomListView*)>(base+0x18f790)(this);
}

void BoomListView::setupList() {
    return reinterpret_cast<void(*)(BoomListView*)>(base+0x18ef90)(this);
}

void BoomListView::TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2) {
    return reinterpret_cast<void(*)(BoomListView*, CCIndexPath&, TableViewCell*, TableView*)>(base+0x18f030)(this, p0, p1, p2);
}

void BoomListView::cellHeightForRowAtIndexPath(CCIndexPath& p0, TableView* p1) {
    return reinterpret_cast<void(*)(BoomListView*, CCIndexPath&, TableView*)>(base+0x18f070)(this, p0, p1);
}

void BoomListView::didSelectRowAtIndexPath(CCIndexPath& p0, TableView* p1) {
    return reinterpret_cast<void(*)(BoomListView*, CCIndexPath&, TableView*)>(base+0x18f090)(this, p0, p1);
}

int BoomListView::numberOfRowsInSection(unsigned int p0, TableView* p1) {
    return reinterpret_cast<int(*)(BoomListView*, unsigned int, TableView*)>(base+0x18f0b0)(this, p0, p1);
}

void BoomListView::numberOfSectionsInTableView(TableView* p0) {
    return reinterpret_cast<void(*)(BoomListView*, TableView*)>(base+0x18f0e0)(this, p0);
}

void BoomListView::cellForRowAtIndexPath(CCIndexPath& p0, TableView* p1) {
    return reinterpret_cast<void(*)(BoomListView*, CCIndexPath&, TableView*)>(base+0x18f100)(this, p0, p1);
}

void BoomListView::TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* p0, TableViewCellEditingStyle p1, CCIndexPath& p2) {
    return reinterpret_cast<void(*)(BoomListView*, TableView*, TableViewCellEditingStyle, CCIndexPath&)>(base+0x18f770)(this, p0, p1, p2);
}

void BoomListView::TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2) {
    return reinterpret_cast<void(*)(BoomListView*, CCIndexPath&, TableViewCell*, TableView*)>(base+0x18f050)(this, p0, p1, p2);
}

TableViewCell* BoomListView::getListCell(char const* p0) {
    return reinterpret_cast<TableViewCell*(*)(BoomListView*, char const*)>(base+0x18f200)(this, p0);
}

void BoomListView::loadCell(TableViewCell* p0, int p1) {
    return reinterpret_cast<void(*)(BoomListView*, TableViewCell*, int)>(base+0x18f4a0)(this, p0, p1);
}

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

void CCAnimatedSprite::runAnimation(std::string p0) {
    return reinterpret_cast<void(*)(CCAnimatedSprite*, std::string)>(base+0x1a6430)(this, p0);
}

void CCAnimatedSprite::tweenToAnimation(std::string p0, float p1) {
    return reinterpret_cast<void(*)(CCAnimatedSprite*, std::string, float)>(base+0x1a65b0)(this, p0, p1);
}

void CCBlockLayer::disableUI() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5a80)(this);
}

void CCBlockLayer::draw() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5c20)(this);
}

void CCBlockLayer::enableUI() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5a90)(this);
}

void CCBlockLayer::enterAnimFinished() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5bb0)(this);
}

void CCBlockLayer::enterLayer() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5aa0)(this);
}

void CCBlockLayer::exitLayer() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5b40)(this);
}

void CCBlockLayer::hideLayer(bool p0) {
    return reinterpret_cast<void(*)(CCBlockLayer*, bool)>(base+0x2a5ba0)(this, p0);
}

bool CCBlockLayer::init() {
    return reinterpret_cast<bool(*)(CCBlockLayer*)>(base+0x2a59c0)(this);
}

void CCBlockLayer::layerHidden() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5be0)(this);
}

void CCBlockLayer::layerVisible() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5bc0)(this);
}

void CCBlockLayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5ad0)(this);
}

void CCBlockLayer::showLayer(bool p0) {
    return reinterpret_cast<void(*)(CCBlockLayer*, bool)>(base+0x2a5b90)(this, p0);
}

CCCircleWave* CCCircleWave::create(float p0, float p1, float p2, bool p3) {
    return reinterpret_cast<CCCircleWave*(*)(float, float, float, bool)>(base+0xbd270)(p0, p1, p2, p3);
}

CCCircleWave* CCCircleWave::create(float p0, float p1, float p2, bool p3, bool p4) {
    return reinterpret_cast<CCCircleWave*(*)(float, float, float, bool, bool)>(base+0xbd290)(p0, p1, p2, p3, p4);
}

bool CCCircleWave::init(float p0, float p1, float p2, bool p3, bool p4) {
    return reinterpret_cast<bool(*)(CCCircleWave*, float, float, float, bool, bool)>(base+0xbd380)(this, p0, p1, p2, p3, p4);
}

void CCCircleWave::followObject(cocos2d::CCNode* p0, bool p1) {
    return reinterpret_cast<void(*)(CCCircleWave*, cocos2d::CCNode*, bool)>(base+0xbd670)(this, p0, p1);
}

void CCCircleWave::updatePosition(float p0) {
    return reinterpret_cast<void(*)(CCCircleWave*, float)>(base+0xbd630)(this, p0);
}

CCLightFlash* CCLightFlash::create() {
    return reinterpret_cast<CCLightFlash*(*)()>(base+0x295870)();
}

void CCLightFlash::playEffect(cocos2d::CCPoint p0, cocos2d::_ccColor3B p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, int p16, bool p17, bool p18, float p19) {
    return reinterpret_cast<void(*)(CCLightFlash*, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float)>(base+0x295900)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19);
}

CCMenuItemSpriteExtra* CCMenuItemSpriteExtra::create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3) {
    return reinterpret_cast<CCMenuItemSpriteExtra*(*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)>(base+0x1253c0)(p0, p1, p2, p3);
}

void CCMenuItemSpriteExtra::setSizeMult(float p0) {
    return reinterpret_cast<void(*)(CCMenuItemSpriteExtra*, float)>(base+0x1255e0)(this, p0);
}

bool CCMenuItemSpriteExtra::init(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3) {
    return reinterpret_cast<bool(*)(CCMenuItemSpriteExtra*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)>(base+0x125450)(this, p0, p1, p2, p3);
}

CCMenuItemToggler* CCMenuItemToggler::create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3) {
    return reinterpret_cast<CCMenuItemToggler*(*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)>(base+0x38400)(p0, p1, p2, p3);
}

void CCMenuItemToggler::setSizeMult(float p0) {
    return reinterpret_cast<void(*)(CCMenuItemToggler*, float)>(base+0x38a40)(this, p0);
}

CCMoveCNode* CCMoveCNode::create() {
    return reinterpret_cast<CCMoveCNode*(*)()>(base+0x1842a0)();
}

bool CCMoveCNode::init() {
    return reinterpret_cast<bool(*)(CCMoveCNode*)>(base+0x18b3d0)(this);
}

CCNodeContainer* CCNodeContainer::create() {
    return reinterpret_cast<CCNodeContainer*(*)()>(base+0xb1090)();
}

bool CCNodeContainer::init() {
    return reinterpret_cast<bool(*)(CCNodeContainer*)>(base+0xba950)(this);
}

void CCNodeContainer::visit() {
    return reinterpret_cast<void(*)(CCNodeContainer*)>(base+0xba960)(this);
}

bool CCSpritePlus::initWithSpriteFrameName(char const* p0) {
    return reinterpret_cast<bool(*)(CCSpritePlus*, char const*)>(base+0x248670)(this, p0);
}

CCTextInputNode* CCTextInputNode::create(float p0, float p1, char const* p2, char const* p3, int p4, char const* p5) {
    return reinterpret_cast<CCTextInputNode*(*)(float, float, char const*, char const*, int, char const*)>(base+0x5cfb0)(p0, p1, p2, p3, p4, p5);
}

std::string CCTextInputNode::getString() {
    return reinterpret_cast<std::string(*)(CCTextInputNode*)>(base+0x5d6f0)(this);
}

void CCTextInputNode::refreshLabel() {
    return reinterpret_cast<void(*)(CCTextInputNode*)>(base+0x5d730)(this);
}

void CCTextInputNode::setAllowedChars(std::string p0) {
    return reinterpret_cast<void(*)(CCTextInputNode*, std::string)>(base+0x5d360)(this, p0);
}

void CCTextInputNode::setLabelNormalColor(cocos2d::_ccColor3B p0) {
    return reinterpret_cast<void(*)(CCTextInputNode*, cocos2d::_ccColor3B)>(base+0x5dab0)(this, p0);
}

void CCTextInputNode::setLabelPlaceholderColor(cocos2d::_ccColor3B p0) {
    return reinterpret_cast<void(*)(CCTextInputNode*, cocos2d::_ccColor3B)>(base+0x5da90)(this, p0);
}

void CCTextInputNode::setLabelPlaceholderScale(float p0) {
    return reinterpret_cast<void(*)(CCTextInputNode*, float)>(base+0x5da70)(this, p0);
}

void CCTextInputNode::setMaxLabelScale(float p0) {
    return reinterpret_cast<void(*)(CCTextInputNode*, float)>(base+0x5da30)(this, p0);
}

void CCTextInputNode::setMaxLabelWidth(float p0) {
    return reinterpret_cast<void(*)(CCTextInputNode*, float)>(base+0x5da50)(this, p0);
}

void CCTextInputNode::setString(std::string p0) {
    return reinterpret_cast<void(*)(CCTextInputNode*, std::string)>(base+0x5d3e0)(this, p0);
}

void CCTextInputNode::updateLabel(std::string p0) {
    return reinterpret_cast<void(*)(CCTextInputNode*, std::string)>(base+0x5d4a0)(this, p0);
}

void CCTextInputNode::forceOffset() {
    return reinterpret_cast<void(*)(CCTextInputNode*)>(base+0x5ec70)(this);
}

void CCTextInputNode::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(CCTextInputNode*)>(base+0x5eec0)(this);
}

bool CCTextInputNode::init(float p0, float p1, char const* p2, char const* p3, int p4, char const* p5) {
    return reinterpret_cast<bool(*)(CCTextInputNode*, float, float, char const*, char const*, int, char const*)>(base+0x5d180)(this, p0, p1, p2, p3, p4, p5);
}

void CCTextInputNode::visit() {
    return reinterpret_cast<void(*)(CCTextInputNode*)>(base+0x5d380)(this);
}

bool CCTextInputNode::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<bool(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x5ec80)(this, p0, p1);
}

void CCTextInputNode::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x5ee80)(this, p0, p1);
}

void CCTextInputNode::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x5ee60)(this, p0, p1);
}

void CCTextInputNode::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x5eea0)(this, p0, p1);
}

void CCTextInputNode::textChanged() {
    return reinterpret_cast<void(*)(CCTextInputNode*)>(base+0x5dd70)(this);
}

void CCTextInputNode::onClickTrackNode(bool p0) {
    return reinterpret_cast<void(*)(CCTextInputNode*, bool)>(base+0x5dd40)(this, p0);
}

void CCTextInputNode::keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo& p0) {
    return reinterpret_cast<void(*)(CCTextInputNode*, cocos2d::CCIMEKeyboardNotificationInfo&)>(base+0x5dad0)(this, p0);
}

void CCTextInputNode::keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo& p0) {
    return reinterpret_cast<void(*)(CCTextInputNode*, cocos2d::CCIMEKeyboardNotificationInfo&)>(base+0x5dc20)(this, p0);
}

bool CCTextInputNode::onTextFieldInsertText(cocos2d::CCTextFieldTTF* p0, char const* p1, int p2) {
    return reinterpret_cast<bool(*)(CCTextInputNode*, cocos2d::CCTextFieldTTF*, char const*, int)>(base+0x5de50)(this, p0, p1, p2);
}

bool CCTextInputNode::onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF* p0) {
    return reinterpret_cast<bool(*)(CCTextInputNode*, cocos2d::CCTextFieldTTF*)>(base+0x5e2c0)(this, p0);
}

bool CCTextInputNode::onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF* p0) {
    return reinterpret_cast<bool(*)(CCTextInputNode*, cocos2d::CCTextFieldTTF*)>(base+0x5e610)(this, p0);
}

CheckpointObject* CheckpointObject::create() {
    return reinterpret_cast<CheckpointObject*(*)()>(base+0x7e7d0)();
}

void CheckpointObject::getObject() {
    return reinterpret_cast<void(*)(CheckpointObject*)>(base+0x7ef50)(this);
}

CollisionBlockPopup* CollisionBlockPopup::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<CollisionBlockPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x130010)(p0, p1);
}

void CollisionBlockPopup::onNextItemID(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(CollisionBlockPopup*, cocos2d::CCObject*)>(base+0x130e60)(this, p0);
}

CollisionTriggerAction* CollisionTriggerAction::createFromString(std::string p0) {
    return reinterpret_cast<CollisionTriggerAction*(*)(std::string)>(base+0x176ee0)(p0);
}

void ColorAction::getSaveString() {
    return reinterpret_cast<void(*)(ColorAction*)>(base+0x17d080)(this);
}

void ColorAction::setupFromDict(cocos2d::CCDictionary* p0) {
    return reinterpret_cast<void(*)(ColorAction*, cocos2d::CCDictionary*)>(base+0x17f310)(this, p0);
}

void ColorAction::setupFromString(std::string p0) {
    return reinterpret_cast<void(*)(ColorAction*, std::string)>(base+0x17f270)(this, p0);
}

void ColorChannelSprite::updateBlending(bool p0) {
    return reinterpret_cast<void(*)(ColorChannelSprite*, bool)>(base+0x16e1d0)(this, p0);
}

void ColorChannelSprite::updateCopyLabel(int p0, bool p1) {
    return reinterpret_cast<void(*)(ColorChannelSprite*, int, bool)>(base+0x16ded0)(this, p0, p1);
}

void ColorChannelSprite::updateOpacity(float p0) {
    return reinterpret_cast<void(*)(ColorChannelSprite*, float)>(base+0x16e080)(this, p0);
}

void ColorChannelSprite::updateValues(ColorAction* p0) {
    return reinterpret_cast<void(*)(ColorChannelSprite*, ColorAction*)>(base+0x16e2e0)(this, p0);
}

void CommentCell::loadFromComment(GJComment* p0) {
    return reinterpret_cast<void(*)(CommentCell*, GJComment*)>(base+0x111c70)(this, p0);
}

CountTriggerAction* CountTriggerAction::createFromString(std::string p0) {
    return reinterpret_cast<CountTriggerAction*(*)(std::string)>(base+0x1754f0)(p0);
}

void CreatorLayer::onMyLevels(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(CreatorLayer*, cocos2d::CCObject*)>(base+0x142b70)(this, p0);
}

void CreatorLayer::onSavedLevels(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(CreatorLayer*, cocos2d::CCObject*)>(base+0x142860)(this, p0);
}

void CustomSongCell::loadFromObject(SongInfoObject* p0) {
    return reinterpret_cast<void(*)(CustomSongCell*, SongInfoObject*)>(base+0x110220)(this, p0);
}

bool CustomSongLayer::init(LevelSettingsObject* p0) {
    return reinterpret_cast<bool(*)(CustomSongLayer*, LevelSettingsObject*)>(base+0xf06f0)(this, p0);
}

void CustomSongLayer::onArtists(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(CustomSongLayer*, cocos2d::CCObject*)>(base+0xf1950)(this, p0);
}

void CustomSongLayer::onSongBrowser(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(CustomSongLayer*, cocos2d::CCObject*)>(base+0xf18a0)(this, p0);
}

CustomSongWidget* CustomSongWidget::create(SongInfoObject* p0, LevelSettingsObject* p1, bool p2, bool p3, bool p4, bool p5, bool p6) {
    return reinterpret_cast<CustomSongWidget*(*)(SongInfoObject*, LevelSettingsObject*, bool, bool, bool, bool, bool)>(base+0x37bcc0)(p0, p1, p2, p3, p4, p5, p6);
}

void CustomSongWidget::getSongInfoIfUnloaded() {
    return reinterpret_cast<void(*)(CustomSongWidget*)>(base+0x37e020)(this);
}

CustomListView* CustomListView::create(cocos2d::CCArray* p0, float p1, float p2, int p3, BoomListType p4) {
    return reinterpret_cast<CustomListView*(*)(cocos2d::CCArray*, float, float, int, BoomListType)>(base+0x10d410)(p0, p1, p2, p3, p4);
}

void CustomListView::getListCell(char const* p0) {
    return reinterpret_cast<void(*)(CustomListView*, char const*)>(base+0x10d560)(this, p0);
}

void CustomListView::loadCell(TableViewCell* p0, int p1) {
    return reinterpret_cast<void(*)(CustomListView*, TableViewCell*, int)>(base+0x10e610)(this, p0, p1);
}

void CustomListView::setupList() {
    return reinterpret_cast<void(*)(CustomListView*)>(base+0x116e70)(this);
}

void CustomizeObjectLayer::colorSelectClosed(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(CustomizeObjectLayer*, cocos2d::CCNode*)>(base+0xe1050)(this, p0);
}

CustomizeObjectLayer* CustomizeObjectLayer::create(GameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<CustomizeObjectLayer*(*)(GameObject*, cocos2d::CCArray*)>(base+0xdd340)(p0, p1);
}

bool CustomizeObjectLayer::init(GameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<bool(*)(CustomizeObjectLayer*, GameObject*, cocos2d::CCArray*)>(base+0xdd560)(this, p0, p1);
}

void CustomizeObjectLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(CustomizeObjectLayer*, CCTextInputNode*)>(base+0xe1470)(this, p0);
}

void CustomizeObjectLayer::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(CustomizeObjectLayer*, CCTextInputNode*)>(base+0xe1430)(this, p0);
}

DelayedSpawnNode* DelayedSpawnNode::create() {
    return reinterpret_cast<DelayedSpawnNode*(*)()>(base+0x9b360)();
}

DialogLayer* DialogLayer::create(DialogObject* p0, int p1) {
    return reinterpret_cast<DialogLayer*(*)(DialogObject*, int)>(base+0x2047c0)(p0, p1);
}

DialogObject* DialogObject::create(std::string p0, std::string p1, int p2, float p3, bool p4, cocos2d::_ccColor3B p5) {
    return reinterpret_cast<DialogObject*(*)(std::string, std::string, int, float, bool, cocos2d::_ccColor3B)>(base+0x204410)(p0, p1, p2, p3, p4, p5);
}

void DrawGridLayer::addPlayer2Point(cocos2d::CCPoint p0, bool p1) {
    return reinterpret_cast<void(*)(DrawGridLayer*, cocos2d::CCPoint, bool)>(base+0xa25b0)(this, p0, p1);
}

void DrawGridLayer::addPlayerPoint(cocos2d::CCPoint p0) {
    return reinterpret_cast<void(*)(DrawGridLayer*, cocos2d::CCPoint)>(base+0xa39c0)(this, p0);
}

void DrawGridLayer::addToSpeedObjects(GameObject* p0) {
    return reinterpret_cast<void(*)(DrawGridLayer*, GameObject*)>(base+0x99900)(this, p0);
}

DrawGridLayer* DrawGridLayer::create(cocos2d::CCNode* p0, LevelEditorLayer* p1) {
    return reinterpret_cast<DrawGridLayer*(*)(cocos2d::CCNode*, LevelEditorLayer*)>(base+0x920c0)(p0, p1);
}

bool DrawGridLayer::init(cocos2d::CCNode* p0, LevelEditorLayer* p1) {
    return reinterpret_cast<bool(*)(DrawGridLayer*, cocos2d::CCNode*, LevelEditorLayer*)>(base+0xa36e0)(this, p0, p1);
}

void DrawGridLayer::timeForXPos(float p0) {
    return reinterpret_cast<void(*)(DrawGridLayer*, float)>(base+0x9b330)(this, p0);
}

void DrawGridLayer::update(float p0) {
    return reinterpret_cast<void(*)(DrawGridLayer*, float)>(base+0xa3b30)(this, p0);
}

void DrawGridLayer::updateTimeMarkers() {
    return reinterpret_cast<void(*)(DrawGridLayer*)>(base+0x92950)(this);
}

void DrawGridLayer::xPosForTime(float p0) {
    return reinterpret_cast<void(*)(DrawGridLayer*, float)>(base+0x9c830)(this, p0);
}

void EditButtonBar::loadFromItems(cocos2d::CCArray* p0, int p1, int p2, bool p3) {
    return reinterpret_cast<void(*)(EditButtonBar*, cocos2d::CCArray*, int, int, bool)>(base+0x351010)(this, p0, p1, p2, p3);
}

void EditorOptionsLayer::onButtonsPerRow(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(EditorOptionsLayer*, cocos2d::CCObject*)>(base+0x147b30)(this, p0);
}

void EditorPauseLayer::customSetup() {
    return reinterpret_cast<void(*)(EditorPauseLayer*)>(base+0x13cc00)(this);
}

bool EditorPauseLayer::init(LevelEditorLayer* p0) {
    return reinterpret_cast<bool(*)(EditorPauseLayer*, LevelEditorLayer*)>(base+0x13c7a0)(this, p0);
}

EditorPauseLayer* EditorPauseLayer::create(LevelEditorLayer* p0) {
    return reinterpret_cast<EditorPauseLayer*(*)(LevelEditorLayer*)>(base+0x13c680)(p0);
}

void EditorPauseLayer::saveLevel() {
    return reinterpret_cast<void(*)(EditorPauseLayer*)>(base+0x13ebd0)(this);
}

void EditorUI::constrainGameLayerPosition() {
    return reinterpret_cast<void(*)(EditorUI*)>(base+0x1c6d0)(this);
}

void EditorUI::create(LevelEditorLayer* p0) {
    return reinterpret_cast<void(*)(EditorUI*, LevelEditorLayer*)>(base+0x8a80)(this, p0);
}

void EditorUI::deselectAll() {
    return reinterpret_cast<void(*)(EditorUI*)>(base+0x1f300)(this);
}

void EditorUI::onDeselectAll(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(EditorUI*, cocos2d::CCObject*)>(base+0x19cd0)(this, p0);
}

void EditorUI::disableButton(CreateMenuItem* p0) {
    return reinterpret_cast<void(*)(EditorUI*, CreateMenuItem*)>(base+0x1c0f0)(this, p0);
}

void EditorUI::editButtonUsable() {
    return reinterpret_cast<void(*)(EditorUI*)>(base+0x28f30)(this);
}

void EditorUI::editObject(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(EditorUI*, cocos2d::CCObject*)>(base+0x195a0)(this, p0);
}

void EditorUI::enableButton(CreateMenuItem* p0) {
    return reinterpret_cast<void(*)(EditorUI*, CreateMenuItem*)>(base+0x1bff0)(this, p0);
}

CCMenuItemSpriteExtra* EditorUI::getCreateBtn(int p0, int p1) {
    return reinterpret_cast<CCMenuItemSpriteExtra*(*)(EditorUI*, int, int)>(base+0x1f6c0)(this, p0, p1);
}

void EditorUI::getGroupCenter(cocos2d::CCArray* p0, bool p1) {
    return reinterpret_cast<void(*)(EditorUI*, cocos2d::CCArray*, bool)>(base+0x23470)(this, p0, p1);
}

cocos2d::CCArray* EditorUI::getSelectedObjects() {
    return reinterpret_cast<cocos2d::CCArray*(*)(EditorUI*)>(base+0x23f30)(this);
}

void EditorUI::init(LevelEditorLayer* p0) {
    return reinterpret_cast<void(*)(EditorUI*, LevelEditorLayer*)>(base+0x8ae0)(this, p0);
}

void EditorUI::keyDown(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(EditorUI*, cocos2d::enumKeyCodes)>(base+0x30790)(this, p0);
}

void EditorUI::moveObject(GameObject* p0, cocos2d::CCPoint p1) {
    return reinterpret_cast<void(*)(EditorUI*, GameObject*, cocos2d::CCPoint)>(base+0x24b10)(this, p0, p1);
}

void EditorUI::onDuplicate(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(EditorUI*, cocos2d::CCObject*)>(base+0x18ba0)(this, p0);
}

void EditorUI::pasteObjects(std::string p0) {
    return reinterpret_cast<void(*)(EditorUI*, std::string)>(base+0x232d0)(this, p0);
}

void EditorUI::playerTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(EditorUI*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x2ebf0)(this, p0, p1);
}

void EditorUI::playtestStopped() {
    return reinterpret_cast<void(*)(EditorUI*)>(base+0x24790)(this);
}

void EditorUI::redoLastAction(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(EditorUI*, cocos2d::CCObject*)>(base+0xb8e0)(this, p0);
}

void EditorUI::replaceGroupID(GameObject* p0, int p1, int p2) {
    return reinterpret_cast<void(*)(EditorUI*, GameObject*, int, int)>(base+0x27470)(this, p0, p1, p2);
}

void EditorUI::scaleChanged(float p0) {
    return reinterpret_cast<void(*)(EditorUI*, float)>(base+0x25490)(this, p0);
}

void EditorUI::scaleObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2) {
    return reinterpret_cast<void(*)(EditorUI*, cocos2d::CCArray*, float, cocos2d::CCPoint)>(base+0x252e0)(this, p0, p1, p2);
}

void EditorUI::selectObjects(cocos2d::CCArray* p0, bool p1) {
    return reinterpret_cast<void(*)(EditorUI*, cocos2d::CCArray*, bool)>(base+0x23940)(this, p0, p1);
}

void EditorUI::setupCreateMenu() {
    return reinterpret_cast<void(*)(EditorUI*)>(base+0xcb50)(this);
}

void EditorUI::undoLastAction(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(EditorUI*, cocos2d::CCObject*)>(base+0xb830)(this, p0);
}

void EditorUI::updateButtons() {
    return reinterpret_cast<void(*)(EditorUI*)>(base+0x1a300)(this);
}

void EditorUI::updateObjectInfoLabel() {
    return reinterpret_cast<void(*)(EditorUI*)>(base+0x1cb10)(this);
}

void EditorUI::updateSlider() {
    return reinterpret_cast<void(*)(EditorUI*)>(base+0x18a90)(this);
}

void EditorUI::updateZoom(float p0) {
    return reinterpret_cast<void(*)(EditorUI*, float)>(base+0x248c0)(this, p0);
}

EndLevelLayer* EndLevelLayer::create() {
    return reinterpret_cast<EndLevelLayer*(*)()>(base+0x2787d0)();
}

ScrollingLayer* ScrollingLayer::create(cocos2d::CCSize p0, cocos2d::CCPoint p1, float p2) {
    return reinterpret_cast<ScrollingLayer*(*)(cocos2d::CCSize, cocos2d::CCPoint, float)>(base+0x41a900)(p0, p1, p2);
}

FollowRewardPage* FollowRewardPage::create() {
    return reinterpret_cast<FollowRewardPage*(*)()>(base+0x22f140)();
}

GJAccountManager* GJAccountManager::sharedState() {
    return reinterpret_cast<GJAccountManager*(*)()>(base+0x85070)();
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

bool GJBaseGameLayer::init() {
    return reinterpret_cast<bool(*)(GJBaseGameLayer*)>(base+0xafc90)(this);
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

void GJColorSetupLayer::updateSpriteColors() {
    return reinterpret_cast<void(*)(GJColorSetupLayer*)>(base+0xefe50)(this);
}

void GJDropDownLayer::customSetup() {
    return reinterpret_cast<void(*)(GJDropDownLayer*)>(base+0x352570)(this);
}

void GJDropDownLayer::enterLayer() {
    return reinterpret_cast<void(*)(GJDropDownLayer*)>(base+0x3525c0)(this);
}

void GJDropDownLayer::exitLayer(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(GJDropDownLayer*, cocos2d::CCObject*)>(base+0x352670)(this, p0);
}

void GJDropDownLayer::showLayer(bool p0) {
    return reinterpret_cast<void(*)(GJDropDownLayer*, bool)>(base+0x3526c0)(this, p0);
}

void GJDropDownLayer::hideLayer(bool p0) {
    return reinterpret_cast<void(*)(GJDropDownLayer*, bool)>(base+0x3527b0)(this, p0);
}

void GJDropDownLayer::layerVisible() {
    return reinterpret_cast<void(*)(GJDropDownLayer*)>(base+0x3528b0)(this);
}

void GJDropDownLayer::layerHidden() {
    return reinterpret_cast<void(*)(GJDropDownLayer*)>(base+0x3528d0)(this);
}

void GJDropDownLayer::enterAnimFinished() {
    return reinterpret_cast<void(*)(GJDropDownLayer*)>(base+0x3528a0)(this);
}

void GJDropDownLayer::disableUI() {
    return reinterpret_cast<void(*)(GJDropDownLayer*)>(base+0x352580)(this);
}

void GJDropDownLayer::enableUI() {
    return reinterpret_cast<void(*)(GJDropDownLayer*)>(base+0x3525a0)(this);
}

void GJDropDownLayer::draw() {
    return reinterpret_cast<void(*)(GJDropDownLayer*)>(base+0x352910)(this);
}

bool GJDropDownLayer::init(char const* p0, float p1) {
    return reinterpret_cast<bool(*)(GJDropDownLayer*, char const*, float)>(base+0x352100)(this, p0, p1);
}

void GJDropDownLayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(GJDropDownLayer*)>(base+0x3525f0)(this);
}

void GJDropDownLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(GJDropDownLayer*)>(base+0x352630)(this);
}

GJDropDownLayer* GJDropDownLayer::create(char const* p0) {
    return reinterpret_cast<GJDropDownLayer*(*)(char const*)>(base+0x352530)(p0);
}

bool GJEffectManager::init() {
    return reinterpret_cast<bool(*)(GJEffectManager*)>(base+0x180230)(this);
}

void GJEffectManager::activeColorForIndex(int p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, int)>(base+0x180cb0)(this, p0);
}

void GJEffectManager::activeOpacityForIndex(int p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, int)>(base+0x180e10)(this, p0);
}

void GJEffectManager::addAllInheritedColorActions(cocos2d::CCArray* p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, cocos2d::CCArray*)>(base+0x1817a0)(this, p0);
}

void GJEffectManager::addGroupPulseEffect(PulseEffectAction* p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, PulseEffectAction*)>(base+0x184c10)(this, p0);
}

void GJEffectManager::calculateBaseActiveColors() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x180f70)(this);
}

void GJEffectManager::calculateInheritedColor(int p0, ColorAction* p1) {
    return reinterpret_cast<void(*)(GJEffectManager*, int, ColorAction*)>(base+0x1818f0)(this, p0, p1);
}

void GJEffectManager::calculateLightBGColor(cocos2d::_ccColor3B p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, cocos2d::_ccColor3B)>(base+0x185b90)(this, p0);
}

void GJEffectManager::colorActionChanged(ColorAction* p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, ColorAction*)>(base+0x181dc0)(this, p0);
}

void GJEffectManager::colorExists(int p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, int)>(base+0x181da0)(this, p0);
}

void GJEffectManager::colorForEffect(cocos2d::_ccColor3B p0, cocos2d::_ccHSVValue p1) {
    return reinterpret_cast<void(*)(GJEffectManager*, cocos2d::_ccColor3B, cocos2d::_ccHSVValue)>(base+0x182650)(this, p0, p1);
}

cocos2d::_ccColor3B GJEffectManager::colorForGroupID(int p0, cocos2d::_ccColor3B const& p1, bool p2) {
    return reinterpret_cast<cocos2d::_ccColor3B(*)(GJEffectManager*, int, cocos2d::_ccColor3B const&, bool)>(base+0x184f90)(this, p0, p1, p2);
}

void GJEffectManager::colorForIndex(int p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, int)>(base+0x180ad0)(this, p0);
}

void GJEffectManager::colorForPulseEffect(cocos2d::_ccColor3B const& p0, PulseEffectAction* p1) {
    return reinterpret_cast<void(*)(GJEffectManager*, cocos2d::_ccColor3B const&, PulseEffectAction*)>(base+0x181bf0)(this, p0, p1);
}

void GJEffectManager::countChangedForItem(int p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, int)>(base+0x185a40)(this, p0);
}

void GJEffectManager::countForItem(int p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, int)>(base+0x185a10)(this, p0);
}

GJEffectManager* GJEffectManager::create() {
    return reinterpret_cast<GJEffectManager*(*)()>(base+0x1800f0)();
}

void GJEffectManager::createFollowCommand(float p0, float p1, float p2, int p3, int p4, bool p5, int p6) {
    return reinterpret_cast<void(*)(GJEffectManager*, float, float, float, int, int, bool, int)>(base+0x182ed0)(this, p0, p1, p2, p3, p4, p5, p6);
}

void GJEffectManager::createMoveCommand(cocos2d::CCPoint p0, int p1, float p2, int p3, float p4, bool p5, bool p6, int p7) {
    return reinterpret_cast<void(*)(GJEffectManager*, cocos2d::CCPoint, int, float, int, float, bool, bool, int)>(base+0x182cc0)(this, p0, p1, p2, p3, p4, p5, p6, p7);
}

void GJEffectManager::createPlayerFollowCommand(float p0, float p1, int p2, float p3, float p4, int p5, int p6) {
    return reinterpret_cast<void(*)(GJEffectManager*, float, float, int, float, float, int, int)>(base+0x182fe0)(this, p0, p1, p2, p3, p4, p5, p6);
}

void GJEffectManager::createRotateCommand(int p0, float p1, int p2, int p3, int p4, float p5, bool p6, int p7) {
    return reinterpret_cast<void(*)(GJEffectManager*, int, float, int, int, int, float, bool, int)>(base+0x182df0)(this, p0, p1, p2, p3, p4, p5, p6, p7);
}

void GJEffectManager::getAllColorActions() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x180980)(this);
}

void GJEffectManager::getAllColorSprites() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x1809e0)(this);
}

const cocos2d::_ccColor3B& GJEffectManager::getColorAction(int p0) {
    return reinterpret_cast<const cocos2d::_ccColor3B&(*)(GJEffectManager*, int)>(base+0x180b00)(this, p0);
}

const cocos2d::_ccColor3B& GJEffectManager::getColorSprite(int p0) {
    return reinterpret_cast<const cocos2d::_ccColor3B&(*)(GJEffectManager*, int)>(base+0x180d00)(this, p0);
}

void GJEffectManager::getCurrentStateString() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x1867e0)(this);
}

void GJEffectManager::getLoadedMoveOffset() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x184390)(this);
}

void GJEffectManager::getMixedColor(cocos2d::_ccColor3B p0, cocos2d::_ccColor3B p1, float p2) {
    return reinterpret_cast<void(*)(GJEffectManager*, cocos2d::_ccColor3B, cocos2d::_ccColor3B, float)>(base+0x185d30)(this, p0, p1, p2);
}

uint8_t GJEffectManager::getOpacityActionForGroup(int p0) {
    return reinterpret_cast<uint8_t(*)(GJEffectManager*, int)>(base+0x1845b0)(this, p0);
}

void GJEffectManager::getSaveString() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x185e90)(this);
}

void GJEffectManager::handleObjectCollision(bool p0, int p1, int p2) {
    return reinterpret_cast<void(*)(GJEffectManager*, bool, int, int)>(base+0x1828f0)(this, p0, p1, p2);
}

void GJEffectManager::hasActiveDualTouch() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x185540)(this);
}

void GJEffectManager::hasBeenTriggered(int p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, int)>(base+0x1853b0)(this, p0);
}

void GJEffectManager::hasPulseEffectForGroupID(int p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, int)>(base+0x184f60)(this, p0);
}

bool GJEffectManager::isGroupEnabled(int p0) {
    return reinterpret_cast<bool(*)(GJEffectManager*, int)>(base+0x1853d0)(this, p0);
}

void GJEffectManager::keyForGroupIDColor(int p0, cocos2d::_ccColor3B const& p1, bool p2) {
    return reinterpret_cast<void(*)(GJEffectManager*, int, cocos2d::_ccColor3B const&, bool)>(base+0x184c90)(this, p0, p1, p2);
}

void GJEffectManager::loadState(std::string p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, std::string)>(base+0x188db0)(this, p0);
}

void GJEffectManager::objectsCollided(int p0, int p1) {
    return reinterpret_cast<void(*)(GJEffectManager*, int, int)>(base+0x182a00)(this, p0, p1);
}

void GJEffectManager::opacityForIndex(int p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, int)>(base+0x180c80)(this, p0);
}

float GJEffectManager::opacityModForGroup(int p0) {
    return reinterpret_cast<float(*)(GJEffectManager*, int)>(base+0x184740)(this, p0);
}

void GJEffectManager::playerButton(bool p0, bool p1) {
    return reinterpret_cast<void(*)(GJEffectManager*, bool, bool)>(base+0x1855a0)(this, p0, p1);
}

void GJEffectManager::playerDied() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x185860)(this);
}

void GJEffectManager::postCollisionCheck() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x182720)(this);
}

void GJEffectManager::preCollisionCheck() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x182680)(this);
}

void GJEffectManager::prepareMoveActions(float p0, bool p1) {
    return reinterpret_cast<void(*)(GJEffectManager*, float, bool)>(base+0x183660)(this, p0, p1);
}

void GJEffectManager::processColors() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x180e70)(this);
}

void GJEffectManager::processCopyColorPulseActions() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x181530)(this);
}

void GJEffectManager::processInheritedColors() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x181190)(this);
}

void GJEffectManager::processPulseActions() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x181040)(this);
}

void GJEffectManager::registerCollisionTrigger(int p0, int p1, int p2, bool p3, bool p4, int p5) {
    return reinterpret_cast<void(*)(GJEffectManager*, int, int, int, bool, bool, int)>(base+0x182b70)(this, p0, p1, p2, p3, p4, p5);
}

void GJEffectManager::removeAllPulseActions() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x1825e0)(this);
}

void GJEffectManager::removeColorAction(int p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, int)>(base+0x181d60)(this, p0);
}

void GJEffectManager::reset() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x180690)(this);
}

void GJEffectManager::resetColorCache() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x185280)(this);
}

void GJEffectManager::resetEffects() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x1807d0)(this);
}

void GJEffectManager::resetMoveActions() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x180940)(this);
}

void GJEffectManager::resetToggledGroups() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x1853f0)(this);
}

void GJEffectManager::resetTriggeredIDs() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x182630)(this);
}

void GJEffectManager::runCountTrigger(int p0, int p1, bool p2, int p3, bool p4, int p5) {
    return reinterpret_cast<void(*)(GJEffectManager*, int, int, bool, int, bool, int)>(base+0x1858d0)(this, p0, p1, p2, p3, p4, p5);
}

void GJEffectManager::runDeathTrigger(int p0, bool p1, int p2) {
    return reinterpret_cast<void(*)(GJEffectManager*, int, bool, int)>(base+0x1857a0)(this, p0, p1, p2);
}

OpacityEffectAction* GJEffectManager::runOpacityActionOnGroup(int p0, float p1, float p2, int p3) {
    return reinterpret_cast<OpacityEffectAction*(*)(GJEffectManager*, int, float, float, int)>(base+0x1845d0)(this, p0, p1, p2, p3);
}

void GJEffectManager::runPulseEffect(int p0, bool p1, float p2, float p3, float p4, PulseEffectType p5, cocos2d::_ccColor3B p6, cocos2d::_ccHSVValue p7, int p8, bool p9, bool p10, bool p11, int p12) {
    return reinterpret_cast<void(*)(GJEffectManager*, int, bool, float, float, float, PulseEffectType, cocos2d::_ccColor3B, cocos2d::_ccHSVValue, int, bool, bool, bool, int)>(base+0x184890)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
}

void GJEffectManager::runTouchTriggerCommand(int p0, bool p1, TouchTriggerType p2, bool p3, int p4) {
    return reinterpret_cast<void(*)(GJEffectManager*, int, bool, TouchTriggerType, bool, int)>(base+0x185460)(this, p0, p1, p2, p3, p4);
}

void GJEffectManager::setColorAction(ColorAction* p0, int p1) {
    return reinterpret_cast<void(*)(GJEffectManager*, ColorAction*, int)>(base+0x181d00)(this, p0, p1);
}

void GJEffectManager::setFollowing(int p0, int p1, bool p2) {
    return reinterpret_cast<void(*)(GJEffectManager*, int, int, bool)>(base+0x185e00)(this, p0, p1, p2);
}

void GJEffectManager::setupFromString(std::string p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, std::string)>(base+0x186290)(this, p0);
}

void GJEffectManager::shouldBlend(int p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, int)>(base+0x180e40)(this, p0);
}

void GJEffectManager::spawnGroup(int p0, float p1, int p2) {
    return reinterpret_cast<void(*)(GJEffectManager*, int, float, int)>(base+0x1852a0)(this, p0, p1, p2);
}

void GJEffectManager::stopActionsForTrigger(EffectGameObject* p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, EffectGameObject*)>(base+0x183150)(this, p0);
}

void GJEffectManager::stopMoveActionsForGroup(int p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, int)>(base+0x1830e0)(this, p0);
}

void GJEffectManager::storeTriggeredID(int p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, int)>(base+0x185380)(this, p0);
}

void GJEffectManager::toggleGroup(int p0, bool p1) {
    return reinterpret_cast<void(*)(GJEffectManager*, int, bool)>(base+0x182c80)(this, p0, p1);
}

void GJEffectManager::traverseInheritanceChain(InheritanceNode* p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, InheritanceNode*)>(base+0x181850)(this, p0);
}

void GJEffectManager::updateActiveOpacityEffects() {
    return reinterpret_cast<void(*)(GJEffectManager*)>(base+0x1847e0)(this);
}

void GJEffectManager::updateColorAction(ColorAction* p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, ColorAction*)>(base+0x184560)(this, p0);
}

void GJEffectManager::updateColorEffects(float p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, float)>(base+0x181f40)(this, p0);
}

void GJEffectManager::updateColors(cocos2d::_ccColor3B p0, cocos2d::_ccColor3B p1) {
    return reinterpret_cast<void(*)(GJEffectManager*, cocos2d::_ccColor3B, cocos2d::_ccColor3B)>(base+0x180a40)(this, p0, p1);
}

void GJEffectManager::updateEffects(float p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, float)>(base+0x181df0)(this, p0);
}

void GJEffectManager::updateOpacityAction(OpacityEffectAction* p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, OpacityEffectAction*)>(base+0x184780)(this, p0);
}

void GJEffectManager::updateOpacityEffects(float p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, float)>(base+0x1823e0)(this, p0);
}

void GJEffectManager::updatePulseEffects(float p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, float)>(base+0x182130)(this, p0);
}

void GJEffectManager::updateSpawnTriggers(float p0) {
    return reinterpret_cast<void(*)(GJEffectManager*, float)>(base+0x182510)(this, p0);
}

void GJEffectManager::wasFollowing(int p0, int p1) {
    return reinterpret_cast<void(*)(GJEffectManager*, int, int)>(base+0x185e60)(this, p0, p1);
}

void GJEffectManager::wouldCreateLoop(InheritanceNode* p0, int p1) {
    return reinterpret_cast<void(*)(GJEffectManager*, InheritanceNode*, int)>(base+0x181820)(this, p0, p1);
}

GJFollowCommandLayer* GJFollowCommandLayer::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<GJFollowCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x16a550)(p0, p1);
}

void GJFollowCommandLayer::onUpdateGroupID(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(GJFollowCommandLayer*, cocos2d::CCObject*)>(base+0x16c8f0)(this, p0);
}

void GJFollowCommandLayer::onUpdateGroupID2(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(GJFollowCommandLayer*, cocos2d::CCObject*)>(base+0x16c9e0)(this, p0);
}

void GJFollowCommandLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJFollowCommandLayer*, CCTextInputNode*)>(base+0x16d480)(this, p0);
}

void GJFollowCommandLayer::updateTargetGroupID() {
    return reinterpret_cast<void(*)(GJFollowCommandLayer*)>(base+0x16cfe0)(this);
}

void GJFollowCommandLayer::updateTargetGroupID2() {
    return reinterpret_cast<void(*)(GJFollowCommandLayer*)>(base+0x16d1c0)(this);
}

GJGameLevel* GJGameLevel::create() {
    return reinterpret_cast<GJGameLevel*(*)()>(base+0x2b83e0)();
}

void GJGameLevel::getAudioFileName() {
    return reinterpret_cast<void(*)(GJGameLevel*)>(base+0x2dbe70)(this);
}

void GJGameLevel::getCoinKey(int p0) {
    return reinterpret_cast<void(*)(GJGameLevel*, int)>(base+0x2ce360)(this, p0);
}

void GJGameLevel::getLengthKey(int p0) {
    return reinterpret_cast<void(*)(GJGameLevel*, int)>(base+0x2dbba0)(this, p0);
}

void GJGameLevel::getNormalPercent() {
    return reinterpret_cast<void(*)(GJGameLevel*)>(base+0x2b8b20)(this);
}

void GJGameLevel::levelWasAltered() {
    return reinterpret_cast<void(*)(GJGameLevel*)>(base+0x2db530)(this);
}

void GJGameLevel::savePercentage(int p0, bool p1, int p2, int p3, bool p4) {
    return reinterpret_cast<void(*)(GJGameLevel*, int, bool, int, int, bool)>(base+0x2db700)(this, p0, p1, p2, p3, p4);
}

GJGroundLayer* GJGroundLayer::create(int p0, int p1) {
    return reinterpret_cast<GJGroundLayer*(*)(int, int)>(base+0x355c00)(p0, p1);
}

void GJGroundLayer::createLine(int p0) {
    return reinterpret_cast<void(*)(GJGroundLayer*, int)>(base+0x356220)(this, p0);
}

void GJGroundLayer::deactivateGround() {
    return reinterpret_cast<void(*)(GJGroundLayer*)>(base+0x356a40)(this);
}

void GJGroundLayer::getGroundY() {
    return reinterpret_cast<void(*)(GJGroundLayer*)>(base+0x356ac0)(this);
}

bool GJGroundLayer::init(int p0, int p1) {
    return reinterpret_cast<bool(*)(GJGroundLayer*, int, int)>(base+0x355d10)(this, p0, p1);
}

void GJGroundLayer::loadGroundSprites(int p0, bool p1) {
    return reinterpret_cast<void(*)(GJGroundLayer*, int, bool)>(base+0x3563d0)(this, p0, p1);
}

void GJGroundLayer::updateGround01Color(cocos2d::_ccColor3B p0) {
    return reinterpret_cast<void(*)(GJGroundLayer*, cocos2d::_ccColor3B)>(base+0x356640)(this, p0);
}

void GJGroundLayer::updateGround02Color(cocos2d::_ccColor3B p0) {
    return reinterpret_cast<void(*)(GJGroundLayer*, cocos2d::_ccColor3B)>(base+0x356710)(this, p0);
}

void GJGroundLayer::updateGroundPos(cocos2d::CCPoint p0) {
    return reinterpret_cast<void(*)(GJGroundLayer*, cocos2d::CCPoint)>(base+0x3566c0)(this, p0);
}

void GJGroundLayer::updateGroundWidth() {
    return reinterpret_cast<void(*)(GJGroundLayer*)>(base+0x356790)(this);
}

void GJLevelScoreCell::loadFromScore(GJUserScore* p0) {
    return reinterpret_cast<void(*)(GJLevelScoreCell*, GJUserScore*)>(base+0x114aa0)(this, p0);
}

void GJMessageCell::loadFromMessage(GJUserMessage* p0) {
    return reinterpret_cast<void(*)(GJMessageCell*, GJUserMessage*)>(base+0x1163d0)(this, p0);
}

GJMoreGamesLayer* GJMoreGamesLayer::create() {
    return reinterpret_cast<GJMoreGamesLayer*(*)()>(base+0x43a5f0)();
}

void GJMoreGamesLayer::customSetup() {
    return reinterpret_cast<void(*)(GJMoreGamesLayer*)>(base+0x43ae60)(this);
}

void GJMoreGamesLayer::getMoreGamesList() {
    return reinterpret_cast<void(*)(GJMoreGamesLayer*)>(base+0x43a830)(this);
}

GJMoveCommandLayer* GJMoveCommandLayer::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<GJMoveCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x36f8a0)(p0, p1);
}

bool GJMoveCommandLayer::init(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<bool(*)(GJMoveCommandLayer*, EffectGameObject*, cocos2d::CCArray*)>(base+0x36fac0)(this, p0, p1);
}

void GJMoveCommandLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*)>(base+0x374970)(this);
}

void GJMoveCommandLayer::onUpdateGroupID(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*, cocos2d::CCObject*)>(base+0x373350)(this, p0);
}

void GJMoveCommandLayer::onUpdateGroupID2(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*, cocos2d::CCObject*)>(base+0x3734c0)(this, p0);
}

void GJMoveCommandLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*, CCTextInputNode*)>(base+0x374470)(this, p0);
}

void GJMoveCommandLayer::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*, CCTextInputNode*)>(base+0x374430)(this, p0);
}

void GJMoveCommandLayer::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*, CCTextInputNode*)>(base+0x374c10)(this, p0);
}

void GJMoveCommandLayer::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*, CCTextInputNode*, float)>(base+0x374b50)(this, p0, p1);
}

void GJMoveCommandLayer::updateEditorLabel() {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*)>(base+0x374110)(this);
}

void GJMoveCommandLayer::updateMoveTargetElements() {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*)>(base+0x373ac0)(this);
}

void GJMoveCommandLayer::updateTargetGroupID() {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*)>(base+0x374050)(this);
}

void GJMoveCommandLayer::updateTargetGroupID2() {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*)>(base+0x374230)(this);
}

void GJMoveCommandLayer::updateTextInputLabel() {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*)>(base+0x373680)(this);
}

void GJMoveCommandLayer::updateTextInputLabel2() {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*)>(base+0x373760)(this);
}

void GJMoveCommandLayer::updateValueXLabel() {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*)>(base+0x373840)(this);
}

void GJMoveCommandLayer::updateValueYLabel() {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*)>(base+0x373950)(this);
}

void GJMoveCommandLayer::valuePopupClosed(ConfigureValuePopup* p0, float p1) {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*, ConfigureValuePopup*, float)>(base+0x373c20)(this, p0, p1);
}

GJPFollowCommandLayer* GJPFollowCommandLayer::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<GJPFollowCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x1aea20)(p0, p1);
}

void GJPFollowCommandLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJPFollowCommandLayer*, CCTextInputNode*)>(base+0x1b1dc0)(this, p0);
}

void GJPFollowCommandLayer::updateTargetGroupID() {
    return reinterpret_cast<void(*)(GJPFollowCommandLayer*)>(base+0x1b1a60)(this);
}

void GJRequestCell::loadFromScore(GJUserScore* p0) {
    return reinterpret_cast<void(*)(GJRequestCell*, GJUserScore*)>(base+0x115b70)(this, p0);
}

GJRobotSprite* GJRobotSprite::create() {
    return reinterpret_cast<GJRobotSprite*(*)()>(base+0x34ac00)();
}

void GJRobotSprite::updateColor02(cocos2d::_ccColor3B p0) {
    return reinterpret_cast<void(*)(GJRobotSprite*, cocos2d::_ccColor3B)>(base+0x34bbd0)(this, p0);
}

void GJRobotSprite::updateFrame(int p0) {
    return reinterpret_cast<void(*)(GJRobotSprite*, int)>(base+0x34bdd0)(this, p0);
}

GJRotateCommandLayer* GJRotateCommandLayer::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<GJRotateCommandLayer*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x1ba0)(p0, p1);
}

void GJRotateCommandLayer::onUpdateGroupID(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(GJRotateCommandLayer*, cocos2d::CCObject*)>(base+0x4bb0)(this, p0);
}

void GJRotateCommandLayer::onUpdateGroupID2(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(GJRotateCommandLayer*, cocos2d::CCObject*)>(base+0x4ca0)(this, p0);
}

void GJRotateCommandLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJRotateCommandLayer*, CCTextInputNode*)>(base+0x58d0)(this, p0);
}

void GJRotateCommandLayer::updateTargetGroupID() {
    return reinterpret_cast<void(*)(GJRotateCommandLayer*)>(base+0x54b0)(this);
}

void GJRotateCommandLayer::updateTargetGroupID2() {
    return reinterpret_cast<void(*)(GJRotateCommandLayer*)>(base+0x5690)(this);
}

void GJScoreCell::loadFromScore(GJUserScore* p0) {
    return reinterpret_cast<void(*)(GJScoreCell*, GJUserScore*)>(base+0x113aa0)(this, p0);
}

GJSearchObject* GJSearchObject::create(SearchType p0) {
    return reinterpret_cast<GJSearchObject*(*)(SearchType)>(base+0x2df120)(p0);
}

GJSearchObject* GJSearchObject::create(SearchType p0, std::string p1, std::string p2, std::string p3, int p4, bool p5, bool p6, bool p7, int p8, bool p9, bool p10, bool p11, bool p12, bool p13, bool p14, bool p15, bool p16, int p17, int p18) {
    return reinterpret_cast<GJSearchObject*(*)(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, int, int)>(base+0x2dee30)(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18);
}

void GJSearchObject::getPageObject(int p0) {
    return reinterpret_cast<void(*)(GJSearchObject*, int)>(base+0x2df9a0)(this, p0);
}

GJSongBrowser* GJSongBrowser::create(LevelSettingsObject* p0) {
    return reinterpret_cast<GJSongBrowser*(*)(LevelSettingsObject*)>(base+0x3685d0)(p0);
}

bool GJSongBrowser::init(LevelSettingsObject* p0) {
    return reinterpret_cast<bool(*)(GJSongBrowser*, LevelSettingsObject*)>(base+0x352550)(this, p0);
}

void GJSongBrowser::loadPage(int p0) {
    return reinterpret_cast<void(*)(GJSongBrowser*, int)>(base+0x368820)(this, p0);
}

void GJSpecialColorSelect::textForColorIdx(int p0) {
    return reinterpret_cast<void(*)(GJSpecialColorSelect*, int)>(base+0x383a50)(this, p0);
}

GJSpiderSprite* GJSpiderSprite::create() {
    return reinterpret_cast<GJSpiderSprite*(*)()>(base+0x34c5b0)();
}

void GJUserCell::loadFromScore(GJUserScore* p0) {
    return reinterpret_cast<void(*)(GJUserCell*, GJUserScore*)>(base+0x115300)(this, p0);
}

void GManager::save() {
    return reinterpret_cast<void(*)(GManager*)>(base+0x26f300)(this);
}

void GManager::saveData(DS_Dictionary* p0, std::string p1) {
    return reinterpret_cast<void(*)(GManager*, DS_Dictionary*, std::string)>(base+0x26f4b0)(this, p0, p1);
}

void GManager::saveGMTo(std::string p0) {
    return reinterpret_cast<void(*)(GManager*, std::string)>(base+0x26f3b0)(this, p0);
}

GJGameLevel* GameLevelManager::createNewLevel() {
    return reinterpret_cast<GJGameLevel*(*)(GameLevelManager*)>(base+0x2b8180)(this);
}

GameLevelManager* GameLevelManager::sharedState() {
    return reinterpret_cast<GameLevelManager*(*)()>(base+0x2a8340)();
}

void GameLevelManager::getPageInfo(char const* p0) {
    return reinterpret_cast<void(*)(GameLevelManager*, char const*)>(base+0x2c0050)(this, p0);
}

cocos2d::CCArray* GameLevelManager::getStoredOnlineLevels(char const* p0) {
    return reinterpret_cast<cocos2d::CCArray*(*)(GameLevelManager*, char const*)>(base+0x2bfe80)(this, p0);
}

void GameLevelManager::getTopArtists(int p0, int p1) {
    return reinterpret_cast<void(*)(GameLevelManager*, int, int)>(base+0x2ce3d0)(this, p0, p1);
}

void GameLevelManager::getTopArtistsKey(int p0) {
    return reinterpret_cast<void(*)(GameLevelManager*, int)>(base+0x2ce7a0)(this, p0);
}

void GameLevelManager::makeTimeStamp(char const* p0) {
    return reinterpret_cast<void(*)(GameLevelManager*, char const*)>(base+0x2bfd90)(this, p0);
}

void GameManager::accountStatusChanged() {
    return reinterpret_cast<void(*)(GameManager*)>(base+0x1cdad0)(this);
}

const cocos2d::_ccColor3B& GameManager::colorForIdx(int p0) {
    return reinterpret_cast<const cocos2d::_ccColor3B&(*)(GameManager*, int)>(base+0x1cbc80)(this, p0);
}

void GameManager::didExitPlayscene() {
    return reinterpret_cast<void(*)(GameManager*)>(base+0x1d0230)(this);
}

void GameManager::doQuickSave() {
    return reinterpret_cast<void(*)(GameManager*)>(base+0x1d0200)(this);
}

void GameManager::fadeInMusic(char const* p0) {
    return reinterpret_cast<void(*)(GameManager*, char const*)>(base+0x1c2ff0)(this, p0);
}

void GameManager::getBGTexture(int p0) {
    return reinterpret_cast<void(*)(GameManager*, int)>(base+0x1cca00)(this, p0);
}

void GameManager::getFontFile(int p0) {
    return reinterpret_cast<void(*)(GameManager*, int)>(base+0x1cc5f0)(this, p0);
}

bool GameManager::getGameVariable(char const* p0) {
    return reinterpret_cast<bool(*)(GameManager*, char const*)>(base+0x1cccd0)(this, p0);
}

int GameManager::getIntGameVariable(char const* p0) {
    return reinterpret_cast<int(*)(GameManager*, char const*)>(base+0x1cd1d0)(this, p0);
}

void GameManager::getUGV(char const* p0) {
    return reinterpret_cast<void(*)(GameManager*, char const*)>(base+0x1ccfa0)(this, p0);
}

void GameManager::loadDeathEffect(int p0) {
    return reinterpret_cast<void(*)(GameManager*, int)>(base+0x1cc690)(this, p0);
}

void GameManager::loadFont(int p0) {
    return reinterpret_cast<void(*)(GameManager*, int)>(base+0x1cc550)(this, p0);
}

void GameManager::reloadAll(bool p0, bool p1, bool p2) {
    return reinterpret_cast<void(*)(GameManager*, bool, bool, bool)>(base+0x1d08a0)(this, p0, p1, p2);
}

void GameManager::reloadAllStep5() {
    return reinterpret_cast<void(*)(GameManager*)>(base+0x1d0b00)(this);
}

void GameManager::reportPercentageForLevel(int p0, int p1, bool p2) {
    return reinterpret_cast<void(*)(GameManager*, int, int, bool)>(base+0x1c5b00)(this, p0, p1, p2);
}

void GameManager::setGameVariable(char const* p0, bool p1) {
    return reinterpret_cast<void(*)(GameManager*, char const*, bool)>(base+0x1cca80)(this, p0, p1);
}

void GameManager::setIntGameVariable(char const* p0, int p1) {
    return reinterpret_cast<void(*)(GameManager*, char const*, int)>(base+0x1cd0e0)(this, p0, p1);
}

void GameManager::setUGV(char const* p0, bool p1) {
    return reinterpret_cast<void(*)(GameManager*, char const*, bool)>(base+0x1cce50)(this, p0, p1);
}

GameManager* GameManager::sharedState() {
    return reinterpret_cast<GameManager*(*)()>(base+0x1c2b30)();
}

void GameManager::getGTexture(int p0) {
    return reinterpret_cast<void(*)(GameManager*, int)>(base+0x1cca40)(this, p0);
}

bool GameManager::init() {
    return reinterpret_cast<bool(*)(GameManager*)>(base+0x1c2ec0)(this);
}

void GameManager::reportAchievementWithID(char const* p0, int p1, bool p2) {
    return reinterpret_cast<void(*)(GameManager*, char const*, int, bool)>(base+0x1c6460)(this, p0, p1, p2);
}

void GameManager::resolutionForKey(int p0) {
    return reinterpret_cast<void(*)(GameManager*, int)>(base+0x1d0b40)(this, p0);
}

void GameManager::update(float p0) {
    return reinterpret_cast<void(*)(GameManager*, float)>(base+0x1d0270)(this, p0);
}

void GameObject::activateObject() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x2faf60)(this);
}

void GameObject::activatedByPlayer(GameObject* p0) {
    return reinterpret_cast<void(*)(GameObject*, GameObject*)>(base+0x342a20)(this, p0);
}

void GameObject::addColorSprite() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x2f7fe0)(this);
}

void GameObject::addColorSpriteToParent(bool p0) {
    return reinterpret_cast<void(*)(GameObject*, bool)>(base+0x2fb470)(this, p0);
}

void GameObject::addMainSpriteToParent(bool p0) {
    return reinterpret_cast<void(*)(GameObject*, bool)>(base+0x33a5b0)(this, p0);
}

void GameObject::addToGroup(int p0) {
    return reinterpret_cast<void(*)(GameObject*, int)>(base+0x33ad00)(this, p0);
}

void GameObject::addToTempOffset(float p0, float p1) {
    return reinterpret_cast<void(*)(GameObject*, float, float)>(base+0x335700)(this, p0, p1);
}

void GameObject::calculateOrientedBox() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x342b20)(this);
}

void GameObject::calculateSpawnXPos() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x336970)(this);
}

void GameObject::canChangeCustomColor() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x342db0)(this);
}

void GameObject::colorForMode(int p0, bool p1) {
    return reinterpret_cast<void(*)(GameObject*, int, bool)>(base+0x343460)(this, p0, p1);
}

void GameObject::commonSetup() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x2f5570)(this);
}

void GameObject::copyGroups(GameObject* p0) {
    return reinterpret_cast<void(*)(GameObject*, GameObject*)>(base+0x33ae30)(this, p0);
}

GameObject* GameObject::createWithFrame(char const* p0) {
    return reinterpret_cast<GameObject*(*)(char const*)>(base+0x2f5490)(p0);
}

GameObject* GameObject::createWithKey(int p0) {
    return reinterpret_cast<GameObject*(*)(int)>(base+0x2f4ce0)(p0);
}

void GameObject::customSetup() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x2fbba0)(this);
}

void GameObject::deactivateObject(bool p0) {
    return reinterpret_cast<void(*)(GameObject*, bool)>(base+0x2fb8f0)(this, p0);
}

void GameObject::destroyObject() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x336a00)(this);
}

void GameObject::determineSlopeDirection() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x33a9e0)(this);
}

void GameObject::getActiveColorForMode(int p0, bool p1) {
    return reinterpret_cast<void(*)(GameObject*, int, bool)>(base+0x343860)(this, p0, p1);
}

void GameObject::getBallFrame(int p0) {
    return reinterpret_cast<void(*)(GameObject*, int)>(base+0x341bf0)(this, p0);
}

void GameObject::getBoxOffset() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x3353d0)(this);
}

const cocos2d::_ccColor3B& GameObject::getColorIndex() {
    return reinterpret_cast<const cocos2d::_ccColor3B&(*)(GameObject*)>(base+0x343b90)(this);
}

void GameObject::getDidUpdateLastPosition() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x343a20)(this);
}

int GameObject::getGroupID(int p0) {
    return reinterpret_cast<int(*)(GameObject*, int)>(base+0x33ae10)(this, p0);
}

void GameObject::getLastPosition() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x3439d0)(this);
}

void GameObject::getMainColorMode() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x334c30)(this);
}

cocos2d::CCRect* GameObject::getObjectRect() {
    return reinterpret_cast<cocos2d::CCRect*(*)(GameObject*)>(base+0x3352b0)(this);
}

void GameObject::getObjectRect(float p0, float p1) {
    return reinterpret_cast<void(*)(GameObject*, float, float)>(base+0x3352d0)(this, p0, p1);
}

void GameObject::getObjectRect2(float p0, float p1) {
    return reinterpret_cast<void(*)(GameObject*, float, float)>(base+0x3354e0)(this, p0, p1);
}

void GameObject::getObjectRectDirty() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0xdc1d0)(this);
}

void GameObject::getObjectTextureRect() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x3355b0)(this);
}

void GameObject::getObjectZOrder() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x337d70)(this);
}

void GameObject::getOrientedRectDirty() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0xdc1f0)(this);
}

void GameObject::getRScaleX() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x335e50)(this);
}

void GameObject::getRScaleY() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x335e80)(this);
}

std::string GameObject::getSaveString() {
    return reinterpret_cast<std::string(*)(GameObject*)>(base+0x33d3d0)(this);
}

void GameObject::getSecondaryColorMode() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x341c20)(this);
}

void GameObject::getSectionIdx() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x343a00)(this);
}

void GameObject::getStartPos() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0xdc230)(this);
}

void GameObject::getType() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0xdc210)(this);
}

void GameObject::groupWasDisabled() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x33b110)(this);
}

void GameObject::groupWasEnabled() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x33b0f0)(this);
}

void GameObject::hasBeenActivated() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x342a80)(this);
}

void GameObject::hasBeenActivatedByPlayer(GameObject* p0) {
    return reinterpret_cast<void(*)(GameObject*, GameObject*)>(base+0x342a50)(this, p0);
}

void GameObject::hasSecondaryColor() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x342f80)(this);
}

void GameObject::ignoreEnter() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x3352a0)(this);
}

void GameObject::ignoreFade() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x335290)(this);
}

bool GameObject::initWithTexture(cocos2d::CCTexture2D* p0) {
    return reinterpret_cast<bool(*)(GameObject*, cocos2d::CCTexture2D*)>(base+0x2f56a0)(this, p0);
}

void GameObject::isBasicTrigger() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x343d10)(this);
}

void GameObject::isColorTrigger() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x343b40)(this);
}

void GameObject::isFlipX() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x335a40)(this);
}

void GameObject::isFlipY() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x335a50)(this);
}

void GameObject::isSpawnableTrigger() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x343a60)(this);
}

void GameObject::isSpecialObject() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x343c40)(this);
}

GameObject* GameObject::objectFromString(std::string p0, bool p1) {
    return reinterpret_cast<GameObject*(*)(std::string, bool)>(base+0x33b720)(p0, p1);
}

void GameObject::playShineEffect() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x2fa9d0)(this);
}

void GameObject::powerOffObject() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x3369c0)(this);
}

void GameObject::powerOnObject() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x3369a0)(this);
}

void GameObject::quickUpdatePosition() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x335790)(this);
}

void GameObject::removeFromGroup(int p0) {
    return reinterpret_cast<void(*)(GameObject*, int)>(base+0x33ada0)(this, p0);
}

void GameObject::removeGlow() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x2f7f70)(this);
}

void GameObject::resetGroupDisabled() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x2fa7e0)(this);
}

void GameObject::saveActiveColors() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x33d250)(this);
}

void GameObject::selectObject(cocos2d::_ccColor3B p0) {
    return reinterpret_cast<void(*)(GameObject*, cocos2d::_ccColor3B)>(base+0x341f90)(this, p0);
}

void GameObject::setChildColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(GameObject*, cocos2d::_ccColor3B const&)>(base+0x341f20)(this, p0);
}

void GameObject::setDefaultMainColorMode(int p0) {
    return reinterpret_cast<void(*)(GameObject*, int)>(base+0x304fc0)(this, p0);
}

void GameObject::setDidUpdateLastPosition(bool const& p0) {
    return reinterpret_cast<void(*)(GameObject*, bool const&)>(base+0x343a30)(this, p0);
}

void GameObject::setGlowColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(GameObject*, cocos2d::_ccColor3B const&)>(base+0x341ed0)(this, p0);
}

void GameObject::setGlowOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(GameObject*, unsigned char)>(base+0x336200)(this, p0);
}

void GameObject::setLastPosition(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(GameObject*, cocos2d::CCPoint const&)>(base+0x3439e0)(this, p0);
}

void GameObject::setMainColorMode(int p0) {
    return reinterpret_cast<void(*)(GameObject*, int)>(base+0x342e70)(this, p0);
}

void GameObject::setObjectColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(GameObject*, cocos2d::_ccColor3B const&)>(base+0x341c90)(this, p0);
}

void GameObject::setObjectRectDirty(bool p0) {
    return reinterpret_cast<void(*)(GameObject*, bool)>(base+0xdc1e0)(this, p0);
}

void GameObject::setOrientedRectDirty(bool p0) {
    return reinterpret_cast<void(*)(GameObject*, bool)>(base+0xdc200)(this, p0);
}

void GameObject::setPosition(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(GameObject*, cocos2d::CCPoint const&)>(base+0x335850)(this, p0);
}

void GameObject::setRScale(float p0) {
    return reinterpret_cast<void(*)(GameObject*, float)>(base+0x335e10)(this, p0);
}

void GameObject::setRScaleX(float p0) {
    return reinterpret_cast<void(*)(GameObject*, float)>(base+0x335cb0)(this, p0);
}

void GameObject::setRScaleY(float p0) {
    return reinterpret_cast<void(*)(GameObject*, float)>(base+0x335d60)(this, p0);
}

void GameObject::setSectionIdx(int const& p0) {
    return reinterpret_cast<void(*)(GameObject*, int const&)>(base+0x343a10)(this, p0);
}

void GameObject::setStartPos(cocos2d::CCPoint p0) {
    return reinterpret_cast<void(*)(GameObject*, cocos2d::CCPoint)>(base+0x2fa520)(this, p0);
}

void GameObject::setType(GameObjectType p0) {
    return reinterpret_cast<void(*)(GameObject*, GameObjectType)>(base+0xdc220)(this, p0);
}

void GameObject::setupCoinArt() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x337dd0)(this);
}

void GameObject::setupCustomSprites() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x307f60)(this);
}

void GameObject::slopeFloorTop() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x342800)(this);
}

void GameObject::slopeWallLeft() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x3427e0)(this);
}

void GameObject::spawnXPosition() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0xdc1b0)(this);
}

void GameObject::triggerActivated(float p0) {
    return reinterpret_cast<void(*)(GameObject*, float)>(base+0x336990)(this, p0);
}

void GameObject::triggerObject(GJBaseGameLayer* p0) {
    return reinterpret_cast<void(*)(GameObject*, GJBaseGameLayer*)>(base+0x2fa8f0)(this, p0);
}

void GameObject::updateCustomScale(float p0) {
    return reinterpret_cast<void(*)(GameObject*, float)>(base+0x335eb0)(this, p0);
}

void GameObject::updateMainColor() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x343340)(this);
}

void GameObject::updateOrientedBox() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x342b50)(this);
}

void GameObject::updateSecondaryColor() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x343740)(this);
}

void GameObject::updateStartPos() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x2fa590)(this);
}

void GameObject::updateStartValues() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x2fa800)(this);
}

void GameObject::updateState() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x3369e0)(this);
}

void GameObject::updateSyncedAnimation(float p0) {
    return reinterpret_cast<void(*)(GameObject*, float)>(base+0x337f00)(this, p0);
}

GameObjectCopy* GameObjectCopy::create(GameObject* p0) {
    return reinterpret_cast<GameObjectCopy*(*)(GameObject*)>(base+0x975a0)(p0);
}

void GameObjectCopy::resetObject() {
    return reinterpret_cast<void(*)(GameObjectCopy*)>(base+0x976a0)(this);
}

void GameSoundManager::disableMetering() {
    return reinterpret_cast<void(*)(GameSoundManager*)>(base+0x362d80)(this);
}

void GameSoundManager::enableMetering() {
    return reinterpret_cast<void(*)(GameSoundManager*)>(base+0x362d00)(this);
}

void GameSoundManager::getMeteringValue() {
    return reinterpret_cast<void(*)(GameSoundManager*)>(base+0x362db0)(this);
}

void GameSoundManager::playBackgroundMusic(std::string p0, bool p1, bool p2) {
    return reinterpret_cast<void(*)(GameSoundManager*, std::string, bool, bool)>(base+0x362070)(this, p0, p1, p2);
}

void GameSoundManager::playEffect(std::string p0, float p1, float p2, float p3) {
    return reinterpret_cast<void(*)(GameSoundManager*, std::string, float, float, float)>(base+0x3623d0)(this, p0, p1, p2, p3);
}

void GameSoundManager::sharedManager() {
    return reinterpret_cast<void(*)(GameSoundManager*)>(base+0x3610f0)(this);
}

void GameSoundManager::stopBackgroundMusic() {
    return reinterpret_cast<void(*)(GameSoundManager*)>(base+0x362130)(this);
}

void GameStatsManager::awardCurrencyForLevel(GJGameLevel* p0) {
    return reinterpret_cast<void(*)(GameStatsManager*, GJGameLevel*)>(base+0x43600)(this, p0);
}

void GameStatsManager::awardDiamondsForLevel(GJGameLevel* p0) {
    return reinterpret_cast<void(*)(GameStatsManager*, GJGameLevel*)>(base+0x43c60)(this, p0);
}

void GameStatsManager::awardSecretKey() {
    return reinterpret_cast<void(*)(GameStatsManager*)>(base+0x4b1e0)(this);
}

void GameStatsManager::getSecretCoinKey(char const* p0) {
    return reinterpret_cast<void(*)(GameStatsManager*, char const*)>(base+0x429f0)(this, p0);
}

void GameStatsManager::getStat(char const* p0) {
    return reinterpret_cast<void(*)(GameStatsManager*, char const*)>(base+0x3d310)(this, p0);
}

void GameStatsManager::hasPendingUserCoin(char const* p0) {
    return reinterpret_cast<void(*)(GameStatsManager*, char const*)>(base+0x42730)(this, p0);
}

void GameStatsManager::hasSecretCoin(char const* p0) {
    return reinterpret_cast<void(*)(GameStatsManager*, char const*)>(base+0x40730)(this, p0);
}

void GameStatsManager::hasUserCoin(char const* p0) {
    return reinterpret_cast<void(*)(GameStatsManager*, char const*)>(base+0x427e0)(this, p0);
}

void GameStatsManager::incrementStat(char const* p0) {
    return reinterpret_cast<void(*)(GameStatsManager*, char const*)>(base+0x3d6d0)(this, p0);
}

void GameStatsManager::incrementStat(char const* p0, int p1) {
    return reinterpret_cast<void(*)(GameStatsManager*, char const*, int)>(base+0x3d6e0)(this, p0, p1);
}

void GameStatsManager::sharedState() {
    return reinterpret_cast<void(*)(GameStatsManager*)>(base+0x38f20)(this);
}

void GameStatsManager::storePendingUserCoin(char const* p0) {
    return reinterpret_cast<void(*)(GameStatsManager*, char const*)>(base+0x42940)(this, p0);
}

void GameStatsManager::storeSecretCoin(char const* p0) {
    return reinterpret_cast<void(*)(GameStatsManager*, char const*)>(base+0x42a10)(this, p0);
}

void GameStatsManager::storeUserCoin(char const* p0) {
    return reinterpret_cast<void(*)(GameStatsManager*, char const*)>(base+0x42890)(this, p0);
}

void GameToolbox::createToggleButton(std::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCNode* p5, cocos2d::CCNode* p6, float p7, float p8, float p9, cocos2d::CCPoint p10, char const* p11, bool p12, int p13, cocos2d::CCArray* p14) {
    return reinterpret_cast<void(*)(std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*)>(base+0x28bdd0)(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
}

void GameToolbox::getRelativeOffset(GameObject* p0, cocos2d::CCPoint p1) {
    return reinterpret_cast<void(*)(GameObject*, cocos2d::CCPoint)>(base+0x28c060)(p0, p1);
}

void GameToolbox::multipliedColorValue(cocos2d::_ccColor3B p0, cocos2d::_ccColor3B p1, float p2) {
    return reinterpret_cast<void(*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float)>(base+0x28cb90)(p0, p1, p2);
}

void GameToolbox::stringSetupToDict(std::string p0, char const* p1) {
    return reinterpret_cast<void(*)(std::string, char const*)>(base+0x28d700)(p0, p1);
}

std::map<std::string, std::string> GameToolbox::stringSetupToMap(std::string p0, char const* p1) {
    return reinterpret_cast<std::map<std::string, std::string>(*)(std::string, char const*)>(base+0x28d4c0)(p0, p1);
}

void GameToolbox::transformColor(cocos2d::_ccColor3B const& p0, cocos2d::_ccHSVValue p1) {
    return reinterpret_cast<void(*)(cocos2d::_ccColor3B const&, cocos2d::_ccHSVValue)>(base+0x28c950)(p0, p1);
}

void GameToolbox::transformColor(cocos2d::_ccColor3B const& p0, float p1, float p2, float p3) {
    return reinterpret_cast<void(*)(cocos2d::_ccColor3B const&, float, float, float)>(base+0x28c930)(p0, p1, p2, p3);
}

GravityEffectSprite* GravityEffectSprite::create() {
    return reinterpret_cast<GravityEffectSprite*(*)()>(base+0x6d0a0)();
}

bool GravityEffectSprite::init() {
    return reinterpret_cast<bool(*)(GravityEffectSprite*)>(base+0x80b20)(this);
}

void GravityEffectSprite::updateSpritesColor(cocos2d::_ccColor3B p0) {
    return reinterpret_cast<void(*)(GravityEffectSprite*, cocos2d::_ccColor3B)>(base+0x7ce30)(this, p0);
}

GroupCommandObject* GroupCommandObject::create() {
    return reinterpret_cast<GroupCommandObject*(*)()>(base+0x18b460)();
}

GroupCommandObject* GroupCommandObject::createFromString(std::string p0) {
    return reinterpret_cast<GroupCommandObject*(*)(std::string)>(base+0x16ece0)(p0);
}

void GroupCommandObject::easeToText(int p0) {
    return reinterpret_cast<void(*)(GroupCommandObject*, int)>(base+0x16ecb0)(this, p0);
}

void GroupCommandObject::getEasedAction(cocos2d::CCActionInterval* p0, int p1, float p2) {
    return reinterpret_cast<void(*)(GroupCommandObject*, cocos2d::CCActionInterval*, int, float)>(base+0x16e7b0)(this, p0, p1, p2);
}

void GroupCommandObject::runMoveCommand(cocos2d::CCPoint p0, float p1, int p2, float p3, bool p4, bool p5) {
    return reinterpret_cast<void(*)(GroupCommandObject*, cocos2d::CCPoint, float, int, float, bool, bool)>(base+0x16e640)(this, p0, p1, p2, p3, p4, p5);
}

void GroupCommandObject::runRotateCommand(float p0, float p1, int p2, float p3, bool p4) {
    return reinterpret_cast<void(*)(GroupCommandObject*, float, float, int, float, bool)>(base+0x16e8f0)(this, p0, p1, p2, p3, p4);
}

void HardStreak::addPoint(cocos2d::CCPoint p0) {
    return reinterpret_cast<void(*)(HardStreak*, cocos2d::CCPoint)>(base+0x5c950)(this, p0);
}

void HardStreak::reset() {
    return reinterpret_cast<void(*)(HardStreak*)>(base+0x5c930)(this);
}

void HardStreak::resumeStroke() {
    return reinterpret_cast<void(*)(HardStreak*)>(base+0x5c210)(this);
}

void HardStreak::stopStroke() {
    return reinterpret_cast<void(*)(HardStreak*)>(base+0x5c8f0)(this);
}

InfoAlertButton* InfoAlertButton::create(std::string p0, std::string p1, float p2) {
    return reinterpret_cast<InfoAlertButton*(*)(std::string, std::string, float)>(base+0x2ecad0)(p0, p1, p2);
}

void InfoLayer::loadPage(int p0, bool p1) {
    return reinterpret_cast<void(*)(InfoLayer*, int, bool)>(base+0x458fb0)(this, p0, p1);
}

void InfoLayer::onRefreshComments(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(InfoLayer*, cocos2d::CCObject*)>(base+0x459b60)(this, p0);
}

EffectGameObject* EffectGameObject::create(char const* p0) {
    return reinterpret_cast<EffectGameObject*(*)(char const*)>(base+0xc9790)(p0);
}

void EffectGameObject::getTargetColorIndex() {
    return reinterpret_cast<void(*)(EffectGameObject*)>(base+0xca1f0)(this);
}

void EffectGameObject::triggerObject(GJBaseGameLayer* p0) {
    return reinterpret_cast<void(*)(EffectGameObject*, GJBaseGameLayer*)>(base+0xc9870)(this, p0);
}

EndPortalObject* EndPortalObject::create() {
    return reinterpret_cast<EndPortalObject*(*)()>(base+0x1da8f0)();
}

void EndPortalObject::updateColors(cocos2d::_ccColor3B p0) {
    return reinterpret_cast<void(*)(EndPortalObject*, cocos2d::_ccColor3B)>(base+0x1dacb0)(this, p0);
}

bool LabelGameObject::init() {
    return reinterpret_cast<bool(*)(LabelGameObject*)>(base+0x2f5520)(this);
}

void LabelGameObject::setObjectColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(LabelGameObject*, cocos2d::_ccColor3B const&)>(base+0xdbca0)(this, p0);
}

void LevelBrowserLayer::loadPage(GJSearchObject* p0) {
    return reinterpret_cast<void(*)(LevelBrowserLayer*, GJSearchObject*)>(base+0x253650)(this, p0);
}

cocos2d::CCScene* LevelBrowserLayer::scene(GJSearchObject* p0) {
    return reinterpret_cast<cocos2d::CCScene*(*)(GJSearchObject*)>(base+0x2511d0)(p0);
}

void LevelBrowserLayer::setIDPopupClosed(SetIDPopup* p0, int p1) {
    return reinterpret_cast<void(*)(LevelBrowserLayer*, SetIDPopup*, int)>(base+0x2554f0)(this, p0, p1);
}

void LevelEditorLayer::activateTriggerEffect(EffectGameObject* p0, float p1, float p2, float p3) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, EffectGameObject*, float, float, float)>(base+0x9b520)(this, p0, p1, p2, p3);
}

GameObject* LevelEditorLayer::addObjectFromString(std::string p0) {
    return reinterpret_cast<GameObject*(*)(LevelEditorLayer*, std::string)>(base+0x94640)(this, p0);
}

void LevelEditorLayer::addSpecial(GameObject* p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, GameObject*)>(base+0x94f30)(this, p0);
}

void LevelEditorLayer::addToGroup(GameObject* p0, int p1, bool p2) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, GameObject*, int, bool)>(base+0x9dab0)(this, p0, p1, p2);
}

void LevelEditorLayer::addToRedoList(UndoObject* p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, UndoObject*)>(base+0x96f80)(this, p0);
}

void LevelEditorLayer::addToUndoList(UndoObject* p0, bool p1) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, UndoObject*, bool)>(base+0x94e20)(this, p0, p1);
}

void LevelEditorLayer::animateInDualGround(GameObject* p0, float p1, bool p2) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, GameObject*, float, bool)>(base+0xa2780)(this, p0, p1, p2);
}

void LevelEditorLayer::calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)>(base+0x9c590)(this, p0, p1, p2, p3, p4, p5);
}

void LevelEditorLayer::checkCollisions(PlayerObject* p0, float p1) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, PlayerObject*, float)>(base+0x9e620)(this, p0, p1);
}

LevelEditorLayer* LevelEditorLayer::create(GJGameLevel* p0) {
    return reinterpret_cast<LevelEditorLayer*(*)(GJGameLevel*)>(base+0x90fb0)(p0);
}

void LevelEditorLayer::createBackground() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x929f0)(this);
}

void LevelEditorLayer::createGroundLayer() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x92840)(this);
}

GameObject* LevelEditorLayer::createObject(int p0, cocos2d::CCPoint p1, bool p2) {
    return reinterpret_cast<GameObject*(*)(LevelEditorLayer*, int, cocos2d::CCPoint, bool)>(base+0x957c0)(this, p0, p1, p2);
}

void LevelEditorLayer::createObjectsFromSetup(std::string p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, std::string)>(base+0x92230)(this, p0);
}

void LevelEditorLayer::createObjectsFromString(std::string p0, bool p1) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, std::string, bool)>(base+0x94730)(this, p0, p1);
}

void LevelEditorLayer::draw() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0xa2a70)(this);
}

void LevelEditorLayer::flipGravity(PlayerObject* p0, bool p1, bool p2) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, PlayerObject*, bool, bool)>(base+0xa04e0)(this, p0, p1, p2);
}

void LevelEditorLayer::getLastObjectX() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x9c860)(this);
}

void LevelEditorLayer::getLevelString() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x97790)(this);
}

void LevelEditorLayer::getNextColorChannel() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x9a610)(this);
}

void LevelEditorLayer::getNextFreeBlockID(cocos2d::CCArray* p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, cocos2d::CCArray*)>(base+0x9a4e0)(this, p0);
}

int LevelEditorLayer::getNextFreeGroupID(cocos2d::CCArray* p0) {
    return reinterpret_cast<int(*)(LevelEditorLayer*, cocos2d::CCArray*)>(base+0x9a1b0)(this, p0);
}

void LevelEditorLayer::getNextFreeItemID(cocos2d::CCArray* p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, cocos2d::CCArray*)>(base+0x9a390)(this, p0);
}

void LevelEditorLayer::getObjectRect(GameObject* p0, bool p1) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, GameObject*, bool)>(base+0x96240)(this, p0, p1);
}

void LevelEditorLayer::getRelativeOffset(GameObject* p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, GameObject*)>(base+0x96840)(this, p0);
}

void LevelEditorLayer::handleAction(bool p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, bool, cocos2d::CCArray*)>(base+0x97020)(this, p0, p1);
}

bool LevelEditorLayer::init(GJGameLevel* p0) {
    return reinterpret_cast<bool(*)(LevelEditorLayer*, GJGameLevel*)>(base+0x91010)(this, p0);
}

void LevelEditorLayer::levelSettingsUpdated() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x93f30)(this);
}

void LevelEditorLayer::objectAtPosition(cocos2d::CCPoint p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, cocos2d::CCPoint)>(base+0x960c0)(this, p0);
}

void LevelEditorLayer::objectMoved(GameObject* p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, GameObject*)>(base+0x999f0)(this, p0);
}

void LevelEditorLayer::objectsInRect(cocos2d::CCRect p0, bool p1) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, cocos2d::CCRect, bool)>(base+0x95e60)(this, p0, p1);
}

void LevelEditorLayer::onPlaytest() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0xa06b0)(this);
}

void LevelEditorLayer::onStopPlaytest() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0xa1780)(this);
}

void LevelEditorLayer::playMusic() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0xa13c0)(this);
}

void LevelEditorLayer::recreateGroups() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x9dbf0)(this);
}

void LevelEditorLayer::redoLastAction() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x97750)(this);
}

void LevelEditorLayer::removeAllObjects() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x93d80)(this);
}

void LevelEditorLayer::removeAllObjectsOfType(int p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, int)>(base+0x96d40)(this, p0);
}

void LevelEditorLayer::removeFromGroup(GameObject* p0, int p1) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, GameObject*, int)>(base+0x9db60)(this, p0, p1);
}

void LevelEditorLayer::removeObject(GameObject* p0, bool p1) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, GameObject*, bool)>(base+0x96890)(this, p0, p1);
}

void LevelEditorLayer::removeSpecial(GameObject* p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, GameObject*)>(base+0x969c0)(this, p0);
}

void LevelEditorLayer::resetMovingObjects() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x9ddc0)(this);
}

void LevelEditorLayer::resetObjectVector() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x9c4b0)(this);
}

void LevelEditorLayer::resetToggledGroups() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x9aa70)(this);
}

void LevelEditorLayer::resetToggledGroupsAndObjects() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x9c3c0)(this);
}

void LevelEditorLayer::resetUnusedColorChannels() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x9a870)(this);
}

void LevelEditorLayer::rotationForSlopeNearObject(GameObject* p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, GameObject*)>(base+0x95cd0)(this, p0);
}

void LevelEditorLayer::runColorEffect(EffectGameObject* p0, int p1, float p2, float p3, bool p4) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, EffectGameObject*, int, float, float, bool)>(base+0x9bd30)(this, p0, p1, p2, p3, p4);
}

void LevelEditorLayer::scene(GJGameLevel* p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, GJGameLevel*)>(base+0x90f20)(this, p0);
}

void LevelEditorLayer::setupLevelStart(LevelSettingsObject* p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, LevelSettingsObject*)>(base+0xa0ca0)(this, p0);
}

void LevelEditorLayer::sortStickyGroups() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x92b10)(this);
}

void LevelEditorLayer::stopTriggersInGroup(int p0, float p1) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, int, float)>(base+0x9c030)(this, p0, p1);
}

void LevelEditorLayer::timeForXPos(float p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, float)>(base+0x9c7d0)(this, p0);
}

void LevelEditorLayer::toggleDualMode(GameObject* p0, bool p1, PlayerObject* p2, bool p3) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, GameObject*, bool, PlayerObject*, bool)>(base+0xa0200)(this, p0, p1, p2, p3);
}

void LevelEditorLayer::toggleGroupPreview(int p0, bool p1) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, int, bool)>(base+0x9bea0)(this, p0, p1);
}

void LevelEditorLayer::transferDefaultColors(GJEffectManager* p0, GJEffectManager* p1) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, GJEffectManager*, GJEffectManager*)>(base+0x9ab50)(this, p0, p1);
}

void LevelEditorLayer::undoLastAction() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x97770)(this);
}

void LevelEditorLayer::update(float p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, float)>(base+0xa1b70)(this, p0);
}

void LevelEditorLayer::updateBGAndGColors() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x9b9b0)(this);
}

void LevelEditorLayer::updateBlendValues() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x9bc60)(this);
}

void LevelEditorLayer::updateColor(cocos2d::_ccColor3B p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue p5, int p6, bool p7, int p8, EffectGameObject* p9) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)>(base+0x9c200)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
}

void LevelEditorLayer::updateDualGround(PlayerObject* p0, int p1, bool p2) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, PlayerObject*, int, bool)>(base+0xa1a60)(this, p0, p1, p2);
}

void LevelEditorLayer::updateEditorMode() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x93b50)(this);
}

void LevelEditorLayer::updateGameObjectsNew() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x9adc0)(this);
}

void LevelEditorLayer::updateGround(float p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, float)>(base+0x93a60)(this, p0);
}

void LevelEditorLayer::updateGroundWidth() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x92af0)(this);
}

void LevelEditorLayer::updateOptions() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x91ed0)(this);
}

void LevelEditorLayer::updateToggledGroups() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x9bb10)(this);
}

void LevelEditorLayer::updateVisibility(float p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, float)>(base+0x92c70)(this, p0);
}

void LevelEditorLayer::xPosForTime(float p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, float)>(base+0x9c800)(this, p0);
}

LevelSettingsLayer* LevelSettingsLayer::create(LevelSettingsObject* p0, LevelEditorLayer* p1) {
    return reinterpret_cast<LevelSettingsLayer*(*)(LevelSettingsObject*, LevelEditorLayer*)>(base+0xa7c30)(p0, p1);
}

LevelSettingsObject* LevelSettingsObject::create() {
    return reinterpret_cast<LevelSettingsObject*(*)()>(base+0x92760)();
}

bool LevelSettingsObject::init() {
    return reinterpret_cast<bool(*)(LevelSettingsObject*)>(base+0xa5690)(this);
}

void LevelSettingsObject::objectFromDict(cocos2d::CCDictionary* p0) {
    return reinterpret_cast<void(*)(LevelSettingsObject*, cocos2d::CCDictionary*)>(base+0xa5810)(this, p0);
}

LevelSettingsObject* LevelSettingsObject::objectFromString(std::string p0) {
    return reinterpret_cast<LevelSettingsObject*(*)(std::string)>(base+0x945a0)(p0);
}

void LevelSettingsObject::setupColorsFromLegacyMode(cocos2d::CCDictionary* p0) {
    return reinterpret_cast<void(*)(LevelSettingsObject*, cocos2d::CCDictionary*)>(base+0xa6a30)(this, p0);
}

void LevelTools::getAudioString(int p0) {
    return reinterpret_cast<void(*)(LevelTools*, int)>(base+0x293880)(this, p0);
}

void LevelTools::verifyLevelIntegrity(std::string p0, int p1) {
    return reinterpret_cast<void(*)(LevelTools*, std::string, int)>(base+0x294360)(this, p0, p1);
}

void LevelTools::xPosForTime(float p0, cocos2d::CCArray* p1, int p2) {
    return reinterpret_cast<void(*)(LevelTools*, float, cocos2d::CCArray*, int)>(base+0x293d90)(this, p0, p1, p2);
}

void LoadingLayer::loadAssets() {
    return reinterpret_cast<void(*)(LoadingLayer*)>(base+0x1dfb20)(this);
}

LocalLevelManager* LocalLevelManager::sharedState() {
    return reinterpret_cast<LocalLevelManager*(*)()>(base+0x35dd60)();
}

void MenuGameLayer::resetPlayer() {
    return reinterpret_cast<void(*)(MenuGameLayer*)>(base+0x28fdc0)(this);
}

void MenuGameLayer::update(float p0) {
    return reinterpret_cast<void(*)(MenuGameLayer*, float)>(base+0x28fa70)(this, p0);
}

void MenuLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(MenuLayer*)>(base+0x1d3160)(this);
}

void MenuLayer::onMoreGames(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(MenuLayer*, cocos2d::CCObject*)>(base+0x1d2ad0)(this, p0);
}

void MenuLayer::onQuit(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(MenuLayer*, cocos2d::CCObject*)>(base+0x1d2b40)(this, p0);
}

void MenuLayer::scene(bool p0) {
    return reinterpret_cast<void(*)(MenuLayer*, bool)>(base+0x1d12d0)(this, p0);
}

MoreVideoOptionsLayer* MoreVideoOptionsLayer::create() {
    return reinterpret_cast<MoreVideoOptionsLayer*(*)()>(base+0x443c10)();
}

bool MoreVideoOptionsLayer::init() {
    return reinterpret_cast<bool(*)(MoreVideoOptionsLayer*)>(base+0x444150)(this);
}

void MusicDownloadManager::incrementPriorityForSong(int p0) {
    return reinterpret_cast<void(*)(MusicDownloadManager*, int)>(base+0x2ef750)(this, p0);
}

MusicDownloadManager* MusicDownloadManager::sharedState() {
    return reinterpret_cast<MusicDownloadManager*(*)()>(base+0x2ee4c0)();
}

void OBB2D::calculateWithCenter(cocos2d::CCPoint p0, float p1, float p2, float p3) {
    return reinterpret_cast<void(*)(OBB2D*, cocos2d::CCPoint, float, float, float)>(base+0x35a9c0)(this, p0, p1, p2, p3);
}

OBB2D* OBB2D::create(cocos2d::CCPoint p0, float p1, float p2, float p3) {
    return reinterpret_cast<OBB2D*(*)(cocos2d::CCPoint, float, float, float)>(base+0x35a890)(p0, p1, p2, p3);
}

void OBB2D::getBoundingRect() {
    return reinterpret_cast<void(*)(OBB2D*)>(base+0x35b2b0)(this);
}

void OBB2D::overlaps(OBB2D* p0) {
    return reinterpret_cast<void(*)(OBB2D*, OBB2D*)>(base+0x35b0a0)(this, p0);
}

void OBB2D::overlaps1Way(OBB2D* p0) {
    return reinterpret_cast<void(*)(OBB2D*, OBB2D*)>(base+0x35b0d0)(this, p0);
}

bool ObjectToolbox::init() {
    return reinterpret_cast<bool(*)(ObjectToolbox*)>(base+0x3b2d80)(this);
}

char const* ObjectToolbox::intKeyToFrame(int p0) {
    return reinterpret_cast<char const*(*)(ObjectToolbox*, int)>(base+0x4173b0)(this, p0);
}

ObjectToolbox* ObjectToolbox::sharedState() {
    return reinterpret_cast<ObjectToolbox*(*)()>(base+0x3b2bc0)();
}

OpacityEffectAction* OpacityEffectAction::create(float p0, float p1, float p2, int p3) {
    return reinterpret_cast<OpacityEffectAction*(*)(float, float, float, int)>(base+0x1789f0)(p0, p1, p2, p3);
}

OpacityEffectAction* OpacityEffectAction::createFromString(std::string p0) {
    return reinterpret_cast<OpacityEffectAction*(*)(std::string)>(base+0x178c10)(p0);
}

bool OpacityEffectAction::init(float p0, float p1, float p2, int p3) {
    return reinterpret_cast<bool(*)(OpacityEffectAction*, float, float, float, int)>(base+0x178b00)(this, p0, p1, p2, p3);
}

void OpacityEffectAction::step(float p0) {
    return reinterpret_cast<void(*)(OpacityEffectAction*, float)>(base+0x178b90)(this, p0);
}

PauseLayer* PauseLayer::create(bool p0) {
    return reinterpret_cast<PauseLayer*(*)(bool)>(base+0x20b1e0)(p0);
}

void PauseLayer::onEdit(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(PauseLayer*, cocos2d::CCObject*)>(base+0x20c630)(this, p0);
}

void PlatformToolbox::hideCursor() {
    return reinterpret_cast<void(*)(PlatformToolbox*)>(base+0x27c340)(this);
}

void PlatformToolbox::showCursor() {
    return reinterpret_cast<void(*)(PlatformToolbox*)>(base+0x27c360)(this);
}

void PlayLayer::addCircle(CCCircleWave* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, CCCircleWave*)>(base+0x7e0f0)(this, p0);
}

void PlayLayer::addObject(GameObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, GameObject*)>(base+0x70e50)(this, p0);
}

void PlayLayer::addToGroupOld(GameObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, GameObject*)>(base+0x77680)(this, p0);
}

void PlayLayer::addToSpeedObjects(GameObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, GameObject*)>(base+0x7cfc0)(this, p0);
}

void PlayLayer::animateInDualGround(GameObject* p0, float p1, bool p2) {
    return reinterpret_cast<void(*)(PlayLayer*, GameObject*, float, bool)>(base+0x7d710)(this, p0, p1, p2);
}

void PlayLayer::animateInGround(bool p0) {
    return reinterpret_cast<void(*)(PlayLayer*, bool)>(base+0x7d9d0)(this, p0);
}

void PlayLayer::animateOutGround(bool p0) {
    return reinterpret_cast<void(*)(PlayLayer*, bool)>(base+0x6f350)(this, p0);
}

void PlayLayer::animateOutGroundFinished() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7de80)(this);
}

void PlayLayer::applyEnterEffect(GameObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, GameObject*)>(base+0x7c310)(this, p0);
}

void PlayLayer::calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5) {
    return reinterpret_cast<void(*)(PlayLayer*, EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)>(base+0x7aa10)(this, p0, p1, p2, p3, p4, p5);
}

void PlayLayer::cameraMoveX(float p0, float p1, float p2) {
    return reinterpret_cast<void(*)(PlayLayer*, float, float, float)>(base+0x7cbe0)(this, p0, p1, p2);
}

void PlayLayer::cameraMoveY(float p0, float p1, float p2) {
    return reinterpret_cast<void(*)(PlayLayer*, float, float, float)>(base+0x7cc60)(this, p0, p1, p2);
}

void PlayLayer::checkCollisions(PlayerObject* p0, float p1) {
    return reinterpret_cast<void(*)(PlayLayer*, PlayerObject*, float)>(base+0x78c90)(this, p0, p1);
}

void PlayLayer::circleWaveWillBeRemoved(CCCircleWave* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, CCCircleWave*)>(base+0x7e110)(this, p0);
}

void PlayLayer::claimParticle(std::string p0) {
    return reinterpret_cast<void(*)(PlayLayer*, std::string)>(base+0x76ba0)(this, p0);
}

void PlayLayer::clearPickedUpItems() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7cfa0)(this);
}

void PlayLayer::colorObject(int p0, cocos2d::_ccColor3B p1) {
    return reinterpret_cast<void(*)(PlayLayer*, int, cocos2d::_ccColor3B)>(base+0x77810)(this, p0, p1);
}

void PlayLayer::commitJumps() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x737e0)(this);
}

PlayLayer* PlayLayer::create(GJGameLevel* p0) {
    return reinterpret_cast<PlayLayer*(*)(GJGameLevel*)>(base+0x6b590)(p0);
}

void PlayLayer::createCheckpoint() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7e470)(this);
}

void PlayLayer::createObjectsFromSetup(std::string p0) {
    return reinterpret_cast<void(*)(PlayLayer*, std::string)>(base+0x6d130)(this, p0);
}

void PlayLayer::createParticle(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3) {
    return reinterpret_cast<void(*)(PlayLayer*, int, char const*, int, cocos2d::tCCPositionType)>(base+0x76800)(this, p0, p1, p2, p3);
}

void PlayLayer::currencyWillExit(CurrencyRewardLayer* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, CurrencyRewardLayer*)>(base+0x7e070)(this, p0);
}

void PlayLayer::delayedResetLevel() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7e050)(this);
}

void PlayLayer::destroyPlayer(PlayerObject* p0, GameObject* p1) {
    return reinterpret_cast<void(*)(PlayLayer*, PlayerObject*, GameObject*)>(base+0x7ab80)(this, p0, p1);
}

void PlayLayer::dialogClosed(DialogLayer* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, DialogLayer*)>(base+0x7e0b0)(this, p0);
}

void PlayLayer::draw() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7d160)(this);
}

void PlayLayer::enterDualMode(GameObject* p0, bool p1) {
    return reinterpret_cast<void(*)(PlayLayer*, GameObject*, bool)>(base+0x7d6a0)(this, p0, p1);
}

void PlayLayer::exitAirMode() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7dd40)(this);
}

void PlayLayer::exitBirdMode(PlayerObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, PlayerObject*)>(base+0x7dd80)(this, p0);
}

void PlayLayer::exitDartMode(PlayerObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, PlayerObject*)>(base+0x7ddd0)(this, p0);
}

void PlayLayer::exitFlyMode(PlayerObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, PlayerObject*)>(base+0x7dcf0)(this, p0);
}

void PlayLayer::exitRobotMode(PlayerObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, PlayerObject*)>(base+0x7de20)(this, p0);
}

void PlayLayer::exitRollMode(PlayerObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, PlayerObject*)>(base+0x7de60)(this, p0);
}

void PlayLayer::exitSpiderMode(PlayerObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, PlayerObject*)>(base+0x7de40)(this, p0);
}

void PlayLayer::flipFinished() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7e150)(this);
}

void PlayLayer::flipGravity(PlayerObject* p0, bool p1, bool p2) {
    return reinterpret_cast<void(*)(PlayLayer*, PlayerObject*, bool, bool)>(base+0x7cd10)(this, p0, p1, p2);
}

void PlayLayer::flipObjects() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x76130)(this);
}

void PlayLayer::fullReset() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7f8e0)(this);
}

void PlayLayer::getLastCheckpoint() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7f840)(this);
}

void PlayLayer::getMaxPortalY() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7b4e0)(this);
}

void PlayLayer::getMinPortalY() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7b550)(this);
}

void PlayLayer::getObjectsState() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7e9d0)(this);
}

void PlayLayer::getOtherPlayer(PlayerObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, PlayerObject*)>(base+0x7dcc0)(this, p0);
}

void PlayLayer::getParticleKey(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3) {
    return reinterpret_cast<void(*)(PlayLayer*, int, char const*, int, cocos2d::tCCPositionType)>(base+0x764d0)(this, p0, p1, p2, p3);
}

void PlayLayer::getParticleKey2(std::string p0) {
    return reinterpret_cast<void(*)(PlayLayer*, std::string)>(base+0x767b0)(this, p0);
}

void PlayLayer::getRelativeMod(cocos2d::CCPoint p0, float p1, float p2, float p3) {
    return reinterpret_cast<void(*)(PlayLayer*, cocos2d::CCPoint, float, float, float)>(base+0x7c2a0)(this, p0, p1, p2, p3);
}

void PlayLayer::getTempMilliTime() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x778e0)(this);
}

void PlayLayer::gravityEffectFinished() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7cec0)(this);
}

void PlayLayer::hasItem(int p0) {
    return reinterpret_cast<void(*)(PlayLayer*, int)>(base+0x7cee0)(this, p0);
}

void PlayLayer::hasUniqueCoin(GameObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, GameObject*)>(base+0x77510)(this, p0);
}

void PlayLayer::incrementJumps() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7ff40)(this);
}

bool PlayLayer::init(GJGameLevel* p0) {
    return reinterpret_cast<bool(*)(PlayLayer*, GJGameLevel*)>(base+0x6b5f0)(this, p0);
}

void PlayLayer::isFlipping() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x76100)(this);
}

void PlayLayer::levelComplete() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x72b80)(this);
}

void PlayLayer::lightningFlash(cocos2d::CCPoint p0, cocos2d::CCPoint p1, cocos2d::_ccColor3B p2, float p3, float p4, int p5, bool p6, float p7) {
    return reinterpret_cast<void(*)(PlayLayer*, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, int, bool, float)>(base+0x75cc0)(this, p0, p1, p2, p3, p4, p5, p6, p7);
}

void PlayLayer::lightningFlash(cocos2d::CCPoint p0, cocos2d::_ccColor3B p1) {
    return reinterpret_cast<void(*)(PlayLayer*, cocos2d::CCPoint, cocos2d::_ccColor3B)>(base+0x75bf0)(this, p0, p1);
}

void PlayLayer::loadDefaultColors() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x6ef30)(this);
}

void PlayLayer::loadFromCheckpoint(CheckpointObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, CheckpointObject*)>(base+0x7f000)(this, p0);
}

void PlayLayer::loadLastCheckpoint() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7efc0)(this);
}

void PlayLayer::loadSavedObjectsState(std::string p0) {
    return reinterpret_cast<void(*)(PlayLayer*, std::string)>(base+0x7f3d0)(this, p0);
}

void PlayLayer::markCheckpoint() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7ef60)(this);
}

void PlayLayer::moveCameraToPos(cocos2d::CCPoint p0) {
    return reinterpret_cast<void(*)(PlayLayer*, cocos2d::CCPoint)>(base+0x7c980)(this, p0);
}

void PlayLayer::onEnterTransitionDidFinish() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x806e0)(this);
}

void PlayLayer::onExit() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x80710)(this);
}

void PlayLayer::onQuit() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x72710)(this);
}

void PlayLayer::optimizeColorGroups() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x6dad0)(this);
}

void PlayLayer::optimizeOpacityGroups() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x6dc20)(this);
}

void PlayLayer::optimizeSaveRequiredGroups() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x6dd70)(this);
}

void PlayLayer::pauseGame(bool p0) {
    return reinterpret_cast<void(*)(PlayLayer*, bool)>(base+0x802d0)(this, p0);
}

void PlayLayer::pickupItem(GameObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, GameObject*)>(base+0x7c1d0)(this, p0);
}

void PlayLayer::playAnimationCommand(int p0, int p1) {
    return reinterpret_cast<void(*)(PlayLayer*, int, int)>(base+0x75930)(this, p0, p1);
}

void PlayLayer::playEndAnimationToPos(cocos2d::CCPoint p0) {
    return reinterpret_cast<void(*)(PlayLayer*, cocos2d::CCPoint)>(base+0x759a0)(this, p0);
}

void PlayLayer::playExitDualEffect(PlayerObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, PlayerObject*)>(base+0x7d1d0)(this, p0);
}

void PlayLayer::playFlashEffect(float p0, int p1, float p2) {
    return reinterpret_cast<void(*)(PlayLayer*, float, int, float)>(base+0x75e50)(this, p0, p1, p2);
}

void PlayLayer::playGravityEffect(bool p0) {
    return reinterpret_cast<void(*)(PlayLayer*, bool)>(base+0x7b5a0)(this, p0);
}

void PlayLayer::playSpeedParticle(float p0) {
    return reinterpret_cast<void(*)(PlayLayer*, float)>(base+0x77030)(this, p0);
}

void PlayLayer::playerWillSwitchMode(PlayerObject* p0, GameObject* p1) {
    return reinterpret_cast<void(*)(PlayLayer*, PlayerObject*, GameObject*)>(base+0x7b820)(this, p0, p1);
}

void PlayLayer::prepareSpawnObjects() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7fc00)(this);
}

void PlayLayer::processItems() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x735c0)(this);
}

void PlayLayer::processLoadedMoveActions() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7a7c0)(this);
}

void PlayLayer::recordAction(bool p0, PlayerObject* p1) {
    return reinterpret_cast<void(*)(PlayLayer*, bool, PlayerObject*)>(base+0x7e190)(this, p0, p1);
}

void PlayLayer::registerActiveObject(GameObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, GameObject*)>(base+0x77620)(this, p0);
}

void PlayLayer::registerStateObject(GameObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, GameObject*)>(base+0x777b0)(this, p0);
}

void PlayLayer::removeAllObjects() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x727b0)(this);
}

void PlayLayer::removeFromGroupOld(GameObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, GameObject*)>(base+0x77750)(this, p0);
}

void PlayLayer::removeLastCheckpoint() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7f870)(this);
}

void PlayLayer::removePlayer2() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7d630)(this);
}

void PlayLayer::resetLevel() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x71c50)(this);
}

void PlayLayer::resume() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x80480)(this);
}

void PlayLayer::resumeAndRestart() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x80400)(this);
}

void PlayLayer::saveRecordAction(bool p0, PlayerObject* p1) {
    return reinterpret_cast<void(*)(PlayLayer*, bool, PlayerObject*)>(base+0x78750)(this, p0, p1);
}

void PlayLayer::scene(GJGameLevel* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, GJGameLevel*)>(base+0x6b500)(this, p0);
}

void PlayLayer::setupLevelStart(LevelSettingsObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, LevelSettingsObject*)>(base+0x6f560)(this, p0);
}

void PlayLayer::setupReplay(std::string p0) {
    return reinterpret_cast<void(*)(PlayLayer*, std::string)>(base+0x7e1e0)(this, p0);
}

void PlayLayer::shakeCamera(float p0, float p1, float p2) {
    return reinterpret_cast<void(*)(PlayLayer*, float, float, float)>(base+0x744a0)(this, p0, p1, p2);
}

void PlayLayer::shouldBlend(int p0) {
    return reinterpret_cast<void(*)(PlayLayer*, int)>(base+0x771b0)(this, p0);
}

void PlayLayer::showCompleteEffect() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x738e0)(this);
}

void PlayLayer::showCompleteText() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x73be0)(this);
}

void PlayLayer::showEndLayer() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x74450)(this);
}

void PlayLayer::showHint() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7deb0)(this);
}

void PlayLayer::showNewBest(bool p0, int p1, int p2, bool p3, bool p4, bool p5) {
    return reinterpret_cast<void(*)(PlayLayer*, bool, int, int, bool, bool, bool)>(base+0x74580)(this, p0, p1, p2, p3, p4, p5);
}

void PlayLayer::showRetryLayer() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x75ba0)(this);
}

void PlayLayer::showTwoPlayerGuide() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x6df00)(this);
}

void PlayLayer::sortGroups() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x6d9e0)(this);
}

void PlayLayer::spawnCircle() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x73820)(this);
}

void PlayLayer::spawnFirework() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x74200)(this);
}

void PlayLayer::spawnParticle(char const* p0, int p1, cocos2d::tCCPositionType p2, cocos2d::CCPoint p3) {
    return reinterpret_cast<void(*)(PlayLayer*, char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint)>(base+0x76330)(this, p0, p1, p2, p3);
}

void PlayLayer::spawnPlayer2() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7d170)(this);
}

void PlayLayer::startGame() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x726b0)(this);
}

void PlayLayer::startMusic() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x72910)(this);
}

void PlayLayer::startRecording() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7fec0)(this);
}

void PlayLayer::startRecordingDelayed() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7fed0)(this);
}

void PlayLayer::stopCameraShake() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x75900)(this);
}

void PlayLayer::stopRecording() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x6d090)(this);
}

void PlayLayer::storeCheckpoint(CheckpointObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, CheckpointObject*)>(base+0x7ef10)(this, p0);
}

void PlayLayer::switchToFlyMode(PlayerObject* p0, GameObject* p1, bool p2, int p3) {
    return reinterpret_cast<void(*)(PlayLayer*, PlayerObject*, GameObject*, bool, int)>(base+0x7baf0)(this, p0, p1, p2, p3);
}

void PlayLayer::switchToRobotMode(PlayerObject* p0, GameObject* p1, bool p2) {
    return reinterpret_cast<void(*)(PlayLayer*, PlayerObject*, GameObject*, bool)>(base+0x7bc80)(this, p0, p1, p2);
}

void PlayLayer::switchToRollMode(PlayerObject* p0, GameObject* p1, bool p2) {
    return reinterpret_cast<void(*)(PlayLayer*, PlayerObject*, GameObject*, bool)>(base+0x7bbe0)(this, p0, p1, p2);
}

void PlayLayer::switchToSpiderMode(PlayerObject* p0, GameObject* p1, bool p2) {
    return reinterpret_cast<void(*)(PlayLayer*, PlayerObject*, GameObject*, bool)>(base+0x7bd20)(this, p0, p1, p2);
}

void PlayLayer::timeForXPos(float p0) {
    return reinterpret_cast<void(*)(PlayLayer*, float)>(base+0x7d120)(this, p0);
}

void PlayLayer::timeForXPos2(float p0, bool p1) {
    return reinterpret_cast<void(*)(PlayLayer*, float, bool)>(base+0x293eb0)(this, p0, p1);
}

void PlayLayer::toggleBGEffectVisibility(bool p0) {
    return reinterpret_cast<void(*)(PlayLayer*, bool)>(base+0x7fe80)(this, p0);
}

void PlayLayer::toggleDualMode(GameObject* p0, bool p1, PlayerObject* p2, bool p3) {
    return reinterpret_cast<void(*)(PlayLayer*, GameObject*, bool, PlayerObject*, bool)>(base+0x7bf90)(this, p0, p1, p2, p3);
}

void PlayLayer::toggleFlipped(bool p0, bool p1) {
    return reinterpret_cast<void(*)(PlayLayer*, bool, bool)>(base+0x7bdc0)(this, p0, p1);
}

void PlayLayer::toggleGhostEffect(int p0) {
    return reinterpret_cast<void(*)(PlayLayer*, int)>(base+0x7fe40)(this, p0);
}

void PlayLayer::toggleGlitter(bool p0) {
    return reinterpret_cast<void(*)(PlayLayer*, bool)>(base+0x70e00)(this, p0);
}

void PlayLayer::togglePracticeMode(bool p0) {
    return reinterpret_cast<void(*)(PlayLayer*, bool)>(base+0x7f9e0)(this, p0);
}

void PlayLayer::toggleProgressbar() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x6eeb0)(this);
}

void PlayLayer::tryStartRecord() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7fe00)(this);
}

void PlayLayer::unclaimParticle(char const* p0, cocos2d::CCParticleSystemQuad* p1) {
    return reinterpret_cast<void(*)(PlayLayer*, char const*, cocos2d::CCParticleSystemQuad*)>(base+0x76e00)(this, p0, p1);
}

void PlayLayer::unregisterActiveObject(GameObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, GameObject*)>(base+0x77660)(this, p0);
}

void PlayLayer::unregisterStateObject(GameObject* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, GameObject*)>(base+0x777f0)(this, p0);
}

void PlayLayer::update(float p0) {
    return reinterpret_cast<void(*)(PlayLayer*, float)>(base+0x77900)(this, p0);
}

void PlayLayer::updateAttempts() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7fcd0)(this);
}

void PlayLayer::updateCamera(float p0) {
    return reinterpret_cast<void(*)(PlayLayer*, float)>(base+0x6e2b0)(this, p0);
}

void PlayLayer::updateColor(cocos2d::_ccColor3B p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue p5, int p6, bool p7, int p8, EffectGameObject* p9) {
    return reinterpret_cast<void(*)(PlayLayer*, cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)>(base+0x7c7f0)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
}

void PlayLayer::updateDualGround(PlayerObject* p0, int p1, bool p2) {
    return reinterpret_cast<void(*)(PlayLayer*, PlayerObject*, int, bool)>(base+0x7caa0)(this, p0, p1, p2);
}

void PlayLayer::updateEffectPositions() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7a6d0)(this);
}

void PlayLayer::updateLevelColors() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x6f1e0)(this);
}

void PlayLayer::updateMoveObjectsLastPosition() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7a720)(this);
}

void PlayLayer::updateProgressbar() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x6ed70)(this);
}

void PlayLayer::updateReplay(float p0) {
    return reinterpret_cast<void(*)(PlayLayer*, float)>(base+0x78b60)(this, p0);
}

void PlayLayer::updateTimeMod(float p0, bool p1) {
    return reinterpret_cast<void(*)(PlayLayer*, float, bool)>(base+0x786f0)(this, p0, p1);
}

void PlayLayer::updateTweenAction(float p0, char const* p1) {
    return reinterpret_cast<void(*)(PlayLayer*, float, char const*)>(base+0x7ffb0)(this, p0, p1);
}

void PlayLayer::updateVisibility() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x6fb90)(this);
}

void PlayLayer::vfDChk() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7fcb0)(this);
}

void PlayLayer::visit() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x75ef0)(this);
}

void PlayLayer::visitWithColorFlash() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x761f0)(this);
}

void PlayLayer::willSwitchToMode(int p0, PlayerObject* p1) {
    return reinterpret_cast<void(*)(PlayLayer*, int, PlayerObject*)>(base+0x7b9e0)(this, p0, p1);
}

void PlayLayer::xPosForTime(float p0) {
    return reinterpret_cast<void(*)(PlayLayer*, float)>(base+0x7d140)(this, p0);
}

PlayerCheckpoint* PlayerCheckpoint::create() {
    return reinterpret_cast<PlayerCheckpoint*(*)()>(base+0x7e8c0)();
}

void PlayerObject::activateStreak() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21aef0)(this);
}

void PlayerObject::addAllParticles() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x2189b0)(this);
}

void PlayerObject::addToTouchedRings(GameObject* p0) {
    return reinterpret_cast<void(*)(PlayerObject*, GameObject*)>(base+0x22b800)(this, p0);
}

void PlayerObject::animationFinished(char const* p0) {
    return reinterpret_cast<void(*)(PlayerObject*, char const*)>(base+0x22e9d0)(this, p0);
}

void PlayerObject::boostPlayer(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x21d6b0)(this, p0);
}

void PlayerObject::bumpPlayer(float p0, int p1) {
    return reinterpret_cast<void(*)(PlayerObject*, float, int)>(base+0x22d890)(this, p0, p1);
}

void PlayerObject::buttonDown(PlayerButton p0) {
    return reinterpret_cast<void(*)(PlayerObject*, PlayerButton)>(base+0x22b7e0)(this, p0);
}

void PlayerObject::checkSnapJumpToObject(GameObject* p0) {
    return reinterpret_cast<void(*)(PlayerObject*, GameObject*)>(base+0x2217f0)(this, p0);
}

void PlayerObject::collidedWithObject(float p0, GameObject* p1) {
    return reinterpret_cast<void(*)(PlayerObject*, float, GameObject*)>(base+0x21d880)(this, p0, p1);
}

void PlayerObject::collidedWithObject(float p0, GameObject* p1, cocos2d::CCRect p2) {
    return reinterpret_cast<void(*)(PlayerObject*, float, GameObject*, cocos2d::CCRect)>(base+0x21f0b0)(this, p0, p1, p2);
}

void PlayerObject::collidedWithSlope(float p0, GameObject* p1, bool p2) {
    return reinterpret_cast<void(*)(PlayerObject*, float, GameObject*, bool)>(base+0x21d8d0)(this, p0, p1, p2);
}

void PlayerObject::convertToClosestRotation(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x21c860)(this, p0);
}

void PlayerObject::copyAttributes(PlayerObject* p0) {
    return reinterpret_cast<void(*)(PlayerObject*, PlayerObject*)>(base+0x22dc70)(this, p0);
}

PlayerObject* PlayerObject::create(int p0, int p1, cocos2d::CCLayer* p2) {
    return reinterpret_cast<PlayerObject*(*)(int, int, cocos2d::CCLayer*)>(base+0x217260)(p0, p1, p2);
}

void PlayerObject::deactivateParticle() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21a540)(this);
}

void PlayerObject::deactivateStreak(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x218b30)(this, p0);
}

void PlayerObject::fadeOutStreak2(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x225890)(this, p0);
}

void PlayerObject::flashPlayer(float p0, float p1, cocos2d::_ccColor3B p2, cocos2d::_ccColor3B p3) {
    return reinterpret_cast<void(*)(PlayerObject*, float, float, cocos2d::_ccColor3B, cocos2d::_ccColor3B)>(base+0x221c80)(this, p0, p1, p2, p3);
}

void PlayerObject::flipGravity(bool p0, bool p1) {
    return reinterpret_cast<void(*)(PlayerObject*, bool, bool)>(base+0x21c090)(this, p0, p1);
}

void PlayerObject::flipMod() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21a4c0)(this);
}

void PlayerObject::getActiveMode() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22b950)(this);
}

void PlayerObject::getModifiedSlopeYVel() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21bff0)(this);
}

void PlayerObject::getOldPosition(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x21a830)(this, p0);
}

void PlayerObject::getOrientedBox() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22dee0)(this);
}

void PlayerObject::getRealPosition() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22d5f0)(this);
}

void PlayerObject::getSecondColor() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22cee0)(this);
}

void PlayerObject::gravityDown() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22e930)(this);
}

void PlayerObject::gravityUp() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22e900)(this);
}

void PlayerObject::hardFlipGravity() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22b860)(this);
}

void PlayerObject::hitGround(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x220a30)(this, p0);
}

void PlayerObject::incrementJumps() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21c050)(this);
}

bool PlayerObject::init(int p0, int p1, cocos2d::CCLayer* p2) {
    return reinterpret_cast<bool(*)(PlayerObject*, int, int, cocos2d::CCLayer*)>(base+0x2172e0)(this, p0, p1, p2);
}

void PlayerObject::isBoostValid(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x21d650)(this, p0);
}

void PlayerObject::isFlying() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21a4e0)(this);
}

void PlayerObject::isSafeFlip(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x2209f0)(this, p0);
}

void PlayerObject::isSafeMode(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x2209b0)(this, p0);
}

void PlayerObject::isSafeSpiderFlip(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x221be0)(this, p0);
}

void PlayerObject::levelFlipFinished() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21b060)(this);
}

void PlayerObject::levelFlipping() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21a510)(this);
}

void PlayerObject::levelWillFlip() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21b020)(this);
}

void PlayerObject::loadFromCheckpoint(PlayerCheckpoint* p0) {
    return reinterpret_cast<void(*)(PlayerObject*, PlayerCheckpoint*)>(base+0x22e420)(this, p0);
}

void PlayerObject::lockPlayer() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22d680)(this);
}

void PlayerObject::logValues() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x221220)(this);
}

void PlayerObject::modeDidChange() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22bfd0)(this);
}

void PlayerObject::placeStreakPoint() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21af90)(this);
}

void PlayerObject::playBurstEffect() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21c780)(this);
}

void PlayerObject::playDeathEffect() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x225930)(this);
}

void PlayerObject::playDynamicSpiderRun() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x222ec0)(this);
}

void PlayerObject::playerDestroyed(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x2256d0)(this, p0);
}

void PlayerObject::playerIsFalling() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21c730)(this);
}

void PlayerObject::playerTeleported() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22b840)(this);
}

void PlayerObject::playingEndEffect() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22d7e0)(this);
}

void PlayerObject::postCollision(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x21cd10)(this, p0);
}

void PlayerObject::preCollision() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21ccc0)(this);
}

void PlayerObject::preSlopeCollision(float p0, GameObject* p1) {
    return reinterpret_cast<void(*)(PlayerObject*, float, GameObject*)>(base+0x21ec80)(this, p0, p1);
}

void PlayerObject::propellPlayer(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x22d8e0)(this, p0);
}

void PlayerObject::pushButton(PlayerButton p0) {
    return reinterpret_cast<void(*)(PlayerObject*, PlayerButton)>(base+0x22aa00)(this, p0);
}

void PlayerObject::pushDown() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22dbd0)(this);
}

void PlayerObject::pushPlayer(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x22dbb0)(this, p0);
}

void PlayerObject::releaseButton(PlayerButton p0) {
    return reinterpret_cast<void(*)(PlayerObject*, PlayerButton)>(base+0x22b6f0)(this, p0);
}

void PlayerObject::removeAllParticles() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x218ac0)(this);
}

void PlayerObject::removePendingCheckpoint() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x2237b0)(this);
}

void PlayerObject::resetAllParticles() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21adb0)(this);
}

void PlayerObject::resetCollisionLog() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21cc20)(this);
}

void PlayerObject::resetObject() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x223170)(this);
}

void PlayerObject::resetPlayerIcon() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22be00)(this);
}

void PlayerObject::resetStateVariables() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x223760)(this);
}

void PlayerObject::resetStreak() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21ae10)(this);
}

void PlayerObject::ringJump(GameObject* p0) {
    return reinterpret_cast<void(*)(PlayerObject*, GameObject*)>(base+0x22abf0)(this, p0);
}

void PlayerObject::runBallRotation(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x21ca10)(this, p0);
}

void PlayerObject::runBallRotation2() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21cb10)(this);
}

void PlayerObject::runNormalRotation() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21c960)(this);
}

void PlayerObject::runRotateAction(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x21c570)(this, p0);
}

void PlayerObject::saveToCheckpoint(PlayerCheckpoint* p0) {
    return reinterpret_cast<void(*)(PlayerObject*, PlayerCheckpoint*)>(base+0x22e2f0)(this, p0);
}

void PlayerObject::setColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(PlayerObject*, cocos2d::_ccColor3B const&)>(base+0x22cdf0)(this, p0);
}

void PlayerObject::setFlipX(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x22e720)(this, p0);
}

void PlayerObject::setFlipY(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x22e7b0)(this, p0);
}

void PlayerObject::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(PlayerObject*, unsigned char)>(base+0x22d400)(this, p0);
}

void PlayerObject::setPosition(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(PlayerObject*, cocos2d::CCPoint const&)>(base+0x22c8b0)(this, p0);
}

void PlayerObject::setRotation(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x22e6e0)(this, p0);
}

void PlayerObject::setScale(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x22e870)(this, p0);
}

void PlayerObject::setScaleX(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x22e7f0)(this, p0);
}

void PlayerObject::setScaleY(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x22e830)(this, p0);
}

void PlayerObject::setSecondColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(PlayerObject*, cocos2d::_ccColor3B const&)>(base+0x219610)(this, p0);
}

void PlayerObject::setVisible(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x22e8b0)(this, p0);
}

void PlayerObject::setupStreak() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x218720)(this);
}

void PlayerObject::spawnCircle() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x225480)(this);
}

void PlayerObject::spawnCircle2() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x2252a0)(this);
}

void PlayerObject::spawnDualCircle() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x2255c0)(this);
}

void PlayerObject::spawnFromPlayer(PlayerObject* p0) {
    return reinterpret_cast<void(*)(PlayerObject*, PlayerObject*)>(base+0x22dde0)(this, p0);
}

void PlayerObject::spawnPortalCircle(cocos2d::_ccColor3B p0, float p1) {
    return reinterpret_cast<void(*)(PlayerObject*, cocos2d::_ccColor3B, float)>(base+0x225350)(this, p0, p1);
}

void PlayerObject::spawnScaleCircle() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x2251b0)(this);
}

void PlayerObject::specialGroundHit() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22dbf0)(this);
}

void PlayerObject::speedDown() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22e970)(this);
}

void PlayerObject::speedUp() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22e950)(this);
}

void PlayerObject::spiderTestJump(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x21b160)(this, p0);
}

void PlayerObject::startDashing(GameObject* p0) {
    return reinterpret_cast<void(*)(PlayerObject*, GameObject*)>(base+0x221d70)(this, p0);
}

void PlayerObject::stopBurstEffect() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22c680)(this);
}

void PlayerObject::stopDashing() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x222990)(this);
}

void PlayerObject::stopRotation(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x21c830)(this, p0);
}

void PlayerObject::storeCollision(bool p0, int p1) {
    return reinterpret_cast<void(*)(PlayerObject*, bool, int)>(base+0x21cc60)(this, p0, p1);
}

void PlayerObject::switchedToMode(GameObjectType p0) {
    return reinterpret_cast<void(*)(PlayerObject*, GameObjectType)>(base+0x22b9a0)(this, p0);
}

void PlayerObject::testForMoving(float p0, GameObject* p1) {
    return reinterpret_cast<void(*)(PlayerObject*, float, GameObject*)>(base+0x21eb70)(this, p0, p1);
}

void PlayerObject::toggleBirdMode(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x224070)(this, p0);
}

void PlayerObject::toggleDartMode(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x2243f0)(this, p0);
}

void PlayerObject::toggleFlyMode(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x223820)(this, p0);
}

void PlayerObject::toggleGhostEffect(GhostType p0) {
    return reinterpret_cast<void(*)(PlayerObject*, GhostType)>(base+0x225000)(this, p0);
}

void PlayerObject::togglePlayerScale(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x224bd0)(this, p0);
}

void PlayerObject::toggleRobotMode(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x223c70)(this, p0);
}

void PlayerObject::toggleRollMode(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x223b20)(this, p0);
}

void PlayerObject::toggleSpiderMode(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x224830)(this, p0);
}

void PlayerObject::toggleVisibility(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x21abf0)(this, p0);
}

void PlayerObject::touchedObject(GameObject* p0) {
    return reinterpret_cast<void(*)(PlayerObject*, GameObject*)>(base+0x22e660)(this, p0);
}

void PlayerObject::tryPlaceCheckpoint() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21a950)(this);
}

void PlayerObject::update(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x218bf0)(this, p0);
}

void PlayerObject::updateCheckpointMode(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x218980)(this, p0);
}

void PlayerObject::updateCheckpointTest() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21a890)(this);
}

void PlayerObject::updateCollide(bool p0, int p1) {
    return reinterpret_cast<void(*)(PlayerObject*, bool, int)>(base+0x220f10)(this, p0, p1);
}

void PlayerObject::updateCollideBottom(float p0, int p1) {
    return reinterpret_cast<void(*)(PlayerObject*, float, int)>(base+0x221790)(this, p0, p1);
}

void PlayerObject::updateCollideTop(float p0, int p1) {
    return reinterpret_cast<void(*)(PlayerObject*, float, int)>(base+0x221c20)(this, p0, p1);
}

void PlayerObject::updateDashAnimation() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21a570)(this);
}

void PlayerObject::updateDashArt() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x222520)(this);
}

void PlayerObject::updateGlowColor() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22cf10)(this);
}

void PlayerObject::updateJump(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x219680)(this, p0);
}

void PlayerObject::updateJumpVariables() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21a740)(this);
}

void PlayerObject::updatePlayerBirdFrame(int p0) {
    return reinterpret_cast<void(*)(PlayerObject*, int)>(base+0x22bfe0)(this, p0);
}

void PlayerObject::updatePlayerDartFrame(int p0) {
    return reinterpret_cast<void(*)(PlayerObject*, int)>(base+0x22c260)(this, p0);
}

void PlayerObject::updatePlayerFrame(int p0) {
    return reinterpret_cast<void(*)(PlayerObject*, int)>(base+0x22c470)(this, p0);
}

void PlayerObject::updatePlayerGlow() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22bc50)(this);
}

void PlayerObject::updatePlayerRobotFrame(int p0) {
    return reinterpret_cast<void(*)(PlayerObject*, int)>(base+0x22d620)(this, p0);
}

void PlayerObject::updatePlayerRollFrame(int p0) {
    return reinterpret_cast<void(*)(PlayerObject*, int)>(base+0x22c6a0)(this, p0);
}

void PlayerObject::updatePlayerScale() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22b8b0)(this);
}

void PlayerObject::updatePlayerShipFrame(int p0) {
    return reinterpret_cast<void(*)(PlayerObject*, int)>(base+0x22ba40)(this, p0);
}

void PlayerObject::updatePlayerSpiderFrame(int p0) {
    return reinterpret_cast<void(*)(PlayerObject*, int)>(base+0x22d650)(this, p0);
}

void PlayerObject::updatePlayerSpriteExtra(std::string p0) {
    return reinterpret_cast<void(*)(PlayerObject*, std::string)>(base+0x218440)(this, p0);
}

void PlayerObject::updateRobotAnimationSpeed() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22df40)(this);
}

void PlayerObject::updateRotation(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x2214b0)(this, p0);
}

void PlayerObject::updateRotation(float p0, float p1) {
    return reinterpret_cast<void(*)(PlayerObject*, float, float)>(base+0x221230)(this, p0, p1);
}

void PlayerObject::updateShipRotation(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x221310)(this, p0);
}

void PlayerObject::updateShipSpriteExtra(std::string p0) {
    return reinterpret_cast<void(*)(PlayerObject*, std::string)>(base+0x218510)(this, p0);
}

void PlayerObject::updateSlopeRotation(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x221030)(this, p0);
}

void PlayerObject::updateSlopeYVelocity(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x22e920)(this, p0);
}

void PlayerObject::updateSpecial(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x21a790)(this, p0);
}

void PlayerObject::updateStateVariables() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x21a770)(this);
}

void PlayerObject::updateTimeMod(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x2185e0)(this, p0);
}

void PlayerObject::usingWallLimitedMode() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22df00)(this);
}

void PlayerObject::yStartDown() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22e9b0)(this);
}

void PlayerObject::yStartUp() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22e990)(this);
}

PulseEffectAction* PulseEffectAction::createFromString(std::string p0) {
    return reinterpret_cast<PulseEffectAction*(*)(std::string)>(base+0x179e90)(p0);
}

void PulseEffectAction::getSaveString() {
    return reinterpret_cast<void(*)(PulseEffectAction*)>(base+0x17a850)(this);
}

RetryLevelLayer* RetryLevelLayer::create() {
    return reinterpret_cast<RetryLevelLayer*(*)()>(base+0x28dd60)();
}

void SetGroupIDLayer::onNextGroupID1(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(SetGroupIDLayer*, cocos2d::CCObject*)>(base+0x1967a0)(this, p0);
}

void SetGroupIDLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetGroupIDLayer*, CCTextInputNode*)>(base+0x197af0)(this, p0);
}

void SetGroupIDLayer::updateGroupIDLabel() {
    return reinterpret_cast<void(*)(SetGroupIDLayer*)>(base+0x197260)(this);
}

SetIDLayer* SetIDLayer::create(GameObject* p0) {
    return reinterpret_cast<SetIDLayer*(*)(GameObject*)>(base+0x168f20)(p0);
}

SetItemIDLayer* SetItemIDLayer::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<SetItemIDLayer*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x5a830)(p0, p1);
}

SetTargetIDLayer* SetTargetIDLayer::create(EffectGameObject* p0, cocos2d::CCArray* p1, std::string p2) {
    return reinterpret_cast<SetTargetIDLayer*(*)(EffectGameObject*, cocos2d::CCArray*, std::string)>(base+0x159d20)(p0, p1, p2);
}

void SetTargetIDLayer::onTargetIDArrow(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(SetTargetIDLayer*, cocos2d::CCObject*)>(base+0x15aed0)(this, p0);
}

void SetTargetIDLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetTargetIDLayer*, CCTextInputNode*)>(base+0x15b6c0)(this, p0);
}

void SetTargetIDLayer::updateTargetID() {
    return reinterpret_cast<void(*)(SetTargetIDLayer*)>(base+0x15b4a0)(this);
}

SetupAnimationPopup* SetupAnimationPopup::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<SetupAnimationPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x208b70)(p0, p1);
}

void SetupAnimationPopup::onTargetIDArrow(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(SetupAnimationPopup*, cocos2d::CCObject*)>(base+0x209fc0)(this, p0);
}

void SetupAnimationPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupAnimationPopup*, CCTextInputNode*)>(base+0x20ab30)(this, p0);
}

void SetupAnimationPopup::updateTargetID() {
    return reinterpret_cast<void(*)(SetupAnimationPopup*)>(base+0x20a910)(this);
}

SetupCollisionTriggerPopup* SetupCollisionTriggerPopup::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<SetupCollisionTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x1d6120)(p0, p1);
}

void SetupCollisionTriggerPopup::onTargetIDArrow(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(SetupCollisionTriggerPopup*, cocos2d::CCObject*)>(base+0x1d77b0)(this, p0);
}

void SetupCollisionTriggerPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupCollisionTriggerPopup*, CCTextInputNode*)>(base+0x1d84d0)(this, p0);
}

void SetupCollisionTriggerPopup::updateTargetID() {
    return reinterpret_cast<void(*)(SetupCollisionTriggerPopup*)>(base+0x1d82b0)(this);
}

SetupCountTriggerPopup* SetupCountTriggerPopup::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<SetupCountTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x15c6c0)(p0, p1);
}

void SetupCountTriggerPopup::onTargetIDArrow(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(SetupCountTriggerPopup*, cocos2d::CCObject*)>(base+0x15dd40)(this, p0);
}

void SetupCountTriggerPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupCountTriggerPopup*, CCTextInputNode*)>(base+0x15e9a0)(this, p0);
}

void SetupCountTriggerPopup::updateTargetID() {
    return reinterpret_cast<void(*)(SetupCountTriggerPopup*)>(base+0x15e8a0)(this);
}

SetupInstantCountPopup* SetupInstantCountPopup::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<SetupInstantCountPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x352c10)(p0, p1);
}

void SetupInstantCountPopup::onTargetIDArrow(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(SetupInstantCountPopup*, cocos2d::CCObject*)>(base+0x354520)(this, p0);
}

void SetupInstantCountPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupInstantCountPopup*, CCTextInputNode*)>(base+0x355270)(this, p0);
}

void SetupInstantCountPopup::updateTargetID() {
    return reinterpret_cast<void(*)(SetupInstantCountPopup*)>(base+0x355170)(this);
}

SetupInteractObjectPopup* SetupInteractObjectPopup::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<SetupInteractObjectPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x29a400)(p0, p1);
}

void SetupInteractObjectPopup::onTargetIDArrow(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(SetupInteractObjectPopup*, cocos2d::CCObject*)>(base+0x29bbc0)(this, p0);
}

void SetupInteractObjectPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupInteractObjectPopup*, CCTextInputNode*)>(base+0x29c2b0)(this, p0);
}

void SetupInteractObjectPopup::updateTargetID() {
    return reinterpret_cast<void(*)(SetupInteractObjectPopup*)>(base+0x29c120)(this);
}

SetupObjectTogglePopup* SetupObjectTogglePopup::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<SetupObjectTogglePopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x1c0860)(p0, p1);
}

bool SetupObjectTogglePopup::init(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<bool(*)(SetupObjectTogglePopup*, EffectGameObject*, cocos2d::CCArray*)>(base+0x1c0a40)(this, p0, p1);
}

void SetupObjectTogglePopup::onTargetIDArrow(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(SetupObjectTogglePopup*, cocos2d::CCObject*)>(base+0x1c1c40)(this, p0);
}

void SetupObjectTogglePopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupObjectTogglePopup*, CCTextInputNode*)>(base+0x1c2660)(this, p0);
}

void SetupObjectTogglePopup::updateTargetID() {
    return reinterpret_cast<void(*)(SetupObjectTogglePopup*)>(base+0x1c2440)(this);
}

SetupOpacityPopup* SetupOpacityPopup::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<SetupOpacityPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x32b70)(p0, p1);
}

void SetupOpacityPopup::onTargetIDArrow(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(SetupOpacityPopup*, cocos2d::CCObject*)>(base+0x340a0)(this, p0);
}

void SetupOpacityPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupOpacityPopup*, CCTextInputNode*)>(base+0x34a60)(this, p0);
}

void SetupOpacityPopup::updateTargetID() {
    return reinterpret_cast<void(*)(SetupOpacityPopup*)>(base+0x34760)(this);
}

SetupPickupTriggerPopup* SetupPickupTriggerPopup::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<SetupPickupTriggerPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x35e70)(p0, p1);
}

void SetupPickupTriggerPopup::onItemIDArrow(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(SetupPickupTriggerPopup*, cocos2d::CCObject*)>(base+0x37100)(this, p0);
}

void SetupPickupTriggerPopup::onNextItemID(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(SetupPickupTriggerPopup*, cocos2d::CCObject*)>(base+0x37260)(this, p0);
}

void SetupPickupTriggerPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupPickupTriggerPopup*, CCTextInputNode*)>(base+0x37ca0)(this, p0);
}

void SetupPickupTriggerPopup::updateItemID() {
    return reinterpret_cast<void(*)(SetupPickupTriggerPopup*)>(base+0x37ab0)(this);
}

SetupShakePopup* SetupShakePopup::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<SetupShakePopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x3adc00)(p0, p1);
}

SetupSpawnPopup* SetupSpawnPopup::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<SetupSpawnPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x139790)(p0, p1);
}

void SetupSpawnPopup::createToggleButton(std::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCArray* p5) {
    return reinterpret_cast<void(*)(SetupSpawnPopup*, std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*)>(base+0x13b0e0)(this, p0, p1, p2, p3, p4, p5);
}

void SetupSpawnPopup::onTargetIDArrow(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(SetupSpawnPopup*, cocos2d::CCObject*)>(base+0x13ad80)(this, p0);
}

void SetupSpawnPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupSpawnPopup*, CCTextInputNode*)>(base+0x13b990)(this, p0);
}

void SetupSpawnPopup::updateTargetID() {
    return reinterpret_cast<void(*)(SetupSpawnPopup*)>(base+0x13b770)(this);
}

SetupTouchTogglePopup* SetupTouchTogglePopup::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<SetupTouchTogglePopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x1576a0)(p0, p1);
}

void SetupTouchTogglePopup::onTargetIDArrow(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(SetupTouchTogglePopup*, cocos2d::CCObject*)>(base+0x158b60)(this, p0);
}

void SetupTouchTogglePopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupTouchTogglePopup*, CCTextInputNode*)>(base+0x1596a0)(this, p0);
}

void SetupTouchTogglePopup::updateTargetID() {
    return reinterpret_cast<void(*)(SetupTouchTogglePopup*)>(base+0x159480)(this);
}

SimplePlayer* SimplePlayer::create(int p0) {
    return reinterpret_cast<SimplePlayer*(*)(int)>(base+0x1b6140)(p0);
}

void SimplePlayer::setSecondColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(SimplePlayer*, cocos2d::_ccColor3B const&)>(base+0x1bace0)(this, p0);
}

void SimplePlayer::updateColors() {
    return reinterpret_cast<void(*)(SimplePlayer*)>(base+0x1ba1f0)(this);
}

void SimplePlayer::updatePlayerFrame(int p0, IconType p1) {
    return reinterpret_cast<void(*)(SimplePlayer*, int, IconType)>(base+0x1b62f0)(this, p0, p1);
}

Slider* Slider::create(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, char const* p2, char const* p3, char const* p4, char const* p5, float p6) {
    return reinterpret_cast<Slider*(*)(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float)>(base+0x18dd80)(p0, p1, p2, p3, p4, p5, p6);
}

Slider* Slider::create(cocos2d::CCNode* p0, cocos2d::SEL_MenuHandler p1, float p2) {
    return reinterpret_cast<Slider*(*)(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, float)>(base+0x18dc40)(p0, p1, p2);
}

void Slider::getValue() {
    return reinterpret_cast<void(*)(Slider*)>(base+0x18e0c0)(this);
}

void Slider::setBarVisibility(bool p0) {
    return reinterpret_cast<void(*)(Slider*, bool)>(base+0x18e280)(this, p0);
}

void Slider::setValue(float p0) {
    return reinterpret_cast<void(*)(Slider*, float)>(base+0x18e170)(this, p0);
}

void SliderThumb::getValue() {
    return reinterpret_cast<void(*)(SliderThumb*)>(base+0x18ce80)(this);
}

SpawnTriggerAction* SpawnTriggerAction::createFromString(std::string p0) {
    return reinterpret_cast<SpawnTriggerAction*(*)(std::string)>(base+0x17bf50)(p0);
}

SpeedObject* SpeedObject::create(GameObject* p0, int p1, float p2) {
    return reinterpret_cast<SpeedObject*(*)(GameObject*, int, float)>(base+0x77450)(p0, p1, p2);
}

bool SpeedObject::init(GameObject* p0, int p1, float p2) {
    return reinterpret_cast<bool(*)(SpeedObject*, GameObject*, int, float)>(base+0x77400)(this, p0, p1, p2);
}

TeleportPortalObject* TeleportPortalObject::create(char const* p0) {
    return reinterpret_cast<TeleportPortalObject*(*)(char const*)>(base+0xdaa50)(p0);
}

void TeleportPortalObject::getTeleportXOff(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(TeleportPortalObject*, cocos2d::CCNode*)>(base+0xdac20)(this, p0);
}

TextArea* TextArea::create(std::string p0, char const* p1, float p2, float p3, cocos2d::CCPoint p4, float p5, bool p6) {
    return reinterpret_cast<TextArea*(*)(std::string, char const*, float, float, cocos2d::CCPoint, float, bool)>(base+0x19eb40)(p0, p1, p2, p3, p4, p5, p6);
}

ToggleTriggerAction* ToggleTriggerAction::createFromString(std::string p0) {
    return reinterpret_cast<ToggleTriggerAction*(*)(std::string)>(base+0x1765e0)(p0);
}

GJCommentListLayer* GJCommentListLayer::create(BoomListView* p0, char const* p1, cocos2d::_ccColor4B p2, float p3, float p4, bool p5) {
    return reinterpret_cast<GJCommentListLayer*(*)(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool)>(base+0x147d00)(p0, p1, p2, p3, p4, p5);
}

TopArtistsLayer* TopArtistsLayer::create() {
    return reinterpret_cast<TopArtistsLayer*(*)()>(base+0x192a90)();
}

void TopArtistsLayer::setupLeaderboard(cocos2d::CCArray* p0) {
    return reinterpret_cast<void(*)(TopArtistsLayer*, cocos2d::CCArray*)>(base+0x193420)(this, p0);
}

bool TopArtistsLayer::init() {
    return reinterpret_cast<bool(*)(TopArtistsLayer*)>(base+0x192c30)(this);
}

void TopArtistsLayer::loadPage(int p0) {
    return reinterpret_cast<void(*)(TopArtistsLayer*, int)>(base+0x193b60)(this, p0);
}

void TopArtistsLayer::setupPageInfo(std::string p0, char const* p1) {
    return reinterpret_cast<void(*)(TopArtistsLayer*, std::string, char const*)>(base+0x193730)(this, p0, p1);
}

TouchToggleAction* TouchToggleAction::createFromString(std::string p0) {
    return reinterpret_cast<TouchToggleAction*(*)(std::string)>(base+0x177e10)(p0);
}

UILayer* UILayer::create() {
    return reinterpret_cast<UILayer*(*)()>(base+0x27fd10)();
}

void UILayer::disableMenu() {
    return reinterpret_cast<void(*)(UILayer*)>(base+0x280960)(this);
}

void UILayer::enableMenu() {
    return reinterpret_cast<void(*)(UILayer*)>(base+0x280940)(this);
}

void UILayer::pCommand(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(UILayer*, cocos2d::CCNode*)>(base+0x280830)(this, p0);
}

void UILayer::toggleCheckpointsMenu(bool p0) {
    return reinterpret_cast<void(*)(UILayer*, bool)>(base+0x280430)(this, p0);
}

UndoObject* UndoObject::create(GameObject* p0, UndoCommand p1) {
    return reinterpret_cast<UndoObject*(*)(GameObject*, UndoCommand)>(base+0x94ea0)(p0, p1);
}

UndoObject* UndoObject::createWithArray(cocos2d::CCArray* p0, UndoCommand p1) {
    return reinterpret_cast<UndoObject*(*)(cocos2d::CCArray*, UndoCommand)>(base+0x96ee0)(p0, p1);
}

void ColorSelectPopup::colorValueChanged(cocos2d::_ccColor3B p0) {
    return reinterpret_cast<void(*)(ColorSelectPopup*, cocos2d::_ccColor3B)>(base+0x423320)(this, p0);
}

ColorSelectPopup* ColorSelectPopup::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<ColorSelectPopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x41eb70)(p0, p1);
}

bool ColorSelectPopup::init(EffectGameObject* p0, cocos2d::CCArray* p1, ColorAction* p2) {
    return reinterpret_cast<bool(*)(ColorSelectPopup*, EffectGameObject*, cocos2d::CCArray*, ColorAction*)>(base+0x41ee70)(this, p0, p1, p2);
}

void ColorSelectPopup::onDefault(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(ColorSelectPopup*, cocos2d::CCObject*)>(base+0x4220e0)(this, p0);
}

void ColorSelectPopup::onMultiTrigger(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(ColorSelectPopup*, cocos2d::CCObject*)>(base+0x422680)(this, p0);
}

void ColorSelectPopup::onPlayerColor1(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(ColorSelectPopup*, cocos2d::CCObject*)>(base+0x422500)(this, p0);
}

void ColorSelectPopup::onPlayerColor2(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(ColorSelectPopup*, cocos2d::CCObject*)>(base+0x4225c0)(this, p0);
}

void ColorSelectPopup::onSpawnedByTrigger(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(ColorSelectPopup*, cocos2d::CCObject*)>(base+0x4227f0)(this, p0);
}

void ColorSelectPopup::onToggleHSVMode(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(ColorSelectPopup*, cocos2d::CCObject*)>(base+0x4227b0)(this, p0);
}

void ColorSelectPopup::onTouchTriggered(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(ColorSelectPopup*, cocos2d::CCObject*)>(base+0x4228b0)(this, p0);
}

void ColorSelectPopup::show() {
    return reinterpret_cast<void(*)(ColorSelectPopup*)>(base+0x423570)(this);
}

void ColorSelectPopup::sliderChanged(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(ColorSelectPopup*, cocos2d::CCObject*)>(base+0x421ca0)(this, p0);
}

void ColorSelectPopup::updateCopyColor() {
    return reinterpret_cast<void(*)(ColorSelectPopup*)>(base+0x423b70)(this);
}

void ColorSelectPopup::updateCopyColorTextInputLabel() {
    return reinterpret_cast<void(*)(ColorSelectPopup*)>(base+0x422ed0)(this);
}

void ColorSelectPopup::updateDurLabel() {
    return reinterpret_cast<void(*)(ColorSelectPopup*)>(base+0x421eb0)(this);
}

void ColorSelectPopup::updateHSVMode() {
    return reinterpret_cast<void(*)(ColorSelectPopup*)>(base+0x422e00)(this);
}

void ColorSelectPopup::updateOpacityLabel() {
    return reinterpret_cast<void(*)(ColorSelectPopup*)>(base+0x422000)(this);
}

void ColorSelectPopup::updateTouchTriggered() {
    return reinterpret_cast<void(*)(ColorSelectPopup*)>(base+0x423020)(this);
}

void SetupPulsePopup::colorValueChanged(cocos2d::_ccColor3B p0) {
    return reinterpret_cast<void(*)(SetupPulsePopup*, cocos2d::_ccColor3B)>(base+0x1ec680)(this, p0);
}

SetupPulsePopup* SetupPulsePopup::create(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<SetupPulsePopup*(*)(EffectGameObject*, cocos2d::CCArray*)>(base+0x1e6d40)(p0, p1);
}

bool SetupPulsePopup::init(EffectGameObject* p0, cocos2d::CCArray* p1) {
    return reinterpret_cast<bool(*)(SetupPulsePopup*, EffectGameObject*, cocos2d::CCArray*)>(base+0x1e7010)(this, p0, p1);
}

void SetupPulsePopup::onSelectPulseMode(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(SetupPulsePopup*, cocos2d::CCObject*)>(base+0x1eb020)(this, p0);
}

void SetupPulsePopup::onSelectTargetMode(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(SetupPulsePopup*, cocos2d::CCObject*)>(base+0x1eac30)(this, p0);
}

void SetupPulsePopup::onUpdateCustomColor(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(SetupPulsePopup*, cocos2d::CCObject*)>(base+0x1eaef0)(this, p0);
}

void SetupPulsePopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupPulsePopup*, CCTextInputNode*)>(base+0x1ec960)(this, p0);
}

void SetupPulsePopup::updateCopyColorTextInputLabel() {
    return reinterpret_cast<void(*)(SetupPulsePopup*)>(base+0x1ebf20)(this);
}

void SetupPulsePopup::updateEditorLabel() {
    return reinterpret_cast<void(*)(SetupPulsePopup*)>(base+0x1ec310)(this);
}

void SetupPulsePopup::updateFadeOutLabel(bool p0) {
    return reinterpret_cast<void(*)(SetupPulsePopup*, bool)>(base+0x1eba20)(this, p0);
}

void SetupPulsePopup::updateTargetID() {
    return reinterpret_cast<void(*)(SetupPulsePopup*)>(base+0x1ebbe0)(this);
}

void SetupPulsePopup::updateTextInputLabel() {
    return reinterpret_cast<void(*)(SetupPulsePopup*)>(base+0x1eb8d0)(this);
}
