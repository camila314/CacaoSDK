#include <cc_defs.hpp>
extern volatile uintptr_t const base;

bool ArtistCell::init() {
    return reinterpret_cast<bool(*)(ArtistCell*)>(base+0x11c7c0)(this);
}

void ArtistCell::draw() {
    return reinterpret_cast<void(*)(ArtistCell*)>(base+0x11c980)(this);
}

void GJItemIcon::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(GJItemIcon*, unsigned char)>(base+0x1bd9d0)(this, p0);
}

bool GJUserCell::init() {
    return reinterpret_cast<bool(*)(GJUserCell*)>(base+0x11e180)(this);
}

void GJUserCell::draw() {
    return reinterpret_cast<void(*)(GJUserCell*)>(base+0x11e790)(this);
}

void GJUserCell::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(GJUserCell*, FLAlertLayer*, bool)>(base+0x11e860)(this, p0, p1);
}

void GJUserCell::uploadActionFinished(int p0, int p1) {
    return reinterpret_cast<void(*)(GJUserCell*, int, int)>(base+0x11eae0)(this, p0, p1);
}

void GJUserCell::uploadActionFailed(int p0, int p1) {
    return reinterpret_cast<void(*)(GJUserCell*, int, int)>(base+0x11ecb0)(this, p0, p1);
}

void GJUserCell::onClosePopup(UploadActionPopup* p0) {
    return reinterpret_cast<void(*)(GJUserCell*, UploadActionPopup*)>(base+0x11edb0)(this, p0);
}

void GameObject::update(float p0) {
    return reinterpret_cast<void(*)(GameObject*, float)>(base+0x2fbb90)(this, p0);
}

void GameObject::setScaleX(float p0) {
    return reinterpret_cast<void(*)(GameObject*, float)>(base+0x335b00)(this, p0);
}

void GameObject::setScaleY(float p0) {
    return reinterpret_cast<void(*)(GameObject*, float)>(base+0x335b90)(this, p0);
}

void GameObject::setScale(float p0) {
    return reinterpret_cast<void(*)(GameObject*, float)>(base+0x335c20)(this, p0);
}

void GameObject::setPosition(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(GameObject*, cocos2d::CCPoint const&)>(base+0x335850)(this, p0);
}

void GameObject::setVisible(bool p0) {
    return reinterpret_cast<void(*)(GameObject*, bool)>(base+0x336280)(this, p0);
}

void GameObject::setRotation(float p0) {
    return reinterpret_cast<void(*)(GameObject*, float)>(base+0x335970)(this, p0);
}

void GameObject::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(GameObject*, unsigned char)>(base+0x335f10)(this, p0);
}

void GameObject::initWithTexture(cocos2d::CCTexture2D* p0) {
    return reinterpret_cast<void(*)(GameObject*, cocos2d::CCTexture2D*)>(base+0x2f56a0)(this, p0);
}

void GameObject::setChildColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(GameObject*, cocos2d::_ccColor3B const&)>(base+0x341f20)(this, p0);
}

void GameObject::setFlipX(bool p0) {
    return reinterpret_cast<void(*)(GameObject*, bool)>(base+0x335a60)(this, p0);
}

void GameObject::setFlipY(bool p0) {
    return reinterpret_cast<void(*)(GameObject*, bool)>(base+0x335ab0)(this, p0);
}

void GameObject::customSetup() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x2fbba0)(this);
}

void GameObject::setupCustomSprites() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x307f60)(this);
}

void GameObject::addMainSpriteToParent(bool p0) {
    return reinterpret_cast<void(*)(GameObject*, bool)>(base+0x33a5b0)(this, p0);
}

void GameObject::resetObject() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x2fa620)(this);
}

void GameObject::triggerObject(GJBaseGameLayer* p0) {
    return reinterpret_cast<void(*)(GameObject*, GJBaseGameLayer*)>(base+0x2fa8f0)(this, p0);
}

void GameObject::activateObject() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x2faf60)(this);
}

void GameObject::deactivateObject(bool p0) {
    return reinterpret_cast<void(*)(GameObject*, bool)>(base+0x2fb8f0)(this, p0);
}

void GameObject::getObjectRect() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x3352b0)(this);
}

void GameObject::getObjectRect(float p0, float p1) {
    return reinterpret_cast<void(*)(GameObject*, float, float)>(base+0x3352d0)(this, p0, p1);
}

void GameObject::getObjectRect2(float p0, float p1) {
    return reinterpret_cast<void(*)(GameObject*, float, float)>(base+0x3354e0)(this, p0, p1);
}

void GameObject::getObjectTextureRect() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x3355b0)(this);
}

void GameObject::getRealPosition() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x335750)(this);
}

void GameObject::setStartPos(cocos2d::CCPoint p0) {
    return reinterpret_cast<void(*)(GameObject*, cocos2d::CCPoint)>(base+0x2fa520)(this, p0);
}

void GameObject::updateStartValues() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x2fa800)(this);
}

void GameObject::getSaveString() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x33d3d0)(this);
}

void GameObject::isFlipX() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x335a40)(this);
}

void GameObject::isFlipY() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x335a50)(this);
}

void GameObject::setRScaleX(float p0) {
    return reinterpret_cast<void(*)(GameObject*, float)>(base+0x335cb0)(this, p0);
}

void GameObject::setRScaleY(float p0) {
    return reinterpret_cast<void(*)(GameObject*, float)>(base+0x335d60)(this, p0);
}

void GameObject::setRScale(float p0) {
    return reinterpret_cast<void(*)(GameObject*, float)>(base+0x335e10)(this, p0);
}

void GameObject::getRScaleX() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x335e50)(this);
}

void GameObject::getRScaleY() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x335e80)(this);
}

void GameObject::calculateSpawnXPos() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x336970)(this);
}

void GameObject::triggerActivated(float p0) {
    return reinterpret_cast<void(*)(GameObject*, float)>(base+0x336990)(this, p0);
}

void GameObject::powerOnObject() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x3369a0)(this);
}

void GameObject::powerOffObject() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x3369c0)(this);
}

void GameObject::setObjectColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(GameObject*, cocos2d::_ccColor3B const&)>(base+0x341c90)(this, p0);
}

void GameObject::setGlowColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(GameObject*, cocos2d::_ccColor3B const&)>(base+0x341ed0)(this, p0);
}

void GameObject::getOrientedBox() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0x342ad0)(this);
}

void GameObject::addToGroup(int p0) {
    return reinterpret_cast<void(*)(GameObject*, int)>(base+0x33ad00)(this, p0);
}

void GameObject::removeFromGroup(int p0) {
    return reinterpret_cast<void(*)(GameObject*, int)>(base+0x33ada0)(this, p0);
}

void GameObject::spawnXPosition() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0xdc1b0)(this);
}

void GameObject::getObjectRectDirty() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0xdc1d0)(this);
}

void GameObject::setObjectRectDirty(bool p0) {
    return reinterpret_cast<void(*)(GameObject*, bool)>(base+0xdc1e0)(this, p0);
}

void GameObject::getOrientedRectDirty() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0xdc1f0)(this);
}

void GameObject::setOrientedRectDirty(bool p0) {
    return reinterpret_cast<void(*)(GameObject*, bool)>(base+0xdc200)(this, p0);
}

void GameObject::getType() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0xdc210)(this);
}

void GameObject::setType(GameObjectType p0) {
    return reinterpret_cast<void(*)(GameObject*, GameObjectType)>(base+0xdc220)(this, p0);
}

void GameObject::getStartPos() {
    return reinterpret_cast<void(*)(GameObject*)>(base+0xdc230)(this);
}

void GaragePage::listButtonBarSwitchedPage(ListButtonBar* p0, int p1) {
    return reinterpret_cast<void(*)(GaragePage*, ListButtonBar*, int)>(base+0x1bc2f0)(this, p0, p1);
}

bool HardStreak::init() {
    return reinterpret_cast<bool(*)(HardStreak*)>(base+0x5c090)(this);
}

void PauseLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(PauseLayer*)>(base+0x20cd80)(this);
}

void PauseLayer::keyDown(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(PauseLayer*, cocos2d::enumKeyCodes)>(base+0x20cc80)(this, p0);
}

void PauseLayer::customSetup() {
    return reinterpret_cast<void(*)(PauseLayer*)>(base+0x20b300)(this);
}

void PauseLayer::keyUp(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(PauseLayer*, cocos2d::enumKeyCodes)>(base+0x20cd60)(this, p0);
}

void RingObject::setScale(float p0) {
    return reinterpret_cast<void(*)(RingObject*, float)>(base+0xc6fb0)(this, p0);
}

void RingObject::setRotation(float p0) {
    return reinterpret_cast<void(*)(RingObject*, float)>(base+0xc7010)(this, p0);
}

void RingObject::resetObject() {
    return reinterpret_cast<void(*)(RingObject*)>(base+0xc6f90)(this);
}

void RingObject::getSaveString() {
    return reinterpret_cast<void(*)(RingObject*)>(base+0xc73a0)(this);
}

void RingObject::setRScale(float p0) {
    return reinterpret_cast<void(*)(RingObject*, float)>(base+0xc6fe0)(this, p0);
}

void RingObject::triggerActivated(float p0) {
    return reinterpret_cast<void(*)(RingObject*, float)>(base+0xc6e10)(this, p0);
}

void RingObject::powerOnObject() {
    return reinterpret_cast<void(*)(RingObject*)>(base+0xc6e20)(this);
}

void RingObject::powerOffObject() {
    return reinterpret_cast<void(*)(RingObject*)>(base+0xc6f70)(this);
}

void SetIDLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(SetIDLayer*)>(base+0x169670)(this);
}

void SetIDPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(SetIDPopup*)>(base+0x155310)(this);
}

void SetIDPopup::show() {
    return reinterpret_cast<void(*)(SetIDPopup*)>(base+0x1552c0)(this);
}

void SetIDPopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetIDPopup*, CCTextInputNode*)>(base+0x155140)(this, p0);
}

void SetIDPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetIDPopup*, CCTextInputNode*)>(base+0x155180)(this, p0);
}

void SetIDPopup::valueChanged() {
    return reinterpret_cast<void(*)(SetIDPopup*)>(base+0x1552b0)(this);
}

bool ShardsPage::init() {
    return reinterpret_cast<bool(*)(ShardsPage*)>(base+0x27d610)(this);
}

void ShardsPage::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(ShardsPage*)>(base+0x27fc40)(this);
}

void ShardsPage::keyBackClicked() {
    return reinterpret_cast<void(*)(ShardsPage*)>(base+0x27fbd0)(this);
}

void ShardsPage::show() {
    return reinterpret_cast<void(*)(ShardsPage*)>(base+0x27fa30)(this);
}

void SongsLayer::customSetup() {
    return reinterpret_cast<void(*)(SongsLayer*)>(base+0x29ec80)(this);
}

void StatsLayer::customSetup() {
    return reinterpret_cast<void(*)(StatsLayer*)>(base+0x59df0)(this);
}

void AppDelegate::applicationDidFinishLaunching() {
    return reinterpret_cast<void(*)(AppDelegate*)>(base+0x3aa900)(this);
}

void AppDelegate::applicationDidEnterBackground() {
    return reinterpret_cast<void(*)(AppDelegate*)>(base+0x3aabe0)(this);
}

void AppDelegate::applicationWillEnterForeground() {
    return reinterpret_cast<void(*)(AppDelegate*)>(base+0x3aac80)(this);
}

void AppDelegate::applicationWillBecomeActive() {
    return reinterpret_cast<void(*)(AppDelegate*)>(base+0x3aab30)(this);
}

void AppDelegate::applicationWillResignActive() {
    return reinterpret_cast<void(*)(AppDelegate*)>(base+0x3aab50)(this);
}

void AppDelegate::trySaveGame() {
    return reinterpret_cast<void(*)(AppDelegate*)>(base+0x3aaf10)(this);
}

void AppDelegate::willSwitchToScene(cocos2d::CCScene* p0) {
    return reinterpret_cast<void(*)(AppDelegate*, cocos2d::CCScene*)>(base+0x3aaf40)(this, p0);
}

bool CCCountdown::init() {
    return reinterpret_cast<bool(*)(CCCountdown*)>(base+0x468870)(this);
}

void CCCountdown::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(CCCountdown*, unsigned char)>(base+0x468c70)(this, p0);
}

bool CCMoveCNode::init() {
    return reinterpret_cast<bool(*)(CCMoveCNode*)>(base+0x18b3d0)(this);
}

bool CommentCell::init() {
    return reinterpret_cast<bool(*)(CommentCell*)>(base+0x11ce80)(this);
}

void CommentCell::draw() {
    return reinterpret_cast<void(*)(CommentCell*)>(base+0x11d1f0)(this);
}

void CommentCell::likedItem(LikeItemType p0, int p1, bool p2) {
    return reinterpret_cast<void(*)(CommentCell*, LikeItemType, int, bool)>(base+0x11d2c0)(this, p0, p1, p2);
}

void CommentCell::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(CommentCell*, FLAlertLayer*, bool)>(base+0x11d4b0)(this, p0, p1);
}

void DialogLayer::onEnter() {
    return reinterpret_cast<void(*)(DialogLayer*)>(base+0x205900)(this);
}

void DialogLayer::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x205790)(this, p0, p1);
}

void DialogLayer::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x205820)(this, p0, p1);
}

void DialogLayer::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x2057e0)(this, p0, p1);
}

void DialogLayer::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x205840)(this, p0, p1);
}

void DialogLayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(DialogLayer*)>(base+0x205890)(this);
}

void DialogLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(DialogLayer*)>(base+0x2056a0)(this);
}

void DialogLayer::keyDown(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(DialogLayer*, cocos2d::enumKeyCodes)>(base+0x205ce0)(this, p0);
}

void DialogLayer::fadeInTextFinished(TextArea* p0) {
    return reinterpret_cast<void(*)(DialogLayer*, TextArea*)>(base+0x205930)(this, p0);
}

void GJGameLevel::encodeWithCoder(DS_Dictionary* p0) {
    return reinterpret_cast<void(*)(GJGameLevel*, DS_Dictionary*)>(base+0x2dd1c0)(this, p0);
}

void GJGameLevel::canEncode() {
    return reinterpret_cast<void(*)(GJGameLevel*)>(base+0x2ddae0)(this);
}

bool GJGameLevel::init() {
    return reinterpret_cast<bool(*)(GJGameLevel*)>(base+0x2db310)(this);
}

bool GJScoreCell::init() {
    return reinterpret_cast<bool(*)(GJScoreCell*)>(base+0x11d710)(this);
}

void GJScoreCell::draw() {
    return reinterpret_cast<void(*)(GJScoreCell*)>(base+0x11d9b0)(this);
}

void GJScoreCell::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(GJScoreCell*, FLAlertLayer*, bool)>(base+0x11d8e0)(this, p0, p1);
}

void GJShopLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(GJShopLayer*)>(base+0x1a2370)(this);
}

void GJShopLayer::didPurchaseItem(GJStoreItem* p0) {
    return reinterpret_cast<void(*)(GJShopLayer*, GJStoreItem*)>(base+0x1a1ae0)(this, p0);
}

bool GJUserScore::init() {
    return reinterpret_cast<bool(*)(GJUserScore*)>(base+0x2de5a0)(this);
}

void GameManager::update(float p0) {
    return reinterpret_cast<void(*)(GameManager*, float)>(base+0x1d0270)(this, p0);
}

bool GameManager::init() {
    return reinterpret_cast<bool(*)(GameManager*)>(base+0x1c2ec0)(this);
}

void GameManager::encodeDataTo(DS_Dictionary* p0) {
    return reinterpret_cast<void(*)(GameManager*, DS_Dictionary*)>(base+0x1cfd90)(this, p0);
}

void GameManager::dataLoaded(DS_Dictionary* p0) {
    return reinterpret_cast<void(*)(GameManager*, DS_Dictionary*)>(base+0x1ce7f0)(this, p0);
}

void GameManager::firstLoad() {
    return reinterpret_cast<void(*)(GameManager*)>(base+0x1cf6a0)(this);
}

bool MapPackCell::init() {
    return reinterpret_cast<bool(*)(MapPackCell*)>(base+0x11a9c0)(this);
}

void MapPackCell::draw() {
    return reinterpret_cast<void(*)(MapPackCell*)>(base+0x11ae80)(this);
}

void ProfilePage::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(ProfilePage*)>(base+0x464a60)(this);
}

void ProfilePage::keyBackClicked() {
    return reinterpret_cast<void(*)(ProfilePage*)>(base+0x4637e0)(this);
}

void ProfilePage::show() {
    return reinterpret_cast<void(*)(ProfilePage*)>(base+0x4639c0)(this);
}

void ProfilePage::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(ProfilePage*, FLAlertLayer*, bool)>(base+0x463340)(this, p0, p1);
}

void ProfilePage::updateUserScoreFinished() {
    return reinterpret_cast<void(*)(ProfilePage*)>(base+0x463850)(this);
}

void ProfilePage::updateUserScoreFailed() {
    return reinterpret_cast<void(*)(ProfilePage*)>(base+0x463920)(this);
}

void ProfilePage::getUserInfoFinished(GJUserScore* p0) {
    return reinterpret_cast<void(*)(ProfilePage*, GJUserScore*)>(base+0x463cd0)(this, p0);
}

void ProfilePage::getUserInfoFailed(int p0) {
    return reinterpret_cast<void(*)(ProfilePage*, int)>(base+0x463fb0)(this, p0);
}

void ProfilePage::userInfoChanged(GJUserScore* p0) {
    return reinterpret_cast<void(*)(ProfilePage*, GJUserScore*)>(base+0x464070)(this, p0);
}

void ProfilePage::loadCommentsFinished(cocos2d::CCArray* p0, char const* p1) {
    return reinterpret_cast<void(*)(ProfilePage*, cocos2d::CCArray*, char const*)>(base+0x464250)(this, p0, p1);
}

void ProfilePage::loadCommentsFailed(char const* p0) {
    return reinterpret_cast<void(*)(ProfilePage*, char const*)>(base+0x464340)(this, p0);
}

void ProfilePage::setupPageInfo(std::string p0, char const* p1) {
    return reinterpret_cast<void(*)(ProfilePage*, std::string, char const*)>(base+0x464410)(this, p0, p1);
}

void ProfilePage::commentUploadFinished(int p0) {
    return reinterpret_cast<void(*)(ProfilePage*, int)>(base+0x464770)(this, p0);
}

void ProfilePage::commentUploadFailed(int p0, CommentError p1) {
    return reinterpret_cast<void(*)(ProfilePage*, int, CommentError)>(base+0x464800)(this, p0, p1);
}

void ProfilePage::commentDeleteFailed(int p0, int p1) {
    return reinterpret_cast<void(*)(ProfilePage*, int, int)>(base+0x4648e0)(this, p0, p1);
}

void ProfilePage::onClosePopup(UploadActionPopup* p0) {
    return reinterpret_cast<void(*)(ProfilePage*, UploadActionPopup*)>(base+0x463510)(this, p0);
}

void ProfilePage::uploadActionFinished(int p0, int p1) {
    return reinterpret_cast<void(*)(ProfilePage*, int, int)>(base+0x463570)(this, p0, p1);
}

void ProfilePage::uploadActionFailed(int p0, int p1) {
    return reinterpret_cast<void(*)(ProfilePage*, int, int)>(base+0x463710)(this, p0, p1);
}

bool RewardsPage::init() {
    return reinterpret_cast<bool(*)(RewardsPage*)>(base+0xf3800)(this);
}

void RewardsPage::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(RewardsPage*)>(base+0xf5040)(this);
}

void RewardsPage::keyBackClicked() {
    return reinterpret_cast<void(*)(RewardsPage*)>(base+0xf4fd0)(this);
}

void RewardsPage::show() {
    return reinterpret_cast<void(*)(RewardsPage*)>(base+0xf4e70)(this);
}

void RewardsPage::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(RewardsPage*, FLAlertLayer*, bool)>(base+0xf4fb0)(this, p0, p1);
}

void RewardsPage::rewardsStatusFinished(int p0) {
    return reinterpret_cast<void(*)(RewardsPage*, int)>(base+0xf4ae0)(this, p0);
}

void RewardsPage::rewardsStatusFailed() {
    return reinterpret_cast<void(*)(RewardsPage*)>(base+0xf4d70)(this);
}

bool SecretLayer::init() {
    return reinterpret_cast<bool(*)(SecretLayer*)>(base+0x363340)(this);
}

void SecretLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(SecretLayer*)>(base+0x368450)(this);
}

void SecretLayer::textInputOpened(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SecretLayer*, CCTextInputNode*)>(base+0x366d30)(this, p0);
}

void SecretLayer::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SecretLayer*, CCTextInputNode*)>(base+0x366f30)(this, p0);
}

void SecretLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SecretLayer*, CCTextInputNode*)>(base+0x367050)(this, p0);
}

void SecretLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(SecretLayer*, FLAlertLayer*, bool)>(base+0x366d10)(this, p0, p1);
}

void UploadPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(UploadPopup*)>(base+0x12c600)(this);
}

void UploadPopup::show() {
    return reinterpret_cast<void(*)(UploadPopup*)>(base+0x12c5a0)(this);
}

void UploadPopup::levelUploadFinished(GJGameLevel* p0) {
    return reinterpret_cast<void(*)(UploadPopup*, GJGameLevel*)>(base+0x12c080)(this, p0);
}

void UploadPopup::levelUploadFailed(GJGameLevel* p0) {
    return reinterpret_cast<void(*)(UploadPopup*, GJGameLevel*)>(base+0x12c340)(this, p0);
}

void AccountLayer::customSetup() {
    return reinterpret_cast<void(*)(AccountLayer*)>(base+0x81c20)(this);
}

void AccountLayer::layerHidden() {
    return reinterpret_cast<void(*)(AccountLayer*)>(base+0x83950)(this);
}

void AccountLayer::backupAccountFinished() {
    return reinterpret_cast<void(*)(AccountLayer*)>(base+0x830e0)(this);
}

void AccountLayer::backupAccountFailed(BackupAccountError p0) {
    return reinterpret_cast<void(*)(AccountLayer*, BackupAccountError)>(base+0x832d0)(this, p0);
}

void AccountLayer::syncAccountFinished() {
    return reinterpret_cast<void(*)(AccountLayer*)>(base+0x83490)(this);
}

void AccountLayer::syncAccountFailed(BackupAccountError p0) {
    return reinterpret_cast<void(*)(AccountLayer*, BackupAccountError)>(base+0x83630)(this, p0);
}

void AccountLayer::accountStatusChanged() {
    return reinterpret_cast<void(*)(AccountLayer*)>(base+0x830b0)(this);
}

void AccountLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(AccountLayer*, FLAlertLayer*, bool)>(base+0x83830)(this, p0, p1);
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

void BoomListView::numberOfRowsInSection(unsigned int p0, TableView* p1) {
    return reinterpret_cast<void(*)(BoomListView*, unsigned int, TableView*)>(base+0x18f0b0)(this, p0, p1);
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

void BoomListView::getListCell(char const* p0) {
    return reinterpret_cast<void(*)(BoomListView*, char const*)>(base+0x18f200)(this, p0);
}

void BoomListView::loadCell(TableViewCell* p0, int p1) {
    return reinterpret_cast<void(*)(BoomListView*, TableViewCell*, int)>(base+0x18f4a0)(this, p0, p1);
}

bool CCBlockLayer::init() {
    return reinterpret_cast<bool(*)(CCBlockLayer*)>(base+0x2a59c0)(this);
}

void CCBlockLayer::draw() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5c20)(this);
}

void CCBlockLayer::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CCBlockLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x2a5c50)(this, p0, p1);
}

void CCBlockLayer::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CCBlockLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x2a5cb0)(this, p0, p1);
}

void CCBlockLayer::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CCBlockLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x2a5c70)(this, p0, p1);
}

void CCBlockLayer::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CCBlockLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x2a5c90)(this, p0, p1);
}

void CCBlockLayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5ad0)(this);
}

void CCBlockLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5b10)(this);
}

void CCBlockLayer::customSetup() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5a70)(this);
}

void CCBlockLayer::enterLayer() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5aa0)(this);
}

void CCBlockLayer::exitLayer() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5b40)(this);
}

void CCBlockLayer::showLayer(bool p0) {
    return reinterpret_cast<void(*)(CCBlockLayer*, bool)>(base+0x2a5b90)(this, p0);
}

void CCBlockLayer::hideLayer(bool p0) {
    return reinterpret_cast<void(*)(CCBlockLayer*, bool)>(base+0x2a5ba0)(this, p0);
}

void CCBlockLayer::layerVisible() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5bc0)(this);
}

void CCBlockLayer::layerHidden() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5be0)(this);
}

void CCBlockLayer::enterAnimFinished() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5bb0)(this);
}

void CCBlockLayer::disableUI() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5a80)(this);
}

void CCBlockLayer::enableUI() {
    return reinterpret_cast<void(*)(CCBlockLayer*)>(base+0x2a5a90)(this);
}

void CCCircleWave::setPosition(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(CCCircleWave*, cocos2d::CCPoint const&)>(base+0xbd600)(this, p0);
}

void CCCircleWave::removeMeAndCleanup() {
    return reinterpret_cast<void(*)(CCCircleWave*)>(base+0xbdac0)(this);
}

void CCCircleWave::draw() {
    return reinterpret_cast<void(*)(CCCircleWave*)>(base+0xbd960)(this);
}

void CCCircleWave::updateTweenAction(float p0, char const* p1) {
    return reinterpret_cast<void(*)(CCCircleWave*, float, char const*)>(base+0xbd710)(this, p0, p1);
}

bool CCLightFlash::init() {
    return reinterpret_cast<bool(*)(CCLightFlash*)>(base+0x2958f0)(this);
}

void CCLightStrip::draw() {
    return reinterpret_cast<void(*)(CCLightStrip*)>(base+0x296410)(this);
}

void CCLightStrip::updateTweenAction(float p0, char const* p1) {
    return reinterpret_cast<void(*)(CCLightStrip*, float, char const*)>(base+0x2965a0)(this, p0, p1);
}

void CCSpritePlus::setScaleX(float p0) {
    return reinterpret_cast<void(*)(CCSpritePlus*, float)>(base+0x248950)(this, p0);
}

void CCSpritePlus::setScaleY(float p0) {
    return reinterpret_cast<void(*)(CCSpritePlus*, float)>(base+0x2489d0)(this, p0);
}

void CCSpritePlus::setScale(float p0) {
    return reinterpret_cast<void(*)(CCSpritePlus*, float)>(base+0x248a50)(this, p0);
}

void CCSpritePlus::setPosition(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(CCSpritePlus*, cocos2d::CCPoint const&)>(base+0x2486b0)(this, p0);
}

void CCSpritePlus::setRotation(float p0) {
    return reinterpret_cast<void(*)(CCSpritePlus*, float)>(base+0x248730)(this, p0);
}

void CCSpritePlus::initWithTexture(cocos2d::CCTexture2D* p0) {
    return reinterpret_cast<void(*)(CCSpritePlus*, cocos2d::CCTexture2D*)>(base+0x248690)(this, p0);
}

void CCSpritePlus::initWithSpriteFrameName(char const* p0) {
    return reinterpret_cast<void(*)(CCSpritePlus*, char const*)>(base+0x248670)(this, p0);
}

void CCSpritePlus::setFlipX(bool p0) {
    return reinterpret_cast<void(*)(CCSpritePlus*, bool)>(base+0x2487b0)(this, p0);
}

void CCSpritePlus::setFlipY(bool p0) {
    return reinterpret_cast<void(*)(CCSpritePlus*, bool)>(base+0x248880)(this, p0);
}

bool CreatorLayer::init() {
    return reinterpret_cast<bool(*)(CreatorLayer*)>(base+0x141c10)(this);
}

void CreatorLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(CreatorLayer*)>(base+0x143950)(this);
}

void CreatorLayer::sceneWillResume() {
    return reinterpret_cast<void(*)(CreatorLayer*)>(base+0x1438f0)(this);
}

void CreatorLayer::dialogClosed(DialogLayer* p0) {
    return reinterpret_cast<void(*)(CreatorLayer*, DialogLayer*)>(base+0x143830)(this, p0);
}

void FLAlertLayer::onEnter() {
    return reinterpret_cast<void(*)(FLAlertLayer*)>(base+0x25f350)(this);
}

void FLAlertLayer::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(FLAlertLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x25ee40)(this, p0, p1);
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

void GJRewardItem::encodeWithCoder(DS_Dictionary* p0) {
    return reinterpret_cast<void(*)(GJRewardItem*, DS_Dictionary*)>(base+0x4d7f0)(this, p0);
}

void GJRewardItem::canEncode() {
    return reinterpret_cast<void(*)(GJRewardItem*)>(base+0x4d850)(this);
}

void OptionsLayer::customSetup() {
    return reinterpret_cast<void(*)(OptionsLayer*)>(base+0x43dc70)(this);
}

void OptionsLayer::layerHidden() {
    return reinterpret_cast<void(*)(OptionsLayer*)>(base+0x43f200)(this);
}

void OptionsLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(OptionsLayer*, FLAlertLayer*, bool)>(base+0x43f270)(this, p0, p1);
}

void PlayerObject::update(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x218bf0)(this, p0);
}

void PlayerObject::setScaleX(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x22e7f0)(this, p0);
}

void PlayerObject::setScaleY(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x22e830)(this, p0);
}

void PlayerObject::setScale(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x22e870)(this, p0);
}

void PlayerObject::setPosition(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(PlayerObject*, cocos2d::CCPoint const&)>(base+0x22c8b0)(this, p0);
}

void PlayerObject::setVisible(bool p0) {
    return reinterpret_cast<void(*)(PlayerObject*, bool)>(base+0x22e8b0)(this, p0);
}

void PlayerObject::setRotation(float p0) {
    return reinterpret_cast<void(*)(PlayerObject*, float)>(base+0x22e6e0)(this, p0);
}

void PlayerObject::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(PlayerObject*, unsigned char)>(base+0x22d400)(this, p0);
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

void PlayerObject::resetObject() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x223170)(this);
}

void PlayerObject::getRealPosition() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22d5f0)(this);
}

void PlayerObject::getOrientedBox() {
    return reinterpret_cast<void(*)(PlayerObject*)>(base+0x22dee0)(this);
}

void PlayerObject::animationFinished(char const* p0) {
    return reinterpret_cast<void(*)(PlayerObject*, char const*)>(base+0x22e9d0)(this, p0);
}

bool SecretLayer2::init() {
    return reinterpret_cast<bool(*)(SecretLayer2*)>(base+0x25fe70)(this);
}

void SecretLayer2::onExit() {
    return reinterpret_cast<void(*)(SecretLayer2*)>(base+0x266b30)(this);
}

void SecretLayer2::keyBackClicked() {
    return reinterpret_cast<void(*)(SecretLayer2*)>(base+0x266a30)(this);
}

void SecretLayer2::textInputOpened(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SecretLayer2*, CCTextInputNode*)>(base+0x265880)(this, p0);
}

void SecretLayer2::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SecretLayer2*, CCTextInputNode*)>(base+0x265a80)(this, p0);
}

void SecretLayer2::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SecretLayer2*, CCTextInputNode*)>(base+0x265ba0)(this, p0);
}

void SecretLayer2::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(SecretLayer2*, FLAlertLayer*, bool)>(base+0x265860)(this, p0, p1);
}

void SecretLayer2::dialogClosed(DialogLayer* p0) {
    return reinterpret_cast<void(*)(SecretLayer2*, DialogLayer*)>(base+0x264880)(this, p0);
}

bool SecretLayer3::init() {
    return reinterpret_cast<bool(*)(SecretLayer3*)>(base+0x267040)(this);
}

void SecretLayer3::onExit() {
    return reinterpret_cast<void(*)(SecretLayer3*)>(base+0x26c270)(this);
}

void SecretLayer3::keyBackClicked() {
    return reinterpret_cast<void(*)(SecretLayer3*)>(base+0x26c240)(this);
}

void SecretLayer3::dialogClosed(DialogLayer* p0) {
    return reinterpret_cast<void(*)(SecretLayer3*, DialogLayer*)>(base+0x26bf10)(this, p0);
}

bool SecretLayer4::init() {
    return reinterpret_cast<bool(*)(SecretLayer4*)>(base+0x1ed640)(this);
}

void SecretLayer4::onExit() {
    return reinterpret_cast<void(*)(SecretLayer4*)>(base+0x1f2220)(this);
}

void SecretLayer4::keyBackClicked() {
    return reinterpret_cast<void(*)(SecretLayer4*)>(base+0x1f2120)(this);
}

void SecretLayer4::textInputOpened(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SecretLayer4*, CCTextInputNode*)>(base+0x1f0ff0)(this, p0);
}

void SecretLayer4::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SecretLayer4*, CCTextInputNode*)>(base+0x1f11f0)(this, p0);
}

void SecretLayer4::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SecretLayer4*, CCTextInputNode*)>(base+0x1f1310)(this, p0);
}

void SecretLayer4::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(SecretLayer4*, FLAlertLayer*, bool)>(base+0x1f0fd0)(this, p0, p1);
}

void SecretLayer4::dialogClosed(DialogLayer* p0) {
    return reinterpret_cast<void(*)(SecretLayer4*, DialogLayer*)>(base+0x1f0a90)(this, p0);
}

void SetTextPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(SetTextPopup*)>(base+0x157050)(this);
}

void SetTextPopup::show() {
    return reinterpret_cast<void(*)(SetTextPopup*)>(base+0x157000)(this);
}

void SetTextPopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetTextPopup*, CCTextInputNode*)>(base+0x156ef0)(this, p0);
}

void SetTextPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetTextPopup*, CCTextInputNode*)>(base+0x156f30)(this, p0);
}

void SimplePlayer::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(SimplePlayer*, unsigned char)>(base+0x1bcc40)(this, p0);
}

void SimplePlayer::setColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(SimplePlayer*, cocos2d::_ccColor3B const&)>(base+0x1bc9b0)(this, p0);
}

bool SlideInLayer::init() {
    return reinterpret_cast<bool(*)(SlideInLayer*)>(base+0x138cf0)(this);
}

void SlideInLayer::draw() {
    return reinterpret_cast<void(*)(SlideInLayer*)>(base+0x1394a0)(this);
}

void SlideInLayer::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(SlideInLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1394d0)(this, p0, p1);
}

void SlideInLayer::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(SlideInLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x139530)(this, p0, p1);
}

void SlideInLayer::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(SlideInLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1394f0)(this, p0, p1);
}

void SlideInLayer::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(SlideInLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x139510)(this, p0, p1);
}

void SlideInLayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(SlideInLayer*)>(base+0x139190)(this);
}

void SlideInLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(SlideInLayer*)>(base+0x1391d0)(this);
}

void SlideInLayer::customSetup() {
    return reinterpret_cast<void(*)(SlideInLayer*)>(base+0x139110)(this);
}

void SlideInLayer::enterLayer() {
    return reinterpret_cast<void(*)(SlideInLayer*)>(base+0x139160)(this);
}

void SlideInLayer::exitLayer(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(SlideInLayer*, cocos2d::CCObject*)>(base+0x139210)(this, p0);
}

void SlideInLayer::showLayer(bool p0) {
    return reinterpret_cast<void(*)(SlideInLayer*, bool)>(base+0x139270)(this, p0);
}

void SlideInLayer::hideLayer(bool p0) {
    return reinterpret_cast<void(*)(SlideInLayer*, bool)>(base+0x139360)(this, p0);
}

void SlideInLayer::layerVisible() {
    return reinterpret_cast<void(*)(SlideInLayer*)>(base+0x139440)(this);
}

void SlideInLayer::layerHidden() {
    return reinterpret_cast<void(*)(SlideInLayer*)>(base+0x139460)(this);
}

void SlideInLayer::enterAnimFinished() {
    return reinterpret_cast<void(*)(SlideInLayer*)>(base+0x139430)(this);
}

void SlideInLayer::disableUI() {
    return reinterpret_cast<void(*)(SlideInLayer*)>(base+0x139120)(this);
}

void SlideInLayer::enableUI() {
    return reinterpret_cast<void(*)(SlideInLayer*)>(base+0x139140)(this);
}

void SupportLayer::customSetup() {
    return reinterpret_cast<void(*)(SupportLayer*)>(base+0x1d90b0)(this);
}

void SupportLayer::uploadActionFinished(int p0, int p1) {
    return reinterpret_cast<void(*)(SupportLayer*, int, int)>(base+0x1d9de0)(this, p0, p1);
}

void SupportLayer::uploadActionFailed(int p0, int p1) {
    return reinterpret_cast<void(*)(SupportLayer*, int, int)>(base+0x1d9f00)(this, p0, p1);
}

void SupportLayer::onClosePopup(UploadActionPopup* p0) {
    return reinterpret_cast<void(*)(SupportLayer*, UploadActionPopup*)>(base+0x1d9d90)(this, p0);
}

void SupportLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(SupportLayer*, FLAlertLayer*, bool)>(base+0x1da170)(this, p0, p1);
}

bool CCAlertCircle::init() {
    return reinterpret_cast<bool(*)(CCAlertCircle*)>(base+0xbdea0)(this);
}

void CCAlertCircle::draw() {
    return reinterpret_cast<void(*)(CCAlertCircle*)>(base+0xbdf40)(this);
}

void DrawGridLayer::update(float p0) {
    return reinterpret_cast<void(*)(DrawGridLayer*, float)>(base+0xa3b30)(this, p0);
}

bool ExtendedLayer::init() {
    return reinterpret_cast<bool(*)(ExtendedLayer*)>(base+0x1e41e0)(this);
}

void ExtendedLayer::setPosition(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(ExtendedLayer*, cocos2d::CCPoint const&)>(base+0x1e41f0)(this, p0);
}

void GJChestSprite::setColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(GJChestSprite*, cocos2d::_ccColor3B const&)>(base+0xf8270)(this, p0);
}

bool GJGarageLayer::init() {
    return reinterpret_cast<bool(*)(GJGarageLayer*)>(base+0x1b4980)(this);
}

void GJGarageLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(GJGarageLayer*)>(base+0x1bb630)(this);
}

void GJGarageLayer::textInputOpened(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJGarageLayer*, CCTextInputNode*)>(base+0x1b7dc0)(this, p0);
}

void GJGarageLayer::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJGarageLayer*, CCTextInputNode*)>(base+0x1b8040)(this, p0);
}

void GJGarageLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJGarageLayer*, CCTextInputNode*)>(base+0x1b82c0)(this, p0);
}

void GJGarageLayer::listButtonBarSwitchedPage(ListButtonBar* p0, int p1) {
    return reinterpret_cast<void(*)(GJGarageLayer*, ListButtonBar*, int)>(base+0x1bad10)(this, p0, p1);
}

void GJGarageLayer::updateRate() {
    return reinterpret_cast<void(*)(GJGarageLayer*)>(base+0x1bb420)(this);
}

void GJGarageLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(GJGarageLayer*, FLAlertLayer*, bool)>(base+0x1bb050)(this, p0, p1);
}

void GJGarageLayer::dialogClosed(DialogLayer* p0) {
    return reinterpret_cast<void(*)(GJGarageLayer*, DialogLayer*)>(base+0x1bb160)(this, p0);
}

void GJGroundLayer::draw() {
    return reinterpret_cast<void(*)(GJGroundLayer*)>(base+0x356a60)(this);
}

void GJGroundLayer::showGround() {
    return reinterpret_cast<void(*)(GJGroundLayer*)>(base+0x356920)(this);
}

void GJGroundLayer::fadeInGround(float p0) {
    return reinterpret_cast<void(*)(GJGroundLayer*, float)>(base+0x356930)(this, p0);
}

void GJGroundLayer::fadeOutGround(float p0) {
    return reinterpret_cast<void(*)(GJGroundLayer*, float)>(base+0x356a30)(this, p0);
}

bool GJMessageCell::init() {
    return reinterpret_cast<bool(*)(GJMessageCell*)>(base+0x11fc00)(this);
}

void GJMessageCell::draw() {
    return reinterpret_cast<void(*)(GJMessageCell*)>(base+0x11fef0)(this);
}

void GJMessageCell::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(GJMessageCell*, FLAlertLayer*, bool)>(base+0x11ffc0)(this, p0, p1);
}

void GJMessageCell::uploadActionFinished(int p0, int p1) {
    return reinterpret_cast<void(*)(GJMessageCell*, int, int)>(base+0x120180)(this, p0, p1);
}

void GJMessageCell::uploadActionFailed(int p0, int p1) {
    return reinterpret_cast<void(*)(GJMessageCell*, int, int)>(base+0x120310)(this, p0, p1);
}

void GJMessageCell::onClosePopup(UploadActionPopup* p0) {
    return reinterpret_cast<void(*)(GJMessageCell*, UploadActionPopup*)>(base+0x120410)(this, p0);
}

bool GJRequestCell::init() {
    return reinterpret_cast<bool(*)(GJRequestCell*)>(base+0x11f080)(this);
}

void GJRequestCell::draw() {
    return reinterpret_cast<void(*)(GJRequestCell*)>(base+0x11f390)(this);
}

void GJRequestCell::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(GJRequestCell*, FLAlertLayer*, bool)>(base+0x11f460)(this, p0, p1);
}

void GJRequestCell::uploadActionFinished(int p0, int p1) {
    return reinterpret_cast<void(*)(GJRequestCell*, int, int)>(base+0x11f640)(this, p0, p1);
}

void GJRequestCell::uploadActionFailed(int p0, int p1) {
    return reinterpret_cast<void(*)(GJRequestCell*, int, int)>(base+0x11f800)(this, p0, p1);
}

void GJRequestCell::onClosePopup(UploadActionPopup* p0) {
    return reinterpret_cast<void(*)(GJRequestCell*, UploadActionPopup*)>(base+0x11f930)(this, p0);
}

bool GJRobotSprite::init() {
    return reinterpret_cast<bool(*)(GJRobotSprite*)>(base+0x34ad50)(this);
}

void GJRobotSprite::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(GJRobotSprite*, unsigned char)>(base+0x34bcc0)(this, p0);
}

void GJRobotSprite::hideSecondary() {
    return reinterpret_cast<void(*)(GJRobotSprite*)>(base+0x34c3b0)(this);
}

void GJSongBrowser::customSetup() {
    return reinterpret_cast<void(*)(GJSongBrowser*)>(base+0x368ab0)(this);
}

void GJSongBrowser::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(GJSongBrowser*, FLAlertLayer*, bool)>(base+0x3690a0)(this, p0, p1);
}

bool GJSpriteColor::init() {
    return reinterpret_cast<bool(*)(GJSpriteColor*)>(base+0x343c90)(this);
}

bool GJUserMessage::init() {
    return reinterpret_cast<bool(*)(GJUserMessage*)>(base+0x2debf0)(this);
}

void GauntletLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(GauntletLayer*)>(base+0x1d5e20)(this);
}

void GauntletLayer::loadLevelsFinished(cocos2d::CCArray* p0, char const* p1) {
    return reinterpret_cast<void(*)(GauntletLayer*, cocos2d::CCArray*, char const*)>(base+0x1d5410)(this, p0, p1);
}

void GauntletLayer::loadLevelsFailed(char const* p0) {
    return reinterpret_cast<void(*)(GauntletLayer*, char const*)>(base+0x1d55d0)(this, p0);
}

void LikeItemLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(LikeItemLayer*)>(base+0x35ff20)(this);
}

bool LoadingCircle::init() {
    return reinterpret_cast<bool(*)(LoadingCircle*)>(base+0x277f00)(this);
}

void LoadingCircle::draw() {
    return reinterpret_cast<void(*)(LoadingCircle*)>(base+0x278170)(this);
}

void LoadingCircle::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(LoadingCircle*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x2781d0)(this, p0, p1);
}

void LoadingCircle::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(LoadingCircle*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x2781e0)(this, p0, p1);
}

void LoadingCircle::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(LoadingCircle*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x2781f0)(this, p0, p1);
}

void LoadingCircle::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(LoadingCircle*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x278200)(this, p0, p1);
}

void LoadingCircle::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(LoadingCircle*)>(base+0x278190)(this);
}

void MenuGameLayer::update(float p0) {
    return reinterpret_cast<void(*)(MenuGameLayer*, float)>(base+0x28fa70)(this, p0);
}

bool MenuGameLayer::init() {
    return reinterpret_cast<bool(*)(MenuGameLayer*)>(base+0x28f150)(this);
}

void MenuGameLayer::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(MenuGameLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x290650)(this, p0, p1);
}

void MenuGameLayer::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(MenuGameLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x290770)(this, p0, p1);
}

void MenuGameLayer::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(MenuGameLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x290790)(this, p0, p1);
}

void MenuGameLayer::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(MenuGameLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x2907b0)(this, p0, p1);
}

void MenuGameLayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(MenuGameLayer*)>(base+0x2907f0)(this);
}

bool MyLevelsLayer::init() {
    return reinterpret_cast<bool(*)(MyLevelsLayer*)>(base+0x35470)(this);
}

void MyLevelsLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(MyLevelsLayer*)>(base+0x35b90)(this);
}

bool ObjectDecoder::init() {
    return reinterpret_cast<bool(*)(ObjectDecoder*)>(base+0x437f80)(this);
}

bool ObjectManager::init() {
    return reinterpret_cast<bool(*)(ObjectManager*)>(base+0x43b280)(this);
}

bool ObjectToolbox::init() {
    return reinterpret_cast<bool(*)(ObjectToolbox*)>(base+0x3b2d80)(this);
}

void SongInfoLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(SongInfoLayer*)>(base+0x36a980)(this);
}

bool TutorialLayer::init() {
    return reinterpret_cast<bool(*)(TutorialLayer*)>(base+0x286e00)(this);
}

void TutorialLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(TutorialLayer*)>(base+0x2878d0)(this);
}

void TutorialPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(TutorialPopup*)>(base+0x344ae0)(this);
}

void TutorialPopup::show() {
    return reinterpret_cast<void(*)(TutorialPopup*)>(base+0x344bb0)(this);
}

void AchievementBar::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(AchievementBar*, unsigned char)>(base+0x37b9b0)(this, p0);
}

void CCContentLayer::setPosition(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(CCContentLayer*, cocos2d::CCPoint const&)>(base+0x464c60)(this, p0);
}

bool ChallengesPage::init() {
    return reinterpret_cast<bool(*)(ChallengesPage*)>(base+0x1db520)(this);
}

void ChallengesPage::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(ChallengesPage*)>(base+0x1dcc50)(this);
}

void ChallengesPage::keyBackClicked() {
    return reinterpret_cast<void(*)(ChallengesPage*)>(base+0x1dcbc0)(this);
}

void ChallengesPage::show() {
    return reinterpret_cast<void(*)(ChallengesPage*)>(base+0x1dca10)(this);
}

void ChallengesPage::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(ChallengesPage*, FLAlertLayer*, bool)>(base+0x1dcba0)(this, p0, p1);
}

void ChallengesPage::challengeStatusFinished() {
    return reinterpret_cast<void(*)(ChallengesPage*)>(base+0x1dc520)(this);
}

void ChallengesPage::challengeStatusFailed() {
    return reinterpret_cast<void(*)(ChallengesPage*)>(base+0x1dc830)(this);
}

void ChallengesPage::currencyWillExit(CurrencyRewardLayer* p0) {
    return reinterpret_cast<void(*)(ChallengesPage*, CurrencyRewardLayer*)>(base+0x1dcdb0)(this, p0);
}

void CustomListView::setupList() {
    return reinterpret_cast<void(*)(CustomListView*)>(base+0x116e70)(this);
}

void CustomListView::getListCell(char const* p0) {
    return reinterpret_cast<void(*)(CustomListView*, char const*)>(base+0x10d560)(this, p0);
}

void CustomListView::loadCell(TableViewCell* p0, int p1) {
    return reinterpret_cast<void(*)(CustomListView*, TableViewCell*, int)>(base+0x10e610)(this, p0, p1);
}

bool CustomSongCell::init() {
    return reinterpret_cast<bool(*)(CustomSongCell*)>(base+0x11c440)(this);
}

void CustomSongCell::draw() {
    return reinterpret_cast<void(*)(CustomSongCell*)>(base+0x11c5c0)(this);
}

void DailyLevelNode::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(DailyLevelNode*, FLAlertLayer*, bool)>(base+0x10b750)(this, p0, p1);
}

void DailyLevelPage::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(DailyLevelPage*)>(base+0x10a6f0)(this);
}

void DailyLevelPage::keyBackClicked() {
    return reinterpret_cast<void(*)(DailyLevelPage*)>(base+0x10a660)(this);
}

void DailyLevelPage::show() {
    return reinterpret_cast<void(*)(DailyLevelPage*)>(base+0x10a4b0)(this);
}

void DailyLevelPage::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(DailyLevelPage*, FLAlertLayer*, bool)>(base+0x10a640)(this, p0, p1);
}

void DailyLevelPage::dailyStatusFinished(bool p0) {
    return reinterpret_cast<void(*)(DailyLevelPage*, bool)>(base+0x109be0)(this, p0);
}

void DailyLevelPage::dailyStatusFailed(bool p0) {
    return reinterpret_cast<void(*)(DailyLevelPage*, bool)>(base+0x10a090)(this, p0);
}

void DailyLevelPage::levelDownloadFinished(GJGameLevel* p0) {
    return reinterpret_cast<void(*)(DailyLevelPage*, GJGameLevel*)>(base+0x10a1b0)(this, p0);
}

void DailyLevelPage::levelDownloadFailed(int p0) {
    return reinterpret_cast<void(*)(DailyLevelPage*, int)>(base+0x10a280)(this, p0);
}

void EditLevelLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(EditLevelLayer*)>(base+0xe6670)(this);
}

void EditLevelLayer::keyDown(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(EditLevelLayer*, cocos2d::enumKeyCodes)>(base+0xe66a0)(this, p0);
}

void EditLevelLayer::setIDPopupClosed(SetIDPopup* p0, int p1) {
    return reinterpret_cast<void(*)(EditLevelLayer*, SetIDPopup*, int)>(base+0xe6560)(this, p0, p1);
}

void EditLevelLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(EditLevelLayer*, FLAlertLayer*, bool)>(base+0xe5e70)(this, p0, p1);
}

void EditLevelLayer::textInputOpened(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(EditLevelLayer*, CCTextInputNode*)>(base+0xe5540)(this, p0);
}

void EditLevelLayer::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(EditLevelLayer*, CCTextInputNode*)>(base+0xe51e0)(this, p0);
}

void EditLevelLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(EditLevelLayer*, CCTextInputNode*)>(base+0xe57a0)(this, p0);
}

void EditLevelLayer::uploadActionFinished(int p0, int p1) {
    return reinterpret_cast<void(*)(EditLevelLayer*, int, int)>(base+0xe6740)(this, p0, p1);
}

void EditLevelLayer::uploadActionFailed(int p0, int p1) {
    return reinterpret_cast<void(*)(EditLevelLayer*, int, int)>(base+0xe68c0)(this, p0, p1);
}

void EditLevelLayer::onClosePopup(UploadActionPopup* p0) {
    return reinterpret_cast<void(*)(EditLevelLayer*, UploadActionPopup*)>(base+0xe66f0)(this, p0);
}

void GJMessagePopup::keyBackClicked() {
    return reinterpret_cast<void(*)(GJMessagePopup*)>(base+0x1504a0)(this);
}

void GJMessagePopup::downloadMessageFinished(GJUserMessage* p0) {
    return reinterpret_cast<void(*)(GJMessagePopup*, GJUserMessage*)>(base+0x150510)(this, p0);
}

void GJMessagePopup::downloadMessageFailed(int p0) {
    return reinterpret_cast<void(*)(GJMessagePopup*, int)>(base+0x1505e0)(this, p0);
}

void GJMessagePopup::uploadActionFinished(int p0, int p1) {
    return reinterpret_cast<void(*)(GJMessagePopup*, int, int)>(base+0x150680)(this, p0, p1);
}

void GJMessagePopup::uploadActionFailed(int p0, int p1) {
    return reinterpret_cast<void(*)(GJMessagePopup*, int, int)>(base+0x150820)(this, p0, p1);
}

void GJMessagePopup::onClosePopup(UploadActionPopup* p0) {
    return reinterpret_cast<void(*)(GJMessagePopup*, UploadActionPopup*)>(base+0x150900)(this, p0);
}

void GJMessagePopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(GJMessagePopup*, FLAlertLayer*, bool)>(base+0x150a00)(this, p0, p1);
}

bool GJOptionsLayer::init() {
    return reinterpret_cast<bool(*)(GJOptionsLayer*)>(base+0x145c60)(this);
}

void GJOptionsLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(GJOptionsLayer*)>(base+0x147190)(this);
}

void GJOptionsLayer::setupOptions() {
    return reinterpret_cast<void(*)(GJOptionsLayer*)>(base+0x1464d0)(this);
}

void GJOptionsLayer::onClose(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(GJOptionsLayer*, cocos2d::CCObject*)>(base+0x147160)(this, p0);
}

void GJRewardObject::encodeWithCoder(DS_Dictionary* p0) {
    return reinterpret_cast<void(*)(GJRewardObject*, DS_Dictionary*)>(base+0x4d170)(this, p0);
}

void GJRewardObject::canEncode() {
    return reinterpret_cast<void(*)(GJRewardObject*)>(base+0x4d1f0)(this);
}

bool GJScaleControl::init() {
    return reinterpret_cast<bool(*)(GJScaleControl*)>(base+0x31b30)(this);
}

void GJScaleControl::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(GJScaleControl*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x31d30)(this, p0, p1);
}

void GJScaleControl::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(GJScaleControl*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x31e60)(this, p0, p1);
}

void GJScaleControl::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(GJScaleControl*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x31fb0)(this, p0, p1);
}

void GJScaleControl::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(GJScaleControl*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x32060)(this, p0, p1);
}

bool GJSpiderSprite::init() {
    return reinterpret_cast<bool(*)(GJSpiderSprite*)>(base+0x34c700)(this);
}

void HSVWidgetPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(HSVWidgetPopup*)>(base+0x2371e0)(this);
}

void LevelInfoLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(LevelInfoLayer*)>(base+0x166160)(this);
}

void LevelInfoLayer::keyDown(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(LevelInfoLayer*, cocos2d::enumKeyCodes)>(base+0x166190)(this, p0);
}

void LevelInfoLayer::numberInputClosed(NumberInputLayer* p0) {
    return reinterpret_cast<void(*)(LevelInfoLayer*, NumberInputLayer*)>(base+0x1657a0)(this, p0);
}

void LevelInfoLayer::levelDownloadFinished(GJGameLevel* p0) {
    return reinterpret_cast<void(*)(LevelInfoLayer*, GJGameLevel*)>(base+0x164c00)(this, p0);
}

void LevelInfoLayer::levelDownloadFailed(int p0) {
    return reinterpret_cast<void(*)(LevelInfoLayer*, int)>(base+0x164d50)(this, p0);
}

void LevelInfoLayer::levelUpdateFinished(GJGameLevel* p0, UpdateResponse p1) {
    return reinterpret_cast<void(*)(LevelInfoLayer*, GJGameLevel*, UpdateResponse)>(base+0x164e60)(this, p0, p1);
}

void LevelInfoLayer::levelUpdateFailed(int p0) {
    return reinterpret_cast<void(*)(LevelInfoLayer*, int)>(base+0x165010)(this, p0);
}

void LevelInfoLayer::levelDeleteFinished(int p0) {
    return reinterpret_cast<void(*)(LevelInfoLayer*, int)>(base+0x165120)(this, p0);
}

void LevelInfoLayer::levelDeleteFailed(int p0) {
    return reinterpret_cast<void(*)(LevelInfoLayer*, int)>(base+0x165230)(this, p0);
}

void LevelInfoLayer::rateLevelClosed() {
    return reinterpret_cast<void(*)(LevelInfoLayer*)>(base+0x165e60)(this);
}

void LevelInfoLayer::likedItem(LikeItemType p0, int p1, bool p2) {
    return reinterpret_cast<void(*)(LevelInfoLayer*, LikeItemType, int, bool)>(base+0x165e90)(this, p0, p1, p2);
}

void LevelInfoLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(LevelInfoLayer*, FLAlertLayer*, bool)>(base+0x165f90)(this, p0, p1);
}

void LevelInfoLayer::setIDPopupClosed(SetIDPopup* p0, int p1) {
    return reinterpret_cast<void(*)(LevelInfoLayer*, SetIDPopup*, int)>(base+0x163e60)(this, p0, p1);
}

void RateDemonLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(RateDemonLayer*)>(base+0x12ec20)(this);
}

void RateDemonLayer::uploadActionFinished(int p0, int p1) {
    return reinterpret_cast<void(*)(RateDemonLayer*, int, int)>(base+0x12e960)(this, p0, p1);
}

void RateDemonLayer::uploadActionFailed(int p0, int p1) {
    return reinterpret_cast<void(*)(RateDemonLayer*, int, int)>(base+0x12ea40)(this, p0, p1);
}

void RateDemonLayer::onClosePopup(UploadActionPopup* p0) {
    return reinterpret_cast<void(*)(RateDemonLayer*, UploadActionPopup*)>(base+0x12eb40)(this, p0);
}

void RateLevelLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(RateLevelLayer*)>(base+0x2e2250)(this);
}

void RateStarsLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(RateStarsLayer*)>(base+0x136ec0)(this);
}

void RateStarsLayer::uploadActionFinished(int p0, int p1) {
    return reinterpret_cast<void(*)(RateStarsLayer*, int, int)>(base+0x136c10)(this, p0, p1);
}

void RateStarsLayer::uploadActionFailed(int p0, int p1) {
    return reinterpret_cast<void(*)(RateStarsLayer*, int, int)>(base+0x136cf0)(this, p0, p1);
}

void RateStarsLayer::onClosePopup(UploadActionPopup* p0) {
    return reinterpret_cast<void(*)(RateStarsLayer*, UploadActionPopup*)>(base+0x136de0)(this, p0);
}

void ScrollingLayer::draw() {
    return reinterpret_cast<void(*)(ScrollingLayer*)>(base+0x41abc0)(this);
}

void ScrollingLayer::visit() {
    return reinterpret_cast<void(*)(ScrollingLayer*)>(base+0x41acb0)(this);
}

void ScrollingLayer::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(ScrollingLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x41ae10)(this, p0, p1);
}

void ScrollingLayer::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(ScrollingLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x41afb0)(this, p0, p1);
}

void ScrollingLayer::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(ScrollingLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x41b0d0)(this, p0, p1);
}

void ScrollingLayer::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(ScrollingLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x41b110)(this, p0, p1);
}

void SelectArtLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(SelectArtLayer*)>(base+0xad440)(this);
}

void SetFolderPopup::valueChanged() {
    return reinterpret_cast<void(*)(SetFolderPopup*)>(base+0x155d40)(this);
}

void SetFolderPopup::setTextPopupClosed(SetTextPopup* p0, std::string p1) {
    return reinterpret_cast<void(*)(SetFolderPopup*, SetTextPopup*, std::string)>(base+0x1561b0)(this, p0, p1);
}

void SetItemIDLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(SetItemIDLayer*)>(base+0x5bb90)(this);
}

void SetItemIDLayer::show() {
    return reinterpret_cast<void(*)(SetItemIDLayer*)>(base+0x5bb40)(this);
}

void SetItemIDLayer::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetItemIDLayer*, CCTextInputNode*)>(base+0x5b9e0)(this, p0);
}

void SetItemIDLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetItemIDLayer*, CCTextInputNode*)>(base+0x5ba20)(this, p0);
}

void SetItemIDLayer::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(SetItemIDLayer*, CCTextInputNode*, float)>(base+0x5bca0)(this, p0, p1);
}

void SetItemIDLayer::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetItemIDLayer*, CCTextInputNode*)>(base+0x5bd60)(this, p0);
}

void SongInfoObject::encodeWithCoder(DS_Dictionary* p0) {
    return reinterpret_cast<void(*)(SongInfoObject*, DS_Dictionary*)>(base+0x2f2c70)(this, p0);
}

void SongInfoObject::canEncode() {
    return reinterpret_cast<void(*)(SongInfoObject*)>(base+0x2f2da0)(this);
}

bool StartPosObject::init() {
    return reinterpret_cast<bool(*)(StartPosObject*)>(base+0xda8a0)(this);
}

void StartPosObject::getSaveString() {
    return reinterpret_cast<void(*)(StartPosObject*)>(base+0xda960)(this);
}

void WorldLevelPage::keyBackClicked() {
    return reinterpret_cast<void(*)(WorldLevelPage*)>(base+0x204300)(this);
}

void WorldLevelPage::show() {
    return reinterpret_cast<void(*)(WorldLevelPage*)>(base+0x2041c0)(this);
}

bool AchievementCell::init() {
    return reinterpret_cast<bool(*)(AchievementCell*)>(base+0x117730)(this);
}

void AchievementCell::draw() {
    return reinterpret_cast<void(*)(AchievementCell*)>(base+0x117740)(this);
}

void BoomScrollLayer::visit() {
    return reinterpret_cast<void(*)(BoomScrollLayer*)>(base+0x1e2f80)(this);
}

void BoomScrollLayer::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(BoomScrollLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1e3c40)(this, p0, p1);
}

void BoomScrollLayer::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(BoomScrollLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1e3d90)(this, p0, p1);
}

void BoomScrollLayer::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(BoomScrollLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1e3ff0)(this, p0, p1);
}

void BoomScrollLayer::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(BoomScrollLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1e3b40)(this, p0, p1);
}

void BoomScrollLayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(BoomScrollLayer*)>(base+0x1e3970)(this);
}

bool CCNodeContainer::init() {
    return reinterpret_cast<bool(*)(CCNodeContainer*)>(base+0xba950)(this);
}

void CCNodeContainer::visit() {
    return reinterpret_cast<void(*)(CCNodeContainer*)>(base+0xba960)(this);
}

void CCSpriteWithHue::draw() {
    return reinterpret_cast<void(*)(CCSpriteWithHue*)>(base+0x35a400)(this);
}

void CCSpriteWithHue::initWithTexture(cocos2d::CCTexture2D* p0) {
    return reinterpret_cast<void(*)(CCSpriteWithHue*, cocos2d::CCTexture2D*)>(base+0x359d10)(this, p0);
}

void CCSpriteWithHue::initWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1) {
    return reinterpret_cast<void(*)(CCSpriteWithHue*, cocos2d::CCTexture2D*, cocos2d::CCRect const&)>(base+0x359d80)(this, p0, p1);
}

void CCSpriteWithHue::initWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1, bool p2) {
    return reinterpret_cast<void(*)(CCSpriteWithHue*, cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool)>(base+0x359b80)(this, p0, p1, p2);
}

void CCSpriteWithHue::initWithSpriteFrame(cocos2d::CCSpriteFrame* p0) {
    return reinterpret_cast<void(*)(CCSpriteWithHue*, cocos2d::CCSpriteFrame*)>(base+0x359da0)(this, p0);
}

void CCSpriteWithHue::updateColor() {
    return reinterpret_cast<void(*)(CCSpriteWithHue*)>(base+0x359f70)(this);
}

void CCTextInputNode::visit() {
    return reinterpret_cast<void(*)(CCTextInputNode*)>(base+0x5d380)(this);
}

void CCTextInputNode::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x5ec80)(this, p0, p1);
}

void CCTextInputNode::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x5eea0)(this, p0, p1);
}

void CCTextInputNode::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x5ee60)(this, p0, p1);
}

void CCTextInputNode::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x5ee80)(this, p0, p1);
}

void CCTextInputNode::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(CCTextInputNode*)>(base+0x5eec0)(this);
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

void CCTextInputNode::onTextFieldInsertText(cocos2d::CCTextFieldTTF* p0, char const* p1, int p2) {
    return reinterpret_cast<void(*)(CCTextInputNode*, cocos2d::CCTextFieldTTF*, char const*, int)>(base+0x5de50)(this, p0, p1, p2);
}

void CCTextInputNode::onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF* p0) {
    return reinterpret_cast<void(*)(CCTextInputNode*, cocos2d::CCTextFieldTTF*)>(base+0x5e2c0)(this, p0);
}

void CCTextInputNode::onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF* p0) {
    return reinterpret_cast<void(*)(CCTextInputNode*, cocos2d::CCTextFieldTTF*)>(base+0x5e610)(this, p0);
}

void CustomSongLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(CustomSongLayer*)>(base+0xf21c0)(this);
}

void CustomSongLayer::show() {
    return reinterpret_cast<void(*)(CustomSongLayer*)>(base+0xf22a0)(this);
}

void CustomSongLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(CustomSongLayer*, CCTextInputNode*)>(base+0xf1fb0)(this, p0);
}

void CustomSongLayer::textInputOpened(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(CustomSongLayer*, CCTextInputNode*)>(base+0xf1f10)(this, p0);
}

void CustomSongLayer::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(CustomSongLayer*, CCTextInputNode*)>(base+0xf1e70)(this, p0);
}

void CustomSongLayer::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(CustomSongLayer*, CCTextInputNode*, float)>(base+0xf1fd0)(this, p0, p1);
}

void CustomSongLayer::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(CustomSongLayer*, CCTextInputNode*)>(base+0xf2090)(this, p0);
}

void CustomSongLayer::dropDownLayerWillClose(GJDropDownLayer* p0) {
    return reinterpret_cast<void(*)(CustomSongLayer*, GJDropDownLayer*)>(base+0xf2140)(this, p0);
}

void CustomSongLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(CustomSongLayer*, FLAlertLayer*, bool)>(base+0xf1be0)(this, p0, p1);
}

bool EndPortalObject::init() {
    return reinterpret_cast<bool(*)(EndPortalObject*)>(base+0x1da980)(this);
}

void EndPortalObject::setPosition(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(EndPortalObject*, cocos2d::CCPoint const&)>(base+0x1dae70)(this, p0);
}

void EndPortalObject::setVisible(bool p0) {
    return reinterpret_cast<void(*)(EndPortalObject*, bool)>(base+0x1daf30)(this, p0);
}

void EndPortalObject::triggerObject(GJBaseGameLayer* p0) {
    return reinterpret_cast<void(*)(EndPortalObject*, GJBaseGameLayer*)>(base+0x1dadc0)(this, p0);
}

void EndPortalObject::calculateSpawnXPos() {
    return reinterpret_cast<void(*)(EndPortalObject*)>(base+0x1dae50)(this);
}

bool FileSaveManager::init() {
    return reinterpret_cast<bool(*)(FileSaveManager*)>(base+0x6360)(this);
}

void FileSaveManager::firstLoad() {
    return reinterpret_cast<void(*)(FileSaveManager*)>(base+0x6390)(this);
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

void GJChallengeItem::encodeWithCoder(DS_Dictionary* p0) {
    return reinterpret_cast<void(*)(GJChallengeItem*, DS_Dictionary*)>(base+0x4df60)(this, p0);
}

void GJChallengeItem::canEncode() {
    return reinterpret_cast<void(*)(GJChallengeItem*)>(base+0x4e020)(this);
}

void GJDropDownLayer::draw() {
    return reinterpret_cast<void(*)(GJDropDownLayer*)>(base+0x352910)(this);
}

void GJDropDownLayer::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(GJDropDownLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x352940)(this, p0, p1);
}

void GJDropDownLayer::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(GJDropDownLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x3529a0)(this, p0, p1);
}

void GJDropDownLayer::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(GJDropDownLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x352960)(this, p0, p1);
}

void GJDropDownLayer::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(GJDropDownLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x352980)(this, p0, p1);
}

void GJDropDownLayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(GJDropDownLayer*)>(base+0x3525f0)(this);
}

void GJDropDownLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(GJDropDownLayer*)>(base+0x352630)(this);
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

bool GJEffectManager::init() {
    return reinterpret_cast<bool(*)(GJEffectManager*)>(base+0x180230)(this);
}

bool GJFriendRequest::init() {
    return reinterpret_cast<bool(*)(GJFriendRequest*)>(base+0x2dea00)(this);
}

bool GJObjectDecoder::init() {
    return reinterpret_cast<bool(*)(GJObjectDecoder*)>(base+0x41e780)(this);
}

void GJObjectDecoder::getDecodedObject(int p0, DS_Dictionary* p1) {
    return reinterpret_cast<void(*)(GJObjectDecoder*, int, DS_Dictionary*)>(base+0x41e790)(this, p0, p1);
}

void InfoAlertButton::activate() {
    return reinterpret_cast<void(*)(InfoAlertButton*)>(base+0x2ecd70)(this);
}

bool LabelGameObject::init() {
    return reinterpret_cast<bool(*)(LabelGameObject*)>(base+0xdb990)(this);
}

void LabelGameObject::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(LabelGameObject*, unsigned char)>(base+0xdba40)(this, p0);
}

void LabelGameObject::setupCustomSprites() {
    return reinterpret_cast<void(*)(LabelGameObject*)>(base+0xdb9b0)(this);
}

void LabelGameObject::addMainSpriteToParent(bool p0) {
    return reinterpret_cast<void(*)(LabelGameObject*, bool)>(base+0xdbce0)(this, p0);
}

void LabelGameObject::getSaveString() {
    return reinterpret_cast<void(*)(LabelGameObject*)>(base+0xdbd50)(this);
}

void LabelGameObject::setObjectColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(LabelGameObject*, cocos2d::_ccColor3B const&)>(base+0xdbca0)(this, p0);
}

bool MoreSearchLayer::init() {
    return reinterpret_cast<bool(*)(MoreSearchLayer*)>(base+0x3896b0)(this);
}

void MoreSearchLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(MoreSearchLayer*)>(base+0x38b820)(this);
}

void MoreSearchLayer::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(MoreSearchLayer*, CCTextInputNode*, float)>(base+0x38b6b0)(this, p0, p1);
}

void MoreSearchLayer::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(MoreSearchLayer*, CCTextInputNode*)>(base+0x38b770)(this, p0);
}

void RetryLevelLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(RetryLevelLayer*)>(base+0x28ed10)(this);
}

void RetryLevelLayer::keyDown(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(RetryLevelLayer*, cocos2d::enumKeyCodes)>(base+0x28ec30)(this, p0);
}

void RetryLevelLayer::customSetup() {
    return reinterpret_cast<void(*)(RetryLevelLayer*)>(base+0x28de80)(this);
}

void RetryLevelLayer::showLayer(bool p0) {
    return reinterpret_cast<void(*)(RetryLevelLayer*, bool)>(base+0x28eaf0)(this, p0);
}

void RetryLevelLayer::enterAnimFinished() {
    return reinterpret_cast<void(*)(RetryLevelLayer*)>(base+0x28ebf0)(this);
}

void RetryLevelLayer::keyUp(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(RetryLevelLayer*, cocos2d::enumKeyCodes)>(base+0x28ecf0)(this, p0);
}

void SelectFontLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(SelectFontLayer*)>(base+0x1445f0)(this);
}

void SetGroupIDLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(SetGroupIDLayer*)>(base+0x198050)(this);
}

void SetGroupIDLayer::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetGroupIDLayer*, CCTextInputNode*)>(base+0x197ab0)(this, p0);
}

void SetGroupIDLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetGroupIDLayer*, CCTextInputNode*)>(base+0x197af0)(this, p0);
}

void SetupPulsePopup::keyBackClicked() {
    return reinterpret_cast<void(*)(SetupPulsePopup*)>(base+0x1ec840)(this);
}

void SetupPulsePopup::show() {
    return reinterpret_cast<void(*)(SetupPulsePopup*)>(base+0x1ec870)(this);
}

void SetupPulsePopup::colorValueChanged(cocos2d::_ccColor3B p0) {
    return reinterpret_cast<void(*)(SetupPulsePopup*, cocos2d::_ccColor3B)>(base+0x1ec680)(this, p0);
}

void SetupPulsePopup::textInputOpened(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupPulsePopup*, CCTextInputNode*)>(base+0x1ec900)(this, p0);
}

void SetupPulsePopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupPulsePopup*, CCTextInputNode*)>(base+0x1ec920)(this, p0);
}

void SetupPulsePopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupPulsePopup*, CCTextInputNode*)>(base+0x1ec960)(this, p0);
}

void SetupPulsePopup::colorSelectClosed(GJSpecialColorSelect* p0, int p1) {
    return reinterpret_cast<void(*)(SetupPulsePopup*, GJSpecialColorSelect*, int)>(base+0x1ebf20)(this, p0, p1);
}

void SetupPulsePopup::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(SetupPulsePopup*, CCTextInputNode*, float)>(base+0x1ecf20)(this, p0, p1);
}

void SetupPulsePopup::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupPulsePopup*, CCTextInputNode*)>(base+0x1ecfe0)(this, p0);
}

void SetupShakePopup::keyBackClicked() {
    return reinterpret_cast<void(*)(SetupShakePopup*)>(base+0x3b00d0)(this);
}

void SetupShakePopup::show() {
    return reinterpret_cast<void(*)(SetupShakePopup*)>(base+0x3b0080)(this);
}

void SetupShakePopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupShakePopup*, CCTextInputNode*)>(base+0x3afc80)(this, p0);
}

void SetupShakePopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupShakePopup*, CCTextInputNode*)>(base+0x3afcc0)(this, p0);
}

void SetupShakePopup::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(SetupShakePopup*, CCTextInputNode*, float)>(base+0x3b0260)(this, p0, p1);
}

void SetupShakePopup::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupShakePopup*, CCTextInputNode*)>(base+0x3b0320)(this, p0);
}

void SetupSpawnPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(SetupSpawnPopup*)>(base+0x13bc50)(this);
}

void SetupSpawnPopup::show() {
    return reinterpret_cast<void(*)(SetupSpawnPopup*)>(base+0x13bc00)(this);
}

void SetupSpawnPopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupSpawnPopup*, CCTextInputNode*)>(base+0x13b950)(this, p0);
}

void SetupSpawnPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupSpawnPopup*, CCTextInputNode*)>(base+0x13b990)(this, p0);
}

void SetupSpawnPopup::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(SetupSpawnPopup*, CCTextInputNode*, float)>(base+0x13bda0)(this, p0, p1);
}

void SetupSpawnPopup::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupSpawnPopup*, CCTextInputNode*)>(base+0x13be60)(this, p0);
}

void ShareLevelLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(ShareLevelLayer*)>(base+0x12b830)(this);
}

bool TopArtistsLayer::init() {
    return reinterpret_cast<bool(*)(TopArtistsLayer*)>(base+0x192c30)(this);
}

void TopArtistsLayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(TopArtistsLayer*)>(base+0x1935b0)(this);
}

void TopArtistsLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(TopArtistsLayer*)>(base+0x193540)(this);
}

void TopArtistsLayer::show() {
    return reinterpret_cast<void(*)(TopArtistsLayer*)>(base+0x193e40)(this);
}

void TopArtistsLayer::loadListFinished(cocos2d::CCArray* p0, char const* p1) {
    return reinterpret_cast<void(*)(TopArtistsLayer*, cocos2d::CCArray*, char const*)>(base+0x193600)(this, p0, p1);
}

void TopArtistsLayer::loadListFailed(char const* p0) {
    return reinterpret_cast<void(*)(TopArtistsLayer*, char const*)>(base+0x1936f0)(this, p0);
}

void TopArtistsLayer::setupPageInfo(std::string p0, char const* p1) {
    return reinterpret_cast<void(*)(TopArtistsLayer*, std::string, char const*)>(base+0x193730)(this, p0, p1);
}

void AccountHelpLayer::customSetup() {
    return reinterpret_cast<void(*)(AccountHelpLayer*)>(base+0x83e80)(this);
}

void AccountHelpLayer::layerHidden() {
    return reinterpret_cast<void(*)(AccountHelpLayer*)>(base+0x84b60)(this);
}

void AccountHelpLayer::accountStatusChanged() {
    return reinterpret_cast<void(*)(AccountHelpLayer*)>(base+0x84a20)(this);
}

void AccountHelpLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(AccountHelpLayer*, FLAlertLayer*, bool)>(base+0x84a50)(this, p0, p1);
}

void CCAnimatedSprite::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(CCAnimatedSprite*, unsigned char)>(base+0x1a6af0)(this, p0);
}

void CCAnimatedSprite::animationFinished(char const* p0) {
    return reinterpret_cast<void(*)(CCAnimatedSprite*, char const*)>(base+0x1a6ad0)(this, p0);
}

void CCAnimatedSprite::animationFinishedO(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(CCAnimatedSprite*, cocos2d::CCObject*)>(base+0x1a6aa0)(this, p0);
}

void CCPartAnimSprite::setScaleX(float p0) {
    return reinterpret_cast<void(*)(CCPartAnimSprite*, float)>(base+0x1bff50)(this, p0);
}

void CCPartAnimSprite::setScaleY(float p0) {
    return reinterpret_cast<void(*)(CCPartAnimSprite*, float)>(base+0x1bff70)(this, p0);
}

void CCPartAnimSprite::setScale(float p0) {
    return reinterpret_cast<void(*)(CCPartAnimSprite*, float)>(base+0x1bff30)(this, p0);
}

void CCPartAnimSprite::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(CCPartAnimSprite*, unsigned char)>(base+0x1c01d0)(this, p0);
}

void CCPartAnimSprite::setBlendFunc(cocos2d::_ccBlendFunc p0) {
    return reinterpret_cast<void(*)(CCPartAnimSprite*, cocos2d::_ccBlendFunc)>(base+0x1bff90)(this, p0);
}

void CCPartAnimSprite::setDisplayFrame(cocos2d::CCSpriteFrame* p0) {
    return reinterpret_cast<void(*)(CCPartAnimSprite*, cocos2d::CCSpriteFrame*)>(base+0x1bfa40)(this, p0);
}

void CCPartAnimSprite::isFrameDisplayed(cocos2d::CCSpriteFrame* p0) {
    return reinterpret_cast<void(*)(CCPartAnimSprite*, cocos2d::CCSpriteFrame*)>(base+0x1bfc20)(this, p0);
}

void CCPartAnimSprite::displayFrame() {
    return reinterpret_cast<void(*)(CCPartAnimSprite*)>(base+0x1bfc40)(this);
}

void CCScrollLayerExt::visit() {
    return reinterpret_cast<void(*)(CCScrollLayerExt*)>(base+0x236550)(this);
}

void CCScrollLayerExt::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CCScrollLayerExt*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x235ef0)(this, p0, p1);
}

void CCScrollLayerExt::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CCScrollLayerExt*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x236300)(this, p0, p1);
}

void CCScrollLayerExt::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CCScrollLayerExt*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x236020)(this, p0, p1);
}

void CCScrollLayerExt::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CCScrollLayerExt*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x2362a0)(this, p0, p1);
}

void CCScrollLayerExt::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(CCScrollLayerExt*)>(base+0x235eb0)(this);
}

void CCScrollLayerExt::preVisitWithClippingRect(cocos2d::CCRect p0) {
    return reinterpret_cast<void(*)(CCScrollLayerExt*, cocos2d::CCRect)>(base+0x2366a0)(this, p0);
}

void CCScrollLayerExt::postVisit() {
    return reinterpret_cast<void(*)(CCScrollLayerExt*)>(base+0x236720)(this);
}

bool CheckpointObject::init() {
    return reinterpret_cast<bool(*)(CheckpointObject*)>(base+0x80920)(this);
}

void ColorSelectPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(ColorSelectPopup*)>(base+0x423540)(this);
}

void ColorSelectPopup::show() {
    return reinterpret_cast<void(*)(ColorSelectPopup*)>(base+0x423570)(this);
}

void ColorSelectPopup::colorValueChanged(cocos2d::_ccColor3B p0) {
    return reinterpret_cast<void(*)(ColorSelectPopup*, cocos2d::_ccColor3B)>(base+0x423320)(this, p0);
}

void ColorSelectPopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(ColorSelectPopup*, CCTextInputNode*)>(base+0x423820)(this, p0);
}

void ColorSelectPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(ColorSelectPopup*, CCTextInputNode*)>(base+0x423860)(this, p0);
}

void ColorSelectPopup::colorSelectClosed(GJSpecialColorSelect* p0, int p1) {
    return reinterpret_cast<void(*)(ColorSelectPopup*, GJSpecialColorSelect*, int)>(base+0x423c80)(this, p0, p1);
}

void ColorSelectPopup::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(ColorSelectPopup*, CCTextInputNode*, float)>(base+0x423fa0)(this, p0, p1);
}

void ColorSelectPopup::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(ColorSelectPopup*, CCTextInputNode*)>(base+0x424060)(this, p0);
}

void CustomSongWidget::loadSongInfoFinished(SongInfoObject* p0) {
    return reinterpret_cast<void(*)(CustomSongWidget*, SongInfoObject*)>(base+0x37e400)(this, p0);
}

void CustomSongWidget::loadSongInfoFailed(int p0, GJSongError p1) {
    return reinterpret_cast<void(*)(CustomSongWidget*, int, GJSongError)>(base+0x37e5a0)(this, p0, p1);
}

void CustomSongWidget::downloadSongFinished(SongInfoObject* p0) {
    return reinterpret_cast<void(*)(CustomSongWidget*, SongInfoObject*)>(base+0x37e7b0)(this, p0);
}

void CustomSongWidget::downloadSongFailed(int p0, GJSongError p1) {
    return reinterpret_cast<void(*)(CustomSongWidget*, int, GJSongError)>(base+0x37e8c0)(this, p0, p1);
}

void CustomSongWidget::songStateChanged() {
    return reinterpret_cast<void(*)(CustomSongWidget*)>(base+0x37e390)(this);
}

void CustomSongWidget::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(CustomSongWidget*, FLAlertLayer*, bool)>(base+0x37ea00)(this, p0, p1);
}

void EditorPauseLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(EditorPauseLayer*)>(base+0x13f320)(this);
}

void EditorPauseLayer::keyDown(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(EditorPauseLayer*, cocos2d::enumKeyCodes)>(base+0x13f3a0)(this, p0);
}

void EditorPauseLayer::customSetup() {
    return reinterpret_cast<void(*)(EditorPauseLayer*)>(base+0x13cc00)(this);
}

void EditorPauseLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(EditorPauseLayer*, FLAlertLayer*, bool)>(base+0x13f1b0)(this, p0, p1);
}

void EffectGameObject::customSetup() {
    return reinterpret_cast<void(*)(EffectGameObject*)>(base+0xca370)(this);
}

void EffectGameObject::triggerObject(GJBaseGameLayer* p0) {
    return reinterpret_cast<void(*)(EffectGameObject*, GJBaseGameLayer*)>(base+0xc9870)(this, p0);
}

void EffectGameObject::getSaveString() {
    return reinterpret_cast<void(*)(EffectGameObject*)>(base+0xcd7e0)(this);
}

void EffectGameObject::triggerActivated(float p0) {
    return reinterpret_cast<void(*)(EffectGameObject*, float)>(base+0xca310)(this, p0);
}

void EffectGameObject::spawnXPosition() {
    return reinterpret_cast<void(*)(EffectGameObject*)>(base+0xca2d0)(this);
}

bool FollowRewardPage::init() {
    return reinterpret_cast<bool(*)(FollowRewardPage*)>(base+0x22f4a0)(this);
}

void FollowRewardPage::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(FollowRewardPage*)>(base+0x230eb0)(this);
}

void FollowRewardPage::keyBackClicked() {
    return reinterpret_cast<void(*)(FollowRewardPage*)>(base+0x230e40)(this);
}

void FollowRewardPage::show() {
    return reinterpret_cast<void(*)(FollowRewardPage*)>(base+0x230c10)(this);
}

void FollowRewardPage::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(FollowRewardPage*, FLAlertLayer*, bool)>(base+0x230da0)(this, p0, p1);
}

void FollowRewardPage::updateRate() {
    return reinterpret_cast<void(*)(FollowRewardPage*)>(base+0x230950)(this);
}

bool GJAccountManager::init() {
    return reinterpret_cast<bool(*)(GJAccountManager*)>(base+0x879d0)(this);
}

bool GJFlyGroundLayer::init() {
    return reinterpret_cast<bool(*)(GJFlyGroundLayer*)>(base+0x356c00)(this);
}

bool GJLevelScoreCell::init() {
    return reinterpret_cast<bool(*)(GJLevelScoreCell*)>(base+0x11dbb0)(this);
}

void GJLevelScoreCell::draw() {
    return reinterpret_cast<void(*)(GJLevelScoreCell*)>(base+0x11dc00)(this);
}

void GJMoreGamesLayer::customSetup() {
    return reinterpret_cast<void(*)(GJMoreGamesLayer*)>(base+0x43ae60)(this);
}

bool GameLevelManager::init() {
    return reinterpret_cast<bool(*)(GameLevelManager*)>(base+0x2b7ba0)(this);
}

bool GameSoundManager::init() {
    return reinterpret_cast<bool(*)(GameSoundManager*)>(base+0x3611d0)(this);
}

bool GameStatsManager::init() {
    return reinterpret_cast<bool(*)(GameStatsManager*)>(base+0x39330)(this);
}

bool GhostTrailEffect::init() {
    return reinterpret_cast<bool(*)(GhostTrailEffect*)>(base+0x360730)(this);
}

void GhostTrailEffect::draw() {
    return reinterpret_cast<void(*)(GhostTrailEffect*)>(base+0x360d20)(this);
}

bool KeybindingsLayer::init() {
    return reinterpret_cast<bool(*)(KeybindingsLayer*)>(base+0x375890)(this);
}

void KeybindingsLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(KeybindingsLayer*)>(base+0x376f30)(this);
}

void LevelEditorLayer::update(float p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, float)>(base+0xa1b70)(this, p0);
}

void LevelEditorLayer::draw() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0xa2a70)(this);
}

void LevelEditorLayer::updateColor(cocos2d::_ccColor3B p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue p5, int p6, bool p7, int p8, EffectGameObject* p9) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)>(base+0x9c200)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
}

void LevelEditorLayer::flipGravity(PlayerObject* p0, bool p1, bool p2) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, PlayerObject*, bool, bool)>(base+0xa04e0)(this, p0, p1, p2);
}

void LevelEditorLayer::calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)>(base+0x9c590)(this, p0, p1, p2, p3, p4, p5);
}

void LevelEditorLayer::addToGroup(GameObject* p0, int p1, bool p2) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, GameObject*, int, bool)>(base+0x9dab0)(this, p0, p1, p2);
}

void LevelEditorLayer::removeFromGroup(GameObject* p0, int p1) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, GameObject*, int)>(base+0x9db60)(this, p0, p1);
}

void LevelEditorLayer::timeForXPos(float p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, float)>(base+0x9c7d0)(this, p0);
}

void LevelEditorLayer::xPosForTime(float p0) {
    return reinterpret_cast<void(*)(LevelEditorLayer*, float)>(base+0x9c800)(this, p0);
}

void LevelEditorLayer::levelSettingsUpdated() {
    return reinterpret_cast<void(*)(LevelEditorLayer*)>(base+0x93f30)(this);
}

void LevelLeaderboard::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(LevelLeaderboard*)>(base+0x20e7a0)(this);
}

void LevelLeaderboard::keyBackClicked() {
    return reinterpret_cast<void(*)(LevelLeaderboard*)>(base+0x20e730)(this);
}

void LevelLeaderboard::show() {
    return reinterpret_cast<void(*)(LevelLeaderboard*)>(base+0x20ec40)(this);
}

void LevelLeaderboard::loadLeaderboardFinished(cocos2d::CCArray* p0, char const* p1) {
    return reinterpret_cast<void(*)(LevelLeaderboard*, cocos2d::CCArray*, char const*)>(base+0x20e980)(this, p0, p1);
}

void LevelLeaderboard::loadLeaderboardFailed(char const* p0) {
    return reinterpret_cast<void(*)(LevelLeaderboard*, char const*)>(base+0x20ead0)(this, p0);
}

void LevelLeaderboard::updateUserScoreFinished() {
    return reinterpret_cast<void(*)(LevelLeaderboard*)>(base+0x20e660)(this);
}

void LevelLeaderboard::updateUserScoreFailed() {
    return reinterpret_cast<void(*)(LevelLeaderboard*)>(base+0x20e690)(this);
}

bool LevelSearchLayer::init() {
    return reinterpret_cast<bool(*)(LevelSearchLayer*)>(base+0x384770)(this);
}

void LevelSearchLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(LevelSearchLayer*)>(base+0x3891f0)(this);
}

void LevelSearchLayer::textInputOpened(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(LevelSearchLayer*, CCTextInputNode*)>(base+0x3885f0)(this, p0);
}

void LevelSearchLayer::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(LevelSearchLayer*, CCTextInputNode*)>(base+0x3887f0)(this, p0);
}

void LevelSearchLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(LevelSearchLayer*, CCTextInputNode*)>(base+0x388910)(this, p0);
}

void LevelSearchLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(LevelSearchLayer*, FLAlertLayer*, bool)>(base+0x388580)(this, p0, p1);
}

void LevelSearchLayer::demonFilterSelectClosed(int p0) {
    return reinterpret_cast<void(*)(LevelSearchLayer*, int)>(base+0x388040)(this, p0);
}

void LevelSelectLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(LevelSelectLayer*)>(base+0x23a5e0)(this);
}

void LevelSelectLayer::keyDown(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(LevelSelectLayer*, cocos2d::enumKeyCodes)>(base+0x23a680)(this, p0);
}

void LevelSelectLayer::updatePageWithObject(cocos2d::CCObject* p0, cocos2d::CCObject* p1) {
    return reinterpret_cast<void(*)(LevelSelectLayer*, cocos2d::CCObject*, cocos2d::CCObject*)>(base+0x2390a0)(this, p0, p1);
}

void LevelSelectLayer::scrollLayerMoved(cocos2d::CCPoint p0) {
    return reinterpret_cast<void(*)(LevelSelectLayer*, cocos2d::CCPoint)>(base+0x23a100)(this, p0);
}

bool MoreOptionsLayer::init() {
    return reinterpret_cast<bool(*)(MoreOptionsLayer*)>(base+0x43f470)(this);
}

void MoreOptionsLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(MoreOptionsLayer*)>(base+0x441f50)(this);
}

void MoreOptionsLayer::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(MoreOptionsLayer*, CCTextInputNode*, float)>(base+0x4420a0)(this, p0, p1);
}

void MoreOptionsLayer::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(MoreOptionsLayer*, CCTextInputNode*)>(base+0x442160)(this, p0);
}

void MoreOptionsLayer::googlePlaySignedIn() {
    return reinterpret_cast<void(*)(MoreOptionsLayer*)>(base+0x442210)(this);
}

bool NumberInputLayer::init() {
    return reinterpret_cast<bool(*)(NumberInputLayer*)>(base+0x255ff0)(this);
}

void NumberInputLayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(NumberInputLayer*)>(base+0x256a70)(this);
}

void NumberInputLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(NumberInputLayer*)>(base+0x2569c0)(this);
}

bool PlayerCheckpoint::init() {
    return reinterpret_cast<bool(*)(PlayerCheckpoint*)>(base+0x807a0)(this);
}

void SetTargetIDLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(SetTargetIDLayer*)>(base+0x15b990)(this);
}

void SetTargetIDLayer::show() {
    return reinterpret_cast<void(*)(SetTargetIDLayer*)>(base+0x15b940)(this);
}

void SetTargetIDLayer::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetTargetIDLayer*, CCTextInputNode*)>(base+0x15b680)(this, p0);
}

void SetTargetIDLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetTargetIDLayer*, CCTextInputNode*)>(base+0x15b6c0)(this, p0);
}

void SetTargetIDLayer::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(SetTargetIDLayer*, CCTextInputNode*, float)>(base+0x15baa0)(this, p0, p1);
}

void SetTargetIDLayer::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetTargetIDLayer*, CCTextInputNode*)>(base+0x15bb60)(this, p0);
}

void SetupRotatePopup::keyBackClicked() {
    return reinterpret_cast<void(*)(SetupRotatePopup*)>(base+0x2f47c0)(this);
}

void SetupRotatePopup::show() {
    return reinterpret_cast<void(*)(SetupRotatePopup*)>(base+0x2f4770)(this);
}

void SetupRotatePopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupRotatePopup*, CCTextInputNode*)>(base+0x2f45d0)(this, p0);
}

void SetupRotatePopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupRotatePopup*, CCTextInputNode*)>(base+0x2f4610)(this, p0);
}

void SetupRotatePopup::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(SetupRotatePopup*, CCTextInputNode*, float)>(base+0x2f48b0)(this, p0, p1);
}

void SetupRotatePopup::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupRotatePopup*, CCTextInputNode*)>(base+0x2f4970)(this, p0);
}

void SliderTouchLogic::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(SliderTouchLogic*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x18d630)(this, p0, p1);
}

void SliderTouchLogic::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(SliderTouchLogic*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x18d760)(this, p0, p1);
}

void SliderTouchLogic::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(SliderTouchLogic*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x18d730)(this, p0, p1);
}

void SliderTouchLogic::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(SliderTouchLogic*)>(base+0x18da90)(this);
}

void SongOptionsLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(SongOptionsLayer*)>(base+0xf33c0)(this);
}

void WorldSelectLayer::onExit() {
    return reinterpret_cast<void(*)(WorldSelectLayer*)>(base+0x201320)(this);
}

void WorldSelectLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(WorldSelectLayer*)>(base+0x201250)(this);
}

void WorldSelectLayer::scrollLayerWillScrollToPage(BoomScrollLayer* p0, int p1) {
    return reinterpret_cast<void(*)(WorldSelectLayer*, BoomScrollLayer*, int)>(base+0x201140)(this, p0, p1);
}

void WorldSelectLayer::scrollLayerScrolledToPage(BoomScrollLayer* p0, int p1) {
    return reinterpret_cast<void(*)(WorldSelectLayer*, BoomScrollLayer*, int)>(base+0x201030)(this, p0, p1);
}

void WorldSelectLayer::scrollLayerMoved(cocos2d::CCPoint p0) {
    return reinterpret_cast<void(*)(WorldSelectLayer*, cocos2d::CCPoint)>(base+0x201370)(this, p0);
}

void AccountLoginLayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(AccountLoginLayer*)>(base+0x25d7e0)(this);
}

void AccountLoginLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(AccountLoginLayer*)>(base+0x25d6a0)(this);
}

void AccountLoginLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(AccountLoginLayer*, FLAlertLayer*, bool)>(base+0x25d4d0)(this, p0, p1);
}

void AccountLoginLayer::textInputOpened(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(AccountLoginLayer*, CCTextInputNode*)>(base+0x25d9c0)(this, p0);
}

void AccountLoginLayer::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(AccountLoginLayer*, CCTextInputNode*)>(base+0x25d820)(this, p0);
}

void AccountLoginLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(AccountLoginLayer*, CCTextInputNode*)>(base+0x25d9e0)(this, p0);
}

void AccountLoginLayer::loginAccountFinished(int p0, int p1) {
    return reinterpret_cast<void(*)(AccountLoginLayer*, int, int)>(base+0x25ce20)(this, p0, p1);
}

void AccountLoginLayer::loginAccountFailed(AccountError p0) {
    return reinterpret_cast<void(*)(AccountLoginLayer*, AccountError)>(base+0x25d190)(this, p0);
}

void AchievementsLayer::keyDown(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(AchievementsLayer*, cocos2d::enumKeyCodes)>(base+0x1be380)(this, p0);
}

void AchievementsLayer::customSetup() {
    return reinterpret_cast<void(*)(AchievementsLayer*)>(base+0x1bdea0)(this);
}

void AudioEffectsLayer::draw() {
    return reinterpret_cast<void(*)(AudioEffectsLayer*)>(base+0x2722a0)(this);
}

void AudioEffectsLayer::updateTweenAction(float p0, char const* p1) {
    return reinterpret_cast<void(*)(AudioEffectsLayer*, float, char const*)>(base+0x272170)(this, p0, p1);
}

void CCMenuItemToggler::activate() {
    return reinterpret_cast<void(*)(CCMenuItemToggler*)>(base+0x38bc0)(this);
}

void CCMenuItemToggler::selected() {
    return reinterpret_cast<void(*)(CCMenuItemToggler*)>(base+0x38b80)(this);
}

void CCMenuItemToggler::unselected() {
    return reinterpret_cast<void(*)(CCMenuItemToggler*)>(base+0x38c00)(this);
}

void CCMenuItemToggler::setEnabled(bool p0) {
    return reinterpret_cast<void(*)(CCMenuItemToggler*, bool)>(base+0x38c40)(this, p0);
}

bool ColorActionSprite::init() {
    return reinterpret_cast<bool(*)(ColorActionSprite*)>(base+0x175370)(this);
}

bool DungeonBarsSprite::init() {
    return reinterpret_cast<bool(*)(DungeonBarsSprite*)>(base+0x26c2b0)(this);
}

void DungeonBarsSprite::visit() {
    return reinterpret_cast<void(*)(DungeonBarsSprite*)>(base+0x26c330)(this);
}

void EditTriggersPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(EditTriggersPopup*)>(base+0x1458a0)(this);
}

void EditTriggersPopup::show() {
    return reinterpret_cast<void(*)(EditTriggersPopup*)>(base+0x145850)(this);
}

void GJColorSetupLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(GJColorSetupLayer*)>(base+0xf0210)(this);
}

void GJColorSetupLayer::colorSelectClosed(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(GJColorSetupLayer*, cocos2d::CCNode*)>(base+0xf01e0)(this, p0);
}

bool GJRotationControl::init() {
    return reinterpret_cast<bool(*)(GJRotationControl*)>(base+0x31510)(this);
}

void GJRotationControl::draw() {
    return reinterpret_cast<void(*)(GJRotationControl*)>(base+0x31ac0)(this);
}

void GJRotationControl::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(GJRotationControl*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x31790)(this, p0, p1);
}

void GJRotationControl::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(GJRotationControl*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x318b0)(this, p0, p1);
}

void GJRotationControl::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(GJRotationControl*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x31990)(this, p0, p1);
}

void GJRotationControl::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(GJRotationControl*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x31a80)(this, p0, p1);
}

bool GooglePlayManager::init() {
    return reinterpret_cast<bool(*)(GooglePlayManager*)>(base+0x246130)(this);
}

void LeaderboardsLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(LeaderboardsLayer*)>(base+0x2a11c0)(this);
}

void LeaderboardsLayer::updateUserScoreFinished() {
    return reinterpret_cast<void(*)(LeaderboardsLayer*)>(base+0x2a07c0)(this);
}

void LeaderboardsLayer::updateUserScoreFailed() {
    return reinterpret_cast<void(*)(LeaderboardsLayer*)>(base+0x2a0820)(this);
}

void LeaderboardsLayer::loadLeaderboardFinished(cocos2d::CCArray* p0, char const* p1) {
    return reinterpret_cast<void(*)(LeaderboardsLayer*, cocos2d::CCArray*, char const*)>(base+0x2a08c0)(this, p0, p1);
}

void LeaderboardsLayer::loadLeaderboardFailed(char const* p0) {
    return reinterpret_cast<void(*)(LeaderboardsLayer*, char const*)>(base+0x2a0fa0)(this, p0);
}

void LevelBrowserLayer::onEnter() {
    return reinterpret_cast<void(*)(LevelBrowserLayer*)>(base+0x255b70)(this);
}

void LevelBrowserLayer::onEnterTransitionDidFinish() {
    return reinterpret_cast<void(*)(LevelBrowserLayer*)>(base+0x255be0)(this);
}

void LevelBrowserLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(LevelBrowserLayer*)>(base+0x255630)(this);
}

void LevelBrowserLayer::keyDown(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(LevelBrowserLayer*, cocos2d::enumKeyCodes)>(base+0x255680)(this, p0);
}

void LevelBrowserLayer::loadLevelsFinished(cocos2d::CCArray* p0, char const* p1) {
    return reinterpret_cast<void(*)(LevelBrowserLayer*, cocos2d::CCArray*, char const*)>(base+0x254e10)(this, p0, p1);
}

void LevelBrowserLayer::loadLevelsFailed(char const* p0) {
    return reinterpret_cast<void(*)(LevelBrowserLayer*, char const*)>(base+0x254f60)(this, p0);
}

void LevelBrowserLayer::setupPageInfo(std::string p0, char const* p1) {
    return reinterpret_cast<void(*)(LevelBrowserLayer*, std::string, char const*)>(base+0x255050)(this, p0, p1);
}

void LevelBrowserLayer::setTextPopupClosed(SetTextPopup* p0, std::string p1) {
    return reinterpret_cast<void(*)(LevelBrowserLayer*, SetTextPopup*, std::string)>(base+0x255760)(this, p0, p1);
}

void LevelBrowserLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(LevelBrowserLayer*, FLAlertLayer*, bool)>(base+0x255840)(this, p0, p1);
}

void LevelBrowserLayer::setIDPopupClosed(SetIDPopup* p0, int p1) {
    return reinterpret_cast<void(*)(LevelBrowserLayer*, SetIDPopup*, int)>(base+0x2554f0)(this, p0, p1);
}

void LevelFeatureLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(LevelFeatureLayer*)>(base+0x297a00)(this);
}

bool LocalLevelManager::init() {
    return reinterpret_cast<bool(*)(LocalLevelManager*)>(base+0x35dfc0)(this);
}

void LocalLevelManager::encodeDataTo(DS_Dictionary* p0) {
    return reinterpret_cast<void(*)(LocalLevelManager*, DS_Dictionary*)>(base+0x35ed60)(this, p0);
}

void LocalLevelManager::dataLoaded(DS_Dictionary* p0) {
    return reinterpret_cast<void(*)(LocalLevelManager*, DS_Dictionary*)>(base+0x35eda0)(this, p0);
}

void LocalLevelManager::firstLoad() {
    return reinterpret_cast<void(*)(LocalLevelManager*)>(base+0x35ed10)(this);
}

void PromoInterstitial::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(PromoInterstitial*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x169e80)(this, p0, p1);
}

void PromoInterstitial::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(PromoInterstitial*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x16a0c0)(this, p0, p1);
}

void PromoInterstitial::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(PromoInterstitial*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x169fa0)(this, p0, p1);
}

void PromoInterstitial::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(PromoInterstitial*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x16a040)(this, p0, p1);
}

void PromoInterstitial::keyBackClicked() {
    return reinterpret_cast<void(*)(PromoInterstitial*)>(base+0x169cf0)(this);
}

void PromoInterstitial::show() {
    return reinterpret_cast<void(*)(PromoInterstitial*)>(base+0x169cc0)(this);
}

void PurchaseItemPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(PurchaseItemPopup*)>(base+0x1a2fc0)(this);
}

void RewardUnlockLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(RewardUnlockLayer*)>(base+0xf81b0)(this);
}

void RewardUnlockLayer::currencyWillExit(CurrencyRewardLayer* p0) {
    return reinterpret_cast<void(*)(RewardUnlockLayer*, CurrencyRewardLayer*)>(base+0xf8170)(this, p0);
}

bool SecretNumberLayer::init() {
    return reinterpret_cast<bool(*)(SecretNumberLayer*)>(base+0x266c30)(this);
}

void SetupOpacityPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(SetupOpacityPopup*)>(base+0x34bf0)(this);
}

void SetupOpacityPopup::show() {
    return reinterpret_cast<void(*)(SetupOpacityPopup*)>(base+0x34ba0)(this);
}

void SetupOpacityPopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupOpacityPopup*, CCTextInputNode*)>(base+0x34a20)(this, p0);
}

void SetupOpacityPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupOpacityPopup*, CCTextInputNode*)>(base+0x34a60)(this, p0);
}

void SetupOpacityPopup::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(SetupOpacityPopup*, CCTextInputNode*, float)>(base+0x34e50)(this, p0, p1);
}

void SetupOpacityPopup::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupOpacityPopup*, CCTextInputNode*)>(base+0x34f10)(this, p0);
}

void ShareCommentLayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(ShareCommentLayer*)>(base+0x350590)(this);
}

void ShareCommentLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(ShareCommentLayer*)>(base+0x3504e0)(this);
}

void ShareCommentLayer::textInputOpened(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(ShareCommentLayer*, CCTextInputNode*)>(base+0x350690)(this, p0);
}

void ShareCommentLayer::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(ShareCommentLayer*, CCTextInputNode*)>(base+0x3505d0)(this, p0);
}

void ShareCommentLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(ShareCommentLayer*, CCTextInputNode*)>(base+0x3507b0)(this, p0);
}

void ShareCommentLayer::uploadActionFinished(int p0, int p1) {
    return reinterpret_cast<void(*)(ShareCommentLayer*, int, int)>(base+0x3509f0)(this, p0, p1);
}

void ShareCommentLayer::uploadActionFailed(int p0, int p1) {
    return reinterpret_cast<void(*)(ShareCommentLayer*, int, int)>(base+0x350ad0)(this, p0, p1);
}

void ShareCommentLayer::onClosePopup(UploadActionPopup* p0) {
    return reinterpret_cast<void(*)(ShareCommentLayer*, UploadActionPopup*)>(base+0x350ba0)(this, p0);
}

void TableViewDelegate::willTweenToIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2) {
    return reinterpret_cast<void(*)(TableViewDelegate*, CCIndexPath&, TableViewCell*, TableView*)>(base+0x120460)(this, p0, p1, p2);
}

void TableViewDelegate::didEndTweenToIndexPath(CCIndexPath& p0, TableView* p1) {
    return reinterpret_cast<void(*)(TableViewDelegate*, CCIndexPath&, TableView*)>(base+0x120470)(this, p0, p1);
}

void TableViewDelegate::TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2) {
    return reinterpret_cast<void(*)(TableViewDelegate*, CCIndexPath&, TableViewCell*, TableView*)>(base+0x120480)(this, p0, p1, p2);
}

void TextInputDelegate::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(TextInputDelegate*, CCTextInputNode*)>(base+0x1573f0)(this, p0);
}

void TextInputDelegate::textInputOpened(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(TextInputDelegate*, CCTextInputNode*)>(base+0x6200)(this, p0);
}

void TextInputDelegate::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(TextInputDelegate*, CCTextInputNode*)>(base+0x157400)(this, p0);
}

void TextInputDelegate::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(TextInputDelegate*, CCTextInputNode*, float)>(base+0xe1810)(this, p0, p1);
}

void TextInputDelegate::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(TextInputDelegate*, CCTextInputNode*)>(base+0xe1820)(this, p0);
}

void TextInputDelegate::allowTextInput(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(TextInputDelegate*, CCTextInputNode*)>(base+0x6210)(this, p0);
}

void UploadActionPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(UploadActionPopup*)>(base+0x14ca10)(this);
}

bool VideoOptionsLayer::init() {
    return reinterpret_cast<bool(*)(VideoOptionsLayer*)>(base+0x442460)(this);
}

void VideoOptionsLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(VideoOptionsLayer*)>(base+0x443f50)(this);
}

bool AchievementManager::init() {
    return reinterpret_cast<bool(*)(AchievementManager*)>(base+0x4244c0)(this);
}

void AnimatedGameObject::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(AnimatedGameObject*, unsigned char)>(base+0xc8640)(this, p0);
}

void AnimatedGameObject::resetObject() {
    return reinterpret_cast<void(*)(AnimatedGameObject*)>(base+0xc9720)(this);
}

void AnimatedGameObject::activateObject() {
    return reinterpret_cast<void(*)(AnimatedGameObject*)>(base+0xc84d0)(this);
}

void AnimatedGameObject::deactivateObject(bool p0) {
    return reinterpret_cast<void(*)(AnimatedGameObject*, bool)>(base+0xc85e0)(this, p0);
}

void AnimatedGameObject::setObjectColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(AnimatedGameObject*, cocos2d::_ccColor3B const&)>(base+0xc8720)(this, p0);
}

void AnimatedGameObject::animationFinished(char const* p0) {
    return reinterpret_cast<void(*)(AnimatedGameObject*, char const*)>(base+0xc8750)(this, p0);
}

void AnimatedGameObject::displayFrameChanged(cocos2d::CCObject* p0, std::string p1) {
    return reinterpret_cast<void(*)(AnimatedGameObject*, cocos2d::CCObject*, std::string)>(base+0xc9160)(this, p0, p1);
}

void AnimatedShopKeeper::animationFinished(char const* p0) {
    return reinterpret_cast<void(*)(AnimatedShopKeeper*, char const*)>(base+0x1a3130)(this, p0);
}

bool ColorChannelSprite::init() {
    return reinterpret_cast<bool(*)(ColorChannelSprite*)>(base+0x16deb0)(this);
}

bool EditorOptionsLayer::init() {
    return reinterpret_cast<bool(*)(EditorOptionsLayer*)>(base+0x147420)(this);
}

void EditorOptionsLayer::setupOptions() {
    return reinterpret_cast<void(*)(EditorOptionsLayer*)>(base+0x147440)(this);
}

void EditorOptionsLayer::onClose(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(EditorOptionsLayer*, cocos2d::CCObject*)>(base+0x147c30)(this, p0);
}

void FriendRequestPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(FriendRequestPopup*)>(base+0x14e2a0)(this);
}

void FriendRequestPopup::uploadActionFinished(int p0, int p1) {
    return reinterpret_cast<void(*)(FriendRequestPopup*, int, int)>(base+0x14e390)(this, p0, p1);
}

void FriendRequestPopup::uploadActionFailed(int p0, int p1) {
    return reinterpret_cast<void(*)(FriendRequestPopup*, int, int)>(base+0x14e560)(this, p0, p1);
}

void FriendRequestPopup::onClosePopup(UploadActionPopup* p0) {
    return reinterpret_cast<void(*)(FriendRequestPopup*, UploadActionPopup*)>(base+0x14e640)(this, p0);
}

void FriendRequestPopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(FriendRequestPopup*, FLAlertLayer*, bool)>(base+0x14e7c0)(this, p0, p1);
}

void FriendsProfilePage::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(FriendsProfilePage*)>(base+0x3aa6e0)(this);
}

void FriendsProfilePage::keyBackClicked() {
    return reinterpret_cast<void(*)(FriendsProfilePage*)>(base+0x3aa5e0)(this);
}

void FriendsProfilePage::getUserListFinished(cocos2d::CCArray* p0, UserListType p1) {
    return reinterpret_cast<void(*)(FriendsProfilePage*, cocos2d::CCArray*, UserListType)>(base+0x3aa240)(this, p0, p1);
}

void FriendsProfilePage::getUserListFailed(UserListType p0, GJErrorCode p1) {
    return reinterpret_cast<void(*)(FriendsProfilePage*, UserListType, GJErrorCode)>(base+0x3aa390)(this, p0, p1);
}

void FriendsProfilePage::userListChanged(cocos2d::CCArray* p0, UserListType p1) {
    return reinterpret_cast<void(*)(FriendsProfilePage*, cocos2d::CCArray*, UserListType)>(base+0x3aa4a0)(this, p0, p1);
}

void FriendsProfilePage::forceReloadList(UserListType p0) {
    return reinterpret_cast<void(*)(FriendsProfilePage*, UserListType)>(base+0x3aa4e0)(this, p0);
}

void GJMoveCommandLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*)>(base+0x374970)(this);
}

void GJMoveCommandLayer::valuePopupClosed(ConfigureValuePopup* p0, float p1) {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*, ConfigureValuePopup*, float)>(base+0x373c20)(this, p0, p1);
}

void GJMoveCommandLayer::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*, CCTextInputNode*)>(base+0x374430)(this, p0);
}

void GJMoveCommandLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*, CCTextInputNode*)>(base+0x374470)(this, p0);
}

void GJMoveCommandLayer::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*, CCTextInputNode*, float)>(base+0x374b50)(this, p0, p1);
}

void GJMoveCommandLayer::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJMoveCommandLayer*, CCTextInputNode*)>(base+0x374c10)(this, p0);
}

bool GroupCommandObject::init() {
    return reinterpret_cast<bool(*)(GroupCommandObject*)>(base+0x16e590)(this);
}

void GroupCommandObject::updateTweenAction(float p0, char const* p1) {
    return reinterpret_cast<void(*)(GroupCommandObject*, float, char const*)>(base+0x16ead0)(this, p0, p1);
}

bool KeybindingsManager::init() {
    return reinterpret_cast<bool(*)(KeybindingsManager*)>(base+0x289a00)(this);
}

void LevelSettingsLayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(LevelSettingsLayer*)>(base+0xac070)(this);
}

void LevelSettingsLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(LevelSettingsLayer*)>(base+0xac7b0)(this);
}

void LevelSettingsLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(LevelSettingsLayer*, FLAlertLayer*, bool)>(base+0xac260)(this, p0, p1);
}

void LevelSettingsLayer::colorSelectClosed(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(LevelSettingsLayer*, cocos2d::CCNode*)>(base+0xac100)(this, p0);
}

void LevelSettingsLayer::customSongLayerClosed() {
    return reinterpret_cast<void(*)(LevelSettingsLayer*)>(base+0xac340)(this);
}

void LevelSettingsLayer::selectArtClosed(SelectArtLayer* p0) {
    return reinterpret_cast<void(*)(LevelSettingsLayer*, SelectArtLayer*)>(base+0xac5e0)(this, p0);
}

bool AchievementNotifier::init() {
    return reinterpret_cast<bool(*)(AchievementNotifier*)>(base+0x464e90)(this);
}

void CollisionBlockPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(CollisionBlockPopup*)>(base+0x1317e0)(this);
}

void CollisionBlockPopup::show() {
    return reinterpret_cast<void(*)(CollisionBlockPopup*)>(base+0x131790)(this);
}

void CollisionBlockPopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(CollisionBlockPopup*, CCTextInputNode*)>(base+0x131630)(this, p0);
}

void CollisionBlockPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(CollisionBlockPopup*, CCTextInputNode*)>(base+0x131670)(this, p0);
}

void CollisionBlockPopup::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(CollisionBlockPopup*, CCTextInputNode*, float)>(base+0x1318f0)(this, p0, p1);
}

void CollisionBlockPopup::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(CollisionBlockPopup*, CCTextInputNode*)>(base+0x1319b0)(this, p0);
}

void ConfigureValuePopup::keyBackClicked() {
    return reinterpret_cast<void(*)(ConfigureValuePopup*)>(base+0x382c00)(this);
}

void ConfigureValuePopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(ConfigureValuePopup*, CCTextInputNode*)>(base+0x382a90)(this, p0);
}

void ConfigureValuePopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(ConfigureValuePopup*, CCTextInputNode*)>(base+0x382ad0)(this, p0);
}

void CurrencyRewardLayer::update(float p0) {
    return reinterpret_cast<void(*)(CurrencyRewardLayer*, float)>(base+0x44a5c0)(this, p0);
}

void EditGameObjectPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(EditGameObjectPopup*)>(base+0x154070)(this);
}

void EditGameObjectPopup::show() {
    return reinterpret_cast<void(*)(EditGameObjectPopup*)>(base+0x154020)(this);
}

void FRequestProfilePage::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(FRequestProfilePage*)>(base+0x437300)(this);
}

void FRequestProfilePage::keyBackClicked() {
    return reinterpret_cast<void(*)(FRequestProfilePage*)>(base+0x4372d0)(this);
}

void FRequestProfilePage::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(FRequestProfilePage*, FLAlertLayer*, bool)>(base+0x437200)(this, p0, p1);
}

void FRequestProfilePage::onClosePopup(UploadActionPopup* p0) {
    return reinterpret_cast<void(*)(FRequestProfilePage*, UploadActionPopup*)>(base+0x437340)(this, p0);
}

void FRequestProfilePage::uploadActionFinished(int p0, int p1) {
    return reinterpret_cast<void(*)(FRequestProfilePage*, int, int)>(base+0x4373a0)(this, p0, p1);
}

void FRequestProfilePage::uploadActionFailed(int p0, int p1) {
    return reinterpret_cast<void(*)(FRequestProfilePage*, int, int)>(base+0x437500)(this, p0, p1);
}

void FRequestProfilePage::loadFRequestsFinished(cocos2d::CCArray* p0, char const* p1) {
    return reinterpret_cast<void(*)(FRequestProfilePage*, cocos2d::CCArray*, char const*)>(base+0x437840)(this, p0, p1);
}

void FRequestProfilePage::loadFRequestsFailed(char const* p0, GJErrorCode p1) {
    return reinterpret_cast<void(*)(FRequestProfilePage*, char const*, GJErrorCode)>(base+0x437930)(this, p0, p1);
}

void FRequestProfilePage::setupPageInfo(std::string p0, char const* p1) {
    return reinterpret_cast<void(*)(FRequestProfilePage*, std::string, char const*)>(base+0x437ab0)(this, p0, p1);
}

void FRequestProfilePage::forceReloadRequests(bool p0) {
    return reinterpret_cast<void(*)(FRequestProfilePage*, bool)>(base+0x437a60)(this, p0);
}

void GJWriteMessagePopup::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(GJWriteMessagePopup*)>(base+0x1527b0)(this);
}

void GJWriteMessagePopup::keyBackClicked() {
    return reinterpret_cast<void(*)(GJWriteMessagePopup*)>(base+0x152780)(this);
}

void GJWriteMessagePopup::textInputOpened(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJWriteMessagePopup*, CCTextInputNode*)>(base+0x152830)(this, p0);
}

void GJWriteMessagePopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJWriteMessagePopup*, CCTextInputNode*)>(base+0x1527f0)(this, p0);
}

void GJWriteMessagePopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJWriteMessagePopup*, CCTextInputNode*)>(base+0x152990)(this, p0);
}

void GJWriteMessagePopup::uploadMessageFinished(int p0) {
    return reinterpret_cast<void(*)(GJWriteMessagePopup*, int)>(base+0x152fc0)(this, p0);
}

void GJWriteMessagePopup::uploadMessageFailed(int p0) {
    return reinterpret_cast<void(*)(GJWriteMessagePopup*, int)>(base+0x1530a0)(this, p0);
}

void GJWriteMessagePopup::onClosePopup(UploadActionPopup* p0) {
    return reinterpret_cast<void(*)(GJWriteMessagePopup*, UploadActionPopup*)>(base+0x153170)(this, p0);
}

void GJWriteMessagePopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(GJWriteMessagePopup*, FLAlertLayer*, bool)>(base+0x1532b0)(this, p0, p1);
}

void GJWriteMessagePopup::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(GJWriteMessagePopup*, CCTextInputNode*, float)>(base+0x153390)(this, p0, p1);
}

void GJWriteMessagePopup::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJWriteMessagePopup*, CCTextInputNode*)>(base+0x153450)(this, p0);
}

void GauntletSelectLayer::onExit() {
    return reinterpret_cast<void(*)(GauntletSelectLayer*)>(base+0x2eb490)(this);
}

void GauntletSelectLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(GauntletSelectLayer*)>(base+0x2eb370)(this);
}

void GauntletSelectLayer::scrollLayerWillScrollToPage(BoomScrollLayer* p0, int p1) {
    return reinterpret_cast<void(*)(GauntletSelectLayer*, BoomScrollLayer*, int)>(base+0x2eb260)(this, p0, p1);
}

void GauntletSelectLayer::scrollLayerScrolledToPage(BoomScrollLayer* p0, int p1) {
    return reinterpret_cast<void(*)(GauntletSelectLayer*, BoomScrollLayer*, int)>(base+0x2eb150)(this, p0, p1);
}

void GauntletSelectLayer::loadLevelsFinished(cocos2d::CCArray* p0, char const* p1) {
    return reinterpret_cast<void(*)(GauntletSelectLayer*, cocos2d::CCArray*, char const*)>(base+0x2ea630)(this, p0, p1);
}

void GauntletSelectLayer::loadLevelsFailed(char const* p0) {
    return reinterpret_cast<void(*)(GauntletSelectLayer*, char const*)>(base+0x2ea820)(this, p0);
}

bool GravityEffectSprite::init() {
    return reinterpret_cast<bool(*)(GravityEffectSprite*)>(base+0x80b20)(this);
}

void GravityEffectSprite::draw() {
    return reinterpret_cast<void(*)(GravityEffectSprite*)>(base+0x80d80)(this);
}

bool LevelSettingsObject::init() {
    return reinterpret_cast<bool(*)(LevelSettingsObject*)>(base+0xa5690)(this);
}

void MessagesProfilePage::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(MessagesProfilePage*)>(base+0x107eb0)(this);
}

void MessagesProfilePage::keyBackClicked() {
    return reinterpret_cast<void(*)(MessagesProfilePage*)>(base+0x107e80)(this);
}

void MessagesProfilePage::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(MessagesProfilePage*, FLAlertLayer*, bool)>(base+0x107b20)(this, p0, p1);
}

void MessagesProfilePage::onClosePopup(UploadActionPopup* p0) {
    return reinterpret_cast<void(*)(MessagesProfilePage*, UploadActionPopup*)>(base+0x107b90)(this, p0);
}

void MessagesProfilePage::uploadActionFinished(int p0, int p1) {
    return reinterpret_cast<void(*)(MessagesProfilePage*, int, int)>(base+0x107bf0)(this, p0, p1);
}

void MessagesProfilePage::uploadActionFailed(int p0, int p1) {
    return reinterpret_cast<void(*)(MessagesProfilePage*, int, int)>(base+0x107d50)(this, p0, p1);
}

void MessagesProfilePage::loadMessagesFinished(cocos2d::CCArray* p0, char const* p1) {
    return reinterpret_cast<void(*)(MessagesProfilePage*, cocos2d::CCArray*, char const*)>(base+0x108150)(this, p0, p1);
}

void MessagesProfilePage::loadMessagesFailed(char const* p0, GJErrorCode p1) {
    return reinterpret_cast<void(*)(MessagesProfilePage*, char const*, GJErrorCode)>(base+0x108280)(this, p0, p1);
}

void MessagesProfilePage::forceReloadMessages(bool p0) {
    return reinterpret_cast<void(*)(MessagesProfilePage*, bool)>(base+0x1083b0)(this, p0);
}

void MessagesProfilePage::setupPageInfo(std::string p0, char const* p1) {
    return reinterpret_cast<void(*)(MessagesProfilePage*, std::string, char const*)>(base+0x108400)(this, p0, p1);
}

void SetupAnimationPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(SetupAnimationPopup*)>(base+0x20ade0)(this);
}

void SetupAnimationPopup::show() {
    return reinterpret_cast<void(*)(SetupAnimationPopup*)>(base+0x20ad90)(this);
}

void SetupAnimationPopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupAnimationPopup*, CCTextInputNode*)>(base+0x20aaf0)(this, p0);
}

void SetupAnimationPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupAnimationPopup*, CCTextInputNode*)>(base+0x20ab30)(this, p0);
}

void SetupAnimationPopup::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(SetupAnimationPopup*, CCTextInputNode*, float)>(base+0x20af30)(this, p0, p1);
}

void SetupAnimationPopup::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupAnimationPopup*, CCTextInputNode*)>(base+0x20aff0)(this, p0);
}

bool AccountRegisterLayer::init() {
    return reinterpret_cast<bool(*)(AccountRegisterLayer*)>(base+0x2575d0)(this);
}

void AccountRegisterLayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(AccountRegisterLayer*)>(base+0x25a910)(this);
}

void AccountRegisterLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(AccountRegisterLayer*)>(base+0x25a730)(this);
}

void AccountRegisterLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(AccountRegisterLayer*, FLAlertLayer*, bool)>(base+0x25a380)(this, p0, p1);
}

void AccountRegisterLayer::textInputOpened(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(AccountRegisterLayer*, CCTextInputNode*)>(base+0x25b420)(this, p0);
}

void AccountRegisterLayer::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(AccountRegisterLayer*, CCTextInputNode*)>(base+0x25a950)(this, p0);
}

void AccountRegisterLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(AccountRegisterLayer*, CCTextInputNode*)>(base+0x25b440)(this, p0);
}

void AccountRegisterLayer::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(AccountRegisterLayer*, CCTextInputNode*, float)>(base+0x25b460)(this, p0, p1);
}

void AccountRegisterLayer::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(AccountRegisterLayer*, CCTextInputNode*)>(base+0x25b520)(this, p0);
}

void AccountRegisterLayer::allowTextInput(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(AccountRegisterLayer*, CCTextInputNode*)>(base+0x25b5d0)(this, p0);
}

void AccountRegisterLayer::registerAccountFinished() {
    return reinterpret_cast<void(*)(AccountRegisterLayer*)>(base+0x259bf0)(this);
}

void AccountRegisterLayer::registerAccountFailed(AccountError p0) {
    return reinterpret_cast<void(*)(AccountRegisterLayer*, AccountError)>(base+0x259d70)(this, p0);
}

void CommunityCreditsPage::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(CommunityCreditsPage*)>(base+0x19e9f0)(this);
}

void CommunityCreditsPage::keyBackClicked() {
    return reinterpret_cast<void(*)(CommunityCreditsPage*)>(base+0x19e980)(this);
}

void CommunityCreditsPage::show() {
    return reinterpret_cast<void(*)(CommunityCreditsPage*)>(base+0x19e7e0)(this);
}

void CustomizeObjectLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(CustomizeObjectLayer*)>(base+0xe16c0)(this);
}

void CustomizeObjectLayer::textInputOpened(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(CustomizeObjectLayer*, CCTextInputNode*)>(base+0xe1280)(this, p0);
}

void CustomizeObjectLayer::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(CustomizeObjectLayer*, CCTextInputNode*)>(base+0xe1430)(this, p0);
}

void CustomizeObjectLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(CustomizeObjectLayer*, CCTextInputNode*)>(base+0xe1470)(this, p0);
}

void CustomizeObjectLayer::hsvPopupClosed(HSVWidgetPopup* p0, cocos2d::_ccHSVValue p1) {
    return reinterpret_cast<void(*)(CustomizeObjectLayer*, HSVWidgetPopup*, cocos2d::_ccHSVValue)>(base+0xe1050)(this, p0, p1);
}

void CustomizeObjectLayer::colorSelectClosed(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(CustomizeObjectLayer*, cocos2d::CCNode*)>(base+0xe0c60)(this, p0);
}

void CustomizeObjectLayer::colorSetupClosed(int p0) {
    return reinterpret_cast<void(*)(CustomizeObjectLayer*, int)>(base+0xe0850)(this, p0);
}

void GJFollowCommandLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(GJFollowCommandLayer*)>(base+0x16da20)(this);
}

void GJFollowCommandLayer::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJFollowCommandLayer*, CCTextInputNode*)>(base+0x16d440)(this, p0);
}

void GJFollowCommandLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJFollowCommandLayer*, CCTextInputNode*)>(base+0x16d480)(this, p0);
}

void GJFollowCommandLayer::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(GJFollowCommandLayer*, CCTextInputNode*, float)>(base+0x16dc00)(this, p0, p1);
}

void GJFollowCommandLayer::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJFollowCommandLayer*, CCTextInputNode*)>(base+0x16dcc0)(this, p0);
}

void GJRotateCommandLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(GJRotateCommandLayer*)>(base+0x5e30)(this);
}

void GJRotateCommandLayer::valuePopupClosed(ConfigureValuePopup* p0, float p1) {
    return reinterpret_cast<void(*)(GJRotateCommandLayer*, ConfigureValuePopup*, float)>(base+0x5160)(this, p0, p1);
}

void GJRotateCommandLayer::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJRotateCommandLayer*, CCTextInputNode*)>(base+0x5890)(this, p0);
}

void GJRotateCommandLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJRotateCommandLayer*, CCTextInputNode*)>(base+0x58d0)(this, p0);
}

void GJRotateCommandLayer::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(GJRotateCommandLayer*, CCTextInputNode*, float)>(base+0x6010)(this, p0, p1);
}

void GJRotateCommandLayer::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJRotateCommandLayer*, CCTextInputNode*)>(base+0x60d0)(this, p0);
}

void GJSpecialColorSelect::keyBackClicked() {
    return reinterpret_cast<void(*)(GJSpecialColorSelect*)>(base+0x383ca0)(this);
}

bool MusicDownloadManager::init() {
    return reinterpret_cast<bool(*)(MusicDownloadManager*)>(base+0x2ef100)(this);
}

bool ParentalOptionsLayer::init() {
    return reinterpret_cast<bool(*)(ParentalOptionsLayer*)>(base+0x445da0)(this);
}

void ParentalOptionsLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(ParentalOptionsLayer*)>(base+0x4472d0)(this);
}

void TeleportPortalObject::setPosition(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(TeleportPortalObject*, cocos2d::CCPoint const&)>(base+0xdad00)(this, p0);
}

void TeleportPortalObject::setRotation(float p0) {
    return reinterpret_cast<void(*)(TeleportPortalObject*, float)>(base+0xdadb0)(this, p0);
}

void TeleportPortalObject::setStartPos(cocos2d::CCPoint p0) {
    return reinterpret_cast<void(*)(TeleportPortalObject*, cocos2d::CCPoint)>(base+0xdab50)(this, p0);
}

void TeleportPortalObject::getSaveString() {
    return reinterpret_cast<void(*)(TeleportPortalObject*)>(base+0xdaf00)(this);
}

void TeleportPortalObject::addToGroup(int p0) {
    return reinterpret_cast<void(*)(TeleportPortalObject*, int)>(base+0xdae40)(this, p0);
}

void TeleportPortalObject::removeFromGroup(int p0) {
    return reinterpret_cast<void(*)(TeleportPortalObject*, int)>(base+0xdaea0)(this, p0);
}

void TeleportPortalObject::setRotation2(float p0) {
    return reinterpret_cast<void(*)(TeleportPortalObject*, float)>(base+0xdae10)(this, p0);
}

void TeleportPortalObject::addToGroup2(int p0) {
    return reinterpret_cast<void(*)(TeleportPortalObject*, int)>(base+0xdae20)(this, p0);
}

void TeleportPortalObject::removeFromGroup2(int p0) {
    return reinterpret_cast<void(*)(TeleportPortalObject*, int)>(base+0xdae30)(this, p0);
}

void UploadActionDelegate::uploadActionFinished(int p0, int p1) {
    return reinterpret_cast<void(*)(UploadActionDelegate*, int, int)>(base+0x3aa720)(this, p0, p1);
}

void UploadActionDelegate::uploadActionFailed(int p0, int p1) {
    return reinterpret_cast<void(*)(UploadActionDelegate*, int, int)>(base+0x3aa730)(this, p0, p1);
}

void CreateGuidelinesLayer::update(float p0) {
    return reinterpret_cast<void(*)(CreateGuidelinesLayer*, float)>(base+0x299c50)(this, p0);
}

void CreateGuidelinesLayer::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CreateGuidelinesLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x299dd0)(this, p0, p1);
}

void CreateGuidelinesLayer::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CreateGuidelinesLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x299f50)(this, p0, p1);
}

void CreateGuidelinesLayer::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CreateGuidelinesLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x299f70)(this, p0, p1);
}

void CreateGuidelinesLayer::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(CreateGuidelinesLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x29a030)(this, p0, p1);
}

void CreateGuidelinesLayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(CreateGuidelinesLayer*)>(base+0x29a070)(this);
}

void CreateGuidelinesLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(CreateGuidelinesLayer*)>(base+0x299ce0)(this);
}

void CreateGuidelinesLayer::keyDown(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(CreateGuidelinesLayer*, cocos2d::enumKeyCodes)>(base+0x29a0b0)(this, p0);
}

void CreateGuidelinesLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(CreateGuidelinesLayer*, FLAlertLayer*, bool)>(base+0x299c70)(this, p0, p1);
}

void CreateGuidelinesLayer::keyUp(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(CreateGuidelinesLayer*, cocos2d::enumKeyCodes)>(base+0x29a180)(this, p0);
}

void GJPFollowCommandLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(GJPFollowCommandLayer*)>(base+0x1b2590)(this);
}

void GJPFollowCommandLayer::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJPFollowCommandLayer*, CCTextInputNode*)>(base+0x1b1d80)(this, p0);
}

void GJPFollowCommandLayer::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJPFollowCommandLayer*, CCTextInputNode*)>(base+0x1b1dc0)(this, p0);
}

void GJPFollowCommandLayer::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(GJPFollowCommandLayer*, CCTextInputNode*, float)>(base+0x1b27a0)(this, p0, p1);
}

void GJPFollowCommandLayer::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJPFollowCommandLayer*, CCTextInputNode*)>(base+0x1b2860)(this, p0);
}

bool MoreVideoOptionsLayer::init() {
    return reinterpret_cast<bool(*)(MoreVideoOptionsLayer*)>(base+0x444150)(this);
}

void MoreVideoOptionsLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(MoreVideoOptionsLayer*)>(base+0x445ba0)(this);
}

void MusicDownloadDelegate::loadSongInfoFinished(SongInfoObject* p0) {
    return reinterpret_cast<void(*)(MusicDownloadDelegate*, SongInfoObject*)>(base+0x320a0)(this, p0);
}

void MusicDownloadDelegate::loadSongInfoFailed(int p0, GJSongError p1) {
    return reinterpret_cast<void(*)(MusicDownloadDelegate*, int, GJSongError)>(base+0x320b0)(this, p0, p1);
}

void MusicDownloadDelegate::downloadSongFinished(SongInfoObject* p0) {
    return reinterpret_cast<void(*)(MusicDownloadDelegate*, SongInfoObject*)>(base+0x320c0)(this, p0);
}

void MusicDownloadDelegate::downloadSongFailed(int p0, GJSongError p1) {
    return reinterpret_cast<void(*)(MusicDownloadDelegate*, int, GJSongError)>(base+0x320d0)(this, p0, p1);
}

void SetupTouchTogglePopup::keyBackClicked() {
    return reinterpret_cast<void(*)(SetupTouchTogglePopup*)>(base+0x159850)(this);
}

void SetupTouchTogglePopup::show() {
    return reinterpret_cast<void(*)(SetupTouchTogglePopup*)>(base+0x159800)(this);
}

void SetupTouchTogglePopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupTouchTogglePopup*, CCTextInputNode*)>(base+0x159660)(this, p0);
}

void SetupTouchTogglePopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupTouchTogglePopup*, CCTextInputNode*)>(base+0x1596a0)(this, p0);
}

void SetupTouchTogglePopup::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(SetupTouchTogglePopup*, CCTextInputNode*, float)>(base+0x159960)(this, p0, p1);
}

void SetupTouchTogglePopup::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupTouchTogglePopup*, CCTextInputNode*)>(base+0x159a20)(this, p0);
}

void ColorSelectLiveOverlay::keyBackClicked() {
    return reinterpret_cast<void(*)(ColorSelectLiveOverlay*)>(base+0x2e4550)(this);
}

void ColorSelectLiveOverlay::show() {
    return reinterpret_cast<void(*)(ColorSelectLiveOverlay*)>(base+0x2e4620)(this);
}

bool DemonFilterSelectLayer::init() {
    return reinterpret_cast<bool(*)(DemonFilterSelectLayer*)>(base+0x38b9d0)(this);
}

void DemonFilterSelectLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(DemonFilterSelectLayer*)>(base+0x38c060)(this);
}

void GJAccountSettingsLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(GJAccountSettingsLayer*)>(base+0x14b200)(this);
}

void GJAccountSettingsLayer::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(GJAccountSettingsLayer*, CCTextInputNode*, float)>(base+0x14abe0)(this, p0, p1);
}

void GJAccountSettingsLayer::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(GJAccountSettingsLayer*, CCTextInputNode*)>(base+0x14aca0)(this, p0);
}

void SetupAnimSettingsPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(SetupAnimSettingsPopup*)>(base+0x599f0)(this);
}

void SetupAnimSettingsPopup::show() {
    return reinterpret_cast<void(*)(SetupAnimSettingsPopup*)>(base+0x599a0)(this);
}

void SetupAnimSettingsPopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupAnimSettingsPopup*, CCTextInputNode*)>(base+0x597b0)(this, p0);
}

void SetupAnimSettingsPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupAnimSettingsPopup*, CCTextInputNode*)>(base+0x597f0)(this, p0);
}

void SetupAnimSettingsPopup::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(SetupAnimSettingsPopup*, CCTextInputNode*, float)>(base+0x59ae0)(this, p0, p1);
}

void SetupAnimSettingsPopup::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupAnimSettingsPopup*, CCTextInputNode*)>(base+0x59ba0)(this, p0);
}

void SetupCountTriggerPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(SetupCountTriggerPopup*)>(base+0x15ec70)(this);
}

void SetupCountTriggerPopup::show() {
    return reinterpret_cast<void(*)(SetupCountTriggerPopup*)>(base+0x15ec20)(this);
}

void SetupCountTriggerPopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupCountTriggerPopup*, CCTextInputNode*)>(base+0x15e960)(this, p0);
}

void SetupCountTriggerPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupCountTriggerPopup*, CCTextInputNode*)>(base+0x15e9a0)(this, p0);
}

void SetupCountTriggerPopup::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(SetupCountTriggerPopup*, CCTextInputNode*, float)>(base+0x15ede0)(this, p0, p1);
}

void SetupCountTriggerPopup::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupCountTriggerPopup*, CCTextInputNode*)>(base+0x15eea0)(this, p0);
}

void SetupInstantCountPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(SetupInstantCountPopup*)>(base+0x355600)(this);
}

void SetupInstantCountPopup::show() {
    return reinterpret_cast<void(*)(SetupInstantCountPopup*)>(base+0x3555b0)(this);
}

void SetupInstantCountPopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupInstantCountPopup*, CCTextInputNode*)>(base+0x355230)(this, p0);
}

void SetupInstantCountPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupInstantCountPopup*, CCTextInputNode*)>(base+0x355270)(this, p0);
}

void SetupInstantCountPopup::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(SetupInstantCountPopup*, CCTextInputNode*, float)>(base+0x355770)(this, p0, p1);
}

void SetupInstantCountPopup::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupInstantCountPopup*, CCTextInputNode*)>(base+0x355830)(this, p0);
}

void SetupObjectTogglePopup::keyBackClicked() {
    return reinterpret_cast<void(*)(SetupObjectTogglePopup*)>(base+0x1c27f0)(this);
}

void SetupObjectTogglePopup::show() {
    return reinterpret_cast<void(*)(SetupObjectTogglePopup*)>(base+0x1c27a0)(this);
}

void SetupObjectTogglePopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupObjectTogglePopup*, CCTextInputNode*)>(base+0x1c2620)(this, p0);
}

void SetupObjectTogglePopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupObjectTogglePopup*, CCTextInputNode*)>(base+0x1c2660)(this, p0);
}

void SetupObjectTogglePopup::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(SetupObjectTogglePopup*, CCTextInputNode*, float)>(base+0x1c2900)(this, p0, p1);
}

void SetupObjectTogglePopup::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupObjectTogglePopup*, CCTextInputNode*)>(base+0x1c29c0)(this, p0);
}

void BoomScrollLayerDelegate::scrollLayerScrollingStarted(BoomScrollLayer* p0) {
    return reinterpret_cast<void(*)(BoomScrollLayerDelegate*, BoomScrollLayer*)>(base+0x204370)(this, p0);
}

void BoomScrollLayerDelegate::scrollLayerScrolledToPage(BoomScrollLayer* p0, int p1) {
    return reinterpret_cast<void(*)(BoomScrollLayerDelegate*, BoomScrollLayer*, int)>(base+0x23cf70)(this, p0, p1);
}

void BoomScrollLayerDelegate::scrollLayerMoved(cocos2d::CCPoint p0) {
    return reinterpret_cast<void(*)(BoomScrollLayerDelegate*, cocos2d::CCPoint)>(base+0x2eca30)(this, p0);
}

void BoomScrollLayerDelegate::scrollLayerWillScrollToPage(BoomScrollLayer* p0, int p1) {
    return reinterpret_cast<void(*)(BoomScrollLayerDelegate*, BoomScrollLayer*, int)>(base+0x23cf80)(this, p0, p1);
}

void SetupPickupTriggerPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(SetupPickupTriggerPopup*)>(base+0x37f00)(this);
}

void SetupPickupTriggerPopup::show() {
    return reinterpret_cast<void(*)(SetupPickupTriggerPopup*)>(base+0x37eb0)(this);
}

void SetupPickupTriggerPopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupPickupTriggerPopup*, CCTextInputNode*)>(base+0x37c60)(this, p0);
}

void SetupPickupTriggerPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupPickupTriggerPopup*, CCTextInputNode*)>(base+0x37ca0)(this, p0);
}

void SetupPickupTriggerPopup::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(SetupPickupTriggerPopup*, CCTextInputNode*, float)>(base+0x38050)(this, p0, p1);
}

void SetupPickupTriggerPopup::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupPickupTriggerPopup*, CCTextInputNode*)>(base+0x38110)(this, p0);
}

void ShareLevelSettingsLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(ShareLevelSettingsLayer*)>(base+0x12db50)(this);
}

void ShareLevelSettingsLayer::numberInputClosed(NumberInputLayer* p0) {
    return reinterpret_cast<void(*)(ShareLevelSettingsLayer*, NumberInputLayer*)>(base+0x12da50)(this, p0);
}

void PlatformDownloadDelegate::downloadFinished(char const* p0) {
    return reinterpret_cast<void(*)(PlatformDownloadDelegate*, char const*)>(base+0x2f2db0)(this, p0);
}

void PlatformDownloadDelegate::downloadFailed(char const* p0) {
    return reinterpret_cast<void(*)(PlatformDownloadDelegate*, char const*)>(base+0x2f2dc0)(this, p0);
}

void SetupInteractObjectPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(SetupInteractObjectPopup*)>(base+0x29c550)(this);
}

void SetupInteractObjectPopup::show() {
    return reinterpret_cast<void(*)(SetupInteractObjectPopup*)>(base+0x29c500)(this);
}

void SetupInteractObjectPopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupInteractObjectPopup*, CCTextInputNode*)>(base+0x29c270)(this, p0);
}

void SetupInteractObjectPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupInteractObjectPopup*, CCTextInputNode*)>(base+0x29c2b0)(this, p0);
}

void SetupInteractObjectPopup::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(SetupInteractObjectPopup*, CCTextInputNode*, float)>(base+0x29c6a0)(this, p0, p1);
}

void SetupInteractObjectPopup::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupInteractObjectPopup*, CCTextInputNode*)>(base+0x29c760)(this, p0);
}

void SetupCollisionTriggerPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(SetupCollisionTriggerPopup*)>(base+0x1d8880)(this);
}

void SetupCollisionTriggerPopup::show() {
    return reinterpret_cast<void(*)(SetupCollisionTriggerPopup*)>(base+0x1d8830)(this);
}

void SetupCollisionTriggerPopup::textInputClosed(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupCollisionTriggerPopup*, CCTextInputNode*)>(base+0x1d8490)(this, p0);
}

void SetupCollisionTriggerPopup::textChanged(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupCollisionTriggerPopup*, CCTextInputNode*)>(base+0x1d84d0)(this, p0);
}

void SetupCollisionTriggerPopup::textInputShouldOffset(CCTextInputNode* p0, float p1) {
    return reinterpret_cast<void(*)(SetupCollisionTriggerPopup*, CCTextInputNode*, float)>(base+0x1d89f0)(this, p0, p1);
}

void SetupCollisionTriggerPopup::textInputReturn(CCTextInputNode* p0) {
    return reinterpret_cast<void(*)(SetupCollisionTriggerPopup*, CCTextInputNode*)>(base+0x1d8ab0)(this, p0);
}

void UpdateAccountSettingsPopup::keyBackClicked() {
    return reinterpret_cast<void(*)(UpdateAccountSettingsPopup*)>(base+0x14bcb0)(this);
}

void UpdateAccountSettingsPopup::updateSettingsFinished() {
    return reinterpret_cast<void(*)(UpdateAccountSettingsPopup*)>(base+0x14ba40)(this);
}

void UpdateAccountSettingsPopup::updateSettingsFailed() {
    return reinterpret_cast<void(*)(UpdateAccountSettingsPopup*)>(base+0x14bb80)(this);
}

void Slider::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(Slider*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x18e2e0)(this, p0, p1);
}

void Slider::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(Slider*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x18e360)(this, p0, p1);
}

void Slider::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(Slider*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x18e320)(this, p0, p1);
}

bool UILayer::init() {
    return reinterpret_cast<bool(*)(UILayer*)>(base+0x27fe40)(this);
}

void UILayer::draw() {
    return reinterpret_cast<void(*)(UILayer*)>(base+0x280980)(this);
}

void UILayer::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(UILayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x280990)(this, p0, p1);
}

void UILayer::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(UILayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x280ad0)(this, p0, p1);
}

void UILayer::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(UILayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x280af0)(this, p0, p1);
}

void UILayer::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(UILayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x280bd0)(this, p0, p1);
}

void UILayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(UILayer*)>(base+0x280c10)(this);
}

void UILayer::keyBackClicked() {
    return reinterpret_cast<void(*)(UILayer*)>(base+0x2808e0)(this);
}

void UILayer::keyDown(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(UILayer*, cocos2d::enumKeyCodes)>(base+0x280470)(this, p0);
}

void UILayer::keyUp(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(UILayer*, cocos2d::enumKeyCodes)>(base+0x280600)(this, p0);
}

void EditorUI::draw() {
    return reinterpret_cast<void(*)(EditorUI*)>(base+0x2e170)(this);
}

void EditorUI::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(EditorUI*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x2ed60)(this, p0, p1);
}

void EditorUI::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(EditorUI*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x2f3d0)(this, p0, p1);
}

void EditorUI::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(EditorUI*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x2fb00)(this, p0, p1);
}

void EditorUI::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(EditorUI*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x30710)(this, p0, p1);
}

void EditorUI::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(EditorUI*)>(base+0x30750)(this);
}

void EditorUI::keyBackClicked() {
    return reinterpret_cast<void(*)(EditorUI*)>(base+0x24c50)(this);
}

void EditorUI::keyDown(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(EditorUI*, cocos2d::enumKeyCodes)>(base+0x30790)(this, p0);
}

void EditorUI::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(EditorUI*, FLAlertLayer*, bool)>(base+0x1f590)(this, p0, p1);
}

void EditorUI::songStateChanged() {
    return reinterpret_cast<void(*)(EditorUI*)>(base+0x24760)(this);
}

void EditorUI::colorSelectClosed(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(EditorUI*, cocos2d::CCNode*)>(base+0x29940)(this, p0);
}

void EditorUI::keyUp(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(EditorUI*, cocos2d::enumKeyCodes)>(base+0x312b0)(this, p0);
}

void EditorUI::scrollWheel(float p0, float p1) {
    return reinterpret_cast<void(*)(EditorUI*, float, float)>(base+0x31370)(this, p0, p1);
}

void EditorUI::angleChangeBegin() {
    return reinterpret_cast<void(*)(EditorUI*)>(base+0x2e260)(this);
}

void EditorUI::angleChangeEnded() {
    return reinterpret_cast<void(*)(EditorUI*)>(base+0x2e320)(this);
}

void EditorUI::angleChanged(float p0) {
    return reinterpret_cast<void(*)(EditorUI*, float)>(base+0x2e3a0)(this, p0);
}

void EditorUI::scaleChangeBegin() {
    return reinterpret_cast<void(*)(EditorUI*)>(base+0x25120)(this);
}

void EditorUI::scaleChangeEnded() {
    return reinterpret_cast<void(*)(EditorUI*)>(base+0x251e0)(this);
}

void EditorUI::scaleChanged(float p0) {
    return reinterpret_cast<void(*)(EditorUI*, float)>(base+0x25260)(this, p0);
}

bool GManager::init() {
    return reinterpret_cast<bool(*)(GManager*)>(base+0x26ee00)(this);
}

void GManager::setup() {
    return reinterpret_cast<void(*)(GManager*)>(base+0x26ee20)(this);
}

void GManager::encodeDataTo(DS_Dictionary* p0) {
    return reinterpret_cast<void(*)(GManager*, DS_Dictionary*)>(base+0x26f5b0)(this, p0);
}

void GManager::dataLoaded(DS_Dictionary* p0) {
    return reinterpret_cast<void(*)(GManager*, DS_Dictionary*)>(base+0x26fb70)(this, p0);
}

void GManager::firstLoad() {
    return reinterpret_cast<void(*)(GManager*)>(base+0x26fb80)(this);
}

bool GameCell::init() {
    return reinterpret_cast<bool(*)(GameCell*)>(base+0x18f980)(this);
}

void GameCell::draw() {
    return reinterpret_cast<void(*)(GameCell*)>(base+0x18fa40)(this);
}

bool ListCell::init() {
    return reinterpret_cast<bool(*)(ListCell*)>(base+0x18f7a0)(this);
}

void ListCell::draw() {
    return reinterpret_cast<void(*)(ListCell*)>(base+0x18f840)(this);
}

bool SongCell::init() {
    return reinterpret_cast<bool(*)(SongCell*)>(base+0x11c200)(this);
}

void SongCell::draw() {
    return reinterpret_cast<void(*)(SongCell*)>(base+0x11c240)(this);
}

void TextArea::draw() {
    return reinterpret_cast<void(*)(TextArea*)>(base+0x19f890)(this);
}

void TextArea::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(TextArea*, unsigned char)>(base+0x19f760)(this, p0);
}

bool GJComment::init() {
    return reinterpret_cast<bool(*)(GJComment*)>(base+0x2dfec0)(this);
}

bool GJMapPack::init() {
    return reinterpret_cast<bool(*)(GJMapPack*)>(base+0x2de0e0)(this);
}

void InfoLayer::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(InfoLayer*)>(base+0x45a070)(this);
}

void InfoLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(InfoLayer*)>(base+0x45a000)(this);
}

void InfoLayer::show() {
    return reinterpret_cast<void(*)(InfoLayer*)>(base+0x45ab80)(this);
}

void InfoLayer::loadCommentsFinished(cocos2d::CCArray* p0, char const* p1) {
    return reinterpret_cast<void(*)(InfoLayer*, cocos2d::CCArray*, char const*)>(base+0x45a1b0)(this, p0, p1);
}

void InfoLayer::loadCommentsFailed(char const* p0) {
    return reinterpret_cast<void(*)(InfoLayer*, char const*)>(base+0x45a270)(this, p0);
}

void InfoLayer::setupPageInfo(std::string p0, char const* p1) {
    return reinterpret_cast<void(*)(InfoLayer*, std::string, char const*)>(base+0x45a320)(this, p0, p1);
}

void InfoLayer::commentUploadFinished(int p0) {
    return reinterpret_cast<void(*)(InfoLayer*, int)>(base+0x45a890)(this, p0);
}

void InfoLayer::commentUploadFailed(int p0, CommentError p1) {
    return reinterpret_cast<void(*)(InfoLayer*, int, CommentError)>(base+0x45a960)(this, p0, p1);
}

void InfoLayer::updateUserScoreFinished() {
    return reinterpret_cast<void(*)(InfoLayer*)>(base+0x45a720)(this);
}

void InfoLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(InfoLayer*, FLAlertLayer*, bool)>(base+0x459d50)(this, p0, p1);
}

bool KeysLayer::init() {
    return reinterpret_cast<bool(*)(KeysLayer*)>(base+0x44d340)(this);
}

void KeysLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(KeysLayer*)>(base+0x453210)(this);
}

void KeysLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(KeysLayer*, FLAlertLayer*, bool)>(base+0x4532e0)(this, p0, p1);
}

void KeysLayer::dialogClosed(DialogLayer* p0) {
    return reinterpret_cast<void(*)(KeysLayer*, DialogLayer*)>(base+0x453090)(this, p0);
}

bool LevelCell::init() {
    return reinterpret_cast<bool(*)(LevelCell*)>(base+0x117a40)(this);
}

void LevelCell::draw() {
    return reinterpret_cast<void(*)(LevelCell*)>(base+0x11a4d0)(this);
}

void LevelPage::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(LevelPage*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x23cd90)(this, p0, p1);
}

void LevelPage::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(LevelPage*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x23ceb0)(this, p0, p1);
}

void LevelPage::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(LevelPage*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x23ced0)(this, p0, p1);
}

void LevelPage::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(LevelPage*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x23cef0)(this, p0, p1);
}

void LevelPage::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(LevelPage*)>(base+0x23cf30)(this);
}

void LevelPage::dialogClosed(DialogLayer* p0) {
    return reinterpret_cast<void(*)(LevelPage*, DialogLayer*)>(base+0x23cad0)(this, p0);
}

bool MenuLayer::init() {
    return reinterpret_cast<bool(*)(MenuLayer*)>(base+0x1d14b0)(this);
}

void MenuLayer::keyBackClicked() {
    return reinterpret_cast<void(*)(MenuLayer*)>(base+0x1d3160)(this);
}

void MenuLayer::keyDown(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(MenuLayer*, cocos2d::enumKeyCodes)>(base+0x1d33d0)(this, p0);
}

void MenuLayer::googlePlaySignedIn() {
    return reinterpret_cast<void(*)(MenuLayer*)>(base+0x1d2f30)(this);
}

void MenuLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
    return reinterpret_cast<void(*)(MenuLayer*, FLAlertLayer*, bool)>(base+0x1d3190)(this, p0, p1);
}

void PlayLayer::update(float p0) {
    return reinterpret_cast<void(*)(PlayLayer*, float)>(base+0x77900)(this, p0);
}

void PlayLayer::onEnterTransitionDidFinish() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x806e0)(this);
}

void PlayLayer::onExit() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x80710)(this);
}

void PlayLayer::draw() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x7d160)(this);
}

void PlayLayer::visit() {
    return reinterpret_cast<void(*)(PlayLayer*)>(base+0x75ef0)(this);
}

void PlayLayer::updateTweenAction(float p0, char const* p1) {
    return reinterpret_cast<void(*)(PlayLayer*, float, char const*)>(base+0x7ffb0)(this, p0, p1);
}

void PlayLayer::updateColor(cocos2d::_ccColor3B p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue p5, int p6, bool p7, int p8, EffectGameObject* p9) {
    return reinterpret_cast<void(*)(PlayLayer*, cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)>(base+0x7c7f0)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
}

void PlayLayer::flipGravity(PlayerObject* p0, bool p1, bool p2) {
    return reinterpret_cast<void(*)(PlayLayer*, PlayerObject*, bool, bool)>(base+0x7cd10)(this, p0, p1, p2);
}

void PlayLayer::calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5) {
    return reinterpret_cast<void(*)(PlayLayer*, EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)>(base+0x7aa10)(this, p0, p1, p2, p3, p4, p5);
}

void PlayLayer::timeForXPos(float p0) {
    return reinterpret_cast<void(*)(PlayLayer*, float)>(base+0x7d120)(this, p0);
}

void PlayLayer::xPosForTime(float p0) {
    return reinterpret_cast<void(*)(PlayLayer*, float)>(base+0x7d140)(this, p0);
}

void PlayLayer::currencyWillExit(CurrencyRewardLayer* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, CurrencyRewardLayer*)>(base+0x7e070)(this, p0);
}

void PlayLayer::circleWaveWillBeRemoved(CCCircleWave* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, CCCircleWave*)>(base+0x7e110)(this, p0);
}

void PlayLayer::dialogClosed(DialogLayer* p0) {
    return reinterpret_cast<void(*)(PlayLayer*, DialogLayer*)>(base+0x7e0b0)(this, p0);
}

bool StatsCell::init() {
    return reinterpret_cast<bool(*)(StatsCell*)>(base+0x11b100)(this);
}

void StatsCell::draw() {
    return reinterpret_cast<void(*)(StatsCell*)>(base+0x11bf80)(this);
}

void TableView::onEnter() {
    return reinterpret_cast<void(*)(TableView*)>(base+0x37ff30)(this);
}

void TableView::onExit() {
    return reinterpret_cast<void(*)(TableView*)>(base+0x37ff40)(this);
}

void TableView::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(TableView*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x380120)(this, p0, p1);
}

void TableView::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(TableView*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x380be0)(this, p0, p1);
}

void TableView::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(TableView*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x3809a0)(this, p0, p1);
}

void TableView::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(TableView*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x380b20)(this, p0, p1);
}

void TableView::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(TableView*)>(base+0x37ff50)(this);
}

void TableView::scrollWheel(float p0, float p1) {
    return reinterpret_cast<void(*)(TableView*, float, float)>(base+0x380cd0)(this, p0, p1);
}

void TableView::scrllViewWillBeginDecelerating(CCScrollLayerExt* p0) {
    return reinterpret_cast<void(*)(TableView*, CCScrollLayerExt*)>(base+0x3818a0)(this, p0);
}

void TableView::scrollViewDidEndDecelerating(CCScrollLayerExt* p0) {
    return reinterpret_cast<void(*)(TableView*, CCScrollLayerExt*)>(base+0x3818c0)(this, p0);
}

void TableView::scrollViewTouchMoving(CCScrollLayerExt* p0) {
    return reinterpret_cast<void(*)(TableView*, CCScrollLayerExt*)>(base+0x3818e0)(this, p0);
}

void TableView::scrollViewDidEndMoving(CCScrollLayerExt* p0) {
    return reinterpret_cast<void(*)(TableView*, CCScrollLayerExt*)>(base+0x381900)(this, p0);
}

void cocos2d::CCBezierBy::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCBezierBy*, float)>(base+0x1f6960)(this, p0);
}

void cocos2d::CCBezierBy::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCBezierBy*, cocos2d::CCNode*)>(base+0x1f67a0)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCBezierBy::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCBezierBy*)>(base+0x1f6b40)(this);
}

void cocos2d::CCBezierTo::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCBezierTo*, cocos2d::CCNode*)>(base+0x1f6f30)(this, p0);
}

bool cocos2d::CCDirector::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCDirector*)>(base+0x248df0)(this);
}

cocos2d::CCScheduler* cocos2d::CCDirector::getScheduler() {
    return reinterpret_cast<cocos2d::CCScheduler*(*)(cocos2d::CCDirector*)>(base+0x24af00)(this);
}

void cocos2d::CCDirector::setScheduler(cocos2d::CCScheduler* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCDirector*, cocos2d::CCScheduler*)>(base+0x24aec0)(this, p0);
}

cocos2d::CCActionManager* cocos2d::CCDirector::getActionManager() {
    return reinterpret_cast<cocos2d::CCActionManager*(*)(cocos2d::CCDirector*)>(base+0x24af50)(this);
}

void cocos2d::CCDirector::setActionManager(cocos2d::CCActionManager* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCDirector*, cocos2d::CCActionManager*)>(base+0x24af10)(this, p0);
}

cocos2d::CCTouchDispatcher* cocos2d::CCDirector::getTouchDispatcher() {
    return reinterpret_cast<cocos2d::CCTouchDispatcher*(*)(cocos2d::CCDirector*)>(base+0x24afa0)(this);
}

void cocos2d::CCDirector::setTouchDispatcher(cocos2d::CCTouchDispatcher* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCDirector*, cocos2d::CCTouchDispatcher*)>(base+0x24af60)(this, p0);
}

cocos2d::CCKeypadDispatcher* cocos2d::CCDirector::getKeypadDispatcher() {
    return reinterpret_cast<cocos2d::CCKeypadDispatcher*(*)(cocos2d::CCDirector*)>(base+0x24b090)(this);
}

void cocos2d::CCDirector::setKeypadDispatcher(cocos2d::CCKeypadDispatcher* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCDirector*, cocos2d::CCKeypadDispatcher*)>(base+0x24b050)(this, p0);
}

cocos2d::CCKeyboardDispatcher* cocos2d::CCDirector::getKeyboardDispatcher() {
    return reinterpret_cast<cocos2d::CCKeyboardDispatcher*(*)(cocos2d::CCDirector*)>(base+0x24aff0)(this);
}

void cocos2d::CCDirector::setKeyboardDispatcher(cocos2d::CCKeyboardDispatcher* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCDirector*, cocos2d::CCKeyboardDispatcher*)>(base+0x24afb0)(this, p0);
}

cocos2d::CCMouseDispatcher* cocos2d::CCDirector::getMouseDispatcher() {
    return reinterpret_cast<cocos2d::CCMouseDispatcher*(*)(cocos2d::CCDirector*)>(base+0x24b040)(this);
}

void cocos2d::CCDirector::setMouseDispatcher(cocos2d::CCMouseDispatcher* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCDirector*, cocos2d::CCMouseDispatcher*)>(base+0x24b000)(this, p0);
}

cocos2d::CCAccelerometer* cocos2d::CCDirector::getAccelerometer() {
    return reinterpret_cast<cocos2d::CCAccelerometer*(*)(cocos2d::CCDirector*)>(base+0x24b0e0)(this);
}

void cocos2d::CCDirector::setAccelerometer(cocos2d::CCAccelerometer* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCDirector*, cocos2d::CCAccelerometer*)>(base+0x24b0a0)(this, p0);
}

float cocos2d::CCDirector::getDeltaTime() {
    return reinterpret_cast<float(*)(cocos2d::CCDirector*)>(base+0x249bd0)(this);
}

cocos2d::CCSceneDelegate* cocos2d::CCDirector::getSceneDelegate() const {
    return reinterpret_cast<cocos2d::CCSceneDelegate*(*)(const cocos2d::CCDirector*)>(base+0x24b320)(this);
}

void cocos2d::CCDirector::setSceneDelegate(cocos2d::CCSceneDelegate* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCDirector*, cocos2d::CCSceneDelegate*)>(base+0x24b330)(this, p0);
}

bool cocos2d::CCDrawNode::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCDrawNode*)>(base+0x378e00)(this);
}

void cocos2d::CCGridBase::blit() {
    return reinterpret_cast<void(*)(cocos2d::CCGridBase*)>(base+0x2880e0)(this);
}

void cocos2d::CCGridBase::reuse() {
    return reinterpret_cast<void(*)(cocos2d::CCGridBase*)>(base+0x2880f0)(this);
}

void cocos2d::CCGridBase::calculateVertexPoints() {
    return reinterpret_cast<void(*)(cocos2d::CCGridBase*)>(base+0x288100)(this);
}

bool cocos2d::CCLabelTTF::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCLabelTTF*)>(base+0x1fac60)(this);
}

void cocos2d::CCLabelTTF::setString(char const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelTTF*, char const*)>(base+0x1fad70)(this, p0);
}

char const* cocos2d::CCLabelTTF::getString() {
    return reinterpret_cast<char const*(*)(cocos2d::CCLabelTTF*)>(base+0x1faf70)(this);
}

void cocos2d::CCMenuItem::activate() {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItem*)>(base+0x1fba70)(this);
}

void cocos2d::CCMenuItem::selected() {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItem*)>(base+0x1fb9e0)(this);
}

void cocos2d::CCMenuItem::unselected() {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItem*)>(base+0x1fb9f0)(this);
}

void cocos2d::CCMenuItem::registerScriptTapHandler(int p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItem*, int)>(base+0x1fba00)(this, p0);
}

void cocos2d::CCMenuItem::unregisterScriptTapHandler() {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItem*)>(base+0x1fba30)(this);
}

bool cocos2d::CCMenuItem::isEnabled() {
    return reinterpret_cast<bool(*)(cocos2d::CCMenuItem*)>(base+0x1fbaf0)(this);
}

void cocos2d::CCMenuItem::setEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItem*, bool)>(base+0x1fbae0)(this, p0);
}

bool cocos2d::CCMenuItem::isSelected() {
    return reinterpret_cast<bool(*)(cocos2d::CCMenuItem*)>(base+0x1fbb50)(this);
}

bool cocos2d::CCNodeRGBA::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCNodeRGBA*)>(base+0x124bf0)(this);
}

unsigned char cocos2d::CCNodeRGBA::getOpacity() {
    return reinterpret_cast<unsigned char(*)(cocos2d::CCNodeRGBA*)>(base+0x124cd0)(this);
}

unsigned char cocos2d::CCNodeRGBA::getDisplayedOpacity() {
    return reinterpret_cast<unsigned char(*)(cocos2d::CCNodeRGBA*)>(base+0x124cf0)(this);
}

void cocos2d::CCNodeRGBA::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNodeRGBA*, unsigned char)>(base+0x124d10)(this, p0);
}

void cocos2d::CCNodeRGBA::updateDisplayedOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNodeRGBA*, unsigned char)>(base+0x124e50)(this, p0);
}

bool cocos2d::CCNodeRGBA::isCascadeOpacityEnabled() {
    return reinterpret_cast<bool(*)(cocos2d::CCNodeRGBA*)>(base+0x124fe0)(this);
}

void cocos2d::CCNodeRGBA::setCascadeOpacityEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNodeRGBA*, bool)>(base+0x125000)(this, p0);
}

cocos2d::_ccColor3B const& cocos2d::CCNodeRGBA::getColor() {
    return reinterpret_cast<cocos2d::_ccColor3B const&(*)(cocos2d::CCNodeRGBA*)>(base+0x125020)(this);
}

cocos2d::_ccColor3B const& cocos2d::CCNodeRGBA::getDisplayedColor() {
    return reinterpret_cast<cocos2d::_ccColor3B const&(*)(cocos2d::CCNodeRGBA*)>(base+0x125040)(this);
}

void cocos2d::CCNodeRGBA::setColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNodeRGBA*, cocos2d::_ccColor3B const&)>(base+0x125060)(this, p0);
}

void cocos2d::CCNodeRGBA::updateDisplayedColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNodeRGBA*, cocos2d::_ccColor3B const&)>(base+0x1251e0)(this, p0);
}

bool cocos2d::CCNodeRGBA::isCascadeColorEnabled() {
    return reinterpret_cast<bool(*)(cocos2d::CCNodeRGBA*)>(base+0x125320)(this);
}

void cocos2d::CCNodeRGBA::setCascadeColorEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNodeRGBA*, bool)>(base+0x125340)(this, p0);
}

void cocos2d::CCRipple3D::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCRipple3D*, float)>(base+0x1286c0)(this, p0);
}

void cocos2d::CCRotateBy::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCRotateBy*, float)>(base+0x1f4f90)(this, p0);
}

void cocos2d::CCRotateBy::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCRotateBy*, cocos2d::CCNode*)>(base+0x1f4f40)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCRotateBy::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCRotateBy*)>(base+0x1f5000)(this);
}

void cocos2d::CCRotateTo::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCRotateTo*, float)>(base+0x1f4be0)(this, p0);
}

void cocos2d::CCRotateTo::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCRotateTo*, cocos2d::CCNode*)>(base+0x1f4aa0)(this, p0);
}

bool cocos2d::CCRotateTo::initWithDuration(float p0, float p1, float p2) {
    return reinterpret_cast<bool(*)(cocos2d::CCRotateTo*, float, float, float)>(base+0x1f4980)(this, p0, p1, p2);
}

void cocos2d::CCStopGrid::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCStopGrid*, cocos2d::CCNode*)>(base+0xeeee0)(this, p0);
}

void cocos2d::CCTMXLayer::addChild(cocos2d::CCNode* p0, int p1, int p2) {
    return reinterpret_cast<void(*)(cocos2d::CCTMXLayer*, cocos2d::CCNode*, int, int)>(base+0x1222b0)(this, p0, p1, p2);
}

void cocos2d::CCTMXLayer::removeChild(cocos2d::CCNode* p0, bool p1) {
    return reinterpret_cast<void(*)(cocos2d::CCTMXLayer*, cocos2d::CCNode*, bool)>(base+0x1222c0)(this, p0, p1);
}

cocos2d::CCTMXTilesetInfo* cocos2d::CCTMXLayer::getTileSet() {
    return reinterpret_cast<cocos2d::CCTMXTilesetInfo*(*)(cocos2d::CCTMXLayer*)>(base+0x120d20)(this);
}

void cocos2d::CCTMXLayer::setTileSet(cocos2d::CCTMXTilesetInfo* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTMXLayer*, cocos2d::CCTMXTilesetInfo*)>(base+0x120d30)(this, p0);
}

cocos2d::CCDictionary* cocos2d::CCTMXLayer::getProperties() {
    return reinterpret_cast<cocos2d::CCDictionary*(*)(cocos2d::CCTMXLayer*)>(base+0x1224a0)(this);
}

void cocos2d::CCTMXLayer::setProperties(cocos2d::CCDictionary* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTMXLayer*, cocos2d::CCDictionary*)>(base+0x1224b0)(this, p0);
}

float cocos2d::CCAnimation::getDuration() {
    return reinterpret_cast<float(*)(cocos2d::CCAnimation*)>(base+0x141460)(this);
}

void cocos2d::CCAtlasNode::draw() {
    return reinterpret_cast<void(*)(cocos2d::CCAtlasNode*)>(base+0x1a4f70)(this);
}

void cocos2d::CCAtlasNode::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::CCAtlasNode*, unsigned char)>(base+0x1a51c0)(this, p0);
}

cocos2d::_ccColor3B const& cocos2d::CCAtlasNode::getColor() {
    return reinterpret_cast<cocos2d::_ccColor3B const&(*)(cocos2d::CCAtlasNode*)>(base+0x1a5060)(this);
}

void cocos2d::CCAtlasNode::setColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCAtlasNode*, cocos2d::_ccColor3B const&)>(base+0x1a50b0)(this, p0);
}

void cocos2d::CCAtlasNode::setOpacityModifyRGB(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCAtlasNode*, bool)>(base+0x1a5240)(this, p0);
}

bool cocos2d::CCAtlasNode::isOpacityModifyRGB() {
    return reinterpret_cast<bool(*)(cocos2d::CCAtlasNode*)>(base+0x1a52f0)(this);
}

cocos2d::CCTextureAtlas* cocos2d::CCAtlasNode::getTextureAtlas() {
    return reinterpret_cast<cocos2d::CCTextureAtlas*(*)(cocos2d::CCAtlasNode*)>(base+0x1a54a0)(this);
}

void cocos2d::CCAtlasNode::setTextureAtlas(cocos2d::CCTextureAtlas* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCAtlasNode*, cocos2d::CCTextureAtlas*)>(base+0x1a5460)(this, p0);
}

cocos2d::_ccBlendFunc cocos2d::CCAtlasNode::getBlendFunc() {
    return reinterpret_cast<cocos2d::_ccBlendFunc(*)(cocos2d::CCAtlasNode*)>(base+0x1a5320)(this);
}

void cocos2d::CCAtlasNode::setBlendFunc(cocos2d::_ccBlendFunc p0) {
    return reinterpret_cast<void(*)(cocos2d::CCAtlasNode*, cocos2d::_ccBlendFunc)>(base+0x1a5340)(this, p0);
}

unsigned int cocos2d::CCAtlasNode::getQuadsToDraw() {
    return reinterpret_cast<unsigned int(*)(cocos2d::CCAtlasNode*)>(base+0x1a54b0)(this);
}

void cocos2d::CCAtlasNode::setQuadsToDraw(unsigned int p0) {
    return reinterpret_cast<void(*)(cocos2d::CCAtlasNode*, unsigned int)>(base+0x1a54c0)(this, p0);
}

void cocos2d::CCAtlasNode::updateAtlasValues() {
    return reinterpret_cast<void(*)(cocos2d::CCAtlasNode*)>(base+0x1a4f60)(this);
}

cocos2d::CCTexture2D* cocos2d::CCAtlasNode::getTexture() {
    return reinterpret_cast<cocos2d::CCTexture2D*(*)(cocos2d::CCAtlasNode*)>(base+0x1a5430)(this);
}

void cocos2d::CCAtlasNode::setTexture(cocos2d::CCTexture2D* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCAtlasNode*, cocos2d::CCTexture2D*)>(base+0x1a5360)(this, p0);
}

void cocos2d::CCComponent::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCComponent*, float)>(base+0x5a510)(this, p0);
}

bool cocos2d::CCComponent::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCComponent*)>(base+0x5a4e0)(this);
}

void cocos2d::CCComponent::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCComponent*)>(base+0x5a4f0)(this);
}

void cocos2d::CCComponent::onExit() {
    return reinterpret_cast<void(*)(cocos2d::CCComponent*)>(base+0x5a500)(this);
}

bool cocos2d::CCComponent::serialize(void* p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCComponent*, void*)>(base+0x5a520)(this, p0);
}

bool cocos2d::CCComponent::isEnabled() const {
    return reinterpret_cast<bool(*)(const cocos2d::CCComponent*)>(base+0x5a600)(this);
}

void cocos2d::CCComponent::setEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCComponent*, bool)>(base+0x5a610)(this, p0);
}

void cocos2d::CCDelayTime::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCDelayTime*, float)>(base+0x1f8af0)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCDelayTime::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCDelayTime*)>(base+0x1f8b00)(this);
}

void cocos2d::CCEaseInOut::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEaseInOut*, float)>(base+0x2a1f30)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCEaseInOut::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseInOut*)>(base+0x2a1fa0)(this);
}

void cocos2d::CCFileUtils::purgeCachedEntries() {
    return reinterpret_cast<void(*)(cocos2d::CCFileUtils*)>(base+0x23f100)(this);
}

unsigned char* cocos2d::CCFileUtils::getFileData(char const* p0, char const* p1, unsigned long* p2) {
    return reinterpret_cast<unsigned char*(*)(cocos2d::CCFileUtils*, char const*, char const*, unsigned long*)>(base+0x23f140)(this, p0, p1, p2);
}

unsigned char* cocos2d::CCFileUtils::getFileDataFromZip(char const* p0, char const* p1, unsigned long* p2) {
    return reinterpret_cast<unsigned char*(*)(cocos2d::CCFileUtils*, char const*, char const*, unsigned long*)>(base+0x23f2e0)(this, p0, p1, p2);
}

std::string cocos2d::CCFileUtils::fullPathForFilename(char const* p0, bool p1) {
    return reinterpret_cast<std::string(*)(cocos2d::CCFileUtils*, char const*, bool)>(base+0x23f940)(this, p0, p1);
}

void cocos2d::CCFileUtils::removeFullPath(char const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFileUtils*, char const*)>(base+0x240710)(this, p0);
}

void cocos2d::CCFileUtils::loadFilenameLookupDictionaryFromFile(char const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFileUtils*, char const*)>(base+0x2416f0)(this, p0);
}

void cocos2d::CCFileUtils::setFilenameLookupDictionary(cocos2d::CCDictionary* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFileUtils*, cocos2d::CCDictionary*)>(base+0x241680)(this, p0);
}

char const* cocos2d::CCFileUtils::fullPathFromRelativeFile(char const* p0, char const* p1) {
    return reinterpret_cast<char const*(*)(cocos2d::CCFileUtils*, char const*, char const*)>(base+0x2408c0)(this, p0, p1);
}

void cocos2d::CCFileUtils::setSearchResolutionsOrder(std::vector<std::string> const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFileUtils*, std::vector<std::string> const&)>(base+0x240ac0)(this, p0);
}

void cocos2d::CCFileUtils::addSearchResolutionsOrder(char const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFileUtils*, char const*)>(base+0x240d30)(this, p0);
}

std::vector<std::string,std::allocator<std::string > > const& cocos2d::CCFileUtils::getSearchResolutionsOrder() {
    return reinterpret_cast<std::vector<std::string,std::allocator<std::string > > const&(*)(cocos2d::CCFileUtils*)>(base+0x240df0)(this);
}

void cocos2d::CCFileUtils::setSearchPaths(std::vector<std::string> const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFileUtils*, std::vector<std::string> const&)>(base+0x240e10)(this, p0);
}

void cocos2d::CCFileUtils::addSearchPath(char const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFileUtils*, char const*)>(base+0x241180)(this, p0);
}

void cocos2d::CCFileUtils::removeSearchPath(char const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFileUtils*, char const*)>(base+0x241390)(this, p0);
}

std::vector<std::string,std::allocator<std::string > > const& cocos2d::CCFileUtils::getSearchPaths() {
    return reinterpret_cast<std::vector<std::string,std::allocator<std::string > > const&(*)(cocos2d::CCFileUtils*)>(base+0x240e00)(this);
}

std::string cocos2d::CCFileUtils::getWritablePath2() {
    return reinterpret_cast<std::string(*)(cocos2d::CCFileUtils*)>(base+0x241a90)(this);
}

bool cocos2d::CCFileUtils::isAbsolutePath(std::string const& p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCFileUtils*, std::string const&)>(base+0x2419c0)(this, p0);
}

void cocos2d::CCFileUtils::setPopupNotify(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFileUtils*, bool)>(base+0x2419d0)(this, p0);
}

bool cocos2d::CCFileUtils::isPopupNotify() {
    return reinterpret_cast<bool(*)(cocos2d::CCFileUtils*)>(base+0x2419e0)(this);
}

bool cocos2d::CCFileUtils::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCFileUtils*)>(base+0x23f010)(this);
}

std::string cocos2d::CCFileUtils::getNewFilename(char const* p0) {
    return reinterpret_cast<std::string(*)(cocos2d::CCFileUtils*, char const*)>(base+0x23f3f0)(this, p0);
}

bool cocos2d::CCFileUtils::shouldUseHD() {
    return reinterpret_cast<bool(*)(cocos2d::CCFileUtils*)>(base+0x23f4e0)(this);
}

std::string cocos2d::CCFileUtils::addSuffix(std::string p0, std::string p1) {
    return reinterpret_cast<std::string(*)(cocos2d::CCFileUtils*, std::string, std::string)>(base+0x23f510)(this, p0, p1);
}

std::string cocos2d::CCFileUtils::getPathForFilename(std::string const& p0, std::string const& p1, std::string const& p2) {
    return reinterpret_cast<std::string(*)(cocos2d::CCFileUtils*, std::string const&, std::string const&, std::string const&)>(base+0x23f650)(this, p0, p1, p2);
}

std::string cocos2d::CCFileUtils::getFullPathForDirectoryAndFilename(std::string const& p0, std::string const& p1) {
    return reinterpret_cast<std::string(*)(cocos2d::CCFileUtils*, std::string const&, std::string const&)>(base+0x241900)(this, p0, p1);
}

cocos2d::CCDictionary* cocos2d::CCFileUtils::createCCDictionaryWithContentsOfFile(std::string const& p0) {
    return reinterpret_cast<cocos2d::CCDictionary*(*)(cocos2d::CCFileUtils*, std::string const&)>(base+0x23ec30)(this, p0);
}

bool cocos2d::CCFileUtils::writeToFile(cocos2d::CCDictionary* p0, std::string const& p1) {
    return reinterpret_cast<bool(*)(cocos2d::CCFileUtils*, cocos2d::CCDictionary*, std::string const&)>(base+0x23ec40)(this, p0, p1);
}

cocos2d::CCArray* cocos2d::CCFileUtils::createCCArrayWithContentsOfFile(std::string const& p0) {
    return reinterpret_cast<cocos2d::CCArray*(*)(cocos2d::CCFileUtils*, std::string const&)>(base+0x23ec50)(this, p0);
}

bool cocos2d::CCLayerRGBA::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCLayerRGBA*)>(base+0x273b40)(this);
}

unsigned char cocos2d::CCLayerRGBA::getOpacity() {
    return reinterpret_cast<unsigned char(*)(cocos2d::CCLayerRGBA*)>(base+0x273be0)(this);
}

unsigned char cocos2d::CCLayerRGBA::getDisplayedOpacity() {
    return reinterpret_cast<unsigned char(*)(cocos2d::CCLayerRGBA*)>(base+0x273c00)(this);
}

void cocos2d::CCLayerRGBA::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*, unsigned char)>(base+0x273c20)(this, p0);
}

void cocos2d::CCLayerRGBA::updateDisplayedOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*, unsigned char)>(base+0x273f20)(this, p0);
}

bool cocos2d::CCLayerRGBA::isCascadeOpacityEnabled() {
    return reinterpret_cast<bool(*)(cocos2d::CCLayerRGBA*)>(base+0x2741f0)(this);
}

void cocos2d::CCLayerRGBA::setCascadeOpacityEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*, bool)>(base+0x274210)(this, p0);
}

cocos2d::_ccColor3B const& cocos2d::CCLayerRGBA::getColor() {
    return reinterpret_cast<cocos2d::_ccColor3B const&(*)(cocos2d::CCLayerRGBA*)>(base+0x273d60)(this);
}

cocos2d::_ccColor3B const& cocos2d::CCLayerRGBA::getDisplayedColor() {
    return reinterpret_cast<cocos2d::_ccColor3B const&(*)(cocos2d::CCLayerRGBA*)>(base+0x273d80)(this);
}

void cocos2d::CCLayerRGBA::setColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*, cocos2d::_ccColor3B const&)>(base+0x273da0)(this, p0);
}

void cocos2d::CCLayerRGBA::updateDisplayedColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*, cocos2d::_ccColor3B const&)>(base+0x2740b0)(this, p0);
}

bool cocos2d::CCLayerRGBA::isCascadeColorEnabled() {
    return reinterpret_cast<bool(*)(cocos2d::CCLayerRGBA*)>(base+0x274230)(this);
}

void cocos2d::CCLayerRGBA::setCascadeColorEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerRGBA*, bool)>(base+0x274250)(this, p0);
}

void cocos2d::CCReuseGrid::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCReuseGrid*, cocos2d::CCNode*)>(base+0xef010)(this, p0);
}

void cocos2d::CCScheduler::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCScheduler*, float)>(base+0x2446d0)(this, p0);
}

void cocos2d::CCSplitCols::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSplitCols*, float)>(base+0x45e790)(this, p0);
}

void cocos2d::CCSplitCols::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSplitCols*, cocos2d::CCNode*)>(base+0x45e750)(this, p0);
}

bool cocos2d::CCSplitCols::initWithDuration(float p0, unsigned int p1) {
    return reinterpret_cast<bool(*)(cocos2d::CCSplitCols*, float, unsigned int)>(base+0x45e5d0)(this, p0, p1);
}

void cocos2d::CCSplitRows::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSplitRows*, float)>(base+0x45e3e0)(this, p0);
}

void cocos2d::CCSplitRows::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSplitRows*, cocos2d::CCNode*)>(base+0x45e3a0)(this, p0);
}

bool cocos2d::CCSplitRows::initWithDuration(float p0, unsigned int p1) {
    return reinterpret_cast<bool(*)(cocos2d::CCSplitRows*, float, unsigned int)>(base+0x45e220)(this, p0, p1);
}

cocos2d::CCTexture2DPixelFormat cocos2d::CCTexture2D::getPixelFormat() {
    return reinterpret_cast<cocos2d::CCTexture2DPixelFormat(*)(cocos2d::CCTexture2D*)>(base+0x246420)(this);
}

unsigned int cocos2d::CCTexture2D::getPixelsWide() {
    return reinterpret_cast<unsigned int(*)(cocos2d::CCTexture2D*)>(base+0x246430)(this);
}

unsigned int cocos2d::CCTexture2D::getPixelsHigh() {
    return reinterpret_cast<unsigned int(*)(cocos2d::CCTexture2D*)>(base+0x246440)(this);
}

unsigned int cocos2d::CCTexture2D::getName() {
    return reinterpret_cast<unsigned int(*)(cocos2d::CCTexture2D*)>(base+0x246450)(this);
}

float cocos2d::CCTexture2D::getMaxS() {
    return reinterpret_cast<float(*)(cocos2d::CCTexture2D*)>(base+0x2464e0)(this);
}

void cocos2d::CCTexture2D::setMaxS(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTexture2D*, float)>(base+0x2464f0)(this, p0);
}

float cocos2d::CCTexture2D::getMaxT() {
    return reinterpret_cast<float(*)(cocos2d::CCTexture2D*)>(base+0x246500)(this);
}

void cocos2d::CCTexture2D::setMaxT(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTexture2D*, float)>(base+0x246510)(this, p0);
}

cocos2d::CCSize cocos2d::CCTexture2D::getContentSize() {
    return reinterpret_cast<cocos2d::CCSize(*)(cocos2d::CCTexture2D*)>(base+0x246460)(this);
}

cocos2d::CCGLProgram* cocos2d::CCTexture2D::getShaderProgram() {
    return reinterpret_cast<cocos2d::CCGLProgram*(*)(cocos2d::CCTexture2D*)>(base+0x246520)(this);
}

void cocos2d::CCTexture2D::setShaderProgram(cocos2d::CCGLProgram* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTexture2D*, cocos2d::CCGLProgram*)>(base+0x246530)(this, p0);
}

void cocos2d::CCActionEase::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCActionEase*, float)>(base+0x2a15e0)(this, p0);
}

void cocos2d::CCActionEase::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCActionEase*, cocos2d::CCNode*)>(base+0x2a1580)(this, p0);
}

void cocos2d::CCActionEase::stop() {
    return reinterpret_cast<void(*)(cocos2d::CCActionEase*)>(base+0x2a15b0)(this);
}

cocos2d::CCActionInterval* cocos2d::CCActionEase::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCActionEase*)>(base+0x2a1600)(this);
}

cocos2d::CCActionInterval* cocos2d::CCActionEase::getInnerAction() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCActionEase*)>(base+0x2a1620)(this);
}

void cocos2d::CCDictionary::acceptVisitor(cocos2d::CCDataVisitor& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCDictionary*, cocos2d::CCDataVisitor&)>(base+0x192790)(this, p0);
}

void cocos2d::CCEaseBackIn::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEaseBackIn*, float)>(base+0x2a42a0)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCEaseBackIn::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseBackIn*)>(base+0x2a42d0)(this);
}

cocos2d::CCActionInterval* cocos2d::CCEaseBounce::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseBounce*)>(base+0x2a3890)(this);
}

void cocos2d::CCEaseSineIn::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEaseSineIn*, float)>(base+0x2a2780)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCEaseSineIn::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseSineIn*)>(base+0x2a27c0)(this);
}

void cocos2d::CCGridAction::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCGridAction*, cocos2d::CCNode*)>(base+0xee0d0)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCGridAction::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCGridAction*)>(base+0xee1a0)(this);
}

bool cocos2d::CCGridAction::initWithDuration(float p0, cocos2d::CCSize const& p1) {
    return reinterpret_cast<bool(*)(cocos2d::CCGridAction*, float, cocos2d::CCSize const&)>(base+0xee0a0)(this, p0, p1);
}

cocos2d::CCGridBase* cocos2d::CCGridAction::getGrid() {
    return reinterpret_cast<cocos2d::CCGridBase*(*)(cocos2d::CCGridAction*)>(base+0xee190)(this);
}

void cocos2d::CCLabelAtlas::updateAtlasValues() {
    return reinterpret_cast<void(*)(cocos2d::CCLabelAtlas*)>(base+0x43d590)(this);
}

void cocos2d::CCLabelAtlas::setString(char const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelAtlas*, char const*)>(base+0x43d840)(this, p0);
}

char const* cocos2d::CCLabelAtlas::getString() {
    return reinterpret_cast<char const*(*)(cocos2d::CCLabelAtlas*)>(base+0x43d930)(this);
}

bool cocos2d::CCLayerColor::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCLayerColor*)>(base+0x274800)(this);
}

void cocos2d::CCLayerColor::setContentSize(cocos2d::CCSize const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerColor*, cocos2d::CCSize const&)>(base+0x2749f0)(this, p0);
}

void cocos2d::CCLayerColor::draw() {
    return reinterpret_cast<void(*)(cocos2d::CCLayerColor*)>(base+0x274b50)(this);
}

void cocos2d::CCLayerColor::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerColor*, unsigned char)>(base+0x274db0)(this, p0);
}

void cocos2d::CCLayerColor::setColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerColor*, cocos2d::_ccColor3B const&)>(base+0x274c20)(this, p0);
}

bool cocos2d::CCLayerColor::initWithColor(cocos2d::_ccColor4B const& p0, float p1, float p2) {
    return reinterpret_cast<bool(*)(cocos2d::CCLayerColor*, cocos2d::_ccColor4B const&, float, float)>(base+0x274850)(this, p0, p1, p2);
}

bool cocos2d::CCLayerColor::initWithColor(cocos2d::_ccColor4B const& p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCLayerColor*, cocos2d::_ccColor4B const&)>(base+0x2749a0)(this, p0);
}

cocos2d::_ccBlendFunc cocos2d::CCLayerColor::getBlendFunc() {
    return reinterpret_cast<cocos2d::_ccBlendFunc(*)(cocos2d::CCLayerColor*)>(base+0x274480)(this);
}

void cocos2d::CCLayerColor::setBlendFunc(cocos2d::_ccBlendFunc p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerColor*, cocos2d::_ccBlendFunc)>(base+0x2744a0)(this, p0);
}

void cocos2d::CCLayerColor::updateColor() {
    return reinterpret_cast<void(*)(cocos2d::CCLayerColor*)>(base+0x274ae0)(this);
}

void cocos2d::CCPageTurn3D::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCPageTurn3D*, float)>(base+0x194130)(this, p0);
}

void cocos2d::CCProgressTo::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCProgressTo*, float)>(base+0x23d380)(this, p0);
}

void cocos2d::CCProgressTo::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCProgressTo*, cocos2d::CCNode*)>(base+0x23d340)(this, p0);
}

void cocos2d::CCRemoveSelf::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCRemoveSelf*, float)>(base+0x454770)(this, p0);
}

cocos2d::CCFiniteTimeAction* cocos2d::CCRemoveSelf::reverse() {
    return reinterpret_cast<cocos2d::CCFiniteTimeAction*(*)(cocos2d::CCRemoveSelf*)>(base+0x454790)(this);
}

cocos2d::CCArray* cocos2d::CCTMXMapInfo::getLayers() {
    return reinterpret_cast<cocos2d::CCArray*(*)(cocos2d::CCTMXMapInfo*)>(base+0x283640)(this);
}

void cocos2d::CCTMXMapInfo::setLayers(cocos2d::CCArray* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTMXMapInfo*, cocos2d::CCArray*)>(base+0x283650)(this, p0);
}

cocos2d::CCArray* cocos2d::CCTMXMapInfo::getTilesets() {
    return reinterpret_cast<cocos2d::CCArray*(*)(cocos2d::CCTMXMapInfo*)>(base+0x283690)(this);
}

void cocos2d::CCTMXMapInfo::setTilesets(cocos2d::CCArray* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTMXMapInfo*, cocos2d::CCArray*)>(base+0x2836a0)(this, p0);
}

cocos2d::CCArray* cocos2d::CCTMXMapInfo::getObjectGroups() {
    return reinterpret_cast<cocos2d::CCArray*(*)(cocos2d::CCTMXMapInfo*)>(base+0x2836e0)(this);
}

void cocos2d::CCTMXMapInfo::setObjectGroups(cocos2d::CCArray* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTMXMapInfo*, cocos2d::CCArray*)>(base+0x2836f0)(this, p0);
}

cocos2d::CCDictionary* cocos2d::CCTMXMapInfo::getProperties() {
    return reinterpret_cast<cocos2d::CCDictionary*(*)(cocos2d::CCTMXMapInfo*)>(base+0x283730)(this);
}

void cocos2d::CCTMXMapInfo::setProperties(cocos2d::CCDictionary* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTMXMapInfo*, cocos2d::CCDictionary*)>(base+0x283740)(this, p0);
}

void cocos2d::CCTMXMapInfo::startElement(void* p0, char const* p1, char const** p2) {
    return reinterpret_cast<void(*)(cocos2d::CCTMXMapInfo*, void*, char const*, char const**)>(base+0x2837d0)(this, p0, p1, p2);
}

void cocos2d::CCTMXMapInfo::endElement(void* p0, char const* p1) {
    return reinterpret_cast<void(*)(cocos2d::CCTMXMapInfo*, void*, char const*)>(base+0x286210)(this, p0, p1);
}

void cocos2d::CCTMXMapInfo::textHandler(void* p0, char const* p1, int p2) {
    return reinterpret_cast<void(*)(cocos2d::CCTMXMapInfo*, void*, char const*, int)>(base+0x286460)(this, p0, p1, p2);
}

void cocos2d::CCActionTween::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCActionTween*, float)>(base+0x447720)(this, p0);
}

void cocos2d::CCActionTween::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCActionTween*, cocos2d::CCNode*)>(base+0x4476f0)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCActionTween::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCActionTween*)>(base+0x447760)(this);
}

void cocos2d::CCApplication::setAnimationInterval(double p0) {
    return reinterpret_cast<void(*)(cocos2d::CCApplication*, double)>(base+0x1a3ee0)(this, p0);
}

cocos2d::LanguageType cocos2d::CCApplication::getCurrentLanguage() {
    return reinterpret_cast<cocos2d::LanguageType(*)(cocos2d::CCApplication*)>(base+0x1a3f40)(this);
}

cocos2d::TargetPlatform cocos2d::CCApplication::getTargetPlatform() {
    return reinterpret_cast<cocos2d::TargetPlatform(*)(cocos2d::CCApplication*)>(base+0x1a3f20)(this);
}

void cocos2d::CCApplication::openURL(char const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCApplication*, char const*)>(base+0x1a4550)(this, p0);
}

void cocos2d::CCEaseBackOut::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEaseBackOut*, float)>(base+0x2a4480)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCEaseBackOut::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseBackOut*)>(base+0x2a44c0)(this);
}

cocos2d::CCActionInterval* cocos2d::CCEaseElastic::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseElastic*)>(base+0x2a2dd0)(this);
}

void cocos2d::CCEaseSineOut::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEaseSineOut*, float)>(base+0x2a2970)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCEaseSineOut::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseSineOut*)>(base+0x2a29a0)(this);
}

bool cocos2d::CCIMEDelegate::attachWithIME() {
    return reinterpret_cast<bool(*)(cocos2d::CCIMEDelegate*)>(base+0x2776a0)(this);
}

bool cocos2d::CCIMEDelegate::detachWithIME() {
    return reinterpret_cast<bool(*)(cocos2d::CCIMEDelegate*)>(base+0x277880)(this);
}

void cocos2d::CCJumpTiles3D::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCJumpTiles3D*, float)>(base+0x45df60)(this, p0);
}

bool cocos2d::CCLabelBMFont::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCLabelBMFont*)>(base+0x347b10)(this);
}

void cocos2d::CCLabelBMFont::setScaleX(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*, float)>(base+0x34a5b0)(this, p0);
}

void cocos2d::CCLabelBMFont::setScaleY(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*, float)>(base+0x34a5d0)(this, p0);
}

void cocos2d::CCLabelBMFont::setScale(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*, float)>(base+0x34a590)(this, p0);
}

void cocos2d::CCLabelBMFont::setAnchorPoint(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*, cocos2d::CCPoint const&)>(base+0x349440)(this, p0);
}

void cocos2d::CCLabelBMFont::setString(char const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*, char const*)>(base+0x348990)(this, p0);
}

void cocos2d::CCLabelBMFont::setString(char const* p0, bool p1) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*, char const*, bool)>(base+0x3489e0)(this, p0, p1);
}

char const* cocos2d::CCLabelBMFont::getString() {
    return reinterpret_cast<char const*(*)(cocos2d::CCLabelBMFont*)>(base+0x348bf0)(this);
}

void cocos2d::CCLabelBMFont::setCString(char const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*, char const*)>(base+0x348c10)(this, p0);
}

void cocos2d::CCLabelBMFont::updateLabel() {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*)>(base+0x349480)(this);
}

void cocos2d::CCLabelBMFont::setAlignment(cocos2d::CCTextAlignment p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*, cocos2d::CCTextAlignment)>(base+0x34a530)(this, p0);
}

void cocos2d::CCLabelBMFont::setWidth(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*, float)>(base+0x34a550)(this, p0);
}

void cocos2d::CCLabelBMFont::setLineBreakWithoutSpace(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*, bool)>(base+0x34a570)(this, p0);
}

bool cocos2d::CCLabelBMFont::isOpacityModifyRGB() {
    return reinterpret_cast<bool(*)(cocos2d::CCLabelBMFont*)>(base+0x3490e0)(this);
}

void cocos2d::CCLabelBMFont::setOpacityModifyRGB(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*, bool)>(base+0x348f70)(this, p0);
}

unsigned char cocos2d::CCLabelBMFont::getOpacity() {
    return reinterpret_cast<unsigned char(*)(cocos2d::CCLabelBMFont*)>(base+0x348df0)(this);
}

unsigned char cocos2d::CCLabelBMFont::getDisplayedOpacity() {
    return reinterpret_cast<unsigned char(*)(cocos2d::CCLabelBMFont*)>(base+0x348e10)(this);
}

void cocos2d::CCLabelBMFont::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*, unsigned char)>(base+0x348e30)(this, p0);
}

void cocos2d::CCLabelBMFont::updateDisplayedOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*, unsigned char)>(base+0x349100)(this, p0);
}

bool cocos2d::CCLabelBMFont::isCascadeOpacityEnabled() {
    return reinterpret_cast<bool(*)(cocos2d::CCLabelBMFont*)>(base+0x349400)(this);
}

void cocos2d::CCLabelBMFont::setCascadeOpacityEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*, bool)>(base+0x349420)(this, p0);
}

cocos2d::_ccColor3B const& cocos2d::CCLabelBMFont::getColor() {
    return reinterpret_cast<cocos2d::_ccColor3B const&(*)(cocos2d::CCLabelBMFont*)>(base+0x348c30)(this);
}

cocos2d::_ccColor3B const& cocos2d::CCLabelBMFont::getDisplayedColor() {
    return reinterpret_cast<cocos2d::_ccColor3B const&(*)(cocos2d::CCLabelBMFont*)>(base+0x348c50)(this);
}

void cocos2d::CCLabelBMFont::setColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*, cocos2d::_ccColor3B const&)>(base+0x348c70)(this, p0);
}

void cocos2d::CCLabelBMFont::updateDisplayedColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*, cocos2d::_ccColor3B const&)>(base+0x349210)(this, p0);
}

bool cocos2d::CCLabelBMFont::isCascadeColorEnabled() {
    return reinterpret_cast<bool(*)(cocos2d::CCLabelBMFont*)>(base+0x3493c0)(this);
}

void cocos2d::CCLabelBMFont::setCascadeColorEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*, bool)>(base+0x3493e0)(this, p0);
}

void cocos2d::CCLabelBMFont::setString(unsigned short* p0, bool p1) {
    return reinterpret_cast<void(*)(cocos2d::CCLabelBMFont*, unsigned short*, bool)>(base+0x348a60)(this, p0, p1);
}

void cocos2d::CCOrbitCamera::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCOrbitCamera*, float)>(base+0x1b30c0)(this, p0);
}

void cocos2d::CCOrbitCamera::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCOrbitCamera*, cocos2d::CCNode*)>(base+0x1b2de0)(this, p0);
}

void cocos2d::CCReverseTime::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCReverseTime*, float)>(base+0x1f8f70)(this, p0);
}

void cocos2d::CCReverseTime::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCReverseTime*, cocos2d::CCNode*)>(base+0x1f8f00)(this, p0);
}

void cocos2d::CCReverseTime::stop() {
    return reinterpret_cast<void(*)(cocos2d::CCReverseTime*)>(base+0x1f8f40)(this);
}

cocos2d::CCArray* cocos2d::CCTMXTiledMap::getObjectGroups() {
    return reinterpret_cast<cocos2d::CCArray*(*)(cocos2d::CCTMXTiledMap*)>(base+0x2a63e0)(this);
}

void cocos2d::CCTMXTiledMap::setObjectGroups(cocos2d::CCArray* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTMXTiledMap*, cocos2d::CCArray*)>(base+0x2a63f0)(this, p0);
}

cocos2d::CCDictionary* cocos2d::CCTMXTiledMap::getProperties() {
    return reinterpret_cast<cocos2d::CCDictionary*(*)(cocos2d::CCTMXTiledMap*)>(base+0x2a6430)(this);
}

void cocos2d::CCTMXTiledMap::setProperties(cocos2d::CCDictionary* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTMXTiledMap*, cocos2d::CCDictionary*)>(base+0x2a6440)(this, p0);
}

void cocos2d::CCTiledGrid3D::blit() {
    return reinterpret_cast<void(*)(cocos2d::CCTiledGrid3D*)>(base+0x2891c0)(this);
}

void cocos2d::CCTiledGrid3D::reuse() {
    return reinterpret_cast<void(*)(cocos2d::CCTiledGrid3D*)>(base+0x289780)(this);
}

void cocos2d::CCTiledGrid3D::calculateVertexPoints() {
    return reinterpret_cast<void(*)(cocos2d::CCTiledGrid3D*)>(base+0x289260)(this);
}

bool cocos2d::CCClippingNode::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCClippingNode*)>(base+0x4193e0)(this);
}

void cocos2d::CCClippingNode::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCClippingNode*)>(base+0x419470)(this);
}

void cocos2d::CCClippingNode::onEnterTransitionDidFinish() {
    return reinterpret_cast<void(*)(cocos2d::CCClippingNode*)>(base+0x4194a0)(this);
}

void cocos2d::CCClippingNode::onExit() {
    return reinterpret_cast<void(*)(cocos2d::CCClippingNode*)>(base+0x419500)(this);
}

void cocos2d::CCClippingNode::onExitTransitionDidStart() {
    return reinterpret_cast<void(*)(cocos2d::CCClippingNode*)>(base+0x4194d0)(this);
}

void cocos2d::CCClippingNode::visit() {
    return reinterpret_cast<void(*)(cocos2d::CCClippingNode*)>(base+0x419530)(this);
}

bool cocos2d::CCClippingNode::init(cocos2d::CCNode* p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCClippingNode*, cocos2d::CCNode*)>(base+0x419400)(this, p0);
}

void cocos2d::CCEaseBounceIn::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEaseBounceIn*, float)>(base+0x2a3a40)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCEaseBounceIn::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseBounceIn*)>(base+0x2a3b20)(this);
}

void cocos2d::CCMotionStreak::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMotionStreak*, float)>(base+0x2edb40)(this, p0);
}

void cocos2d::CCMotionStreak::setPosition(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMotionStreak*, cocos2d::CCPoint const&)>(base+0x2ed8b0)(this, p0);
}

void cocos2d::CCMotionStreak::draw() {
    return reinterpret_cast<void(*)(cocos2d::CCMotionStreak*)>(base+0x2ee1b0)(this);
}

unsigned char cocos2d::CCMotionStreak::getOpacity() {
    return reinterpret_cast<unsigned char(*)(cocos2d::CCMotionStreak*)>(base+0x2eda60)(this);
}

void cocos2d::CCMotionStreak::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMotionStreak*, unsigned char)>(base+0x2eda40)(this, p0);
}

void cocos2d::CCMotionStreak::setOpacityModifyRGB(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMotionStreak*, bool)>(base+0x2eda80)(this, p0);
}

bool cocos2d::CCMotionStreak::isOpacityModifyRGB() {
    return reinterpret_cast<bool(*)(cocos2d::CCMotionStreak*)>(base+0x2edaa0)(this);
}

cocos2d::CCTexture2D* cocos2d::CCMotionStreak::getTexture() {
    return reinterpret_cast<cocos2d::CCTexture2D*(*)(cocos2d::CCMotionStreak*)>(base+0x2ed950)(this);
}

void cocos2d::CCMotionStreak::setTexture(cocos2d::CCTexture2D* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMotionStreak*, cocos2d::CCTexture2D*)>(base+0x2ed970)(this, p0);
}

void cocos2d::CCMotionStreak::setBlendFunc(cocos2d::_ccBlendFunc p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMotionStreak*, cocos2d::_ccBlendFunc)>(base+0x2eda00)(this, p0);
}

cocos2d::_ccBlendFunc cocos2d::CCMotionStreak::getBlendFunc() {
    return reinterpret_cast<cocos2d::_ccBlendFunc(*)(cocos2d::CCMotionStreak*)>(base+0x2eda20)(this);
}

void cocos2d::CCParallaxNode::removeChild(cocos2d::CCNode* p0, bool p1) {
    return reinterpret_cast<void(*)(cocos2d::CCParallaxNode*, cocos2d::CCNode*, bool)>(base+0x2712c0)(this, p0, p1);
}

void cocos2d::CCParallaxNode::removeAllChildrenWithCleanup(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParallaxNode*, bool)>(base+0x271350)(this, p0);
}

void cocos2d::CCParallaxNode::visit() {
    return reinterpret_cast<void(*)(cocos2d::CCParallaxNode*)>(base+0x271410)(this);
}

void cocos2d::CCParallaxNode::addChild(cocos2d::CCNode* p0, unsigned int p1, cocos2d::CCPoint const& p2, cocos2d::CCPoint const& p3) {
    return reinterpret_cast<void(*)(cocos2d::CCParallaxNode*, cocos2d::CCNode*, unsigned int, cocos2d::CCPoint const&, cocos2d::CCPoint const&)>(base+0x271100)(this, p0, p1, p2, p3);
}

void cocos2d::CCParallaxNode::addChild(cocos2d::CCNode* p0, unsigned int p1, int p2) {
    return reinterpret_cast<void(*)(cocos2d::CCParallaxNode*, cocos2d::CCNode*, unsigned int, int)>(base+0x2710f0)(this, p0, p1, p2);
}

void cocos2d::CCShakyTiles3D::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCShakyTiles3D*, float)>(base+0x45b900)(this, p0);
}

bool cocos2d::CCShakyTiles3D::initWithDuration(float p0, cocos2d::CCSize const& p1, int p2, bool p3) {
    return reinterpret_cast<bool(*)(cocos2d::CCShakyTiles3D*, float, cocos2d::CCSize const&, int, bool)>(base+0x45b7b0)(this, p0, p1, p2, p3);
}

void cocos2d::CCShuffleTiles::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCShuffleTiles*, float)>(base+0x45c830)(this, p0);
}

void cocos2d::CCShuffleTiles::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCShuffleTiles*, cocos2d::CCNode*)>(base+0x45c590)(this, p0);
}

bool cocos2d::CCShuffleTiles::initWithDuration(float p0, cocos2d::CCSize const& p1, unsigned int p2) {
    return reinterpret_cast<bool(*)(cocos2d::CCShuffleTiles*, float, cocos2d::CCSize const&, unsigned int)>(base+0x45c140)(this, p0, p1, p2);
}

cocos2d::CCDictionary* cocos2d::CCTMXLayerInfo::getProperties() {
    return reinterpret_cast<cocos2d::CCDictionary*(*)(cocos2d::CCTMXLayerInfo*)>(base+0x282900)(this);
}

void cocos2d::CCTMXLayerInfo::setProperties(cocos2d::CCDictionary* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTMXLayerInfo*, cocos2d::CCDictionary*)>(base+0x282910)(this, p0);
}

void cocos2d::CCTextFieldTTF::draw() {
    return reinterpret_cast<void(*)(cocos2d::CCTextFieldTTF*)>(base+0x126a00)(this);
}

void cocos2d::CCTextFieldTTF::setString(char const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTextFieldTTF*, char const*)>(base+0x126ac0)(this, p0);
}

char const* cocos2d::CCTextFieldTTF::getString() {
    return reinterpret_cast<char const*(*)(cocos2d::CCTextFieldTTF*)>(base+0x126d00)(this);
}

bool cocos2d::CCTextFieldTTF::attachWithIME() {
    return reinterpret_cast<bool(*)(cocos2d::CCTextFieldTTF*)>(base+0x126370)(this);
}

bool cocos2d::CCTextFieldTTF::detachWithIME() {
    return reinterpret_cast<bool(*)(cocos2d::CCTextFieldTTF*)>(base+0x1263f0)(this);
}

cocos2d::_ccColor3B const& cocos2d::CCTextFieldTTF::getColorSpaceHolder() {
    return reinterpret_cast<cocos2d::_ccColor3B const&(*)(cocos2d::CCTextFieldTTF*)>(base+0x126a90)(this);
}

void cocos2d::CCTextFieldTTF::setColorSpaceHolder(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTextFieldTTF*, cocos2d::_ccColor3B const&)>(base+0x126aa0)(this, p0);
}

void cocos2d::CCTextFieldTTF::setPlaceHolder(char const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTextFieldTTF*, char const*)>(base+0x126d20)(this, p0);
}

char const* cocos2d::CCTextFieldTTF::getPlaceHolder() {
    return reinterpret_cast<char const*(*)(cocos2d::CCTextFieldTTF*)>(base+0x126e10)(this);
}

void cocos2d::CCTextFieldTTF::setSecureTextEntry(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTextFieldTTF*, bool)>(base+0x126e20)(this, p0);
}

bool cocos2d::CCTextFieldTTF::isSecureTextEntry() {
    return reinterpret_cast<bool(*)(cocos2d::CCTextFieldTTF*)>(base+0x126e70)(this);
}

bool cocos2d::CCTextFieldTTF::canAttachWithIME() {
    return reinterpret_cast<bool(*)(cocos2d::CCTextFieldTTF*)>(base+0x126470)(this);
}

bool cocos2d::CCTextFieldTTF::canDetachWithIME() {
    return reinterpret_cast<bool(*)(cocos2d::CCTextFieldTTF*)>(base+0x1264d0)(this);
}

void cocos2d::CCTextFieldTTF::insertText(char const* p0, int p1) {
    return reinterpret_cast<void(*)(cocos2d::CCTextFieldTTF*, char const*, int)>(base+0x126530)(this, p0, p1);
}

void cocos2d::CCTextFieldTTF::deleteBackward() {
    return reinterpret_cast<void(*)(cocos2d::CCTextFieldTTF*)>(base+0x126760)(this);
}

char const* cocos2d::CCTextFieldTTF::getContentText() {
    return reinterpret_cast<char const*(*)(cocos2d::CCTextFieldTTF*)>(base+0x1269e0)(this);
}

unsigned int cocos2d::CCTextureAtlas::getTotalQuads() {
    return reinterpret_cast<unsigned int(*)(cocos2d::CCTextureAtlas*)>(base+0x26fe70)(this);
}

unsigned int cocos2d::CCTextureAtlas::getCapacity() {
    return reinterpret_cast<unsigned int(*)(cocos2d::CCTextureAtlas*)>(base+0x26fe80)(this);
}

cocos2d::CCTexture2D* cocos2d::CCTextureAtlas::getTexture() {
    return reinterpret_cast<cocos2d::CCTexture2D*(*)(cocos2d::CCTextureAtlas*)>(base+0x26fe90)(this);
}

void cocos2d::CCTextureAtlas::setTexture(cocos2d::CCTexture2D* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTextureAtlas*, cocos2d::CCTexture2D*)>(base+0x26fea0)(this, p0);
}

cocos2d::_ccV3F_C4B_T2F_Quad* cocos2d::CCTextureAtlas::getQuads() {
    return reinterpret_cast<cocos2d::_ccV3F_C4B_T2F_Quad*(*)(cocos2d::CCTextureAtlas*)>(base+0x26fee0)(this);
}

void cocos2d::CCTextureAtlas::setQuads(cocos2d::_ccV3F_C4B_T2F_Quad* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTextureAtlas*, cocos2d::_ccV3F_C4B_T2F_Quad*)>(base+0x26fef0)(this, p0);
}

void cocos2d::CCTileMapAtlas::updateAtlasValues() {
    return reinterpret_cast<void(*)(cocos2d::CCTileMapAtlas*)>(base+0x105f00)(this);
}

cocos2d::sImageTGA* cocos2d::CCTileMapAtlas::getTGAInfo() {
    return reinterpret_cast<cocos2d::sImageTGA*(*)(cocos2d::CCTileMapAtlas*)>(base+0x106120)(this);
}

void cocos2d::CCTileMapAtlas::setTGAInfo(cocos2d::sImageTGA* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTileMapAtlas*, cocos2d::sImageTGA*)>(base+0x106110)(this, p0);
}

bool cocos2d::CCTouchHandler::initWithDelegate(cocos2d::CCTouchDelegate* p0, int p1) {
    return reinterpret_cast<bool(*)(cocos2d::CCTouchHandler*, cocos2d::CCTouchDelegate*, int)>(base+0x247d10)(this, p0, p1);
}

void cocos2d::CCTurnOffTiles::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTurnOffTiles*, float)>(base+0x45d870)(this, p0);
}

void cocos2d::CCTurnOffTiles::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTurnOffTiles*, cocos2d::CCNode*)>(base+0x45d7c0)(this, p0);
}

bool cocos2d::CCTurnOffTiles::initWithDuration(float p0, cocos2d::CCSize const& p1, unsigned int p2) {
    return reinterpret_cast<bool(*)(cocos2d::CCTurnOffTiles*, float, cocos2d::CCSize const&, unsigned int)>(base+0x45d4d0)(this, p0, p1, p2);
}

void cocos2d::CCWavesTiles3D::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCWavesTiles3D*, float)>(base+0x45dba0)(this, p0);
}

bool cocos2d::CCWavesTiles3D::initWithDuration(float p0, cocos2d::CCSize const& p1, unsigned int p2, float p3) {
    return reinterpret_cast<bool(*)(cocos2d::CCWavesTiles3D*, float, cocos2d::CCSize const&, unsigned int, float)>(base+0x45da40)(this, p0, p1, p2, p3);
}

void cocos2d::CCActionInstant::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCActionInstant*, float)>(base+0x4542f0)(this, p0);
}

bool cocos2d::CCActionInstant::isDone() {
    return reinterpret_cast<bool(*)(cocos2d::CCActionInstant*)>(base+0x4542c0)(this);
}

void cocos2d::CCActionInstant::step(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCActionInstant*, float)>(base+0x4542d0)(this, p0);
}

cocos2d::CCFiniteTimeAction* cocos2d::CCActionInstant::reverse() {
    return reinterpret_cast<cocos2d::CCFiniteTimeAction*(*)(cocos2d::CCActionInstant*)>(base+0x454300)(this);
}

void cocos2d::CCActionManager::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCActionManager*, float)>(base+0x10c9a0)(this, p0);
}

void cocos2d::CCEaseBackInOut::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEaseBackInOut*, float)>(base+0x2a4670)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCEaseBackInOut::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseBackInOut*)>(base+0x2a4700)(this);
}

void cocos2d::CCEaseBounceOut::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEaseBounceOut*, float)>(base+0x2a3cd0)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCEaseBounceOut::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseBounceOut*)>(base+0x2a3d90)(this);
}

void cocos2d::CCEaseElasticIn::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEaseElasticIn*, float)>(base+0x2a2fb0)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCEaseElasticIn::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseElasticIn*)>(base+0x2a3050)(this);
}

void cocos2d::CCEaseSineInOut::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEaseSineInOut*, float)>(base+0x2a2b50)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCEaseSineInOut::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseSineInOut*)>(base+0x2a2b90)(this);
}

bool cocos2d::CCKeypadHandler::initWithDelegate(cocos2d::CCKeypadDelegate* p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCKeypadHandler*, cocos2d::CCKeypadDelegate*)>(base+0x1ff290)(this, p0);
}

bool cocos2d::CCLayerGradient::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCLayerGradient*)>(base+0x275280)(this);
}

void cocos2d::CCLayerGradient::updateColor() {
    return reinterpret_cast<void(*)(cocos2d::CCLayerGradient*)>(base+0x2753c0)(this);
}

bool cocos2d::CCLayerGradient::initWithColor(cocos2d::_ccColor4B const& p0, cocos2d::_ccColor4B const& p1) {
    return reinterpret_cast<bool(*)(cocos2d::CCLayerGradient*, cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&)>(base+0x2752b0)(this, p0, p1);
}

bool cocos2d::CCLayerGradient::initWithColor(cocos2d::_ccColor4B const& p0, cocos2d::_ccColor4B const& p1, cocos2d::CCPoint const& p2) {
    return reinterpret_cast<bool(*)(cocos2d::CCLayerGradient*, cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&, cocos2d::CCPoint const&)>(base+0x275310)(this, p0, p1, p2);
}

cocos2d::_ccColor3B const& cocos2d::CCLayerGradient::getStartColor() {
    return reinterpret_cast<cocos2d::_ccColor3B const&(*)(cocos2d::CCLayerGradient*)>(base+0x275610)(this);
}

void cocos2d::CCLayerGradient::setStartColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerGradient*, cocos2d::_ccColor3B const&)>(base+0x275620)(this, p0);
}

cocos2d::_ccColor3B const& cocos2d::CCLayerGradient::getEndColor() {
    return reinterpret_cast<cocos2d::_ccColor3B const&(*)(cocos2d::CCLayerGradient*)>(base+0x275670)(this);
}

void cocos2d::CCLayerGradient::setEndColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerGradient*, cocos2d::_ccColor3B const&)>(base+0x275640)(this, p0);
}

unsigned char cocos2d::CCLayerGradient::getStartOpacity() {
    return reinterpret_cast<unsigned char(*)(cocos2d::CCLayerGradient*)>(base+0x2756a0)(this);
}

void cocos2d::CCLayerGradient::setStartOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerGradient*, unsigned char)>(base+0x275680)(this, p0);
}

unsigned char cocos2d::CCLayerGradient::getEndOpacity() {
    return reinterpret_cast<unsigned char(*)(cocos2d::CCLayerGradient*)>(base+0x2756d0)(this);
}

void cocos2d::CCLayerGradient::setEndOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerGradient*, unsigned char)>(base+0x2756b0)(this, p0);
}

cocos2d::CCPoint const& cocos2d::CCLayerGradient::getVector() {
    return reinterpret_cast<cocos2d::CCPoint const&(*)(cocos2d::CCLayerGradient*)>(base+0x275710)(this);
}

void cocos2d::CCLayerGradient::setVector(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerGradient*, cocos2d::CCPoint const&)>(base+0x2756e0)(this, p0);
}

void cocos2d::CCLayerGradient::setCompressedInterpolation(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayerGradient*, bool)>(base+0x275730)(this, p0);
}

bool cocos2d::CCLayerGradient::isCompressedInterpolation() {
    return reinterpret_cast<bool(*)(cocos2d::CCLayerGradient*)>(base+0x275720)(this);
}

bool cocos2d::CCMenuItemImage::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCMenuItemImage*)>(base+0x1fd750)(this);
}

void cocos2d::CCMenuItemLabel::activate() {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemLabel*)>(base+0x1fc240)(this);
}

void cocos2d::CCMenuItemLabel::selected() {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemLabel*)>(base+0x1fc2e0)(this);
}

void cocos2d::CCMenuItemLabel::unselected() {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemLabel*)>(base+0x1fc380)(this);
}

void cocos2d::CCMenuItemLabel::setEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemLabel*, bool)>(base+0x1fc3f0)(this, p0);
}

cocos2d::_ccColor3B const& cocos2d::CCMenuItemLabel::getDisabledColor() {
    return reinterpret_cast<cocos2d::_ccColor3B const&(*)(cocos2d::CCMenuItemLabel*)>(base+0x1fbb80)(this);
}

void cocos2d::CCMenuItemLabel::setDisabledColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemLabel*, cocos2d::_ccColor3B const&)>(base+0x1fbb90)(this, p0);
}

cocos2d::CCNode* cocos2d::CCMenuItemLabel::getLabel() {
    return reinterpret_cast<cocos2d::CCNode*(*)(cocos2d::CCMenuItemLabel*)>(base+0x1fbbb0)(this);
}

void cocos2d::CCMenuItemLabel::setLabel(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemLabel*, cocos2d::CCNode*)>(base+0x1fbbc0)(this, p0);
}

void cocos2d::CCMouseDelegate::rightKeyDown() {
    return reinterpret_cast<void(*)(cocos2d::CCMouseDelegate*)>(base+0x61b0)(this);
}

void cocos2d::CCMouseDelegate::rightKeyUp() {
    return reinterpret_cast<void(*)(cocos2d::CCMouseDelegate*)>(base+0x61c0)(this);
}

void cocos2d::CCMouseDelegate::scrollWheel(float p0, float p1) {
    return reinterpret_cast<void(*)(cocos2d::CCMouseDelegate*, float, float)>(base+0x61d0)(this, p0, p1);
}

void cocos2d::CCPrettyPrinter::visitObject(cocos2d::CCObject const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCPrettyPrinter*, cocos2d::CCObject const*)>(base+0x2763e0)(this, p0);
}

void cocos2d::CCPrettyPrinter::visit(cocos2d::CCBool const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCPrettyPrinter*, cocos2d::CCBool const*)>(base+0x276470)(this, p0);
}

void cocos2d::CCPrettyPrinter::visit(cocos2d::CCInteger const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCPrettyPrinter*, cocos2d::CCInteger const*)>(base+0x276510)(this, p0);
}

void cocos2d::CCPrettyPrinter::visit(cocos2d::CCFloat const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCPrettyPrinter*, cocos2d::CCFloat const*)>(base+0x2765a0)(this, p0);
}

void cocos2d::CCPrettyPrinter::visit(cocos2d::CCDouble const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCPrettyPrinter*, cocos2d::CCDouble const*)>(base+0x276630)(this, p0);
}

void cocos2d::CCPrettyPrinter::visit(cocos2d::CCString const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCPrettyPrinter*, cocos2d::CCString const*)>(base+0x2766c0)(this, p0);
}

void cocos2d::CCPrettyPrinter::visit(cocos2d::CCArray const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCPrettyPrinter*, cocos2d::CCArray const*)>(base+0x276700)(this, p0);
}

void cocos2d::CCPrettyPrinter::visit(cocos2d::CCDictionary const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCPrettyPrinter*, cocos2d::CCDictionary const*)>(base+0x276b50)(this, p0);
}

void cocos2d::CCPrettyPrinter::visit(cocos2d::CCSet const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCPrettyPrinter*, cocos2d::CCSet const*)>(base+0x276f20)(this, p0);
}

void cocos2d::CCPrettyPrinter::clear() {
    return reinterpret_cast<void(*)(cocos2d::CCPrettyPrinter*)>(base+0x2763a0)(this);
}

std::string cocos2d::CCPrettyPrinter::getResult() {
    return reinterpret_cast<std::string(*)(cocos2d::CCPrettyPrinter*)>(base+0x2763c0)(this);
}

void cocos2d::CCProgressTimer::draw() {
    return reinterpret_cast<void(*)(cocos2d::CCProgressTimer*)>(base+0x36e8f0)(this);
}

void cocos2d::CCProgressTimer::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::CCProgressTimer*, unsigned char)>(base+0x36c720)(this, p0);
}

void cocos2d::CCProgressTimer::setColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCProgressTimer*, cocos2d::_ccColor3B const&)>(base+0x36c590)(this, p0);
}

cocos2d::_ccColor3B const& cocos2d::CCProgressTimer::getColor() const {
    return reinterpret_cast<cocos2d::_ccColor3B const&(*)(const cocos2d::CCProgressTimer*)>(base+0x36c700)(this);
}

unsigned char cocos2d::CCProgressTimer::getOpacity() const {
    return reinterpret_cast<unsigned char(*)(const cocos2d::CCProgressTimer*)>(base+0x36c820)(this);
}

cocos2d::CCPoint cocos2d::CCProgressTimer::getMidpoint() {
    return reinterpret_cast<cocos2d::CCPoint(*)(cocos2d::CCProgressTimer*)>(base+0x36e7c0)(this);
}

void cocos2d::CCProgressTimer::setMidpoint(cocos2d::CCPoint p0) {
    return reinterpret_cast<void(*)(cocos2d::CCProgressTimer*, cocos2d::CCPoint)>(base+0x36e7e0)(this, p0);
}

void cocos2d::CCRenderTexture::draw() {
    return reinterpret_cast<void(*)(cocos2d::CCRenderTexture*)>(base+0x35d570)(this);
}

void cocos2d::CCRenderTexture::visit() {
    return reinterpret_cast<void(*)(cocos2d::CCRenderTexture*)>(base+0x35d4e0)(this);
}

cocos2d::CCSprite* cocos2d::CCRenderTexture::getSprite() {
    return reinterpret_cast<cocos2d::CCSprite*(*)(cocos2d::CCRenderTexture*)>(base+0x35c620)(this);
}

void cocos2d::CCRenderTexture::setSprite(cocos2d::CCSprite* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCRenderTexture*, cocos2d::CCSprite*)>(base+0x35c630)(this, p0);
}

bool cocos2d::CCRepeatForever::isDone() {
    return reinterpret_cast<bool(*)(cocos2d::CCRepeatForever*)>(base+0x1f3b40)(this);
}

void cocos2d::CCRepeatForever::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCRepeatForever*, cocos2d::CCNode*)>(base+0x1f3a90)(this, p0);
}

void cocos2d::CCRepeatForever::step(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCRepeatForever*, float)>(base+0x1f3ad0)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCRepeatForever::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCRepeatForever*)>(base+0x1f3b50)(this);
}

void cocos2d::CCAccelAmplitude::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCAccelAmplitude*, float)>(base+0xeea70)(this, p0);
}

void cocos2d::CCAccelAmplitude::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCAccelAmplitude*, cocos2d::CCNode*)>(base+0xeea40)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCAccelAmplitude::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCAccelAmplitude*)>(base+0xeeac0)(this);
}

bool cocos2d::CCActionInterval::isDone() {
    return reinterpret_cast<bool(*)(cocos2d::CCActionInterval*)>(base+0x1f2640)(this);
}

void cocos2d::CCActionInterval::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCActionInterval*, cocos2d::CCNode*)>(base+0x1f2700)(this, p0);
}

void cocos2d::CCActionInterval::step(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCActionInterval*, float)>(base+0x1f2660)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCActionInterval::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCActionInterval*)>(base+0x1f2720)(this);
}

void cocos2d::CCEaseElasticOut::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEaseElasticOut*, float)>(base+0x2a3250)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCEaseElasticOut::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseElasticOut*)>(base+0x2a32f0)(this);
}

cocos2d::CCActionInterval* cocos2d::CCEaseRateAction::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseRateAction*)>(base+0x2a1930)(this);
}

float cocos2d::CCFadeOutBLTiles::testFunc(cocos2d::CCSize const& p0, float p1) {
    return reinterpret_cast<float(*)(cocos2d::CCFadeOutBLTiles*, cocos2d::CCSize const&, float)>(base+0x45cf10)(this, p0, p1);
}

void cocos2d::CCFadeOutTRTiles::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFadeOutTRTiles*, float)>(base+0x45ccc0)(this, p0);
}

float cocos2d::CCFadeOutTRTiles::testFunc(cocos2d::CCSize const& p0, float p1) {
    return reinterpret_cast<float(*)(cocos2d::CCFadeOutTRTiles*, cocos2d::CCSize const&, float)>(base+0x45cad0)(this, p0, p1);
}

void cocos2d::CCFadeOutTRTiles::transformTile(cocos2d::CCPoint const& p0, float p1) {
    return reinterpret_cast<void(*)(cocos2d::CCFadeOutTRTiles*, cocos2d::CCPoint const&, float)>(base+0x45cbc0)(this, p0, p1);
}

float cocos2d::CCFadeOutUpTiles::testFunc(cocos2d::CCSize const& p0, float p1) {
    return reinterpret_cast<float(*)(cocos2d::CCFadeOutUpTiles*, cocos2d::CCSize const&, float)>(base+0x45d070)(this, p0, p1);
}

void cocos2d::CCFadeOutUpTiles::transformTile(cocos2d::CCPoint const& p0, float p1) {
    return reinterpret_cast<void(*)(cocos2d::CCFadeOutUpTiles*, cocos2d::CCPoint const&, float)>(base+0x45d0f0)(this, p0, p1);
}

void cocos2d::CCMenuItemSprite::selected() {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemSprite*)>(base+0x1fd3f0)(this);
}

void cocos2d::CCMenuItemSprite::unselected() {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemSprite*)>(base+0x1fd470)(this);
}

void cocos2d::CCMenuItemSprite::setEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemSprite*, bool)>(base+0x1fd4e0)(this, p0);
}

cocos2d::CCNode* cocos2d::CCMenuItemSprite::getNormalImage() {
    return reinterpret_cast<cocos2d::CCNode*(*)(cocos2d::CCMenuItemSprite*)>(base+0x1fcee0)(this);
}

void cocos2d::CCMenuItemSprite::setNormalImage(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemSprite*, cocos2d::CCNode*)>(base+0x1fcef0)(this, p0);
}

cocos2d::CCNode* cocos2d::CCMenuItemSprite::getSelectedImage() {
    return reinterpret_cast<cocos2d::CCNode*(*)(cocos2d::CCMenuItemSprite*)>(base+0x1fcfc0)(this);
}

void cocos2d::CCMenuItemSprite::setSelectedImage(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemSprite*, cocos2d::CCNode*)>(base+0x1fcfd0)(this, p0);
}

cocos2d::CCNode* cocos2d::CCMenuItemSprite::getDisabledImage() {
    return reinterpret_cast<cocos2d::CCNode*(*)(cocos2d::CCMenuItemSprite*)>(base+0x1fd070)(this);
}

void cocos2d::CCMenuItemSprite::setDisabledImage(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemSprite*, cocos2d::CCNode*)>(base+0x1fd080)(this, p0);
}

void cocos2d::CCMenuItemSprite::updateImagesVisibility() {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemSprite*)>(base+0x1fd510)(this);
}

void cocos2d::CCMenuItemToggle::activate() {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemToggle*)>(base+0x1fe950)(this);
}

void cocos2d::CCMenuItemToggle::selected() {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemToggle*)>(base+0x1fe8f0)(this);
}

void cocos2d::CCMenuItemToggle::unselected() {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemToggle*)>(base+0x1fe920)(this);
}

void cocos2d::CCMenuItemToggle::setEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemToggle*, bool)>(base+0x1fea00)(this, p0);
}

unsigned int cocos2d::CCMenuItemToggle::getSelectedIndex() {
    return reinterpret_cast<unsigned int(*)(cocos2d::CCMenuItemToggle*)>(base+0x1fe8e0)(this);
}

void cocos2d::CCMenuItemToggle::setSelectedIndex(unsigned int p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemToggle*, unsigned int)>(base+0x1fe7e0)(this, p0);
}

cocos2d::CCArray* cocos2d::CCMenuItemToggle::getSubItems() {
    return reinterpret_cast<cocos2d::CCArray*(*)(cocos2d::CCMenuItemToggle*)>(base+0x1fde50)(this);
}

void cocos2d::CCMenuItemToggle::setSubItems(cocos2d::CCArray* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMenuItemToggle*, cocos2d::CCArray*)>(base+0x1fde10)(this, p0);
}

void cocos2d::CCParticleSystem::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46be50)(this, p0);
}

bool cocos2d::CCParticleSystem::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCParticleSystem*)>(base+0x4692b0)(this);
}

void cocos2d::CCParticleSystem::setScaleX(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46cdf0)(this, p0);
}

void cocos2d::CCParticleSystem::setScaleY(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46ce10)(this, p0);
}

void cocos2d::CCParticleSystem::setScale(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46cdb0)(this, p0);
}

void cocos2d::CCParticleSystem::setRotation(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46cdd0)(this, p0);
}

cocos2d::CCParticleBatchNode* cocos2d::CCParticleSystem::getBatchNode() {
    return reinterpret_cast<cocos2d::CCParticleBatchNode*(*)(cocos2d::CCParticleSystem*)>(base+0x46ccd0)(this);
}

void cocos2d::CCParticleSystem::setBatchNode(cocos2d::CCParticleBatchNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, cocos2d::CCParticleBatchNode*)>(base+0x46cce0)(this, p0);
}

unsigned int cocos2d::CCParticleSystem::getParticleCount() {
    return reinterpret_cast<unsigned int(*)(cocos2d::CCParticleSystem*)>(base+0x46c8a0)(this);
}

float cocos2d::CCParticleSystem::getDuration() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c8b0)(this);
}

void cocos2d::CCParticleSystem::setDuration(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c8c0)(this, p0);
}

cocos2d::CCPoint const& cocos2d::CCParticleSystem::getSourcePosition() {
    return reinterpret_cast<cocos2d::CCPoint const&(*)(cocos2d::CCParticleSystem*)>(base+0x46c8d0)(this);
}

void cocos2d::CCParticleSystem::setSourcePosition(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, cocos2d::CCPoint const&)>(base+0x46c8e0)(this, p0);
}

cocos2d::CCPoint const& cocos2d::CCParticleSystem::getPosVar() {
    return reinterpret_cast<cocos2d::CCPoint const&(*)(cocos2d::CCParticleSystem*)>(base+0x46c900)(this);
}

void cocos2d::CCParticleSystem::setPosVar(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, cocos2d::CCPoint const&)>(base+0x46c910)(this, p0);
}

float cocos2d::CCParticleSystem::getLife() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c930)(this);
}

void cocos2d::CCParticleSystem::setLife(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c940)(this, p0);
}

float cocos2d::CCParticleSystem::getLifeVar() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c950)(this);
}

void cocos2d::CCParticleSystem::setLifeVar(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c960)(this, p0);
}

float cocos2d::CCParticleSystem::getAngle() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c970)(this);
}

void cocos2d::CCParticleSystem::setAngle(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c980)(this, p0);
}

float cocos2d::CCParticleSystem::getAngleVar() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c990)(this);
}

void cocos2d::CCParticleSystem::setAngleVar(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c9a0)(this, p0);
}

cocos2d::CCPoint const& cocos2d::CCParticleSystem::getGravity() {
    return reinterpret_cast<cocos2d::CCPoint const&(*)(cocos2d::CCParticleSystem*)>(base+0x46c780)(this);
}

void cocos2d::CCParticleSystem::setGravity(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, cocos2d::CCPoint const&)>(base+0x46c760)(this, p0);
}

float cocos2d::CCParticleSystem::getSpeed() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c7a0)(this);
}

void cocos2d::CCParticleSystem::setSpeed(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c790)(this, p0);
}

float cocos2d::CCParticleSystem::getSpeedVar() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c7c0)(this);
}

void cocos2d::CCParticleSystem::setSpeedVar(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c7b0)(this, p0);
}

float cocos2d::CCParticleSystem::getTangentialAccel() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c6d0)(this);
}

void cocos2d::CCParticleSystem::setTangentialAccel(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c6c0)(this, p0);
}

float cocos2d::CCParticleSystem::getTangentialAccelVar() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c6f0)(this);
}

void cocos2d::CCParticleSystem::setTangentialAccelVar(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c6e0)(this, p0);
}

float cocos2d::CCParticleSystem::getRadialAccel() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c710)(this);
}

void cocos2d::CCParticleSystem::setRadialAccel(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c700)(this, p0);
}

float cocos2d::CCParticleSystem::getRadialAccelVar() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c730)(this);
}

void cocos2d::CCParticleSystem::setRadialAccelVar(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c720)(this, p0);
}

bool cocos2d::CCParticleSystem::getRotationIsDir() {
    return reinterpret_cast<bool(*)(cocos2d::CCParticleSystem*)>(base+0x46c750)(this);
}

void cocos2d::CCParticleSystem::setRotationIsDir(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, bool)>(base+0x46c740)(this, p0);
}

float cocos2d::CCParticleSystem::getStartRadius() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c7e0)(this);
}

void cocos2d::CCParticleSystem::setStartRadius(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c7d0)(this, p0);
}

float cocos2d::CCParticleSystem::getStartRadiusVar() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c800)(this);
}

void cocos2d::CCParticleSystem::setStartRadiusVar(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c7f0)(this, p0);
}

float cocos2d::CCParticleSystem::getEndRadius() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c820)(this);
}

void cocos2d::CCParticleSystem::setEndRadius(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c810)(this, p0);
}

float cocos2d::CCParticleSystem::getEndRadiusVar() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c840)(this);
}

void cocos2d::CCParticleSystem::setEndRadiusVar(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c830)(this, p0);
}

float cocos2d::CCParticleSystem::getRotatePerSecond() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c860)(this);
}

void cocos2d::CCParticleSystem::setRotatePerSecond(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c850)(this, p0);
}

float cocos2d::CCParticleSystem::getRotatePerSecondVar() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c880)(this);
}

void cocos2d::CCParticleSystem::setRotatePerSecondVar(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c870)(this, p0);
}

bool cocos2d::CCParticleSystem::isActive() {
    return reinterpret_cast<bool(*)(cocos2d::CCParticleSystem*)>(base+0x46c890)(this);
}

bool cocos2d::CCParticleSystem::isBlendAdditive() {
    return reinterpret_cast<bool(*)(cocos2d::CCParticleSystem*)>(base+0x46c6a0)(this);
}

void cocos2d::CCParticleSystem::setBlendAdditive(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, bool)>(base+0x46c640)(this, p0);
}

float cocos2d::CCParticleSystem::getStartSize() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c9b0)(this);
}

void cocos2d::CCParticleSystem::setStartSize(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c9c0)(this, p0);
}

float cocos2d::CCParticleSystem::getStartSizeVar() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c9d0)(this);
}

void cocos2d::CCParticleSystem::setStartSizeVar(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46c9e0)(this, p0);
}

float cocos2d::CCParticleSystem::getEndSize() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46c9f0)(this);
}

void cocos2d::CCParticleSystem::setEndSize(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46ca00)(this, p0);
}

float cocos2d::CCParticleSystem::getEndSizeVar() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46ca10)(this);
}

void cocos2d::CCParticleSystem::setEndSizeVar(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46ca20)(this, p0);
}

cocos2d::_ccColor4F const& cocos2d::CCParticleSystem::getStartColor() {
    return reinterpret_cast<cocos2d::_ccColor4F const&(*)(cocos2d::CCParticleSystem*)>(base+0x46ca30)(this);
}

void cocos2d::CCParticleSystem::setStartColor(cocos2d::_ccColor4F const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, cocos2d::_ccColor4F const&)>(base+0x46ca40)(this, p0);
}

cocos2d::_ccColor4F const& cocos2d::CCParticleSystem::getStartColorVar() {
    return reinterpret_cast<cocos2d::_ccColor4F const&(*)(cocos2d::CCParticleSystem*)>(base+0x46ca60)(this);
}

void cocos2d::CCParticleSystem::setStartColorVar(cocos2d::_ccColor4F const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, cocos2d::_ccColor4F const&)>(base+0x46ca70)(this, p0);
}

cocos2d::_ccColor4F const& cocos2d::CCParticleSystem::getEndColor() {
    return reinterpret_cast<cocos2d::_ccColor4F const&(*)(cocos2d::CCParticleSystem*)>(base+0x46ca90)(this);
}

void cocos2d::CCParticleSystem::setEndColor(cocos2d::_ccColor4F const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, cocos2d::_ccColor4F const&)>(base+0x46caa0)(this, p0);
}

cocos2d::_ccColor4F const& cocos2d::CCParticleSystem::getEndColorVar() {
    return reinterpret_cast<cocos2d::_ccColor4F const&(*)(cocos2d::CCParticleSystem*)>(base+0x46cac0)(this);
}

void cocos2d::CCParticleSystem::setEndColorVar(cocos2d::_ccColor4F const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, cocos2d::_ccColor4F const&)>(base+0x46cad0)(this, p0);
}

float cocos2d::CCParticleSystem::getStartSpin() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46caf0)(this);
}

void cocos2d::CCParticleSystem::setStartSpin(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46cb00)(this, p0);
}

float cocos2d::CCParticleSystem::getStartSpinVar() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46cb10)(this);
}

void cocos2d::CCParticleSystem::setStartSpinVar(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46cb20)(this, p0);
}

float cocos2d::CCParticleSystem::getEndSpin() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46cb30)(this);
}

void cocos2d::CCParticleSystem::setEndSpin(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46cb40)(this, p0);
}

float cocos2d::CCParticleSystem::getEndSpinVar() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46cb50)(this);
}

void cocos2d::CCParticleSystem::setEndSpinVar(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46cb60)(this, p0);
}

float cocos2d::CCParticleSystem::getEmissionRate() {
    return reinterpret_cast<float(*)(cocos2d::CCParticleSystem*)>(base+0x46cb70)(this);
}

void cocos2d::CCParticleSystem::setEmissionRate(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, float)>(base+0x46cb80)(this, p0);
}

unsigned int cocos2d::CCParticleSystem::getTotalParticles() {
    return reinterpret_cast<unsigned int(*)(cocos2d::CCParticleSystem*)>(base+0x46cb90)(this);
}

void cocos2d::CCParticleSystem::setTotalParticles(unsigned int p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, unsigned int)>(base+0x46cba0)(this, p0);
}

cocos2d::CCTexture2D* cocos2d::CCParticleSystem::getTexture() {
    return reinterpret_cast<cocos2d::CCTexture2D*(*)(cocos2d::CCParticleSystem*)>(base+0x46c620)(this);
}

void cocos2d::CCParticleSystem::setTexture(cocos2d::CCTexture2D* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, cocos2d::CCTexture2D*)>(base+0x46c4f0)(this, p0);
}

cocos2d::_ccBlendFunc cocos2d::CCParticleSystem::getBlendFunc() {
    return reinterpret_cast<cocos2d::_ccBlendFunc(*)(cocos2d::CCParticleSystem*)>(base+0x46cbb0)(this);
}

void cocos2d::CCParticleSystem::setBlendFunc(cocos2d::_ccBlendFunc p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, cocos2d::_ccBlendFunc)>(base+0x46cbd0)(this, p0);
}

bool cocos2d::CCParticleSystem::getOpacityModifyRGB() {
    return reinterpret_cast<bool(*)(cocos2d::CCParticleSystem*)>(base+0x46cc50)(this);
}

void cocos2d::CCParticleSystem::setOpacityModifyRGB(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, bool)>(base+0x46cc60)(this, p0);
}

cocos2d::tCCPositionType cocos2d::CCParticleSystem::getPositionType() {
    return reinterpret_cast<cocos2d::tCCPositionType(*)(cocos2d::CCParticleSystem*)>(base+0x46cc70)(this);
}

void cocos2d::CCParticleSystem::setPositionType(cocos2d::tCCPositionType p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, cocos2d::tCCPositionType)>(base+0x46cc80)(this, p0);
}

bool cocos2d::CCParticleSystem::isAutoRemoveOnFinish() {
    return reinterpret_cast<bool(*)(cocos2d::CCParticleSystem*)>(base+0x46cc90)(this);
}

void cocos2d::CCParticleSystem::setAutoRemoveOnFinish(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, bool)>(base+0x46cca0)(this, p0);
}

int cocos2d::CCParticleSystem::getEmitterMode() {
    return reinterpret_cast<int(*)(cocos2d::CCParticleSystem*)>(base+0x46ccb0)(this);
}

void cocos2d::CCParticleSystem::setEmitterMode(int p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, int)>(base+0x46ccc0)(this, p0);
}

bool cocos2d::CCParticleSystem::initWithTotalParticles(unsigned int p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCParticleSystem*, unsigned int)>(base+0x46b130)(this, p0);
}

void cocos2d::CCParticleSystem::updateQuadWithParticle(cocos2d::sCCParticle* p0, cocos2d::CCPoint const& p1) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*, cocos2d::sCCParticle*, cocos2d::CCPoint const&)>(base+0x46c4d0)(this, p0, p1);
}

void cocos2d::CCParticleSystem::postStep() {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*)>(base+0x46c4e0)(this);
}

void cocos2d::CCParticleSystem::updateWithNoTime() {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*)>(base+0x46c4b0)(this);
}

void cocos2d::CCParticleSystem::updateBlendFunc() {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystem*)>(base+0x46c5b0)(this);
}

void cocos2d::CCProgressFromTo::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCProgressFromTo*, float)>(base+0x23d650)(this, p0);
}

void cocos2d::CCProgressFromTo::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCProgressFromTo*, cocos2d::CCNode*)>(base+0x23d640)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCProgressFromTo::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCProgressFromTo*)>(base+0x23d590)(this);
}

cocos2d::CCDictionary* cocos2d::CCTMXObjectGroup::getProperties() {
    return reinterpret_cast<cocos2d::CCDictionary*(*)(cocos2d::CCTMXObjectGroup*)>(base+0x25f800)(this);
}

void cocos2d::CCTMXObjectGroup::setProperties(cocos2d::CCDictionary* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTMXObjectGroup*, cocos2d::CCDictionary*)>(base+0x25f810)(this, p0);
}

cocos2d::CCArray* cocos2d::CCTMXObjectGroup::getObjects() {
    return reinterpret_cast<cocos2d::CCArray*(*)(cocos2d::CCTMXObjectGroup*)>(base+0x25f850)(this);
}

void cocos2d::CCTMXObjectGroup::setObjects(cocos2d::CCArray* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTMXObjectGroup*, cocos2d::CCArray*)>(base+0x25f860)(this, p0);
}

void cocos2d::CCTargetedAction::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTargetedAction*, float)>(base+0x1f9d40)(this, p0);
}

void cocos2d::CCTargetedAction::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTargetedAction*, cocos2d::CCNode*)>(base+0x1f9d00)(this, p0);
}

void cocos2d::CCTargetedAction::stop() {
    return reinterpret_cast<void(*)(cocos2d::CCTargetedAction*)>(base+0x1f9d30)(this);
}

void cocos2d::CCTransitionFade::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionFade*)>(base+0x8eb30)(this);
}

void cocos2d::CCTransitionFade::onExit() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionFade*)>(base+0x8ec60)(this);
}

bool cocos2d::CCTransitionFade::initWithDuration(float p0, cocos2d::CCScene* p1) {
    return reinterpret_cast<bool(*)(cocos2d::CCTransitionFade*, float, cocos2d::CCScene*)>(base+0x8eb10)(this, p0, p1);
}

bool cocos2d::CCTransitionFade::initWithDuration(float p0, cocos2d::CCScene* p1, cocos2d::_ccColor3B const& p2) {
    return reinterpret_cast<bool(*)(cocos2d::CCTransitionFade*, float, cocos2d::CCScene*, cocos2d::_ccColor3B const&)>(base+0x8ea50)(this, p0, p1, p2);
}

void cocos2d::CCDeccelAmplitude::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCDeccelAmplitude*, float)>(base+0xeedb0)(this, p0);
}

void cocos2d::CCDeccelAmplitude::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCDeccelAmplitude*, cocos2d::CCNode*)>(base+0xeed80)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCDeccelAmplitude::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCDeccelAmplitude*)>(base+0xeee10)(this);
}

cocos2d::CCSize const& cocos2d::CCEGLViewProtocol::getFrameSize() const {
    return reinterpret_cast<cocos2d::CCSize const&(*)(const cocos2d::CCEGLViewProtocol*)>(base+0x29d950)(this);
}

void cocos2d::CCEGLViewProtocol::setFrameSize(float p0, float p1) {
    return reinterpret_cast<void(*)(cocos2d::CCEGLViewProtocol*, float, float)>(base+0x29d960)(this, p0, p1);
}

cocos2d::CCSize cocos2d::CCEGLViewProtocol::getVisibleSize() const {
    return reinterpret_cast<cocos2d::CCSize(*)(const cocos2d::CCEGLViewProtocol*)>(base+0x29d9a0)(this);
}

cocos2d::CCPoint cocos2d::CCEGLViewProtocol::getVisibleOrigin() const {
    return reinterpret_cast<cocos2d::CCPoint(*)(const cocos2d::CCEGLViewProtocol*)>(base+0x29d9f0)(this);
}

void cocos2d::CCEGLViewProtocol::setDesignResolutionSize(float p0, float p1, ResolutionPolicy p2) {
    return reinterpret_cast<void(*)(cocos2d::CCEGLViewProtocol*, float, float, ResolutionPolicy)>(base+0x29d7c0)(this, p0, p1, p2);
}

cocos2d::CCSize const& cocos2d::CCEGLViewProtocol::getDesignResolutionSize() const {
    return reinterpret_cast<cocos2d::CCSize const&(*)(const cocos2d::CCEGLViewProtocol*)>(base+0x29d940)(this);
}

void cocos2d::CCEGLViewProtocol::setTouchDelegate(cocos2d::EGLTouchDelegate* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEGLViewProtocol*, cocos2d::EGLTouchDelegate*)>(base+0x29da60)(this, p0);
}

void cocos2d::CCEGLViewProtocol::setViewPortInPoints(float p0, float p1, float p2, float p3) {
    return reinterpret_cast<void(*)(cocos2d::CCEGLViewProtocol*, float, float, float, float)>(base+0x29da70)(this, p0, p1, p2, p3);
}

void cocos2d::CCEGLViewProtocol::setScissorInPoints(float p0, float p1, float p2, float p3) {
    return reinterpret_cast<void(*)(cocos2d::CCEGLViewProtocol*, float, float, float, float)>(base+0x29dab0)(this, p0, p1, p2, p3);
}

bool cocos2d::CCEGLViewProtocol::isScissorEnabled() {
    return reinterpret_cast<bool(*)(cocos2d::CCEGLViewProtocol*)>(base+0x29daf0)(this);
}

cocos2d::CCRect cocos2d::CCEGLViewProtocol::getScissorRect() {
    return reinterpret_cast<cocos2d::CCRect(*)(cocos2d::CCEGLViewProtocol*)>(base+0x29db10)(this);
}

void cocos2d::CCEGLViewProtocol::setViewName(char const* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEGLViewProtocol*, char const*)>(base+0x29dba0)(this, p0);
}

void cocos2d::CCEGLViewProtocol::handleTouchesBegin(int p0, int* p1, float* p2, float* p3) {
    return reinterpret_cast<void(*)(cocos2d::CCEGLViewProtocol*, int, int*, float*, float*)>(base+0x29dbd0)(this, p0, p1, p2, p3);
}

void cocos2d::CCEGLViewProtocol::handleTouchesMove(int p0, int* p1, float* p2, float* p3) {
    return reinterpret_cast<void(*)(cocos2d::CCEGLViewProtocol*, int, int*, float*, float*)>(base+0x29deb0)(this, p0, p1, p2, p3);
}

void cocos2d::CCEGLViewProtocol::handleTouchesEnd(int p0, int* p1, float* p2, float* p3) {
    return reinterpret_cast<void(*)(cocos2d::CCEGLViewProtocol*, int, int*, float*, float*)>(base+0x29e1d0)(this, p0, p1, p2, p3);
}

void cocos2d::CCEGLViewProtocol::handleTouchesCancel(int p0, int* p1, float* p2, float* p3) {
    return reinterpret_cast<void(*)(cocos2d::CCEGLViewProtocol*, int, int*, float*, float*)>(base+0x29e260)(this, p0, p1, p2, p3);
}

void cocos2d::CCEGLViewProtocol::pollInputEvents() {
    return reinterpret_cast<void(*)(cocos2d::CCEGLViewProtocol*)>(base+0x29e320)(this);
}

void cocos2d::CCEaseBounceInOut::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEaseBounceInOut*, float)>(base+0x2a3f40)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCEaseBounceInOut::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseBounceInOut*)>(base+0x2a40f0)(this);
}

bool cocos2d::CCKeyboardHandler::initWithDelegate(cocos2d::CCKeyboardDelegate* p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCKeyboardHandler*, cocos2d::CCKeyboardDelegate*)>(base+0x241ff0)(this, p0);
}

bool cocos2d::CCSpriteBatchNode::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCSpriteBatchNode*)>(base+0xbb680)(this);
}

void cocos2d::CCSpriteBatchNode::addChild(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSpriteBatchNode*, cocos2d::CCNode*)>(base+0xbbb40)(this, p0);
}

void cocos2d::CCSpriteBatchNode::addChild(cocos2d::CCNode* p0, int p1) {
    return reinterpret_cast<void(*)(cocos2d::CCSpriteBatchNode*, cocos2d::CCNode*, int)>(base+0xbbb50)(this, p0, p1);
}

void cocos2d::CCSpriteBatchNode::addChild(cocos2d::CCNode* p0, int p1, int p2) {
    return reinterpret_cast<void(*)(cocos2d::CCSpriteBatchNode*, cocos2d::CCNode*, int, int)>(base+0xbb930)(this, p0, p1, p2);
}

void cocos2d::CCSpriteBatchNode::removeChild(cocos2d::CCNode* p0, bool p1) {
    return reinterpret_cast<void(*)(cocos2d::CCSpriteBatchNode*, cocos2d::CCNode*, bool)>(base+0xbbbb0)(this, p0, p1);
}

void cocos2d::CCSpriteBatchNode::removeAllChildrenWithCleanup(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSpriteBatchNode*, bool)>(base+0xbbe30)(this, p0);
}

void cocos2d::CCSpriteBatchNode::reorderChild(cocos2d::CCNode* p0, int p1) {
    return reinterpret_cast<void(*)(cocos2d::CCSpriteBatchNode*, cocos2d::CCNode*, int)>(base+0xbbb60)(this, p0, p1);
}

void cocos2d::CCSpriteBatchNode::sortAllChildren() {
    return reinterpret_cast<void(*)(cocos2d::CCSpriteBatchNode*)>(base+0xbbee0)(this);
}

void cocos2d::CCSpriteBatchNode::draw() {
    return reinterpret_cast<void(*)(cocos2d::CCSpriteBatchNode*)>(base+0xbc540)(this);
}

void cocos2d::CCSpriteBatchNode::visit() {
    return reinterpret_cast<void(*)(cocos2d::CCSpriteBatchNode*)>(base+0xbb880)(this);
}

cocos2d::CCTexture2D* cocos2d::CCSpriteBatchNode::getTexture() {
    return reinterpret_cast<cocos2d::CCTexture2D*(*)(cocos2d::CCSpriteBatchNode*)>(base+0xbcd70)(this);
}

void cocos2d::CCSpriteBatchNode::setTexture(cocos2d::CCTexture2D* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSpriteBatchNode*, cocos2d::CCTexture2D*)>(base+0xbcda0)(this, p0);
}

void cocos2d::CCSpriteBatchNode::setBlendFunc(cocos2d::_ccBlendFunc p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSpriteBatchNode*, cocos2d::_ccBlendFunc)>(base+0xbcd30)(this, p0);
}

cocos2d::_ccBlendFunc cocos2d::CCSpriteBatchNode::getBlendFunc() {
    return reinterpret_cast<cocos2d::_ccBlendFunc(*)(cocos2d::CCSpriteBatchNode*)>(base+0xbcd50)(this);
}

void cocos2d::CCTouchDispatcher::touchesBegan(cocos2d::CCSet* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::CCTouchDispatcher*, cocos2d::CCSet*, cocos2d::CCEvent*)>(base+0x282050)(this, p0, p1);
}

void cocos2d::CCTouchDispatcher::touchesMoved(cocos2d::CCSet* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::CCTouchDispatcher*, cocos2d::CCSet*, cocos2d::CCEvent*)>(base+0x282090)(this, p0, p1);
}

void cocos2d::CCTouchDispatcher::touchesEnded(cocos2d::CCSet* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::CCTouchDispatcher*, cocos2d::CCSet*, cocos2d::CCEvent*)>(base+0x2820d0)(this, p0, p1);
}

void cocos2d::CCTouchDispatcher::touchesCancelled(cocos2d::CCSet* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::CCTouchDispatcher*, cocos2d::CCSet*, cocos2d::CCEvent*)>(base+0x282110)(this, p0, p1);
}

void cocos2d::CCTransitionFlipX::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionFlipX*)>(base+0x8cf90)(this);
}

void cocos2d::CCTransitionFlipY::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionFlipY*)>(base+0x8d390)(this);
}

void cocos2d::CCTransitionScene::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionScene*)>(base+0x8a1a0)(this);
}

void cocos2d::CCTransitionScene::onExit() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionScene*)>(base+0x8a1f0)(this);
}

void cocos2d::CCTransitionScene::cleanup() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionScene*)>(base+0x8a250)(this);
}

void cocos2d::CCTransitionScene::draw() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionScene*)>(base+0x89f40)(this);
}

bool cocos2d::CCTransitionScene::initWithDuration(float p0, cocos2d::CCScene* p1) {
    return reinterpret_cast<bool(*)(cocos2d::CCTransitionScene*, float, cocos2d::CCScene*)>(base+0x89ea0)(this, p0, p1);
}

void cocos2d::CCTransitionScene::sceneOrder() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionScene*)>(base+0x89f30)(this);
}

void cocos2d::CCCardinalSplineBy::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCCardinalSplineBy*, cocos2d::CCNode*)>(base+0x1684b0)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCCardinalSplineBy::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCCardinalSplineBy*)>(base+0x168160)(this);
}

void cocos2d::CCCardinalSplineBy::updatePosition(cocos2d::CCPoint& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCCardinalSplineBy*, cocos2d::CCPoint&)>(base+0x168110)(this, p0);
}

void cocos2d::CCCardinalSplineTo::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCCardinalSplineTo*, float)>(base+0x167c40)(this, p0);
}

void cocos2d::CCCardinalSplineTo::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCCardinalSplineTo*, cocos2d::CCNode*)>(base+0x167aa0)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCCardinalSplineTo::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCCardinalSplineTo*)>(base+0x167f60)(this);
}

void cocos2d::CCCardinalSplineTo::updatePosition(cocos2d::CCPoint& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCCardinalSplineTo*, cocos2d::CCPoint&)>(base+0x167f30)(this, p0);
}

void cocos2d::CCEaseElasticInOut::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEaseElasticInOut*, float)>(base+0x2a34f0)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCEaseElasticInOut::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseElasticInOut*)>(base+0x2a3620)(this);
}

float cocos2d::CCFadeOutDownTiles::testFunc(cocos2d::CCSize const& p0, float p1) {
    return reinterpret_cast<float(*)(cocos2d::CCFadeOutDownTiles*, cocos2d::CCSize const&, float)>(base+0x45d280)(this, p0, p1);
}

void cocos2d::CCKeyboardDelegate::keyUp(cocos2d::enumKeyCodes p0) {
    return reinterpret_cast<void(*)(cocos2d::CCKeyboardDelegate*, cocos2d::enumKeyCodes)>(base+0x61a0)(this, p0);
}

void cocos2d::CCShatteredTiles3D::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCShatteredTiles3D*, float)>(base+0x45bdc0)(this, p0);
}

bool cocos2d::CCShatteredTiles3D::initWithDuration(float p0, cocos2d::CCSize const& p1, int p2, bool p3) {
    return reinterpret_cast<bool(*)(cocos2d::CCShatteredTiles3D*, float, cocos2d::CCSize const&, int, bool)>(base+0x45bc70)(this, p0, p1, p2, p3);
}

cocos2d::CCActionInterval* cocos2d::CCTransitionFadeBL::actionWithSize(cocos2d::CCSize const& p0) {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCTransitionFadeBL*, cocos2d::CCSize const&)>(base+0x90380)(this, p0);
}

void cocos2d::CCTransitionFadeTR::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionFadeTR*)>(base+0x8ffc0)(this);
}

void cocos2d::CCTransitionFadeTR::sceneOrder() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionFadeTR*)>(base+0x8ffb0)(this);
}

cocos2d::CCActionInterval* cocos2d::CCTransitionFadeTR::actionWithSize(cocos2d::CCSize const& p0) {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCTransitionFadeTR*, cocos2d::CCSize const&)>(base+0x900c0)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCTransitionFadeTR::easeActionWithAction(cocos2d::CCActionInterval* p0) {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCTransitionFadeTR*, cocos2d::CCActionInterval*)>(base+0x900e0)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCTransitionFadeUp::actionWithSize(cocos2d::CCSize const& p0) {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCTransitionFadeUp*, cocos2d::CCSize const&)>(base+0x90620)(this, p0);
}

void cocos2d::CCEaseExponentialIn::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEaseExponentialIn*, float)>(base+0x2a2160)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCEaseExponentialIn::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseExponentialIn*)>(base+0x2a21b0)(this);
}

void cocos2d::CCParticleBatchNode::addChild(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleBatchNode*, cocos2d::CCNode*)>(base+0x206360)(this, p0);
}

void cocos2d::CCParticleBatchNode::addChild(cocos2d::CCNode* p0, int p1) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleBatchNode*, cocos2d::CCNode*, int)>(base+0x206370)(this, p0, p1);
}

void cocos2d::CCParticleBatchNode::addChild(cocos2d::CCNode* p0, int p1, int p2) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleBatchNode*, cocos2d::CCNode*, int, int)>(base+0x206380)(this, p0, p1, p2);
}

void cocos2d::CCParticleBatchNode::removeChild(cocos2d::CCNode* p0, bool p1) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleBatchNode*, cocos2d::CCNode*, bool)>(base+0x206bd0)(this, p0, p1);
}

void cocos2d::CCParticleBatchNode::removeAllChildrenWithCleanup(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleBatchNode*, bool)>(base+0x206d10)(this, p0);
}

void cocos2d::CCParticleBatchNode::reorderChild(cocos2d::CCNode* p0, int p1) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleBatchNode*, cocos2d::CCNode*, int)>(base+0x2067c0)(this, p0, p1);
}

void cocos2d::CCParticleBatchNode::draw() {
    return reinterpret_cast<void(*)(cocos2d::CCParticleBatchNode*)>(base+0x206da0)(this);
}

void cocos2d::CCParticleBatchNode::visit() {
    return reinterpret_cast<void(*)(cocos2d::CCParticleBatchNode*)>(base+0x2062e0)(this);
}

cocos2d::CCTexture2D* cocos2d::CCParticleBatchNode::getTexture() {
    return reinterpret_cast<cocos2d::CCTexture2D*(*)(cocos2d::CCParticleBatchNode*)>(base+0x206f90)(this);
}

void cocos2d::CCParticleBatchNode::setTexture(cocos2d::CCTexture2D* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleBatchNode*, cocos2d::CCTexture2D*)>(base+0x206ee0)(this, p0);
}

void cocos2d::CCParticleBatchNode::setBlendFunc(cocos2d::_ccBlendFunc p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleBatchNode*, cocos2d::_ccBlendFunc)>(base+0x206fc0)(this, p0);
}

cocos2d::_ccBlendFunc cocos2d::CCParticleBatchNode::getBlendFunc() {
    return reinterpret_cast<cocos2d::_ccBlendFunc(*)(cocos2d::CCParticleBatchNode*)>(base+0x206fe0)(this);
}

cocos2d::CCGridBase* cocos2d::CCTiledGrid3DAction::getGrid() {
    return reinterpret_cast<cocos2d::CCGridBase*(*)(cocos2d::CCTiledGrid3DAction*)>(base+0xee350)(this);
}

void cocos2d::CCTransitionMoveInB::initScenes() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionMoveInB*)>(base+0x8ba90)(this);
}

void cocos2d::CCTransitionMoveInL::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionMoveInL*)>(base+0x8b0b0)(this);
}

void cocos2d::CCTransitionMoveInL::initScenes() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionMoveInL*)>(base+0x8b1e0)(this);
}

cocos2d::CCActionInterval* cocos2d::CCTransitionMoveInL::action() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCTransitionMoveInL*)>(base+0x8b180)(this);
}

cocos2d::CCActionInterval* cocos2d::CCTransitionMoveInL::easeActionWithAction(cocos2d::CCActionInterval* p0) {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCTransitionMoveInL*, cocos2d::CCActionInterval*)>(base+0x8b1c0)(this, p0);
}

void cocos2d::CCTransitionMoveInR::initScenes() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionMoveInR*)>(base+0x8b4d0)(this);
}

void cocos2d::CCTransitionMoveInT::initScenes() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionMoveInT*)>(base+0x8b7b0)(this);
}

cocos2d::CCComponent* cocos2d::CCComponentContainer::get(char const* p0) const {
    return reinterpret_cast<cocos2d::CCComponent*(*)(const cocos2d::CCComponentContainer*, char const*)>(base+0x1663a0)(this, p0);
}

bool cocos2d::CCComponentContainer::add(cocos2d::CCComponent* p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCComponentContainer*, cocos2d::CCComponent*)>(base+0x166470)(this, p0);
}

bool cocos2d::CCComponentContainer::remove(char const* p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCComponentContainer*, char const*)>(base+0x1665f0)(this, p0);
}

bool cocos2d::CCComponentContainer::remove(cocos2d::CCComponent* p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCComponentContainer*, cocos2d::CCComponent*)>(base+0x1668d0)(this, p0);
}

void cocos2d::CCComponentContainer::removeAll() {
    return reinterpret_cast<void(*)(cocos2d::CCComponentContainer*)>(base+0x166ab0)(this);
}

void cocos2d::CCComponentContainer::visit(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCComponentContainer*, float)>(base+0x166cb0)(this, p0);
}

void cocos2d::CCEaseExponentialOut::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEaseExponentialOut*, float)>(base+0x2a2360)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCEaseExponentialOut::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseExponentialOut*)>(base+0x2a23b0)(this);
}

void cocos2d::CCParticleSystemQuad::draw() {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystemQuad*)>(base+0x36b850)(this);
}

void cocos2d::CCParticleSystemQuad::setBatchNode(cocos2d::CCParticleBatchNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystemQuad*, cocos2d::CCParticleBatchNode*)>(base+0x36bb70)(this, p0);
}

void cocos2d::CCParticleSystemQuad::setTotalParticles(unsigned int p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystemQuad*, unsigned int)>(base+0x36b910)(this, p0);
}

void cocos2d::CCParticleSystemQuad::setTexture(cocos2d::CCTexture2D* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystemQuad*, cocos2d::CCTexture2D*)>(base+0x36b3c0)(this, p0);
}

bool cocos2d::CCParticleSystemQuad::initWithTotalParticles(unsigned int p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCParticleSystemQuad*, unsigned int)>(base+0x36aa80)(this, p0);
}

void cocos2d::CCParticleSystemQuad::updateQuadWithParticle(cocos2d::sCCParticle* p0, cocos2d::CCPoint const& p1) {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystemQuad*, cocos2d::sCCParticle*, cocos2d::CCPoint const&)>(base+0x36b570)(this, p0, p1);
}

void cocos2d::CCParticleSystemQuad::postStep() {
    return reinterpret_cast<void(*)(cocos2d::CCParticleSystemQuad*)>(base+0x36b800)(this);
}

cocos2d::CCActionInterval* cocos2d::CCTransitionFadeDown::actionWithSize(cocos2d::CCSize const& p0) {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCTransitionFadeDown*, cocos2d::CCSize const&)>(base+0x908c0)(this, p0);
}

void cocos2d::CCTransitionJumpZoom::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionJumpZoom*)>(base+0x8abf0)(this);
}

void cocos2d::CCTransitionPageTurn::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionPageTurn*)>(base+0x20d1d0)(this);
}

void cocos2d::CCTransitionPageTurn::sceneOrder() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionPageTurn*)>(base+0x20d1b0)(this);
}

bool cocos2d::CCTransitionPageTurn::initWithDuration(float p0, cocos2d::CCScene* p1, bool p2) {
    return reinterpret_cast<bool(*)(cocos2d::CCTransitionPageTurn*, float, cocos2d::CCScene*, bool)>(base+0x20d190)(this, p0, p1, p2);
}

void cocos2d::CCTransitionProgress::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionProgress*)>(base+0x137970)(this);
}

void cocos2d::CCTransitionProgress::onExit() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionProgress*)>(base+0x137b30)(this);
}

void cocos2d::CCTransitionProgress::sceneOrder() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionProgress*)>(base+0x137b60)(this);
}

cocos2d::CCProgressTimer* cocos2d::CCTransitionProgress::progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture* p0) {
    return reinterpret_cast<cocos2d::CCProgressTimer*(*)(cocos2d::CCTransitionProgress*, cocos2d::CCRenderTexture*)>(base+0x137ba0)(this, p0);
}

void cocos2d::CCTransitionProgress::setupTransition() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionProgress*)>(base+0x137b70)(this);
}

void cocos2d::CCTransitionRotoZoom::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionRotoZoom*)>(base+0x8a7d0)(this);
}

void cocos2d::CCTransitionSlideInB::sceneOrder() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionSlideInB*)>(base+0x8c8f0)(this);
}

void cocos2d::CCTransitionSlideInB::initScenes() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionSlideInB*)>(base+0x8c900)(this);
}

cocos2d::CCActionInterval* cocos2d::CCTransitionSlideInB::action() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCTransitionSlideInB*)>(base+0x8c970)(this);
}

void cocos2d::CCTransitionSlideInL::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionSlideInL*)>(base+0x8bc90)(this);
}

void cocos2d::CCTransitionSlideInL::sceneOrder() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionSlideInL*)>(base+0x8bd80)(this);
}

void cocos2d::CCTransitionSlideInL::initScenes() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionSlideInL*)>(base+0x8bd90)(this);
}

cocos2d::CCActionInterval* cocos2d::CCTransitionSlideInL::action() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCTransitionSlideInL*)>(base+0x8be00)(this);
}

cocos2d::CCActionInterval* cocos2d::CCTransitionSlideInL::easeActionWithAction(cocos2d::CCActionInterval* p0) {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCTransitionSlideInL*, cocos2d::CCActionInterval*)>(base+0x8be60)(this, p0);
}

void cocos2d::CCTransitionSlideInR::sceneOrder() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionSlideInR*)>(base+0x8c210)(this);
}

void cocos2d::CCTransitionSlideInR::initScenes() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionSlideInR*)>(base+0x8c220)(this);
}

cocos2d::CCActionInterval* cocos2d::CCTransitionSlideInR::action() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCTransitionSlideInR*)>(base+0x8c290)(this);
}

void cocos2d::CCTransitionSlideInT::sceneOrder() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionSlideInT*)>(base+0x8c580)(this);
}

void cocos2d::CCTransitionSlideInT::initScenes() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionSlideInT*)>(base+0x8c590)(this);
}

cocos2d::CCActionInterval* cocos2d::CCTransitionSlideInT::action() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCTransitionSlideInT*)>(base+0x8c600)(this);
}

void cocos2d::CCDisplayLinkDirector::setAnimationInterval(double p0) {
    return reinterpret_cast<void(*)(cocos2d::CCDisplayLinkDirector*, double)>(base+0x24b180)(this, p0);
}

void cocos2d::CCDisplayLinkDirector::stopAnimation() {
    return reinterpret_cast<void(*)(cocos2d::CCDisplayLinkDirector*)>(base+0x24b170)(this);
}

void cocos2d::CCDisplayLinkDirector::startAnimation() {
    return reinterpret_cast<void(*)(cocos2d::CCDisplayLinkDirector*)>(base+0x24b0f0)(this);
}

void cocos2d::CCDisplayLinkDirector::mainLoop() {
    return reinterpret_cast<void(*)(cocos2d::CCDisplayLinkDirector*)>(base+0x24b130)(this);
}

void cocos2d::CCTransitionCrossFade::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionCrossFade*)>(base+0x8ef30)(this);
}

void cocos2d::CCTransitionCrossFade::onExit() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionCrossFade*)>(base+0x8f290)(this);
}

void cocos2d::CCTransitionCrossFade::draw() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionCrossFade*)>(base+0x8ef20)(this);
}

void cocos2d::CCTransitionSplitCols::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionSplitCols*)>(base+0x8f940)(this);
}

cocos2d::CCActionInterval* cocos2d::CCTransitionSplitCols::action() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCTransitionSplitCols*)>(base+0x8fa30)(this);
}

cocos2d::CCActionInterval* cocos2d::CCTransitionSplitCols::easeActionWithAction(cocos2d::CCActionInterval* p0) {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCTransitionSplitCols*, cocos2d::CCActionInterval*)>(base+0x8fa50)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCTransitionSplitRows::action() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCTransitionSplitRows*)>(base+0x8fc20)(this);
}

void cocos2d::CCTransitionZoomFlipX::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionZoomFlipX*)>(base+0x8dbb0)(this);
}

void cocos2d::CCTransitionZoomFlipY::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionZoomFlipY*)>(base+0x8e020)(this);
}

void cocos2d::CCAccelDeccelAmplitude::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCAccelDeccelAmplitude*, float)>(base+0xee6f0)(this, p0);
}

void cocos2d::CCAccelDeccelAmplitude::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCAccelDeccelAmplitude*, cocos2d::CCNode*)>(base+0xee6c0)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCAccelDeccelAmplitude::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCAccelDeccelAmplitude*)>(base+0xee750)(this);
}

void cocos2d::CCEaseExponentialInOut::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEaseExponentialInOut*, float)>(base+0x2a2560)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCEaseExponentialInOut::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseExponentialInOut*)>(base+0x2a25d0)(this);
}

cocos2d::CCObject* cocos2d::CCNotificationObserver::getTarget() {
    return reinterpret_cast<cocos2d::CCObject*(*)(cocos2d::CCNotificationObserver*)>(base+0x1326e0)(this);
}

cocos2d::SEL_CallFuncO cocos2d::CCNotificationObserver::getSelector() {
    return reinterpret_cast<cocos2d::SEL_CallFuncO(*)(cocos2d::CCNotificationObserver*)>(base+0x1326f0)(this);
}

char* cocos2d::CCNotificationObserver::getName() {
    return reinterpret_cast<char*(*)(cocos2d::CCNotificationObserver*)>(base+0x132700)(this);
}

cocos2d::CCObject* cocos2d::CCNotificationObserver::getObject() {
    return reinterpret_cast<cocos2d::CCObject*(*)(cocos2d::CCNotificationObserver*)>(base+0x132710)(this);
}

int cocos2d::CCNotificationObserver::getHandler() {
    return reinterpret_cast<int(*)(cocos2d::CCNotificationObserver*)>(base+0x132720)(this);
}

void cocos2d::CCNotificationObserver::setHandler(int p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNotificationObserver*, int)>(base+0x132730)(this, p0);
}

bool cocos2d::CCStandardTouchHandler::initWithDelegate(cocos2d::CCTouchDelegate* p0, int p1) {
    return reinterpret_cast<bool(*)(cocos2d::CCStandardTouchHandler*, cocos2d::CCTouchDelegate*, int)>(base+0x247ed0)(this, p0, p1);
}

void cocos2d::CCTransitionShrinkGrow::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionShrinkGrow*)>(base+0x8cc50)(this);
}

cocos2d::CCActionInterval* cocos2d::CCTransitionShrinkGrow::easeActionWithAction(cocos2d::CCActionInterval* p0) {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCTransitionShrinkGrow*, cocos2d::CCActionInterval*)>(base+0x8cde0)(this, p0);
}

void cocos2d::CCTransitionFlipAngular::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionFlipAngular*)>(base+0x8d7a0)(this);
}

void cocos2d::CCTransitionTurnOffTiles::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionTurnOffTiles*)>(base+0x8f590)(this);
}

void cocos2d::CCTransitionTurnOffTiles::sceneOrder() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionTurnOffTiles*)>(base+0x8f580)(this);
}

cocos2d::CCActionInterval* cocos2d::CCTransitionTurnOffTiles::easeActionWithAction(cocos2d::CCActionInterval* p0) {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCTransitionTurnOffTiles*, cocos2d::CCActionInterval*)>(base+0x8f6a0)(this, p0);
}

void cocos2d::CCTransitionProgressInOut::sceneOrder() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionProgressInOut*)>(base+0x1382d0)(this);
}

cocos2d::CCProgressTimer* cocos2d::CCTransitionProgressInOut::progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture* p0) {
    return reinterpret_cast<cocos2d::CCProgressTimer*(*)(cocos2d::CCTransitionProgressInOut*, cocos2d::CCRenderTexture*)>(base+0x138300)(this, p0);
}

void cocos2d::CCTransitionProgressInOut::setupTransition() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionProgressInOut*)>(base+0x1382e0)(this);
}

cocos2d::CCProgressTimer* cocos2d::CCTransitionProgressOutIn::progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture* p0) {
    return reinterpret_cast<cocos2d::CCProgressTimer*(*)(cocos2d::CCTransitionProgressOutIn*, cocos2d::CCRenderTexture*)>(base+0x1384c0)(this, p0);
}

bool cocos2d::CCTransitionSceneOriented::initWithDuration(float p0, cocos2d::CCScene* p1, cocos2d::tOrientation p2) {
    return reinterpret_cast<bool(*)(cocos2d::CCTransitionSceneOriented*, float, cocos2d::CCScene*, cocos2d::tOrientation)>(base+0x8a4e0)(this, p0, p1, p2);
}

void cocos2d::CCTransitionZoomFlipAngular::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::CCTransitionZoomFlipAngular*)>(base+0x8e4a0)(this);
}

cocos2d::CCProgressTimer* cocos2d::CCTransitionProgressRadialCW::progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture* p0) {
    return reinterpret_cast<cocos2d::CCProgressTimer*(*)(cocos2d::CCTransitionProgressRadialCW*, cocos2d::CCRenderTexture*)>(base+0x137dd0)(this, p0);
}

cocos2d::CCProgressTimer* cocos2d::CCTransitionProgressVertical::progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture* p0) {
    return reinterpret_cast<cocos2d::CCProgressTimer*(*)(cocos2d::CCTransitionProgressVertical*, cocos2d::CCRenderTexture*)>(base+0x138110)(this, p0);
}

cocos2d::CCProgressTimer* cocos2d::CCTransitionProgressRadialCCW::progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture* p0) {
    return reinterpret_cast<cocos2d::CCProgressTimer*(*)(cocos2d::CCTransitionProgressRadialCCW*, cocos2d::CCRenderTexture*)>(base+0x137bb0)(this, p0);
}

cocos2d::CCProgressTimer* cocos2d::CCTransitionProgressHorizontal::progressTimerNodeWithRenderTexture(cocos2d::CCRenderTexture* p0) {
    return reinterpret_cast<cocos2d::CCProgressTimer*(*)(cocos2d::CCTransitionProgressHorizontal*, cocos2d::CCRenderTexture*)>(base+0x137f50)(this, p0);
}

void cocos2d::CCSet::acceptVisitor(cocos2d::CCDataVisitor& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSet*, cocos2d::CCDataVisitor&)>(base+0x45b090)(this, p0);
}

bool cocos2d::CCMenu::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCMenu*)>(base+0x438b90)(this);
}

void cocos2d::CCMenu::addChild(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMenu*, cocos2d::CCNode*)>(base+0x438ba0)(this, p0);
}

void cocos2d::CCMenu::addChild(cocos2d::CCNode* p0, int p1) {
    return reinterpret_cast<void(*)(cocos2d::CCMenu*, cocos2d::CCNode*, int)>(base+0x438bb0)(this, p0, p1);
}

void cocos2d::CCMenu::addChild(cocos2d::CCNode* p0, int p1, int p2) {
    return reinterpret_cast<void(*)(cocos2d::CCMenu*, cocos2d::CCNode*, int, int)>(base+0x438bc0)(this, p0, p1, p2);
}

void cocos2d::CCMenu::removeChild(cocos2d::CCNode* p0, bool p1) {
    return reinterpret_cast<void(*)(cocos2d::CCMenu*, cocos2d::CCNode*, bool)>(base+0x438c20)(this, p0, p1);
}

void cocos2d::CCMenu::onExit() {
    return reinterpret_cast<void(*)(cocos2d::CCMenu*)>(base+0x438bd0)(this);
}

bool cocos2d::CCMenu::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<bool(*)(cocos2d::CCMenu*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x438d20)(this, p0, p1);
}

void cocos2d::CCMenu::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::CCMenu*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x4390b0)(this, p0, p1);
}

void cocos2d::CCMenu::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::CCMenu*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x438fd0)(this, p0, p1);
}

void cocos2d::CCMenu::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::CCMenu*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x439050)(this, p0, p1);
}

void cocos2d::CCMenu::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(cocos2d::CCMenu*)>(base+0x438cd0)(this);
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

int cocos2d::CCNode::getZOrder() {
    return reinterpret_cast<int(*)(cocos2d::CCNode*)>(base+0x122980)(this);
}

void cocos2d::CCNode::setVertexZ(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x1229f0)(this, p0);
}

float cocos2d::CCNode::getVertexZ() {
    return reinterpret_cast<float(*)(cocos2d::CCNode*)>(base+0x1229e0)(this);
}

void cocos2d::CCNode::setScaleX(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122b10)(this, p0);
}

float cocos2d::CCNode::getScaleX() {
    return reinterpret_cast<float(*)(cocos2d::CCNode*)>(base+0x122b00)(this);
}

void cocos2d::CCNode::setScaleY(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122b40)(this, p0);
}

float cocos2d::CCNode::getScaleY() {
    return reinterpret_cast<float(*)(cocos2d::CCNode*)>(base+0x122b30)(this);
}

void cocos2d::CCNode::setScale(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122ac0)(this, p0);
}

float cocos2d::CCNode::getScale() {
    return reinterpret_cast<float(*)(cocos2d::CCNode*)>(base+0x122ab0)(this);
}

void cocos2d::CCNode::setScale(float p0, float p1) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float, float)>(base+0x122ae0)(this, p0, p1);
}

void cocos2d::CCNode::setPosition(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCPoint const&)>(base+0x122b70)(this, p0);
}

cocos2d::CCPoint const& cocos2d::CCNode::getPosition() {
    return reinterpret_cast<cocos2d::CCPoint const&(*)(cocos2d::CCNode*)>(base+0x122b60)(this);
}

void cocos2d::CCNode::setPosition(float p0, float p1) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float, float)>(base+0x122ba0)(this, p0, p1);
}

void cocos2d::CCNode::setPositionX(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122c00)(this, p0);
}

float cocos2d::CCNode::getPositionX() {
    return reinterpret_cast<float(*)(cocos2d::CCNode*)>(base+0x122be0)(this);
}

void cocos2d::CCNode::setPositionY(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122c40)(this, p0);
}

float cocos2d::CCNode::getPositionY() {
    return reinterpret_cast<float(*)(cocos2d::CCNode*)>(base+0x122bf0)(this);
}

void cocos2d::CCNode::setSkewX(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122930)(this, p0);
}

float cocos2d::CCNode::getSkewX() {
    return reinterpret_cast<float(*)(cocos2d::CCNode*)>(base+0x122920)(this);
}

void cocos2d::CCNode::setSkewY(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122960)(this, p0);
}

float cocos2d::CCNode::getSkewY() {
    return reinterpret_cast<float(*)(cocos2d::CCNode*)>(base+0x122950)(this);
}

void cocos2d::CCNode::setAnchorPoint(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCPoint const&)>(base+0x122d90)(this, p0);
}

cocos2d::CCPoint const& cocos2d::CCNode::getAnchorPoint() {
    return reinterpret_cast<cocos2d::CCPoint const&(*)(cocos2d::CCNode*)>(base+0x122d80)(this);
}

cocos2d::CCPoint const& cocos2d::CCNode::getAnchorPointInPoints() {
    return reinterpret_cast<cocos2d::CCPoint const&(*)(cocos2d::CCNode*)>(base+0x122d70)(this);
}

void cocos2d::CCNode::setContentSize(cocos2d::CCSize const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCSize const&)>(base+0x122e50)(this, p0);
}

cocos2d::CCSize const& cocos2d::CCNode::getContentSize() const {
    return reinterpret_cast<cocos2d::CCSize const&(*)(const cocos2d::CCNode*)>(base+0x122e00)(this);
}

cocos2d::CCSize cocos2d::CCNode::getScaledContentSize() {
    return reinterpret_cast<cocos2d::CCSize(*)(cocos2d::CCNode*)>(base+0x122e10)(this);
}

void cocos2d::CCNode::setVisible(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, bool)>(base+0x122d60)(this, p0);
}

bool cocos2d::CCNode::isVisible() {
    return reinterpret_cast<bool(*)(cocos2d::CCNode*)>(base+0x122d50)(this);
}

void cocos2d::CCNode::setRotation(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122a10)(this, p0);
}

float cocos2d::CCNode::getRotation() {
    return reinterpret_cast<float(*)(cocos2d::CCNode*)>(base+0x122a00)(this);
}

void cocos2d::CCNode::setRotationX(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122a60)(this, p0);
}

float cocos2d::CCNode::getRotationX() {
    return reinterpret_cast<float(*)(cocos2d::CCNode*)>(base+0x122a50)(this);
}

void cocos2d::CCNode::setRotationY(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float)>(base+0x122a90)(this, p0);
}

float cocos2d::CCNode::getRotationY() {
    return reinterpret_cast<float(*)(cocos2d::CCNode*)>(base+0x122a80)(this);
}

void cocos2d::CCNode::setOrderOfArrival(unsigned int p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, unsigned int)>(base+0x122f60)(this, p0);
}

unsigned int cocos2d::CCNode::getOrderOfArrival() {
    return reinterpret_cast<unsigned int(*)(cocos2d::CCNode*)>(base+0x122f50)(this);
}

void cocos2d::CCNode::setGLServerState(cocos2d::ccGLServerState p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::ccGLServerState)>(base+0x122fa0)(this, p0);
}

cocos2d::ccGLServerState cocos2d::CCNode::getGLServerState() {
    return reinterpret_cast<cocos2d::ccGLServerState(*)(cocos2d::CCNode*)>(base+0x122f90)(this);
}

void cocos2d::CCNode::ignoreAnchorPointForPosition(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, bool)>(base+0x122f00)(this, p0);
}

bool cocos2d::CCNode::isIgnoreAnchorPointForPosition() {
    return reinterpret_cast<bool(*)(cocos2d::CCNode*)>(base+0x122ef0)(this);
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

cocos2d::CCNode* cocos2d::CCNode::getChildByTag(int p0) {
    return reinterpret_cast<cocos2d::CCNode*(*)(cocos2d::CCNode*, int)>(base+0x123220)(this, p0);
}

cocos2d::CCArray* cocos2d::CCNode::getChildren() {
    return reinterpret_cast<cocos2d::CCArray*(*)(cocos2d::CCNode*)>(base+0x122c80)(this);
}

unsigned int cocos2d::CCNode::getChildrenCount() const {
    return reinterpret_cast<unsigned int(*)(const cocos2d::CCNode*)>(base+0x122c90)(this);
}

void cocos2d::CCNode::setParent(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCNode*)>(base+0x122ee0)(this, p0);
}

cocos2d::CCNode* cocos2d::CCNode::getParent() {
    return reinterpret_cast<cocos2d::CCNode*(*)(cocos2d::CCNode*)>(base+0x122ed0)(this);
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

cocos2d::CCGridBase* cocos2d::CCNode::getGrid() {
    return reinterpret_cast<cocos2d::CCGridBase*(*)(cocos2d::CCNode*)>(base+0x122d00)(this);
}

void cocos2d::CCNode::setGrid(cocos2d::CCGridBase* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCGridBase*)>(base+0x122d10)(this, p0);
}

void* cocos2d::CCNode::getUserData() {
    return reinterpret_cast<void*(*)(cocos2d::CCNode*)>(base+0x122f30)(this);
}

void cocos2d::CCNode::setUserData(void* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, void*)>(base+0x122f40)(this, p0);
}

cocos2d::CCObject* cocos2d::CCNode::getUserObject() {
    return reinterpret_cast<cocos2d::CCObject*(*)(cocos2d::CCNode*)>(base+0x122f80)(this);
}

void cocos2d::CCNode::setUserObject(cocos2d::CCObject* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCObject*)>(base+0x122fb0)(this, p0);
}

cocos2d::CCGLProgram* cocos2d::CCNode::getShaderProgram() {
    return reinterpret_cast<cocos2d::CCGLProgram*(*)(cocos2d::CCNode*)>(base+0x122f70)(this);
}

void cocos2d::CCNode::setShaderProgram(cocos2d::CCGLProgram* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCGLProgram*)>(base+0x122ff0)(this, p0);
}

cocos2d::CCCamera* cocos2d::CCNode::getCamera() {
    return reinterpret_cast<cocos2d::CCCamera*(*)(cocos2d::CCNode*)>(base+0x122cb0)(this);
}

bool cocos2d::CCNode::isRunning() {
    return reinterpret_cast<bool(*)(cocos2d::CCNode*)>(base+0x122ec0)(this);
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

cocos2d::CCActionManager* cocos2d::CCNode::getActionManager() {
    return reinterpret_cast<cocos2d::CCActionManager*(*)(cocos2d::CCNode*)>(base+0x123e50)(this);
}

void cocos2d::CCNode::setScheduler(cocos2d::CCScheduler* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, cocos2d::CCScheduler*)>(base+0x123f20)(this, p0);
}

cocos2d::CCScheduler* cocos2d::CCNode::getScheduler() {
    return reinterpret_cast<cocos2d::CCScheduler*(*)(cocos2d::CCNode*)>(base+0x123f70)(this);
}

void cocos2d::CCNode::updateTransform() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x1249d0)(this);
}

cocos2d::CCAffineTransform const cocos2d::CCNode::nodeToParentTransform() {
    return reinterpret_cast<cocos2d::CCAffineTransform const(*)(cocos2d::CCNode*)>(base+0x124210)(this);
}

cocos2d::CCAffineTransform const cocos2d::CCNode::parentToNodeTransform() {
    return reinterpret_cast<cocos2d::CCAffineTransform const(*)(cocos2d::CCNode*)>(base+0x1245d0)(this);
}

cocos2d::CCAffineTransform cocos2d::CCNode::nodeToWorldTransform() {
    return reinterpret_cast<cocos2d::CCAffineTransform(*)(cocos2d::CCNode*)>(base+0x124670)(this);
}

cocos2d::CCAffineTransform cocos2d::CCNode::worldToNodeTransform() {
    return reinterpret_cast<cocos2d::CCAffineTransform(*)(cocos2d::CCNode*)>(base+0x124710)(this);
}

bool cocos2d::CCNode::addComponent(cocos2d::CCComponent* p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCNode*, cocos2d::CCComponent*)>(base+0x124a40)(this, p0);
}

bool cocos2d::CCNode::removeComponent(char const* p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCNode*, char const*)>(base+0x124a60)(this, p0);
}

bool cocos2d::CCNode::removeComponent(cocos2d::CCComponent* p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCNode*, cocos2d::CCComponent*)>(base+0x124a80)(this, p0);
}

void cocos2d::CCNode::removeAllComponents() {
    return reinterpret_cast<void(*)(cocos2d::CCNode*)>(base+0x124aa0)(this);
}

void cocos2d::CCNode::updateTweenAction(float p0, char const* p1) {
    return reinterpret_cast<void(*)(cocos2d::CCNode*, float, char const*)>(base+0x1249c0)(this, p0, p1);
}

void cocos2d::CCArray::acceptVisitor(cocos2d::CCDataVisitor& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCArray*, cocos2d::CCDataVisitor&)>(base+0x41a880)(this, p0);
}

void cocos2d::CCBlink::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCBlink*, float)>(base+0x1f79f0)(this, p0);
}

void cocos2d::CCBlink::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCBlink*, cocos2d::CCNode*)>(base+0x1f78b0)(this, p0);
}

void cocos2d::CCBlink::stop() {
    return reinterpret_cast<void(*)(cocos2d::CCBlink*)>(base+0x1f7880)(this);
}

cocos2d::CCActionInterval* cocos2d::CCBlink::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCBlink*)>(base+0x1f7a70)(this);
}

void cocos2d::CCFlipX::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFlipX*, float)>(base+0x454910)(this, p0);
}

cocos2d::CCFiniteTimeAction* cocos2d::CCFlipX::reverse() {
    return reinterpret_cast<cocos2d::CCFiniteTimeAction*(*)(cocos2d::CCFlipX*)>(base+0x454930)(this);
}

void cocos2d::CCFlipY::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFlipY*, float)>(base+0x454ab0)(this, p0);
}

cocos2d::CCFiniteTimeAction* cocos2d::CCFlipY::reverse() {
    return reinterpret_cast<cocos2d::CCFiniteTimeAction*(*)(cocos2d::CCFlipY*)>(base+0x454ad0)(this);
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

bool cocos2d::CCLayer::isTouchEnabled() {
    return reinterpret_cast<bool(*)(cocos2d::CCLayer*)>(base+0x272ce0)(this);
}

void cocos2d::CCLayer::setTouchEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, bool)>(base+0x272cf0)(this, p0);
}

void cocos2d::CCLayer::setTouchMode(cocos2d::ccTouchesMode p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, cocos2d::ccTouchesMode)>(base+0x272d60)(this, p0);
}

int cocos2d::CCLayer::getTouchMode() {
    return reinterpret_cast<int(*)(cocos2d::CCLayer*)>(base+0x272e10)(this);
}

void cocos2d::CCLayer::setTouchPriority(int p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, int)>(base+0x272db0)(this, p0);
}

int cocos2d::CCLayer::getTouchPriority() {
    return reinterpret_cast<int(*)(cocos2d::CCLayer*)>(base+0x272e00)(this);
}

bool cocos2d::CCLayer::isAccelerometerEnabled() {
    return reinterpret_cast<bool(*)(cocos2d::CCLayer*)>(base+0x272e20)(this);
}

void cocos2d::CCLayer::setAccelerometerEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, bool)>(base+0x272e30)(this, p0);
}

void cocos2d::CCLayer::setAccelerometerInterval(double p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, double)>(base+0x272e70)(this, p0);
}

bool cocos2d::CCLayer::isKeypadEnabled() {
    return reinterpret_cast<bool(*)(cocos2d::CCLayer*)>(base+0x272f70)(this);
}

void cocos2d::CCLayer::setKeypadEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, bool)>(base+0x272f80)(this, p0);
}

bool cocos2d::CCLayer::isKeyboardEnabled() {
    return reinterpret_cast<bool(*)(cocos2d::CCLayer*)>(base+0x273010)(this);
}

void cocos2d::CCLayer::setKeyboardEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLayer*, bool)>(base+0x273020)(this, p0);
}

bool cocos2d::CCLayer::isMouseEnabled() {
    return reinterpret_cast<bool(*)(cocos2d::CCLayer*)>(base+0x273090)(this);
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

void cocos2d::CCPlace::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCPlace*, float)>(base+0x454d70)(this, p0);
}

bool cocos2d::CCScene::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCScene*)>(base+0x13c0f0)(this);
}

void cocos2d::CCSpawn::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSpawn*, float)>(base+0x1f46c0)(this, p0);
}

void cocos2d::CCSpawn::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSpawn*, cocos2d::CCNode*)>(base+0x1f4650)(this, p0);
}

void cocos2d::CCSpawn::stop() {
    return reinterpret_cast<void(*)(cocos2d::CCSpawn*)>(base+0x1f4690)(this);
}

cocos2d::CCActionInterval* cocos2d::CCSpawn::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCSpawn*)>(base+0x1f4710)(this);
}

bool cocos2d::CCSpeed::isDone() {
    return reinterpret_cast<bool(*)(cocos2d::CCSpeed*)>(base+0x35bc50)(this);
}

void cocos2d::CCSpeed::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSpeed*, cocos2d::CCNode*)>(base+0x35bbe0)(this, p0);
}

void cocos2d::CCSpeed::stop() {
    return reinterpret_cast<void(*)(cocos2d::CCSpeed*)>(base+0x35bc00)(this);
}

void cocos2d::CCSpeed::step(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSpeed*, float)>(base+0x35bc30)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCSpeed::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCSpeed*)>(base+0x35bc60)(this);
}

void cocos2d::CCTimer::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTimer*, float)>(base+0x242440)(this, p0);
}

void cocos2d::CCTwirl::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTwirl*, float)>(base+0x129850)(this, p0);
}

void cocos2d::CCWaves::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCWaves*, float)>(base+0x129340)(this, p0);
}

void cocos2d::CCAction::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCAction*, float)>(base+0x35b890)(this, p0);
}

bool cocos2d::CCAction::isDone() {
    return reinterpret_cast<bool(*)(cocos2d::CCAction*)>(base+0x35b870)(this);
}

void cocos2d::CCAction::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCAction*, cocos2d::CCNode*)>(base+0x35b850)(this, p0);
}

void cocos2d::CCAction::stop() {
    return reinterpret_cast<void(*)(cocos2d::CCAction*)>(base+0x35b860)(this);
}

void cocos2d::CCAction::step(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCAction*, float)>(base+0x35b880)(this, p0);
}

void cocos2d::CCEaseIn::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEaseIn*, float)>(base+0x2a1b10)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCEaseIn::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseIn*)>(base+0x2a1b40)(this);
}

void cocos2d::CCFadeIn::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFadeIn*, float)>(base+0x1f7c80)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCFadeIn::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCFadeIn*)>(base+0x1f7ce0)(this);
}

void cocos2d::CCFadeTo::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFadeTo*, float)>(base+0x1f8220)(this, p0);
}

void cocos2d::CCFadeTo::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFadeTo*, cocos2d::CCNode*)>(base+0x1f81c0)(this, p0);
}

bool cocos2d::CCFollow::isDone() {
    return reinterpret_cast<bool(*)(cocos2d::CCFollow*)>(base+0x35c2e0)(this);
}

void cocos2d::CCFollow::stop() {
    return reinterpret_cast<void(*)(cocos2d::CCFollow*)>(base+0x35c300)(this);
}

void cocos2d::CCFollow::step(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFollow*, float)>(base+0x35c1f0)(this, p0);
}

void cocos2d::CCGrid3D::blit() {
    return reinterpret_cast<void(*)(cocos2d::CCGrid3D*)>(base+0x2884b0)(this);
}

void cocos2d::CCGrid3D::reuse() {
    return reinterpret_cast<void(*)(cocos2d::CCGrid3D*)>(base+0x288da0)(this);
}

void cocos2d::CCGrid3D::calculateVertexPoints() {
    return reinterpret_cast<void(*)(cocos2d::CCGrid3D*)>(base+0x288550)(this);
}

void cocos2d::CCJumpBy::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCJumpBy*, float)>(base+0x1f6160)(this, p0);
}

void cocos2d::CCJumpBy::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCJumpBy*, cocos2d::CCNode*)>(base+0x1f6110)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCJumpBy::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCJumpBy*)>(base+0x1f6290)(this);
}

void cocos2d::CCJumpTo::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCJumpTo*, cocos2d::CCNode*)>(base+0x1f6570)(this, p0);
}

void cocos2d::CCLens3D::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLens3D*, float)>(base+0x128140)(this, p0);
}

void cocos2d::CCLiquid::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCLiquid*, float)>(base+0x128ed0)(this, p0);
}

void cocos2d::CCMoveBy::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMoveBy*, float)>(base+0x1f5400)(this, p0);
}

void cocos2d::CCMoveBy::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMoveBy*, cocos2d::CCNode*)>(base+0x1f5360)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCMoveBy::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCMoveBy*)>(base+0x1f53b0)(this);
}

void cocos2d::CCMoveTo::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCMoveTo*, cocos2d::CCNode*)>(base+0x1f5740)(this, p0);
}

bool cocos2d::CCObject::isEqual(cocos2d::CCObject const* p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCObject*, cocos2d::CCObject const*)>(base+0x250f20)(this, p0);
}

void cocos2d::CCObject::acceptVisitor(cocos2d::CCDataVisitor& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCObject*, cocos2d::CCDataVisitor&)>(base+0x250f30)(this, p0);
}

void cocos2d::CCObject::encodeWithCoder(DS_Dictionary* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCObject*, DS_Dictionary*)>(base+0x250f70)(this, p0);
}

bool cocos2d::CCObject::canEncode() {
    return reinterpret_cast<bool(*)(cocos2d::CCObject*)>(base+0x250f90)(this);
}

int cocos2d::CCObject::getTag() const {
    return reinterpret_cast<int(*)(const cocos2d::CCObject*)>(base+0x250f50)(this);
}

void cocos2d::CCObject::setTag(int p0) {
    return reinterpret_cast<void(*)(cocos2d::CCObject*, int)>(base+0x250f60)(this, p0);
}

void cocos2d::CCRepeat::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCRepeat*, float)>(base+0x1f36b0)(this, p0);
}

bool cocos2d::CCRepeat::isDone() {
    return reinterpret_cast<bool(*)(cocos2d::CCRepeat*)>(base+0x1f37e0)(this);
}

void cocos2d::CCRepeat::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCRepeat*, cocos2d::CCNode*)>(base+0x1f3630)(this, p0);
}

void cocos2d::CCRepeat::stop() {
    return reinterpret_cast<void(*)(cocos2d::CCRepeat*)>(base+0x1f3680)(this);
}

cocos2d::CCActionInterval* cocos2d::CCRepeat::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCRepeat*)>(base+0x1f37f0)(this);
}

void cocos2d::CCSkewBy::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSkewBy*, cocos2d::CCNode*)>(base+0x1f5d00)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCSkewBy::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCSkewBy*)>(base+0x1f5d40)(this);
}

bool cocos2d::CCSkewBy::initWithDuration(float p0, float p1, float p2) {
    return reinterpret_cast<bool(*)(cocos2d::CCSkewBy*, float, float, float)>(base+0x1f5cb0)(this, p0, p1, p2);
}

void cocos2d::CCSkewTo::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSkewTo*, float)>(base+0x1f5b20)(this, p0);
}

void cocos2d::CCSkewTo::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSkewTo*, cocos2d::CCNode*)>(base+0x1f59f0)(this, p0);
}

bool cocos2d::CCSkewTo::initWithDuration(float p0, float p1, float p2) {
    return reinterpret_cast<bool(*)(cocos2d::CCSkewTo*, float, float, float)>(base+0x1f58d0)(this, p0, p1, p2);
}

bool cocos2d::CCSprite::init() {
    return reinterpret_cast<bool(*)(cocos2d::CCSprite*)>(base+0x132ef0)(this);
}

void cocos2d::CCSprite::setVertexZ(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, float)>(base+0x134a80)(this, p0);
}

void cocos2d::CCSprite::setScaleX(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, float)>(base+0x134900)(this, p0);
}

void cocos2d::CCSprite::setScaleY(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, float)>(base+0x134980)(this, p0);
}

void cocos2d::CCSprite::setScale(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, float)>(base+0x134a00)(this, p0);
}

void cocos2d::CCSprite::setPosition(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, cocos2d::CCPoint const&)>(base+0x134650)(this, p0);
}

void cocos2d::CCSprite::setSkewX(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, float)>(base+0x134820)(this, p0);
}

void cocos2d::CCSprite::setSkewY(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, float)>(base+0x134890)(this, p0);
}

void cocos2d::CCSprite::setAnchorPoint(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, cocos2d::CCPoint const&)>(base+0x134af0)(this, p0);
}

void cocos2d::CCSprite::setVisible(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, bool)>(base+0x134b70)(this, p0);
}

void cocos2d::CCSprite::setRotation(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, float)>(base+0x1346d0)(this, p0);
}

void cocos2d::CCSprite::setRotationX(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, float)>(base+0x134740)(this, p0);
}

void cocos2d::CCSprite::setRotationY(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, float)>(base+0x1347b0)(this, p0);
}

void cocos2d::CCSprite::ignoreAnchorPointForPosition(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, bool)>(base+0x134b60)(this, p0);
}

void cocos2d::CCSprite::addChild(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, cocos2d::CCNode*)>(base+0x134190)(this, p0);
}

void cocos2d::CCSprite::addChild(cocos2d::CCNode* p0, int p1) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, cocos2d::CCNode*, int)>(base+0x1341a0)(this, p0, p1);
}

void cocos2d::CCSprite::addChild(cocos2d::CCNode* p0, int p1, int p2) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, cocos2d::CCNode*, int, int)>(base+0x1341b0)(this, p0, p1, p2);
}

void cocos2d::CCSprite::removeChild(cocos2d::CCNode* p0, bool p1) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, cocos2d::CCNode*, bool)>(base+0x134300)(this, p0, p1);
}

void cocos2d::CCSprite::removeAllChildrenWithCleanup(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, bool)>(base+0x134340)(this, p0);
}

void cocos2d::CCSprite::reorderChild(cocos2d::CCNode* p0, int p1) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, cocos2d::CCNode*, int)>(base+0x134270)(this, p0, p1);
}

void cocos2d::CCSprite::sortAllChildren() {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*)>(base+0x1343f0)(this);
}

void cocos2d::CCSprite::draw() {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*)>(base+0x134070)(this);
}

void cocos2d::CCSprite::updateTransform() {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*)>(base+0x133b70)(this);
}

void cocos2d::CCSprite::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, unsigned char)>(base+0x134da0)(this, p0);
}

void cocos2d::CCSprite::updateDisplayedOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, unsigned char)>(base+0x1354c0)(this, p0);
}

void cocos2d::CCSprite::setColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, cocos2d::_ccColor3B const&)>(base+0x134ff0)(this, p0);
}

void cocos2d::CCSprite::updateDisplayedColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, cocos2d::_ccColor3B const&)>(base+0x135370)(this, p0);
}

void cocos2d::CCSprite::setOpacityModifyRGB(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, bool)>(base+0x135200)(this, p0);
}

bool cocos2d::CCSprite::isOpacityModifyRGB() {
    return reinterpret_cast<bool(*)(cocos2d::CCSprite*)>(base+0x135350)(this);
}

bool cocos2d::CCSprite::initWithTexture(cocos2d::CCTexture2D* p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCSprite*, cocos2d::CCTexture2D*)>(base+0x133110)(this, p0);
}

bool cocos2d::CCSprite::initWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1) {
    return reinterpret_cast<bool(*)(cocos2d::CCSprite*, cocos2d::CCTexture2D*, cocos2d::CCRect const&)>(base+0x1330f0)(this, p0, p1);
}

bool cocos2d::CCSprite::initWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1, bool p2) {
    return reinterpret_cast<bool(*)(cocos2d::CCSprite*, cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool)>(base+0x132f10)(this, p0, p1, p2);
}

bool cocos2d::CCSprite::initWithSpriteFrame(cocos2d::CCSpriteFrame* p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCSprite*, cocos2d::CCSpriteFrame*)>(base+0x133270)(this, p0);
}

bool cocos2d::CCSprite::initWithSpriteFrameName(char const* p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCSprite*, char const*)>(base+0x1332c0)(this, p0);
}

bool cocos2d::CCSprite::initWithFile(char const* p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCSprite*, char const*)>(base+0x133180)(this, p0);
}

bool cocos2d::CCSprite::initWithFile(char const* p0, cocos2d::CCRect const& p1) {
    return reinterpret_cast<bool(*)(cocos2d::CCSprite*, char const*, cocos2d::CCRect const&)>(base+0x133210)(this, p0, p1);
}

void cocos2d::CCSprite::setTexture(cocos2d::CCTexture2D* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, cocos2d::CCTexture2D*)>(base+0x135a90)(this, p0);
}

cocos2d::CCTexture2D* cocos2d::CCSprite::getTexture() {
    return reinterpret_cast<cocos2d::CCTexture2D*(*)(cocos2d::CCSprite*)>(base+0x135c00)(this);
}

void cocos2d::CCSprite::setChildColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, cocos2d::_ccColor3B const&)>(base+0x135160)(this, p0);
}

void cocos2d::CCSprite::setChildOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, unsigned char)>(base+0x134f50)(this, p0);
}

cocos2d::CCSpriteBatchNode* cocos2d::CCSprite::getBatchNode() {
    return reinterpret_cast<cocos2d::CCSpriteBatchNode*(*)(cocos2d::CCSprite*)>(base+0x135910)(this);
}

void cocos2d::CCSprite::setBatchNode(cocos2d::CCSpriteBatchNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, cocos2d::CCSpriteBatchNode*)>(base+0x135920)(this, p0);
}

void cocos2d::CCSprite::refreshTextureRect() {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*)>(base+0x133520)(this);
}

void cocos2d::CCSprite::setTextureRect(cocos2d::CCRect const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, cocos2d::CCRect const&)>(base+0x133560)(this, p0);
}

void cocos2d::CCSprite::setTextureRect(cocos2d::CCRect const& p0, bool p1, cocos2d::CCSize const& p2) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, cocos2d::CCRect const&, bool, cocos2d::CCSize const&)>(base+0x133580)(this, p0, p1, p2);
}

void cocos2d::CCSprite::setVertexRect(cocos2d::CCRect const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, cocos2d::CCRect const&)>(base+0x1338f0)(this, p0);
}

void cocos2d::CCSprite::setDisplayFrame(cocos2d::CCSpriteFrame* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, cocos2d::CCSpriteFrame*)>(base+0x135610)(this, p0);
}

bool cocos2d::CCSprite::isFrameDisplayed(cocos2d::CCSpriteFrame* p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCSprite*, cocos2d::CCSpriteFrame*)>(base+0x1356d0)(this, p0);
}

cocos2d::CCSpriteFrame* cocos2d::CCSprite::displayFrame() {
    return reinterpret_cast<cocos2d::CCSpriteFrame*(*)(cocos2d::CCSprite*)>(base+0x135760)(this);
}

void cocos2d::CCSprite::setDisplayFrameWithAnimationName(char const* p0, int p1) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, char const*, int)>(base+0x135680)(this, p0, p1);
}

void cocos2d::CCSprite::setTextureCoords(cocos2d::CCRect const& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, cocos2d::CCRect const&)>(base+0x133910)(this, p0);
}

void cocos2d::CCSprite::updateBlendFunc() {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*)>(base+0x135a20)(this);
}

void cocos2d::CCSprite::setReorderChildDirtyRecursively() {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*)>(base+0x134550)(this);
}

void cocos2d::CCSprite::setDirtyRecursively(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCSprite*, bool)>(base+0x1345b0)(this, p0);
}

bool cocos2d::CCString::isEqual(cocos2d::CCObject const* p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCString*, cocos2d::CCObject const*)>(base+0x44c8f0)(this, p0);
}

void cocos2d::CCString::acceptVisitor(cocos2d::CCDataVisitor& p0) {
    return reinterpret_cast<void(*)(cocos2d::CCString*, cocos2d::CCDataVisitor&)>(base+0x44ccb0)(this, p0);
}

void cocos2d::CCTintBy::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTintBy*, float)>(base+0x1f8870)(this, p0);
}

void cocos2d::CCTintBy::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTintBy*, cocos2d::CCNode*)>(base+0x1f8800)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCTintBy::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCTintBy*)>(base+0x1f8950)(this);
}

void cocos2d::CCTintTo::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTintTo*, float)>(base+0x1f8510)(this, p0);
}

void cocos2d::CCTintTo::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCTintTo*, cocos2d::CCNode*)>(base+0x1f84b0)(this, p0);
}

void cocos2d::CCAnimate::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCAnimate*, float)>(base+0x1f9610)(this, p0);
}

void cocos2d::CCAnimate::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCAnimate*, cocos2d::CCNode*)>(base+0x1f9570)(this, p0);
}

void cocos2d::CCAnimate::stop() {
    return reinterpret_cast<void(*)(cocos2d::CCAnimate*)>(base+0x1f95d0)(this);
}

cocos2d::CCActionInterval* cocos2d::CCAnimate::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCAnimate*)>(base+0x1f9840)(this);
}

void cocos2d::CCEGLView::end() {
    return reinterpret_cast<void(*)(cocos2d::CCEGLView*)>(base+0x2954a0)(this);
}

bool cocos2d::CCEGLView::isOpenGLReady() {
    return reinterpret_cast<bool(*)(cocos2d::CCEGLView*)>(base+0x295470)(this);
}

void cocos2d::CCEGLView::swapBuffers() {
    return reinterpret_cast<void(*)(cocos2d::CCEGLView*)>(base+0x295510)(this);
}

void cocos2d::CCEGLView::setIMEKeyboardState(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEGLView*, bool)>(base+0x295550)(this, p0);
}

void cocos2d::CCEaseOut::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCEaseOut*, float)>(base+0x2a1d20)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCEaseOut::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCEaseOut*)>(base+0x2a1d50)(this);
}

void cocos2d::CCFadeOut::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFadeOut*, float)>(base+0x1f7ee0)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCFadeOut::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCFadeOut*)>(base+0x1f7f50)(this);
}

void cocos2d::CCFlipX3D::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFlipX3D*, float)>(base+0x127560)(this, p0);
}

bool cocos2d::CCFlipX3D::initWithDuration(float p0) {
    return reinterpret_cast<bool(*)(cocos2d::CCFlipX3D*, float)>(base+0x1273d0)(this, p0);
}

bool cocos2d::CCFlipX3D::initWithSize(cocos2d::CCSize const& p0, float p1) {
    return reinterpret_cast<bool(*)(cocos2d::CCFlipX3D*, cocos2d::CCSize const&, float)>(base+0x127420)(this, p0, p1);
}

void cocos2d::CCFlipY3D::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCFlipY3D*, float)>(base+0x127a50)(this, p0);
}

void cocos2d::CCScaleBy::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCScaleBy*, cocos2d::CCNode*)>(base+0x1f7640)(this, p0);
}

cocos2d::CCActionInterval* cocos2d::CCScaleBy::reverse() {
    return reinterpret_cast<cocos2d::CCActionInterval*(*)(cocos2d::CCScaleBy*)>(base+0x1f76b0)(this);
}

void cocos2d::CCScaleTo::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCScaleTo*, float)>(base+0x1f7360)(this, p0);
}

void cocos2d::CCScaleTo::startWithTarget(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::CCScaleTo*, cocos2d::CCNode*)>(base+0x1f72f0)(this, p0);
}

void cocos2d::CCShaky3D::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCShaky3D*, float)>(base+0x128ae0)(this, p0);
}

void cocos2d::CCWaves3D::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::CCWaves3D*, float)>(base+0x127170)(this, p0);
}

bool cocos2d::extension::CCTableView::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCTableView*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x234bf0)(this, p0, p1);
}

void cocos2d::extension::CCTableView::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCTableView*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x234da0)(this, p0, p1);
}

void cocos2d::extension::CCTableView::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCTableView*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x234ae0)(this, p0, p1);
}

void cocos2d::extension::CCTableView::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCTableView*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x234e50)(this, p0, p1);
}

bool cocos2d::extension::CCScrollView::init() {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCScrollView*)>(base+0x214fb0)(this);
}

void cocos2d::extension::CCScrollView::setContentSize(cocos2d::CCSize const& p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScrollView*, cocos2d::CCSize const&)>(base+0x215eb0)(this, p0);
}

cocos2d::CCSize const& cocos2d::extension::CCScrollView::getContentSize() const {
    return reinterpret_cast<cocos2d::CCSize const&(*)(const cocos2d::extension::CCScrollView*)>(base+0x215e90)(this);
}

void cocos2d::extension::CCScrollView::addChild(cocos2d::CCNode* p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScrollView*, cocos2d::CCNode*)>(base+0x216160)(this, p0);
}

void cocos2d::extension::CCScrollView::addChild(cocos2d::CCNode* p0, int p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScrollView*, cocos2d::CCNode*, int)>(base+0x216120)(this, p0, p1);
}

void cocos2d::extension::CCScrollView::addChild(cocos2d::CCNode* p0, int p1, int p2) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScrollView*, cocos2d::CCNode*, int, int)>(base+0x216080)(this, p0, p1, p2);
}

void cocos2d::extension::CCScrollView::visit() {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScrollView*)>(base+0x2164a0)(this);
}

bool cocos2d::extension::CCScrollView::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCScrollView*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x216620)(this, p0, p1);
}

void cocos2d::extension::CCScrollView::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScrollView*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x216890)(this, p0, p1);
}

void cocos2d::extension::CCScrollView::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScrollView*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x216c70)(this, p0, p1);
}

void cocos2d::extension::CCScrollView::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScrollView*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x216d30)(this, p0, p1);
}

void cocos2d::extension::CCScrollView::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScrollView*)>(base+0x214ff0)(this);
}

void cocos2d::extension::CCScrollView::setTouchEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScrollView*, bool)>(base+0x215250)(this, p0);
}

bool cocos2d::extension::CCScale9Sprite::init() {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCScale9Sprite*)>(base+0x2115d0)(this);
}

void cocos2d::extension::CCScale9Sprite::setContentSize(cocos2d::CCSize const& p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScale9Sprite*, cocos2d::CCSize const&)>(base+0x2127c0)(this, p0);
}

void cocos2d::extension::CCScale9Sprite::visit() {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScale9Sprite*)>(base+0x213bf0)(this);
}

unsigned char cocos2d::extension::CCScale9Sprite::getOpacity() {
    return reinterpret_cast<unsigned char(*)(cocos2d::extension::CCScale9Sprite*)>(base+0x213f30)(this);
}

void cocos2d::extension::CCScale9Sprite::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScale9Sprite*, unsigned char)>(base+0x213dd0)(this, p0);
}

void cocos2d::extension::CCScale9Sprite::updateDisplayedOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScale9Sprite*, unsigned char)>(base+0x2139b0)(this, p0);
}

cocos2d::_ccColor3B const& cocos2d::extension::CCScale9Sprite::getColor() {
    return reinterpret_cast<cocos2d::_ccColor3B const&(*)(cocos2d::extension::CCScale9Sprite*)>(base+0x213db0)(this);
}

void cocos2d::extension::CCScale9Sprite::setColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScale9Sprite*, cocos2d::_ccColor3B const&)>(base+0x213c20)(this, p0);
}

void cocos2d::extension::CCScale9Sprite::updateDisplayedColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScale9Sprite*, cocos2d::_ccColor3B const&)>(base+0x213a20)(this, p0);
}

void cocos2d::extension::CCScale9Sprite::setOpacityModifyRGB(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScale9Sprite*, bool)>(base+0x213830)(this, p0);
}

bool cocos2d::extension::CCScale9Sprite::isOpacityModifyRGB() {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCScale9Sprite*)>(base+0x213990)(this);
}

cocos2d::CCSize cocos2d::extension::CCScale9Sprite::getPreferredSize() {
    return reinterpret_cast<cocos2d::CCSize(*)(cocos2d::extension::CCScale9Sprite*)>(base+0x213620)(this);
}

void cocos2d::extension::CCScale9Sprite::setPreferredSize(cocos2d::CCSize p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScale9Sprite*, cocos2d::CCSize)>(base+0x2135f0)(this, p0);
}

cocos2d::CCRect cocos2d::extension::CCScale9Sprite::getCapInsets() {
    return reinterpret_cast<cocos2d::CCRect(*)(cocos2d::extension::CCScale9Sprite*)>(base+0x2136e0)(this);
}

void cocos2d::extension::CCScale9Sprite::setCapInsets(cocos2d::CCRect p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScale9Sprite*, cocos2d::CCRect)>(base+0x213640)(this, p0);
}

float cocos2d::extension::CCScale9Sprite::getInsetLeft() {
    return reinterpret_cast<float(*)(cocos2d::extension::CCScale9Sprite*)>(base+0x213b30)(this);
}

void cocos2d::extension::CCScale9Sprite::setInsetLeft(float p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScale9Sprite*, float)>(base+0x213b70)(this, p0);
}

float cocos2d::extension::CCScale9Sprite::getInsetTop() {
    return reinterpret_cast<float(*)(cocos2d::extension::CCScale9Sprite*)>(base+0x213b40)(this);
}

void cocos2d::extension::CCScale9Sprite::setInsetTop(float p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScale9Sprite*, float)>(base+0x213b90)(this, p0);
}

float cocos2d::extension::CCScale9Sprite::getInsetRight() {
    return reinterpret_cast<float(*)(cocos2d::extension::CCScale9Sprite*)>(base+0x213b50)(this);
}

void cocos2d::extension::CCScale9Sprite::setInsetRight(float p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScale9Sprite*, float)>(base+0x213bb0)(this, p0);
}

float cocos2d::extension::CCScale9Sprite::getInsetBottom() {
    return reinterpret_cast<float(*)(cocos2d::extension::CCScale9Sprite*)>(base+0x213b60)(this);
}

void cocos2d::extension::CCScale9Sprite::setInsetBottom(float p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScale9Sprite*, float)>(base+0x213bd0)(this, p0);
}

bool cocos2d::extension::CCScale9Sprite::initWithBatchNode(cocos2d::CCSpriteBatchNode* p0, cocos2d::CCRect p1, bool p2, cocos2d::CCRect p3) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCScale9Sprite*, cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect)>(base+0x211690)(this, p0, p1, p2, p3);
}

bool cocos2d::extension::CCScale9Sprite::initWithBatchNode(cocos2d::CCSpriteBatchNode* p0, cocos2d::CCRect p1, cocos2d::CCRect p2) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCScale9Sprite*, cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, cocos2d::CCRect)>(base+0x211630)(this, p0, p1, p2);
}

bool cocos2d::extension::CCScale9Sprite::initWithFile(char const* p0, cocos2d::CCRect p1, cocos2d::CCRect p2) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCScale9Sprite*, char const*, cocos2d::CCRect, cocos2d::CCRect)>(base+0x212d50)(this, p0, p1, p2);
}

bool cocos2d::extension::CCScale9Sprite::initWithFile(char const* p0, cocos2d::CCRect p1) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCScale9Sprite*, char const*, cocos2d::CCRect)>(base+0x212e80)(this, p0, p1);
}

bool cocos2d::extension::CCScale9Sprite::initWithFile(cocos2d::CCRect p0, char const* p1) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCScale9Sprite*, cocos2d::CCRect, char const*)>(base+0x212f80)(this, p0, p1);
}

bool cocos2d::extension::CCScale9Sprite::initWithFile(char const* p0) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCScale9Sprite*, char const*)>(base+0x213080)(this, p0);
}

bool cocos2d::extension::CCScale9Sprite::initWithSpriteFrame(cocos2d::CCSpriteFrame* p0, cocos2d::CCRect p1) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCScale9Sprite*, cocos2d::CCSpriteFrame*, cocos2d::CCRect)>(base+0x213140)(this, p0, p1);
}

bool cocos2d::extension::CCScale9Sprite::initWithSpriteFrame(cocos2d::CCSpriteFrame* p0) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCScale9Sprite*, cocos2d::CCSpriteFrame*)>(base+0x213250)(this, p0);
}

bool cocos2d::extension::CCScale9Sprite::initWithSpriteFrameName(char const* p0, cocos2d::CCRect p1) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCScale9Sprite*, char const*, cocos2d::CCRect)>(base+0x213310)(this, p0, p1);
}

bool cocos2d::extension::CCScale9Sprite::initWithSpriteFrameName(char const* p0) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCScale9Sprite*, char const*)>(base+0x213410)(this, p0);
}

bool cocos2d::extension::CCScale9Sprite::updateWithBatchNode(cocos2d::CCSpriteBatchNode* p0, cocos2d::CCRect p1, bool p2, cocos2d::CCRect p3) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCScale9Sprite*, cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect)>(base+0x211730)(this, p0, p1, p2, p3);
}

void cocos2d::extension::CCScale9Sprite::setSpriteFrame(cocos2d::CCSpriteFrame* p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCScale9Sprite*, cocos2d::CCSpriteFrame*)>(base+0x213a90)(this, p0);
}

bool cocos2d::extension::CCControlButton::init() {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControlButton*)>(base+0x1a8420)(this);
}

bool cocos2d::extension::CCControlButton::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControlButton*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1a9c20)(this, p0, p1);
}

void cocos2d::extension::CCControlButton::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1a9db0)(this, p0, p1);
}

void cocos2d::extension::CCControlButton::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1a9ef0)(this, p0, p1);
}

void cocos2d::extension::CCControlButton::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1aa1a0)(this, p0, p1);
}

unsigned char cocos2d::extension::CCControlButton::getOpacity() {
    return reinterpret_cast<unsigned char(*)(cocos2d::extension::CCControlButton*)>(base+0x1aa090)(this);
}

void cocos2d::extension::CCControlButton::setOpacity(unsigned char p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, unsigned char)>(base+0x1a9fc0)(this, p0);
}

cocos2d::_ccColor3B const& cocos2d::extension::CCControlButton::getColor() {
    return reinterpret_cast<cocos2d::_ccColor3B const&(*)(cocos2d::extension::CCControlButton*)>(base+0x1aa180)(this);
}

void cocos2d::extension::CCControlButton::setColor(cocos2d::_ccColor3B const& p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, cocos2d::_ccColor3B const&)>(base+0x1aa0b0)(this, p0);
}

void cocos2d::extension::CCControlButton::setEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, bool)>(base+0x1a8b00)(this, p0);
}

void cocos2d::extension::CCControlButton::setSelected(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, bool)>(base+0x1a8b30)(this, p0);
}

void cocos2d::extension::CCControlButton::setHighlighted(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, bool)>(base+0x1a8b60)(this, p0);
}

void cocos2d::extension::CCControlButton::needsLayout() {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*)>(base+0x1a9700)(this);
}

cocos2d::CCSize cocos2d::extension::CCControlButton::getPreferredSize() {
    return reinterpret_cast<cocos2d::CCSize(*)(cocos2d::extension::CCControlButton*)>(base+0x1a8d20)(this);
}

void cocos2d::extension::CCControlButton::setPreferredSize(cocos2d::CCSize p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, cocos2d::CCSize)>(base+0x1a8c60)(this, p0);
}

bool cocos2d::extension::CCControlButton::getZoomOnTouchDown() {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControlButton*)>(base+0x1a8c50)(this);
}

void cocos2d::extension::CCControlButton::setZoomOnTouchDown(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, bool)>(base+0x1a8c40)(this, p0);
}

cocos2d::CCPoint cocos2d::extension::CCControlButton::getLabelAnchorPoint() {
    return reinterpret_cast<cocos2d::CCPoint(*)(cocos2d::extension::CCControlButton*)>(base+0x1a8d50)(this);
}

void cocos2d::extension::CCControlButton::setLabelAnchorPoint(cocos2d::CCPoint p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, cocos2d::CCPoint)>(base+0x1a8d70)(this, p0);
}

void cocos2d::extension::CCControlButton::setMargins(int p0, int p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, int, int)>(base+0x1a8ae0)(this, p0, p1);
}

bool cocos2d::extension::CCControlButton::initWithLabelAndBackgroundSprite(cocos2d::CCNode* p0, cocos2d::extension::CCScale9Sprite* p1) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControlButton*, cocos2d::CCNode*, cocos2d::extension::CCScale9Sprite*)>(base+0x1a8480)(this, p0, p1);
}

bool cocos2d::extension::CCControlButton::initWithTitleAndFontNameAndFontSize(std::string p0, char const* p1, float p2) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControlButton*, std::string, char const*, float)>(base+0x1a88f0)(this, p0, p1, p2);
}

bool cocos2d::extension::CCControlButton::initWithBackgroundSprite(cocos2d::extension::CCScale9Sprite* p0) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControlButton*, cocos2d::extension::CCScale9Sprite*)>(base+0x1a8a30)(this, p0);
}

cocos2d::CCString* cocos2d::extension::CCControlButton::getTitleForState(unsigned int p0) {
    return reinterpret_cast<cocos2d::CCString*(*)(cocos2d::extension::CCControlButton*, unsigned int)>(base+0x1a8db0)(this, p0);
}

void cocos2d::extension::CCControlButton::setTitleForState(cocos2d::CCString* p0, unsigned int p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, cocos2d::CCString*, unsigned int)>(base+0x1a8e90)(this, p0, p1);
}

cocos2d::_ccColor3B const cocos2d::extension::CCControlButton::getTitleColorForState(unsigned int p0) {
    return reinterpret_cast<cocos2d::_ccColor3B const(*)(cocos2d::extension::CCControlButton*, unsigned int)>(base+0x1a8f00)(this, p0);
}

void cocos2d::extension::CCControlButton::setTitleColorForState(cocos2d::_ccColor3B p0, unsigned int p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, cocos2d::_ccColor3B, unsigned int)>(base+0x1a8f60)(this, p0, p1);
}

cocos2d::CCNode* cocos2d::extension::CCControlButton::getTitleLabelForState(unsigned int p0) {
    return reinterpret_cast<cocos2d::CCNode*(*)(cocos2d::extension::CCControlButton*, unsigned int)>(base+0x1a9020)(this, p0);
}

void cocos2d::extension::CCControlButton::setTitleLabelForState(cocos2d::CCNode* p0, unsigned int p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, cocos2d::CCNode*, unsigned int)>(base+0x1a9060)(this, p0, p1);
}

void cocos2d::extension::CCControlButton::setTitleTTFForState(char const* p0, unsigned int p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, char const*, unsigned int)>(base+0x1a9140)(this, p0, p1);
}

char const* cocos2d::extension::CCControlButton::getTitleTTFForState(unsigned int p0) {
    return reinterpret_cast<char const*(*)(cocos2d::extension::CCControlButton*, unsigned int)>(base+0x1a9240)(this, p0);
}

void cocos2d::extension::CCControlButton::setTitleTTFSizeForState(float p0, unsigned int p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, float, unsigned int)>(base+0x1a92b0)(this, p0, p1);
}

float cocos2d::extension::CCControlButton::getTitleTTFSizeForState(unsigned int p0) {
    return reinterpret_cast<float(*)(cocos2d::extension::CCControlButton*, unsigned int)>(base+0x1a9330)(this, p0);
}

void cocos2d::extension::CCControlButton::setTitleBMFontForState(char const* p0, unsigned int p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, char const*, unsigned int)>(base+0x1a93a0)(this, p0, p1);
}

char const* cocos2d::extension::CCControlButton::getTitleBMFontForState(unsigned int p0) {
    return reinterpret_cast<char const*(*)(cocos2d::extension::CCControlButton*, unsigned int)>(base+0x1a9490)(this, p0);
}

cocos2d::extension::CCScale9Sprite* cocos2d::extension::CCControlButton::getBackgroundSpriteForState(unsigned int p0) {
    return reinterpret_cast<cocos2d::extension::CCScale9Sprite*(*)(cocos2d::extension::CCControlButton*, unsigned int)>(base+0x1a9500)(this, p0);
}

void cocos2d::extension::CCControlButton::setBackgroundSpriteForState(cocos2d::extension::CCScale9Sprite* p0, unsigned int p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, cocos2d::extension::CCScale9Sprite*, unsigned int)>(base+0x1a9540)(this, p0, p1);
}

void cocos2d::extension::CCControlButton::setBackgroundSpriteFrameForState(cocos2d::CCSpriteFrame* p0, unsigned int p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlButton*, cocos2d::CCSpriteFrame*, unsigned int)>(base+0x1a96d0)(this, p0, p1);
}

bool cocos2d::extension::CCControlSlider::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControlSlider*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1de890)(this, p0, p1);
}

void cocos2d::extension::CCControlSlider::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlSlider*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1deaf0)(this, p0, p1);
}

void cocos2d::extension::CCControlSlider::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlSlider*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1decc0)(this, p0, p1);
}

void cocos2d::extension::CCControlSlider::setEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlSlider*, bool)>(base+0x1de610)(this, p0);
}

void cocos2d::extension::CCControlSlider::needsLayout() {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlSlider*)>(base+0x1deea0)(this);
}

bool cocos2d::extension::CCControlSlider::isTouchInside(cocos2d::CCTouch* p0) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControlSlider*, cocos2d::CCTouch*)>(base+0x1de750)(this, p0);
}

void cocos2d::extension::CCControlSlider::setValue(float p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlSlider*, float)>(base+0x1de660)(this, p0);
}

void cocos2d::extension::CCControlSlider::setMinimumValue(float p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlSlider*, float)>(base+0x1de6b0)(this, p0);
}

void cocos2d::extension::CCControlSlider::setMaximumValue(float p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlSlider*, float)>(base+0x1de700)(this, p0);
}

bool cocos2d::extension::CCControlSlider::initWithSprites(cocos2d::CCSprite* p0, cocos2d::CCSprite* p1, cocos2d::CCSprite* p2) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControlSlider*, cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*)>(base+0x1de320)(this, p0, p1, p2);
}

bool cocos2d::extension::CCControlSwitch::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControlSwitch*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1e5bc0)(this, p0, p1);
}

void cocos2d::extension::CCControlSwitch::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlSwitch*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1e5cb0)(this, p0, p1);
}

void cocos2d::extension::CCControlSwitch::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlSwitch*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1e5d80)(this, p0, p1);
}

void cocos2d::extension::CCControlSwitch::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlSwitch*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1e5ef0)(this, p0, p1);
}

void cocos2d::extension::CCControlSwitch::setEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlSwitch*, bool)>(base+0x1e5b30)(this, p0);
}

void cocos2d::extension::CCControlStepper::update(float p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlStepper*, float)>(base+0x1e12a0)(this, p0);
}

bool cocos2d::extension::CCControlStepper::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControlStepper*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1e1470)(this, p0, p1);
}

void cocos2d::extension::CCControlStepper::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlStepper*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1e1620)(this, p0, p1);
}

void cocos2d::extension::CCControlStepper::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlStepper*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1e1750)(this, p0, p1);
}

void cocos2d::extension::CCControlStepper::setWraps(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlStepper*, bool)>(base+0x1e0fe0)(this, p0);
}

void cocos2d::extension::CCControlStepper::setMinimumValue(double p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlStepper*, double)>(base+0x1e1060)(this, p0);
}

void cocos2d::extension::CCControlStepper::setMaximumValue(double p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlStepper*, double)>(base+0x1e1090)(this, p0);
}

void cocos2d::extension::CCControlStepper::setValue(double p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlStepper*, double)>(base+0x1e10c0)(this, p0);
}

double cocos2d::extension::CCControlStepper::getValue() {
    return reinterpret_cast<double(*)(cocos2d::extension::CCControlStepper*)>(base+0x1e10e0)(this);
}

void cocos2d::extension::CCControlStepper::setStepValue(double p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlStepper*, double)>(base+0x1e10f0)(this, p0);
}

void cocos2d::extension::CCControlStepper::setValueWithSendingEvent(double p0, bool p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlStepper*, double, bool)>(base+0x1e1110)(this, p0, p1);
}

bool cocos2d::extension::CCControlStepper::isContinuous() {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControlStepper*)>(base+0x1e1100)(this);
}

bool cocos2d::extension::CCControlHuePicker::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControlHuePicker*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1ac050)(this, p0, p1);
}

void cocos2d::extension::CCControlHuePicker::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlHuePicker*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1ac150)(this, p0, p1);
}

void cocos2d::extension::CCControlHuePicker::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlHuePicker*)>(base+0x1abcd0)(this);
}

void cocos2d::extension::CCControlHuePicker::setEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlHuePicker*, bool)>(base+0x1abe70)(this, p0);
}

void cocos2d::extension::CCControlHuePicker::setHue(float p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlHuePicker*, float)>(base+0x1abd40)(this, p0);
}

void cocos2d::extension::CCControlHuePicker::setHuePercentage(float p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlHuePicker*, float)>(base+0x1abd70)(this, p0);
}

bool cocos2d::extension::CCControlHuePicker::initWithTargetAndPos(cocos2d::CCNode* p0, cocos2d::CCPoint p1) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControlHuePicker*, cocos2d::CCNode*, cocos2d::CCPoint)>(base+0x1abb30)(this, p0, p1);
}

bool cocos2d::extension::CCControlPotentiometer::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControlPotentiometer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1ade70)(this, p0, p1);
}

void cocos2d::extension::CCControlPotentiometer::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlPotentiometer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1ae030)(this, p0, p1);
}

void cocos2d::extension::CCControlPotentiometer::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlPotentiometer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1ae2a0)(this, p0, p1);
}

void cocos2d::extension::CCControlPotentiometer::setEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlPotentiometer*, bool)>(base+0x1adb80)(this, p0);
}

bool cocos2d::extension::CCControlPotentiometer::isTouchInside(cocos2d::CCTouch* p0) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControlPotentiometer*, cocos2d::CCTouch*)>(base+0x1add50)(this, p0);
}

bool cocos2d::extension::CCControlSaturationBrightnessPicker::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControlSaturationBrightnessPicker*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1b4030)(this, p0, p1);
}

void cocos2d::extension::CCControlSaturationBrightnessPicker::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlSaturationBrightnessPicker*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(base+0x1b4130)(this, p0, p1);
}

void cocos2d::extension::CCControlSaturationBrightnessPicker::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlSaturationBrightnessPicker*)>(base+0x1b3fc0)(this);
}

void cocos2d::extension::CCControlSaturationBrightnessPicker::setEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlSaturationBrightnessPicker*, bool)>(base+0x1b3b00)(this, p0);
}

bool cocos2d::extension::CCControlSaturationBrightnessPicker::initWithTargetAndPos(cocos2d::CCNode* p0, cocos2d::CCPoint p1) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControlSaturationBrightnessPicker*, cocos2d::CCNode*, cocos2d::CCPoint)>(base+0x1b3820)(this, p0, p1);
}

void cocos2d::extension::CCControlSaturationBrightnessPicker::updateWithHSV(cocos2d::extension::HSV p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlSaturationBrightnessPicker*, cocos2d::extension::HSV)>(base+0x1b3b50)(this, p0);
}

void cocos2d::extension::CCControlSaturationBrightnessPicker::updateDraggerWithHSV(cocos2d::extension::HSV p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControlSaturationBrightnessPicker*, cocos2d::extension::HSV)>(base+0x1b3bf0)(this, p0);
}

bool cocos2d::extension::CCControl::init() {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControl*)>(base+0x1a71c0)(this);
}

void cocos2d::extension::CCControl::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControl*)>(base+0x1a7470)(this);
}

void cocos2d::extension::CCControl::onExit() {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControl*)>(base+0x1a7480)(this);
}

void cocos2d::extension::CCControl::registerWithTouchDispatcher() {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControl*)>(base+0x1a7420)(this);
}

void cocos2d::extension::CCControl::setOpacityModifyRGB(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControl*, bool)>(base+0x1a7c10)(this, p0);
}

bool cocos2d::extension::CCControl::isOpacityModifyRGB() {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControl*)>(base+0x1a7d70)(this);
}

void cocos2d::extension::CCControl::setEnabled(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControl*, bool)>(base+0x1a7e60)(this, p0);
}

bool cocos2d::extension::CCControl::isEnabled() {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControl*)>(base+0x1a7e90)(this);
}

void cocos2d::extension::CCControl::setSelected(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControl*, bool)>(base+0x1a7ea0)(this, p0);
}

bool cocos2d::extension::CCControl::isSelected() {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControl*)>(base+0x1a7ec0)(this);
}

void cocos2d::extension::CCControl::setHighlighted(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControl*, bool)>(base+0x1a7ed0)(this, p0);
}

bool cocos2d::extension::CCControl::isHighlighted() {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControl*)>(base+0x1a7ef0)(this);
}

void cocos2d::extension::CCControl::needsLayout() {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControl*)>(base+0x1a7e50)(this);
}

void cocos2d::extension::CCControl::sendActionsForControlEvents(unsigned int p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControl*, unsigned int)>(base+0x1a7490)(this, p0);
}

void cocos2d::extension::CCControl::addTargetWithActionForControlEvents(cocos2d::CCObject* p0, cocos2d::extension::SEL_EventHandler p1, unsigned int p2) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControl*, cocos2d::CCObject*, cocos2d::extension::SEL_EventHandler, unsigned int)>(base+0x1a7820)(this, p0, p1, p2);
}

void cocos2d::extension::CCControl::removeTargetWithActionForControlEvents(cocos2d::CCObject* p0, cocos2d::extension::SEL_EventHandler p1, unsigned int p2) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCControl*, cocos2d::CCObject*, cocos2d::extension::SEL_EventHandler, unsigned int)>(base+0x1a7950)(this, p0, p1, p2);
}

cocos2d::CCPoint cocos2d::extension::CCControl::getTouchLocation(cocos2d::CCTouch* p0) {
    return reinterpret_cast<cocos2d::CCPoint(*)(cocos2d::extension::CCControl*, cocos2d::CCTouch*)>(base+0x1a7d90)(this, p0);
}

bool cocos2d::extension::CCControl::isTouchInside(cocos2d::CCTouch* p0) {
    return reinterpret_cast<bool(*)(cocos2d::extension::CCControl*, cocos2d::CCTouch*)>(base+0x1a7de0)(this, p0);
}

void cocos2d::extension::CCEditBox::setPosition(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCEditBox*, cocos2d::CCPoint const&)>(base+0x26d850)(this, p0);
}

void cocos2d::extension::CCEditBox::setAnchorPoint(cocos2d::CCPoint const& p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCEditBox*, cocos2d::CCPoint const&)>(base+0x26d910)(this, p0);
}

void cocos2d::extension::CCEditBox::setContentSize(cocos2d::CCSize const& p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCEditBox*, cocos2d::CCSize const&)>(base+0x26d8d0)(this, p0);
}

void cocos2d::extension::CCEditBox::setVisible(bool p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCEditBox*, bool)>(base+0x26d890)(this, p0);
}

void cocos2d::extension::CCEditBox::onEnter() {
    return reinterpret_cast<void(*)(cocos2d::extension::CCEditBox*)>(base+0x26d980)(this);
}

void cocos2d::extension::CCEditBox::onExit() {
    return reinterpret_cast<void(*)(cocos2d::extension::CCEditBox*)>(base+0x26d9b0)(this);
}

void cocos2d::extension::CCEditBox::visit() {
    return reinterpret_cast<void(*)(cocos2d::extension::CCEditBox*)>(base+0x26d950)(this);
}

void cocos2d::extension::CCEditBox::keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo& p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCEditBox*, cocos2d::CCIMEKeyboardNotificationInfo&)>(base+0x26d9e0)(this, p0);
}

void cocos2d::extension::CCEditBox::keyboardDidShow(cocos2d::CCIMEKeyboardNotificationInfo& p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCEditBox*, cocos2d::CCIMEKeyboardNotificationInfo&)>(base+0x26daf0)(this, p0);
}

void cocos2d::extension::CCEditBox::keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo& p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCEditBox*, cocos2d::CCIMEKeyboardNotificationInfo&)>(base+0x26db10)(this, p0);
}

void cocos2d::extension::CCEditBox::keyboardDidHide(cocos2d::CCIMEKeyboardNotificationInfo& p0) {
    return reinterpret_cast<void(*)(cocos2d::extension::CCEditBox*, cocos2d::CCIMEKeyboardNotificationInfo&)>(base+0x26db80)(this, p0);
}
