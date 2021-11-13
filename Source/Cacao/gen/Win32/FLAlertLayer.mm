class FLAlertLayer : cocos2d::CCLayerColor {
    cocos2d::CCMenu* m_pButtonMenu; // 0x198
    int m_nControlConnected; //?
    cocos2d::CCObject* m_pTarget;   // 0x1a0
    cocos2d::CCNode* m_pTargetLayer;    // 0x1a4
    void* m_unknown;
    cocos2d::CCLayer* m_pLayer; // 0x1ac
    int m_nZOrder2; // 0x1b0
    bool m_bNoElasticity;   // 0x1b4
    cocos2d::ccColor3B m_cColor2; //?
    void* m_pButton1;   // 0x1b8
    void* m_pButton2;   // 0x1bc
    void* m_pScrollingLayer; // 0x1c0
    // ButtonSprite* m_pButton1;   // 0x1b8
    // ButtonSprite* m_pButton2;   // 0x1bc
    // ScrollingLayer* m_pScrollingLayer; // 0x1c0
    int m_nJoystickConnected;   // 0x1c4
    bool m_bScrollable; // 0x1c8
    bool m_bNoAction; //?

    // volatile virtual ~FLAlertLayer() {
    //     // recreate destructor
    //     cocos2d::CCDirector::sharedDirector()->getTouchDispatcher()->decrementForcePrio(2);
    // };

    volatile static FLAlertLayer* create(char const* title, const std::string &desc, char const* btn) {
        return FLAlertLayer::create(nullptr, title, desc.c_str(), btn, nullptr, 300.0);
    };

    optcall virtual void show() = 0x23560;

    // FLAlertLayer supports colors of text for the caption. wrap desired text in "<cx></c>"
    //     * where x is the color desired. colors are:
    //     * r - red
    //     * l - lime
    //     * g - green
    //     * y - yellow
    //     * o - orange
    //     * and more that i'm too lazy to find.
    //     * MAKE SURE YOU FOLLOW THIS FORMAT. ROB'S PARSING CAN AND WILL MESS UP OTHERWISE.
        
    optcall static FLAlertLayer* create(FLAlertLayerProtocol* target, const char* title,
        const char* btn1, const char* btn2, std::string caption) = 0x22680;
    optcall static FLAlertLayer* create(FLAlertLayerProtocol* target, const char* title,
        const char* btn1, const char* btn2, std::string caption, float width) = 0x22730;
}
