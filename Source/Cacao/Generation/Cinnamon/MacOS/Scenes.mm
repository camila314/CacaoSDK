class MenuLayer : cocos2d::CCLayer, FLAlertLayerProtocol {
    virtual ~MenuLayer() = 0x1d1230;
    virtual bool init() = 0x1d14b0;
    virtual void keyBackClicked() = 0x1d3160;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x1d33d0;
    virtual void googlePlaySignedIn() = 0x1d2f30;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x1d3190;

    void onMoreGames(cocos2d::CCObject*) = 0x1d2ad0;
    void onQuit(cocos2d::CCObject*) = 0x1d2b40;
    void scene(bool) = 0x1d12d0;
}
