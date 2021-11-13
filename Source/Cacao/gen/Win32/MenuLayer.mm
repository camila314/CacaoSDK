class MenuLayer : cocos2d::CCLayer, FLAlertLayerProtocol {
    stdcall static MenuLayer* create() = 0x190550;
    optcall static cocos2d::CCScene* scene(bool options) = 0x190720;
    thiscall virtual bool init() = 0x1907b0;
    thiscall void keyBackClicked() = 0x191f90;
    thiscall virtual void keyDown(cocos2d::enumKeyCodes key) = 0x1922c0;
    optcall void onMoreGames(cocos2d::CCObject* obj) = 0x1919c0;
}
