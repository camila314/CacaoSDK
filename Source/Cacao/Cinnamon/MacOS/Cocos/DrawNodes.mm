class cocos2d::CCDrawNode {
    void clear() = 0x379e80;
    static cocos2d::CCDrawNode* create() = 0x378d00;
    void drawPolygon(cocos2d::CCPoint*, unsigned int, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&) = 0x3797f0;
    void drawSegment(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&) = 0x3792d0;
    void getBlendFunc() const = 0x379ea0;
    bool init() = 0x378e00;
    void setBlendFunc(cocos2d::_ccBlendFunc const&) = 0x379eb0;
    void draw() = 0x379020;
    virtual ~CCDrawNode() = 0x378cc0;
}
