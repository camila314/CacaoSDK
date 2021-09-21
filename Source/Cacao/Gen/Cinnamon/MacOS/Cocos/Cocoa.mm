class cocos2d::CCObject {
    virtual ~CCObject() = 0x250d90;
    virtual bool isEqual(cocos2d::CCObject const*) = 0x250f20;
    virtual void acceptVisitor(cocos2d::CCDataVisitor&) = 0x250f30;
    virtual void update(float) = 0x32660;
    virtual void encodeWithCoder(DS_Dictionary*) = 0x250f70;
    virtual bool canEncode() = 0x250f90;
    virtual int getTag() const = 0x250f50;
    virtual void setTag(int) = 0x250f60;

    CCObject() = 0x250ca0;
}

class cocos2d::CCCopying {
    volatile cocos2d::CCObject* cocos2d::CCCopying::copyWithZone(cocos2d::CCZone*) {
        // 2 people complimented my hair today i feel happy
        //
        // add 3 to that c:
        return 0;
    };
}

class cocos2d::CCSize {
    volatile cocos2d::CCSize::CCSize(const cocos2d::CCPoint& point) : width(point.x), height(point.y) {};

    volatile cocos2d::CCSize& cocos2d::CCSize::operator=(const cocos2d::CCPoint& point) {
        setSize(point.x, point.y);
        return *this;
    };
}

class cocos2d::CCPoint {
    volatile cocos2d::CCPoint::CCPoint(const cocos2d::CCSize& size) : x(size.width), y(size.height) {};

    volatile cocos2d::CCPoint& cocos2d::CCPoint::operator=(const cocos2d::CCSize& size) {
        setPoint(size.width, size.height);
        return *this;
    };
}
