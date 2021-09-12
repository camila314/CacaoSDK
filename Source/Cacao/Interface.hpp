#pragma once
#include <Base/InterfaceBase.hpp>

template<class D>
class $FLAlertLayerProtocol : public FLAlertLayerProtocol, public $CacBase {
public:
    inline ~$FLAlertLayerProtocol() {}

    inline $FLAlertLayerProtocol() {
        if (_lock) return;
        _lock = true;
        auto V = *reinterpret_cast<uintptr_t*>(new D());
        _lock = false;
        m->registerHook(extract_destructor(V), +[](){});
    }
};

template<class D>
class $ButtonSprite : public ButtonSprite, public $CacBase {
public:
    inline ~$ButtonSprite() {}

    inline static ButtonSprite* create(char const* p0) {
        if ((ButtonSprite*(*)(char const*)){&$ButtonSprite::create} != (ButtonSprite*(*)(char const*)){&D::create})
            return reinterpret_cast<ButtonSprite*(*)(char const*)>(m->getOriginal(base+0x4fa10))(p0);
    }

    inline static ButtonSprite* create(char const* p0, int p1, int p2, float p3, bool p4) {
        if ((ButtonSprite*(*)(char const*, int, int, float, bool)){&$ButtonSprite::create} != (ButtonSprite*(*)(char const*, int, int, float, bool)){&D::create})
            return reinterpret_cast<ButtonSprite*(*)(char const*, int, int, float, bool)>(m->getOriginal(base+0x4fa40))(p0, p1, p2, p3, p4);
    }

    inline void updateBGImage(char const* p0) {
        if ((void($ButtonSprite::*)(char const*)){&$ButtonSprite::updateBGImage} != (void(D::*)(char const*)){&D::updateBGImage})
            return reinterpret_cast<void(*)(D, char const*)>(m->getOriginal(base+0x502d0))(this, p0);
    }

    inline static ButtonSprite* create(char const* p0, float p1) {
        if ((ButtonSprite*(*)(char const*, float)){&$ButtonSprite::create} != (ButtonSprite*(*)(char const*, float)){&D::create})
            return reinterpret_cast<ButtonSprite*(*)(char const*, float)>(m->getOriginal(base+0x4fa60))(p0, p1);
    }

    inline static ButtonSprite* create(cocos2d::CCSprite* p0, int p1, int p2, float p3, float p4, bool p5, char const* p6, bool p7) {
        if ((ButtonSprite*(*)(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool)){&$ButtonSprite::create} != (ButtonSprite*(*)(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool)){&D::create})
            return reinterpret_cast<ButtonSprite*(*)(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool)>(m->getOriginal(base+0x4fa90))(p0, p1, p2, p3, p4, p5, p6, p7);
    }

    inline $ButtonSprite() {
        if (_lock) return;
        _lock = true;
        auto V = *reinterpret_cast<uintptr_t*>(new D());
        _lock = false;
        m->registerHook(extract_destructor(V), +[](){});

        if ((ButtonSprite*(*)(char const*)){&$ButtonSprite::create} != (ButtonSprite*(*)(char const*)){&D::create})
            m->registerHook(base+0x4fa10, (ButtonSprite*(*)(char const*)){&D::create});

        if ((ButtonSprite*(*)(char const*, int, int, float, bool)){&$ButtonSprite::create} != (ButtonSprite*(*)(char const*, int, int, float, bool)){&D::create})
            m->registerHook(base+0x4fa40, (ButtonSprite*(*)(char const*, int, int, float, bool)){&D::create});

        if ((void($ButtonSprite::*)(char const*)){&$ButtonSprite::updateBGImage} != (void(D::*)(char const*)){&D::updateBGImage})
            m->registerHook(base+0x502d0, extract((void(D::*)(char const*)){&D::updateBGImage}));

        if ((ButtonSprite*(*)(char const*, float)){&$ButtonSprite::create} != (ButtonSprite*(*)(char const*, float)){&D::create})
            m->registerHook(base+0x4fa60, (ButtonSprite*(*)(char const*, float)){&D::create});

        if ((ButtonSprite*(*)(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool)){&$ButtonSprite::create} != (ButtonSprite*(*)(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool)){&D::create})
            m->registerHook(base+0x4fa90, (ButtonSprite*(*)(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool)){&D::create});
    }
};

template<class D>
class $FLAlertLayer : public FLAlertLayer, public $CacBase {
public:
    inline ~$FLAlertLayer() {}

    inline void onEnter() {
        if ((void($FLAlertLayer::*)()){&$FLAlertLayer::onEnter} != (void(D::*)()){&D::onEnter})
            return reinterpret_cast<void(*)(D)>(m->getOriginal(base+0x25f350))(this);
    }

    inline bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
        if ((bool($FLAlertLayer::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$FLAlertLayer::ccTouchBegan} != (bool(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchBegan})
            return reinterpret_cast<bool(*)(D, cocos2d::CCTouch*, cocos2d::CCEvent*)>(m->getOriginal(base+0x25ee40))(this, p0, p1);
    }

    inline void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
        if ((void($FLAlertLayer::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$FLAlertLayer::ccTouchMoved} != (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchMoved})
            return reinterpret_cast<void(*)(D, cocos2d::CCTouch*, cocos2d::CCEvent*)>(m->getOriginal(base+0x25f0a0))(this, p0, p1);
    }

    inline void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
        if ((void($FLAlertLayer::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$FLAlertLayer::ccTouchEnded} != (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchEnded})
            return reinterpret_cast<void(*)(D, cocos2d::CCTouch*, cocos2d::CCEvent*)>(m->getOriginal(base+0x25ef60))(this, p0, p1);
    }

    inline void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) {
        if ((void($FLAlertLayer::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$FLAlertLayer::ccTouchCancelled} != (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchCancelled})
            return reinterpret_cast<void(*)(D, cocos2d::CCTouch*, cocos2d::CCEvent*)>(m->getOriginal(base+0x25f020))(this, p0, p1);
    }

    inline void registerWithTouchDispatcher() {
        if ((void($FLAlertLayer::*)()){&$FLAlertLayer::registerWithTouchDispatcher} != (void(D::*)()){&D::registerWithTouchDispatcher})
            return reinterpret_cast<void(*)(D)>(m->getOriginal(base+0x25f2e0))(this);
    }

    inline void keyBackClicked() {
        if ((void($FLAlertLayer::*)()){&$FLAlertLayer::keyBackClicked} != (void(D::*)()){&D::keyBackClicked})
            return reinterpret_cast<void(*)(D)>(m->getOriginal(base+0x25ed90))(this);
    }

    inline void keyDown(cocos2d::enumKeyCodes p0) {
        if ((void($FLAlertLayer::*)(cocos2d::enumKeyCodes)){&$FLAlertLayer::keyDown} != (void(D::*)(cocos2d::enumKeyCodes)){&D::keyDown})
            return reinterpret_cast<void(*)(D, cocos2d::enumKeyCodes)>(m->getOriginal(base+0x25ece0))(this, p0);
    }

    inline void show() {
        if ((void($FLAlertLayer::*)()){&$FLAlertLayer::show} != (void(D::*)()){&D::show})
            return reinterpret_cast<void(*)(D)>(m->getOriginal(base+0x25f120))(this);
    }

    inline bool init(FLAlertLayerProtocol* p0, char const* p1, std::string p2, char const* p3, char const* p4, float p5, bool p6, float p7) {
        if ((bool($FLAlertLayer::*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&$FLAlertLayer::init} != (bool(D::*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&D::init})
            return reinterpret_cast<bool(*)(D, FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)>(m->getOriginal(base+0x25e1b0))(this, p0, p1, p2, p3, p4, p5, p6, p7);
    }

    inline static FLAlertLayer* create(FLAlertLayerProtocol* p0, char const* p1, std::string p2, char const* p3, char const* p4, float p5) {
        if ((FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float)){&$FLAlertLayer::create} != (FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float)){&D::create})
            return reinterpret_cast<FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float)>(m->getOriginal(base+0x25e0e0))(p0, p1, p2, p3, p4, p5);
    }

    inline static FLAlertLayer* create(FLAlertLayerProtocol* p0, char const* p1, std::string p2, char const* p3, char const* p4, float p5, bool p6, float p7) {
        if ((FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&$FLAlertLayer::create} != (FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&D::create})
            return reinterpret_cast<FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)>(m->getOriginal(base+0x25dec0))(p0, p1, p2, p3, p4, p5, p6, p7);
    }

    inline $FLAlertLayer() {
        if (_lock) return;
        _lock = true;
        auto V = *reinterpret_cast<uintptr_t*>(new D());
        _lock = false;
        m->registerHook(extract_destructor(V), +[](){});

        if ((void($FLAlertLayer::*)()){&$FLAlertLayer::onEnter} != (void(D::*)()){&D::onEnter})
            m->registerHook(base+0x25f350, extract_virtual(V, (void(D::*)()){&D::onEnter}));

        if ((bool($FLAlertLayer::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$FLAlertLayer::ccTouchBegan} != (bool(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchBegan})
            m->registerHook(base+0x25ee40, extract_virtual(V, (bool(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchBegan}));

        if ((void($FLAlertLayer::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$FLAlertLayer::ccTouchMoved} != (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchMoved})
            m->registerHook(base+0x25f0a0, extract_virtual(V, (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchMoved}));

        if ((void($FLAlertLayer::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$FLAlertLayer::ccTouchEnded} != (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchEnded})
            m->registerHook(base+0x25ef60, extract_virtual(V, (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchEnded}));

        if ((void($FLAlertLayer::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&$FLAlertLayer::ccTouchCancelled} != (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchCancelled})
            m->registerHook(base+0x25f020, extract_virtual(V, (void(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*)){&D::ccTouchCancelled}));

        if ((void($FLAlertLayer::*)()){&$FLAlertLayer::registerWithTouchDispatcher} != (void(D::*)()){&D::registerWithTouchDispatcher})
            m->registerHook(base+0x25f2e0, extract_virtual(V, (void(D::*)()){&D::registerWithTouchDispatcher}));

        if ((void($FLAlertLayer::*)()){&$FLAlertLayer::keyBackClicked} != (void(D::*)()){&D::keyBackClicked})
            m->registerHook(base+0x25ed90, extract_virtual(V, (void(D::*)()){&D::keyBackClicked}));

        if ((void($FLAlertLayer::*)(cocos2d::enumKeyCodes)){&$FLAlertLayer::keyDown} != (void(D::*)(cocos2d::enumKeyCodes)){&D::keyDown})
            m->registerHook(base+0x25ece0, extract_virtual(V, (void(D::*)(cocos2d::enumKeyCodes)){&D::keyDown}));

        if ((void($FLAlertLayer::*)()){&$FLAlertLayer::show} != (void(D::*)()){&D::show})
            m->registerHook(base+0x25f120, extract_virtual(V, (void(D::*)()){&D::show}));

        if ((bool($FLAlertLayer::*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&$FLAlertLayer::init} != (bool(D::*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&D::init})
            m->registerHook(base+0x25e1b0, extract((bool(D::*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&D::init}));

        if ((FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float)){&$FLAlertLayer::create} != (FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float)){&D::create})
            m->registerHook(base+0x25e0e0, (FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float)){&D::create});

        if ((FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&$FLAlertLayer::create} != (FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&D::create})
            m->registerHook(base+0x25dec0, (FLAlertLayer*(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float)){&D::create});
    }
};
