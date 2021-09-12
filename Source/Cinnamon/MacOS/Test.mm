class FLAlertLayer : cocos2d::CCLayerColor {
    virtual ~FLAlertLayer() = 0x25db60;
    virtual ~FLAlertLayer() = 0x25dd00;
    virtual void onEnter() = 0x25f350;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25ee40;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25f0a0;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25ef60;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25f020;
    virtual void registerWithTouchDispatcher() = 0x25f2e0;
    virtual void keyBackClicked() = 0x25ed90;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x25ece0;
    virtual void show() = 0x25f120;

    bool init(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float) = 0x25e1b0;

    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float) = 0x25e0e0;
    static FLAlertLayer* create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float) = 0x25dec0;
    
    volatile static FLAlertLayer* create(char const* title, const std::string &desc, char const* btn) {
        return FLAlertLayer::create(nullptr, title, desc, btn, nullptr, 300.0);
    }

    cocos2d::CCMenu* m_buttonMenu; // 0x1f8
    int m_controlConnected; // 0x200
    void* m_alertProtocol; // 0x208
    cocos2d::CCNode* m_scene; // 0x210
    bool m_reverseKeyBack; // 0x211
    cocos2d::ccColor3B m_color; // 0x212
    cocos2d::CCLayer* m_mainLayer; // 0x220
    int m_ZOrder;  //0x228
    bool m_noElasticity; //0x22c
    cocos2d::ccColor3B m_color2; //0x230
    ButtonSprite* m_button1; //0x238
    ButtonSprite* m_button2; //0x240
    CCLayerColor* m_scrollingLayer; //0x248
    int m_joystickConnected; //0x250
    bool m_containsBorder; //0x251
    bool m_noAction; //0x252
}
