
template<class D>
struct $UndoObject : UndoObject, InterfaceBase {
    $UndoObject(const $UndoObject& c) : UndoObject(c) {}
    $UndoObject() = delete;

    using ret0 = void;
    static inline auto address0 = base+0xa2fd0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = UndoObject*;
    static inline auto address1 = base+0x94ea0;

    dupable static ret1 create(GameObject* p0,UndoCommand p1) {
        return reinterpret_cast<ret1(*)(UndoObject*, GameObject*, UndoCommand)>(address1)(p0, p1);
    }

    using ret2 = UndoObject*;
    static inline auto address2 = base+0x96ee0;

    dupable static ret2 createWithArray(cocos2d::CCArray* p0,UndoCommand p1) {
        return reinterpret_cast<ret2(*)(UndoObject*, cocos2d::CCArray*, UndoCommand)>(address2)(p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(UndoObject*))(&$UndoObject::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(UndoObject*, GameObject*, UndoCommand))(&$UndoObject::create) != (ret1(D::*)(GameObject*, UndoCommand))(&D::create)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(GameObject*, UndoCommand))(&D::create)));
        }

        if constexpr((ret2(*)(UndoObject*, cocos2d::CCArray*, UndoCommand))(&$UndoObject::createWithArray) != (ret2(D::*)(cocos2d::CCArray*, UndoCommand))(&D::createWithArray)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(cocos2d::CCArray*, UndoCommand))(&D::createWithArray)));
        }

        return true;
    }
};

template<class D>
struct $FMODAudioEngine : FMODAudioEngine, InterfaceBase {
    $FMODAudioEngine(const $FMODAudioEngine& c) : FMODAudioEngine(c) {}
    $FMODAudioEngine() = delete;

    using ret0 = FMODAudioEngine*;
    static inline auto address0 = base+0x20ef80;

    dupable static ret0 sharedEngine() {
        return reinterpret_cast<ret0(*)(FMODAudioEngine*)>(address0)();
    }
    static bool _apply() {

        if constexpr((ret0(*)(FMODAudioEngine*))(&$FMODAudioEngine::sharedEngine) != (ret0(D::*)())(&D::sharedEngine)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::sharedEngine)));
        }

        return true;
    }
};

template<class D>
struct $TouchToggleAction : TouchToggleAction, InterfaceBase {
    $TouchToggleAction(const $TouchToggleAction& c) : TouchToggleAction(c) {}
    $TouchToggleAction() = delete;

    using ret0 = TouchToggleAction*;
    static inline auto address0 = base+0x177e10;

    dupable static ret0 createFromString(gd::string p0) {
        return reinterpret_cast<ret0(*)(TouchToggleAction*, gd::string)>(address0)(p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(TouchToggleAction*, gd::string))(&$TouchToggleAction::createFromString) != (ret0(D::*)(gd::string))(&D::createFromString)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(gd::string))(&D::createFromString)));
        }

        return true;
    }
};

template<class D>
struct $ToggleTriggerAction : ToggleTriggerAction, InterfaceBase {
    $ToggleTriggerAction(const $ToggleTriggerAction& c) : ToggleTriggerAction(c) {}
    $ToggleTriggerAction() = delete;

    using ret0 = ToggleTriggerAction*;
    static inline auto address0 = base+0x1765e0;

    dupable static ret0 createFromString(gd::string p0) {
        return reinterpret_cast<ret0(*)(ToggleTriggerAction*, gd::string)>(address0)(p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(ToggleTriggerAction*, gd::string))(&$ToggleTriggerAction::createFromString) != (ret0(D::*)(gd::string))(&D::createFromString)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(gd::string))(&D::createFromString)));
        }

        return true;
    }
};

template<class D>
struct $TableViewDelegate : TableViewDelegate, InterfaceBase {
    $TableViewDelegate(const $TableViewDelegate& c) : TableViewDelegate(c) {}
    $TableViewDelegate() = delete;
    static bool _apply() {

        return true;
    }
};

template<class D>
struct $TableView : TableView, InterfaceBase {
    $TableView(const $TableView& c) : TableView(c) {}
    $TableView() = delete;

    using ret0 = TableView*;
    static inline auto address0 = base+0x37eb30;

    dupable static ret0 create(TableViewDelegate* p0,TableViewDataSource* p1,cocos2d::CCRect p2) {
        return reinterpret_cast<ret0(*)(TableView*, TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect)>(address0)(p0, p1, p2);
    }

    using ret1 = void;
    static inline auto address1 = base+0x37f970;

    dupable ret1 reloadData() {
        return reinterpret_cast<ret1(*)(TableView*)>(address1)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(TableView*, TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect))(&$TableView::create) != (ret0(D::*)(TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect))(&D::create)));
        }

        if constexpr((ret1(*)(TableView*))(&$TableView::reloadData) != (ret1(D::*)())(&D::reloadData)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::reloadData)));
        }

        return true;
    }
};

template<class D>
struct $Slider : Slider, InterfaceBase {
    $Slider(const $Slider& c) : Slider(c) {}
    $Slider() = delete;

    using ret0 = Slider*;
    static inline auto address0 = base+0x18dd80;

    dupable static ret0 create(cocos2d::CCNode* p0,cocos2d::SEL_MenuHandler p1,char const* p2,char const* p3,char const* p4,char const* p5,float p6) {
        return reinterpret_cast<ret0(*)(Slider*, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float)>(address0)(p0, p1, p2, p3, p4, p5, p6);
    }

    using ret1 = Slider*;
    static inline auto address1 = base+0x18dc40;

    dupable static ret1 create(cocos2d::CCNode* p0,cocos2d::SEL_MenuHandler p1,float p2) {
        return reinterpret_cast<ret1(*)(Slider*, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, float)>(address1)(p0, p1, p2);
    }

    using ret2 = void;
    static inline auto address2 = base+0x18e0c0;

    dupable ret2 getValue() {
        return reinterpret_cast<ret2(*)(Slider*)>(address2)(this);
    }

    using ret3 = void;
    static inline auto address3 = base+0x18e280;

    dupable ret3 setBarVisibility(bool p0) {
        return reinterpret_cast<ret3(*)(Slider*, bool)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x18e170;

    dupable ret4 setValue(float p0) {
        return reinterpret_cast<ret4(*)(Slider*, float)>(address4)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(Slider*, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float))(&$Slider::create) != (ret0(D::*)(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float))(&D::create)));
        }

        if constexpr((ret1(*)(Slider*, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, float))(&$Slider::create) != (ret1(D::*)(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, float))(&D::create)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, float))(&D::create)));
        }

        if constexpr((ret2(*)(Slider*))(&$Slider::getValue) != (ret2(D::*)())(&D::getValue)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::getValue)));
        }

        if constexpr((ret3(*)(Slider*, bool))(&$Slider::setBarVisibility) != (ret3(D::*)(bool))(&D::setBarVisibility)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(bool))(&D::setBarVisibility)));
        }

        if constexpr((ret4(*)(Slider*, float))(&$Slider::setValue) != (ret4(D::*)(float))(&D::setValue)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(float))(&D::setValue)));
        }

        return true;
    }
};

template<class D>
struct $SetupSpawnPopup : SetupSpawnPopup, InterfaceBase {
    $SetupSpawnPopup(const $SetupSpawnPopup& c) : SetupSpawnPopup(c) {}
    $SetupSpawnPopup() = delete;

    using ret0 = SetupSpawnPopup*;
    static inline auto address0 = base+0x139790;

    dupable static ret0 create(EffectGameObject* p0,cocos2d::CCArray* p1) {
        return reinterpret_cast<ret0(*)(SetupSpawnPopup*, EffectGameObject*, cocos2d::CCArray*)>(address0)(p0, p1);
    }

    using ret1 = void;
    static inline auto address1 = base+0x13b0e0;

    dupable ret1 createToggleButton(gd::string p0,cocos2d::SEL_MenuHandler p1,bool p2,cocos2d::CCMenu* p3,cocos2d::CCPoint p4,cocos2d::CCArray* p5) {
        return reinterpret_cast<ret1(*)(SetupSpawnPopup*, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*)>(address1)(this, p0, p1, p2, p3, p4, p5);
    }

    using ret2 = void;
    static inline auto address2 = base+0x13ad80;

    dupable ret2 onTargetIDArrow(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret2(*)(SetupSpawnPopup*, cocos2d::CCObject*)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x13b990;

    dupable ret3 textChanged(CCTextInputNode* p0) {
        return reinterpret_cast<ret3(*)(SetupSpawnPopup*, CCTextInputNode*)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x13b770;

    dupable ret4 updateTargetID() {
        return reinterpret_cast<ret4(*)(SetupSpawnPopup*)>(address4)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SetupSpawnPopup*, EffectGameObject*, cocos2d::CCArray*))(&$SetupSpawnPopup::create) != (ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)));
        }

        if constexpr((ret1(*)(SetupSpawnPopup*, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*))(&$SetupSpawnPopup::createToggleButton) != (ret1(D::*)(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*))(&D::createToggleButton)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*))(&D::createToggleButton)));
        }

        if constexpr((ret2(*)(SetupSpawnPopup*, cocos2d::CCObject*))(&$SetupSpawnPopup::onTargetIDArrow) != (ret2(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)));
        }

        if constexpr((ret3(*)(SetupSpawnPopup*, CCTextInputNode*))(&$SetupSpawnPopup::textChanged) != (ret3(D::*)(CCTextInputNode*))(&D::textChanged)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(CCTextInputNode*))(&D::textChanged)));
        }

        if constexpr((ret4(*)(SetupSpawnPopup*))(&$SetupSpawnPopup::updateTargetID) != (ret4(D::*)())(&D::updateTargetID)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)())(&D::updateTargetID)));
        }

        return true;
    }
};

template<class D>
struct $SetupPickupTriggerPopup : SetupPickupTriggerPopup, InterfaceBase {
    $SetupPickupTriggerPopup(const $SetupPickupTriggerPopup& c) : SetupPickupTriggerPopup(c) {}
    $SetupPickupTriggerPopup() = delete;

    using ret0 = SetupPickupTriggerPopup*;
    static inline auto address0 = base+0x35e70;

    dupable static ret0 create(EffectGameObject* p0,cocos2d::CCArray* p1) {
        return reinterpret_cast<ret0(*)(SetupPickupTriggerPopup*, EffectGameObject*, cocos2d::CCArray*)>(address0)(p0, p1);
    }

    using ret1 = void;
    static inline auto address1 = base+0x37100;

    dupable ret1 onItemIDArrow(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret1(*)(SetupPickupTriggerPopup*, cocos2d::CCObject*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x37260;

    dupable ret2 onNextItemID(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret2(*)(SetupPickupTriggerPopup*, cocos2d::CCObject*)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x37ca0;

    dupable ret3 textChanged(CCTextInputNode* p0) {
        return reinterpret_cast<ret3(*)(SetupPickupTriggerPopup*, CCTextInputNode*)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x37ab0;

    dupable ret4 updateItemID() {
        return reinterpret_cast<ret4(*)(SetupPickupTriggerPopup*)>(address4)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SetupPickupTriggerPopup*, EffectGameObject*, cocos2d::CCArray*))(&$SetupPickupTriggerPopup::create) != (ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)));
        }

        if constexpr((ret1(*)(SetupPickupTriggerPopup*, cocos2d::CCObject*))(&$SetupPickupTriggerPopup::onItemIDArrow) != (ret1(D::*)(cocos2d::CCObject*))(&D::onItemIDArrow)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCObject*))(&D::onItemIDArrow)));
        }

        if constexpr((ret2(*)(SetupPickupTriggerPopup*, cocos2d::CCObject*))(&$SetupPickupTriggerPopup::onNextItemID) != (ret2(D::*)(cocos2d::CCObject*))(&D::onNextItemID)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(cocos2d::CCObject*))(&D::onNextItemID)));
        }

        if constexpr((ret3(*)(SetupPickupTriggerPopup*, CCTextInputNode*))(&$SetupPickupTriggerPopup::textChanged) != (ret3(D::*)(CCTextInputNode*))(&D::textChanged)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(CCTextInputNode*))(&D::textChanged)));
        }

        if constexpr((ret4(*)(SetupPickupTriggerPopup*))(&$SetupPickupTriggerPopup::updateItemID) != (ret4(D::*)())(&D::updateItemID)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)())(&D::updateItemID)));
        }

        return true;
    }
};

template<class D>
struct $SetupOpacityPopup : SetupOpacityPopup, InterfaceBase {
    $SetupOpacityPopup(const $SetupOpacityPopup& c) : SetupOpacityPopup(c) {}
    $SetupOpacityPopup() = delete;

    using ret0 = SetupOpacityPopup*;
    static inline auto address0 = base+0x32b70;

    dupable static ret0 create(EffectGameObject* p0,cocos2d::CCArray* p1) {
        return reinterpret_cast<ret0(*)(SetupOpacityPopup*, EffectGameObject*, cocos2d::CCArray*)>(address0)(p0, p1);
    }

    using ret1 = void;
    static inline auto address1 = base+0x340a0;

    dupable ret1 onTargetIDArrow(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret1(*)(SetupOpacityPopup*, cocos2d::CCObject*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x34a60;

    dupable ret2 textChanged(CCTextInputNode* p0) {
        return reinterpret_cast<ret2(*)(SetupOpacityPopup*, CCTextInputNode*)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x34760;

    dupable ret3 updateTargetID() {
        return reinterpret_cast<ret3(*)(SetupOpacityPopup*)>(address3)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SetupOpacityPopup*, EffectGameObject*, cocos2d::CCArray*))(&$SetupOpacityPopup::create) != (ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)));
        }

        if constexpr((ret1(*)(SetupOpacityPopup*, cocos2d::CCObject*))(&$SetupOpacityPopup::onTargetIDArrow) != (ret1(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)));
        }

        if constexpr((ret2(*)(SetupOpacityPopup*, CCTextInputNode*))(&$SetupOpacityPopup::textChanged) != (ret2(D::*)(CCTextInputNode*))(&D::textChanged)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(CCTextInputNode*))(&D::textChanged)));
        }

        if constexpr((ret3(*)(SetupOpacityPopup*))(&$SetupOpacityPopup::updateTargetID) != (ret3(D::*)())(&D::updateTargetID)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::updateTargetID)));
        }

        return true;
    }
};

template<class D>
struct $SetupCountTriggerPopup : SetupCountTriggerPopup, InterfaceBase {
    $SetupCountTriggerPopup(const $SetupCountTriggerPopup& c) : SetupCountTriggerPopup(c) {}
    $SetupCountTriggerPopup() = delete;

    using ret0 = SetupCountTriggerPopup*;
    static inline auto address0 = base+0x15c6c0;

    dupable static ret0 create(EffectGameObject* p0,cocos2d::CCArray* p1) {
        return reinterpret_cast<ret0(*)(SetupCountTriggerPopup*, EffectGameObject*, cocos2d::CCArray*)>(address0)(p0, p1);
    }

    using ret1 = void;
    static inline auto address1 = base+0x15dd40;

    dupable ret1 onTargetIDArrow(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret1(*)(SetupCountTriggerPopup*, cocos2d::CCObject*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x15e9a0;

    dupable ret2 textChanged(CCTextInputNode* p0) {
        return reinterpret_cast<ret2(*)(SetupCountTriggerPopup*, CCTextInputNode*)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x15e8a0;

    dupable ret3 updateTargetID() {
        return reinterpret_cast<ret3(*)(SetupCountTriggerPopup*)>(address3)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SetupCountTriggerPopup*, EffectGameObject*, cocos2d::CCArray*))(&$SetupCountTriggerPopup::create) != (ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)));
        }

        if constexpr((ret1(*)(SetupCountTriggerPopup*, cocos2d::CCObject*))(&$SetupCountTriggerPopup::onTargetIDArrow) != (ret1(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)));
        }

        if constexpr((ret2(*)(SetupCountTriggerPopup*, CCTextInputNode*))(&$SetupCountTriggerPopup::textChanged) != (ret2(D::*)(CCTextInputNode*))(&D::textChanged)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(CCTextInputNode*))(&D::textChanged)));
        }

        if constexpr((ret3(*)(SetupCountTriggerPopup*))(&$SetupCountTriggerPopup::updateTargetID) != (ret3(D::*)())(&D::updateTargetID)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::updateTargetID)));
        }

        return true;
    }
};

template<class D>
struct $SetIDPopup : SetIDPopup, InterfaceBase {
    $SetIDPopup(const $SetIDPopup& c) : SetIDPopup(c) {}
    $SetIDPopup() = delete;
    static bool _apply() {

        return true;
    }
};

template<class D>
struct $SetIDLayer : SetIDLayer, InterfaceBase {
    $SetIDLayer(const $SetIDLayer& c) : SetIDLayer(c) {}
    $SetIDLayer() = delete;

    using ret0 = SetIDLayer*;
    static inline auto address0 = base+0x168f20;

    dupable static ret0 create(GameObject* p0) {
        return reinterpret_cast<ret0(*)(SetIDLayer*, GameObject*)>(address0)(p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SetIDLayer*, GameObject*))(&$SetIDLayer::create) != (ret0(D::*)(GameObject*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(GameObject*))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $SetItemIDLayer : SetItemIDLayer, InterfaceBase {
    $SetItemIDLayer(const $SetItemIDLayer& c) : SetItemIDLayer(c) {}
    $SetItemIDLayer() = delete;

    using ret0 = SetItemIDLayer*;
    static inline auto address0 = base+0x5a830;

    dupable static ret0 create(EffectGameObject* p0,cocos2d::CCArray* p1) {
        return reinterpret_cast<ret0(*)(SetItemIDLayer*, EffectGameObject*, cocos2d::CCArray*)>(address0)(p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SetItemIDLayer*, EffectGameObject*, cocos2d::CCArray*))(&$SetItemIDLayer::create) != (ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $PlayerObject : PlayerObject, InterfaceBase {
    $PlayerObject(const $PlayerObject& c) : PlayerObject(c) {}
    $PlayerObject() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x217220;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x218bf0;

    dupable ret1 update(float p0) {
        return reinterpret_cast<ret1(*)(PlayerObject*, float)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x22e7f0;

    dupable ret2 setScaleX(float p0) {
        return reinterpret_cast<ret2(*)(PlayerObject*, float)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x22e830;

    dupable ret3 setScaleY(float p0) {
        return reinterpret_cast<ret3(*)(PlayerObject*, float)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x22e870;

    dupable ret4 setScale(float p0) {
        return reinterpret_cast<ret4(*)(PlayerObject*, float)>(address4)(this, p0);
    }

    using ret5 = void;
    static inline auto address5 = base+0x22c8b0;

    dupable ret5 setPosition(cocos2d::CCPoint const& p0) {
        return reinterpret_cast<ret5(*)(PlayerObject*, cocos2d::CCPoint const&)>(address5)(this, p0);
    }

    using ret6 = void;
    static inline auto address6 = base+0x22e8b0;

    dupable ret6 setVisible(bool p0) {
        return reinterpret_cast<ret6(*)(PlayerObject*, bool)>(address6)(this, p0);
    }

    using ret7 = void;
    static inline auto address7 = base+0x22e6e0;

    dupable ret7 setRotation(float p0) {
        return reinterpret_cast<ret7(*)(PlayerObject*, float)>(address7)(this, p0);
    }

    using ret8 = void;
    static inline auto address8 = base+0x22d400;

    dupable ret8 setOpacity(unsigned char p0) {
        return reinterpret_cast<ret8(*)(PlayerObject*, unsigned char)>(address8)(this, p0);
    }

    using ret9 = void;
    static inline auto address9 = base+0x22cdf0;

    dupable ret9 setColor(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret9(*)(PlayerObject*, cocos2d::_ccColor3B const&)>(address9)(this, p0);
    }

    using ret10 = void;
    static inline auto address10 = base+0x22e720;

    dupable ret10 setFlipX(bool p0) {
        return reinterpret_cast<ret10(*)(PlayerObject*, bool)>(address10)(this, p0);
    }

    using ret11 = void;
    static inline auto address11 = base+0x22e7b0;

    dupable ret11 setFlipY(bool p0) {
        return reinterpret_cast<ret11(*)(PlayerObject*, bool)>(address11)(this, p0);
    }

    using ret12 = void;
    static inline auto address12 = base+0x223170;

    dupable ret12 resetObject() {
        return reinterpret_cast<ret12(*)(PlayerObject*)>(address12)(this);
    }

    using ret13 = void;
    static inline auto address13 = base+0x22d5f0;

    dupable ret13 getRealPosition() {
        return reinterpret_cast<ret13(*)(PlayerObject*)>(address13)(this);
    }

    using ret14 = void;
    static inline auto address14 = base+0x22dee0;

    dupable ret14 getOrientedBox() {
        return reinterpret_cast<ret14(*)(PlayerObject*)>(address14)(this);
    }

    using ret15 = void;
    static inline auto address15 = base+0x22e9d0;

    dupable ret15 animationFinished(char const* p0) {
        return reinterpret_cast<ret15(*)(PlayerObject*, char const*)>(address15)(this, p0);
    }

    using ret16 = void;
    static inline auto address16 = base+0x21aef0;

    dupable ret16 activateStreak() {
        return reinterpret_cast<ret16(*)(PlayerObject*)>(address16)(this);
    }

    using ret17 = void;
    static inline auto address17 = base+0x2189b0;

    dupable ret17 addAllParticles() {
        return reinterpret_cast<ret17(*)(PlayerObject*)>(address17)(this);
    }

    using ret18 = void;
    static inline auto address18 = base+0x22b800;

    dupable ret18 addToTouchedRings(GameObject* p0) {
        return reinterpret_cast<ret18(*)(PlayerObject*, GameObject*)>(address18)(this, p0);
    }

    using ret19 = void;
    static inline auto address19 = base+0x21d6b0;

    dupable ret19 boostPlayer(float p0) {
        return reinterpret_cast<ret19(*)(PlayerObject*, float)>(address19)(this, p0);
    }

    using ret20 = void;
    static inline auto address20 = base+0x22d890;

    dupable ret20 bumpPlayer(float p0,int p1) {
        return reinterpret_cast<ret20(*)(PlayerObject*, float, int)>(address20)(this, p0, p1);
    }

    using ret21 = void;
    static inline auto address21 = base+0x22b7e0;

    dupable ret21 buttonDown(PlayerButton p0) {
        return reinterpret_cast<ret21(*)(PlayerObject*, PlayerButton)>(address21)(this, p0);
    }

    using ret22 = void;
    static inline auto address22 = base+0x2217f0;

    dupable ret22 checkSnapJumpToObject(GameObject* p0) {
        return reinterpret_cast<ret22(*)(PlayerObject*, GameObject*)>(address22)(this, p0);
    }

    using ret23 = void;
    static inline auto address23 = base+0x21d880;

    dupable ret23 collidedWithObject(float p0,GameObject* p1) {
        return reinterpret_cast<ret23(*)(PlayerObject*, float, GameObject*)>(address23)(this, p0, p1);
    }

    using ret24 = void;
    static inline auto address24 = base+0x21f0b0;

    dupable ret24 collidedWithObject(float p0,GameObject* p1,cocos2d::CCRect p2) {
        return reinterpret_cast<ret24(*)(PlayerObject*, float, GameObject*, cocos2d::CCRect)>(address24)(this, p0, p1, p2);
    }

    using ret25 = void;
    static inline auto address25 = base+0x21d8d0;

    dupable ret25 collidedWithSlope(float p0,GameObject* p1,bool p2) {
        return reinterpret_cast<ret25(*)(PlayerObject*, float, GameObject*, bool)>(address25)(this, p0, p1, p2);
    }

    using ret26 = void;
    static inline auto address26 = base+0x21c860;

    dupable ret26 convertToClosestRotation(float p0) {
        return reinterpret_cast<ret26(*)(PlayerObject*, float)>(address26)(this, p0);
    }

    using ret27 = void;
    static inline auto address27 = base+0x22dc70;

    dupable ret27 copyAttributes(PlayerObject* p0) {
        return reinterpret_cast<ret27(*)(PlayerObject*, PlayerObject*)>(address27)(this, p0);
    }

    using ret28 = PlayerObject*;
    static inline auto address28 = base+0x217260;

    dupable static ret28 create(int p0,int p1,cocos2d::CCLayer* p2) {
        return reinterpret_cast<ret28(*)(PlayerObject*, int, int, cocos2d::CCLayer*)>(address28)(p0, p1, p2);
    }

    using ret29 = void;
    static inline auto address29 = base+0x21a540;

    dupable ret29 deactivateParticle() {
        return reinterpret_cast<ret29(*)(PlayerObject*)>(address29)(this);
    }

    using ret30 = void;
    static inline auto address30 = base+0x218b30;

    dupable ret30 deactivateStreak(bool p0) {
        return reinterpret_cast<ret30(*)(PlayerObject*, bool)>(address30)(this, p0);
    }

    using ret31 = void;
    static inline auto address31 = base+0x225890;

    dupable ret31 fadeOutStreak2(float p0) {
        return reinterpret_cast<ret31(*)(PlayerObject*, float)>(address31)(this, p0);
    }

    using ret32 = void;
    static inline auto address32 = base+0x221c80;

    dupable ret32 flashPlayer(float p0,float p1,cocos2d::_ccColor3B p2,cocos2d::_ccColor3B p3) {
        return reinterpret_cast<ret32(*)(PlayerObject*, float, float, cocos2d::_ccColor3B, cocos2d::_ccColor3B)>(address32)(this, p0, p1, p2, p3);
    }

    using ret33 = void;
    static inline auto address33 = base+0x21c090;

    dupable ret33 flipGravity(bool p0,bool p1) {
        return reinterpret_cast<ret33(*)(PlayerObject*, bool, bool)>(address33)(this, p0, p1);
    }

    using ret34 = void;
    static inline auto address34 = base+0x21a4c0;

    dupable ret34 flipMod() {
        return reinterpret_cast<ret34(*)(PlayerObject*)>(address34)(this);
    }

    using ret35 = void;
    static inline auto address35 = base+0x22b950;

    dupable ret35 getActiveMode() {
        return reinterpret_cast<ret35(*)(PlayerObject*)>(address35)(this);
    }

    using ret36 = void;
    static inline auto address36 = base+0x21bff0;

    dupable ret36 getModifiedSlopeYVel() {
        return reinterpret_cast<ret36(*)(PlayerObject*)>(address36)(this);
    }

    using ret37 = void;
    static inline auto address37 = base+0x21a830;

    dupable ret37 getOldPosition(float p0) {
        return reinterpret_cast<ret37(*)(PlayerObject*, float)>(address37)(this, p0);
    }

    using ret38 = void;
    static inline auto address38 = base+0x22cee0;

    dupable ret38 getSecondColor() {
        return reinterpret_cast<ret38(*)(PlayerObject*)>(address38)(this);
    }

    using ret39 = void;
    static inline auto address39 = base+0x22e930;

    dupable ret39 gravityDown() {
        return reinterpret_cast<ret39(*)(PlayerObject*)>(address39)(this);
    }

    using ret40 = void;
    static inline auto address40 = base+0x22e900;

    dupable ret40 gravityUp() {
        return reinterpret_cast<ret40(*)(PlayerObject*)>(address40)(this);
    }

    using ret41 = void;
    static inline auto address41 = base+0x22b860;

    dupable ret41 hardFlipGravity() {
        return reinterpret_cast<ret41(*)(PlayerObject*)>(address41)(this);
    }

    using ret42 = void;
    static inline auto address42 = base+0x220a30;

    dupable ret42 hitGround(bool p0) {
        return reinterpret_cast<ret42(*)(PlayerObject*, bool)>(address42)(this, p0);
    }

    using ret43 = void;
    static inline auto address43 = base+0x21c050;

    dupable ret43 incrementJumps() {
        return reinterpret_cast<ret43(*)(PlayerObject*)>(address43)(this);
    }

    using ret44 = bool;
    static inline auto address44 = base+0x2172e0;

    dupable ret44 init(int p0,int p1,cocos2d::CCLayer* p2) {
        return reinterpret_cast<ret44(*)(PlayerObject*, int, int, cocos2d::CCLayer*)>(address44)(this, p0, p1, p2);
    }

    using ret45 = void;
    static inline auto address45 = base+0x21d650;

    dupable ret45 isBoostValid(float p0) {
        return reinterpret_cast<ret45(*)(PlayerObject*, float)>(address45)(this, p0);
    }

    using ret46 = void;
    static inline auto address46 = base+0x21a4e0;

    dupable ret46 isFlying() {
        return reinterpret_cast<ret46(*)(PlayerObject*)>(address46)(this);
    }

    using ret47 = void;
    static inline auto address47 = base+0x2209f0;

    dupable ret47 isSafeFlip(float p0) {
        return reinterpret_cast<ret47(*)(PlayerObject*, float)>(address47)(this, p0);
    }

    using ret48 = void;
    static inline auto address48 = base+0x2209b0;

    dupable ret48 isSafeMode(float p0) {
        return reinterpret_cast<ret48(*)(PlayerObject*, float)>(address48)(this, p0);
    }

    using ret49 = void;
    static inline auto address49 = base+0x221be0;

    dupable ret49 isSafeSpiderFlip(float p0) {
        return reinterpret_cast<ret49(*)(PlayerObject*, float)>(address49)(this, p0);
    }

    using ret50 = void;
    static inline auto address50 = base+0x21b060;

    dupable ret50 levelFlipFinished() {
        return reinterpret_cast<ret50(*)(PlayerObject*)>(address50)(this);
    }

    using ret51 = void;
    static inline auto address51 = base+0x21a510;

    dupable ret51 levelFlipping() {
        return reinterpret_cast<ret51(*)(PlayerObject*)>(address51)(this);
    }

    using ret52 = void;
    static inline auto address52 = base+0x21b020;

    dupable ret52 levelWillFlip() {
        return reinterpret_cast<ret52(*)(PlayerObject*)>(address52)(this);
    }

    using ret53 = void;
    static inline auto address53 = base+0x22e420;

    dupable ret53 loadFromCheckpoint(PlayerCheckpoint* p0) {
        return reinterpret_cast<ret53(*)(PlayerObject*, PlayerCheckpoint*)>(address53)(this, p0);
    }

    using ret54 = void;
    static inline auto address54 = base+0x22d680;

    dupable ret54 lockPlayer() {
        return reinterpret_cast<ret54(*)(PlayerObject*)>(address54)(this);
    }

    using ret55 = void;
    static inline auto address55 = base+0x221220;

    dupable ret55 logValues() {
        return reinterpret_cast<ret55(*)(PlayerObject*)>(address55)(this);
    }

    using ret56 = void;
    static inline auto address56 = base+0x22bfd0;

    dupable ret56 modeDidChange() {
        return reinterpret_cast<ret56(*)(PlayerObject*)>(address56)(this);
    }

    using ret57 = void;
    static inline auto address57 = base+0x21af90;

    dupable ret57 placeStreakPoint() {
        return reinterpret_cast<ret57(*)(PlayerObject*)>(address57)(this);
    }

    using ret58 = void;
    static inline auto address58 = base+0x21c780;

    dupable ret58 playBurstEffect() {
        return reinterpret_cast<ret58(*)(PlayerObject*)>(address58)(this);
    }

    using ret59 = void;
    static inline auto address59 = base+0x225930;

    dupable ret59 playDeathEffect() {
        return reinterpret_cast<ret59(*)(PlayerObject*)>(address59)(this);
    }

    using ret60 = void;
    static inline auto address60 = base+0x222ec0;

    dupable ret60 playDynamicSpiderRun() {
        return reinterpret_cast<ret60(*)(PlayerObject*)>(address60)(this);
    }

    using ret61 = void;
    static inline auto address61 = base+0x2256d0;

    dupable ret61 playerDestroyed(bool p0) {
        return reinterpret_cast<ret61(*)(PlayerObject*, bool)>(address61)(this, p0);
    }

    using ret62 = void;
    static inline auto address62 = base+0x21c730;

    dupable ret62 playerIsFalling() {
        return reinterpret_cast<ret62(*)(PlayerObject*)>(address62)(this);
    }

    using ret63 = void;
    static inline auto address63 = base+0x22b840;

    dupable ret63 playerTeleported() {
        return reinterpret_cast<ret63(*)(PlayerObject*)>(address63)(this);
    }

    using ret64 = void;
    static inline auto address64 = base+0x22d7e0;

    dupable ret64 playingEndEffect() {
        return reinterpret_cast<ret64(*)(PlayerObject*)>(address64)(this);
    }

    using ret65 = void;
    static inline auto address65 = base+0x21cd10;

    dupable ret65 postCollision(float p0) {
        return reinterpret_cast<ret65(*)(PlayerObject*, float)>(address65)(this, p0);
    }

    using ret66 = void;
    static inline auto address66 = base+0x21ccc0;

    dupable ret66 preCollision() {
        return reinterpret_cast<ret66(*)(PlayerObject*)>(address66)(this);
    }

    using ret67 = void;
    static inline auto address67 = base+0x21ec80;

    dupable ret67 preSlopeCollision(float p0,GameObject* p1) {
        return reinterpret_cast<ret67(*)(PlayerObject*, float, GameObject*)>(address67)(this, p0, p1);
    }

    using ret68 = void;
    static inline auto address68 = base+0x22d8e0;

    dupable ret68 propellPlayer(float p0) {
        return reinterpret_cast<ret68(*)(PlayerObject*, float)>(address68)(this, p0);
    }

    using ret69 = void;
    static inline auto address69 = base+0x22aa00;

    dupable ret69 pushButton(PlayerButton p0) {
        return reinterpret_cast<ret69(*)(PlayerObject*, PlayerButton)>(address69)(this, p0);
    }

    using ret70 = void;
    static inline auto address70 = base+0x22dbd0;

    dupable ret70 pushDown() {
        return reinterpret_cast<ret70(*)(PlayerObject*)>(address70)(this);
    }

    using ret71 = void;
    static inline auto address71 = base+0x22dbb0;

    dupable ret71 pushPlayer(float p0) {
        return reinterpret_cast<ret71(*)(PlayerObject*, float)>(address71)(this, p0);
    }

    using ret72 = void;
    static inline auto address72 = base+0x22b6f0;

    dupable ret72 releaseButton(PlayerButton p0) {
        return reinterpret_cast<ret72(*)(PlayerObject*, PlayerButton)>(address72)(this, p0);
    }

    using ret73 = void;
    static inline auto address73 = base+0x218ac0;

    dupable ret73 removeAllParticles() {
        return reinterpret_cast<ret73(*)(PlayerObject*)>(address73)(this);
    }

    using ret74 = void;
    static inline auto address74 = base+0x2237b0;

    dupable ret74 removePendingCheckpoint() {
        return reinterpret_cast<ret74(*)(PlayerObject*)>(address74)(this);
    }

    using ret75 = void;
    static inline auto address75 = base+0x21adb0;

    dupable ret75 resetAllParticles() {
        return reinterpret_cast<ret75(*)(PlayerObject*)>(address75)(this);
    }

    using ret76 = void;
    static inline auto address76 = base+0x21cc20;

    dupable ret76 resetCollisionLog() {
        return reinterpret_cast<ret76(*)(PlayerObject*)>(address76)(this);
    }

    using ret77 = void;
    static inline auto address77 = base+0x22be00;

    dupable ret77 resetPlayerIcon() {
        return reinterpret_cast<ret77(*)(PlayerObject*)>(address77)(this);
    }

    using ret78 = void;
    static inline auto address78 = base+0x223760;

    dupable ret78 resetStateVariables() {
        return reinterpret_cast<ret78(*)(PlayerObject*)>(address78)(this);
    }

    using ret79 = void;
    static inline auto address79 = base+0x21ae10;

    dupable ret79 resetStreak() {
        return reinterpret_cast<ret79(*)(PlayerObject*)>(address79)(this);
    }

    using ret80 = void;
    static inline auto address80 = base+0x22abf0;

    dupable ret80 ringJump(GameObject* p0) {
        return reinterpret_cast<ret80(*)(PlayerObject*, GameObject*)>(address80)(this, p0);
    }

    using ret81 = void;
    static inline auto address81 = base+0x21ca10;

    dupable ret81 runBallRotation(float p0) {
        return reinterpret_cast<ret81(*)(PlayerObject*, float)>(address81)(this, p0);
    }

    using ret82 = void;
    static inline auto address82 = base+0x21cb10;

    dupable ret82 runBallRotation2() {
        return reinterpret_cast<ret82(*)(PlayerObject*)>(address82)(this);
    }

    using ret83 = void;
    static inline auto address83 = base+0x21c960;

    dupable ret83 runNormalRotation() {
        return reinterpret_cast<ret83(*)(PlayerObject*)>(address83)(this);
    }

    using ret84 = void;
    static inline auto address84 = base+0x21c570;

    dupable ret84 runRotateAction(bool p0) {
        return reinterpret_cast<ret84(*)(PlayerObject*, bool)>(address84)(this, p0);
    }

    using ret85 = void;
    static inline auto address85 = base+0x22e2f0;

    dupable ret85 saveToCheckpoint(PlayerCheckpoint* p0) {
        return reinterpret_cast<ret85(*)(PlayerObject*, PlayerCheckpoint*)>(address85)(this, p0);
    }

    using ret86 = void;
    static inline auto address86 = base+0x219610;

    dupable ret86 setSecondColor(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret86(*)(PlayerObject*, cocos2d::_ccColor3B const&)>(address86)(this, p0);
    }

    using ret87 = void;
    static inline auto address87 = base+0x218720;

    dupable ret87 setupStreak() {
        return reinterpret_cast<ret87(*)(PlayerObject*)>(address87)(this);
    }

    using ret88 = void;
    static inline auto address88 = base+0x225480;

    dupable ret88 spawnCircle() {
        return reinterpret_cast<ret88(*)(PlayerObject*)>(address88)(this);
    }

    using ret89 = void;
    static inline auto address89 = base+0x2252a0;

    dupable ret89 spawnCircle2() {
        return reinterpret_cast<ret89(*)(PlayerObject*)>(address89)(this);
    }

    using ret90 = void;
    static inline auto address90 = base+0x2255c0;

    dupable ret90 spawnDualCircle() {
        return reinterpret_cast<ret90(*)(PlayerObject*)>(address90)(this);
    }

    using ret91 = void;
    static inline auto address91 = base+0x22dde0;

    dupable ret91 spawnFromPlayer(PlayerObject* p0) {
        return reinterpret_cast<ret91(*)(PlayerObject*, PlayerObject*)>(address91)(this, p0);
    }

    using ret92 = void;
    static inline auto address92 = base+0x225350;

    dupable ret92 spawnPortalCircle(cocos2d::_ccColor3B p0,float p1) {
        return reinterpret_cast<ret92(*)(PlayerObject*, cocos2d::_ccColor3B, float)>(address92)(this, p0, p1);
    }

    using ret93 = void;
    static inline auto address93 = base+0x2251b0;

    dupable ret93 spawnScaleCircle() {
        return reinterpret_cast<ret93(*)(PlayerObject*)>(address93)(this);
    }

    using ret94 = void;
    static inline auto address94 = base+0x22dbf0;

    dupable ret94 specialGroundHit() {
        return reinterpret_cast<ret94(*)(PlayerObject*)>(address94)(this);
    }

    using ret95 = void;
    static inline auto address95 = base+0x22e970;

    dupable ret95 speedDown() {
        return reinterpret_cast<ret95(*)(PlayerObject*)>(address95)(this);
    }

    using ret96 = void;
    static inline auto address96 = base+0x22e950;

    dupable ret96 speedUp() {
        return reinterpret_cast<ret96(*)(PlayerObject*)>(address96)(this);
    }

    using ret97 = void;
    static inline auto address97 = base+0x21b160;

    dupable ret97 spiderTestJump(bool p0) {
        return reinterpret_cast<ret97(*)(PlayerObject*, bool)>(address97)(this, p0);
    }

    using ret98 = void;
    static inline auto address98 = base+0x221d70;

    dupable ret98 startDashing(GameObject* p0) {
        return reinterpret_cast<ret98(*)(PlayerObject*, GameObject*)>(address98)(this, p0);
    }

    using ret99 = void;
    static inline auto address99 = base+0x22c680;

    dupable ret99 stopBurstEffect() {
        return reinterpret_cast<ret99(*)(PlayerObject*)>(address99)(this);
    }

    using ret100 = void;
    static inline auto address100 = base+0x222990;

    dupable ret100 stopDashing() {
        return reinterpret_cast<ret100(*)(PlayerObject*)>(address100)(this);
    }

    using ret101 = void;
    static inline auto address101 = base+0x21c830;

    dupable ret101 stopRotation(bool p0) {
        return reinterpret_cast<ret101(*)(PlayerObject*, bool)>(address101)(this, p0);
    }

    using ret102 = void;
    static inline auto address102 = base+0x21cc60;

    dupable ret102 storeCollision(bool p0,int p1) {
        return reinterpret_cast<ret102(*)(PlayerObject*, bool, int)>(address102)(this, p0, p1);
    }

    using ret103 = void;
    static inline auto address103 = base+0x22b9a0;

    dupable ret103 switchedToMode(GameObjectType p0) {
        return reinterpret_cast<ret103(*)(PlayerObject*, GameObjectType)>(address103)(this, p0);
    }

    using ret104 = void;
    static inline auto address104 = base+0x21eb70;

    dupable ret104 testForMoving(float p0,GameObject* p1) {
        return reinterpret_cast<ret104(*)(PlayerObject*, float, GameObject*)>(address104)(this, p0, p1);
    }

    using ret105 = void;
    static inline auto address105 = base+0x224070;

    dupable ret105 toggleBirdMode(bool p0) {
        return reinterpret_cast<ret105(*)(PlayerObject*, bool)>(address105)(this, p0);
    }

    using ret106 = void;
    static inline auto address106 = base+0x2243f0;

    dupable ret106 toggleDartMode(bool p0) {
        return reinterpret_cast<ret106(*)(PlayerObject*, bool)>(address106)(this, p0);
    }

    using ret107 = void;
    static inline auto address107 = base+0x223820;

    dupable ret107 toggleFlyMode(bool p0) {
        return reinterpret_cast<ret107(*)(PlayerObject*, bool)>(address107)(this, p0);
    }

    using ret108 = void;
    static inline auto address108 = base+0x225000;

    dupable ret108 toggleGhostEffect(GhostType p0) {
        return reinterpret_cast<ret108(*)(PlayerObject*, GhostType)>(address108)(this, p0);
    }

    using ret109 = void;
    static inline auto address109 = base+0x224bd0;

    dupable ret109 togglePlayerScale(bool p0) {
        return reinterpret_cast<ret109(*)(PlayerObject*, bool)>(address109)(this, p0);
    }

    using ret110 = void;
    static inline auto address110 = base+0x223c70;

    dupable ret110 toggleRobotMode(bool p0) {
        return reinterpret_cast<ret110(*)(PlayerObject*, bool)>(address110)(this, p0);
    }

    using ret111 = void;
    static inline auto address111 = base+0x223b20;

    dupable ret111 toggleRollMode(bool p0) {
        return reinterpret_cast<ret111(*)(PlayerObject*, bool)>(address111)(this, p0);
    }

    using ret112 = void;
    static inline auto address112 = base+0x224830;

    dupable ret112 toggleSpiderMode(bool p0) {
        return reinterpret_cast<ret112(*)(PlayerObject*, bool)>(address112)(this, p0);
    }

    using ret113 = void;
    static inline auto address113 = base+0x21abf0;

    dupable ret113 toggleVisibility(bool p0) {
        return reinterpret_cast<ret113(*)(PlayerObject*, bool)>(address113)(this, p0);
    }

    using ret114 = void;
    static inline auto address114 = base+0x22e660;

    dupable ret114 touchedObject(GameObject* p0) {
        return reinterpret_cast<ret114(*)(PlayerObject*, GameObject*)>(address114)(this, p0);
    }

    using ret115 = void;
    static inline auto address115 = base+0x21a950;

    dupable ret115 tryPlaceCheckpoint() {
        return reinterpret_cast<ret115(*)(PlayerObject*)>(address115)(this);
    }

    using ret116 = void;
    static inline auto address116 = base+0x218980;

    dupable ret116 updateCheckpointMode(bool p0) {
        return reinterpret_cast<ret116(*)(PlayerObject*, bool)>(address116)(this, p0);
    }

    using ret117 = void;
    static inline auto address117 = base+0x21a890;

    dupable ret117 updateCheckpointTest() {
        return reinterpret_cast<ret117(*)(PlayerObject*)>(address117)(this);
    }

    using ret118 = void;
    static inline auto address118 = base+0x220f10;

    dupable ret118 updateCollide(bool p0,int p1) {
        return reinterpret_cast<ret118(*)(PlayerObject*, bool, int)>(address118)(this, p0, p1);
    }

    using ret119 = void;
    static inline auto address119 = base+0x221790;

    dupable ret119 updateCollideBottom(float p0,int p1) {
        return reinterpret_cast<ret119(*)(PlayerObject*, float, int)>(address119)(this, p0, p1);
    }

    using ret120 = void;
    static inline auto address120 = base+0x221c20;

    dupable ret120 updateCollideTop(float p0,int p1) {
        return reinterpret_cast<ret120(*)(PlayerObject*, float, int)>(address120)(this, p0, p1);
    }

    using ret121 = void;
    static inline auto address121 = base+0x21a570;

    dupable ret121 updateDashAnimation() {
        return reinterpret_cast<ret121(*)(PlayerObject*)>(address121)(this);
    }

    using ret122 = void;
    static inline auto address122 = base+0x222520;

    dupable ret122 updateDashArt() {
        return reinterpret_cast<ret122(*)(PlayerObject*)>(address122)(this);
    }

    using ret123 = void;
    static inline auto address123 = base+0x22cf10;

    dupable ret123 updateGlowColor() {
        return reinterpret_cast<ret123(*)(PlayerObject*)>(address123)(this);
    }

    using ret124 = void;
    static inline auto address124 = base+0x219680;

    dupable ret124 updateJump(float p0) {
        return reinterpret_cast<ret124(*)(PlayerObject*, float)>(address124)(this, p0);
    }

    using ret125 = void;
    static inline auto address125 = base+0x21a740;

    dupable ret125 updateJumpVariables() {
        return reinterpret_cast<ret125(*)(PlayerObject*)>(address125)(this);
    }

    using ret126 = void;
    static inline auto address126 = base+0x22bfe0;

    dupable ret126 updatePlayerBirdFrame(int p0) {
        return reinterpret_cast<ret126(*)(PlayerObject*, int)>(address126)(this, p0);
    }

    using ret127 = void;
    static inline auto address127 = base+0x22c260;

    dupable ret127 updatePlayerDartFrame(int p0) {
        return reinterpret_cast<ret127(*)(PlayerObject*, int)>(address127)(this, p0);
    }

    using ret128 = void;
    static inline auto address128 = base+0x22c470;

    dupable ret128 updatePlayerFrame(int p0) {
        return reinterpret_cast<ret128(*)(PlayerObject*, int)>(address128)(this, p0);
    }

    using ret129 = void;
    static inline auto address129 = base+0x22bc50;

    dupable ret129 updatePlayerGlow() {
        return reinterpret_cast<ret129(*)(PlayerObject*)>(address129)(this);
    }

    using ret130 = void;
    static inline auto address130 = base+0x22d620;

    dupable ret130 updatePlayerRobotFrame(int p0) {
        return reinterpret_cast<ret130(*)(PlayerObject*, int)>(address130)(this, p0);
    }

    using ret131 = void;
    static inline auto address131 = base+0x22c6a0;

    dupable ret131 updatePlayerRollFrame(int p0) {
        return reinterpret_cast<ret131(*)(PlayerObject*, int)>(address131)(this, p0);
    }

    using ret132 = void;
    static inline auto address132 = base+0x22b8b0;

    dupable ret132 updatePlayerScale() {
        return reinterpret_cast<ret132(*)(PlayerObject*)>(address132)(this);
    }

    using ret133 = void;
    static inline auto address133 = base+0x22ba40;

    dupable ret133 updatePlayerShipFrame(int p0) {
        return reinterpret_cast<ret133(*)(PlayerObject*, int)>(address133)(this, p0);
    }

    using ret134 = void;
    static inline auto address134 = base+0x22d650;

    dupable ret134 updatePlayerSpiderFrame(int p0) {
        return reinterpret_cast<ret134(*)(PlayerObject*, int)>(address134)(this, p0);
    }

    using ret135 = void;
    static inline auto address135 = base+0x218440;

    dupable ret135 updatePlayerSpriteExtra(gd::string p0) {
        return reinterpret_cast<ret135(*)(PlayerObject*, gd::string)>(address135)(this, p0);
    }

    using ret136 = void;
    static inline auto address136 = base+0x22df40;

    dupable ret136 updateRobotAnimationSpeed() {
        return reinterpret_cast<ret136(*)(PlayerObject*)>(address136)(this);
    }

    using ret137 = void;
    static inline auto address137 = base+0x2214b0;

    dupable ret137 updateRotation(float p0) {
        return reinterpret_cast<ret137(*)(PlayerObject*, float)>(address137)(this, p0);
    }

    using ret138 = void;
    static inline auto address138 = base+0x221230;

    dupable ret138 updateRotation(float p0,float p1) {
        return reinterpret_cast<ret138(*)(PlayerObject*, float, float)>(address138)(this, p0, p1);
    }

    using ret139 = void;
    static inline auto address139 = base+0x221310;

    dupable ret139 updateShipRotation(float p0) {
        return reinterpret_cast<ret139(*)(PlayerObject*, float)>(address139)(this, p0);
    }

    using ret140 = void;
    static inline auto address140 = base+0x218510;

    dupable ret140 updateShipSpriteExtra(gd::string p0) {
        return reinterpret_cast<ret140(*)(PlayerObject*, gd::string)>(address140)(this, p0);
    }

    using ret141 = void;
    static inline auto address141 = base+0x221030;

    dupable ret141 updateSlopeRotation(float p0) {
        return reinterpret_cast<ret141(*)(PlayerObject*, float)>(address141)(this, p0);
    }

    using ret142 = void;
    static inline auto address142 = base+0x22e920;

    dupable ret142 updateSlopeYVelocity(float p0) {
        return reinterpret_cast<ret142(*)(PlayerObject*, float)>(address142)(this, p0);
    }

    using ret143 = void;
    static inline auto address143 = base+0x21a790;

    dupable ret143 updateSpecial(float p0) {
        return reinterpret_cast<ret143(*)(PlayerObject*, float)>(address143)(this, p0);
    }

    using ret144 = void;
    static inline auto address144 = base+0x21a770;

    dupable ret144 updateStateVariables() {
        return reinterpret_cast<ret144(*)(PlayerObject*)>(address144)(this);
    }

    using ret145 = void;
    static inline auto address145 = base+0x2185e0;

    dupable ret145 updateTimeMod(float p0) {
        return reinterpret_cast<ret145(*)(PlayerObject*, float)>(address145)(this, p0);
    }

    using ret146 = void;
    static inline auto address146 = base+0x22df00;

    dupable ret146 usingWallLimitedMode() {
        return reinterpret_cast<ret146(*)(PlayerObject*)>(address146)(this);
    }

    using ret147 = void;
    static inline auto address147 = base+0x22e9b0;

    dupable ret147 yStartDown() {
        return reinterpret_cast<ret147(*)(PlayerObject*)>(address147)(this);
    }

    using ret148 = void;
    static inline auto address148 = base+0x22e990;

    dupable ret148 yStartUp() {
        return reinterpret_cast<ret148(*)(PlayerObject*)>(address148)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(PlayerObject*))(&$PlayerObject::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(PlayerObject*, float))(&$PlayerObject::update) != (ret1(D::*)(float))(&D::update)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)(float))(&D::update)));
        }

        if constexpr((ret2(*)(PlayerObject*, float))(&$PlayerObject::setScaleX) != (ret2(D::*)(float))(&D::setScaleX)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)(float))(&D::setScaleX)));
        }

        if constexpr((ret3(*)(PlayerObject*, float))(&$PlayerObject::setScaleY) != (ret3(D::*)(float))(&D::setScaleY)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)(float))(&D::setScaleY)));
        }

        if constexpr((ret4(*)(PlayerObject*, float))(&$PlayerObject::setScale) != (ret4(D::*)(float))(&D::setScale)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)(float))(&D::setScale)));
        }

        if constexpr((ret5(*)(PlayerObject*, cocos2d::CCPoint const&))(&$PlayerObject::setPosition) != (ret5(D::*)(cocos2d::CCPoint const&))(&D::setPosition)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)(cocos2d::CCPoint const&))(&D::setPosition)));
        }

        if constexpr((ret6(*)(PlayerObject*, bool))(&$PlayerObject::setVisible) != (ret6(D::*)(bool))(&D::setVisible)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)(bool))(&D::setVisible)));
        }

        if constexpr((ret7(*)(PlayerObject*, float))(&$PlayerObject::setRotation) != (ret7(D::*)(float))(&D::setRotation)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)(float))(&D::setRotation)));
        }

        if constexpr((ret8(*)(PlayerObject*, unsigned char))(&$PlayerObject::setOpacity) != (ret8(D::*)(unsigned char))(&D::setOpacity)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)(unsigned char))(&D::setOpacity)));
        }

        if constexpr((ret9(*)(PlayerObject*, cocos2d::_ccColor3B const&))(&$PlayerObject::setColor) != (ret9(D::*)(cocos2d::_ccColor3B const&))(&D::setColor)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfVirtual((ret9(D::*)(cocos2d::_ccColor3B const&))(&D::setColor)));
        }

        if constexpr((ret10(*)(PlayerObject*, bool))(&$PlayerObject::setFlipX) != (ret10(D::*)(bool))(&D::setFlipX)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfVirtual((ret10(D::*)(bool))(&D::setFlipX)));
        }

        if constexpr((ret11(*)(PlayerObject*, bool))(&$PlayerObject::setFlipY) != (ret11(D::*)(bool))(&D::setFlipY)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfVirtual((ret11(D::*)(bool))(&D::setFlipY)));
        }

        if constexpr((ret12(*)(PlayerObject*))(&$PlayerObject::resetObject) != (ret12(D::*)())(&D::resetObject)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfVirtual((ret12(D::*)())(&D::resetObject)));
        }

        if constexpr((ret13(*)(PlayerObject*))(&$PlayerObject::getRealPosition) != (ret13(D::*)())(&D::getRealPosition)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfVirtual((ret13(D::*)())(&D::getRealPosition)));
        }

        if constexpr((ret14(*)(PlayerObject*))(&$PlayerObject::getOrientedBox) != (ret14(D::*)())(&D::getOrientedBox)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfVirtual((ret14(D::*)())(&D::getOrientedBox)));
        }

        if constexpr((ret15(*)(PlayerObject*, char const*))(&$PlayerObject::animationFinished) != (ret15(D::*)(char const*))(&D::animationFinished)) {
            modContainer.registerHookEnable(address15, FunctionScrapper::addressOfVirtual((ret15(D::*)(char const*))(&D::animationFinished)));
        }

        if constexpr((ret16(*)(PlayerObject*))(&$PlayerObject::activateStreak) != (ret16(D::*)())(&D::activateStreak)) {
            modContainer.registerHookEnable(address16, FunctionScrapper::addressOfNonVirtual((ret16(D::*)())(&D::activateStreak)));
        }

        if constexpr((ret17(*)(PlayerObject*))(&$PlayerObject::addAllParticles) != (ret17(D::*)())(&D::addAllParticles)) {
            modContainer.registerHookEnable(address17, FunctionScrapper::addressOfNonVirtual((ret17(D::*)())(&D::addAllParticles)));
        }

        if constexpr((ret18(*)(PlayerObject*, GameObject*))(&$PlayerObject::addToTouchedRings) != (ret18(D::*)(GameObject*))(&D::addToTouchedRings)) {
            modContainer.registerHookEnable(address18, FunctionScrapper::addressOfNonVirtual((ret18(D::*)(GameObject*))(&D::addToTouchedRings)));
        }

        if constexpr((ret19(*)(PlayerObject*, float))(&$PlayerObject::boostPlayer) != (ret19(D::*)(float))(&D::boostPlayer)) {
            modContainer.registerHookEnable(address19, FunctionScrapper::addressOfNonVirtual((ret19(D::*)(float))(&D::boostPlayer)));
        }

        if constexpr((ret20(*)(PlayerObject*, float, int))(&$PlayerObject::bumpPlayer) != (ret20(D::*)(float, int))(&D::bumpPlayer)) {
            modContainer.registerHookEnable(address20, FunctionScrapper::addressOfNonVirtual((ret20(D::*)(float, int))(&D::bumpPlayer)));
        }

        if constexpr((ret21(*)(PlayerObject*, PlayerButton))(&$PlayerObject::buttonDown) != (ret21(D::*)(PlayerButton))(&D::buttonDown)) {
            modContainer.registerHookEnable(address21, FunctionScrapper::addressOfNonVirtual((ret21(D::*)(PlayerButton))(&D::buttonDown)));
        }

        if constexpr((ret22(*)(PlayerObject*, GameObject*))(&$PlayerObject::checkSnapJumpToObject) != (ret22(D::*)(GameObject*))(&D::checkSnapJumpToObject)) {
            modContainer.registerHookEnable(address22, FunctionScrapper::addressOfNonVirtual((ret22(D::*)(GameObject*))(&D::checkSnapJumpToObject)));
        }

        if constexpr((ret23(*)(PlayerObject*, float, GameObject*))(&$PlayerObject::collidedWithObject) != (ret23(D::*)(float, GameObject*))(&D::collidedWithObject)) {
            modContainer.registerHookEnable(address23, FunctionScrapper::addressOfNonVirtual((ret23(D::*)(float, GameObject*))(&D::collidedWithObject)));
        }

        if constexpr((ret24(*)(PlayerObject*, float, GameObject*, cocos2d::CCRect))(&$PlayerObject::collidedWithObject) != (ret24(D::*)(float, GameObject*, cocos2d::CCRect))(&D::collidedWithObject)) {
            modContainer.registerHookEnable(address24, FunctionScrapper::addressOfNonVirtual((ret24(D::*)(float, GameObject*, cocos2d::CCRect))(&D::collidedWithObject)));
        }

        if constexpr((ret25(*)(PlayerObject*, float, GameObject*, bool))(&$PlayerObject::collidedWithSlope) != (ret25(D::*)(float, GameObject*, bool))(&D::collidedWithSlope)) {
            modContainer.registerHookEnable(address25, FunctionScrapper::addressOfNonVirtual((ret25(D::*)(float, GameObject*, bool))(&D::collidedWithSlope)));
        }

        if constexpr((ret26(*)(PlayerObject*, float))(&$PlayerObject::convertToClosestRotation) != (ret26(D::*)(float))(&D::convertToClosestRotation)) {
            modContainer.registerHookEnable(address26, FunctionScrapper::addressOfNonVirtual((ret26(D::*)(float))(&D::convertToClosestRotation)));
        }

        if constexpr((ret27(*)(PlayerObject*, PlayerObject*))(&$PlayerObject::copyAttributes) != (ret27(D::*)(PlayerObject*))(&D::copyAttributes)) {
            modContainer.registerHookEnable(address27, FunctionScrapper::addressOfNonVirtual((ret27(D::*)(PlayerObject*))(&D::copyAttributes)));
        }

        if constexpr((ret28(*)(PlayerObject*, int, int, cocos2d::CCLayer*))(&$PlayerObject::create) != (ret28(D::*)(int, int, cocos2d::CCLayer*))(&D::create)) {
            modContainer.registerHookEnable(address28, FunctionScrapper::addressOfNonVirtual((ret28(D::*)(int, int, cocos2d::CCLayer*))(&D::create)));
        }

        if constexpr((ret29(*)(PlayerObject*))(&$PlayerObject::deactivateParticle) != (ret29(D::*)())(&D::deactivateParticle)) {
            modContainer.registerHookEnable(address29, FunctionScrapper::addressOfNonVirtual((ret29(D::*)())(&D::deactivateParticle)));
        }

        if constexpr((ret30(*)(PlayerObject*, bool))(&$PlayerObject::deactivateStreak) != (ret30(D::*)(bool))(&D::deactivateStreak)) {
            modContainer.registerHookEnable(address30, FunctionScrapper::addressOfNonVirtual((ret30(D::*)(bool))(&D::deactivateStreak)));
        }

        if constexpr((ret31(*)(PlayerObject*, float))(&$PlayerObject::fadeOutStreak2) != (ret31(D::*)(float))(&D::fadeOutStreak2)) {
            modContainer.registerHookEnable(address31, FunctionScrapper::addressOfNonVirtual((ret31(D::*)(float))(&D::fadeOutStreak2)));
        }

        if constexpr((ret32(*)(PlayerObject*, float, float, cocos2d::_ccColor3B, cocos2d::_ccColor3B))(&$PlayerObject::flashPlayer) != (ret32(D::*)(float, float, cocos2d::_ccColor3B, cocos2d::_ccColor3B))(&D::flashPlayer)) {
            modContainer.registerHookEnable(address32, FunctionScrapper::addressOfNonVirtual((ret32(D::*)(float, float, cocos2d::_ccColor3B, cocos2d::_ccColor3B))(&D::flashPlayer)));
        }

        if constexpr((ret33(*)(PlayerObject*, bool, bool))(&$PlayerObject::flipGravity) != (ret33(D::*)(bool, bool))(&D::flipGravity)) {
            modContainer.registerHookEnable(address33, FunctionScrapper::addressOfNonVirtual((ret33(D::*)(bool, bool))(&D::flipGravity)));
        }

        if constexpr((ret34(*)(PlayerObject*))(&$PlayerObject::flipMod) != (ret34(D::*)())(&D::flipMod)) {
            modContainer.registerHookEnable(address34, FunctionScrapper::addressOfNonVirtual((ret34(D::*)())(&D::flipMod)));
        }

        if constexpr((ret35(*)(PlayerObject*))(&$PlayerObject::getActiveMode) != (ret35(D::*)())(&D::getActiveMode)) {
            modContainer.registerHookEnable(address35, FunctionScrapper::addressOfNonVirtual((ret35(D::*)())(&D::getActiveMode)));
        }

        if constexpr((ret36(*)(PlayerObject*))(&$PlayerObject::getModifiedSlopeYVel) != (ret36(D::*)())(&D::getModifiedSlopeYVel)) {
            modContainer.registerHookEnable(address36, FunctionScrapper::addressOfNonVirtual((ret36(D::*)())(&D::getModifiedSlopeYVel)));
        }

        if constexpr((ret37(*)(PlayerObject*, float))(&$PlayerObject::getOldPosition) != (ret37(D::*)(float))(&D::getOldPosition)) {
            modContainer.registerHookEnable(address37, FunctionScrapper::addressOfNonVirtual((ret37(D::*)(float))(&D::getOldPosition)));
        }

        if constexpr((ret38(*)(PlayerObject*))(&$PlayerObject::getSecondColor) != (ret38(D::*)())(&D::getSecondColor)) {
            modContainer.registerHookEnable(address38, FunctionScrapper::addressOfNonVirtual((ret38(D::*)())(&D::getSecondColor)));
        }

        if constexpr((ret39(*)(PlayerObject*))(&$PlayerObject::gravityDown) != (ret39(D::*)())(&D::gravityDown)) {
            modContainer.registerHookEnable(address39, FunctionScrapper::addressOfNonVirtual((ret39(D::*)())(&D::gravityDown)));
        }

        if constexpr((ret40(*)(PlayerObject*))(&$PlayerObject::gravityUp) != (ret40(D::*)())(&D::gravityUp)) {
            modContainer.registerHookEnable(address40, FunctionScrapper::addressOfNonVirtual((ret40(D::*)())(&D::gravityUp)));
        }

        if constexpr((ret41(*)(PlayerObject*))(&$PlayerObject::hardFlipGravity) != (ret41(D::*)())(&D::hardFlipGravity)) {
            modContainer.registerHookEnable(address41, FunctionScrapper::addressOfNonVirtual((ret41(D::*)())(&D::hardFlipGravity)));
        }

        if constexpr((ret42(*)(PlayerObject*, bool))(&$PlayerObject::hitGround) != (ret42(D::*)(bool))(&D::hitGround)) {
            modContainer.registerHookEnable(address42, FunctionScrapper::addressOfNonVirtual((ret42(D::*)(bool))(&D::hitGround)));
        }

        if constexpr((ret43(*)(PlayerObject*))(&$PlayerObject::incrementJumps) != (ret43(D::*)())(&D::incrementJumps)) {
            modContainer.registerHookEnable(address43, FunctionScrapper::addressOfNonVirtual((ret43(D::*)())(&D::incrementJumps)));
        }

        if constexpr((ret44(*)(PlayerObject*, int, int, cocos2d::CCLayer*))(&$PlayerObject::init) != (ret44(D::*)(int, int, cocos2d::CCLayer*))(&D::init)) {
            modContainer.registerHookEnable(address44, FunctionScrapper::addressOfNonVirtual((ret44(D::*)(int, int, cocos2d::CCLayer*))(&D::init)));
        }

        if constexpr((ret45(*)(PlayerObject*, float))(&$PlayerObject::isBoostValid) != (ret45(D::*)(float))(&D::isBoostValid)) {
            modContainer.registerHookEnable(address45, FunctionScrapper::addressOfNonVirtual((ret45(D::*)(float))(&D::isBoostValid)));
        }

        if constexpr((ret46(*)(PlayerObject*))(&$PlayerObject::isFlying) != (ret46(D::*)())(&D::isFlying)) {
            modContainer.registerHookEnable(address46, FunctionScrapper::addressOfNonVirtual((ret46(D::*)())(&D::isFlying)));
        }

        if constexpr((ret47(*)(PlayerObject*, float))(&$PlayerObject::isSafeFlip) != (ret47(D::*)(float))(&D::isSafeFlip)) {
            modContainer.registerHookEnable(address47, FunctionScrapper::addressOfNonVirtual((ret47(D::*)(float))(&D::isSafeFlip)));
        }

        if constexpr((ret48(*)(PlayerObject*, float))(&$PlayerObject::isSafeMode) != (ret48(D::*)(float))(&D::isSafeMode)) {
            modContainer.registerHookEnable(address48, FunctionScrapper::addressOfNonVirtual((ret48(D::*)(float))(&D::isSafeMode)));
        }

        if constexpr((ret49(*)(PlayerObject*, float))(&$PlayerObject::isSafeSpiderFlip) != (ret49(D::*)(float))(&D::isSafeSpiderFlip)) {
            modContainer.registerHookEnable(address49, FunctionScrapper::addressOfNonVirtual((ret49(D::*)(float))(&D::isSafeSpiderFlip)));
        }

        if constexpr((ret50(*)(PlayerObject*))(&$PlayerObject::levelFlipFinished) != (ret50(D::*)())(&D::levelFlipFinished)) {
            modContainer.registerHookEnable(address50, FunctionScrapper::addressOfNonVirtual((ret50(D::*)())(&D::levelFlipFinished)));
        }

        if constexpr((ret51(*)(PlayerObject*))(&$PlayerObject::levelFlipping) != (ret51(D::*)())(&D::levelFlipping)) {
            modContainer.registerHookEnable(address51, FunctionScrapper::addressOfNonVirtual((ret51(D::*)())(&D::levelFlipping)));
        }

        if constexpr((ret52(*)(PlayerObject*))(&$PlayerObject::levelWillFlip) != (ret52(D::*)())(&D::levelWillFlip)) {
            modContainer.registerHookEnable(address52, FunctionScrapper::addressOfNonVirtual((ret52(D::*)())(&D::levelWillFlip)));
        }

        if constexpr((ret53(*)(PlayerObject*, PlayerCheckpoint*))(&$PlayerObject::loadFromCheckpoint) != (ret53(D::*)(PlayerCheckpoint*))(&D::loadFromCheckpoint)) {
            modContainer.registerHookEnable(address53, FunctionScrapper::addressOfNonVirtual((ret53(D::*)(PlayerCheckpoint*))(&D::loadFromCheckpoint)));
        }

        if constexpr((ret54(*)(PlayerObject*))(&$PlayerObject::lockPlayer) != (ret54(D::*)())(&D::lockPlayer)) {
            modContainer.registerHookEnable(address54, FunctionScrapper::addressOfNonVirtual((ret54(D::*)())(&D::lockPlayer)));
        }

        if constexpr((ret55(*)(PlayerObject*))(&$PlayerObject::logValues) != (ret55(D::*)())(&D::logValues)) {
            modContainer.registerHookEnable(address55, FunctionScrapper::addressOfNonVirtual((ret55(D::*)())(&D::logValues)));
        }

        if constexpr((ret56(*)(PlayerObject*))(&$PlayerObject::modeDidChange) != (ret56(D::*)())(&D::modeDidChange)) {
            modContainer.registerHookEnable(address56, FunctionScrapper::addressOfNonVirtual((ret56(D::*)())(&D::modeDidChange)));
        }

        if constexpr((ret57(*)(PlayerObject*))(&$PlayerObject::placeStreakPoint) != (ret57(D::*)())(&D::placeStreakPoint)) {
            modContainer.registerHookEnable(address57, FunctionScrapper::addressOfNonVirtual((ret57(D::*)())(&D::placeStreakPoint)));
        }

        if constexpr((ret58(*)(PlayerObject*))(&$PlayerObject::playBurstEffect) != (ret58(D::*)())(&D::playBurstEffect)) {
            modContainer.registerHookEnable(address58, FunctionScrapper::addressOfNonVirtual((ret58(D::*)())(&D::playBurstEffect)));
        }

        if constexpr((ret59(*)(PlayerObject*))(&$PlayerObject::playDeathEffect) != (ret59(D::*)())(&D::playDeathEffect)) {
            modContainer.registerHookEnable(address59, FunctionScrapper::addressOfNonVirtual((ret59(D::*)())(&D::playDeathEffect)));
        }

        if constexpr((ret60(*)(PlayerObject*))(&$PlayerObject::playDynamicSpiderRun) != (ret60(D::*)())(&D::playDynamicSpiderRun)) {
            modContainer.registerHookEnable(address60, FunctionScrapper::addressOfNonVirtual((ret60(D::*)())(&D::playDynamicSpiderRun)));
        }

        if constexpr((ret61(*)(PlayerObject*, bool))(&$PlayerObject::playerDestroyed) != (ret61(D::*)(bool))(&D::playerDestroyed)) {
            modContainer.registerHookEnable(address61, FunctionScrapper::addressOfNonVirtual((ret61(D::*)(bool))(&D::playerDestroyed)));
        }

        if constexpr((ret62(*)(PlayerObject*))(&$PlayerObject::playerIsFalling) != (ret62(D::*)())(&D::playerIsFalling)) {
            modContainer.registerHookEnable(address62, FunctionScrapper::addressOfNonVirtual((ret62(D::*)())(&D::playerIsFalling)));
        }

        if constexpr((ret63(*)(PlayerObject*))(&$PlayerObject::playerTeleported) != (ret63(D::*)())(&D::playerTeleported)) {
            modContainer.registerHookEnable(address63, FunctionScrapper::addressOfNonVirtual((ret63(D::*)())(&D::playerTeleported)));
        }

        if constexpr((ret64(*)(PlayerObject*))(&$PlayerObject::playingEndEffect) != (ret64(D::*)())(&D::playingEndEffect)) {
            modContainer.registerHookEnable(address64, FunctionScrapper::addressOfNonVirtual((ret64(D::*)())(&D::playingEndEffect)));
        }

        if constexpr((ret65(*)(PlayerObject*, float))(&$PlayerObject::postCollision) != (ret65(D::*)(float))(&D::postCollision)) {
            modContainer.registerHookEnable(address65, FunctionScrapper::addressOfNonVirtual((ret65(D::*)(float))(&D::postCollision)));
        }

        if constexpr((ret66(*)(PlayerObject*))(&$PlayerObject::preCollision) != (ret66(D::*)())(&D::preCollision)) {
            modContainer.registerHookEnable(address66, FunctionScrapper::addressOfNonVirtual((ret66(D::*)())(&D::preCollision)));
        }

        if constexpr((ret67(*)(PlayerObject*, float, GameObject*))(&$PlayerObject::preSlopeCollision) != (ret67(D::*)(float, GameObject*))(&D::preSlopeCollision)) {
            modContainer.registerHookEnable(address67, FunctionScrapper::addressOfNonVirtual((ret67(D::*)(float, GameObject*))(&D::preSlopeCollision)));
        }

        if constexpr((ret68(*)(PlayerObject*, float))(&$PlayerObject::propellPlayer) != (ret68(D::*)(float))(&D::propellPlayer)) {
            modContainer.registerHookEnable(address68, FunctionScrapper::addressOfNonVirtual((ret68(D::*)(float))(&D::propellPlayer)));
        }

        if constexpr((ret69(*)(PlayerObject*, PlayerButton))(&$PlayerObject::pushButton) != (ret69(D::*)(PlayerButton))(&D::pushButton)) {
            modContainer.registerHookEnable(address69, FunctionScrapper::addressOfNonVirtual((ret69(D::*)(PlayerButton))(&D::pushButton)));
        }

        if constexpr((ret70(*)(PlayerObject*))(&$PlayerObject::pushDown) != (ret70(D::*)())(&D::pushDown)) {
            modContainer.registerHookEnable(address70, FunctionScrapper::addressOfNonVirtual((ret70(D::*)())(&D::pushDown)));
        }

        if constexpr((ret71(*)(PlayerObject*, float))(&$PlayerObject::pushPlayer) != (ret71(D::*)(float))(&D::pushPlayer)) {
            modContainer.registerHookEnable(address71, FunctionScrapper::addressOfNonVirtual((ret71(D::*)(float))(&D::pushPlayer)));
        }

        if constexpr((ret72(*)(PlayerObject*, PlayerButton))(&$PlayerObject::releaseButton) != (ret72(D::*)(PlayerButton))(&D::releaseButton)) {
            modContainer.registerHookEnable(address72, FunctionScrapper::addressOfNonVirtual((ret72(D::*)(PlayerButton))(&D::releaseButton)));
        }

        if constexpr((ret73(*)(PlayerObject*))(&$PlayerObject::removeAllParticles) != (ret73(D::*)())(&D::removeAllParticles)) {
            modContainer.registerHookEnable(address73, FunctionScrapper::addressOfNonVirtual((ret73(D::*)())(&D::removeAllParticles)));
        }

        if constexpr((ret74(*)(PlayerObject*))(&$PlayerObject::removePendingCheckpoint) != (ret74(D::*)())(&D::removePendingCheckpoint)) {
            modContainer.registerHookEnable(address74, FunctionScrapper::addressOfNonVirtual((ret74(D::*)())(&D::removePendingCheckpoint)));
        }

        if constexpr((ret75(*)(PlayerObject*))(&$PlayerObject::resetAllParticles) != (ret75(D::*)())(&D::resetAllParticles)) {
            modContainer.registerHookEnable(address75, FunctionScrapper::addressOfNonVirtual((ret75(D::*)())(&D::resetAllParticles)));
        }

        if constexpr((ret76(*)(PlayerObject*))(&$PlayerObject::resetCollisionLog) != (ret76(D::*)())(&D::resetCollisionLog)) {
            modContainer.registerHookEnable(address76, FunctionScrapper::addressOfNonVirtual((ret76(D::*)())(&D::resetCollisionLog)));
        }

        if constexpr((ret77(*)(PlayerObject*))(&$PlayerObject::resetPlayerIcon) != (ret77(D::*)())(&D::resetPlayerIcon)) {
            modContainer.registerHookEnable(address77, FunctionScrapper::addressOfNonVirtual((ret77(D::*)())(&D::resetPlayerIcon)));
        }

        if constexpr((ret78(*)(PlayerObject*))(&$PlayerObject::resetStateVariables) != (ret78(D::*)())(&D::resetStateVariables)) {
            modContainer.registerHookEnable(address78, FunctionScrapper::addressOfNonVirtual((ret78(D::*)())(&D::resetStateVariables)));
        }

        if constexpr((ret79(*)(PlayerObject*))(&$PlayerObject::resetStreak) != (ret79(D::*)())(&D::resetStreak)) {
            modContainer.registerHookEnable(address79, FunctionScrapper::addressOfNonVirtual((ret79(D::*)())(&D::resetStreak)));
        }

        if constexpr((ret80(*)(PlayerObject*, GameObject*))(&$PlayerObject::ringJump) != (ret80(D::*)(GameObject*))(&D::ringJump)) {
            modContainer.registerHookEnable(address80, FunctionScrapper::addressOfNonVirtual((ret80(D::*)(GameObject*))(&D::ringJump)));
        }

        if constexpr((ret81(*)(PlayerObject*, float))(&$PlayerObject::runBallRotation) != (ret81(D::*)(float))(&D::runBallRotation)) {
            modContainer.registerHookEnable(address81, FunctionScrapper::addressOfNonVirtual((ret81(D::*)(float))(&D::runBallRotation)));
        }

        if constexpr((ret82(*)(PlayerObject*))(&$PlayerObject::runBallRotation2) != (ret82(D::*)())(&D::runBallRotation2)) {
            modContainer.registerHookEnable(address82, FunctionScrapper::addressOfNonVirtual((ret82(D::*)())(&D::runBallRotation2)));
        }

        if constexpr((ret83(*)(PlayerObject*))(&$PlayerObject::runNormalRotation) != (ret83(D::*)())(&D::runNormalRotation)) {
            modContainer.registerHookEnable(address83, FunctionScrapper::addressOfNonVirtual((ret83(D::*)())(&D::runNormalRotation)));
        }

        if constexpr((ret84(*)(PlayerObject*, bool))(&$PlayerObject::runRotateAction) != (ret84(D::*)(bool))(&D::runRotateAction)) {
            modContainer.registerHookEnable(address84, FunctionScrapper::addressOfNonVirtual((ret84(D::*)(bool))(&D::runRotateAction)));
        }

        if constexpr((ret85(*)(PlayerObject*, PlayerCheckpoint*))(&$PlayerObject::saveToCheckpoint) != (ret85(D::*)(PlayerCheckpoint*))(&D::saveToCheckpoint)) {
            modContainer.registerHookEnable(address85, FunctionScrapper::addressOfNonVirtual((ret85(D::*)(PlayerCheckpoint*))(&D::saveToCheckpoint)));
        }

        if constexpr((ret86(*)(PlayerObject*, cocos2d::_ccColor3B const&))(&$PlayerObject::setSecondColor) != (ret86(D::*)(cocos2d::_ccColor3B const&))(&D::setSecondColor)) {
            modContainer.registerHookEnable(address86, FunctionScrapper::addressOfNonVirtual((ret86(D::*)(cocos2d::_ccColor3B const&))(&D::setSecondColor)));
        }

        if constexpr((ret87(*)(PlayerObject*))(&$PlayerObject::setupStreak) != (ret87(D::*)())(&D::setupStreak)) {
            modContainer.registerHookEnable(address87, FunctionScrapper::addressOfNonVirtual((ret87(D::*)())(&D::setupStreak)));
        }

        if constexpr((ret88(*)(PlayerObject*))(&$PlayerObject::spawnCircle) != (ret88(D::*)())(&D::spawnCircle)) {
            modContainer.registerHookEnable(address88, FunctionScrapper::addressOfNonVirtual((ret88(D::*)())(&D::spawnCircle)));
        }

        if constexpr((ret89(*)(PlayerObject*))(&$PlayerObject::spawnCircle2) != (ret89(D::*)())(&D::spawnCircle2)) {
            modContainer.registerHookEnable(address89, FunctionScrapper::addressOfNonVirtual((ret89(D::*)())(&D::spawnCircle2)));
        }

        if constexpr((ret90(*)(PlayerObject*))(&$PlayerObject::spawnDualCircle) != (ret90(D::*)())(&D::spawnDualCircle)) {
            modContainer.registerHookEnable(address90, FunctionScrapper::addressOfNonVirtual((ret90(D::*)())(&D::spawnDualCircle)));
        }

        if constexpr((ret91(*)(PlayerObject*, PlayerObject*))(&$PlayerObject::spawnFromPlayer) != (ret91(D::*)(PlayerObject*))(&D::spawnFromPlayer)) {
            modContainer.registerHookEnable(address91, FunctionScrapper::addressOfNonVirtual((ret91(D::*)(PlayerObject*))(&D::spawnFromPlayer)));
        }

        if constexpr((ret92(*)(PlayerObject*, cocos2d::_ccColor3B, float))(&$PlayerObject::spawnPortalCircle) != (ret92(D::*)(cocos2d::_ccColor3B, float))(&D::spawnPortalCircle)) {
            modContainer.registerHookEnable(address92, FunctionScrapper::addressOfNonVirtual((ret92(D::*)(cocos2d::_ccColor3B, float))(&D::spawnPortalCircle)));
        }

        if constexpr((ret93(*)(PlayerObject*))(&$PlayerObject::spawnScaleCircle) != (ret93(D::*)())(&D::spawnScaleCircle)) {
            modContainer.registerHookEnable(address93, FunctionScrapper::addressOfNonVirtual((ret93(D::*)())(&D::spawnScaleCircle)));
        }

        if constexpr((ret94(*)(PlayerObject*))(&$PlayerObject::specialGroundHit) != (ret94(D::*)())(&D::specialGroundHit)) {
            modContainer.registerHookEnable(address94, FunctionScrapper::addressOfNonVirtual((ret94(D::*)())(&D::specialGroundHit)));
        }

        if constexpr((ret95(*)(PlayerObject*))(&$PlayerObject::speedDown) != (ret95(D::*)())(&D::speedDown)) {
            modContainer.registerHookEnable(address95, FunctionScrapper::addressOfNonVirtual((ret95(D::*)())(&D::speedDown)));
        }

        if constexpr((ret96(*)(PlayerObject*))(&$PlayerObject::speedUp) != (ret96(D::*)())(&D::speedUp)) {
            modContainer.registerHookEnable(address96, FunctionScrapper::addressOfNonVirtual((ret96(D::*)())(&D::speedUp)));
        }

        if constexpr((ret97(*)(PlayerObject*, bool))(&$PlayerObject::spiderTestJump) != (ret97(D::*)(bool))(&D::spiderTestJump)) {
            modContainer.registerHookEnable(address97, FunctionScrapper::addressOfNonVirtual((ret97(D::*)(bool))(&D::spiderTestJump)));
        }

        if constexpr((ret98(*)(PlayerObject*, GameObject*))(&$PlayerObject::startDashing) != (ret98(D::*)(GameObject*))(&D::startDashing)) {
            modContainer.registerHookEnable(address98, FunctionScrapper::addressOfNonVirtual((ret98(D::*)(GameObject*))(&D::startDashing)));
        }

        if constexpr((ret99(*)(PlayerObject*))(&$PlayerObject::stopBurstEffect) != (ret99(D::*)())(&D::stopBurstEffect)) {
            modContainer.registerHookEnable(address99, FunctionScrapper::addressOfNonVirtual((ret99(D::*)())(&D::stopBurstEffect)));
        }

        if constexpr((ret100(*)(PlayerObject*))(&$PlayerObject::stopDashing) != (ret100(D::*)())(&D::stopDashing)) {
            modContainer.registerHookEnable(address100, FunctionScrapper::addressOfNonVirtual((ret100(D::*)())(&D::stopDashing)));
        }

        if constexpr((ret101(*)(PlayerObject*, bool))(&$PlayerObject::stopRotation) != (ret101(D::*)(bool))(&D::stopRotation)) {
            modContainer.registerHookEnable(address101, FunctionScrapper::addressOfNonVirtual((ret101(D::*)(bool))(&D::stopRotation)));
        }

        if constexpr((ret102(*)(PlayerObject*, bool, int))(&$PlayerObject::storeCollision) != (ret102(D::*)(bool, int))(&D::storeCollision)) {
            modContainer.registerHookEnable(address102, FunctionScrapper::addressOfNonVirtual((ret102(D::*)(bool, int))(&D::storeCollision)));
        }

        if constexpr((ret103(*)(PlayerObject*, GameObjectType))(&$PlayerObject::switchedToMode) != (ret103(D::*)(GameObjectType))(&D::switchedToMode)) {
            modContainer.registerHookEnable(address103, FunctionScrapper::addressOfNonVirtual((ret103(D::*)(GameObjectType))(&D::switchedToMode)));
        }

        if constexpr((ret104(*)(PlayerObject*, float, GameObject*))(&$PlayerObject::testForMoving) != (ret104(D::*)(float, GameObject*))(&D::testForMoving)) {
            modContainer.registerHookEnable(address104, FunctionScrapper::addressOfNonVirtual((ret104(D::*)(float, GameObject*))(&D::testForMoving)));
        }

        if constexpr((ret105(*)(PlayerObject*, bool))(&$PlayerObject::toggleBirdMode) != (ret105(D::*)(bool))(&D::toggleBirdMode)) {
            modContainer.registerHookEnable(address105, FunctionScrapper::addressOfNonVirtual((ret105(D::*)(bool))(&D::toggleBirdMode)));
        }

        if constexpr((ret106(*)(PlayerObject*, bool))(&$PlayerObject::toggleDartMode) != (ret106(D::*)(bool))(&D::toggleDartMode)) {
            modContainer.registerHookEnable(address106, FunctionScrapper::addressOfNonVirtual((ret106(D::*)(bool))(&D::toggleDartMode)));
        }

        if constexpr((ret107(*)(PlayerObject*, bool))(&$PlayerObject::toggleFlyMode) != (ret107(D::*)(bool))(&D::toggleFlyMode)) {
            modContainer.registerHookEnable(address107, FunctionScrapper::addressOfNonVirtual((ret107(D::*)(bool))(&D::toggleFlyMode)));
        }

        if constexpr((ret108(*)(PlayerObject*, GhostType))(&$PlayerObject::toggleGhostEffect) != (ret108(D::*)(GhostType))(&D::toggleGhostEffect)) {
            modContainer.registerHookEnable(address108, FunctionScrapper::addressOfNonVirtual((ret108(D::*)(GhostType))(&D::toggleGhostEffect)));
        }

        if constexpr((ret109(*)(PlayerObject*, bool))(&$PlayerObject::togglePlayerScale) != (ret109(D::*)(bool))(&D::togglePlayerScale)) {
            modContainer.registerHookEnable(address109, FunctionScrapper::addressOfNonVirtual((ret109(D::*)(bool))(&D::togglePlayerScale)));
        }

        if constexpr((ret110(*)(PlayerObject*, bool))(&$PlayerObject::toggleRobotMode) != (ret110(D::*)(bool))(&D::toggleRobotMode)) {
            modContainer.registerHookEnable(address110, FunctionScrapper::addressOfNonVirtual((ret110(D::*)(bool))(&D::toggleRobotMode)));
        }

        if constexpr((ret111(*)(PlayerObject*, bool))(&$PlayerObject::toggleRollMode) != (ret111(D::*)(bool))(&D::toggleRollMode)) {
            modContainer.registerHookEnable(address111, FunctionScrapper::addressOfNonVirtual((ret111(D::*)(bool))(&D::toggleRollMode)));
        }

        if constexpr((ret112(*)(PlayerObject*, bool))(&$PlayerObject::toggleSpiderMode) != (ret112(D::*)(bool))(&D::toggleSpiderMode)) {
            modContainer.registerHookEnable(address112, FunctionScrapper::addressOfNonVirtual((ret112(D::*)(bool))(&D::toggleSpiderMode)));
        }

        if constexpr((ret113(*)(PlayerObject*, bool))(&$PlayerObject::toggleVisibility) != (ret113(D::*)(bool))(&D::toggleVisibility)) {
            modContainer.registerHookEnable(address113, FunctionScrapper::addressOfNonVirtual((ret113(D::*)(bool))(&D::toggleVisibility)));
        }

        if constexpr((ret114(*)(PlayerObject*, GameObject*))(&$PlayerObject::touchedObject) != (ret114(D::*)(GameObject*))(&D::touchedObject)) {
            modContainer.registerHookEnable(address114, FunctionScrapper::addressOfNonVirtual((ret114(D::*)(GameObject*))(&D::touchedObject)));
        }

        if constexpr((ret115(*)(PlayerObject*))(&$PlayerObject::tryPlaceCheckpoint) != (ret115(D::*)())(&D::tryPlaceCheckpoint)) {
            modContainer.registerHookEnable(address115, FunctionScrapper::addressOfNonVirtual((ret115(D::*)())(&D::tryPlaceCheckpoint)));
        }

        if constexpr((ret116(*)(PlayerObject*, bool))(&$PlayerObject::updateCheckpointMode) != (ret116(D::*)(bool))(&D::updateCheckpointMode)) {
            modContainer.registerHookEnable(address116, FunctionScrapper::addressOfNonVirtual((ret116(D::*)(bool))(&D::updateCheckpointMode)));
        }

        if constexpr((ret117(*)(PlayerObject*))(&$PlayerObject::updateCheckpointTest) != (ret117(D::*)())(&D::updateCheckpointTest)) {
            modContainer.registerHookEnable(address117, FunctionScrapper::addressOfNonVirtual((ret117(D::*)())(&D::updateCheckpointTest)));
        }

        if constexpr((ret118(*)(PlayerObject*, bool, int))(&$PlayerObject::updateCollide) != (ret118(D::*)(bool, int))(&D::updateCollide)) {
            modContainer.registerHookEnable(address118, FunctionScrapper::addressOfNonVirtual((ret118(D::*)(bool, int))(&D::updateCollide)));
        }

        if constexpr((ret119(*)(PlayerObject*, float, int))(&$PlayerObject::updateCollideBottom) != (ret119(D::*)(float, int))(&D::updateCollideBottom)) {
            modContainer.registerHookEnable(address119, FunctionScrapper::addressOfNonVirtual((ret119(D::*)(float, int))(&D::updateCollideBottom)));
        }

        if constexpr((ret120(*)(PlayerObject*, float, int))(&$PlayerObject::updateCollideTop) != (ret120(D::*)(float, int))(&D::updateCollideTop)) {
            modContainer.registerHookEnable(address120, FunctionScrapper::addressOfNonVirtual((ret120(D::*)(float, int))(&D::updateCollideTop)));
        }

        if constexpr((ret121(*)(PlayerObject*))(&$PlayerObject::updateDashAnimation) != (ret121(D::*)())(&D::updateDashAnimation)) {
            modContainer.registerHookEnable(address121, FunctionScrapper::addressOfNonVirtual((ret121(D::*)())(&D::updateDashAnimation)));
        }

        if constexpr((ret122(*)(PlayerObject*))(&$PlayerObject::updateDashArt) != (ret122(D::*)())(&D::updateDashArt)) {
            modContainer.registerHookEnable(address122, FunctionScrapper::addressOfNonVirtual((ret122(D::*)())(&D::updateDashArt)));
        }

        if constexpr((ret123(*)(PlayerObject*))(&$PlayerObject::updateGlowColor) != (ret123(D::*)())(&D::updateGlowColor)) {
            modContainer.registerHookEnable(address123, FunctionScrapper::addressOfNonVirtual((ret123(D::*)())(&D::updateGlowColor)));
        }

        if constexpr((ret124(*)(PlayerObject*, float))(&$PlayerObject::updateJump) != (ret124(D::*)(float))(&D::updateJump)) {
            modContainer.registerHookEnable(address124, FunctionScrapper::addressOfNonVirtual((ret124(D::*)(float))(&D::updateJump)));
        }

        if constexpr((ret125(*)(PlayerObject*))(&$PlayerObject::updateJumpVariables) != (ret125(D::*)())(&D::updateJumpVariables)) {
            modContainer.registerHookEnable(address125, FunctionScrapper::addressOfNonVirtual((ret125(D::*)())(&D::updateJumpVariables)));
        }

        if constexpr((ret126(*)(PlayerObject*, int))(&$PlayerObject::updatePlayerBirdFrame) != (ret126(D::*)(int))(&D::updatePlayerBirdFrame)) {
            modContainer.registerHookEnable(address126, FunctionScrapper::addressOfNonVirtual((ret126(D::*)(int))(&D::updatePlayerBirdFrame)));
        }

        if constexpr((ret127(*)(PlayerObject*, int))(&$PlayerObject::updatePlayerDartFrame) != (ret127(D::*)(int))(&D::updatePlayerDartFrame)) {
            modContainer.registerHookEnable(address127, FunctionScrapper::addressOfNonVirtual((ret127(D::*)(int))(&D::updatePlayerDartFrame)));
        }

        if constexpr((ret128(*)(PlayerObject*, int))(&$PlayerObject::updatePlayerFrame) != (ret128(D::*)(int))(&D::updatePlayerFrame)) {
            modContainer.registerHookEnable(address128, FunctionScrapper::addressOfNonVirtual((ret128(D::*)(int))(&D::updatePlayerFrame)));
        }

        if constexpr((ret129(*)(PlayerObject*))(&$PlayerObject::updatePlayerGlow) != (ret129(D::*)())(&D::updatePlayerGlow)) {
            modContainer.registerHookEnable(address129, FunctionScrapper::addressOfNonVirtual((ret129(D::*)())(&D::updatePlayerGlow)));
        }

        if constexpr((ret130(*)(PlayerObject*, int))(&$PlayerObject::updatePlayerRobotFrame) != (ret130(D::*)(int))(&D::updatePlayerRobotFrame)) {
            modContainer.registerHookEnable(address130, FunctionScrapper::addressOfNonVirtual((ret130(D::*)(int))(&D::updatePlayerRobotFrame)));
        }

        if constexpr((ret131(*)(PlayerObject*, int))(&$PlayerObject::updatePlayerRollFrame) != (ret131(D::*)(int))(&D::updatePlayerRollFrame)) {
            modContainer.registerHookEnable(address131, FunctionScrapper::addressOfNonVirtual((ret131(D::*)(int))(&D::updatePlayerRollFrame)));
        }

        if constexpr((ret132(*)(PlayerObject*))(&$PlayerObject::updatePlayerScale) != (ret132(D::*)())(&D::updatePlayerScale)) {
            modContainer.registerHookEnable(address132, FunctionScrapper::addressOfNonVirtual((ret132(D::*)())(&D::updatePlayerScale)));
        }

        if constexpr((ret133(*)(PlayerObject*, int))(&$PlayerObject::updatePlayerShipFrame) != (ret133(D::*)(int))(&D::updatePlayerShipFrame)) {
            modContainer.registerHookEnable(address133, FunctionScrapper::addressOfNonVirtual((ret133(D::*)(int))(&D::updatePlayerShipFrame)));
        }

        if constexpr((ret134(*)(PlayerObject*, int))(&$PlayerObject::updatePlayerSpiderFrame) != (ret134(D::*)(int))(&D::updatePlayerSpiderFrame)) {
            modContainer.registerHookEnable(address134, FunctionScrapper::addressOfNonVirtual((ret134(D::*)(int))(&D::updatePlayerSpiderFrame)));
        }

        if constexpr((ret135(*)(PlayerObject*, gd::string))(&$PlayerObject::updatePlayerSpriteExtra) != (ret135(D::*)(gd::string))(&D::updatePlayerSpriteExtra)) {
            modContainer.registerHookEnable(address135, FunctionScrapper::addressOfNonVirtual((ret135(D::*)(gd::string))(&D::updatePlayerSpriteExtra)));
        }

        if constexpr((ret136(*)(PlayerObject*))(&$PlayerObject::updateRobotAnimationSpeed) != (ret136(D::*)())(&D::updateRobotAnimationSpeed)) {
            modContainer.registerHookEnable(address136, FunctionScrapper::addressOfNonVirtual((ret136(D::*)())(&D::updateRobotAnimationSpeed)));
        }

        if constexpr((ret137(*)(PlayerObject*, float))(&$PlayerObject::updateRotation) != (ret137(D::*)(float))(&D::updateRotation)) {
            modContainer.registerHookEnable(address137, FunctionScrapper::addressOfNonVirtual((ret137(D::*)(float))(&D::updateRotation)));
        }

        if constexpr((ret138(*)(PlayerObject*, float, float))(&$PlayerObject::updateRotation) != (ret138(D::*)(float, float))(&D::updateRotation)) {
            modContainer.registerHookEnable(address138, FunctionScrapper::addressOfNonVirtual((ret138(D::*)(float, float))(&D::updateRotation)));
        }

        if constexpr((ret139(*)(PlayerObject*, float))(&$PlayerObject::updateShipRotation) != (ret139(D::*)(float))(&D::updateShipRotation)) {
            modContainer.registerHookEnable(address139, FunctionScrapper::addressOfNonVirtual((ret139(D::*)(float))(&D::updateShipRotation)));
        }

        if constexpr((ret140(*)(PlayerObject*, gd::string))(&$PlayerObject::updateShipSpriteExtra) != (ret140(D::*)(gd::string))(&D::updateShipSpriteExtra)) {
            modContainer.registerHookEnable(address140, FunctionScrapper::addressOfNonVirtual((ret140(D::*)(gd::string))(&D::updateShipSpriteExtra)));
        }

        if constexpr((ret141(*)(PlayerObject*, float))(&$PlayerObject::updateSlopeRotation) != (ret141(D::*)(float))(&D::updateSlopeRotation)) {
            modContainer.registerHookEnable(address141, FunctionScrapper::addressOfNonVirtual((ret141(D::*)(float))(&D::updateSlopeRotation)));
        }

        if constexpr((ret142(*)(PlayerObject*, float))(&$PlayerObject::updateSlopeYVelocity) != (ret142(D::*)(float))(&D::updateSlopeYVelocity)) {
            modContainer.registerHookEnable(address142, FunctionScrapper::addressOfNonVirtual((ret142(D::*)(float))(&D::updateSlopeYVelocity)));
        }

        if constexpr((ret143(*)(PlayerObject*, float))(&$PlayerObject::updateSpecial) != (ret143(D::*)(float))(&D::updateSpecial)) {
            modContainer.registerHookEnable(address143, FunctionScrapper::addressOfNonVirtual((ret143(D::*)(float))(&D::updateSpecial)));
        }

        if constexpr((ret144(*)(PlayerObject*))(&$PlayerObject::updateStateVariables) != (ret144(D::*)())(&D::updateStateVariables)) {
            modContainer.registerHookEnable(address144, FunctionScrapper::addressOfNonVirtual((ret144(D::*)())(&D::updateStateVariables)));
        }

        if constexpr((ret145(*)(PlayerObject*, float))(&$PlayerObject::updateTimeMod) != (ret145(D::*)(float))(&D::updateTimeMod)) {
            modContainer.registerHookEnable(address145, FunctionScrapper::addressOfNonVirtual((ret145(D::*)(float))(&D::updateTimeMod)));
        }

        if constexpr((ret146(*)(PlayerObject*))(&$PlayerObject::usingWallLimitedMode) != (ret146(D::*)())(&D::usingWallLimitedMode)) {
            modContainer.registerHookEnable(address146, FunctionScrapper::addressOfNonVirtual((ret146(D::*)())(&D::usingWallLimitedMode)));
        }

        if constexpr((ret147(*)(PlayerObject*))(&$PlayerObject::yStartDown) != (ret147(D::*)())(&D::yStartDown)) {
            modContainer.registerHookEnable(address147, FunctionScrapper::addressOfNonVirtual((ret147(D::*)())(&D::yStartDown)));
        }

        if constexpr((ret148(*)(PlayerObject*))(&$PlayerObject::yStartUp) != (ret148(D::*)())(&D::yStartUp)) {
            modContainer.registerHookEnable(address148, FunctionScrapper::addressOfNonVirtual((ret148(D::*)())(&D::yStartUp)));
        }

        return true;
    }
};

template<class D>
struct $PlayerCheckpoint : PlayerCheckpoint, InterfaceBase {
    $PlayerCheckpoint(const $PlayerCheckpoint& c) : PlayerCheckpoint(c) {}
    $PlayerCheckpoint() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x80760;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = bool;
    static inline auto address1 = base+0x807a0;

    dupable ret1 init() {
        return reinterpret_cast<ret1(*)(PlayerCheckpoint*)>(address1)(this);
    }

    using ret2 = PlayerCheckpoint*;
    static inline auto address2 = base+0x7e8c0;

    dupable static ret2 create() {
        return reinterpret_cast<ret2(*)(PlayerCheckpoint*)>(address2)();
    }
    static bool _apply() {

        if constexpr((ret0(*)(PlayerCheckpoint*))(&$PlayerCheckpoint::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(PlayerCheckpoint*))(&$PlayerCheckpoint::init) != (ret1(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::init)));
        }

        if constexpr((ret2(*)(PlayerCheckpoint*))(&$PlayerCheckpoint::create) != (ret2(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $PlayLayer : PlayLayer, InterfaceBase {
    $PlayLayer(const $PlayLayer& c) : PlayLayer(c) {}
    $PlayLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x7e0f0;

    dupable ret0 addCircle(CCCircleWave* p0) {
        return reinterpret_cast<ret0(*)(PlayLayer*, CCCircleWave*)>(address0)(this, p0);
    }

    using ret1 = void;
    static inline auto address1 = base+0x70e50;

    dupable ret1 addObject(GameObject* p0) {
        return reinterpret_cast<ret1(*)(PlayLayer*, GameObject*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x77680;

    dupable ret2 addToGroupOld(GameObject* p0) {
        return reinterpret_cast<ret2(*)(PlayLayer*, GameObject*)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x7cfc0;

    dupable ret3 addToSpeedObjects(GameObject* p0) {
        return reinterpret_cast<ret3(*)(PlayLayer*, GameObject*)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x7d710;

    dupable ret4 animateInDualGround(GameObject* p0,float p1,bool p2) {
        return reinterpret_cast<ret4(*)(PlayLayer*, GameObject*, float, bool)>(address4)(this, p0, p1, p2);
    }

    using ret5 = void;
    static inline auto address5 = base+0x7d9d0;

    dupable ret5 animateInGround(bool p0) {
        return reinterpret_cast<ret5(*)(PlayLayer*, bool)>(address5)(this, p0);
    }

    using ret6 = void;
    static inline auto address6 = base+0x6f350;

    dupable ret6 animateOutGround(bool p0) {
        return reinterpret_cast<ret6(*)(PlayLayer*, bool)>(address6)(this, p0);
    }

    using ret7 = void;
    static inline auto address7 = base+0x7de80;

    dupable ret7 animateOutGroundFinished() {
        return reinterpret_cast<ret7(*)(PlayLayer*)>(address7)(this);
    }

    using ret8 = void;
    static inline auto address8 = base+0x7c310;

    dupable ret8 applyEnterEffect(GameObject* p0) {
        return reinterpret_cast<ret8(*)(PlayLayer*, GameObject*)>(address8)(this, p0);
    }

    using ret9 = void;
    static inline auto address9 = base+0x7aa10;

    dupable ret9 calculateColorValues(EffectGameObject* p0,EffectGameObject* p1,int p2,float p3,ColorActionSprite* p4,GJEffectManager* p5) {
        return reinterpret_cast<ret9(*)(PlayLayer*, EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)>(address9)(this, p0, p1, p2, p3, p4, p5);
    }

    using ret10 = void;
    static inline auto address10 = base+0x7cbe0;

    dupable ret10 cameraMoveX(float p0,float p1,float p2) {
        return reinterpret_cast<ret10(*)(PlayLayer*, float, float, float)>(address10)(this, p0, p1, p2);
    }

    using ret11 = void;
    static inline auto address11 = base+0x7cc60;

    dupable ret11 cameraMoveY(float p0,float p1,float p2) {
        return reinterpret_cast<ret11(*)(PlayLayer*, float, float, float)>(address11)(this, p0, p1, p2);
    }

    using ret12 = void;
    static inline auto address12 = base+0x78c90;

    dupable ret12 checkCollisions(PlayerObject* p0,float p1) {
        return reinterpret_cast<ret12(*)(PlayLayer*, PlayerObject*, float)>(address12)(this, p0, p1);
    }

    using ret13 = void;
    static inline auto address13 = base+0x7e110;

    dupable ret13 circleWaveWillBeRemoved(CCCircleWave* p0) {
        return reinterpret_cast<ret13(*)(PlayLayer*, CCCircleWave*)>(address13)(this, p0);
    }

    using ret14 = void;
    static inline auto address14 = base+0x76ba0;

    dupable ret14 claimParticle(gd::string p0) {
        return reinterpret_cast<ret14(*)(PlayLayer*, gd::string)>(address14)(this, p0);
    }

    using ret15 = void;
    static inline auto address15 = base+0x7cfa0;

    dupable ret15 clearPickedUpItems() {
        return reinterpret_cast<ret15(*)(PlayLayer*)>(address15)(this);
    }

    using ret16 = void;
    static inline auto address16 = base+0x77810;

    dupable ret16 colorObject(int p0,cocos2d::_ccColor3B p1) {
        return reinterpret_cast<ret16(*)(PlayLayer*, int, cocos2d::_ccColor3B)>(address16)(this, p0, p1);
    }

    using ret17 = void;
    static inline auto address17 = base+0x737e0;

    dupable ret17 commitJumps() {
        return reinterpret_cast<ret17(*)(PlayLayer*)>(address17)(this);
    }

    using ret18 = PlayLayer*;
    static inline auto address18 = base+0x6b590;

    dupable static ret18 create(GJGameLevel* p0) {
        return reinterpret_cast<ret18(*)(PlayLayer*, GJGameLevel*)>(address18)(p0);
    }

    using ret19 = void;
    static inline auto address19 = base+0x7e470;

    dupable ret19 createCheckpoint() {
        return reinterpret_cast<ret19(*)(PlayLayer*)>(address19)(this);
    }

    using ret20 = void;
    static inline auto address20 = base+0x6d130;

    dupable ret20 createObjectsFromSetup(gd::string p0) {
        return reinterpret_cast<ret20(*)(PlayLayer*, gd::string)>(address20)(this, p0);
    }

    using ret21 = void;
    static inline auto address21 = base+0x76800;

    dupable ret21 createParticle(int p0,char const* p1,int p2,cocos2d::tCCPositionType p3) {
        return reinterpret_cast<ret21(*)(PlayLayer*, int, char const*, int, cocos2d::tCCPositionType)>(address21)(this, p0, p1, p2, p3);
    }

    using ret22 = void;
    static inline auto address22 = base+0x7e070;

    dupable ret22 currencyWillExit(CurrencyRewardLayer* p0) {
        return reinterpret_cast<ret22(*)(PlayLayer*, CurrencyRewardLayer*)>(address22)(this, p0);
    }

    using ret23 = void;
    static inline auto address23 = base+0x7e050;

    dupable ret23 delayedResetLevel() {
        return reinterpret_cast<ret23(*)(PlayLayer*)>(address23)(this);
    }

    using ret24 = void;
    static inline auto address24 = base+0x7ab80;

    dupable ret24 destroyPlayer(PlayerObject* p0,GameObject* p1) {
        return reinterpret_cast<ret24(*)(PlayLayer*, PlayerObject*, GameObject*)>(address24)(this, p0, p1);
    }

    using ret25 = void;
    static inline auto address25 = base+0x7e0b0;

    dupable ret25 dialogClosed(DialogLayer* p0) {
        return reinterpret_cast<ret25(*)(PlayLayer*, DialogLayer*)>(address25)(this, p0);
    }

    using ret26 = void;
    static inline auto address26 = base+0x7d160;

    dupable ret26 draw() {
        return reinterpret_cast<ret26(*)(PlayLayer*)>(address26)(this);
    }

    using ret27 = void;
    static inline auto address27 = base+0x7d6a0;

    dupable ret27 enterDualMode(GameObject* p0,bool p1) {
        return reinterpret_cast<ret27(*)(PlayLayer*, GameObject*, bool)>(address27)(this, p0, p1);
    }

    using ret28 = void;
    static inline auto address28 = base+0x7dd40;

    dupable ret28 exitAirMode() {
        return reinterpret_cast<ret28(*)(PlayLayer*)>(address28)(this);
    }

    using ret29 = void;
    static inline auto address29 = base+0x7dd80;

    dupable ret29 exitBirdMode(PlayerObject* p0) {
        return reinterpret_cast<ret29(*)(PlayLayer*, PlayerObject*)>(address29)(this, p0);
    }

    using ret30 = void;
    static inline auto address30 = base+0x7ddd0;

    dupable ret30 exitDartMode(PlayerObject* p0) {
        return reinterpret_cast<ret30(*)(PlayLayer*, PlayerObject*)>(address30)(this, p0);
    }

    using ret31 = void;
    static inline auto address31 = base+0x7dcf0;

    dupable ret31 exitFlyMode(PlayerObject* p0) {
        return reinterpret_cast<ret31(*)(PlayLayer*, PlayerObject*)>(address31)(this, p0);
    }

    using ret32 = void;
    static inline auto address32 = base+0x7de20;

    dupable ret32 exitRobotMode(PlayerObject* p0) {
        return reinterpret_cast<ret32(*)(PlayLayer*, PlayerObject*)>(address32)(this, p0);
    }

    using ret33 = void;
    static inline auto address33 = base+0x7de60;

    dupable ret33 exitRollMode(PlayerObject* p0) {
        return reinterpret_cast<ret33(*)(PlayLayer*, PlayerObject*)>(address33)(this, p0);
    }

    using ret34 = void;
    static inline auto address34 = base+0x7de40;

    dupable ret34 exitSpiderMode(PlayerObject* p0) {
        return reinterpret_cast<ret34(*)(PlayLayer*, PlayerObject*)>(address34)(this, p0);
    }

    using ret35 = void;
    static inline auto address35 = base+0x7e150;

    dupable ret35 flipFinished() {
        return reinterpret_cast<ret35(*)(PlayLayer*)>(address35)(this);
    }

    using ret36 = void;
    static inline auto address36 = base+0x7cd10;

    dupable ret36 flipGravity(PlayerObject* p0,bool p1,bool p2) {
        return reinterpret_cast<ret36(*)(PlayLayer*, PlayerObject*, bool, bool)>(address36)(this, p0, p1, p2);
    }

    using ret37 = void;
    static inline auto address37 = base+0x76130;

    dupable ret37 flipObjects() {
        return reinterpret_cast<ret37(*)(PlayLayer*)>(address37)(this);
    }

    using ret38 = void;
    static inline auto address38 = base+0x7f8e0;

    dupable ret38 fullReset() {
        return reinterpret_cast<ret38(*)(PlayLayer*)>(address38)(this);
    }

    using ret39 = void;
    static inline auto address39 = base+0x7f840;

    dupable ret39 getLastCheckpoint() {
        return reinterpret_cast<ret39(*)(PlayLayer*)>(address39)(this);
    }

    using ret40 = void;
    static inline auto address40 = base+0x7b4e0;

    dupable ret40 getMaxPortalY() {
        return reinterpret_cast<ret40(*)(PlayLayer*)>(address40)(this);
    }

    using ret41 = void;
    static inline auto address41 = base+0x7b550;

    dupable ret41 getMinPortalY() {
        return reinterpret_cast<ret41(*)(PlayLayer*)>(address41)(this);
    }

    using ret42 = void;
    static inline auto address42 = base+0x7e9d0;

    dupable ret42 getObjectsState() {
        return reinterpret_cast<ret42(*)(PlayLayer*)>(address42)(this);
    }

    using ret43 = void;
    static inline auto address43 = base+0x7dcc0;

    dupable ret43 getOtherPlayer(PlayerObject* p0) {
        return reinterpret_cast<ret43(*)(PlayLayer*, PlayerObject*)>(address43)(this, p0);
    }

    using ret44 = void;
    static inline auto address44 = base+0x764d0;

    dupable ret44 getParticleKey(int p0,char const* p1,int p2,cocos2d::tCCPositionType p3) {
        return reinterpret_cast<ret44(*)(PlayLayer*, int, char const*, int, cocos2d::tCCPositionType)>(address44)(this, p0, p1, p2, p3);
    }

    using ret45 = void;
    static inline auto address45 = base+0x767b0;

    dupable ret45 getParticleKey2(gd::string p0) {
        return reinterpret_cast<ret45(*)(PlayLayer*, gd::string)>(address45)(this, p0);
    }

    using ret46 = void;
    static inline auto address46 = base+0x7c2a0;

    dupable ret46 getRelativeMod(cocos2d::CCPoint p0,float p1,float p2,float p3) {
        return reinterpret_cast<ret46(*)(PlayLayer*, cocos2d::CCPoint, float, float, float)>(address46)(this, p0, p1, p2, p3);
    }

    using ret47 = void;
    static inline auto address47 = base+0x778e0;

    dupable ret47 getTempMilliTime() {
        return reinterpret_cast<ret47(*)(PlayLayer*)>(address47)(this);
    }

    using ret48 = void;
    static inline auto address48 = base+0x7cec0;

    dupable ret48 gravityEffectFinished() {
        return reinterpret_cast<ret48(*)(PlayLayer*)>(address48)(this);
    }

    using ret49 = void;
    static inline auto address49 = base+0x7cee0;

    dupable ret49 hasItem(int p0) {
        return reinterpret_cast<ret49(*)(PlayLayer*, int)>(address49)(this, p0);
    }

    using ret50 = void;
    static inline auto address50 = base+0x77510;

    dupable ret50 hasUniqueCoin(GameObject* p0) {
        return reinterpret_cast<ret50(*)(PlayLayer*, GameObject*)>(address50)(this, p0);
    }

    using ret51 = void;
    static inline auto address51 = base+0x7ff40;

    dupable ret51 incrementJumps() {
        return reinterpret_cast<ret51(*)(PlayLayer*)>(address51)(this);
    }

    using ret52 = bool;
    static inline auto address52 = base+0x6b5f0;

    dupable ret52 init(GJGameLevel* p0) {
        return reinterpret_cast<ret52(*)(PlayLayer*, GJGameLevel*)>(address52)(this, p0);
    }

    using ret53 = void;
    static inline auto address53 = base+0x76100;

    dupable ret53 isFlipping() {
        return reinterpret_cast<ret53(*)(PlayLayer*)>(address53)(this);
    }

    using ret54 = void;
    static inline auto address54 = base+0x72b80;

    dupable ret54 levelComplete() {
        return reinterpret_cast<ret54(*)(PlayLayer*)>(address54)(this);
    }

    using ret55 = void;
    static inline auto address55 = base+0x75cc0;

    dupable ret55 lightningFlash(cocos2d::CCPoint p0,cocos2d::CCPoint p1,cocos2d::_ccColor3B p2,float p3,float p4,int p5,bool p6,float p7) {
        return reinterpret_cast<ret55(*)(PlayLayer*, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, int, bool, float)>(address55)(this, p0, p1, p2, p3, p4, p5, p6, p7);
    }

    using ret56 = void;
    static inline auto address56 = base+0x75bf0;

    dupable ret56 lightningFlash(cocos2d::CCPoint p0,cocos2d::_ccColor3B p1) {
        return reinterpret_cast<ret56(*)(PlayLayer*, cocos2d::CCPoint, cocos2d::_ccColor3B)>(address56)(this, p0, p1);
    }

    using ret57 = void;
    static inline auto address57 = base+0x6ef30;

    dupable ret57 loadDefaultColors() {
        return reinterpret_cast<ret57(*)(PlayLayer*)>(address57)(this);
    }

    using ret58 = void;
    static inline auto address58 = base+0x7f000;

    dupable ret58 loadFromCheckpoint(CheckpointObject* p0) {
        return reinterpret_cast<ret58(*)(PlayLayer*, CheckpointObject*)>(address58)(this, p0);
    }

    using ret59 = void;
    static inline auto address59 = base+0x7efc0;

    dupable ret59 loadLastCheckpoint() {
        return reinterpret_cast<ret59(*)(PlayLayer*)>(address59)(this);
    }

    using ret60 = void;
    static inline auto address60 = base+0x7f3d0;

    dupable ret60 loadSavedObjectsState(gd::string p0) {
        return reinterpret_cast<ret60(*)(PlayLayer*, gd::string)>(address60)(this, p0);
    }

    using ret61 = void;
    static inline auto address61 = base+0x7ef60;

    dupable ret61 markCheckpoint() {
        return reinterpret_cast<ret61(*)(PlayLayer*)>(address61)(this);
    }

    using ret62 = void;
    static inline auto address62 = base+0x7c980;

    dupable ret62 moveCameraToPos(cocos2d::CCPoint p0) {
        return reinterpret_cast<ret62(*)(PlayLayer*, cocos2d::CCPoint)>(address62)(this, p0);
    }

    using ret63 = void;
    static inline auto address63 = base+0x806e0;

    dupable ret63 onEnterTransitionDidFinish() {
        return reinterpret_cast<ret63(*)(PlayLayer*)>(address63)(this);
    }

    using ret64 = void;
    static inline auto address64 = base+0x80710;

    dupable ret64 onExit() {
        return reinterpret_cast<ret64(*)(PlayLayer*)>(address64)(this);
    }

    using ret65 = void;
    static inline auto address65 = base+0x72710;

    dupable ret65 onQuit() {
        return reinterpret_cast<ret65(*)(PlayLayer*)>(address65)(this);
    }

    using ret66 = void;
    static inline auto address66 = base+0x6dad0;

    dupable ret66 optimizeColorGroups() {
        return reinterpret_cast<ret66(*)(PlayLayer*)>(address66)(this);
    }

    using ret67 = void;
    static inline auto address67 = base+0x6dc20;

    dupable ret67 optimizeOpacityGroups() {
        return reinterpret_cast<ret67(*)(PlayLayer*)>(address67)(this);
    }

    using ret68 = void;
    static inline auto address68 = base+0x6dd70;

    dupable ret68 optimizeSaveRequiredGroups() {
        return reinterpret_cast<ret68(*)(PlayLayer*)>(address68)(this);
    }

    using ret69 = void;
    static inline auto address69 = base+0x802d0;

    dupable ret69 pauseGame(bool p0) {
        return reinterpret_cast<ret69(*)(PlayLayer*, bool)>(address69)(this, p0);
    }

    using ret70 = void;
    static inline auto address70 = base+0x7c1d0;

    dupable ret70 pickupItem(GameObject* p0) {
        return reinterpret_cast<ret70(*)(PlayLayer*, GameObject*)>(address70)(this, p0);
    }

    using ret71 = void;
    static inline auto address71 = base+0x75930;

    dupable ret71 playAnimationCommand(int p0,int p1) {
        return reinterpret_cast<ret71(*)(PlayLayer*, int, int)>(address71)(this, p0, p1);
    }

    using ret72 = void;
    static inline auto address72 = base+0x759a0;

    dupable ret72 playEndAnimationToPos(cocos2d::CCPoint p0) {
        return reinterpret_cast<ret72(*)(PlayLayer*, cocos2d::CCPoint)>(address72)(this, p0);
    }

    using ret73 = void;
    static inline auto address73 = base+0x7d1d0;

    dupable ret73 playExitDualEffect(PlayerObject* p0) {
        return reinterpret_cast<ret73(*)(PlayLayer*, PlayerObject*)>(address73)(this, p0);
    }

    using ret74 = void;
    static inline auto address74 = base+0x75e50;

    dupable ret74 playFlashEffect(float p0,int p1,float p2) {
        return reinterpret_cast<ret74(*)(PlayLayer*, float, int, float)>(address74)(this, p0, p1, p2);
    }

    using ret75 = void;
    static inline auto address75 = base+0x7b5a0;

    dupable ret75 playGravityEffect(bool p0) {
        return reinterpret_cast<ret75(*)(PlayLayer*, bool)>(address75)(this, p0);
    }

    using ret76 = void;
    static inline auto address76 = base+0x77030;

    dupable ret76 playSpeedParticle(float p0) {
        return reinterpret_cast<ret76(*)(PlayLayer*, float)>(address76)(this, p0);
    }

    using ret77 = void;
    static inline auto address77 = base+0x7b820;

    dupable ret77 playerWillSwitchMode(PlayerObject* p0,GameObject* p1) {
        return reinterpret_cast<ret77(*)(PlayLayer*, PlayerObject*, GameObject*)>(address77)(this, p0, p1);
    }

    using ret78 = void;
    static inline auto address78 = base+0x7fc00;

    dupable ret78 prepareSpawnObjects() {
        return reinterpret_cast<ret78(*)(PlayLayer*)>(address78)(this);
    }

    using ret79 = void;
    static inline auto address79 = base+0x735c0;

    dupable ret79 processItems() {
        return reinterpret_cast<ret79(*)(PlayLayer*)>(address79)(this);
    }

    using ret80 = void;
    static inline auto address80 = base+0x7a7c0;

    dupable ret80 processLoadedMoveActions() {
        return reinterpret_cast<ret80(*)(PlayLayer*)>(address80)(this);
    }

    using ret81 = void;
    static inline auto address81 = base+0x7e190;

    dupable ret81 recordAction(bool p0,PlayerObject* p1) {
        return reinterpret_cast<ret81(*)(PlayLayer*, bool, PlayerObject*)>(address81)(this, p0, p1);
    }

    using ret82 = void;
    static inline auto address82 = base+0x77620;

    dupable ret82 registerActiveObject(GameObject* p0) {
        return reinterpret_cast<ret82(*)(PlayLayer*, GameObject*)>(address82)(this, p0);
    }

    using ret83 = void;
    static inline auto address83 = base+0x777b0;

    dupable ret83 registerStateObject(GameObject* p0) {
        return reinterpret_cast<ret83(*)(PlayLayer*, GameObject*)>(address83)(this, p0);
    }

    using ret84 = void;
    static inline auto address84 = base+0x727b0;

    dupable ret84 removeAllObjects() {
        return reinterpret_cast<ret84(*)(PlayLayer*)>(address84)(this);
    }

    using ret85 = void;
    static inline auto address85 = base+0x77750;

    dupable ret85 removeFromGroupOld(GameObject* p0) {
        return reinterpret_cast<ret85(*)(PlayLayer*, GameObject*)>(address85)(this, p0);
    }

    using ret86 = void;
    static inline auto address86 = base+0x7f870;

    dupable ret86 removeLastCheckpoint() {
        return reinterpret_cast<ret86(*)(PlayLayer*)>(address86)(this);
    }

    using ret87 = void;
    static inline auto address87 = base+0x7d630;

    dupable ret87 removePlayer2() {
        return reinterpret_cast<ret87(*)(PlayLayer*)>(address87)(this);
    }

    using ret88 = void;
    static inline auto address88 = base+0x71c50;

    dupable ret88 resetLevel() {
        return reinterpret_cast<ret88(*)(PlayLayer*)>(address88)(this);
    }

    using ret89 = void;
    static inline auto address89 = base+0x80480;

    dupable ret89 resume() {
        return reinterpret_cast<ret89(*)(PlayLayer*)>(address89)(this);
    }

    using ret90 = void;
    static inline auto address90 = base+0x80400;

    dupable ret90 resumeAndRestart() {
        return reinterpret_cast<ret90(*)(PlayLayer*)>(address90)(this);
    }

    using ret91 = void;
    static inline auto address91 = base+0x78750;

    dupable ret91 saveRecordAction(bool p0,PlayerObject* p1) {
        return reinterpret_cast<ret91(*)(PlayLayer*, bool, PlayerObject*)>(address91)(this, p0, p1);
    }

    using ret92 = void;
    static inline auto address92 = base+0x6b500;

    dupable ret92 scene(GJGameLevel* p0) {
        return reinterpret_cast<ret92(*)(PlayLayer*, GJGameLevel*)>(address92)(this, p0);
    }

    using ret93 = void;
    static inline auto address93 = base+0x6f560;

    dupable ret93 setupLevelStart(LevelSettingsObject* p0) {
        return reinterpret_cast<ret93(*)(PlayLayer*, LevelSettingsObject*)>(address93)(this, p0);
    }

    using ret94 = void;
    static inline auto address94 = base+0x7e1e0;

    dupable ret94 setupReplay(gd::string p0) {
        return reinterpret_cast<ret94(*)(PlayLayer*, gd::string)>(address94)(this, p0);
    }

    using ret95 = void;
    static inline auto address95 = base+0x744a0;

    dupable ret95 shakeCamera(float p0,float p1,float p2) {
        return reinterpret_cast<ret95(*)(PlayLayer*, float, float, float)>(address95)(this, p0, p1, p2);
    }

    using ret96 = void;
    static inline auto address96 = base+0x771b0;

    dupable ret96 shouldBlend(int p0) {
        return reinterpret_cast<ret96(*)(PlayLayer*, int)>(address96)(this, p0);
    }

    using ret97 = void;
    static inline auto address97 = base+0x738e0;

    dupable ret97 showCompleteEffect() {
        return reinterpret_cast<ret97(*)(PlayLayer*)>(address97)(this);
    }

    using ret98 = void;
    static inline auto address98 = base+0x73be0;

    dupable ret98 showCompleteText() {
        return reinterpret_cast<ret98(*)(PlayLayer*)>(address98)(this);
    }

    using ret99 = void;
    static inline auto address99 = base+0x74450;

    dupable ret99 showEndLayer() {
        return reinterpret_cast<ret99(*)(PlayLayer*)>(address99)(this);
    }

    using ret100 = void;
    static inline auto address100 = base+0x7deb0;

    dupable ret100 showHint() {
        return reinterpret_cast<ret100(*)(PlayLayer*)>(address100)(this);
    }

    using ret101 = void;
    static inline auto address101 = base+0x74580;

    dupable ret101 showNewBest(bool p0,int p1,int p2,bool p3,bool p4,bool p5) {
        return reinterpret_cast<ret101(*)(PlayLayer*, bool, int, int, bool, bool, bool)>(address101)(this, p0, p1, p2, p3, p4, p5);
    }

    using ret102 = void;
    static inline auto address102 = base+0x75ba0;

    dupable ret102 showRetryLayer() {
        return reinterpret_cast<ret102(*)(PlayLayer*)>(address102)(this);
    }

    using ret103 = void;
    static inline auto address103 = base+0x6df00;

    dupable ret103 showTwoPlayerGuide() {
        return reinterpret_cast<ret103(*)(PlayLayer*)>(address103)(this);
    }

    using ret104 = void;
    static inline auto address104 = base+0x6d9e0;

    dupable ret104 sortGroups() {
        return reinterpret_cast<ret104(*)(PlayLayer*)>(address104)(this);
    }

    using ret105 = void;
    static inline auto address105 = base+0x73820;

    dupable ret105 spawnCircle() {
        return reinterpret_cast<ret105(*)(PlayLayer*)>(address105)(this);
    }

    using ret106 = void;
    static inline auto address106 = base+0x74200;

    dupable ret106 spawnFirework() {
        return reinterpret_cast<ret106(*)(PlayLayer*)>(address106)(this);
    }

    using ret107 = void;
    static inline auto address107 = base+0x76330;

    dupable ret107 spawnParticle(char const* p0,int p1,cocos2d::tCCPositionType p2,cocos2d::CCPoint p3) {
        return reinterpret_cast<ret107(*)(PlayLayer*, char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint)>(address107)(this, p0, p1, p2, p3);
    }

    using ret108 = void;
    static inline auto address108 = base+0x7d170;

    dupable ret108 spawnPlayer2() {
        return reinterpret_cast<ret108(*)(PlayLayer*)>(address108)(this);
    }

    using ret109 = void;
    static inline auto address109 = base+0x726b0;

    dupable ret109 startGame() {
        return reinterpret_cast<ret109(*)(PlayLayer*)>(address109)(this);
    }

    using ret110 = void;
    static inline auto address110 = base+0x72910;

    dupable ret110 startMusic() {
        return reinterpret_cast<ret110(*)(PlayLayer*)>(address110)(this);
    }

    using ret111 = void;
    static inline auto address111 = base+0x7fec0;

    dupable ret111 startRecording() {
        return reinterpret_cast<ret111(*)(PlayLayer*)>(address111)(this);
    }

    using ret112 = void;
    static inline auto address112 = base+0x7fed0;

    dupable ret112 startRecordingDelayed() {
        return reinterpret_cast<ret112(*)(PlayLayer*)>(address112)(this);
    }

    using ret113 = void;
    static inline auto address113 = base+0x75900;

    dupable ret113 stopCameraShake() {
        return reinterpret_cast<ret113(*)(PlayLayer*)>(address113)(this);
    }

    using ret114 = void;
    static inline auto address114 = base+0x6d090;

    dupable ret114 stopRecording() {
        return reinterpret_cast<ret114(*)(PlayLayer*)>(address114)(this);
    }

    using ret115 = void;
    static inline auto address115 = base+0x7ef10;

    dupable ret115 storeCheckpoint(CheckpointObject* p0) {
        return reinterpret_cast<ret115(*)(PlayLayer*, CheckpointObject*)>(address115)(this, p0);
    }

    using ret116 = void;
    static inline auto address116 = base+0x7baf0;

    dupable ret116 switchToFlyMode(PlayerObject* p0,GameObject* p1,bool p2,int p3) {
        return reinterpret_cast<ret116(*)(PlayLayer*, PlayerObject*, GameObject*, bool, int)>(address116)(this, p0, p1, p2, p3);
    }

    using ret117 = void;
    static inline auto address117 = base+0x7bc80;

    dupable ret117 switchToRobotMode(PlayerObject* p0,GameObject* p1,bool p2) {
        return reinterpret_cast<ret117(*)(PlayLayer*, PlayerObject*, GameObject*, bool)>(address117)(this, p0, p1, p2);
    }

    using ret118 = void;
    static inline auto address118 = base+0x7bbe0;

    dupable ret118 switchToRollMode(PlayerObject* p0,GameObject* p1,bool p2) {
        return reinterpret_cast<ret118(*)(PlayLayer*, PlayerObject*, GameObject*, bool)>(address118)(this, p0, p1, p2);
    }

    using ret119 = void;
    static inline auto address119 = base+0x7bd20;

    dupable ret119 switchToSpiderMode(PlayerObject* p0,GameObject* p1,bool p2) {
        return reinterpret_cast<ret119(*)(PlayLayer*, PlayerObject*, GameObject*, bool)>(address119)(this, p0, p1, p2);
    }

    using ret120 = void;
    static inline auto address120 = base+0x7d120;

    dupable ret120 timeForXPos(float p0) {
        return reinterpret_cast<ret120(*)(PlayLayer*, float)>(address120)(this, p0);
    }

    using ret121 = void;
    static inline auto address121 = base+0x293eb0;

    dupable ret121 timeForXPos2(float p0,bool p1) {
        return reinterpret_cast<ret121(*)(PlayLayer*, float, bool)>(address121)(this, p0, p1);
    }

    using ret122 = void;
    static inline auto address122 = base+0x7fe80;

    dupable ret122 toggleBGEffectVisibility(bool p0) {
        return reinterpret_cast<ret122(*)(PlayLayer*, bool)>(address122)(this, p0);
    }

    using ret123 = void;
    static inline auto address123 = base+0x7bf90;

    dupable ret123 toggleDualMode(GameObject* p0,bool p1,PlayerObject* p2,bool p3) {
        return reinterpret_cast<ret123(*)(PlayLayer*, GameObject*, bool, PlayerObject*, bool)>(address123)(this, p0, p1, p2, p3);
    }

    using ret124 = void;
    static inline auto address124 = base+0x7bdc0;

    dupable ret124 toggleFlipped(bool p0,bool p1) {
        return reinterpret_cast<ret124(*)(PlayLayer*, bool, bool)>(address124)(this, p0, p1);
    }

    using ret125 = void;
    static inline auto address125 = base+0x7fe40;

    dupable ret125 toggleGhostEffect(int p0) {
        return reinterpret_cast<ret125(*)(PlayLayer*, int)>(address125)(this, p0);
    }

    using ret126 = void;
    static inline auto address126 = base+0x70e00;

    dupable ret126 toggleGlitter(bool p0) {
        return reinterpret_cast<ret126(*)(PlayLayer*, bool)>(address126)(this, p0);
    }

    using ret127 = void;
    static inline auto address127 = base+0x7f9e0;

    dupable ret127 togglePracticeMode(bool p0) {
        return reinterpret_cast<ret127(*)(PlayLayer*, bool)>(address127)(this, p0);
    }

    using ret128 = void;
    static inline auto address128 = base+0x6eeb0;

    dupable ret128 toggleProgressbar() {
        return reinterpret_cast<ret128(*)(PlayLayer*)>(address128)(this);
    }

    using ret129 = void;
    static inline auto address129 = base+0x7fe00;

    dupable ret129 tryStartRecord() {
        return reinterpret_cast<ret129(*)(PlayLayer*)>(address129)(this);
    }

    using ret130 = void;
    static inline auto address130 = base+0x76e00;

    dupable ret130 unclaimParticle(char const* p0,cocos2d::CCParticleSystemQuad* p1) {
        return reinterpret_cast<ret130(*)(PlayLayer*, char const*, cocos2d::CCParticleSystemQuad*)>(address130)(this, p0, p1);
    }

    using ret131 = void;
    static inline auto address131 = base+0x77660;

    dupable ret131 unregisterActiveObject(GameObject* p0) {
        return reinterpret_cast<ret131(*)(PlayLayer*, GameObject*)>(address131)(this, p0);
    }

    using ret132 = void;
    static inline auto address132 = base+0x777f0;

    dupable ret132 unregisterStateObject(GameObject* p0) {
        return reinterpret_cast<ret132(*)(PlayLayer*, GameObject*)>(address132)(this, p0);
    }

    using ret133 = void;
    static inline auto address133 = base+0x77900;

    dupable ret133 update(float p0) {
        return reinterpret_cast<ret133(*)(PlayLayer*, float)>(address133)(this, p0);
    }

    using ret134 = void;
    static inline auto address134 = base+0x7fcd0;

    dupable ret134 updateAttempts() {
        return reinterpret_cast<ret134(*)(PlayLayer*)>(address134)(this);
    }

    using ret135 = void;
    static inline auto address135 = base+0x6e2b0;

    dupable ret135 updateCamera(float p0) {
        return reinterpret_cast<ret135(*)(PlayLayer*, float)>(address135)(this, p0);
    }

    using ret136 = void;
    static inline auto address136 = base+0x7c7f0;

    dupable ret136 updateColor(cocos2d::_ccColor3B p0,float p1,int p2,bool p3,float p4,cocos2d::_ccHSVValue p5,int p6,bool p7,int p8,EffectGameObject* p9) {
        return reinterpret_cast<ret136(*)(PlayLayer*, cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)>(address136)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
    }

    using ret137 = void;
    static inline auto address137 = base+0x7caa0;

    dupable ret137 updateDualGround(PlayerObject* p0,int p1,bool p2) {
        return reinterpret_cast<ret137(*)(PlayLayer*, PlayerObject*, int, bool)>(address137)(this, p0, p1, p2);
    }

    using ret138 = void;
    static inline auto address138 = base+0x7a6d0;

    dupable ret138 updateEffectPositions() {
        return reinterpret_cast<ret138(*)(PlayLayer*)>(address138)(this);
    }

    using ret139 = void;
    static inline auto address139 = base+0x6f1e0;

    dupable ret139 updateLevelColors() {
        return reinterpret_cast<ret139(*)(PlayLayer*)>(address139)(this);
    }

    using ret140 = void;
    static inline auto address140 = base+0x7a720;

    dupable ret140 updateMoveObjectsLastPosition() {
        return reinterpret_cast<ret140(*)(PlayLayer*)>(address140)(this);
    }

    using ret141 = void;
    static inline auto address141 = base+0x6ed70;

    dupable ret141 updateProgressbar() {
        return reinterpret_cast<ret141(*)(PlayLayer*)>(address141)(this);
    }

    using ret142 = void;
    static inline auto address142 = base+0x78b60;

    dupable ret142 updateReplay(float p0) {
        return reinterpret_cast<ret142(*)(PlayLayer*, float)>(address142)(this, p0);
    }

    using ret143 = void;
    static inline auto address143 = base+0x786f0;

    dupable ret143 updateTimeMod(float p0,bool p1) {
        return reinterpret_cast<ret143(*)(PlayLayer*, float, bool)>(address143)(this, p0, p1);
    }

    using ret144 = void;
    static inline auto address144 = base+0x7ffb0;

    dupable ret144 updateTweenAction(float p0,char const* p1) {
        return reinterpret_cast<ret144(*)(PlayLayer*, float, char const*)>(address144)(this, p0, p1);
    }

    using ret145 = void;
    static inline auto address145 = base+0x6fb90;

    dupable ret145 updateVisibility() {
        return reinterpret_cast<ret145(*)(PlayLayer*)>(address145)(this);
    }

    using ret146 = void;
    static inline auto address146 = base+0x7fcb0;

    dupable ret146 vfDChk() {
        return reinterpret_cast<ret146(*)(PlayLayer*)>(address146)(this);
    }

    using ret147 = void;
    static inline auto address147 = base+0x75ef0;

    dupable ret147 visit() {
        return reinterpret_cast<ret147(*)(PlayLayer*)>(address147)(this);
    }

    using ret148 = void;
    static inline auto address148 = base+0x761f0;

    dupable ret148 visitWithColorFlash() {
        return reinterpret_cast<ret148(*)(PlayLayer*)>(address148)(this);
    }

    using ret149 = void;
    static inline auto address149 = base+0x7b9e0;

    dupable ret149 willSwitchToMode(int p0,PlayerObject* p1) {
        return reinterpret_cast<ret149(*)(PlayLayer*, int, PlayerObject*)>(address149)(this, p0, p1);
    }

    using ret150 = void;
    static inline auto address150 = base+0x7d140;

    dupable ret150 xPosForTime(float p0) {
        return reinterpret_cast<ret150(*)(PlayLayer*, float)>(address150)(this, p0);
    }

    using ret151 = void;
    static inline auto address151 = base+0x6b090;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address151)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(PlayLayer*, CCCircleWave*))(&$PlayLayer::addCircle) != (ret0(D::*)(CCCircleWave*))(&D::addCircle)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(CCCircleWave*))(&D::addCircle)));
        }

        if constexpr((ret1(*)(PlayLayer*, GameObject*))(&$PlayLayer::addObject) != (ret1(D::*)(GameObject*))(&D::addObject)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(GameObject*))(&D::addObject)));
        }

        if constexpr((ret2(*)(PlayLayer*, GameObject*))(&$PlayLayer::addToGroupOld) != (ret2(D::*)(GameObject*))(&D::addToGroupOld)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(GameObject*))(&D::addToGroupOld)));
        }

        if constexpr((ret3(*)(PlayLayer*, GameObject*))(&$PlayLayer::addToSpeedObjects) != (ret3(D::*)(GameObject*))(&D::addToSpeedObjects)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(GameObject*))(&D::addToSpeedObjects)));
        }

        if constexpr((ret4(*)(PlayLayer*, GameObject*, float, bool))(&$PlayLayer::animateInDualGround) != (ret4(D::*)(GameObject*, float, bool))(&D::animateInDualGround)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(GameObject*, float, bool))(&D::animateInDualGround)));
        }

        if constexpr((ret5(*)(PlayLayer*, bool))(&$PlayLayer::animateInGround) != (ret5(D::*)(bool))(&D::animateInGround)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)(bool))(&D::animateInGround)));
        }

        if constexpr((ret6(*)(PlayLayer*, bool))(&$PlayLayer::animateOutGround) != (ret6(D::*)(bool))(&D::animateOutGround)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)(bool))(&D::animateOutGround)));
        }

        if constexpr((ret7(*)(PlayLayer*))(&$PlayLayer::animateOutGroundFinished) != (ret7(D::*)())(&D::animateOutGroundFinished)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)())(&D::animateOutGroundFinished)));
        }

        if constexpr((ret8(*)(PlayLayer*, GameObject*))(&$PlayLayer::applyEnterEffect) != (ret8(D::*)(GameObject*))(&D::applyEnterEffect)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfNonVirtual((ret8(D::*)(GameObject*))(&D::applyEnterEffect)));
        }

        if constexpr((ret9(*)(PlayLayer*, EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*))(&$PlayLayer::calculateColorValues) != (ret9(D::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*))(&D::calculateColorValues)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfVirtual((ret9(D::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*))(&D::calculateColorValues)));
        }

        if constexpr((ret10(*)(PlayLayer*, float, float, float))(&$PlayLayer::cameraMoveX) != (ret10(D::*)(float, float, float))(&D::cameraMoveX)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfNonVirtual((ret10(D::*)(float, float, float))(&D::cameraMoveX)));
        }

        if constexpr((ret11(*)(PlayLayer*, float, float, float))(&$PlayLayer::cameraMoveY) != (ret11(D::*)(float, float, float))(&D::cameraMoveY)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfNonVirtual((ret11(D::*)(float, float, float))(&D::cameraMoveY)));
        }

        if constexpr((ret12(*)(PlayLayer*, PlayerObject*, float))(&$PlayLayer::checkCollisions) != (ret12(D::*)(PlayerObject*, float))(&D::checkCollisions)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfNonVirtual((ret12(D::*)(PlayerObject*, float))(&D::checkCollisions)));
        }

        if constexpr((ret13(*)(PlayLayer*, CCCircleWave*))(&$PlayLayer::circleWaveWillBeRemoved) != (ret13(D::*)(CCCircleWave*))(&D::circleWaveWillBeRemoved)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfNonVirtual((ret13(D::*)(CCCircleWave*))(&D::circleWaveWillBeRemoved)));
        }

        if constexpr((ret14(*)(PlayLayer*, gd::string))(&$PlayLayer::claimParticle) != (ret14(D::*)(gd::string))(&D::claimParticle)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfNonVirtual((ret14(D::*)(gd::string))(&D::claimParticle)));
        }

        if constexpr((ret15(*)(PlayLayer*))(&$PlayLayer::clearPickedUpItems) != (ret15(D::*)())(&D::clearPickedUpItems)) {
            modContainer.registerHookEnable(address15, FunctionScrapper::addressOfNonVirtual((ret15(D::*)())(&D::clearPickedUpItems)));
        }

        if constexpr((ret16(*)(PlayLayer*, int, cocos2d::_ccColor3B))(&$PlayLayer::colorObject) != (ret16(D::*)(int, cocos2d::_ccColor3B))(&D::colorObject)) {
            modContainer.registerHookEnable(address16, FunctionScrapper::addressOfNonVirtual((ret16(D::*)(int, cocos2d::_ccColor3B))(&D::colorObject)));
        }

        if constexpr((ret17(*)(PlayLayer*))(&$PlayLayer::commitJumps) != (ret17(D::*)())(&D::commitJumps)) {
            modContainer.registerHookEnable(address17, FunctionScrapper::addressOfNonVirtual((ret17(D::*)())(&D::commitJumps)));
        }

        if constexpr((ret18(*)(PlayLayer*, GJGameLevel*))(&$PlayLayer::create) != (ret18(D::*)(GJGameLevel*))(&D::create)) {
            modContainer.registerHookEnable(address18, FunctionScrapper::addressOfNonVirtual((ret18(D::*)(GJGameLevel*))(&D::create)));
        }

        if constexpr((ret19(*)(PlayLayer*))(&$PlayLayer::createCheckpoint) != (ret19(D::*)())(&D::createCheckpoint)) {
            modContainer.registerHookEnable(address19, FunctionScrapper::addressOfNonVirtual((ret19(D::*)())(&D::createCheckpoint)));
        }

        if constexpr((ret20(*)(PlayLayer*, gd::string))(&$PlayLayer::createObjectsFromSetup) != (ret20(D::*)(gd::string))(&D::createObjectsFromSetup)) {
            modContainer.registerHookEnable(address20, FunctionScrapper::addressOfNonVirtual((ret20(D::*)(gd::string))(&D::createObjectsFromSetup)));
        }

        if constexpr((ret21(*)(PlayLayer*, int, char const*, int, cocos2d::tCCPositionType))(&$PlayLayer::createParticle) != (ret21(D::*)(int, char const*, int, cocos2d::tCCPositionType))(&D::createParticle)) {
            modContainer.registerHookEnable(address21, FunctionScrapper::addressOfNonVirtual((ret21(D::*)(int, char const*, int, cocos2d::tCCPositionType))(&D::createParticle)));
        }

        if constexpr((ret22(*)(PlayLayer*, CurrencyRewardLayer*))(&$PlayLayer::currencyWillExit) != (ret22(D::*)(CurrencyRewardLayer*))(&D::currencyWillExit)) {
            modContainer.registerHookEnable(address22, FunctionScrapper::addressOfNonVirtual((ret22(D::*)(CurrencyRewardLayer*))(&D::currencyWillExit)));
        }

        if constexpr((ret23(*)(PlayLayer*))(&$PlayLayer::delayedResetLevel) != (ret23(D::*)())(&D::delayedResetLevel)) {
            modContainer.registerHookEnable(address23, FunctionScrapper::addressOfNonVirtual((ret23(D::*)())(&D::delayedResetLevel)));
        }

        if constexpr((ret24(*)(PlayLayer*, PlayerObject*, GameObject*))(&$PlayLayer::destroyPlayer) != (ret24(D::*)(PlayerObject*, GameObject*))(&D::destroyPlayer)) {
            modContainer.registerHookEnable(address24, FunctionScrapper::addressOfNonVirtual((ret24(D::*)(PlayerObject*, GameObject*))(&D::destroyPlayer)));
        }

        if constexpr((ret25(*)(PlayLayer*, DialogLayer*))(&$PlayLayer::dialogClosed) != (ret25(D::*)(DialogLayer*))(&D::dialogClosed)) {
            modContainer.registerHookEnable(address25, FunctionScrapper::addressOfNonVirtual((ret25(D::*)(DialogLayer*))(&D::dialogClosed)));
        }

        if constexpr((ret26(*)(PlayLayer*))(&$PlayLayer::draw) != (ret26(D::*)())(&D::draw)) {
            modContainer.registerHookEnable(address26, FunctionScrapper::addressOfVirtual((ret26(D::*)())(&D::draw)));
        }

        if constexpr((ret27(*)(PlayLayer*, GameObject*, bool))(&$PlayLayer::enterDualMode) != (ret27(D::*)(GameObject*, bool))(&D::enterDualMode)) {
            modContainer.registerHookEnable(address27, FunctionScrapper::addressOfNonVirtual((ret27(D::*)(GameObject*, bool))(&D::enterDualMode)));
        }

        if constexpr((ret28(*)(PlayLayer*))(&$PlayLayer::exitAirMode) != (ret28(D::*)())(&D::exitAirMode)) {
            modContainer.registerHookEnable(address28, FunctionScrapper::addressOfNonVirtual((ret28(D::*)())(&D::exitAirMode)));
        }

        if constexpr((ret29(*)(PlayLayer*, PlayerObject*))(&$PlayLayer::exitBirdMode) != (ret29(D::*)(PlayerObject*))(&D::exitBirdMode)) {
            modContainer.registerHookEnable(address29, FunctionScrapper::addressOfNonVirtual((ret29(D::*)(PlayerObject*))(&D::exitBirdMode)));
        }

        if constexpr((ret30(*)(PlayLayer*, PlayerObject*))(&$PlayLayer::exitDartMode) != (ret30(D::*)(PlayerObject*))(&D::exitDartMode)) {
            modContainer.registerHookEnable(address30, FunctionScrapper::addressOfNonVirtual((ret30(D::*)(PlayerObject*))(&D::exitDartMode)));
        }

        if constexpr((ret31(*)(PlayLayer*, PlayerObject*))(&$PlayLayer::exitFlyMode) != (ret31(D::*)(PlayerObject*))(&D::exitFlyMode)) {
            modContainer.registerHookEnable(address31, FunctionScrapper::addressOfNonVirtual((ret31(D::*)(PlayerObject*))(&D::exitFlyMode)));
        }

        if constexpr((ret32(*)(PlayLayer*, PlayerObject*))(&$PlayLayer::exitRobotMode) != (ret32(D::*)(PlayerObject*))(&D::exitRobotMode)) {
            modContainer.registerHookEnable(address32, FunctionScrapper::addressOfNonVirtual((ret32(D::*)(PlayerObject*))(&D::exitRobotMode)));
        }

        if constexpr((ret33(*)(PlayLayer*, PlayerObject*))(&$PlayLayer::exitRollMode) != (ret33(D::*)(PlayerObject*))(&D::exitRollMode)) {
            modContainer.registerHookEnable(address33, FunctionScrapper::addressOfNonVirtual((ret33(D::*)(PlayerObject*))(&D::exitRollMode)));
        }

        if constexpr((ret34(*)(PlayLayer*, PlayerObject*))(&$PlayLayer::exitSpiderMode) != (ret34(D::*)(PlayerObject*))(&D::exitSpiderMode)) {
            modContainer.registerHookEnable(address34, FunctionScrapper::addressOfNonVirtual((ret34(D::*)(PlayerObject*))(&D::exitSpiderMode)));
        }

        if constexpr((ret35(*)(PlayLayer*))(&$PlayLayer::flipFinished) != (ret35(D::*)())(&D::flipFinished)) {
            modContainer.registerHookEnable(address35, FunctionScrapper::addressOfNonVirtual((ret35(D::*)())(&D::flipFinished)));
        }

        if constexpr((ret36(*)(PlayLayer*, PlayerObject*, bool, bool))(&$PlayLayer::flipGravity) != (ret36(D::*)(PlayerObject*, bool, bool))(&D::flipGravity)) {
            modContainer.registerHookEnable(address36, FunctionScrapper::addressOfVirtual((ret36(D::*)(PlayerObject*, bool, bool))(&D::flipGravity)));
        }

        if constexpr((ret37(*)(PlayLayer*))(&$PlayLayer::flipObjects) != (ret37(D::*)())(&D::flipObjects)) {
            modContainer.registerHookEnable(address37, FunctionScrapper::addressOfNonVirtual((ret37(D::*)())(&D::flipObjects)));
        }

        if constexpr((ret38(*)(PlayLayer*))(&$PlayLayer::fullReset) != (ret38(D::*)())(&D::fullReset)) {
            modContainer.registerHookEnable(address38, FunctionScrapper::addressOfNonVirtual((ret38(D::*)())(&D::fullReset)));
        }

        if constexpr((ret39(*)(PlayLayer*))(&$PlayLayer::getLastCheckpoint) != (ret39(D::*)())(&D::getLastCheckpoint)) {
            modContainer.registerHookEnable(address39, FunctionScrapper::addressOfNonVirtual((ret39(D::*)())(&D::getLastCheckpoint)));
        }

        if constexpr((ret40(*)(PlayLayer*))(&$PlayLayer::getMaxPortalY) != (ret40(D::*)())(&D::getMaxPortalY)) {
            modContainer.registerHookEnable(address40, FunctionScrapper::addressOfNonVirtual((ret40(D::*)())(&D::getMaxPortalY)));
        }

        if constexpr((ret41(*)(PlayLayer*))(&$PlayLayer::getMinPortalY) != (ret41(D::*)())(&D::getMinPortalY)) {
            modContainer.registerHookEnable(address41, FunctionScrapper::addressOfNonVirtual((ret41(D::*)())(&D::getMinPortalY)));
        }

        if constexpr((ret42(*)(PlayLayer*))(&$PlayLayer::getObjectsState) != (ret42(D::*)())(&D::getObjectsState)) {
            modContainer.registerHookEnable(address42, FunctionScrapper::addressOfNonVirtual((ret42(D::*)())(&D::getObjectsState)));
        }

        if constexpr((ret43(*)(PlayLayer*, PlayerObject*))(&$PlayLayer::getOtherPlayer) != (ret43(D::*)(PlayerObject*))(&D::getOtherPlayer)) {
            modContainer.registerHookEnable(address43, FunctionScrapper::addressOfNonVirtual((ret43(D::*)(PlayerObject*))(&D::getOtherPlayer)));
        }

        if constexpr((ret44(*)(PlayLayer*, int, char const*, int, cocos2d::tCCPositionType))(&$PlayLayer::getParticleKey) != (ret44(D::*)(int, char const*, int, cocos2d::tCCPositionType))(&D::getParticleKey)) {
            modContainer.registerHookEnable(address44, FunctionScrapper::addressOfNonVirtual((ret44(D::*)(int, char const*, int, cocos2d::tCCPositionType))(&D::getParticleKey)));
        }

        if constexpr((ret45(*)(PlayLayer*, gd::string))(&$PlayLayer::getParticleKey2) != (ret45(D::*)(gd::string))(&D::getParticleKey2)) {
            modContainer.registerHookEnable(address45, FunctionScrapper::addressOfNonVirtual((ret45(D::*)(gd::string))(&D::getParticleKey2)));
        }

        if constexpr((ret46(*)(PlayLayer*, cocos2d::CCPoint, float, float, float))(&$PlayLayer::getRelativeMod) != (ret46(D::*)(cocos2d::CCPoint, float, float, float))(&D::getRelativeMod)) {
            modContainer.registerHookEnable(address46, FunctionScrapper::addressOfNonVirtual((ret46(D::*)(cocos2d::CCPoint, float, float, float))(&D::getRelativeMod)));
        }

        if constexpr((ret47(*)(PlayLayer*))(&$PlayLayer::getTempMilliTime) != (ret47(D::*)())(&D::getTempMilliTime)) {
            modContainer.registerHookEnable(address47, FunctionScrapper::addressOfNonVirtual((ret47(D::*)())(&D::getTempMilliTime)));
        }

        if constexpr((ret48(*)(PlayLayer*))(&$PlayLayer::gravityEffectFinished) != (ret48(D::*)())(&D::gravityEffectFinished)) {
            modContainer.registerHookEnable(address48, FunctionScrapper::addressOfNonVirtual((ret48(D::*)())(&D::gravityEffectFinished)));
        }

        if constexpr((ret49(*)(PlayLayer*, int))(&$PlayLayer::hasItem) != (ret49(D::*)(int))(&D::hasItem)) {
            modContainer.registerHookEnable(address49, FunctionScrapper::addressOfNonVirtual((ret49(D::*)(int))(&D::hasItem)));
        }

        if constexpr((ret50(*)(PlayLayer*, GameObject*))(&$PlayLayer::hasUniqueCoin) != (ret50(D::*)(GameObject*))(&D::hasUniqueCoin)) {
            modContainer.registerHookEnable(address50, FunctionScrapper::addressOfNonVirtual((ret50(D::*)(GameObject*))(&D::hasUniqueCoin)));
        }

        if constexpr((ret51(*)(PlayLayer*))(&$PlayLayer::incrementJumps) != (ret51(D::*)())(&D::incrementJumps)) {
            modContainer.registerHookEnable(address51, FunctionScrapper::addressOfNonVirtual((ret51(D::*)())(&D::incrementJumps)));
        }

        if constexpr((ret52(*)(PlayLayer*, GJGameLevel*))(&$PlayLayer::init) != (ret52(D::*)(GJGameLevel*))(&D::init)) {
            modContainer.registerHookEnable(address52, FunctionScrapper::addressOfNonVirtual((ret52(D::*)(GJGameLevel*))(&D::init)));
        }

        if constexpr((ret53(*)(PlayLayer*))(&$PlayLayer::isFlipping) != (ret53(D::*)())(&D::isFlipping)) {
            modContainer.registerHookEnable(address53, FunctionScrapper::addressOfNonVirtual((ret53(D::*)())(&D::isFlipping)));
        }

        if constexpr((ret54(*)(PlayLayer*))(&$PlayLayer::levelComplete) != (ret54(D::*)())(&D::levelComplete)) {
            modContainer.registerHookEnable(address54, FunctionScrapper::addressOfNonVirtual((ret54(D::*)())(&D::levelComplete)));
        }

        if constexpr((ret55(*)(PlayLayer*, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, int, bool, float))(&$PlayLayer::lightningFlash) != (ret55(D::*)(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, int, bool, float))(&D::lightningFlash)) {
            modContainer.registerHookEnable(address55, FunctionScrapper::addressOfNonVirtual((ret55(D::*)(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, int, bool, float))(&D::lightningFlash)));
        }

        if constexpr((ret56(*)(PlayLayer*, cocos2d::CCPoint, cocos2d::_ccColor3B))(&$PlayLayer::lightningFlash) != (ret56(D::*)(cocos2d::CCPoint, cocos2d::_ccColor3B))(&D::lightningFlash)) {
            modContainer.registerHookEnable(address56, FunctionScrapper::addressOfNonVirtual((ret56(D::*)(cocos2d::CCPoint, cocos2d::_ccColor3B))(&D::lightningFlash)));
        }

        if constexpr((ret57(*)(PlayLayer*))(&$PlayLayer::loadDefaultColors) != (ret57(D::*)())(&D::loadDefaultColors)) {
            modContainer.registerHookEnable(address57, FunctionScrapper::addressOfNonVirtual((ret57(D::*)())(&D::loadDefaultColors)));
        }

        if constexpr((ret58(*)(PlayLayer*, CheckpointObject*))(&$PlayLayer::loadFromCheckpoint) != (ret58(D::*)(CheckpointObject*))(&D::loadFromCheckpoint)) {
            modContainer.registerHookEnable(address58, FunctionScrapper::addressOfNonVirtual((ret58(D::*)(CheckpointObject*))(&D::loadFromCheckpoint)));
        }

        if constexpr((ret59(*)(PlayLayer*))(&$PlayLayer::loadLastCheckpoint) != (ret59(D::*)())(&D::loadLastCheckpoint)) {
            modContainer.registerHookEnable(address59, FunctionScrapper::addressOfNonVirtual((ret59(D::*)())(&D::loadLastCheckpoint)));
        }

        if constexpr((ret60(*)(PlayLayer*, gd::string))(&$PlayLayer::loadSavedObjectsState) != (ret60(D::*)(gd::string))(&D::loadSavedObjectsState)) {
            modContainer.registerHookEnable(address60, FunctionScrapper::addressOfNonVirtual((ret60(D::*)(gd::string))(&D::loadSavedObjectsState)));
        }

        if constexpr((ret61(*)(PlayLayer*))(&$PlayLayer::markCheckpoint) != (ret61(D::*)())(&D::markCheckpoint)) {
            modContainer.registerHookEnable(address61, FunctionScrapper::addressOfNonVirtual((ret61(D::*)())(&D::markCheckpoint)));
        }

        if constexpr((ret62(*)(PlayLayer*, cocos2d::CCPoint))(&$PlayLayer::moveCameraToPos) != (ret62(D::*)(cocos2d::CCPoint))(&D::moveCameraToPos)) {
            modContainer.registerHookEnable(address62, FunctionScrapper::addressOfNonVirtual((ret62(D::*)(cocos2d::CCPoint))(&D::moveCameraToPos)));
        }

        if constexpr((ret63(*)(PlayLayer*))(&$PlayLayer::onEnterTransitionDidFinish) != (ret63(D::*)())(&D::onEnterTransitionDidFinish)) {
            modContainer.registerHookEnable(address63, FunctionScrapper::addressOfVirtual((ret63(D::*)())(&D::onEnterTransitionDidFinish)));
        }

        if constexpr((ret64(*)(PlayLayer*))(&$PlayLayer::onExit) != (ret64(D::*)())(&D::onExit)) {
            modContainer.registerHookEnable(address64, FunctionScrapper::addressOfVirtual((ret64(D::*)())(&D::onExit)));
        }

        if constexpr((ret65(*)(PlayLayer*))(&$PlayLayer::onQuit) != (ret65(D::*)())(&D::onQuit)) {
            modContainer.registerHookEnable(address65, FunctionScrapper::addressOfNonVirtual((ret65(D::*)())(&D::onQuit)));
        }

        if constexpr((ret66(*)(PlayLayer*))(&$PlayLayer::optimizeColorGroups) != (ret66(D::*)())(&D::optimizeColorGroups)) {
            modContainer.registerHookEnable(address66, FunctionScrapper::addressOfNonVirtual((ret66(D::*)())(&D::optimizeColorGroups)));
        }

        if constexpr((ret67(*)(PlayLayer*))(&$PlayLayer::optimizeOpacityGroups) != (ret67(D::*)())(&D::optimizeOpacityGroups)) {
            modContainer.registerHookEnable(address67, FunctionScrapper::addressOfNonVirtual((ret67(D::*)())(&D::optimizeOpacityGroups)));
        }

        if constexpr((ret68(*)(PlayLayer*))(&$PlayLayer::optimizeSaveRequiredGroups) != (ret68(D::*)())(&D::optimizeSaveRequiredGroups)) {
            modContainer.registerHookEnable(address68, FunctionScrapper::addressOfNonVirtual((ret68(D::*)())(&D::optimizeSaveRequiredGroups)));
        }

        if constexpr((ret69(*)(PlayLayer*, bool))(&$PlayLayer::pauseGame) != (ret69(D::*)(bool))(&D::pauseGame)) {
            modContainer.registerHookEnable(address69, FunctionScrapper::addressOfNonVirtual((ret69(D::*)(bool))(&D::pauseGame)));
        }

        if constexpr((ret70(*)(PlayLayer*, GameObject*))(&$PlayLayer::pickupItem) != (ret70(D::*)(GameObject*))(&D::pickupItem)) {
            modContainer.registerHookEnable(address70, FunctionScrapper::addressOfNonVirtual((ret70(D::*)(GameObject*))(&D::pickupItem)));
        }

        if constexpr((ret71(*)(PlayLayer*, int, int))(&$PlayLayer::playAnimationCommand) != (ret71(D::*)(int, int))(&D::playAnimationCommand)) {
            modContainer.registerHookEnable(address71, FunctionScrapper::addressOfNonVirtual((ret71(D::*)(int, int))(&D::playAnimationCommand)));
        }

        if constexpr((ret72(*)(PlayLayer*, cocos2d::CCPoint))(&$PlayLayer::playEndAnimationToPos) != (ret72(D::*)(cocos2d::CCPoint))(&D::playEndAnimationToPos)) {
            modContainer.registerHookEnable(address72, FunctionScrapper::addressOfNonVirtual((ret72(D::*)(cocos2d::CCPoint))(&D::playEndAnimationToPos)));
        }

        if constexpr((ret73(*)(PlayLayer*, PlayerObject*))(&$PlayLayer::playExitDualEffect) != (ret73(D::*)(PlayerObject*))(&D::playExitDualEffect)) {
            modContainer.registerHookEnable(address73, FunctionScrapper::addressOfNonVirtual((ret73(D::*)(PlayerObject*))(&D::playExitDualEffect)));
        }

        if constexpr((ret74(*)(PlayLayer*, float, int, float))(&$PlayLayer::playFlashEffect) != (ret74(D::*)(float, int, float))(&D::playFlashEffect)) {
            modContainer.registerHookEnable(address74, FunctionScrapper::addressOfNonVirtual((ret74(D::*)(float, int, float))(&D::playFlashEffect)));
        }

        if constexpr((ret75(*)(PlayLayer*, bool))(&$PlayLayer::playGravityEffect) != (ret75(D::*)(bool))(&D::playGravityEffect)) {
            modContainer.registerHookEnable(address75, FunctionScrapper::addressOfNonVirtual((ret75(D::*)(bool))(&D::playGravityEffect)));
        }

        if constexpr((ret76(*)(PlayLayer*, float))(&$PlayLayer::playSpeedParticle) != (ret76(D::*)(float))(&D::playSpeedParticle)) {
            modContainer.registerHookEnable(address76, FunctionScrapper::addressOfNonVirtual((ret76(D::*)(float))(&D::playSpeedParticle)));
        }

        if constexpr((ret77(*)(PlayLayer*, PlayerObject*, GameObject*))(&$PlayLayer::playerWillSwitchMode) != (ret77(D::*)(PlayerObject*, GameObject*))(&D::playerWillSwitchMode)) {
            modContainer.registerHookEnable(address77, FunctionScrapper::addressOfNonVirtual((ret77(D::*)(PlayerObject*, GameObject*))(&D::playerWillSwitchMode)));
        }

        if constexpr((ret78(*)(PlayLayer*))(&$PlayLayer::prepareSpawnObjects) != (ret78(D::*)())(&D::prepareSpawnObjects)) {
            modContainer.registerHookEnable(address78, FunctionScrapper::addressOfNonVirtual((ret78(D::*)())(&D::prepareSpawnObjects)));
        }

        if constexpr((ret79(*)(PlayLayer*))(&$PlayLayer::processItems) != (ret79(D::*)())(&D::processItems)) {
            modContainer.registerHookEnable(address79, FunctionScrapper::addressOfNonVirtual((ret79(D::*)())(&D::processItems)));
        }

        if constexpr((ret80(*)(PlayLayer*))(&$PlayLayer::processLoadedMoveActions) != (ret80(D::*)())(&D::processLoadedMoveActions)) {
            modContainer.registerHookEnable(address80, FunctionScrapper::addressOfNonVirtual((ret80(D::*)())(&D::processLoadedMoveActions)));
        }

        if constexpr((ret81(*)(PlayLayer*, bool, PlayerObject*))(&$PlayLayer::recordAction) != (ret81(D::*)(bool, PlayerObject*))(&D::recordAction)) {
            modContainer.registerHookEnable(address81, FunctionScrapper::addressOfNonVirtual((ret81(D::*)(bool, PlayerObject*))(&D::recordAction)));
        }

        if constexpr((ret82(*)(PlayLayer*, GameObject*))(&$PlayLayer::registerActiveObject) != (ret82(D::*)(GameObject*))(&D::registerActiveObject)) {
            modContainer.registerHookEnable(address82, FunctionScrapper::addressOfNonVirtual((ret82(D::*)(GameObject*))(&D::registerActiveObject)));
        }

        if constexpr((ret83(*)(PlayLayer*, GameObject*))(&$PlayLayer::registerStateObject) != (ret83(D::*)(GameObject*))(&D::registerStateObject)) {
            modContainer.registerHookEnable(address83, FunctionScrapper::addressOfNonVirtual((ret83(D::*)(GameObject*))(&D::registerStateObject)));
        }

        if constexpr((ret84(*)(PlayLayer*))(&$PlayLayer::removeAllObjects) != (ret84(D::*)())(&D::removeAllObjects)) {
            modContainer.registerHookEnable(address84, FunctionScrapper::addressOfNonVirtual((ret84(D::*)())(&D::removeAllObjects)));
        }

        if constexpr((ret85(*)(PlayLayer*, GameObject*))(&$PlayLayer::removeFromGroupOld) != (ret85(D::*)(GameObject*))(&D::removeFromGroupOld)) {
            modContainer.registerHookEnable(address85, FunctionScrapper::addressOfNonVirtual((ret85(D::*)(GameObject*))(&D::removeFromGroupOld)));
        }

        if constexpr((ret86(*)(PlayLayer*))(&$PlayLayer::removeLastCheckpoint) != (ret86(D::*)())(&D::removeLastCheckpoint)) {
            modContainer.registerHookEnable(address86, FunctionScrapper::addressOfNonVirtual((ret86(D::*)())(&D::removeLastCheckpoint)));
        }

        if constexpr((ret87(*)(PlayLayer*))(&$PlayLayer::removePlayer2) != (ret87(D::*)())(&D::removePlayer2)) {
            modContainer.registerHookEnable(address87, FunctionScrapper::addressOfNonVirtual((ret87(D::*)())(&D::removePlayer2)));
        }

        if constexpr((ret88(*)(PlayLayer*))(&$PlayLayer::resetLevel) != (ret88(D::*)())(&D::resetLevel)) {
            modContainer.registerHookEnable(address88, FunctionScrapper::addressOfNonVirtual((ret88(D::*)())(&D::resetLevel)));
        }

        if constexpr((ret89(*)(PlayLayer*))(&$PlayLayer::resume) != (ret89(D::*)())(&D::resume)) {
            modContainer.registerHookEnable(address89, FunctionScrapper::addressOfNonVirtual((ret89(D::*)())(&D::resume)));
        }

        if constexpr((ret90(*)(PlayLayer*))(&$PlayLayer::resumeAndRestart) != (ret90(D::*)())(&D::resumeAndRestart)) {
            modContainer.registerHookEnable(address90, FunctionScrapper::addressOfNonVirtual((ret90(D::*)())(&D::resumeAndRestart)));
        }

        if constexpr((ret91(*)(PlayLayer*, bool, PlayerObject*))(&$PlayLayer::saveRecordAction) != (ret91(D::*)(bool, PlayerObject*))(&D::saveRecordAction)) {
            modContainer.registerHookEnable(address91, FunctionScrapper::addressOfNonVirtual((ret91(D::*)(bool, PlayerObject*))(&D::saveRecordAction)));
        }

        if constexpr((ret92(*)(PlayLayer*, GJGameLevel*))(&$PlayLayer::scene) != (ret92(D::*)(GJGameLevel*))(&D::scene)) {
            modContainer.registerHookEnable(address92, FunctionScrapper::addressOfNonVirtual((ret92(D::*)(GJGameLevel*))(&D::scene)));
        }

        if constexpr((ret93(*)(PlayLayer*, LevelSettingsObject*))(&$PlayLayer::setupLevelStart) != (ret93(D::*)(LevelSettingsObject*))(&D::setupLevelStart)) {
            modContainer.registerHookEnable(address93, FunctionScrapper::addressOfNonVirtual((ret93(D::*)(LevelSettingsObject*))(&D::setupLevelStart)));
        }

        if constexpr((ret94(*)(PlayLayer*, gd::string))(&$PlayLayer::setupReplay) != (ret94(D::*)(gd::string))(&D::setupReplay)) {
            modContainer.registerHookEnable(address94, FunctionScrapper::addressOfNonVirtual((ret94(D::*)(gd::string))(&D::setupReplay)));
        }

        if constexpr((ret95(*)(PlayLayer*, float, float, float))(&$PlayLayer::shakeCamera) != (ret95(D::*)(float, float, float))(&D::shakeCamera)) {
            modContainer.registerHookEnable(address95, FunctionScrapper::addressOfNonVirtual((ret95(D::*)(float, float, float))(&D::shakeCamera)));
        }

        if constexpr((ret96(*)(PlayLayer*, int))(&$PlayLayer::shouldBlend) != (ret96(D::*)(int))(&D::shouldBlend)) {
            modContainer.registerHookEnable(address96, FunctionScrapper::addressOfNonVirtual((ret96(D::*)(int))(&D::shouldBlend)));
        }

        if constexpr((ret97(*)(PlayLayer*))(&$PlayLayer::showCompleteEffect) != (ret97(D::*)())(&D::showCompleteEffect)) {
            modContainer.registerHookEnable(address97, FunctionScrapper::addressOfNonVirtual((ret97(D::*)())(&D::showCompleteEffect)));
        }

        if constexpr((ret98(*)(PlayLayer*))(&$PlayLayer::showCompleteText) != (ret98(D::*)())(&D::showCompleteText)) {
            modContainer.registerHookEnable(address98, FunctionScrapper::addressOfNonVirtual((ret98(D::*)())(&D::showCompleteText)));
        }

        if constexpr((ret99(*)(PlayLayer*))(&$PlayLayer::showEndLayer) != (ret99(D::*)())(&D::showEndLayer)) {
            modContainer.registerHookEnable(address99, FunctionScrapper::addressOfNonVirtual((ret99(D::*)())(&D::showEndLayer)));
        }

        if constexpr((ret100(*)(PlayLayer*))(&$PlayLayer::showHint) != (ret100(D::*)())(&D::showHint)) {
            modContainer.registerHookEnable(address100, FunctionScrapper::addressOfNonVirtual((ret100(D::*)())(&D::showHint)));
        }

        if constexpr((ret101(*)(PlayLayer*, bool, int, int, bool, bool, bool))(&$PlayLayer::showNewBest) != (ret101(D::*)(bool, int, int, bool, bool, bool))(&D::showNewBest)) {
            modContainer.registerHookEnable(address101, FunctionScrapper::addressOfNonVirtual((ret101(D::*)(bool, int, int, bool, bool, bool))(&D::showNewBest)));
        }

        if constexpr((ret102(*)(PlayLayer*))(&$PlayLayer::showRetryLayer) != (ret102(D::*)())(&D::showRetryLayer)) {
            modContainer.registerHookEnable(address102, FunctionScrapper::addressOfNonVirtual((ret102(D::*)())(&D::showRetryLayer)));
        }

        if constexpr((ret103(*)(PlayLayer*))(&$PlayLayer::showTwoPlayerGuide) != (ret103(D::*)())(&D::showTwoPlayerGuide)) {
            modContainer.registerHookEnable(address103, FunctionScrapper::addressOfNonVirtual((ret103(D::*)())(&D::showTwoPlayerGuide)));
        }

        if constexpr((ret104(*)(PlayLayer*))(&$PlayLayer::sortGroups) != (ret104(D::*)())(&D::sortGroups)) {
            modContainer.registerHookEnable(address104, FunctionScrapper::addressOfNonVirtual((ret104(D::*)())(&D::sortGroups)));
        }

        if constexpr((ret105(*)(PlayLayer*))(&$PlayLayer::spawnCircle) != (ret105(D::*)())(&D::spawnCircle)) {
            modContainer.registerHookEnable(address105, FunctionScrapper::addressOfNonVirtual((ret105(D::*)())(&D::spawnCircle)));
        }

        if constexpr((ret106(*)(PlayLayer*))(&$PlayLayer::spawnFirework) != (ret106(D::*)())(&D::spawnFirework)) {
            modContainer.registerHookEnable(address106, FunctionScrapper::addressOfNonVirtual((ret106(D::*)())(&D::spawnFirework)));
        }

        if constexpr((ret107(*)(PlayLayer*, char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint))(&$PlayLayer::spawnParticle) != (ret107(D::*)(char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint))(&D::spawnParticle)) {
            modContainer.registerHookEnable(address107, FunctionScrapper::addressOfNonVirtual((ret107(D::*)(char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint))(&D::spawnParticle)));
        }

        if constexpr((ret108(*)(PlayLayer*))(&$PlayLayer::spawnPlayer2) != (ret108(D::*)())(&D::spawnPlayer2)) {
            modContainer.registerHookEnable(address108, FunctionScrapper::addressOfNonVirtual((ret108(D::*)())(&D::spawnPlayer2)));
        }

        if constexpr((ret109(*)(PlayLayer*))(&$PlayLayer::startGame) != (ret109(D::*)())(&D::startGame)) {
            modContainer.registerHookEnable(address109, FunctionScrapper::addressOfNonVirtual((ret109(D::*)())(&D::startGame)));
        }

        if constexpr((ret110(*)(PlayLayer*))(&$PlayLayer::startMusic) != (ret110(D::*)())(&D::startMusic)) {
            modContainer.registerHookEnable(address110, FunctionScrapper::addressOfNonVirtual((ret110(D::*)())(&D::startMusic)));
        }

        if constexpr((ret111(*)(PlayLayer*))(&$PlayLayer::startRecording) != (ret111(D::*)())(&D::startRecording)) {
            modContainer.registerHookEnable(address111, FunctionScrapper::addressOfNonVirtual((ret111(D::*)())(&D::startRecording)));
        }

        if constexpr((ret112(*)(PlayLayer*))(&$PlayLayer::startRecordingDelayed) != (ret112(D::*)())(&D::startRecordingDelayed)) {
            modContainer.registerHookEnable(address112, FunctionScrapper::addressOfNonVirtual((ret112(D::*)())(&D::startRecordingDelayed)));
        }

        if constexpr((ret113(*)(PlayLayer*))(&$PlayLayer::stopCameraShake) != (ret113(D::*)())(&D::stopCameraShake)) {
            modContainer.registerHookEnable(address113, FunctionScrapper::addressOfNonVirtual((ret113(D::*)())(&D::stopCameraShake)));
        }

        if constexpr((ret114(*)(PlayLayer*))(&$PlayLayer::stopRecording) != (ret114(D::*)())(&D::stopRecording)) {
            modContainer.registerHookEnable(address114, FunctionScrapper::addressOfNonVirtual((ret114(D::*)())(&D::stopRecording)));
        }

        if constexpr((ret115(*)(PlayLayer*, CheckpointObject*))(&$PlayLayer::storeCheckpoint) != (ret115(D::*)(CheckpointObject*))(&D::storeCheckpoint)) {
            modContainer.registerHookEnable(address115, FunctionScrapper::addressOfNonVirtual((ret115(D::*)(CheckpointObject*))(&D::storeCheckpoint)));
        }

        if constexpr((ret116(*)(PlayLayer*, PlayerObject*, GameObject*, bool, int))(&$PlayLayer::switchToFlyMode) != (ret116(D::*)(PlayerObject*, GameObject*, bool, int))(&D::switchToFlyMode)) {
            modContainer.registerHookEnable(address116, FunctionScrapper::addressOfNonVirtual((ret116(D::*)(PlayerObject*, GameObject*, bool, int))(&D::switchToFlyMode)));
        }

        if constexpr((ret117(*)(PlayLayer*, PlayerObject*, GameObject*, bool))(&$PlayLayer::switchToRobotMode) != (ret117(D::*)(PlayerObject*, GameObject*, bool))(&D::switchToRobotMode)) {
            modContainer.registerHookEnable(address117, FunctionScrapper::addressOfNonVirtual((ret117(D::*)(PlayerObject*, GameObject*, bool))(&D::switchToRobotMode)));
        }

        if constexpr((ret118(*)(PlayLayer*, PlayerObject*, GameObject*, bool))(&$PlayLayer::switchToRollMode) != (ret118(D::*)(PlayerObject*, GameObject*, bool))(&D::switchToRollMode)) {
            modContainer.registerHookEnable(address118, FunctionScrapper::addressOfNonVirtual((ret118(D::*)(PlayerObject*, GameObject*, bool))(&D::switchToRollMode)));
        }

        if constexpr((ret119(*)(PlayLayer*, PlayerObject*, GameObject*, bool))(&$PlayLayer::switchToSpiderMode) != (ret119(D::*)(PlayerObject*, GameObject*, bool))(&D::switchToSpiderMode)) {
            modContainer.registerHookEnable(address119, FunctionScrapper::addressOfNonVirtual((ret119(D::*)(PlayerObject*, GameObject*, bool))(&D::switchToSpiderMode)));
        }

        if constexpr((ret120(*)(PlayLayer*, float))(&$PlayLayer::timeForXPos) != (ret120(D::*)(float))(&D::timeForXPos)) {
            modContainer.registerHookEnable(address120, FunctionScrapper::addressOfNonVirtual((ret120(D::*)(float))(&D::timeForXPos)));
        }

        if constexpr((ret121(*)(PlayLayer*, float, bool))(&$PlayLayer::timeForXPos2) != (ret121(D::*)(float, bool))(&D::timeForXPos2)) {
            modContainer.registerHookEnable(address121, FunctionScrapper::addressOfNonVirtual((ret121(D::*)(float, bool))(&D::timeForXPos2)));
        }

        if constexpr((ret122(*)(PlayLayer*, bool))(&$PlayLayer::toggleBGEffectVisibility) != (ret122(D::*)(bool))(&D::toggleBGEffectVisibility)) {
            modContainer.registerHookEnable(address122, FunctionScrapper::addressOfNonVirtual((ret122(D::*)(bool))(&D::toggleBGEffectVisibility)));
        }

        if constexpr((ret123(*)(PlayLayer*, GameObject*, bool, PlayerObject*, bool))(&$PlayLayer::toggleDualMode) != (ret123(D::*)(GameObject*, bool, PlayerObject*, bool))(&D::toggleDualMode)) {
            modContainer.registerHookEnable(address123, FunctionScrapper::addressOfNonVirtual((ret123(D::*)(GameObject*, bool, PlayerObject*, bool))(&D::toggleDualMode)));
        }

        if constexpr((ret124(*)(PlayLayer*, bool, bool))(&$PlayLayer::toggleFlipped) != (ret124(D::*)(bool, bool))(&D::toggleFlipped)) {
            modContainer.registerHookEnable(address124, FunctionScrapper::addressOfNonVirtual((ret124(D::*)(bool, bool))(&D::toggleFlipped)));
        }

        if constexpr((ret125(*)(PlayLayer*, int))(&$PlayLayer::toggleGhostEffect) != (ret125(D::*)(int))(&D::toggleGhostEffect)) {
            modContainer.registerHookEnable(address125, FunctionScrapper::addressOfNonVirtual((ret125(D::*)(int))(&D::toggleGhostEffect)));
        }

        if constexpr((ret126(*)(PlayLayer*, bool))(&$PlayLayer::toggleGlitter) != (ret126(D::*)(bool))(&D::toggleGlitter)) {
            modContainer.registerHookEnable(address126, FunctionScrapper::addressOfNonVirtual((ret126(D::*)(bool))(&D::toggleGlitter)));
        }

        if constexpr((ret127(*)(PlayLayer*, bool))(&$PlayLayer::togglePracticeMode) != (ret127(D::*)(bool))(&D::togglePracticeMode)) {
            modContainer.registerHookEnable(address127, FunctionScrapper::addressOfNonVirtual((ret127(D::*)(bool))(&D::togglePracticeMode)));
        }

        if constexpr((ret128(*)(PlayLayer*))(&$PlayLayer::toggleProgressbar) != (ret128(D::*)())(&D::toggleProgressbar)) {
            modContainer.registerHookEnable(address128, FunctionScrapper::addressOfNonVirtual((ret128(D::*)())(&D::toggleProgressbar)));
        }

        if constexpr((ret129(*)(PlayLayer*))(&$PlayLayer::tryStartRecord) != (ret129(D::*)())(&D::tryStartRecord)) {
            modContainer.registerHookEnable(address129, FunctionScrapper::addressOfNonVirtual((ret129(D::*)())(&D::tryStartRecord)));
        }

        if constexpr((ret130(*)(PlayLayer*, char const*, cocos2d::CCParticleSystemQuad*))(&$PlayLayer::unclaimParticle) != (ret130(D::*)(char const*, cocos2d::CCParticleSystemQuad*))(&D::unclaimParticle)) {
            modContainer.registerHookEnable(address130, FunctionScrapper::addressOfNonVirtual((ret130(D::*)(char const*, cocos2d::CCParticleSystemQuad*))(&D::unclaimParticle)));
        }

        if constexpr((ret131(*)(PlayLayer*, GameObject*))(&$PlayLayer::unregisterActiveObject) != (ret131(D::*)(GameObject*))(&D::unregisterActiveObject)) {
            modContainer.registerHookEnable(address131, FunctionScrapper::addressOfNonVirtual((ret131(D::*)(GameObject*))(&D::unregisterActiveObject)));
        }

        if constexpr((ret132(*)(PlayLayer*, GameObject*))(&$PlayLayer::unregisterStateObject) != (ret132(D::*)(GameObject*))(&D::unregisterStateObject)) {
            modContainer.registerHookEnable(address132, FunctionScrapper::addressOfNonVirtual((ret132(D::*)(GameObject*))(&D::unregisterStateObject)));
        }

        if constexpr((ret133(*)(PlayLayer*, float))(&$PlayLayer::update) != (ret133(D::*)(float))(&D::update)) {
            modContainer.registerHookEnable(address133, FunctionScrapper::addressOfVirtual((ret133(D::*)(float))(&D::update)));
        }

        if constexpr((ret134(*)(PlayLayer*))(&$PlayLayer::updateAttempts) != (ret134(D::*)())(&D::updateAttempts)) {
            modContainer.registerHookEnable(address134, FunctionScrapper::addressOfNonVirtual((ret134(D::*)())(&D::updateAttempts)));
        }

        if constexpr((ret135(*)(PlayLayer*, float))(&$PlayLayer::updateCamera) != (ret135(D::*)(float))(&D::updateCamera)) {
            modContainer.registerHookEnable(address135, FunctionScrapper::addressOfNonVirtual((ret135(D::*)(float))(&D::updateCamera)));
        }

        if constexpr((ret136(*)(PlayLayer*, cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*))(&$PlayLayer::updateColor) != (ret136(D::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*))(&D::updateColor)) {
            modContainer.registerHookEnable(address136, FunctionScrapper::addressOfVirtual((ret136(D::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*))(&D::updateColor)));
        }

        if constexpr((ret137(*)(PlayLayer*, PlayerObject*, int, bool))(&$PlayLayer::updateDualGround) != (ret137(D::*)(PlayerObject*, int, bool))(&D::updateDualGround)) {
            modContainer.registerHookEnable(address137, FunctionScrapper::addressOfNonVirtual((ret137(D::*)(PlayerObject*, int, bool))(&D::updateDualGround)));
        }

        if constexpr((ret138(*)(PlayLayer*))(&$PlayLayer::updateEffectPositions) != (ret138(D::*)())(&D::updateEffectPositions)) {
            modContainer.registerHookEnable(address138, FunctionScrapper::addressOfNonVirtual((ret138(D::*)())(&D::updateEffectPositions)));
        }

        if constexpr((ret139(*)(PlayLayer*))(&$PlayLayer::updateLevelColors) != (ret139(D::*)())(&D::updateLevelColors)) {
            modContainer.registerHookEnable(address139, FunctionScrapper::addressOfNonVirtual((ret139(D::*)())(&D::updateLevelColors)));
        }

        if constexpr((ret140(*)(PlayLayer*))(&$PlayLayer::updateMoveObjectsLastPosition) != (ret140(D::*)())(&D::updateMoveObjectsLastPosition)) {
            modContainer.registerHookEnable(address140, FunctionScrapper::addressOfNonVirtual((ret140(D::*)())(&D::updateMoveObjectsLastPosition)));
        }

        if constexpr((ret141(*)(PlayLayer*))(&$PlayLayer::updateProgressbar) != (ret141(D::*)())(&D::updateProgressbar)) {
            modContainer.registerHookEnable(address141, FunctionScrapper::addressOfNonVirtual((ret141(D::*)())(&D::updateProgressbar)));
        }

        if constexpr((ret142(*)(PlayLayer*, float))(&$PlayLayer::updateReplay) != (ret142(D::*)(float))(&D::updateReplay)) {
            modContainer.registerHookEnable(address142, FunctionScrapper::addressOfNonVirtual((ret142(D::*)(float))(&D::updateReplay)));
        }

        if constexpr((ret143(*)(PlayLayer*, float, bool))(&$PlayLayer::updateTimeMod) != (ret143(D::*)(float, bool))(&D::updateTimeMod)) {
            modContainer.registerHookEnable(address143, FunctionScrapper::addressOfNonVirtual((ret143(D::*)(float, bool))(&D::updateTimeMod)));
        }

        if constexpr((ret144(*)(PlayLayer*, float, char const*))(&$PlayLayer::updateTweenAction) != (ret144(D::*)(float, char const*))(&D::updateTweenAction)) {
            modContainer.registerHookEnable(address144, FunctionScrapper::addressOfVirtual((ret144(D::*)(float, char const*))(&D::updateTweenAction)));
        }

        if constexpr((ret145(*)(PlayLayer*))(&$PlayLayer::updateVisibility) != (ret145(D::*)())(&D::updateVisibility)) {
            modContainer.registerHookEnable(address145, FunctionScrapper::addressOfNonVirtual((ret145(D::*)())(&D::updateVisibility)));
        }

        if constexpr((ret146(*)(PlayLayer*))(&$PlayLayer::vfDChk) != (ret146(D::*)())(&D::vfDChk)) {
            modContainer.registerHookEnable(address146, FunctionScrapper::addressOfNonVirtual((ret146(D::*)())(&D::vfDChk)));
        }

        if constexpr((ret147(*)(PlayLayer*))(&$PlayLayer::visit) != (ret147(D::*)())(&D::visit)) {
            modContainer.registerHookEnable(address147, FunctionScrapper::addressOfVirtual((ret147(D::*)())(&D::visit)));
        }

        if constexpr((ret148(*)(PlayLayer*))(&$PlayLayer::visitWithColorFlash) != (ret148(D::*)())(&D::visitWithColorFlash)) {
            modContainer.registerHookEnable(address148, FunctionScrapper::addressOfNonVirtual((ret148(D::*)())(&D::visitWithColorFlash)));
        }

        if constexpr((ret149(*)(PlayLayer*, int, PlayerObject*))(&$PlayLayer::willSwitchToMode) != (ret149(D::*)(int, PlayerObject*))(&D::willSwitchToMode)) {
            modContainer.registerHookEnable(address149, FunctionScrapper::addressOfNonVirtual((ret149(D::*)(int, PlayerObject*))(&D::willSwitchToMode)));
        }

        if constexpr((ret150(*)(PlayLayer*, float))(&$PlayLayer::xPosForTime) != (ret150(D::*)(float))(&D::xPosForTime)) {
            modContainer.registerHookEnable(address150, FunctionScrapper::addressOfNonVirtual((ret150(D::*)(float))(&D::xPosForTime)));
        }

        if constexpr((ret151(*)(PlayLayer*))(&$PlayLayer::destructor) != (ret151(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address151, FunctionScrapper::addressOfNonVirtual((ret151(D::*)())(&D::destructor)));
        }

        return true;
    }
};

template<class D>
struct $PlatformToolbox : PlatformToolbox, InterfaceBase {
    $PlatformToolbox(const $PlatformToolbox& c) : PlatformToolbox(c) {}
    $PlatformToolbox() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x27c340;

    dupable ret0 hideCursor() {
        return reinterpret_cast<ret0(*)(PlatformToolbox*)>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x27c360;

    dupable ret1 showCursor() {
        return reinterpret_cast<ret1(*)(PlatformToolbox*)>(address1)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(PlatformToolbox*))(&$PlatformToolbox::hideCursor) != (ret0(D::*)())(&D::hideCursor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::hideCursor)));
        }

        if constexpr((ret1(*)(PlatformToolbox*))(&$PlatformToolbox::showCursor) != (ret1(D::*)())(&D::showCursor)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::showCursor)));
        }

        return true;
    }
};

template<class D>
struct $TopArtistsLayer : TopArtistsLayer, InterfaceBase {
    $TopArtistsLayer(const $TopArtistsLayer& c) : TopArtistsLayer(c) {}
    $TopArtistsLayer() = delete;

    using ret0 = TopArtistsLayer*;
    static inline auto address0 = base+0x192a90;

    dupable static ret0 create() {
        return reinterpret_cast<ret0(*)(TopArtistsLayer*)>(address0)();
    }

    using ret1 = void;
    static inline auto address1 = base+0x193420;

    dupable ret1 setupLeaderboard(cocos2d::CCArray* p0) {
        return reinterpret_cast<ret1(*)(TopArtistsLayer*, cocos2d::CCArray*)>(address1)(this, p0);
    }

    using ret2 = bool;
    static inline auto address2 = base+0x192c30;

    dupable ret2 init() {
        return reinterpret_cast<ret2(*)(TopArtistsLayer*)>(address2)(this);
    }

    using ret3 = void;
    static inline auto address3 = base+0x193b60;

    dupable ret3 loadPage(int p0) {
        return reinterpret_cast<ret3(*)(TopArtistsLayer*, int)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x193730;

    dupable ret4 setupPageInfo(gd::string p0,char const* p1) {
        return reinterpret_cast<ret4(*)(TopArtistsLayer*, gd::string, char const*)>(address4)(this, p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(TopArtistsLayer*))(&$TopArtistsLayer::create) != (ret0(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::create)));
        }

        if constexpr((ret1(*)(TopArtistsLayer*, cocos2d::CCArray*))(&$TopArtistsLayer::setupLeaderboard) != (ret1(D::*)(cocos2d::CCArray*))(&D::setupLeaderboard)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCArray*))(&D::setupLeaderboard)));
        }

        if constexpr((ret2(*)(TopArtistsLayer*))(&$TopArtistsLayer::init) != (ret2(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)())(&D::init)));
        }

        if constexpr((ret3(*)(TopArtistsLayer*, int))(&$TopArtistsLayer::loadPage) != (ret3(D::*)(int))(&D::loadPage)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(int))(&D::loadPage)));
        }

        if constexpr((ret4(*)(TopArtistsLayer*, gd::string, char const*))(&$TopArtistsLayer::setupPageInfo) != (ret4(D::*)(gd::string, char const*))(&D::setupPageInfo)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(gd::string, char const*))(&D::setupPageInfo)));
        }

        return true;
    }
};

template<class D>
struct $PauseLayer : PauseLayer, InterfaceBase {
    $PauseLayer(const $PauseLayer& c) : PauseLayer(c) {}
    $PauseLayer() = delete;

    using ret0 = PauseLayer*;
    static inline auto address0 = base+0x20b1e0;

    dupable static ret0 create(bool p0) {
        return reinterpret_cast<ret0(*)(PauseLayer*, bool)>(address0)(p0);
    }

    using ret1 = void;
    static inline auto address1 = base+0x20c630;

    dupable ret1 onEdit(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret1(*)(PauseLayer*, cocos2d::CCObject*)>(address1)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(PauseLayer*, bool))(&$PauseLayer::create) != (ret0(D::*)(bool))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(bool))(&D::create)));
        }

        if constexpr((ret1(*)(PauseLayer*, cocos2d::CCObject*))(&$PauseLayer::onEdit) != (ret1(D::*)(cocos2d::CCObject*))(&D::onEdit)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCObject*))(&D::onEdit)));
        }

        return true;
    }
};

template<class D>
struct $TableViewCell : TableViewCell, InterfaceBase {
    $TableViewCell(const $TableViewCell& c) : TableViewCell(c) {}
    $TableViewCell() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x383de0;

    dupable void constructor(char const* p0,float p1,float p2) {
        reinterpret_cast<void(*)(decltype(this), char const*, float, float)>(address0)(this, p0, p1, p2);
    }
    static bool _apply() {

        if constexpr((ret0(*)(TableViewCell*, char const*, float, float))(&$TableViewCell::constructor) != (ret0(D::*)(char const*, float, float))(&D::constructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(char const*, float, float))(&D::constructor)));
        }

        return true;
    }
};

template<class D>
struct $ObjectToolbox : ObjectToolbox, InterfaceBase {
    $ObjectToolbox(const $ObjectToolbox& c) : ObjectToolbox(c) {}
    $ObjectToolbox() = delete;

    using ret0 = bool;
    static inline auto address0 = base+0x3b2d80;

    dupable ret0 init() {
        return reinterpret_cast<ret0(*)(ObjectToolbox*)>(address0)(this);
    }

    using ret1 = charconst*;
    static inline auto address1 = base+0x4173b0;

    dupable ret1 intKeyToFrame(int p0) {
        return reinterpret_cast<ret1(*)(ObjectToolbox*, int)>(address1)(this, p0);
    }

    using ret2 = ObjectToolbox*;
    static inline auto address2 = base+0x3b2bc0;

    dupable static ret2 sharedState() {
        return reinterpret_cast<ret2(*)(ObjectToolbox*)>(address2)();
    }
    static bool _apply() {

        if constexpr((ret0(*)(ObjectToolbox*))(&$ObjectToolbox::init) != (ret0(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::init)));
        }

        if constexpr((ret1(*)(ObjectToolbox*, int))(&$ObjectToolbox::intKeyToFrame) != (ret1(D::*)(int))(&D::intKeyToFrame)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(int))(&D::intKeyToFrame)));
        }

        if constexpr((ret2(*)(ObjectToolbox*))(&$ObjectToolbox::sharedState) != (ret2(D::*)())(&D::sharedState)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::sharedState)));
        }

        return true;
    }
};

template<class D>
struct $OBB2D : OBB2D, InterfaceBase {
    $OBB2D(const $OBB2D& c) : OBB2D(c) {}
    $OBB2D() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x35a9c0;

    dupable ret0 calculateWithCenter(cocos2d::CCPoint p0,float p1,float p2,float p3) {
        return reinterpret_cast<ret0(*)(OBB2D*, cocos2d::CCPoint, float, float, float)>(address0)(this, p0, p1, p2, p3);
    }

    using ret1 = OBB2D*;
    static inline auto address1 = base+0x35a890;

    dupable static ret1 create(cocos2d::CCPoint p0,float p1,float p2,float p3) {
        return reinterpret_cast<ret1(*)(OBB2D*, cocos2d::CCPoint, float, float, float)>(address1)(p0, p1, p2, p3);
    }

    using ret2 = cocos2d::CCRect;
    static inline auto address2 = base+0x35b2b0;

    dupable ret2 getBoundingRect() {
        return reinterpret_cast<ret2(*)(OBB2D*)>(address2)(this);
    }

    using ret3 = void;
    static inline auto address3 = base+0x35b0a0;

    dupable ret3 overlaps(OBB2D* p0) {
        return reinterpret_cast<ret3(*)(OBB2D*, OBB2D*)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x35b0d0;

    dupable ret4 overlaps1Way(OBB2D* p0) {
        return reinterpret_cast<ret4(*)(OBB2D*, OBB2D*)>(address4)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(OBB2D*, cocos2d::CCPoint, float, float, float))(&$OBB2D::calculateWithCenter) != (ret0(D::*)(cocos2d::CCPoint, float, float, float))(&D::calculateWithCenter)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCPoint, float, float, float))(&D::calculateWithCenter)));
        }

        if constexpr((ret1(*)(OBB2D*, cocos2d::CCPoint, float, float, float))(&$OBB2D::create) != (ret1(D::*)(cocos2d::CCPoint, float, float, float))(&D::create)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCPoint, float, float, float))(&D::create)));
        }

        if constexpr((ret2(*)(OBB2D*))(&$OBB2D::getBoundingRect) != (ret2(D::*)())(&D::getBoundingRect)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::getBoundingRect)));
        }

        if constexpr((ret3(*)(OBB2D*, OBB2D*))(&$OBB2D::overlaps) != (ret3(D::*)(OBB2D*))(&D::overlaps)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(OBB2D*))(&D::overlaps)));
        }

        if constexpr((ret4(*)(OBB2D*, OBB2D*))(&$OBB2D::overlaps1Way) != (ret4(D::*)(OBB2D*))(&D::overlaps1Way)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(OBB2D*))(&D::overlaps1Way)));
        }

        return true;
    }
};

template<class D>
struct $MusicDownloadManager : MusicDownloadManager, InterfaceBase {
    $MusicDownloadManager(const $MusicDownloadManager& c) : MusicDownloadManager(c) {}
    $MusicDownloadManager() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x2ef750;

    dupable ret0 incrementPriorityForSong(int p0) {
        return reinterpret_cast<ret0(*)(MusicDownloadManager*, int)>(address0)(this, p0);
    }

    using ret1 = MusicDownloadManager*;
    static inline auto address1 = base+0x2ee4c0;

    dupable static ret1 sharedState() {
        return reinterpret_cast<ret1(*)(MusicDownloadManager*)>(address1)();
    }
    static bool _apply() {

        if constexpr((ret0(*)(MusicDownloadManager*, int))(&$MusicDownloadManager::incrementPriorityForSong) != (ret0(D::*)(int))(&D::incrementPriorityForSong)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(int))(&D::incrementPriorityForSong)));
        }

        if constexpr((ret1(*)(MusicDownloadManager*))(&$MusicDownloadManager::sharedState) != (ret1(D::*)())(&D::sharedState)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::sharedState)));
        }

        return true;
    }
};

template<class D>
struct $GameSoundManager : GameSoundManager, InterfaceBase {
    $GameSoundManager(const $GameSoundManager& c) : GameSoundManager(c) {}
    $GameSoundManager() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x362d80;

    dupable ret0 disableMetering() {
        return reinterpret_cast<ret0(*)(GameSoundManager*)>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x362d00;

    dupable ret1 enableMetering() {
        return reinterpret_cast<ret1(*)(GameSoundManager*)>(address1)(this);
    }

    using ret2 = void;
    static inline auto address2 = base+0x362db0;

    dupable ret2 getMeteringValue() {
        return reinterpret_cast<ret2(*)(GameSoundManager*)>(address2)(this);
    }

    using ret3 = void;
    static inline auto address3 = base+0x362070;

    dupable ret3 playBackgroundMusic(gd::string p0,bool p1,bool p2) {
        return reinterpret_cast<ret3(*)(GameSoundManager*, gd::string, bool, bool)>(address3)(this, p0, p1, p2);
    }

    using ret4 = void;
    static inline auto address4 = base+0x3623d0;

    dupable ret4 playEffect(gd::string p0,float p1,float p2,float p3) {
        return reinterpret_cast<ret4(*)(GameSoundManager*, gd::string, float, float, float)>(address4)(this, p0, p1, p2, p3);
    }

    using ret5 = void;
    static inline auto address5 = base+0x3610f0;

    dupable ret5 sharedManager() {
        return reinterpret_cast<ret5(*)(GameSoundManager*)>(address5)(this);
    }

    using ret6 = void;
    static inline auto address6 = base+0x362130;

    dupable ret6 stopBackgroundMusic() {
        return reinterpret_cast<ret6(*)(GameSoundManager*)>(address6)(this);
    }

    using ret7 = void;
    static inline auto address7 = base+0x362c00;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address7)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(GameSoundManager*))(&$GameSoundManager::disableMetering) != (ret0(D::*)())(&D::disableMetering)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::disableMetering)));
        }

        if constexpr((ret1(*)(GameSoundManager*))(&$GameSoundManager::enableMetering) != (ret1(D::*)())(&D::enableMetering)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::enableMetering)));
        }

        if constexpr((ret2(*)(GameSoundManager*))(&$GameSoundManager::getMeteringValue) != (ret2(D::*)())(&D::getMeteringValue)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::getMeteringValue)));
        }

        if constexpr((ret3(*)(GameSoundManager*, gd::string, bool, bool))(&$GameSoundManager::playBackgroundMusic) != (ret3(D::*)(gd::string, bool, bool))(&D::playBackgroundMusic)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(gd::string, bool, bool))(&D::playBackgroundMusic)));
        }

        if constexpr((ret4(*)(GameSoundManager*, gd::string, float, float, float))(&$GameSoundManager::playEffect) != (ret4(D::*)(gd::string, float, float, float))(&D::playEffect)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(gd::string, float, float, float))(&D::playEffect)));
        }

        if constexpr((ret5(*)(GameSoundManager*))(&$GameSoundManager::sharedManager) != (ret5(D::*)())(&D::sharedManager)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)())(&D::sharedManager)));
        }

        if constexpr((ret6(*)(GameSoundManager*))(&$GameSoundManager::stopBackgroundMusic) != (ret6(D::*)())(&D::stopBackgroundMusic)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)())(&D::stopBackgroundMusic)));
        }

        if constexpr((ret7(*)(GameSoundManager*))(&$GameSoundManager::destructor) != (ret7(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)())(&D::destructor)));
        }

        return true;
    }
};

template<class D>
struct $LocalLevelManager : LocalLevelManager, InterfaceBase {
    $LocalLevelManager(const $LocalLevelManager& c) : LocalLevelManager(c) {}
    $LocalLevelManager() = delete;

    using ret0 = LocalLevelManager*;
    static inline auto address0 = base+0x35dd60;

    dupable static ret0 sharedState() {
        return reinterpret_cast<ret0(*)(LocalLevelManager*)>(address0)();
    }
    static bool _apply() {

        if constexpr((ret0(*)(LocalLevelManager*))(&$LocalLevelManager::sharedState) != (ret0(D::*)())(&D::sharedState)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::sharedState)));
        }

        return true;
    }
};

template<class D>
struct $GameObjectCopy : GameObjectCopy, InterfaceBase {
    $GameObjectCopy(const $GameObjectCopy& c) : GameObjectCopy(c) {}
    $GameObjectCopy() = delete;

    using ret0 = void;
    static inline auto address0 = base+0xa3290;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = GameObjectCopy*;
    static inline auto address1 = base+0x975a0;

    dupable static ret1 create(GameObject* p0) {
        return reinterpret_cast<ret1(*)(GameObjectCopy*, GameObject*)>(address1)(p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x976a0;

    dupable ret2 resetObject() {
        return reinterpret_cast<ret2(*)(GameObjectCopy*)>(address2)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(GameObjectCopy*))(&$GameObjectCopy::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(GameObjectCopy*, GameObject*))(&$GameObjectCopy::create) != (ret1(D::*)(GameObject*))(&D::create)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(GameObject*))(&D::create)));
        }

        if constexpr((ret2(*)(GameObjectCopy*))(&$GameObjectCopy::resetObject) != (ret2(D::*)())(&D::resetObject)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::resetObject)));
        }

        return true;
    }
};

template<class D>
struct $GameManager : GameManager, InterfaceBase {
    $GameManager(const $GameManager& c) : GameManager(c) {}
    $GameManager() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x1cdad0;

    dupable ret0 accountStatusChanged() {
        return reinterpret_cast<ret0(*)(GameManager*)>(address0)(this);
    }

    using ret1 = constcocos2d::_ccColor3B&;
    static inline auto address1 = base+0x1cbc80;

    dupable ret1 colorForIdx(int p0) {
        return reinterpret_cast<ret1(*)(GameManager*, int)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x1d0230;

    dupable ret2 didExitPlayscene() {
        return reinterpret_cast<ret2(*)(GameManager*)>(address2)(this);
    }

    using ret3 = void;
    static inline auto address3 = base+0x1d0200;

    dupable ret3 doQuickSave() {
        return reinterpret_cast<ret3(*)(GameManager*)>(address3)(this);
    }

    using ret4 = void;
    static inline auto address4 = base+0x1c2ff0;

    dupable ret4 fadeInMusic(char const* p0) {
        return reinterpret_cast<ret4(*)(GameManager*, char const*)>(address4)(this, p0);
    }

    using ret5 = void;
    static inline auto address5 = base+0x1cca00;

    dupable ret5 getBGTexture(int p0) {
        return reinterpret_cast<ret5(*)(GameManager*, int)>(address5)(this, p0);
    }

    using ret6 = void;
    static inline auto address6 = base+0x1cc5f0;

    dupable ret6 getFontFile(int p0) {
        return reinterpret_cast<ret6(*)(GameManager*, int)>(address6)(this, p0);
    }

    using ret7 = bool;
    static inline auto address7 = base+0x1cccd0;

    dupable ret7 getGameVariable(char const* p0) {
        return reinterpret_cast<ret7(*)(GameManager*, char const*)>(address7)(this, p0);
    }

    using ret8 = int;
    static inline auto address8 = base+0x1cd1d0;

    dupable ret8 getIntGameVariable(char const* p0) {
        return reinterpret_cast<ret8(*)(GameManager*, char const*)>(address8)(this, p0);
    }

    using ret9 = void;
    static inline auto address9 = base+0x1ccfa0;

    dupable ret9 getUGV(char const* p0) {
        return reinterpret_cast<ret9(*)(GameManager*, char const*)>(address9)(this, p0);
    }

    using ret10 = void;
    static inline auto address10 = base+0x1cc690;

    dupable ret10 loadDeathEffect(int p0) {
        return reinterpret_cast<ret10(*)(GameManager*, int)>(address10)(this, p0);
    }

    using ret11 = void;
    static inline auto address11 = base+0x1cc550;

    dupable ret11 loadFont(int p0) {
        return reinterpret_cast<ret11(*)(GameManager*, int)>(address11)(this, p0);
    }

    using ret12 = void;
    static inline auto address12 = base+0x1d08a0;

    dupable ret12 reloadAll(bool p0,bool p1,bool p2) {
        return reinterpret_cast<ret12(*)(GameManager*, bool, bool, bool)>(address12)(this, p0, p1, p2);
    }

    using ret13 = void;
    static inline auto address13 = base+0x1d0b00;

    dupable ret13 reloadAllStep5() {
        return reinterpret_cast<ret13(*)(GameManager*)>(address13)(this);
    }

    using ret14 = void;
    static inline auto address14 = base+0x1c5b00;

    dupable ret14 reportPercentageForLevel(int p0,int p1,bool p2) {
        return reinterpret_cast<ret14(*)(GameManager*, int, int, bool)>(address14)(this, p0, p1, p2);
    }

    using ret15 = void;
    static inline auto address15 = base+0x1cca80;

    dupable ret15 setGameVariable(char const* p0,bool p1) {
        return reinterpret_cast<ret15(*)(GameManager*, char const*, bool)>(address15)(this, p0, p1);
    }

    using ret16 = void;
    static inline auto address16 = base+0x1cd0e0;

    dupable ret16 setIntGameVariable(char const* p0,int p1) {
        return reinterpret_cast<ret16(*)(GameManager*, char const*, int)>(address16)(this, p0, p1);
    }

    using ret17 = void;
    static inline auto address17 = base+0x1cce50;

    dupable ret17 setUGV(char const* p0,bool p1) {
        return reinterpret_cast<ret17(*)(GameManager*, char const*, bool)>(address17)(this, p0, p1);
    }

    using ret18 = GameManager*;
    static inline auto address18 = base+0x1c2b30;

    dupable static ret18 sharedState() {
        return reinterpret_cast<ret18(*)(GameManager*)>(address18)();
    }

    using ret19 = void;
    static inline auto address19 = base+0x1d0e00;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address19)(this);
    }

    using ret20 = void;
    static inline auto address20 = base+0x1cca40;

    dupable ret20 getGTexture(int p0) {
        return reinterpret_cast<ret20(*)(GameManager*, int)>(address20)(this, p0);
    }

    using ret21 = bool;
    static inline auto address21 = base+0x1c2ec0;

    dupable ret21 init() {
        return reinterpret_cast<ret21(*)(GameManager*)>(address21)(this);
    }

    using ret22 = void;
    static inline auto address22 = base+0x1c6460;

    dupable ret22 reportAchievementWithID(char const* p0,int p1,bool p2) {
        return reinterpret_cast<ret22(*)(GameManager*, char const*, int, bool)>(address22)(this, p0, p1, p2);
    }

    using ret23 = void;
    static inline auto address23 = base+0x1d0b40;

    dupable ret23 resolutionForKey(int p0) {
        return reinterpret_cast<ret23(*)(GameManager*, int)>(address23)(this, p0);
    }

    using ret24 = void;
    static inline auto address24 = base+0x1d0270;

    dupable ret24 update(float p0) {
        return reinterpret_cast<ret24(*)(GameManager*, float)>(address24)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(GameManager*))(&$GameManager::accountStatusChanged) != (ret0(D::*)())(&D::accountStatusChanged)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::accountStatusChanged)));
        }

        if constexpr((ret1(*)(GameManager*, int))(&$GameManager::colorForIdx) != (ret1(D::*)(int))(&D::colorForIdx)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(int))(&D::colorForIdx)));
        }

        if constexpr((ret2(*)(GameManager*))(&$GameManager::didExitPlayscene) != (ret2(D::*)())(&D::didExitPlayscene)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::didExitPlayscene)));
        }

        if constexpr((ret3(*)(GameManager*))(&$GameManager::doQuickSave) != (ret3(D::*)())(&D::doQuickSave)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::doQuickSave)));
        }

        if constexpr((ret4(*)(GameManager*, char const*))(&$GameManager::fadeInMusic) != (ret4(D::*)(char const*))(&D::fadeInMusic)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(char const*))(&D::fadeInMusic)));
        }

        if constexpr((ret5(*)(GameManager*, int))(&$GameManager::getBGTexture) != (ret5(D::*)(int))(&D::getBGTexture)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)(int))(&D::getBGTexture)));
        }

        if constexpr((ret6(*)(GameManager*, int))(&$GameManager::getFontFile) != (ret6(D::*)(int))(&D::getFontFile)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)(int))(&D::getFontFile)));
        }

        if constexpr((ret7(*)(GameManager*, char const*))(&$GameManager::getGameVariable) != (ret7(D::*)(char const*))(&D::getGameVariable)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)(char const*))(&D::getGameVariable)));
        }

        if constexpr((ret8(*)(GameManager*, char const*))(&$GameManager::getIntGameVariable) != (ret8(D::*)(char const*))(&D::getIntGameVariable)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfNonVirtual((ret8(D::*)(char const*))(&D::getIntGameVariable)));
        }

        if constexpr((ret9(*)(GameManager*, char const*))(&$GameManager::getUGV) != (ret9(D::*)(char const*))(&D::getUGV)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfNonVirtual((ret9(D::*)(char const*))(&D::getUGV)));
        }

        if constexpr((ret10(*)(GameManager*, int))(&$GameManager::loadDeathEffect) != (ret10(D::*)(int))(&D::loadDeathEffect)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfNonVirtual((ret10(D::*)(int))(&D::loadDeathEffect)));
        }

        if constexpr((ret11(*)(GameManager*, int))(&$GameManager::loadFont) != (ret11(D::*)(int))(&D::loadFont)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfNonVirtual((ret11(D::*)(int))(&D::loadFont)));
        }

        if constexpr((ret12(*)(GameManager*, bool, bool, bool))(&$GameManager::reloadAll) != (ret12(D::*)(bool, bool, bool))(&D::reloadAll)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfNonVirtual((ret12(D::*)(bool, bool, bool))(&D::reloadAll)));
        }

        if constexpr((ret13(*)(GameManager*))(&$GameManager::reloadAllStep5) != (ret13(D::*)())(&D::reloadAllStep5)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfNonVirtual((ret13(D::*)())(&D::reloadAllStep5)));
        }

        if constexpr((ret14(*)(GameManager*, int, int, bool))(&$GameManager::reportPercentageForLevel) != (ret14(D::*)(int, int, bool))(&D::reportPercentageForLevel)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfNonVirtual((ret14(D::*)(int, int, bool))(&D::reportPercentageForLevel)));
        }

        if constexpr((ret15(*)(GameManager*, char const*, bool))(&$GameManager::setGameVariable) != (ret15(D::*)(char const*, bool))(&D::setGameVariable)) {
            modContainer.registerHookEnable(address15, FunctionScrapper::addressOfNonVirtual((ret15(D::*)(char const*, bool))(&D::setGameVariable)));
        }

        if constexpr((ret16(*)(GameManager*, char const*, int))(&$GameManager::setIntGameVariable) != (ret16(D::*)(char const*, int))(&D::setIntGameVariable)) {
            modContainer.registerHookEnable(address16, FunctionScrapper::addressOfNonVirtual((ret16(D::*)(char const*, int))(&D::setIntGameVariable)));
        }

        if constexpr((ret17(*)(GameManager*, char const*, bool))(&$GameManager::setUGV) != (ret17(D::*)(char const*, bool))(&D::setUGV)) {
            modContainer.registerHookEnable(address17, FunctionScrapper::addressOfNonVirtual((ret17(D::*)(char const*, bool))(&D::setUGV)));
        }

        if constexpr((ret18(*)(GameManager*))(&$GameManager::sharedState) != (ret18(D::*)())(&D::sharedState)) {
            modContainer.registerHookEnable(address18, FunctionScrapper::addressOfNonVirtual((ret18(D::*)())(&D::sharedState)));
        }

        if constexpr((ret19(*)(GameManager*))(&$GameManager::destructor) != (ret19(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address19, FunctionScrapper::addressOfNonVirtual((ret19(D::*)())(&D::destructor)));
        }

        if constexpr((ret20(*)(GameManager*, int))(&$GameManager::getGTexture) != (ret20(D::*)(int))(&D::getGTexture)) {
            modContainer.registerHookEnable(address20, FunctionScrapper::addressOfNonVirtual((ret20(D::*)(int))(&D::getGTexture)));
        }

        if constexpr((ret21(*)(GameManager*))(&$GameManager::init) != (ret21(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address21, FunctionScrapper::addressOfNonVirtual((ret21(D::*)())(&D::init)));
        }

        if constexpr((ret22(*)(GameManager*, char const*, int, bool))(&$GameManager::reportAchievementWithID) != (ret22(D::*)(char const*, int, bool))(&D::reportAchievementWithID)) {
            modContainer.registerHookEnable(address22, FunctionScrapper::addressOfNonVirtual((ret22(D::*)(char const*, int, bool))(&D::reportAchievementWithID)));
        }

        if constexpr((ret23(*)(GameManager*, int))(&$GameManager::resolutionForKey) != (ret23(D::*)(int))(&D::resolutionForKey)) {
            modContainer.registerHookEnable(address23, FunctionScrapper::addressOfNonVirtual((ret23(D::*)(int))(&D::resolutionForKey)));
        }

        if constexpr((ret24(*)(GameManager*, float))(&$GameManager::update) != (ret24(D::*)(float))(&D::update)) {
            modContainer.registerHookEnable(address24, FunctionScrapper::addressOfNonVirtual((ret24(D::*)(float))(&D::update)));
        }

        return true;
    }
};

template<class D>
struct $GameLevelManager : GameLevelManager, InterfaceBase {
    $GameLevelManager(const $GameLevelManager& c) : GameLevelManager(c) {}
    $GameLevelManager() = delete;

    using ret0 = GJGameLevel*;
    static inline auto address0 = base+0x2b8180;

    dupable ret0 createNewLevel() {
        return reinterpret_cast<ret0(*)(GameLevelManager*)>(address0)(this);
    }

    using ret1 = GameLevelManager*;
    static inline auto address1 = base+0x2a8340;

    dupable static ret1 sharedState() {
        return reinterpret_cast<ret1(*)(GameLevelManager*)>(address1)();
    }

    using ret2 = void;
    static inline auto address2 = base+0x2c0050;

    dupable ret2 getPageInfo(char const* p0) {
        return reinterpret_cast<ret2(*)(GameLevelManager*, char const*)>(address2)(this, p0);
    }

    using ret3 = cocos2d::CCArray*;
    static inline auto address3 = base+0x2bfe80;

    dupable ret3 getStoredOnlineLevels(char const* p0) {
        return reinterpret_cast<ret3(*)(GameLevelManager*, char const*)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x2ce3d0;

    dupable ret4 getTopArtists(int p0,int p1) {
        return reinterpret_cast<ret4(*)(GameLevelManager*, int, int)>(address4)(this, p0, p1);
    }

    using ret5 = void;
    static inline auto address5 = base+0x2ce7a0;

    dupable ret5 getTopArtistsKey(int p0) {
        return reinterpret_cast<ret5(*)(GameLevelManager*, int)>(address5)(this, p0);
    }

    using ret6 = void;
    static inline auto address6 = base+0x2bfd90;

    dupable ret6 makeTimeStamp(char const* p0) {
        return reinterpret_cast<ret6(*)(GameLevelManager*, char const*)>(address6)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(GameLevelManager*))(&$GameLevelManager::createNewLevel) != (ret0(D::*)())(&D::createNewLevel)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::createNewLevel)));
        }

        if constexpr((ret1(*)(GameLevelManager*))(&$GameLevelManager::sharedState) != (ret1(D::*)())(&D::sharedState)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::sharedState)));
        }

        if constexpr((ret2(*)(GameLevelManager*, char const*))(&$GameLevelManager::getPageInfo) != (ret2(D::*)(char const*))(&D::getPageInfo)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(char const*))(&D::getPageInfo)));
        }

        if constexpr((ret3(*)(GameLevelManager*, char const*))(&$GameLevelManager::getStoredOnlineLevels) != (ret3(D::*)(char const*))(&D::getStoredOnlineLevels)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(char const*))(&D::getStoredOnlineLevels)));
        }

        if constexpr((ret4(*)(GameLevelManager*, int, int))(&$GameLevelManager::getTopArtists) != (ret4(D::*)(int, int))(&D::getTopArtists)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(int, int))(&D::getTopArtists)));
        }

        if constexpr((ret5(*)(GameLevelManager*, int))(&$GameLevelManager::getTopArtistsKey) != (ret5(D::*)(int))(&D::getTopArtistsKey)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)(int))(&D::getTopArtistsKey)));
        }

        if constexpr((ret6(*)(GameLevelManager*, char const*))(&$GameLevelManager::makeTimeStamp) != (ret6(D::*)(char const*))(&D::makeTimeStamp)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)(char const*))(&D::makeTimeStamp)));
        }

        return true;
    }
};

template<class D>
struct $GManager : GManager, InterfaceBase {
    $GManager(const $GManager& c) : GManager(c) {}
    $GManager() = delete;

    using ret1 = void;
    static inline auto address1 = base+0x26f300;

    dupable ret1 save() {
        return reinterpret_cast<ret1(*)(GManager*)>(address1)(this);
    }

    using ret2 = void;
    static inline auto address2 = base+0x26f4b0;

    dupable ret2 saveData(DS_Dictionary* p0,gd::string p1) {
        return reinterpret_cast<ret2(*)(GManager*, DS_Dictionary*, gd::string)>(address2)(this, p0, p1);
    }

    using ret3 = void;
    static inline auto address3 = base+0x26f3b0;

    dupable ret3 saveGMTo(gd::string p0) {
        return reinterpret_cast<ret3(*)(GManager*, gd::string)>(address3)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret1(*)(GManager*))(&$GManager::save) != (ret1(D::*)())(&D::save)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::save)));
        }

        if constexpr((ret2(*)(GManager*, DS_Dictionary*, gd::string))(&$GManager::saveData) != (ret2(D::*)(DS_Dictionary*, gd::string))(&D::saveData)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(DS_Dictionary*, gd::string))(&D::saveData)));
        }

        if constexpr((ret3(*)(GManager*, gd::string))(&$GManager::saveGMTo) != (ret3(D::*)(gd::string))(&D::saveGMTo)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(gd::string))(&D::saveGMTo)));
        }

        return true;
    }
};

template<class D>
struct $GJSpecialColorSelectDelegate : GJSpecialColorSelectDelegate, InterfaceBase {
    $GJSpecialColorSelectDelegate(const $GJSpecialColorSelectDelegate& c) : GJSpecialColorSelectDelegate(c) {}
    $GJSpecialColorSelectDelegate() = delete;
    static bool _apply() {

        return true;
    }
};

template<class D>
struct $GJGameLevel : GJGameLevel, InterfaceBase {
    $GJGameLevel(const $GJGameLevel& c) : GJGameLevel(c) {}
    $GJGameLevel() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x2db2d0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x2dd1c0;

    dupable ret1 encodeWithCoder(DS_Dictionary* p0) {
        return reinterpret_cast<ret1(*)(GJGameLevel*, DS_Dictionary*)>(address1)(this, p0);
    }

    using ret2 = bool;
    static inline auto address2 = base+0x2ddae0;

    dupable ret2 canEncode() {
        return reinterpret_cast<ret2(*)(GJGameLevel*)>(address2)(this);
    }

    using ret3 = bool;
    static inline auto address3 = base+0x2db310;

    dupable ret3 init() {
        return reinterpret_cast<ret3(*)(GJGameLevel*)>(address3)(this);
    }

    using ret4 = GJGameLevel*;
    static inline auto address4 = base+0x2b83e0;

    dupable static ret4 create() {
        return reinterpret_cast<ret4(*)(GJGameLevel*)>(address4)();
    }

    using ret5 = void;
    static inline auto address5 = base+0x2dbe70;

    dupable ret5 getAudioFileName() {
        return reinterpret_cast<ret5(*)(GJGameLevel*)>(address5)(this);
    }

    using ret6 = void;
    static inline auto address6 = base+0x2ce360;

    dupable ret6 getCoinKey(int p0) {
        return reinterpret_cast<ret6(*)(GJGameLevel*, int)>(address6)(this, p0);
    }

    using ret7 = void;
    static inline auto address7 = base+0x2dbba0;

    dupable ret7 getLengthKey(int p0) {
        return reinterpret_cast<ret7(*)(GJGameLevel*, int)>(address7)(this, p0);
    }

    using ret8 = void;
    static inline auto address8 = base+0x2b8b20;

    dupable ret8 getNormalPercent() {
        return reinterpret_cast<ret8(*)(GJGameLevel*)>(address8)(this);
    }

    using ret9 = void;
    static inline auto address9 = base+0x2db530;

    dupable ret9 levelWasAltered() {
        return reinterpret_cast<ret9(*)(GJGameLevel*)>(address9)(this);
    }

    using ret10 = void;
    static inline auto address10 = base+0x2db700;

    dupable ret10 savePercentage(int p0,bool p1,int p2,int p3,bool p4) {
        return reinterpret_cast<ret10(*)(GJGameLevel*, int, bool, int, int, bool)>(address10)(this, p0, p1, p2, p3, p4);
    }
    static bool _apply() {

        if constexpr((ret0(*)(GJGameLevel*))(&$GJGameLevel::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(GJGameLevel*, DS_Dictionary*))(&$GJGameLevel::encodeWithCoder) != (ret1(D::*)(DS_Dictionary*))(&D::encodeWithCoder)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)(DS_Dictionary*))(&D::encodeWithCoder)));
        }

        if constexpr((ret2(*)(GJGameLevel*))(&$GJGameLevel::canEncode) != (ret2(D::*)())(&D::canEncode)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)())(&D::canEncode)));
        }

        if constexpr((ret3(*)(GJGameLevel*))(&$GJGameLevel::init) != (ret3(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)())(&D::init)));
        }

        if constexpr((ret4(*)(GJGameLevel*))(&$GJGameLevel::create) != (ret4(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)())(&D::create)));
        }

        if constexpr((ret5(*)(GJGameLevel*))(&$GJGameLevel::getAudioFileName) != (ret5(D::*)())(&D::getAudioFileName)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)())(&D::getAudioFileName)));
        }

        if constexpr((ret6(*)(GJGameLevel*, int))(&$GJGameLevel::getCoinKey) != (ret6(D::*)(int))(&D::getCoinKey)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)(int))(&D::getCoinKey)));
        }

        if constexpr((ret7(*)(GJGameLevel*, int))(&$GJGameLevel::getLengthKey) != (ret7(D::*)(int))(&D::getLengthKey)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)(int))(&D::getLengthKey)));
        }

        if constexpr((ret8(*)(GJGameLevel*))(&$GJGameLevel::getNormalPercent) != (ret8(D::*)())(&D::getNormalPercent)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfNonVirtual((ret8(D::*)())(&D::getNormalPercent)));
        }

        if constexpr((ret9(*)(GJGameLevel*))(&$GJGameLevel::levelWasAltered) != (ret9(D::*)())(&D::levelWasAltered)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfNonVirtual((ret9(D::*)())(&D::levelWasAltered)));
        }

        if constexpr((ret10(*)(GJGameLevel*, int, bool, int, int, bool))(&$GJGameLevel::savePercentage) != (ret10(D::*)(int, bool, int, int, bool))(&D::savePercentage)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfNonVirtual((ret10(D::*)(int, bool, int, int, bool))(&D::savePercentage)));
        }

        return true;
    }
};

template<class D>
struct $GJDropDownLayer : GJDropDownLayer, InterfaceBase {
    $GJDropDownLayer(const $GJDropDownLayer& c) : GJDropDownLayer(c) {}
    $GJDropDownLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x352570;

    dupable ret0 customSetup() {
        return reinterpret_cast<ret0(*)(GJDropDownLayer*)>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x3525c0;

    dupable ret1 enterLayer() {
        return reinterpret_cast<ret1(*)(GJDropDownLayer*)>(address1)(this);
    }

    using ret2 = void;
    static inline auto address2 = base+0x352670;

    dupable ret2 exitLayer(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret2(*)(GJDropDownLayer*, cocos2d::CCObject*)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x3526c0;

    dupable ret3 showLayer(bool p0) {
        return reinterpret_cast<ret3(*)(GJDropDownLayer*, bool)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x3527b0;

    dupable ret4 hideLayer(bool p0) {
        return reinterpret_cast<ret4(*)(GJDropDownLayer*, bool)>(address4)(this, p0);
    }

    using ret5 = void;
    static inline auto address5 = base+0x3528b0;

    dupable ret5 layerVisible() {
        return reinterpret_cast<ret5(*)(GJDropDownLayer*)>(address5)(this);
    }

    using ret6 = void;
    static inline auto address6 = base+0x3528d0;

    dupable ret6 layerHidden() {
        return reinterpret_cast<ret6(*)(GJDropDownLayer*)>(address6)(this);
    }

    using ret7 = void;
    static inline auto address7 = base+0x3528a0;

    dupable ret7 enterAnimFinished() {
        return reinterpret_cast<ret7(*)(GJDropDownLayer*)>(address7)(this);
    }

    using ret8 = void;
    static inline auto address8 = base+0x352580;

    dupable ret8 disableUI() {
        return reinterpret_cast<ret8(*)(GJDropDownLayer*)>(address8)(this);
    }

    using ret9 = void;
    static inline auto address9 = base+0x3525a0;

    dupable ret9 enableUI() {
        return reinterpret_cast<ret9(*)(GJDropDownLayer*)>(address9)(this);
    }

    using ret10 = void;
    static inline auto address10 = base+0x352910;

    dupable ret10 draw() {
        return reinterpret_cast<ret10(*)(GJDropDownLayer*)>(address10)(this);
    }

    using ret11 = bool;
    static inline auto address11 = base+0x352100;

    dupable ret11 init(char const* p0,float p1) {
        return reinterpret_cast<ret11(*)(GJDropDownLayer*, char const*, float)>(address11)(this, p0, p1);
    }

    using ret12 = void;
    static inline auto address12 = base+0x3525f0;

    dupable ret12 registerWithTouchDispatcher() {
        return reinterpret_cast<ret12(*)(GJDropDownLayer*)>(address12)(this);
    }

    using ret13 = void;
    static inline auto address13 = base+0x352630;

    dupable ret13 keyBackClicked() {
        return reinterpret_cast<ret13(*)(GJDropDownLayer*)>(address13)(this);
    }

    using ret14 = GJDropDownLayer*;
    static inline auto address14 = base+0x352530;

    dupable static ret14 create(char const* p0) {
        return reinterpret_cast<ret14(*)(GJDropDownLayer*, char const*)>(address14)(p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(GJDropDownLayer*))(&$GJDropDownLayer::customSetup) != (ret0(D::*)())(&D::customSetup)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfVirtual((ret0(D::*)())(&D::customSetup)));
        }

        if constexpr((ret1(*)(GJDropDownLayer*))(&$GJDropDownLayer::enterLayer) != (ret1(D::*)())(&D::enterLayer)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::enterLayer)));
        }

        if constexpr((ret2(*)(GJDropDownLayer*, cocos2d::CCObject*))(&$GJDropDownLayer::exitLayer) != (ret2(D::*)(cocos2d::CCObject*))(&D::exitLayer)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)(cocos2d::CCObject*))(&D::exitLayer)));
        }

        if constexpr((ret3(*)(GJDropDownLayer*, bool))(&$GJDropDownLayer::showLayer) != (ret3(D::*)(bool))(&D::showLayer)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)(bool))(&D::showLayer)));
        }

        if constexpr((ret4(*)(GJDropDownLayer*, bool))(&$GJDropDownLayer::hideLayer) != (ret4(D::*)(bool))(&D::hideLayer)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)(bool))(&D::hideLayer)));
        }

        if constexpr((ret5(*)(GJDropDownLayer*))(&$GJDropDownLayer::layerVisible) != (ret5(D::*)())(&D::layerVisible)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)())(&D::layerVisible)));
        }

        if constexpr((ret6(*)(GJDropDownLayer*))(&$GJDropDownLayer::layerHidden) != (ret6(D::*)())(&D::layerHidden)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)())(&D::layerHidden)));
        }

        if constexpr((ret7(*)(GJDropDownLayer*))(&$GJDropDownLayer::enterAnimFinished) != (ret7(D::*)())(&D::enterAnimFinished)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)())(&D::enterAnimFinished)));
        }

        if constexpr((ret8(*)(GJDropDownLayer*))(&$GJDropDownLayer::disableUI) != (ret8(D::*)())(&D::disableUI)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)())(&D::disableUI)));
        }

        if constexpr((ret9(*)(GJDropDownLayer*))(&$GJDropDownLayer::enableUI) != (ret9(D::*)())(&D::enableUI)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfVirtual((ret9(D::*)())(&D::enableUI)));
        }

        if constexpr((ret10(*)(GJDropDownLayer*))(&$GJDropDownLayer::draw) != (ret10(D::*)())(&D::draw)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfVirtual((ret10(D::*)())(&D::draw)));
        }

        if constexpr((ret11(*)(GJDropDownLayer*, char const*, float))(&$GJDropDownLayer::init) != (ret11(D::*)(char const*, float))(&D::init)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfNonVirtual((ret11(D::*)(char const*, float))(&D::init)));
        }

        if constexpr((ret12(*)(GJDropDownLayer*))(&$GJDropDownLayer::registerWithTouchDispatcher) != (ret12(D::*)())(&D::registerWithTouchDispatcher)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfVirtual((ret12(D::*)())(&D::registerWithTouchDispatcher)));
        }

        if constexpr((ret13(*)(GJDropDownLayer*))(&$GJDropDownLayer::keyBackClicked) != (ret13(D::*)())(&D::keyBackClicked)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfVirtual((ret13(D::*)())(&D::keyBackClicked)));
        }

        if constexpr((ret14(*)(GJDropDownLayer*, char const*))(&$GJDropDownLayer::create) != (ret14(D::*)(char const*))(&D::create)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfNonVirtual((ret14(D::*)(char const*))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $TextArea : TextArea, InterfaceBase {
    $TextArea(const $TextArea& c) : TextArea(c) {}
    $TextArea() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x19faa0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x19f890;

    dupable ret1 draw() {
        return reinterpret_cast<ret1(*)(TextArea*)>(address1)(this);
    }

    using ret2 = void;
    static inline auto address2 = base+0x19f760;

    dupable ret2 setOpacity(unsigned char p0) {
        return reinterpret_cast<ret2(*)(TextArea*, unsigned char)>(address2)(this, p0);
    }

    using ret3 = TextArea*;
    static inline auto address3 = base+0x19eb40;

    dupable static ret3 create(gd::string p0,char const* p1,float p2,float p3,cocos2d::CCPoint p4,float p5,bool p6) {
        return reinterpret_cast<ret3(*)(TextArea*, gd::string, char const*, float, float, cocos2d::CCPoint, float, bool)>(address3)(p0, p1, p2, p3, p4, p5, p6);
    }
    static bool _apply() {

        if constexpr((ret0(*)(TextArea*))(&$TextArea::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(TextArea*))(&$TextArea::draw) != (ret1(D::*)())(&D::draw)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::draw)));
        }

        if constexpr((ret2(*)(TextArea*, unsigned char))(&$TextArea::setOpacity) != (ret2(D::*)(unsigned char))(&D::setOpacity)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)(unsigned char))(&D::setOpacity)));
        }

        if constexpr((ret3(*)(TextArea*, gd::string, char const*, float, float, cocos2d::CCPoint, float, bool))(&$TextArea::create) != (ret3(D::*)(gd::string, char const*, float, float, cocos2d::CCPoint, float, bool))(&D::create)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(gd::string, char const*, float, float, cocos2d::CCPoint, float, bool))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $GJBaseGameLayer : GJBaseGameLayer, InterfaceBase {
    $GJBaseGameLayer(const $GJBaseGameLayer& c) : GJBaseGameLayer(c) {}
    $GJBaseGameLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0xb6d90;

    dupable ret0 objectsCollided(int p0,int p1) {
        return reinterpret_cast<ret0(*)(GJBaseGameLayer*, int, int)>(address0)(this, p0, p1);
    }

    using ret1 = void;
    static inline auto address1 = base+0xb73a0;

    dupable ret1 createMoveCommand(cocos2d::CCPoint p0,int p1,float p2,int p3,float p4,bool p5,bool p6,int p7) {
        return reinterpret_cast<ret1(*)(GJBaseGameLayer*, cocos2d::CCPoint, int, float, int, float, bool, bool, int)>(address1)(this, p0, p1, p2, p3, p4, p5, p6, p7);
    }

    using ret2 = void;
    static inline auto address2 = base+0xb7420;

    dupable ret2 updateColor(cocos2d::_ccColor3B p0,float p1,int p2,bool p3,float p4,cocos2d::_ccHSVValue p5,int p6,bool p7,int p8,EffectGameObject* p9) {
        return reinterpret_cast<ret2(*)(GJBaseGameLayer*, cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)>(address2)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
    }

    using ret3 = void;
    static inline auto address3 = base+0xba990;

    dupable ret3 flipGravity(PlayerObject* p0,bool p1,bool p2) {
        return reinterpret_cast<ret3(*)(GJBaseGameLayer*, PlayerObject*, bool, bool)>(address3)(this, p0, p1, p2);
    }

    using ret4 = void;
    static inline auto address4 = base+0xba9a0;

    dupable ret4 calculateColorValues(EffectGameObject* p0,EffectGameObject* p1,int p2,float p3,ColorActionSprite* p4,GJEffectManager* p5) {
        return reinterpret_cast<ret4(*)(GJBaseGameLayer*, EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)>(address4)(this, p0, p1, p2, p3, p4, p5);
    }

    using ret5 = void;
    static inline auto address5 = base+0xb75a0;

    dupable ret5 toggleGroupTriggered(int p0,bool p1) {
        return reinterpret_cast<ret5(*)(GJBaseGameLayer*, int, bool)>(address5)(this, p0, p1);
    }

    using ret6 = void;
    static inline auto address6 = base+0xb7050;

    dupable ret6 spawnGroup(int p0) {
        return reinterpret_cast<ret6(*)(GJBaseGameLayer*, int)>(address6)(this, p0);
    }

    using ret7 = void;
    static inline auto address7 = base+0xb7b70;

    dupable ret7 addToSection(GameObject* p0) {
        return reinterpret_cast<ret7(*)(GJBaseGameLayer*, GameObject*)>(address7)(this, p0);
    }

    using ret8 = void;
    static inline auto address8 = base+0xb77f0;

    dupable ret8 addToGroup(GameObject* p0,int p1,bool p2) {
        return reinterpret_cast<ret8(*)(GJBaseGameLayer*, GameObject*, int, bool)>(address8)(this, p0, p1, p2);
    }

    using ret9 = void;
    static inline auto address9 = base+0xb7a60;

    dupable ret9 removeFromGroup(GameObject* p0,int p1) {
        return reinterpret_cast<ret9(*)(GJBaseGameLayer*, GameObject*, int)>(address9)(this, p0, p1);
    }

    using ret10 = bool;
    static inline auto address10 = base+0xafc90;

    dupable ret10 init() {
        return reinterpret_cast<ret10(*)(GJBaseGameLayer*)>(address10)(this);
    }

    using ret11 = void;
    static inline auto address11 = base+0xb9eb0;

    dupable ret11 addObjectCounter(LabelGameObject* p0,int p1) {
        return reinterpret_cast<ret11(*)(GJBaseGameLayer*, LabelGameObject*, int)>(address11)(this, p0, p1);
    }

    using ret12 = void;
    static inline auto address12 = base+0xb7780;

    dupable ret12 addToGroups(GameObject* p0,bool p1) {
        return reinterpret_cast<ret12(*)(GJBaseGameLayer*, GameObject*, bool)>(address12)(this, p0, p1);
    }

    using ret13 = void;
    static inline auto address13 = base+0xb21e0;

    dupable ret13 atlasValue(int p0) {
        return reinterpret_cast<ret13(*)(GJBaseGameLayer*, int)>(address13)(this, p0);
    }

    using ret14 = void;
    static inline auto address14 = base+0xb6860;

    dupable ret14 bumpPlayer(PlayerObject* p0,GameObject* p1) {
        return reinterpret_cast<ret14(*)(GJBaseGameLayer*, PlayerObject*, GameObject*)>(address14)(this, p0, p1);
    }

    using ret15 = void;
    static inline auto address15 = base+0xb5be0;

    dupable ret15 calculateOpacityValues(EffectGameObject* p0,EffectGameObject* p1,float p2,GJEffectManager* p3) {
        return reinterpret_cast<ret15(*)(GJBaseGameLayer*, EffectGameObject*, EffectGameObject*, float, GJEffectManager*)>(address15)(this, p0, p1, p2, p3);
    }

    using ret16 = void;
    static inline auto address16 = base+0xb6f90;

    dupable ret16 checkSpawnObjects() {
        return reinterpret_cast<ret16(*)(GJBaseGameLayer*)>(address16)(this);
    }

    using ret17 = void;
    static inline auto address17 = base+0xb9e20;

    dupable ret17 collectItem(int p0,int p1) {
        return reinterpret_cast<ret17(*)(GJBaseGameLayer*, int, int)>(address17)(this, p0, p1);
    }

    using ret18 = void;
    static inline auto address18 = base+0xb9b60;

    dupable ret18 collectedObject(EffectGameObject* p0) {
        return reinterpret_cast<ret18(*)(GJBaseGameLayer*, EffectGameObject*)>(address18)(this, p0);
    }

    using ret19 = void;
    static inline auto address19 = base+0xb5260;

    dupable ret19 createTextLayers() {
        return reinterpret_cast<ret19(*)(GJBaseGameLayer*)>(address19)(this);
    }

    using ret20 = cocos2d::CCArray*;
    static inline auto address20 = base+0xb6140;

    dupable ret20 damagingObjectsInRect(cocos2d::CCRect p0) {
        return reinterpret_cast<ret20(*)(GJBaseGameLayer*, cocos2d::CCRect)>(address20)(this, p0);
    }

    using ret21 = void;
    static inline auto address21 = base+0xb11e0;

    dupable ret21 enableHighCapacityMode() {
        return reinterpret_cast<ret21(*)(GJBaseGameLayer*)>(address21)(this);
    }

    using ret22 = void;
    static inline auto address22 = base+0xb2210;

    dupable ret22 getCapacityString() {
        return reinterpret_cast<ret22(*)(GJBaseGameLayer*)>(address22)(this);
    }

    using ret23 = void;
    static inline auto address23 = base+0xb6630;

    dupable ret23 getGroundHeightForMode(int p0) {
        return reinterpret_cast<ret23(*)(GJBaseGameLayer*, int)>(address23)(this, p0);
    }

    using ret24 = void;
    static inline auto address24 = base+0xb6f20;

    dupable ret24 getGroup(int p0) {
        return reinterpret_cast<ret24(*)(GJBaseGameLayer*, int)>(address24)(this, p0);
    }

    using ret25 = void;
    static inline auto address25 = base+0xb6db0;

    dupable ret25 getMoveDeltaForObjects(int p0,int p1) {
        return reinterpret_cast<ret25(*)(GJBaseGameLayer*, int, int)>(address25)(this, p0, p1);
    }

    using ret26 = void;
    static inline auto address26 = base+0xb7940;

    dupable ret26 getOptimizedGroup(int p0) {
        return reinterpret_cast<ret26(*)(GJBaseGameLayer*, int)>(address26)(this, p0);
    }

    using ret27 = void;
    static inline auto address27 = base+0xb79a0;

    dupable ret27 getStaticGroup(int p0) {
        return reinterpret_cast<ret27(*)(GJBaseGameLayer*, int)>(address27)(this, p0);
    }

    using ret28 = void;
    static inline auto address28 = base+0xb5cc0;

    dupable ret28 isGroupDisabledForObject(GameObject* p0) {
        return reinterpret_cast<ret28(*)(GJBaseGameLayer*, GameObject*)>(address28)(this, p0);
    }

    using ret29 = void;
    static inline auto address29 = base+0xb5de0;

    dupable ret29 isGroupDisabledForObjectFull(GameObject* p0,cocos2d::CCArray* p1) {
        return reinterpret_cast<ret29(*)(GJBaseGameLayer*, GameObject*, cocos2d::CCArray*)>(address29)(this, p0, p1);
    }

    using ret30 = void;
    static inline auto address30 = base+0xba680;

    dupable ret30 loadUpToPosition(float p0) {
        return reinterpret_cast<ret30(*)(GJBaseGameLayer*, float)>(address30)(this, p0);
    }

    using ret31 = void;
    static inline auto address31 = base+0xb66e0;

    dupable ret31 objectIntersectsCircle(GameObject* p0,GameObject* p1) {
        return reinterpret_cast<ret31(*)(GJBaseGameLayer*, GameObject*, GameObject*)>(address31)(this, p0, p1);
    }

    using ret32 = void;
    static inline auto address32 = base+0xb71b0;

    dupable ret32 objectTriggered(EffectGameObject* p0) {
        return reinterpret_cast<ret32(*)(GJBaseGameLayer*, EffectGameObject*)>(address32)(this, p0);
    }

    using ret33 = void;
    static inline auto address33 = base+0xb96c0;

    dupable ret33 optimizeMoveGroups() {
        return reinterpret_cast<ret33(*)(GJBaseGameLayer*)>(address33)(this);
    }

    using ret34 = void;
    static inline auto address34 = base+0xb55d0;

    dupable ret34 parentForZLayer(int p0,bool p1,int p2) {
        return reinterpret_cast<ret34(*)(GJBaseGameLayer*, int, bool, int)>(address34)(this, p0, p1, p2);
    }

    using ret35 = void;
    static inline auto address35 = base+0xb69e0;

    dupable ret35 playerTouchedRing(PlayerObject* p0,GameObject* p1) {
        return reinterpret_cast<ret35(*)(GJBaseGameLayer*, PlayerObject*, GameObject*)>(address35)(this, p0, p1);
    }

    using ret36 = void;
    static inline auto address36 = base+0xb5a90;

    dupable ret36 processColorObject(EffectGameObject* p0,int p1,cocos2d::CCDictionary* p2,float p3,GJEffectManager* p4) {
        return reinterpret_cast<ret36(*)(GJBaseGameLayer*, EffectGameObject*, int, cocos2d::CCDictionary*, float, GJEffectManager*)>(address36)(this, p0, p1, p2, p3, p4);
    }

    using ret37 = void;
    static inline auto address37 = base+0xb8fd0;

    dupable ret37 processFollowActions() {
        return reinterpret_cast<ret37(*)(GJBaseGameLayer*)>(address37)(this);
    }

    using ret38 = void;
    static inline auto address38 = base+0xb86c0;

    dupable ret38 processMoveActions() {
        return reinterpret_cast<ret38(*)(GJBaseGameLayer*)>(address38)(this);
    }

    using ret39 = void;
    static inline auto address39 = base+0xb7ea0;

    dupable ret39 processMoveActionsStep(float p0) {
        return reinterpret_cast<ret39(*)(GJBaseGameLayer*, float)>(address39)(this, p0);
    }

    using ret40 = void;
    static inline auto address40 = base+0xb5ae0;

    dupable ret40 processOpacityObject(EffectGameObject* p0,cocos2d::CCDictionary* p1,float p2,GJEffectManager* p3) {
        return reinterpret_cast<ret40(*)(GJBaseGameLayer*, EffectGameObject*, cocos2d::CCDictionary*, float, GJEffectManager*)>(address40)(this, p0, p1, p2, p3);
    }

    using ret41 = void;
    static inline auto address41 = base+0xb8b50;

    dupable ret41 processPlayerFollowActions(float p0) {
        return reinterpret_cast<ret41(*)(GJBaseGameLayer*, float)>(address41)(this, p0);
    }

    using ret42 = void;
    static inline auto address42 = base+0xb7fd0;

    dupable ret42 processRotationActions() {
        return reinterpret_cast<ret42(*)(GJBaseGameLayer*)>(address42)(this);
    }

    using ret43 = void;
    static inline auto address43 = base+0xb9920;

    dupable ret43 pushButton(int p0,bool p1) {
        return reinterpret_cast<ret43(*)(GJBaseGameLayer*, int, bool)>(address43)(this, p0, p1);
    }

    using ret44 = void;
    static inline auto address44 = base+0xb6470;

    dupable ret44 rectIntersectsCircle(cocos2d::CCRect p0,cocos2d::CCPoint p1,float p2) {
        return reinterpret_cast<ret44(*)(GJBaseGameLayer*, cocos2d::CCRect, cocos2d::CCPoint, float)>(address44)(this, p0, p1, p2);
    }

    using ret45 = void;
    static inline auto address45 = base+0xb9fc0;

    dupable ret45 refreshCounterLabels() {
        return reinterpret_cast<ret45(*)(GJBaseGameLayer*)>(address45)(this);
    }

    using ret46 = void;
    static inline auto address46 = base+0xb9a00;

    dupable ret46 releaseButton(int p0,bool p1) {
        return reinterpret_cast<ret46(*)(GJBaseGameLayer*, int, bool)>(address46)(this, p0, p1);
    }

    using ret47 = void;
    static inline auto address47 = base+0xb7a00;

    dupable ret47 removeFromGroups(GameObject* p0) {
        return reinterpret_cast<ret47(*)(GJBaseGameLayer*, GameObject*)>(address47)(this, p0);
    }

    using ret48 = void;
    static inline auto address48 = base+0xb7e00;

    dupable ret48 removeObjectFromSection(GameObject* p0) {
        return reinterpret_cast<ret48(*)(GJBaseGameLayer*, GameObject*)>(address48)(this, p0);
    }

    using ret49 = void;
    static inline auto address49 = base+0xb7cb0;

    dupable ret49 reorderObjectSection(GameObject* p0) {
        return reinterpret_cast<ret49(*)(GJBaseGameLayer*, GameObject*)>(address49)(this, p0);
    }

    using ret50 = void;
    static inline auto address50 = base+0xba300;

    dupable ret50 resetGroupCounters(bool p0) {
        return reinterpret_cast<ret50(*)(GJBaseGameLayer*, bool)>(address50)(this, p0);
    }

    using ret51 = void;
    static inline auto address51 = base+0xb9670;

    dupable ret51 resetMoveOptimizedValue() {
        return reinterpret_cast<ret51(*)(GJBaseGameLayer*)>(address51)(this);
    }

    using ret52 = int;
    static inline auto address52 = base+0xb6120;

    dupable ret52 sectionForPos(float p0) {
        return reinterpret_cast<ret52(*)(GJBaseGameLayer*, float)>(address52)(this, p0);
    }

    using ret53 = void;
    static inline auto address53 = base+0xaffe0;

    dupable ret53 setupLayers() {
        return reinterpret_cast<ret53(*)(GJBaseGameLayer*)>(address53)(this);
    }

    using ret54 = void;
    static inline auto address54 = base+0xb1100;

    dupable ret54 shouldExitHackedLevel() {
        return reinterpret_cast<ret54(*)(GJBaseGameLayer*)>(address54)(this);
    }

    using ret55 = void;
    static inline auto address55 = base+0xb7020;

    dupable ret55 spawnGroupTriggered(int p0,float p1,int p2) {
        return reinterpret_cast<ret55(*)(GJBaseGameLayer*, int, float, int)>(address55)(this, p0, p1, p2);
    }

    using ret56 = cocos2d::CCArray*;
    static inline auto address56 = base+0xb5f90;

    dupable ret56 staticObjectsInRect(cocos2d::CCRect p0) {
        return reinterpret_cast<ret56(*)(GJBaseGameLayer*, cocos2d::CCRect)>(address56)(this, p0);
    }

    using ret57 = void;
    static inline auto address57 = base+0xb9ae0;

    dupable ret57 testInstantCountTrigger(int p0,int p1,int p2,bool p3,int p4) {
        return reinterpret_cast<ret57(*)(GJBaseGameLayer*, int, int, int, bool, int)>(address57)(this, p0, p1, p2, p3, p4);
    }

    using ret58 = void;
    static inline auto address58 = base+0xb75f0;

    dupable ret58 toggleGroup(int p0,bool p1) {
        return reinterpret_cast<ret58(*)(GJBaseGameLayer*, int, bool)>(address58)(this, p0, p1);
    }

    using ret59 = void;
    static inline auto address59 = base+0xba910;

    dupable ret59 togglePlayerVisibility(bool p0) {
        return reinterpret_cast<ret59(*)(GJBaseGameLayer*, bool)>(address59)(this, p0);
    }

    using ret60 = void;
    static inline auto address60 = base+0xb7290;

    dupable ret60 triggerMoveCommand(EffectGameObject* p0) {
        return reinterpret_cast<ret60(*)(GJBaseGameLayer*, EffectGameObject*)>(address60)(this, p0);
    }

    using ret61 = void;
    static inline auto address61 = base+0xb6a30;

    dupable ret61 updateCollisionBlocks() {
        return reinterpret_cast<ret61(*)(GJBaseGameLayer*)>(address61)(this);
    }

    using ret62 = void;
    static inline auto address62 = base+0xb9bc0;

    dupable ret62 updateCounters(int p0,int p1) {
        return reinterpret_cast<ret62(*)(GJBaseGameLayer*, int, int)>(address62)(this, p0, p1);
    }

    using ret63 = void;
    static inline auto address63 = base+0xb95b0;

    dupable ret63 updateDisabledObjectsLastPos(cocos2d::CCArray* p0) {
        return reinterpret_cast<ret63(*)(GJBaseGameLayer*, cocos2d::CCArray*)>(address63)(this, p0);
    }

    using ret64 = void;
    static inline auto address64 = base+0xb1680;

    dupable ret64 updateLayerCapacity(gd::string p0) {
        return reinterpret_cast<ret64(*)(GJBaseGameLayer*, gd::string)>(address64)(this, p0);
    }

    using ret65 = void;
    static inline auto address65 = base+0xb1590;

    dupable ret65 updateLegacyLayerCapacity(int p0,int p1,int p2,int p3) {
        return reinterpret_cast<ret65(*)(GJBaseGameLayer*, int, int, int, int)>(address65)(this, p0, p1, p2, p3);
    }

    using ret66 = void;
    static inline auto address66 = base+0xb63f0;

    dupable ret66 updateOBB2(cocos2d::CCRect p0) {
        return reinterpret_cast<ret66(*)(GJBaseGameLayer*, cocos2d::CCRect)>(address66)(this, p0);
    }

    using ret67 = void;
    static inline auto address67 = base+0xb9f30;

    dupable ret67 updateQueuedLabels() {
        return reinterpret_cast<ret67(*)(GJBaseGameLayer*)>(address67)(this);
    }

    using ret68 = void;
    static inline auto address68 = base+0xaf990;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address68)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(GJBaseGameLayer*, int, int))(&$GJBaseGameLayer::objectsCollided) != (ret0(D::*)(int, int))(&D::objectsCollided)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfVirtual((ret0(D::*)(int, int))(&D::objectsCollided)));
        }

        if constexpr((ret1(*)(GJBaseGameLayer*, cocos2d::CCPoint, int, float, int, float, bool, bool, int))(&$GJBaseGameLayer::createMoveCommand) != (ret1(D::*)(cocos2d::CCPoint, int, float, int, float, bool, bool, int))(&D::createMoveCommand)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)(cocos2d::CCPoint, int, float, int, float, bool, bool, int))(&D::createMoveCommand)));
        }

        if constexpr((ret2(*)(GJBaseGameLayer*, cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*))(&$GJBaseGameLayer::updateColor) != (ret2(D::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*))(&D::updateColor)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*))(&D::updateColor)));
        }

        if constexpr((ret3(*)(GJBaseGameLayer*, PlayerObject*, bool, bool))(&$GJBaseGameLayer::flipGravity) != (ret3(D::*)(PlayerObject*, bool, bool))(&D::flipGravity)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)(PlayerObject*, bool, bool))(&D::flipGravity)));
        }

        if constexpr((ret4(*)(GJBaseGameLayer*, EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*))(&$GJBaseGameLayer::calculateColorValues) != (ret4(D::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*))(&D::calculateColorValues)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*))(&D::calculateColorValues)));
        }

        if constexpr((ret5(*)(GJBaseGameLayer*, int, bool))(&$GJBaseGameLayer::toggleGroupTriggered) != (ret5(D::*)(int, bool))(&D::toggleGroupTriggered)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)(int, bool))(&D::toggleGroupTriggered)));
        }

        if constexpr((ret6(*)(GJBaseGameLayer*, int))(&$GJBaseGameLayer::spawnGroup) != (ret6(D::*)(int))(&D::spawnGroup)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)(int))(&D::spawnGroup)));
        }

        if constexpr((ret7(*)(GJBaseGameLayer*, GameObject*))(&$GJBaseGameLayer::addToSection) != (ret7(D::*)(GameObject*))(&D::addToSection)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)(GameObject*))(&D::addToSection)));
        }

        if constexpr((ret8(*)(GJBaseGameLayer*, GameObject*, int, bool))(&$GJBaseGameLayer::addToGroup) != (ret8(D::*)(GameObject*, int, bool))(&D::addToGroup)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)(GameObject*, int, bool))(&D::addToGroup)));
        }

        if constexpr((ret9(*)(GJBaseGameLayer*, GameObject*, int))(&$GJBaseGameLayer::removeFromGroup) != (ret9(D::*)(GameObject*, int))(&D::removeFromGroup)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfVirtual((ret9(D::*)(GameObject*, int))(&D::removeFromGroup)));
        }

        if constexpr((ret10(*)(GJBaseGameLayer*))(&$GJBaseGameLayer::init) != (ret10(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfVirtual((ret10(D::*)())(&D::init)));
        }

        if constexpr((ret11(*)(GJBaseGameLayer*, LabelGameObject*, int))(&$GJBaseGameLayer::addObjectCounter) != (ret11(D::*)(LabelGameObject*, int))(&D::addObjectCounter)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfNonVirtual((ret11(D::*)(LabelGameObject*, int))(&D::addObjectCounter)));
        }

        if constexpr((ret12(*)(GJBaseGameLayer*, GameObject*, bool))(&$GJBaseGameLayer::addToGroups) != (ret12(D::*)(GameObject*, bool))(&D::addToGroups)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfNonVirtual((ret12(D::*)(GameObject*, bool))(&D::addToGroups)));
        }

        if constexpr((ret13(*)(GJBaseGameLayer*, int))(&$GJBaseGameLayer::atlasValue) != (ret13(D::*)(int))(&D::atlasValue)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfNonVirtual((ret13(D::*)(int))(&D::atlasValue)));
        }

        if constexpr((ret14(*)(GJBaseGameLayer*, PlayerObject*, GameObject*))(&$GJBaseGameLayer::bumpPlayer) != (ret14(D::*)(PlayerObject*, GameObject*))(&D::bumpPlayer)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfNonVirtual((ret14(D::*)(PlayerObject*, GameObject*))(&D::bumpPlayer)));
        }

        if constexpr((ret15(*)(GJBaseGameLayer*, EffectGameObject*, EffectGameObject*, float, GJEffectManager*))(&$GJBaseGameLayer::calculateOpacityValues) != (ret15(D::*)(EffectGameObject*, EffectGameObject*, float, GJEffectManager*))(&D::calculateOpacityValues)) {
            modContainer.registerHookEnable(address15, FunctionScrapper::addressOfNonVirtual((ret15(D::*)(EffectGameObject*, EffectGameObject*, float, GJEffectManager*))(&D::calculateOpacityValues)));
        }

        if constexpr((ret16(*)(GJBaseGameLayer*))(&$GJBaseGameLayer::checkSpawnObjects) != (ret16(D::*)())(&D::checkSpawnObjects)) {
            modContainer.registerHookEnable(address16, FunctionScrapper::addressOfNonVirtual((ret16(D::*)())(&D::checkSpawnObjects)));
        }

        if constexpr((ret17(*)(GJBaseGameLayer*, int, int))(&$GJBaseGameLayer::collectItem) != (ret17(D::*)(int, int))(&D::collectItem)) {
            modContainer.registerHookEnable(address17, FunctionScrapper::addressOfNonVirtual((ret17(D::*)(int, int))(&D::collectItem)));
        }

        if constexpr((ret18(*)(GJBaseGameLayer*, EffectGameObject*))(&$GJBaseGameLayer::collectedObject) != (ret18(D::*)(EffectGameObject*))(&D::collectedObject)) {
            modContainer.registerHookEnable(address18, FunctionScrapper::addressOfNonVirtual((ret18(D::*)(EffectGameObject*))(&D::collectedObject)));
        }

        if constexpr((ret19(*)(GJBaseGameLayer*))(&$GJBaseGameLayer::createTextLayers) != (ret19(D::*)())(&D::createTextLayers)) {
            modContainer.registerHookEnable(address19, FunctionScrapper::addressOfNonVirtual((ret19(D::*)())(&D::createTextLayers)));
        }

        if constexpr((ret20(*)(GJBaseGameLayer*, cocos2d::CCRect))(&$GJBaseGameLayer::damagingObjectsInRect) != (ret20(D::*)(cocos2d::CCRect))(&D::damagingObjectsInRect)) {
            modContainer.registerHookEnable(address20, FunctionScrapper::addressOfNonVirtual((ret20(D::*)(cocos2d::CCRect))(&D::damagingObjectsInRect)));
        }

        if constexpr((ret21(*)(GJBaseGameLayer*))(&$GJBaseGameLayer::enableHighCapacityMode) != (ret21(D::*)())(&D::enableHighCapacityMode)) {
            modContainer.registerHookEnable(address21, FunctionScrapper::addressOfNonVirtual((ret21(D::*)())(&D::enableHighCapacityMode)));
        }

        if constexpr((ret22(*)(GJBaseGameLayer*))(&$GJBaseGameLayer::getCapacityString) != (ret22(D::*)())(&D::getCapacityString)) {
            modContainer.registerHookEnable(address22, FunctionScrapper::addressOfNonVirtual((ret22(D::*)())(&D::getCapacityString)));
        }

        if constexpr((ret23(*)(GJBaseGameLayer*, int))(&$GJBaseGameLayer::getGroundHeightForMode) != (ret23(D::*)(int))(&D::getGroundHeightForMode)) {
            modContainer.registerHookEnable(address23, FunctionScrapper::addressOfNonVirtual((ret23(D::*)(int))(&D::getGroundHeightForMode)));
        }

        if constexpr((ret24(*)(GJBaseGameLayer*, int))(&$GJBaseGameLayer::getGroup) != (ret24(D::*)(int))(&D::getGroup)) {
            modContainer.registerHookEnable(address24, FunctionScrapper::addressOfNonVirtual((ret24(D::*)(int))(&D::getGroup)));
        }

        if constexpr((ret25(*)(GJBaseGameLayer*, int, int))(&$GJBaseGameLayer::getMoveDeltaForObjects) != (ret25(D::*)(int, int))(&D::getMoveDeltaForObjects)) {
            modContainer.registerHookEnable(address25, FunctionScrapper::addressOfNonVirtual((ret25(D::*)(int, int))(&D::getMoveDeltaForObjects)));
        }

        if constexpr((ret26(*)(GJBaseGameLayer*, int))(&$GJBaseGameLayer::getOptimizedGroup) != (ret26(D::*)(int))(&D::getOptimizedGroup)) {
            modContainer.registerHookEnable(address26, FunctionScrapper::addressOfNonVirtual((ret26(D::*)(int))(&D::getOptimizedGroup)));
        }

        if constexpr((ret27(*)(GJBaseGameLayer*, int))(&$GJBaseGameLayer::getStaticGroup) != (ret27(D::*)(int))(&D::getStaticGroup)) {
            modContainer.registerHookEnable(address27, FunctionScrapper::addressOfNonVirtual((ret27(D::*)(int))(&D::getStaticGroup)));
        }

        if constexpr((ret28(*)(GJBaseGameLayer*, GameObject*))(&$GJBaseGameLayer::isGroupDisabledForObject) != (ret28(D::*)(GameObject*))(&D::isGroupDisabledForObject)) {
            modContainer.registerHookEnable(address28, FunctionScrapper::addressOfNonVirtual((ret28(D::*)(GameObject*))(&D::isGroupDisabledForObject)));
        }

        if constexpr((ret29(*)(GJBaseGameLayer*, GameObject*, cocos2d::CCArray*))(&$GJBaseGameLayer::isGroupDisabledForObjectFull) != (ret29(D::*)(GameObject*, cocos2d::CCArray*))(&D::isGroupDisabledForObjectFull)) {
            modContainer.registerHookEnable(address29, FunctionScrapper::addressOfNonVirtual((ret29(D::*)(GameObject*, cocos2d::CCArray*))(&D::isGroupDisabledForObjectFull)));
        }

        if constexpr((ret30(*)(GJBaseGameLayer*, float))(&$GJBaseGameLayer::loadUpToPosition) != (ret30(D::*)(float))(&D::loadUpToPosition)) {
            modContainer.registerHookEnable(address30, FunctionScrapper::addressOfNonVirtual((ret30(D::*)(float))(&D::loadUpToPosition)));
        }

        if constexpr((ret31(*)(GJBaseGameLayer*, GameObject*, GameObject*))(&$GJBaseGameLayer::objectIntersectsCircle) != (ret31(D::*)(GameObject*, GameObject*))(&D::objectIntersectsCircle)) {
            modContainer.registerHookEnable(address31, FunctionScrapper::addressOfNonVirtual((ret31(D::*)(GameObject*, GameObject*))(&D::objectIntersectsCircle)));
        }

        if constexpr((ret32(*)(GJBaseGameLayer*, EffectGameObject*))(&$GJBaseGameLayer::objectTriggered) != (ret32(D::*)(EffectGameObject*))(&D::objectTriggered)) {
            modContainer.registerHookEnable(address32, FunctionScrapper::addressOfNonVirtual((ret32(D::*)(EffectGameObject*))(&D::objectTriggered)));
        }

        if constexpr((ret33(*)(GJBaseGameLayer*))(&$GJBaseGameLayer::optimizeMoveGroups) != (ret33(D::*)())(&D::optimizeMoveGroups)) {
            modContainer.registerHookEnable(address33, FunctionScrapper::addressOfNonVirtual((ret33(D::*)())(&D::optimizeMoveGroups)));
        }

        if constexpr((ret34(*)(GJBaseGameLayer*, int, bool, int))(&$GJBaseGameLayer::parentForZLayer) != (ret34(D::*)(int, bool, int))(&D::parentForZLayer)) {
            modContainer.registerHookEnable(address34, FunctionScrapper::addressOfNonVirtual((ret34(D::*)(int, bool, int))(&D::parentForZLayer)));
        }

        if constexpr((ret35(*)(GJBaseGameLayer*, PlayerObject*, GameObject*))(&$GJBaseGameLayer::playerTouchedRing) != (ret35(D::*)(PlayerObject*, GameObject*))(&D::playerTouchedRing)) {
            modContainer.registerHookEnable(address35, FunctionScrapper::addressOfNonVirtual((ret35(D::*)(PlayerObject*, GameObject*))(&D::playerTouchedRing)));
        }

        if constexpr((ret36(*)(GJBaseGameLayer*, EffectGameObject*, int, cocos2d::CCDictionary*, float, GJEffectManager*))(&$GJBaseGameLayer::processColorObject) != (ret36(D::*)(EffectGameObject*, int, cocos2d::CCDictionary*, float, GJEffectManager*))(&D::processColorObject)) {
            modContainer.registerHookEnable(address36, FunctionScrapper::addressOfNonVirtual((ret36(D::*)(EffectGameObject*, int, cocos2d::CCDictionary*, float, GJEffectManager*))(&D::processColorObject)));
        }

        if constexpr((ret37(*)(GJBaseGameLayer*))(&$GJBaseGameLayer::processFollowActions) != (ret37(D::*)())(&D::processFollowActions)) {
            modContainer.registerHookEnable(address37, FunctionScrapper::addressOfNonVirtual((ret37(D::*)())(&D::processFollowActions)));
        }

        if constexpr((ret38(*)(GJBaseGameLayer*))(&$GJBaseGameLayer::processMoveActions) != (ret38(D::*)())(&D::processMoveActions)) {
            modContainer.registerHookEnable(address38, FunctionScrapper::addressOfNonVirtual((ret38(D::*)())(&D::processMoveActions)));
        }

        if constexpr((ret39(*)(GJBaseGameLayer*, float))(&$GJBaseGameLayer::processMoveActionsStep) != (ret39(D::*)(float))(&D::processMoveActionsStep)) {
            modContainer.registerHookEnable(address39, FunctionScrapper::addressOfNonVirtual((ret39(D::*)(float))(&D::processMoveActionsStep)));
        }

        if constexpr((ret40(*)(GJBaseGameLayer*, EffectGameObject*, cocos2d::CCDictionary*, float, GJEffectManager*))(&$GJBaseGameLayer::processOpacityObject) != (ret40(D::*)(EffectGameObject*, cocos2d::CCDictionary*, float, GJEffectManager*))(&D::processOpacityObject)) {
            modContainer.registerHookEnable(address40, FunctionScrapper::addressOfNonVirtual((ret40(D::*)(EffectGameObject*, cocos2d::CCDictionary*, float, GJEffectManager*))(&D::processOpacityObject)));
        }

        if constexpr((ret41(*)(GJBaseGameLayer*, float))(&$GJBaseGameLayer::processPlayerFollowActions) != (ret41(D::*)(float))(&D::processPlayerFollowActions)) {
            modContainer.registerHookEnable(address41, FunctionScrapper::addressOfNonVirtual((ret41(D::*)(float))(&D::processPlayerFollowActions)));
        }

        if constexpr((ret42(*)(GJBaseGameLayer*))(&$GJBaseGameLayer::processRotationActions) != (ret42(D::*)())(&D::processRotationActions)) {
            modContainer.registerHookEnable(address42, FunctionScrapper::addressOfNonVirtual((ret42(D::*)())(&D::processRotationActions)));
        }

        if constexpr((ret43(*)(GJBaseGameLayer*, int, bool))(&$GJBaseGameLayer::pushButton) != (ret43(D::*)(int, bool))(&D::pushButton)) {
            modContainer.registerHookEnable(address43, FunctionScrapper::addressOfNonVirtual((ret43(D::*)(int, bool))(&D::pushButton)));
        }

        if constexpr((ret44(*)(GJBaseGameLayer*, cocos2d::CCRect, cocos2d::CCPoint, float))(&$GJBaseGameLayer::rectIntersectsCircle) != (ret44(D::*)(cocos2d::CCRect, cocos2d::CCPoint, float))(&D::rectIntersectsCircle)) {
            modContainer.registerHookEnable(address44, FunctionScrapper::addressOfNonVirtual((ret44(D::*)(cocos2d::CCRect, cocos2d::CCPoint, float))(&D::rectIntersectsCircle)));
        }

        if constexpr((ret45(*)(GJBaseGameLayer*))(&$GJBaseGameLayer::refreshCounterLabels) != (ret45(D::*)())(&D::refreshCounterLabels)) {
            modContainer.registerHookEnable(address45, FunctionScrapper::addressOfNonVirtual((ret45(D::*)())(&D::refreshCounterLabels)));
        }

        if constexpr((ret46(*)(GJBaseGameLayer*, int, bool))(&$GJBaseGameLayer::releaseButton) != (ret46(D::*)(int, bool))(&D::releaseButton)) {
            modContainer.registerHookEnable(address46, FunctionScrapper::addressOfNonVirtual((ret46(D::*)(int, bool))(&D::releaseButton)));
        }

        if constexpr((ret47(*)(GJBaseGameLayer*, GameObject*))(&$GJBaseGameLayer::removeFromGroups) != (ret47(D::*)(GameObject*))(&D::removeFromGroups)) {
            modContainer.registerHookEnable(address47, FunctionScrapper::addressOfNonVirtual((ret47(D::*)(GameObject*))(&D::removeFromGroups)));
        }

        if constexpr((ret48(*)(GJBaseGameLayer*, GameObject*))(&$GJBaseGameLayer::removeObjectFromSection) != (ret48(D::*)(GameObject*))(&D::removeObjectFromSection)) {
            modContainer.registerHookEnable(address48, FunctionScrapper::addressOfNonVirtual((ret48(D::*)(GameObject*))(&D::removeObjectFromSection)));
        }

        if constexpr((ret49(*)(GJBaseGameLayer*, GameObject*))(&$GJBaseGameLayer::reorderObjectSection) != (ret49(D::*)(GameObject*))(&D::reorderObjectSection)) {
            modContainer.registerHookEnable(address49, FunctionScrapper::addressOfNonVirtual((ret49(D::*)(GameObject*))(&D::reorderObjectSection)));
        }

        if constexpr((ret50(*)(GJBaseGameLayer*, bool))(&$GJBaseGameLayer::resetGroupCounters) != (ret50(D::*)(bool))(&D::resetGroupCounters)) {
            modContainer.registerHookEnable(address50, FunctionScrapper::addressOfNonVirtual((ret50(D::*)(bool))(&D::resetGroupCounters)));
        }

        if constexpr((ret51(*)(GJBaseGameLayer*))(&$GJBaseGameLayer::resetMoveOptimizedValue) != (ret51(D::*)())(&D::resetMoveOptimizedValue)) {
            modContainer.registerHookEnable(address51, FunctionScrapper::addressOfNonVirtual((ret51(D::*)())(&D::resetMoveOptimizedValue)));
        }

        if constexpr((ret52(*)(GJBaseGameLayer*, float))(&$GJBaseGameLayer::sectionForPos) != (ret52(D::*)(float))(&D::sectionForPos)) {
            modContainer.registerHookEnable(address52, FunctionScrapper::addressOfNonVirtual((ret52(D::*)(float))(&D::sectionForPos)));
        }

        if constexpr((ret53(*)(GJBaseGameLayer*))(&$GJBaseGameLayer::setupLayers) != (ret53(D::*)())(&D::setupLayers)) {
            modContainer.registerHookEnable(address53, FunctionScrapper::addressOfNonVirtual((ret53(D::*)())(&D::setupLayers)));
        }

        if constexpr((ret54(*)(GJBaseGameLayer*))(&$GJBaseGameLayer::shouldExitHackedLevel) != (ret54(D::*)())(&D::shouldExitHackedLevel)) {
            modContainer.registerHookEnable(address54, FunctionScrapper::addressOfNonVirtual((ret54(D::*)())(&D::shouldExitHackedLevel)));
        }

        if constexpr((ret55(*)(GJBaseGameLayer*, int, float, int))(&$GJBaseGameLayer::spawnGroupTriggered) != (ret55(D::*)(int, float, int))(&D::spawnGroupTriggered)) {
            modContainer.registerHookEnable(address55, FunctionScrapper::addressOfNonVirtual((ret55(D::*)(int, float, int))(&D::spawnGroupTriggered)));
        }

        if constexpr((ret56(*)(GJBaseGameLayer*, cocos2d::CCRect))(&$GJBaseGameLayer::staticObjectsInRect) != (ret56(D::*)(cocos2d::CCRect))(&D::staticObjectsInRect)) {
            modContainer.registerHookEnable(address56, FunctionScrapper::addressOfNonVirtual((ret56(D::*)(cocos2d::CCRect))(&D::staticObjectsInRect)));
        }

        if constexpr((ret57(*)(GJBaseGameLayer*, int, int, int, bool, int))(&$GJBaseGameLayer::testInstantCountTrigger) != (ret57(D::*)(int, int, int, bool, int))(&D::testInstantCountTrigger)) {
            modContainer.registerHookEnable(address57, FunctionScrapper::addressOfNonVirtual((ret57(D::*)(int, int, int, bool, int))(&D::testInstantCountTrigger)));
        }

        if constexpr((ret58(*)(GJBaseGameLayer*, int, bool))(&$GJBaseGameLayer::toggleGroup) != (ret58(D::*)(int, bool))(&D::toggleGroup)) {
            modContainer.registerHookEnable(address58, FunctionScrapper::addressOfNonVirtual((ret58(D::*)(int, bool))(&D::toggleGroup)));
        }

        if constexpr((ret59(*)(GJBaseGameLayer*, bool))(&$GJBaseGameLayer::togglePlayerVisibility) != (ret59(D::*)(bool))(&D::togglePlayerVisibility)) {
            modContainer.registerHookEnable(address59, FunctionScrapper::addressOfNonVirtual((ret59(D::*)(bool))(&D::togglePlayerVisibility)));
        }

        if constexpr((ret60(*)(GJBaseGameLayer*, EffectGameObject*))(&$GJBaseGameLayer::triggerMoveCommand) != (ret60(D::*)(EffectGameObject*))(&D::triggerMoveCommand)) {
            modContainer.registerHookEnable(address60, FunctionScrapper::addressOfNonVirtual((ret60(D::*)(EffectGameObject*))(&D::triggerMoveCommand)));
        }

        if constexpr((ret61(*)(GJBaseGameLayer*))(&$GJBaseGameLayer::updateCollisionBlocks) != (ret61(D::*)())(&D::updateCollisionBlocks)) {
            modContainer.registerHookEnable(address61, FunctionScrapper::addressOfNonVirtual((ret61(D::*)())(&D::updateCollisionBlocks)));
        }

        if constexpr((ret62(*)(GJBaseGameLayer*, int, int))(&$GJBaseGameLayer::updateCounters) != (ret62(D::*)(int, int))(&D::updateCounters)) {
            modContainer.registerHookEnable(address62, FunctionScrapper::addressOfNonVirtual((ret62(D::*)(int, int))(&D::updateCounters)));
        }

        if constexpr((ret63(*)(GJBaseGameLayer*, cocos2d::CCArray*))(&$GJBaseGameLayer::updateDisabledObjectsLastPos) != (ret63(D::*)(cocos2d::CCArray*))(&D::updateDisabledObjectsLastPos)) {
            modContainer.registerHookEnable(address63, FunctionScrapper::addressOfNonVirtual((ret63(D::*)(cocos2d::CCArray*))(&D::updateDisabledObjectsLastPos)));
        }

        if constexpr((ret64(*)(GJBaseGameLayer*, gd::string))(&$GJBaseGameLayer::updateLayerCapacity) != (ret64(D::*)(gd::string))(&D::updateLayerCapacity)) {
            modContainer.registerHookEnable(address64, FunctionScrapper::addressOfNonVirtual((ret64(D::*)(gd::string))(&D::updateLayerCapacity)));
        }

        if constexpr((ret65(*)(GJBaseGameLayer*, int, int, int, int))(&$GJBaseGameLayer::updateLegacyLayerCapacity) != (ret65(D::*)(int, int, int, int))(&D::updateLegacyLayerCapacity)) {
            modContainer.registerHookEnable(address65, FunctionScrapper::addressOfNonVirtual((ret65(D::*)(int, int, int, int))(&D::updateLegacyLayerCapacity)));
        }

        if constexpr((ret66(*)(GJBaseGameLayer*, cocos2d::CCRect))(&$GJBaseGameLayer::updateOBB2) != (ret66(D::*)(cocos2d::CCRect))(&D::updateOBB2)) {
            modContainer.registerHookEnable(address66, FunctionScrapper::addressOfNonVirtual((ret66(D::*)(cocos2d::CCRect))(&D::updateOBB2)));
        }

        if constexpr((ret67(*)(GJBaseGameLayer*))(&$GJBaseGameLayer::updateQueuedLabels) != (ret67(D::*)())(&D::updateQueuedLabels)) {
            modContainer.registerHookEnable(address67, FunctionScrapper::addressOfNonVirtual((ret67(D::*)())(&D::updateQueuedLabels)));
        }

        if constexpr((ret68(*)(GJBaseGameLayer*))(&$GJBaseGameLayer::destructor) != (ret68(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address68, FunctionScrapper::addressOfNonVirtual((ret68(D::*)())(&D::destructor)));
        }

        return true;
    }
};

template<class D>
struct $GJRotationControl : GJRotationControl, InterfaceBase {
    $GJRotationControl(const $GJRotationControl& c) : GJRotationControl(c) {}
    $GJRotationControl() = delete;

    using ret0 = bool;
    static inline auto address0 = base+0x31510;

    dupable ret0 init() {
        return reinterpret_cast<ret0(*)(GJRotationControl*)>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x316a0;

    dupable ret1 updateSliderPosition(cocos2d::CCPoint p0) {
        return reinterpret_cast<ret1(*)(GJRotationControl*, cocos2d::CCPoint)>(address1)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(GJRotationControl*))(&$GJRotationControl::init) != (ret0(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfVirtual((ret0(D::*)())(&D::init)));
        }

        if constexpr((ret1(*)(GJRotationControl*, cocos2d::CCPoint))(&$GJRotationControl::updateSliderPosition) != (ret1(D::*)(cocos2d::CCPoint))(&D::updateSliderPosition)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCPoint))(&D::updateSliderPosition)));
        }

        return true;
    }
};

template<class D>
struct $FLAlertLayerProtocol : FLAlertLayerProtocol, InterfaceBase {
    $FLAlertLayerProtocol(const $FLAlertLayerProtocol& c) : FLAlertLayerProtocol(c) {}
    $FLAlertLayerProtocol() = delete;
    static bool _apply() {

        return true;
    }
};

template<class D>
struct $SongInfoObject : SongInfoObject, InterfaceBase {
    $SongInfoObject(const $SongInfoObject& c) : SongInfoObject(c) {}
    $SongInfoObject() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x2f2040;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x2f2c70;

    dupable ret1 encodeWithCoder(DS_Dictionary* p0) {
        return reinterpret_cast<ret1(*)(SongInfoObject*, DS_Dictionary*)>(address1)(this, p0);
    }

    using ret2 = bool;
    static inline auto address2 = base+0x2f2da0;

    dupable ret2 canEncode() {
        return reinterpret_cast<ret2(*)(SongInfoObject*)>(address2)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SongInfoObject*))(&$SongInfoObject::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(SongInfoObject*, DS_Dictionary*))(&$SongInfoObject::encodeWithCoder) != (ret1(D::*)(DS_Dictionary*))(&D::encodeWithCoder)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)(DS_Dictionary*))(&D::encodeWithCoder)));
        }

        if constexpr((ret2(*)(SongInfoObject*))(&$SongInfoObject::canEncode) != (ret2(D::*)())(&D::canEncode)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)())(&D::canEncode)));
        }

        return true;
    }
};

template<class D>
struct $EndPortalObject : EndPortalObject, InterfaceBase {
    $EndPortalObject(const $EndPortalObject& c) : EndPortalObject(c) {}
    $EndPortalObject() = delete;

    using ret0 = EndPortalObject*;
    static inline auto address0 = base+0x1da8f0;

    dupable static ret0 create() {
        return reinterpret_cast<ret0(*)(EndPortalObject*)>(address0)();
    }

    using ret1 = void;
    static inline auto address1 = base+0x1dacb0;

    dupable ret1 updateColors(cocos2d::_ccColor3B p0) {
        return reinterpret_cast<ret1(*)(EndPortalObject*, cocos2d::_ccColor3B)>(address1)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(EndPortalObject*))(&$EndPortalObject::create) != (ret0(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::create)));
        }

        if constexpr((ret1(*)(EndPortalObject*, cocos2d::_ccColor3B))(&$EndPortalObject::updateColors) != (ret1(D::*)(cocos2d::_ccColor3B))(&D::updateColors)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::_ccColor3B))(&D::updateColors)));
        }

        return true;
    }
};

template<class D>
struct $EditorPauseLayer : EditorPauseLayer, InterfaceBase {
    $EditorPauseLayer(const $EditorPauseLayer& c) : EditorPauseLayer(c) {}
    $EditorPauseLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x13c3b0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x13f320;

    dupable ret1 keyBackClicked() {
        return reinterpret_cast<ret1(*)(EditorPauseLayer*)>(address1)(this);
    }

    using ret2 = void;
    static inline auto address2 = base+0x13f3a0;

    dupable ret2 keyDown(cocos2d::enumKeyCodes p0) {
        return reinterpret_cast<ret2(*)(EditorPauseLayer*, cocos2d::enumKeyCodes)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x13cc00;

    dupable ret3 customSetup() {
        return reinterpret_cast<ret3(*)(EditorPauseLayer*)>(address3)(this);
    }

    using ret4 = void;
    static inline auto address4 = base+0x13f1b0;

    dupable ret4 FLAlert_Clicked(FLAlertLayer* p0,bool p1) {
        return reinterpret_cast<ret4(*)(EditorPauseLayer*, FLAlertLayer*, bool)>(address4)(this, p0, p1);
    }

    using ret5 = EditorPauseLayer*;
    static inline auto address5 = base+0x13c680;

    dupable static ret5 create(LevelEditorLayer* p0) {
        return reinterpret_cast<ret5(*)(EditorPauseLayer*, LevelEditorLayer*)>(address5)(p0);
    }

    using ret6 = void;
    static inline auto address6 = base+0x13ebd0;

    dupable ret6 saveLevel() {
        return reinterpret_cast<ret6(*)(EditorPauseLayer*)>(address6)(this);
    }

    using ret7 = bool;
    static inline auto address7 = base+0x13c7a0;

    dupable ret7 init(LevelEditorLayer* p0) {
        return reinterpret_cast<ret7(*)(EditorPauseLayer*, LevelEditorLayer*)>(address7)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(EditorPauseLayer*))(&$EditorPauseLayer::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(EditorPauseLayer*))(&$EditorPauseLayer::keyBackClicked) != (ret1(D::*)())(&D::keyBackClicked)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::keyBackClicked)));
        }

        if constexpr((ret2(*)(EditorPauseLayer*, cocos2d::enumKeyCodes))(&$EditorPauseLayer::keyDown) != (ret2(D::*)(cocos2d::enumKeyCodes))(&D::keyDown)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)(cocos2d::enumKeyCodes))(&D::keyDown)));
        }

        if constexpr((ret3(*)(EditorPauseLayer*))(&$EditorPauseLayer::customSetup) != (ret3(D::*)())(&D::customSetup)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)())(&D::customSetup)));
        }

        if constexpr((ret4(*)(EditorPauseLayer*, FLAlertLayer*, bool))(&$EditorPauseLayer::FLAlert_Clicked) != (ret4(D::*)(FLAlertLayer*, bool))(&D::FLAlert_Clicked)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)(FLAlertLayer*, bool))(&D::FLAlert_Clicked)));
        }

        if constexpr((ret5(*)(EditorPauseLayer*, LevelEditorLayer*))(&$EditorPauseLayer::create) != (ret5(D::*)(LevelEditorLayer*))(&D::create)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)(LevelEditorLayer*))(&D::create)));
        }

        if constexpr((ret6(*)(EditorPauseLayer*))(&$EditorPauseLayer::saveLevel) != (ret6(D::*)())(&D::saveLevel)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)())(&D::saveLevel)));
        }

        if constexpr((ret7(*)(EditorPauseLayer*, LevelEditorLayer*))(&$EditorPauseLayer::init) != (ret7(D::*)(LevelEditorLayer*))(&D::init)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)(LevelEditorLayer*))(&D::init)));
        }

        return true;
    }
};

template<class D>
struct $LabelGameObject : LabelGameObject, InterfaceBase {
    $LabelGameObject(const $LabelGameObject& c) : LabelGameObject(c) {}
    $LabelGameObject() = delete;

    using ret0 = bool;
    static inline auto address0 = base+0x2f5520;

    dupable ret0 init() {
        return reinterpret_cast<ret0(*)(LabelGameObject*)>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0xdbca0;

    dupable ret1 setObjectColor(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret1(*)(LabelGameObject*, cocos2d::_ccColor3B const&)>(address1)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(LabelGameObject*))(&$LabelGameObject::init) != (ret0(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::init)));
        }

        if constexpr((ret1(*)(LabelGameObject*, cocos2d::_ccColor3B const&))(&$LabelGameObject::setObjectColor) != (ret1(D::*)(cocos2d::_ccColor3B const&))(&D::setObjectColor)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::_ccColor3B const&))(&D::setObjectColor)));
        }

        return true;
    }
};

template<class D>
struct $HardStreak : HardStreak, InterfaceBase {
    $HardStreak(const $HardStreak& c) : HardStreak(c) {}
    $HardStreak() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x5bf00;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = bool;
    static inline auto address1 = base+0x5c090;

    dupable ret1 init() {
        return reinterpret_cast<ret1(*)(HardStreak*)>(address1)(this);
    }

    using ret2 = void;
    static inline auto address2 = base+0x5c950;

    dupable ret2 addPoint(cocos2d::CCPoint p0) {
        return reinterpret_cast<ret2(*)(HardStreak*, cocos2d::CCPoint)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x5c930;

    dupable ret3 reset() {
        return reinterpret_cast<ret3(*)(HardStreak*)>(address3)(this);
    }

    using ret4 = void;
    static inline auto address4 = base+0x5c210;

    dupable ret4 resumeStroke() {
        return reinterpret_cast<ret4(*)(HardStreak*)>(address4)(this);
    }

    using ret5 = void;
    static inline auto address5 = base+0x5c8f0;

    dupable ret5 stopStroke() {
        return reinterpret_cast<ret5(*)(HardStreak*)>(address5)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(HardStreak*))(&$HardStreak::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(HardStreak*))(&$HardStreak::init) != (ret1(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::init)));
        }

        if constexpr((ret2(*)(HardStreak*, cocos2d::CCPoint))(&$HardStreak::addPoint) != (ret2(D::*)(cocos2d::CCPoint))(&D::addPoint)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(cocos2d::CCPoint))(&D::addPoint)));
        }

        if constexpr((ret3(*)(HardStreak*))(&$HardStreak::reset) != (ret3(D::*)())(&D::reset)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::reset)));
        }

        if constexpr((ret4(*)(HardStreak*))(&$HardStreak::resumeStroke) != (ret4(D::*)())(&D::resumeStroke)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)())(&D::resumeStroke)));
        }

        if constexpr((ret5(*)(HardStreak*))(&$HardStreak::stopStroke) != (ret5(D::*)())(&D::stopStroke)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)())(&D::stopStroke)));
        }

        return true;
    }
};

template<class D>
struct $CustomSongLayer : CustomSongLayer, InterfaceBase {
    $CustomSongLayer(const $CustomSongLayer& c) : CustomSongLayer(c) {}
    $CustomSongLayer() = delete;

    using ret0 = bool;
    static inline auto address0 = base+0xf06f0;

    dupable ret0 init(LevelSettingsObject* p0) {
        return reinterpret_cast<ret0(*)(CustomSongLayer*, LevelSettingsObject*)>(address0)(this, p0);
    }

    using ret1 = void;
    static inline auto address1 = base+0xf1950;

    dupable ret1 onArtists(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret1(*)(CustomSongLayer*, cocos2d::CCObject*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0xf18a0;

    dupable ret2 onSongBrowser(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret2(*)(CustomSongLayer*, cocos2d::CCObject*)>(address2)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CustomSongLayer*, LevelSettingsObject*))(&$CustomSongLayer::init) != (ret0(D::*)(LevelSettingsObject*))(&D::init)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(LevelSettingsObject*))(&D::init)));
        }

        if constexpr((ret1(*)(CustomSongLayer*, cocos2d::CCObject*))(&$CustomSongLayer::onArtists) != (ret1(D::*)(cocos2d::CCObject*))(&D::onArtists)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCObject*))(&D::onArtists)));
        }

        if constexpr((ret2(*)(CustomSongLayer*, cocos2d::CCObject*))(&$CustomSongLayer::onSongBrowser) != (ret2(D::*)(cocos2d::CCObject*))(&D::onSongBrowser)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(cocos2d::CCObject*))(&D::onSongBrowser)));
        }

        return true;
    }
};

template<class D>
struct $CustomSongCell : CustomSongCell, InterfaceBase {
    $CustomSongCell(const $CustomSongCell& c) : CustomSongCell(c) {}
    $CustomSongCell() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x110220;

    dupable ret0 loadFromObject(SongInfoObject* p0) {
        return reinterpret_cast<ret0(*)(CustomSongCell*, SongInfoObject*)>(address0)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CustomSongCell*, SongInfoObject*))(&$CustomSongCell::loadFromObject) != (ret0(D::*)(SongInfoObject*))(&D::loadFromObject)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(SongInfoObject*))(&D::loadFromObject)));
        }

        return true;
    }
};

template<class D>
struct $CreatorLayer : CreatorLayer, InterfaceBase {
    $CreatorLayer(const $CreatorLayer& c) : CreatorLayer(c) {}
    $CreatorLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x142b70;

    dupable ret0 onMyLevels(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret0(*)(CreatorLayer*, cocos2d::CCObject*)>(address0)(this, p0);
    }

    using ret1 = void;
    static inline auto address1 = base+0x142860;

    dupable ret1 onSavedLevels(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret1(*)(CreatorLayer*, cocos2d::CCObject*)>(address1)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CreatorLayer*, cocos2d::CCObject*))(&$CreatorLayer::onMyLevels) != (ret0(D::*)(cocos2d::CCObject*))(&D::onMyLevels)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCObject*))(&D::onMyLevels)));
        }

        if constexpr((ret1(*)(CreatorLayer*, cocos2d::CCObject*))(&$CreatorLayer::onSavedLevels) != (ret1(D::*)(cocos2d::CCObject*))(&D::onSavedLevels)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCObject*))(&D::onSavedLevels)));
        }

        return true;
    }
};

template<class D>
struct $CountTriggerAction : CountTriggerAction, InterfaceBase {
    $CountTriggerAction(const $CountTriggerAction& c) : CountTriggerAction(c) {}
    $CountTriggerAction() = delete;

    using ret0 = CountTriggerAction*;
    static inline auto address0 = base+0x1754f0;

    dupable static ret0 createFromString(gd::string p0) {
        return reinterpret_cast<ret0(*)(CountTriggerAction*, gd::string)>(address0)(p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CountTriggerAction*, gd::string))(&$CountTriggerAction::createFromString) != (ret0(D::*)(gd::string))(&D::createFromString)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(gd::string))(&D::createFromString)));
        }

        return true;
    }
};

template<class D>
struct $CommentCell : CommentCell, InterfaceBase {
    $CommentCell(const $CommentCell& c) : CommentCell(c) {}
    $CommentCell() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x111c70;

    dupable ret0 loadFromComment(GJComment* p0) {
        return reinterpret_cast<ret0(*)(CommentCell*, GJComment*)>(address0)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CommentCell*, GJComment*))(&$CommentCell::loadFromComment) != (ret0(D::*)(GJComment*))(&D::loadFromComment)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(GJComment*))(&D::loadFromComment)));
        }

        return true;
    }
};

template<class D>
struct $PulseEffectAction : PulseEffectAction, InterfaceBase {
    $PulseEffectAction(const $PulseEffectAction& c) : PulseEffectAction(c) {}
    $PulseEffectAction() = delete;

    using ret0 = PulseEffectAction*;
    static inline auto address0 = base+0x179e90;

    dupable static ret0 createFromString(gd::string p0) {
        return reinterpret_cast<ret0(*)(PulseEffectAction*, gd::string)>(address0)(p0);
    }

    using ret1 = void;
    static inline auto address1 = base+0x17a850;

    dupable ret1 getSaveString() {
        return reinterpret_cast<ret1(*)(PulseEffectAction*)>(address1)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(PulseEffectAction*, gd::string))(&$PulseEffectAction::createFromString) != (ret0(D::*)(gd::string))(&D::createFromString)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(gd::string))(&D::createFromString)));
        }

        if constexpr((ret1(*)(PulseEffectAction*))(&$PulseEffectAction::getSaveString) != (ret1(D::*)())(&D::getSaveString)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::getSaveString)));
        }

        return true;
    }
};

template<class D>
struct $MenuLayer : MenuLayer, InterfaceBase {
    $MenuLayer(const $MenuLayer& c) : MenuLayer(c) {}
    $MenuLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x1d1230;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = bool;
    static inline auto address1 = base+0x1d14b0;

    dupable ret1 init() {
        return reinterpret_cast<ret1(*)(MenuLayer*)>(address1)(this);
    }

    using ret2 = void;
    static inline auto address2 = base+0x1d3160;

    dupable ret2 keyBackClicked() {
        return reinterpret_cast<ret2(*)(MenuLayer*)>(address2)(this);
    }

    using ret3 = void;
    static inline auto address3 = base+0x1d33d0;

    dupable ret3 keyDown(cocos2d::enumKeyCodes p0) {
        return reinterpret_cast<ret3(*)(MenuLayer*, cocos2d::enumKeyCodes)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x1d2f30;

    dupable ret4 googlePlaySignedIn() {
        return reinterpret_cast<ret4(*)(MenuLayer*)>(address4)(this);
    }

    using ret5 = void;
    static inline auto address5 = base+0x1d3190;

    dupable ret5 FLAlert_Clicked(FLAlertLayer* p0,bool p1) {
        return reinterpret_cast<ret5(*)(MenuLayer*, FLAlertLayer*, bool)>(address5)(this, p0, p1);
    }

    using ret6 = void;
    static inline auto address6 = base+0x1d2ad0;

    dupable ret6 onMoreGames(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret6(*)(MenuLayer*, cocos2d::CCObject*)>(address6)(this, p0);
    }

    using ret7 = void;
    static inline auto address7 = base+0x1d2b40;

    dupable ret7 onQuit(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret7(*)(MenuLayer*, cocos2d::CCObject*)>(address7)(this, p0);
    }

    using ret9 = cocos2d::CCScene*;
    static inline auto address9 = base+0x1d12d0;

    dupable static ret9 scene(bool p0) {
        return reinterpret_cast<ret9(*)(MenuLayer*, bool)>(address9)(p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(MenuLayer*))(&$MenuLayer::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(MenuLayer*))(&$MenuLayer::init) != (ret1(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::init)));
        }

        if constexpr((ret2(*)(MenuLayer*))(&$MenuLayer::keyBackClicked) != (ret2(D::*)())(&D::keyBackClicked)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)())(&D::keyBackClicked)));
        }

        if constexpr((ret3(*)(MenuLayer*, cocos2d::enumKeyCodes))(&$MenuLayer::keyDown) != (ret3(D::*)(cocos2d::enumKeyCodes))(&D::keyDown)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)(cocos2d::enumKeyCodes))(&D::keyDown)));
        }

        if constexpr((ret4(*)(MenuLayer*))(&$MenuLayer::googlePlaySignedIn) != (ret4(D::*)())(&D::googlePlaySignedIn)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)())(&D::googlePlaySignedIn)));
        }

        if constexpr((ret5(*)(MenuLayer*, FLAlertLayer*, bool))(&$MenuLayer::FLAlert_Clicked) != (ret5(D::*)(FLAlertLayer*, bool))(&D::FLAlert_Clicked)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)(FLAlertLayer*, bool))(&D::FLAlert_Clicked)));
        }

        if constexpr((ret6(*)(MenuLayer*, cocos2d::CCObject*))(&$MenuLayer::onMoreGames) != (ret6(D::*)(cocos2d::CCObject*))(&D::onMoreGames)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)(cocos2d::CCObject*))(&D::onMoreGames)));
        }

        if constexpr((ret7(*)(MenuLayer*, cocos2d::CCObject*))(&$MenuLayer::onQuit) != (ret7(D::*)(cocos2d::CCObject*))(&D::onQuit)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)(cocos2d::CCObject*))(&D::onQuit)));
        }

        if constexpr((ret9(*)(MenuLayer*, bool))(&$MenuLayer::scene) != (ret9(D::*)(bool))(&D::scene)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfNonVirtual((ret9(D::*)(bool))(&D::scene)));
        }

        return true;
    }
};

template<class D>
struct $ColorChannelSprite : ColorChannelSprite, InterfaceBase {
    $ColorChannelSprite(const $ColorChannelSprite& c) : ColorChannelSprite(c) {}
    $ColorChannelSprite() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x16e1d0;

    dupable ret0 updateBlending(bool p0) {
        return reinterpret_cast<ret0(*)(ColorChannelSprite*, bool)>(address0)(this, p0);
    }

    using ret1 = void;
    static inline auto address1 = base+0x16ded0;

    dupable ret1 updateCopyLabel(int p0,bool p1) {
        return reinterpret_cast<ret1(*)(ColorChannelSprite*, int, bool)>(address1)(this, p0, p1);
    }

    using ret2 = void;
    static inline auto address2 = base+0x16e080;

    dupable ret2 updateOpacity(float p0) {
        return reinterpret_cast<ret2(*)(ColorChannelSprite*, float)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x16e2e0;

    dupable ret3 updateValues(ColorAction* p0) {
        return reinterpret_cast<ret3(*)(ColorChannelSprite*, ColorAction*)>(address3)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(ColorChannelSprite*, bool))(&$ColorChannelSprite::updateBlending) != (ret0(D::*)(bool))(&D::updateBlending)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(bool))(&D::updateBlending)));
        }

        if constexpr((ret1(*)(ColorChannelSprite*, int, bool))(&$ColorChannelSprite::updateCopyLabel) != (ret1(D::*)(int, bool))(&D::updateCopyLabel)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(int, bool))(&D::updateCopyLabel)));
        }

        if constexpr((ret2(*)(ColorChannelSprite*, float))(&$ColorChannelSprite::updateOpacity) != (ret2(D::*)(float))(&D::updateOpacity)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(float))(&D::updateOpacity)));
        }

        if constexpr((ret3(*)(ColorChannelSprite*, ColorAction*))(&$ColorChannelSprite::updateValues) != (ret3(D::*)(ColorAction*))(&D::updateValues)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(ColorAction*))(&D::updateValues)));
        }

        return true;
    }
};

template<class D>
struct $ColorActionSprite : ColorActionSprite, InterfaceBase {
    $ColorActionSprite(const $ColorActionSprite& c) : ColorActionSprite(c) {}
    $ColorActionSprite() = delete;
    static bool _apply() {

        return true;
    }
};

template<class D>
struct $ColorAction : ColorAction, InterfaceBase {
    $ColorAction(const $ColorAction& c) : ColorAction(c) {}
    $ColorAction() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x17d080;

    dupable ret0 getSaveString() {
        return reinterpret_cast<ret0(*)(ColorAction*)>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x17f310;

    dupable ret1 setupFromDict(cocos2d::CCDictionary* p0) {
        return reinterpret_cast<ret1(*)(ColorAction*, cocos2d::CCDictionary*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x17f270;

    dupable ret2 setupFromString(gd::string p0) {
        return reinterpret_cast<ret2(*)(ColorAction*, gd::string)>(address2)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(ColorAction*))(&$ColorAction::getSaveString) != (ret0(D::*)())(&D::getSaveString)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::getSaveString)));
        }

        if constexpr((ret1(*)(ColorAction*, cocos2d::CCDictionary*))(&$ColorAction::setupFromDict) != (ret1(D::*)(cocos2d::CCDictionary*))(&D::setupFromDict)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCDictionary*))(&D::setupFromDict)));
        }

        if constexpr((ret2(*)(ColorAction*, gd::string))(&$ColorAction::setupFromString) != (ret2(D::*)(gd::string))(&D::setupFromString)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(gd::string))(&D::setupFromString)));
        }

        return true;
    }
};

template<class D>
struct $CollisionTriggerAction : CollisionTriggerAction, InterfaceBase {
    $CollisionTriggerAction(const $CollisionTriggerAction& c) : CollisionTriggerAction(c) {}
    $CollisionTriggerAction() = delete;

    using ret0 = CollisionTriggerAction*;
    static inline auto address0 = base+0x176ee0;

    dupable static ret0 createFromString(gd::string p0) {
        return reinterpret_cast<ret0(*)(CollisionTriggerAction*, gd::string)>(address0)(p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CollisionTriggerAction*, gd::string))(&$CollisionTriggerAction::createFromString) != (ret0(D::*)(gd::string))(&D::createFromString)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(gd::string))(&D::createFromString)));
        }

        return true;
    }
};

template<class D>
struct $SetupCollisionTriggerPopup : SetupCollisionTriggerPopup, InterfaceBase {
    $SetupCollisionTriggerPopup(const $SetupCollisionTriggerPopup& c) : SetupCollisionTriggerPopup(c) {}
    $SetupCollisionTriggerPopup() = delete;

    using ret0 = SetupCollisionTriggerPopup*;
    static inline auto address0 = base+0x1d6120;

    dupable static ret0 create(EffectGameObject* p0,cocos2d::CCArray* p1) {
        return reinterpret_cast<ret0(*)(SetupCollisionTriggerPopup*, EffectGameObject*, cocos2d::CCArray*)>(address0)(p0, p1);
    }

    using ret1 = void;
    static inline auto address1 = base+0x1d77b0;

    dupable ret1 onTargetIDArrow(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret1(*)(SetupCollisionTriggerPopup*, cocos2d::CCObject*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x1d84d0;

    dupable ret2 textChanged(CCTextInputNode* p0) {
        return reinterpret_cast<ret2(*)(SetupCollisionTriggerPopup*, CCTextInputNode*)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x1d82b0;

    dupable ret3 updateTargetID() {
        return reinterpret_cast<ret3(*)(SetupCollisionTriggerPopup*)>(address3)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SetupCollisionTriggerPopup*, EffectGameObject*, cocos2d::CCArray*))(&$SetupCollisionTriggerPopup::create) != (ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)));
        }

        if constexpr((ret1(*)(SetupCollisionTriggerPopup*, cocos2d::CCObject*))(&$SetupCollisionTriggerPopup::onTargetIDArrow) != (ret1(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)));
        }

        if constexpr((ret2(*)(SetupCollisionTriggerPopup*, CCTextInputNode*))(&$SetupCollisionTriggerPopup::textChanged) != (ret2(D::*)(CCTextInputNode*))(&D::textChanged)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(CCTextInputNode*))(&D::textChanged)));
        }

        if constexpr((ret3(*)(SetupCollisionTriggerPopup*))(&$SetupCollisionTriggerPopup::updateTargetID) != (ret3(D::*)())(&D::updateTargetID)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::updateTargetID)));
        }

        return true;
    }
};

template<class D>
struct $EditorUI : EditorUI, InterfaceBase {
    $EditorUI(const $EditorUI& c) : EditorUI(c) {}
    $EditorUI() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x1c6d0;

    dupable ret0 constrainGameLayerPosition() {
        return reinterpret_cast<ret0(*)(EditorUI*)>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x8a80;

    dupable ret1 create(LevelEditorLayer* p0) {
        return reinterpret_cast<ret1(*)(EditorUI*, LevelEditorLayer*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x1f300;

    dupable ret2 deselectAll() {
        return reinterpret_cast<ret2(*)(EditorUI*)>(address2)(this);
    }

    using ret3 = void;
    static inline auto address3 = base+0x19cd0;

    dupable ret3 onDeselectAll(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret3(*)(EditorUI*, cocos2d::CCObject*)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x1c0f0;

    dupable ret4 disableButton(CreateMenuItem* p0) {
        return reinterpret_cast<ret4(*)(EditorUI*, CreateMenuItem*)>(address4)(this, p0);
    }

    using ret5 = void;
    static inline auto address5 = base+0x28f30;

    dupable ret5 editButtonUsable() {
        return reinterpret_cast<ret5(*)(EditorUI*)>(address5)(this);
    }

    using ret6 = void;
    static inline auto address6 = base+0x195a0;

    dupable ret6 editObject(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret6(*)(EditorUI*, cocos2d::CCObject*)>(address6)(this, p0);
    }

    using ret7 = void;
    static inline auto address7 = base+0x1bff0;

    dupable ret7 enableButton(CreateMenuItem* p0) {
        return reinterpret_cast<ret7(*)(EditorUI*, CreateMenuItem*)>(address7)(this, p0);
    }

    using ret8 = CCMenuItemSpriteExtra*;
    static inline auto address8 = base+0x1f6c0;

    dupable ret8 getCreateBtn(int p0,int p1) {
        return reinterpret_cast<ret8(*)(EditorUI*, int, int)>(address8)(this, p0, p1);
    }

    using ret9 = void;
    static inline auto address9 = base+0x23470;

    dupable ret9 getGroupCenter(cocos2d::CCArray* p0,bool p1) {
        return reinterpret_cast<ret9(*)(EditorUI*, cocos2d::CCArray*, bool)>(address9)(this, p0, p1);
    }

    using ret10 = cocos2d::CCArray*;
    static inline auto address10 = base+0x23f30;

    dupable ret10 getSelectedObjects() {
        return reinterpret_cast<ret10(*)(EditorUI*)>(address10)(this);
    }

    using ret11 = void;
    static inline auto address11 = base+0x8ae0;

    dupable ret11 init(LevelEditorLayer* p0) {
        return reinterpret_cast<ret11(*)(EditorUI*, LevelEditorLayer*)>(address11)(this, p0);
    }

    using ret12 = bool;
    static inline auto address12 = base+0x2ed60;

    dupable ret12 ccTouchBegan(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret12(*)(EditorUI*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address12)(this, p0, p1);
    }

    using ret13 = void;
    static inline auto address13 = base+0x2f3d0;

    dupable ret13 ccTouchMoved(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret13(*)(EditorUI*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address13)(this, p0, p1);
    }

    using ret14 = void;
    static inline auto address14 = base+0x2fb00;

    dupable ret14 ccTouchEnded(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret14(*)(EditorUI*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address14)(this, p0, p1);
    }

    using ret15 = void;
    static inline auto address15 = base+0x30790;

    dupable ret15 keyDown(cocos2d::enumKeyCodes p0) {
        return reinterpret_cast<ret15(*)(EditorUI*, cocos2d::enumKeyCodes)>(address15)(this, p0);
    }

    using ret16 = void;
    static inline auto address16 = base+0x24b10;

    dupable ret16 moveObject(GameObject* p0,cocos2d::CCPoint p1) {
        return reinterpret_cast<ret16(*)(EditorUI*, GameObject*, cocos2d::CCPoint)>(address16)(this, p0, p1);
    }

    using ret17 = void;
    static inline auto address17 = base+0x18ba0;

    dupable ret17 onDuplicate(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret17(*)(EditorUI*, cocos2d::CCObject*)>(address17)(this, p0);
    }

    using ret18 = void;
    static inline auto address18 = base+0x232d0;

    dupable ret18 pasteObjects(gd::string p0) {
        return reinterpret_cast<ret18(*)(EditorUI*, gd::string)>(address18)(this, p0);
    }

    using ret19 = void;
    static inline auto address19 = base+0x2ebf0;

    dupable ret19 playerTouchBegan(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret19(*)(EditorUI*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address19)(this, p0, p1);
    }

    using ret20 = void;
    static inline auto address20 = base+0x24790;

    dupable ret20 playtestStopped() {
        return reinterpret_cast<ret20(*)(EditorUI*)>(address20)(this);
    }

    using ret21 = void;
    static inline auto address21 = base+0xb8e0;

    dupable ret21 redoLastAction(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret21(*)(EditorUI*, cocos2d::CCObject*)>(address21)(this, p0);
    }

    using ret22 = void;
    static inline auto address22 = base+0x27470;

    dupable ret22 replaceGroupID(GameObject* p0,int p1,int p2) {
        return reinterpret_cast<ret22(*)(EditorUI*, GameObject*, int, int)>(address22)(this, p0, p1, p2);
    }

    using ret23 = void;
    static inline auto address23 = base+0x25490;

    dupable ret23 scaleChanged(float p0) {
        return reinterpret_cast<ret23(*)(EditorUI*, float)>(address23)(this, p0);
    }

    using ret24 = void;
    static inline auto address24 = base+0x252e0;

    dupable ret24 scaleObjects(cocos2d::CCArray* p0,float p1,cocos2d::CCPoint p2) {
        return reinterpret_cast<ret24(*)(EditorUI*, cocos2d::CCArray*, float, cocos2d::CCPoint)>(address24)(this, p0, p1, p2);
    }

    using ret25 = void;
    static inline auto address25 = base+0x23940;

    dupable ret25 selectObjects(cocos2d::CCArray* p0,bool p1) {
        return reinterpret_cast<ret25(*)(EditorUI*, cocos2d::CCArray*, bool)>(address25)(this, p0, p1);
    }

    using ret26 = void;
    static inline auto address26 = base+0xcb50;

    dupable ret26 setupCreateMenu() {
        return reinterpret_cast<ret26(*)(EditorUI*)>(address26)(this);
    }

    using ret27 = void;
    static inline auto address27 = base+0xb830;

    dupable ret27 undoLastAction(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret27(*)(EditorUI*, cocos2d::CCObject*)>(address27)(this, p0);
    }

    using ret28 = void;
    static inline auto address28 = base+0x1a300;

    dupable ret28 updateButtons() {
        return reinterpret_cast<ret28(*)(EditorUI*)>(address28)(this);
    }

    using ret29 = void;
    static inline auto address29 = base+0x1cb10;

    dupable ret29 updateObjectInfoLabel() {
        return reinterpret_cast<ret29(*)(EditorUI*)>(address29)(this);
    }

    using ret30 = void;
    static inline auto address30 = base+0x18a90;

    dupable ret30 updateSlider() {
        return reinterpret_cast<ret30(*)(EditorUI*)>(address30)(this);
    }

    using ret31 = void;
    static inline auto address31 = base+0x248c0;

    dupable ret31 updateZoom(float p0) {
        return reinterpret_cast<ret31(*)(EditorUI*, float)>(address31)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(EditorUI*))(&$EditorUI::constrainGameLayerPosition) != (ret0(D::*)())(&D::constrainGameLayerPosition)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::constrainGameLayerPosition)));
        }

        if constexpr((ret1(*)(EditorUI*, LevelEditorLayer*))(&$EditorUI::create) != (ret1(D::*)(LevelEditorLayer*))(&D::create)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(LevelEditorLayer*))(&D::create)));
        }

        if constexpr((ret2(*)(EditorUI*))(&$EditorUI::deselectAll) != (ret2(D::*)())(&D::deselectAll)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::deselectAll)));
        }

        if constexpr((ret3(*)(EditorUI*, cocos2d::CCObject*))(&$EditorUI::onDeselectAll) != (ret3(D::*)(cocos2d::CCObject*))(&D::onDeselectAll)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(cocos2d::CCObject*))(&D::onDeselectAll)));
        }

        if constexpr((ret4(*)(EditorUI*, CreateMenuItem*))(&$EditorUI::disableButton) != (ret4(D::*)(CreateMenuItem*))(&D::disableButton)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(CreateMenuItem*))(&D::disableButton)));
        }

        if constexpr((ret5(*)(EditorUI*))(&$EditorUI::editButtonUsable) != (ret5(D::*)())(&D::editButtonUsable)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)())(&D::editButtonUsable)));
        }

        if constexpr((ret6(*)(EditorUI*, cocos2d::CCObject*))(&$EditorUI::editObject) != (ret6(D::*)(cocos2d::CCObject*))(&D::editObject)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)(cocos2d::CCObject*))(&D::editObject)));
        }

        if constexpr((ret7(*)(EditorUI*, CreateMenuItem*))(&$EditorUI::enableButton) != (ret7(D::*)(CreateMenuItem*))(&D::enableButton)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)(CreateMenuItem*))(&D::enableButton)));
        }

        if constexpr((ret8(*)(EditorUI*, int, int))(&$EditorUI::getCreateBtn) != (ret8(D::*)(int, int))(&D::getCreateBtn)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfNonVirtual((ret8(D::*)(int, int))(&D::getCreateBtn)));
        }

        if constexpr((ret9(*)(EditorUI*, cocos2d::CCArray*, bool))(&$EditorUI::getGroupCenter) != (ret9(D::*)(cocos2d::CCArray*, bool))(&D::getGroupCenter)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfNonVirtual((ret9(D::*)(cocos2d::CCArray*, bool))(&D::getGroupCenter)));
        }

        if constexpr((ret10(*)(EditorUI*))(&$EditorUI::getSelectedObjects) != (ret10(D::*)())(&D::getSelectedObjects)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfNonVirtual((ret10(D::*)())(&D::getSelectedObjects)));
        }

        if constexpr((ret11(*)(EditorUI*, LevelEditorLayer*))(&$EditorUI::init) != (ret11(D::*)(LevelEditorLayer*))(&D::init)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfNonVirtual((ret11(D::*)(LevelEditorLayer*))(&D::init)));
        }

        if constexpr((ret12(*)(EditorUI*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$EditorUI::ccTouchBegan) != (ret12(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchBegan)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfVirtual((ret12(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchBegan)));
        }

        if constexpr((ret13(*)(EditorUI*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$EditorUI::ccTouchMoved) != (ret13(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchMoved)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfVirtual((ret13(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchMoved)));
        }

        if constexpr((ret14(*)(EditorUI*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$EditorUI::ccTouchEnded) != (ret14(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchEnded)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfVirtual((ret14(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchEnded)));
        }

        if constexpr((ret15(*)(EditorUI*, cocos2d::enumKeyCodes))(&$EditorUI::keyDown) != (ret15(D::*)(cocos2d::enumKeyCodes))(&D::keyDown)) {
            modContainer.registerHookEnable(address15, FunctionScrapper::addressOfVirtual((ret15(D::*)(cocos2d::enumKeyCodes))(&D::keyDown)));
        }

        if constexpr((ret16(*)(EditorUI*, GameObject*, cocos2d::CCPoint))(&$EditorUI::moveObject) != (ret16(D::*)(GameObject*, cocos2d::CCPoint))(&D::moveObject)) {
            modContainer.registerHookEnable(address16, FunctionScrapper::addressOfNonVirtual((ret16(D::*)(GameObject*, cocos2d::CCPoint))(&D::moveObject)));
        }

        if constexpr((ret17(*)(EditorUI*, cocos2d::CCObject*))(&$EditorUI::onDuplicate) != (ret17(D::*)(cocos2d::CCObject*))(&D::onDuplicate)) {
            modContainer.registerHookEnable(address17, FunctionScrapper::addressOfNonVirtual((ret17(D::*)(cocos2d::CCObject*))(&D::onDuplicate)));
        }

        if constexpr((ret18(*)(EditorUI*, gd::string))(&$EditorUI::pasteObjects) != (ret18(D::*)(gd::string))(&D::pasteObjects)) {
            modContainer.registerHookEnable(address18, FunctionScrapper::addressOfNonVirtual((ret18(D::*)(gd::string))(&D::pasteObjects)));
        }

        if constexpr((ret19(*)(EditorUI*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$EditorUI::playerTouchBegan) != (ret19(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::playerTouchBegan)) {
            modContainer.registerHookEnable(address19, FunctionScrapper::addressOfNonVirtual((ret19(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::playerTouchBegan)));
        }

        if constexpr((ret20(*)(EditorUI*))(&$EditorUI::playtestStopped) != (ret20(D::*)())(&D::playtestStopped)) {
            modContainer.registerHookEnable(address20, FunctionScrapper::addressOfNonVirtual((ret20(D::*)())(&D::playtestStopped)));
        }

        if constexpr((ret21(*)(EditorUI*, cocos2d::CCObject*))(&$EditorUI::redoLastAction) != (ret21(D::*)(cocos2d::CCObject*))(&D::redoLastAction)) {
            modContainer.registerHookEnable(address21, FunctionScrapper::addressOfNonVirtual((ret21(D::*)(cocos2d::CCObject*))(&D::redoLastAction)));
        }

        if constexpr((ret22(*)(EditorUI*, GameObject*, int, int))(&$EditorUI::replaceGroupID) != (ret22(D::*)(GameObject*, int, int))(&D::replaceGroupID)) {
            modContainer.registerHookEnable(address22, FunctionScrapper::addressOfNonVirtual((ret22(D::*)(GameObject*, int, int))(&D::replaceGroupID)));
        }

        if constexpr((ret23(*)(EditorUI*, float))(&$EditorUI::scaleChanged) != (ret23(D::*)(float))(&D::scaleChanged)) {
            modContainer.registerHookEnable(address23, FunctionScrapper::addressOfNonVirtual((ret23(D::*)(float))(&D::scaleChanged)));
        }

        if constexpr((ret24(*)(EditorUI*, cocos2d::CCArray*, float, cocos2d::CCPoint))(&$EditorUI::scaleObjects) != (ret24(D::*)(cocos2d::CCArray*, float, cocos2d::CCPoint))(&D::scaleObjects)) {
            modContainer.registerHookEnable(address24, FunctionScrapper::addressOfNonVirtual((ret24(D::*)(cocos2d::CCArray*, float, cocos2d::CCPoint))(&D::scaleObjects)));
        }

        if constexpr((ret25(*)(EditorUI*, cocos2d::CCArray*, bool))(&$EditorUI::selectObjects) != (ret25(D::*)(cocos2d::CCArray*, bool))(&D::selectObjects)) {
            modContainer.registerHookEnable(address25, FunctionScrapper::addressOfNonVirtual((ret25(D::*)(cocos2d::CCArray*, bool))(&D::selectObjects)));
        }

        if constexpr((ret26(*)(EditorUI*))(&$EditorUI::setupCreateMenu) != (ret26(D::*)())(&D::setupCreateMenu)) {
            modContainer.registerHookEnable(address26, FunctionScrapper::addressOfNonVirtual((ret26(D::*)())(&D::setupCreateMenu)));
        }

        if constexpr((ret27(*)(EditorUI*, cocos2d::CCObject*))(&$EditorUI::undoLastAction) != (ret27(D::*)(cocos2d::CCObject*))(&D::undoLastAction)) {
            modContainer.registerHookEnable(address27, FunctionScrapper::addressOfNonVirtual((ret27(D::*)(cocos2d::CCObject*))(&D::undoLastAction)));
        }

        if constexpr((ret28(*)(EditorUI*))(&$EditorUI::updateButtons) != (ret28(D::*)())(&D::updateButtons)) {
            modContainer.registerHookEnable(address28, FunctionScrapper::addressOfNonVirtual((ret28(D::*)())(&D::updateButtons)));
        }

        if constexpr((ret29(*)(EditorUI*))(&$EditorUI::updateObjectInfoLabel) != (ret29(D::*)())(&D::updateObjectInfoLabel)) {
            modContainer.registerHookEnable(address29, FunctionScrapper::addressOfNonVirtual((ret29(D::*)())(&D::updateObjectInfoLabel)));
        }

        if constexpr((ret30(*)(EditorUI*))(&$EditorUI::updateSlider) != (ret30(D::*)())(&D::updateSlider)) {
            modContainer.registerHookEnable(address30, FunctionScrapper::addressOfNonVirtual((ret30(D::*)())(&D::updateSlider)));
        }

        if constexpr((ret31(*)(EditorUI*, float))(&$EditorUI::updateZoom) != (ret31(D::*)(float))(&D::updateZoom)) {
            modContainer.registerHookEnable(address31, FunctionScrapper::addressOfNonVirtual((ret31(D::*)(float))(&D::updateZoom)));
        }

        return true;
    }
};

template<class D>
struct $CollisionBlockPopup : CollisionBlockPopup, InterfaceBase {
    $CollisionBlockPopup(const $CollisionBlockPopup& c) : CollisionBlockPopup(c) {}
    $CollisionBlockPopup() = delete;

    using ret0 = CollisionBlockPopup*;
    static inline auto address0 = base+0x130010;

    dupable static ret0 create(EffectGameObject* p0,cocos2d::CCArray* p1) {
        return reinterpret_cast<ret0(*)(CollisionBlockPopup*, EffectGameObject*, cocos2d::CCArray*)>(address0)(p0, p1);
    }

    using ret1 = void;
    static inline auto address1 = base+0x130e60;

    dupable ret1 onNextItemID(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret1(*)(CollisionBlockPopup*, cocos2d::CCObject*)>(address1)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CollisionBlockPopup*, EffectGameObject*, cocos2d::CCArray*))(&$CollisionBlockPopup::create) != (ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)));
        }

        if constexpr((ret1(*)(CollisionBlockPopup*, cocos2d::CCObject*))(&$CollisionBlockPopup::onNextItemID) != (ret1(D::*)(cocos2d::CCObject*))(&D::onNextItemID)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCObject*))(&D::onNextItemID)));
        }

        return true;
    }
};

template<class D>
struct $CheckpointObject : CheckpointObject, InterfaceBase {
    $CheckpointObject(const $CheckpointObject& c) : CheckpointObject(c) {}
    $CheckpointObject() = delete;

    using ret0 = CheckpointObject*;
    static inline auto address0 = base+0x7e7d0;

    dupable static ret0 create() {
        return reinterpret_cast<ret0(*)(CheckpointObject*)>(address0)();
    }

    using ret1 = void;
    static inline auto address1 = base+0x7ef50;

    dupable ret1 getObject() {
        return reinterpret_cast<ret1(*)(CheckpointObject*)>(address1)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CheckpointObject*))(&$CheckpointObject::create) != (ret0(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::create)));
        }

        if constexpr((ret1(*)(CheckpointObject*))(&$CheckpointObject::getObject) != (ret1(D::*)())(&D::getObject)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::getObject)));
        }

        return true;
    }
};

template<class D>
struct $CCTextInputNode : CCTextInputNode, InterfaceBase {
    $CCTextInputNode(const $CCTextInputNode& c) : CCTextInputNode(c) {}
    $CCTextInputNode() = delete;

    using ret0 = CCTextInputNode*;
    static inline auto address0 = base+0x5cfb0;

    dupable static ret0 create(float p0,float p1,char const* p2,char const* p3,int p4,char const* p5) {
        return reinterpret_cast<ret0(*)(CCTextInputNode*, float, float, char const*, char const*, int, char const*)>(address0)(p0, p1, p2, p3, p4, p5);
    }

    using ret1 = gd::string;
    static inline auto address1 = base+0x5d6f0;

    dupable ret1 getString() {
        return reinterpret_cast<ret1(*)(CCTextInputNode*)>(address1)(this);
    }

    using ret2 = void;
    static inline auto address2 = base+0x5d730;

    dupable ret2 refreshLabel() {
        return reinterpret_cast<ret2(*)(CCTextInputNode*)>(address2)(this);
    }

    using ret3 = void;
    static inline auto address3 = base+0x5d360;

    dupable ret3 setAllowedChars(gd::string p0) {
        return reinterpret_cast<ret3(*)(CCTextInputNode*, gd::string)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x5dab0;

    dupable ret4 setLabelNormalColor(cocos2d::_ccColor3B p0) {
        return reinterpret_cast<ret4(*)(CCTextInputNode*, cocos2d::_ccColor3B)>(address4)(this, p0);
    }

    using ret5 = void;
    static inline auto address5 = base+0x5da90;

    dupable ret5 setLabelPlaceholderColor(cocos2d::_ccColor3B p0) {
        return reinterpret_cast<ret5(*)(CCTextInputNode*, cocos2d::_ccColor3B)>(address5)(this, p0);
    }

    using ret6 = void;
    static inline auto address6 = base+0x5da70;

    dupable ret6 setLabelPlaceholderScale(float p0) {
        return reinterpret_cast<ret6(*)(CCTextInputNode*, float)>(address6)(this, p0);
    }

    using ret7 = void;
    static inline auto address7 = base+0x5da30;

    dupable ret7 setMaxLabelScale(float p0) {
        return reinterpret_cast<ret7(*)(CCTextInputNode*, float)>(address7)(this, p0);
    }

    using ret8 = void;
    static inline auto address8 = base+0x5da50;

    dupable ret8 setMaxLabelWidth(float p0) {
        return reinterpret_cast<ret8(*)(CCTextInputNode*, float)>(address8)(this, p0);
    }

    using ret9 = void;
    static inline auto address9 = base+0x5d3e0;

    dupable ret9 setString(gd::string p0) {
        return reinterpret_cast<ret9(*)(CCTextInputNode*, gd::string)>(address9)(this, p0);
    }

    using ret10 = void;
    static inline auto address10 = base+0x5d4a0;

    dupable ret10 updateLabel(gd::string p0) {
        return reinterpret_cast<ret10(*)(CCTextInputNode*, gd::string)>(address10)(this, p0);
    }

    using ret11 = void;
    static inline auto address11 = base+0x5ec70;

    dupable ret11 forceOffset() {
        return reinterpret_cast<ret11(*)(CCTextInputNode*)>(address11)(this);
    }

    using ret12 = void;
    static inline auto address12 = base+0x5eec0;

    dupable ret12 registerWithTouchDispatcher() {
        return reinterpret_cast<ret12(*)(CCTextInputNode*)>(address12)(this);
    }

    using ret13 = bool;
    static inline auto address13 = base+0x5d180;

    dupable ret13 init(float p0,float p1,char const* p2,char const* p3,int p4,char const* p5) {
        return reinterpret_cast<ret13(*)(CCTextInputNode*, float, float, char const*, char const*, int, char const*)>(address13)(this, p0, p1, p2, p3, p4, p5);
    }

    using ret14 = void;
    static inline auto address14 = base+0x5ceb0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address14)(this);
    }

    using ret15 = void;
    static inline auto address15 = base+0x5d380;

    dupable ret15 visit() {
        return reinterpret_cast<ret15(*)(CCTextInputNode*)>(address15)(this);
    }

    using ret16 = bool;
    static inline auto address16 = base+0x5ec80;

    dupable ret16 ccTouchBegan(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret16(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address16)(this, p0, p1);
    }

    using ret17 = void;
    static inline auto address17 = base+0x5ee80;

    dupable ret17 ccTouchCancelled(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret17(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address17)(this, p0, p1);
    }

    using ret18 = void;
    static inline auto address18 = base+0x5ee60;

    dupable ret18 ccTouchEnded(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret18(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address18)(this, p0, p1);
    }

    using ret19 = void;
    static inline auto address19 = base+0x5eea0;

    dupable ret19 ccTouchMoved(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret19(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address19)(this, p0, p1);
    }

    using ret20 = void;
    static inline auto address20 = base+0x5dd70;

    dupable ret20 textChanged() {
        return reinterpret_cast<ret20(*)(CCTextInputNode*)>(address20)(this);
    }

    using ret21 = void;
    static inline auto address21 = base+0x5dd40;

    dupable ret21 onClickTrackNode(bool p0) {
        return reinterpret_cast<ret21(*)(CCTextInputNode*, bool)>(address21)(this, p0);
    }

    using ret22 = void;
    static inline auto address22 = base+0x5dad0;

    dupable ret22 keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo& p0) {
        return reinterpret_cast<ret22(*)(CCTextInputNode*, cocos2d::CCIMEKeyboardNotificationInfo&)>(address22)(this, p0);
    }

    using ret23 = void;
    static inline auto address23 = base+0x5dc20;

    dupable ret23 keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo& p0) {
        return reinterpret_cast<ret23(*)(CCTextInputNode*, cocos2d::CCIMEKeyboardNotificationInfo&)>(address23)(this, p0);
    }

    using ret24 = bool;
    static inline auto address24 = base+0x5de50;

    dupable ret24 onTextFieldInsertText(cocos2d::CCTextFieldTTF* p0,char const* p1,int p2) {
        return reinterpret_cast<ret24(*)(CCTextInputNode*, cocos2d::CCTextFieldTTF*, char const*, int)>(address24)(this, p0, p1, p2);
    }

    using ret25 = bool;
    static inline auto address25 = base+0x5e2c0;

    dupable ret25 onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF* p0) {
        return reinterpret_cast<ret25(*)(CCTextInputNode*, cocos2d::CCTextFieldTTF*)>(address25)(this, p0);
    }

    using ret26 = bool;
    static inline auto address26 = base+0x5e610;

    dupable ret26 onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF* p0) {
        return reinterpret_cast<ret26(*)(CCTextInputNode*, cocos2d::CCTextFieldTTF*)>(address26)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCTextInputNode*, float, float, char const*, char const*, int, char const*))(&$CCTextInputNode::create) != (ret0(D::*)(float, float, char const*, char const*, int, char const*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(float, float, char const*, char const*, int, char const*))(&D::create)));
        }

        if constexpr((ret1(*)(CCTextInputNode*))(&$CCTextInputNode::getString) != (ret1(D::*)())(&D::getString)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::getString)));
        }

        if constexpr((ret2(*)(CCTextInputNode*))(&$CCTextInputNode::refreshLabel) != (ret2(D::*)())(&D::refreshLabel)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::refreshLabel)));
        }

        if constexpr((ret3(*)(CCTextInputNode*, gd::string))(&$CCTextInputNode::setAllowedChars) != (ret3(D::*)(gd::string))(&D::setAllowedChars)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(gd::string))(&D::setAllowedChars)));
        }

        if constexpr((ret4(*)(CCTextInputNode*, cocos2d::_ccColor3B))(&$CCTextInputNode::setLabelNormalColor) != (ret4(D::*)(cocos2d::_ccColor3B))(&D::setLabelNormalColor)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(cocos2d::_ccColor3B))(&D::setLabelNormalColor)));
        }

        if constexpr((ret5(*)(CCTextInputNode*, cocos2d::_ccColor3B))(&$CCTextInputNode::setLabelPlaceholderColor) != (ret5(D::*)(cocos2d::_ccColor3B))(&D::setLabelPlaceholderColor)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)(cocos2d::_ccColor3B))(&D::setLabelPlaceholderColor)));
        }

        if constexpr((ret6(*)(CCTextInputNode*, float))(&$CCTextInputNode::setLabelPlaceholderScale) != (ret6(D::*)(float))(&D::setLabelPlaceholderScale)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)(float))(&D::setLabelPlaceholderScale)));
        }

        if constexpr((ret7(*)(CCTextInputNode*, float))(&$CCTextInputNode::setMaxLabelScale) != (ret7(D::*)(float))(&D::setMaxLabelScale)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)(float))(&D::setMaxLabelScale)));
        }

        if constexpr((ret8(*)(CCTextInputNode*, float))(&$CCTextInputNode::setMaxLabelWidth) != (ret8(D::*)(float))(&D::setMaxLabelWidth)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfNonVirtual((ret8(D::*)(float))(&D::setMaxLabelWidth)));
        }

        if constexpr((ret9(*)(CCTextInputNode*, gd::string))(&$CCTextInputNode::setString) != (ret9(D::*)(gd::string))(&D::setString)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfNonVirtual((ret9(D::*)(gd::string))(&D::setString)));
        }

        if constexpr((ret10(*)(CCTextInputNode*, gd::string))(&$CCTextInputNode::updateLabel) != (ret10(D::*)(gd::string))(&D::updateLabel)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfNonVirtual((ret10(D::*)(gd::string))(&D::updateLabel)));
        }

        if constexpr((ret11(*)(CCTextInputNode*))(&$CCTextInputNode::forceOffset) != (ret11(D::*)())(&D::forceOffset)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfNonVirtual((ret11(D::*)())(&D::forceOffset)));
        }

        if constexpr((ret12(*)(CCTextInputNode*))(&$CCTextInputNode::registerWithTouchDispatcher) != (ret12(D::*)())(&D::registerWithTouchDispatcher)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfVirtual((ret12(D::*)())(&D::registerWithTouchDispatcher)));
        }

        if constexpr((ret13(*)(CCTextInputNode*, float, float, char const*, char const*, int, char const*))(&$CCTextInputNode::init) != (ret13(D::*)(float, float, char const*, char const*, int, char const*))(&D::init)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfNonVirtual((ret13(D::*)(float, float, char const*, char const*, int, char const*))(&D::init)));
        }

        if constexpr((ret14(*)(CCTextInputNode*))(&$CCTextInputNode::destructor) != (ret14(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfNonVirtual((ret14(D::*)())(&D::destructor)));
        }

        if constexpr((ret15(*)(CCTextInputNode*))(&$CCTextInputNode::visit) != (ret15(D::*)())(&D::visit)) {
            modContainer.registerHookEnable(address15, FunctionScrapper::addressOfVirtual((ret15(D::*)())(&D::visit)));
        }

        if constexpr((ret16(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$CCTextInputNode::ccTouchBegan) != (ret16(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchBegan)) {
            modContainer.registerHookEnable(address16, FunctionScrapper::addressOfVirtual((ret16(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchBegan)));
        }

        if constexpr((ret17(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$CCTextInputNode::ccTouchCancelled) != (ret17(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchCancelled)) {
            modContainer.registerHookEnable(address17, FunctionScrapper::addressOfVirtual((ret17(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchCancelled)));
        }

        if constexpr((ret18(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$CCTextInputNode::ccTouchEnded) != (ret18(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchEnded)) {
            modContainer.registerHookEnable(address18, FunctionScrapper::addressOfVirtual((ret18(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchEnded)));
        }

        if constexpr((ret19(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$CCTextInputNode::ccTouchMoved) != (ret19(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchMoved)) {
            modContainer.registerHookEnable(address19, FunctionScrapper::addressOfVirtual((ret19(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchMoved)));
        }

        if constexpr((ret20(*)(CCTextInputNode*))(&$CCTextInputNode::textChanged) != (ret20(D::*)())(&D::textChanged)) {
            modContainer.registerHookEnable(address20, FunctionScrapper::addressOfVirtual((ret20(D::*)())(&D::textChanged)));
        }

        if constexpr((ret21(*)(CCTextInputNode*, bool))(&$CCTextInputNode::onClickTrackNode) != (ret21(D::*)(bool))(&D::onClickTrackNode)) {
            modContainer.registerHookEnable(address21, FunctionScrapper::addressOfVirtual((ret21(D::*)(bool))(&D::onClickTrackNode)));
        }

        if constexpr((ret22(*)(CCTextInputNode*, cocos2d::CCIMEKeyboardNotificationInfo&))(&$CCTextInputNode::keyboardWillShow) != (ret22(D::*)(cocos2d::CCIMEKeyboardNotificationInfo&))(&D::keyboardWillShow)) {
            modContainer.registerHookEnable(address22, FunctionScrapper::addressOfVirtual((ret22(D::*)(cocos2d::CCIMEKeyboardNotificationInfo&))(&D::keyboardWillShow)));
        }

        if constexpr((ret23(*)(CCTextInputNode*, cocos2d::CCIMEKeyboardNotificationInfo&))(&$CCTextInputNode::keyboardWillHide) != (ret23(D::*)(cocos2d::CCIMEKeyboardNotificationInfo&))(&D::keyboardWillHide)) {
            modContainer.registerHookEnable(address23, FunctionScrapper::addressOfVirtual((ret23(D::*)(cocos2d::CCIMEKeyboardNotificationInfo&))(&D::keyboardWillHide)));
        }

        if constexpr((ret24(*)(CCTextInputNode*, cocos2d::CCTextFieldTTF*, char const*, int))(&$CCTextInputNode::onTextFieldInsertText) != (ret24(D::*)(cocos2d::CCTextFieldTTF*, char const*, int))(&D::onTextFieldInsertText)) {
            modContainer.registerHookEnable(address24, FunctionScrapper::addressOfVirtual((ret24(D::*)(cocos2d::CCTextFieldTTF*, char const*, int))(&D::onTextFieldInsertText)));
        }

        if constexpr((ret25(*)(CCTextInputNode*, cocos2d::CCTextFieldTTF*))(&$CCTextInputNode::onTextFieldAttachWithIME) != (ret25(D::*)(cocos2d::CCTextFieldTTF*))(&D::onTextFieldAttachWithIME)) {
            modContainer.registerHookEnable(address25, FunctionScrapper::addressOfVirtual((ret25(D::*)(cocos2d::CCTextFieldTTF*))(&D::onTextFieldAttachWithIME)));
        }

        if constexpr((ret26(*)(CCTextInputNode*, cocos2d::CCTextFieldTTF*))(&$CCTextInputNode::onTextFieldDetachWithIME) != (ret26(D::*)(cocos2d::CCTextFieldTTF*))(&D::onTextFieldDetachWithIME)) {
            modContainer.registerHookEnable(address26, FunctionScrapper::addressOfVirtual((ret26(D::*)(cocos2d::CCTextFieldTTF*))(&D::onTextFieldDetachWithIME)));
        }

        return true;
    }
};

template<class D>
struct $LevelSettingsObject : LevelSettingsObject, InterfaceBase {
    $LevelSettingsObject(const $LevelSettingsObject& c) : LevelSettingsObject(c) {}
    $LevelSettingsObject() = delete;

    using ret0 = void;
    static inline auto address0 = base+0xa5650;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = bool;
    static inline auto address1 = base+0xa5690;

    dupable ret1 init() {
        return reinterpret_cast<ret1(*)(LevelSettingsObject*)>(address1)(this);
    }

    using ret2 = LevelSettingsObject*;
    static inline auto address2 = base+0x92760;

    dupable static ret2 create() {
        return reinterpret_cast<ret2(*)(LevelSettingsObject*)>(address2)();
    }

    using ret3 = void;
    static inline auto address3 = base+0xa5810;

    dupable ret3 objectFromDict(cocos2d::CCDictionary* p0) {
        return reinterpret_cast<ret3(*)(LevelSettingsObject*, cocos2d::CCDictionary*)>(address3)(this, p0);
    }

    using ret4 = LevelSettingsObject*;
    static inline auto address4 = base+0x945a0;

    dupable static ret4 objectFromString(gd::string p0) {
        return reinterpret_cast<ret4(*)(LevelSettingsObject*, gd::string)>(address4)(p0);
    }

    using ret5 = void;
    static inline auto address5 = base+0xa6a30;

    dupable ret5 setupColorsFromLegacyMode(cocos2d::CCDictionary* p0) {
        return reinterpret_cast<ret5(*)(LevelSettingsObject*, cocos2d::CCDictionary*)>(address5)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(LevelSettingsObject*))(&$LevelSettingsObject::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(LevelSettingsObject*))(&$LevelSettingsObject::init) != (ret1(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::init)));
        }

        if constexpr((ret2(*)(LevelSettingsObject*))(&$LevelSettingsObject::create) != (ret2(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::create)));
        }

        if constexpr((ret3(*)(LevelSettingsObject*, cocos2d::CCDictionary*))(&$LevelSettingsObject::objectFromDict) != (ret3(D::*)(cocos2d::CCDictionary*))(&D::objectFromDict)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(cocos2d::CCDictionary*))(&D::objectFromDict)));
        }

        if constexpr((ret4(*)(LevelSettingsObject*, gd::string))(&$LevelSettingsObject::objectFromString) != (ret4(D::*)(gd::string))(&D::objectFromString)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(gd::string))(&D::objectFromString)));
        }

        if constexpr((ret5(*)(LevelSettingsObject*, cocos2d::CCDictionary*))(&$LevelSettingsObject::setupColorsFromLegacyMode) != (ret5(D::*)(cocos2d::CCDictionary*))(&D::setupColorsFromLegacyMode)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)(cocos2d::CCDictionary*))(&D::setupColorsFromLegacyMode)));
        }

        return true;
    }
};

template<class D>
struct $CCMoveTo : CCMoveTo, InterfaceBase {
    $CCMoveTo(const $CCMoveTo& c) : CCMoveTo(c) {}
    $CCMoveTo() = delete;

    using ret0 = cocos2d::CCMoveTo*;
    static inline auto address0 = base+0x1f54d0;

    dupable static ret0 create(float p0,cocos2d::CCPoint const& p1) {
        return reinterpret_cast<ret0(*)(CCMoveTo*, float, cocos2d::CCPoint const&)>(address0)(p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCMoveTo*, float, cocos2d::CCPoint const&))(&$CCMoveTo::create) != (ret0(D::*)(float, cocos2d::CCPoint const&))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(float, cocos2d::CCPoint const&))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCScrollLayerExtDelegate : CCScrollLayerExtDelegate, InterfaceBase {
    $CCScrollLayerExtDelegate(const $CCScrollLayerExtDelegate& c) : CCScrollLayerExtDelegate(c) {}
    $CCScrollLayerExtDelegate() = delete;
    static bool _apply() {

        return true;
    }
};

template<class D>
struct $CCArray : CCArray, InterfaceBase {
    $CCArray(const $CCArray& c) : CCArray(c) {}
    $CCArray() = delete;

    using ret0 = decltype(declval<cocos2d::CCArray>().addObject(declval<cocos2d::CCObject*>()));
    static inline auto address0 = base+0x419f90;

    dupable ret0 addObject(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret0(*)(CCArray*, cocos2d::CCObject*)>(address0)(this, p0);
    }

    using ret1 = decltype(declval<cocos2d::CCArray>().addObjectNew(declval<cocos2d::CCObject*>()));
    static inline auto address1 = base+0x41a450;

    dupable ret1 addObjectNew(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret1(*)(CCArray*, cocos2d::CCObject*)>(address1)(this, p0);
    }

    using ret2 = decltype(declval<cocos2d::CCArray>().addObjectsFromArray(declval<cocos2d::CCArray*>()));
    static inline auto address2 = base+0x41a2d0;

    dupable ret2 addObjectsFromArray(cocos2d::CCArray* p0) {
        return reinterpret_cast<ret2(*)(CCArray*, cocos2d::CCArray*)>(address2)(this, p0);
    }

    using ret3 = decltype(declval<cocos2d::CCArray>().containsObject(declval<cocos2d::CCObject*>()));
    static inline auto address3 = base+0x41a3e0;

    dupable ret3 containsObject(cocos2d::CCObject* p0) const {
        return reinterpret_cast<ret3(*)(CCArray*, cocos2d::CCObject*)>(address3)(this, p0);
    }

    using ret4 = decltype(declval<cocos2d::CCArray>().count());
    static inline auto address4 = base+0x41a2f0;

    dupable ret4 count() const {
        return reinterpret_cast<ret4(*)(CCArray*)>(address4)(this);
    }

    using ret5 = cocos2d::CCArray*;
    static inline auto address5 = base+0x419cb0;

    dupable static ret5 create() {
        return reinterpret_cast<ret5(*)(CCArray*)>(address5)();
    }

    using ret6 = decltype(declval<cocos2d::CCArray>().createWithObject(declval<cocos2d::CCObject*>()));
    static inline auto address6 = base+0x419d50;

    dupable static ret6 createWithObject(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret6(*)(CCArray*, cocos2d::CCObject*)>(address6)(p0);
    }

    using ret7 = decltype(declval<cocos2d::CCArray>().fastRemoveObject(declval<cocos2d::CCObject*>()));
    static inline auto address7 = base+0x41a520;

    dupable ret7 fastRemoveObject(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret7(*)(CCArray*, cocos2d::CCObject*)>(address7)(this, p0);
    }

    using ret8 = decltype(declval<cocos2d::CCArray>().fastRemoveObjectAtIndex(declval<unsigned int>()));
    static inline auto address8 = base+0x41a500;

    dupable ret8 fastRemoveObjectAtIndex(unsigned int p0) {
        return reinterpret_cast<ret8(*)(CCArray*, unsigned int)>(address8)(this, p0);
    }

    using ret9 = decltype(declval<cocos2d::CCArray>().fastRemoveObjectAtIndexNew(declval<unsigned int>()));
    static inline auto address9 = base+0x41a510;

    dupable ret9 fastRemoveObjectAtIndexNew(unsigned int p0) {
        return reinterpret_cast<ret9(*)(CCArray*, unsigned int)>(address9)(this, p0);
    }

    using ret10 = decltype(declval<cocos2d::CCArray>().lastObject());
    static inline auto address10 = base+0x41a360;

    dupable ret10 lastObject() {
        return reinterpret_cast<ret10(*)(CCArray*)>(address10)(this);
    }

    using ret11 = decltype(declval<cocos2d::CCArray>().objectAtIndex(declval<unsigned int>()));
    static inline auto address11 = base+0x41a340;

    dupable ret11 objectAtIndex(unsigned int p0) {
        return reinterpret_cast<ret11(*)(CCArray*, unsigned int)>(address11)(this, p0);
    }

    using ret12 = decltype(declval<cocos2d::CCArray>().removeAllObjects());
    static inline auto address12 = base+0x41a4f0;

    dupable ret12 removeAllObjects() {
        return reinterpret_cast<ret12(*)(CCArray*)>(address12)(this);
    }

    using ret13 = decltype(declval<cocos2d::CCArray>().removeLastObject(declval<bool>()));
    static inline auto address13 = base+0x41a470;

    dupable ret13 removeLastObject(bool p0) {
        return reinterpret_cast<ret13(*)(CCArray*, bool)>(address13)(this, p0);
    }

    using ret14 = decltype(declval<cocos2d::CCArray>().removeObject(declval<cocos2d::CCObject*>(), declval<bool>()));
    static inline auto address14 = base+0x41a490;

    dupable ret14 removeObject(cocos2d::CCObject* p0,bool p1) {
        return reinterpret_cast<ret14(*)(CCArray*, cocos2d::CCObject*, bool)>(address14)(this, p0, p1);
    }

    using ret15 = decltype(declval<cocos2d::CCArray>().removeObjectAtIndex(declval<unsigned int>(), declval<bool>()));
    static inline auto address15 = base+0x41a4b0;

    dupable ret15 removeObjectAtIndex(unsigned int p0,bool p1) {
        return reinterpret_cast<ret15(*)(CCArray*, unsigned int, bool)>(address15)(this, p0, p1);
    }

    using ret16 = decltype(declval<cocos2d::CCArray>().stringAtIndex(declval<unsigned int>()));
    static inline auto address16 = base+0x41a320;

    dupable ret16 stringAtIndex(unsigned int p0) {
        return reinterpret_cast<ret16(*)(CCArray*, unsigned int)>(address16)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCArray*, cocos2d::CCObject*))(&$CCArray::addObject) != (ret0(D::*)(cocos2d::CCObject*))(&D::addObject)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCObject*))(&D::addObject)));
        }

        if constexpr((ret1(*)(CCArray*, cocos2d::CCObject*))(&$CCArray::addObjectNew) != (ret1(D::*)(cocos2d::CCObject*))(&D::addObjectNew)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCObject*))(&D::addObjectNew)));
        }

        if constexpr((ret2(*)(CCArray*, cocos2d::CCArray*))(&$CCArray::addObjectsFromArray) != (ret2(D::*)(cocos2d::CCArray*))(&D::addObjectsFromArray)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(cocos2d::CCArray*))(&D::addObjectsFromArray)));
        }

        if constexpr((ret3(*)(CCArray*, cocos2d::CCObject*))(&$CCArray::containsObject) != (ret3(D::*)(cocos2d::CCObject*))(&D::containsObject)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(cocos2d::CCObject*))(&D::containsObject)));
        }

        if constexpr((ret4(*)(CCArray*))(&$CCArray::count) != (ret4(D::*)())(&D::count)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)())(&D::count)));
        }

        if constexpr((ret5(*)(CCArray*))(&$CCArray::create) != (ret5(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)())(&D::create)));
        }

        if constexpr((ret6(*)(CCArray*, cocos2d::CCObject*))(&$CCArray::createWithObject) != (ret6(D::*)(cocos2d::CCObject*))(&D::createWithObject)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)(cocos2d::CCObject*))(&D::createWithObject)));
        }

        if constexpr((ret7(*)(CCArray*, cocos2d::CCObject*))(&$CCArray::fastRemoveObject) != (ret7(D::*)(cocos2d::CCObject*))(&D::fastRemoveObject)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)(cocos2d::CCObject*))(&D::fastRemoveObject)));
        }

        if constexpr((ret8(*)(CCArray*, unsigned int))(&$CCArray::fastRemoveObjectAtIndex) != (ret8(D::*)(unsigned int))(&D::fastRemoveObjectAtIndex)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfNonVirtual((ret8(D::*)(unsigned int))(&D::fastRemoveObjectAtIndex)));
        }

        if constexpr((ret9(*)(CCArray*, unsigned int))(&$CCArray::fastRemoveObjectAtIndexNew) != (ret9(D::*)(unsigned int))(&D::fastRemoveObjectAtIndexNew)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfNonVirtual((ret9(D::*)(unsigned int))(&D::fastRemoveObjectAtIndexNew)));
        }

        if constexpr((ret10(*)(CCArray*))(&$CCArray::lastObject) != (ret10(D::*)())(&D::lastObject)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfNonVirtual((ret10(D::*)())(&D::lastObject)));
        }

        if constexpr((ret11(*)(CCArray*, unsigned int))(&$CCArray::objectAtIndex) != (ret11(D::*)(unsigned int))(&D::objectAtIndex)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfNonVirtual((ret11(D::*)(unsigned int))(&D::objectAtIndex)));
        }

        if constexpr((ret12(*)(CCArray*))(&$CCArray::removeAllObjects) != (ret12(D::*)())(&D::removeAllObjects)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfNonVirtual((ret12(D::*)())(&D::removeAllObjects)));
        }

        if constexpr((ret13(*)(CCArray*, bool))(&$CCArray::removeLastObject) != (ret13(D::*)(bool))(&D::removeLastObject)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfNonVirtual((ret13(D::*)(bool))(&D::removeLastObject)));
        }

        if constexpr((ret14(*)(CCArray*, cocos2d::CCObject*, bool))(&$CCArray::removeObject) != (ret14(D::*)(cocos2d::CCObject*, bool))(&D::removeObject)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfNonVirtual((ret14(D::*)(cocos2d::CCObject*, bool))(&D::removeObject)));
        }

        if constexpr((ret15(*)(CCArray*, unsigned int, bool))(&$CCArray::removeObjectAtIndex) != (ret15(D::*)(unsigned int, bool))(&D::removeObjectAtIndex)) {
            modContainer.registerHookEnable(address15, FunctionScrapper::addressOfNonVirtual((ret15(D::*)(unsigned int, bool))(&D::removeObjectAtIndex)));
        }

        if constexpr((ret16(*)(CCArray*, unsigned int))(&$CCArray::stringAtIndex) != (ret16(D::*)(unsigned int))(&D::stringAtIndex)) {
            modContainer.registerHookEnable(address16, FunctionScrapper::addressOfNonVirtual((ret16(D::*)(unsigned int))(&D::stringAtIndex)));
        }

        return true;
    }
};

template<class D>
struct $CCMenuItemSpriteExtra : CCMenuItemSpriteExtra, InterfaceBase {
    $CCMenuItemSpriteExtra(const $CCMenuItemSpriteExtra& c) : CCMenuItemSpriteExtra(c) {}
    $CCMenuItemSpriteExtra() = delete;

    using ret0 = CCMenuItemSpriteExtra*;
    static inline auto address0 = base+0x1253c0;

    dupable static ret0 create(cocos2d::CCNode* p0,cocos2d::CCNode* p1,cocos2d::CCObject* p2,cocos2d::SEL_MenuHandler p3) {
        return reinterpret_cast<ret0(*)(CCMenuItemSpriteExtra*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)>(address0)(p0, p1, p2, p3);
    }

    using ret1 = void;
    static inline auto address1 = base+0x1255e0;

    dupable ret1 setSizeMult(float p0) {
        return reinterpret_cast<ret1(*)(CCMenuItemSpriteExtra*, float)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x32670;

    dupable void constructor() {
        reinterpret_cast<void(*)(decltype(this))>(address2)(this);
    }

    using ret3 = bool;
    static inline auto address3 = base+0x125450;

    dupable ret3 init(cocos2d::CCNode* p0,cocos2d::CCNode* p1,cocos2d::CCObject* p2,cocos2d::SEL_MenuHandler p3) {
        return reinterpret_cast<ret3(*)(CCMenuItemSpriteExtra*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)>(address3)(this, p0, p1, p2, p3);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCMenuItemSpriteExtra*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler))(&$CCMenuItemSpriteExtra::create) != (ret0(D::*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler))(&D::create)));
        }

        if constexpr((ret1(*)(CCMenuItemSpriteExtra*, float))(&$CCMenuItemSpriteExtra::setSizeMult) != (ret1(D::*)(float))(&D::setSizeMult)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(float))(&D::setSizeMult)));
        }

        if constexpr((ret2(*)(CCMenuItemSpriteExtra*))(&$CCMenuItemSpriteExtra::constructor) != (ret2(D::*)())(&D::constructor)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::constructor)));
        }

        if constexpr((ret3(*)(CCMenuItemSpriteExtra*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler))(&$CCMenuItemSpriteExtra::init) != (ret3(D::*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler))(&D::init)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler))(&D::init)));
        }

        return true;
    }
};

template<class D>
struct $CCCircleWaveDelegate : CCCircleWaveDelegate, InterfaceBase {
    $CCCircleWaveDelegate(const $CCCircleWaveDelegate& c) : CCCircleWaveDelegate(c) {}
    $CCCircleWaveDelegate() = delete;
    static bool _apply() {

        return true;
    }
};

template<class D>
struct $CCBlockLayer : CCBlockLayer, InterfaceBase {
    $CCBlockLayer(const $CCBlockLayer& c) : CCBlockLayer(c) {}
    $CCBlockLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x2a5a80;

    dupable ret0 disableUI() {
        return reinterpret_cast<ret0(*)(CCBlockLayer*)>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x2a5c20;

    dupable ret1 draw() {
        return reinterpret_cast<ret1(*)(CCBlockLayer*)>(address1)(this);
    }

    using ret2 = void;
    static inline auto address2 = base+0x2a5a90;

    dupable ret2 enableUI() {
        return reinterpret_cast<ret2(*)(CCBlockLayer*)>(address2)(this);
    }

    using ret3 = void;
    static inline auto address3 = base+0x2a5bb0;

    dupable ret3 enterAnimFinished() {
        return reinterpret_cast<ret3(*)(CCBlockLayer*)>(address3)(this);
    }

    using ret4 = void;
    static inline auto address4 = base+0x2a5aa0;

    dupable ret4 enterLayer() {
        return reinterpret_cast<ret4(*)(CCBlockLayer*)>(address4)(this);
    }

    using ret5 = void;
    static inline auto address5 = base+0x2a5b40;

    dupable ret5 exitLayer() {
        return reinterpret_cast<ret5(*)(CCBlockLayer*)>(address5)(this);
    }

    using ret6 = void;
    static inline auto address6 = base+0x2a5ba0;

    dupable ret6 hideLayer(bool p0) {
        return reinterpret_cast<ret6(*)(CCBlockLayer*, bool)>(address6)(this, p0);
    }

    using ret7 = bool;
    static inline auto address7 = base+0x2a59c0;

    dupable ret7 init() {
        return reinterpret_cast<ret7(*)(CCBlockLayer*)>(address7)(this);
    }

    using ret8 = void;
    static inline auto address8 = base+0x2a5be0;

    dupable ret8 layerHidden() {
        return reinterpret_cast<ret8(*)(CCBlockLayer*)>(address8)(this);
    }

    using ret9 = void;
    static inline auto address9 = base+0x2a5bc0;

    dupable ret9 layerVisible() {
        return reinterpret_cast<ret9(*)(CCBlockLayer*)>(address9)(this);
    }

    using ret10 = void;
    static inline auto address10 = base+0x2a5ad0;

    dupable ret10 registerWithTouchDispatcher() {
        return reinterpret_cast<ret10(*)(CCBlockLayer*)>(address10)(this);
    }

    using ret11 = void;
    static inline auto address11 = base+0x2a5b90;

    dupable ret11 showLayer(bool p0) {
        return reinterpret_cast<ret11(*)(CCBlockLayer*, bool)>(address11)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCBlockLayer*))(&$CCBlockLayer::disableUI) != (ret0(D::*)())(&D::disableUI)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::disableUI)));
        }

        if constexpr((ret1(*)(CCBlockLayer*))(&$CCBlockLayer::draw) != (ret1(D::*)())(&D::draw)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::draw)));
        }

        if constexpr((ret2(*)(CCBlockLayer*))(&$CCBlockLayer::enableUI) != (ret2(D::*)())(&D::enableUI)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::enableUI)));
        }

        if constexpr((ret3(*)(CCBlockLayer*))(&$CCBlockLayer::enterAnimFinished) != (ret3(D::*)())(&D::enterAnimFinished)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::enterAnimFinished)));
        }

        if constexpr((ret4(*)(CCBlockLayer*))(&$CCBlockLayer::enterLayer) != (ret4(D::*)())(&D::enterLayer)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)())(&D::enterLayer)));
        }

        if constexpr((ret5(*)(CCBlockLayer*))(&$CCBlockLayer::exitLayer) != (ret5(D::*)())(&D::exitLayer)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)())(&D::exitLayer)));
        }

        if constexpr((ret6(*)(CCBlockLayer*, bool))(&$CCBlockLayer::hideLayer) != (ret6(D::*)(bool))(&D::hideLayer)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)(bool))(&D::hideLayer)));
        }

        if constexpr((ret7(*)(CCBlockLayer*))(&$CCBlockLayer::init) != (ret7(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)())(&D::init)));
        }

        if constexpr((ret8(*)(CCBlockLayer*))(&$CCBlockLayer::layerHidden) != (ret8(D::*)())(&D::layerHidden)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfNonVirtual((ret8(D::*)())(&D::layerHidden)));
        }

        if constexpr((ret9(*)(CCBlockLayer*))(&$CCBlockLayer::layerVisible) != (ret9(D::*)())(&D::layerVisible)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfNonVirtual((ret9(D::*)())(&D::layerVisible)));
        }

        if constexpr((ret10(*)(CCBlockLayer*))(&$CCBlockLayer::registerWithTouchDispatcher) != (ret10(D::*)())(&D::registerWithTouchDispatcher)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfNonVirtual((ret10(D::*)())(&D::registerWithTouchDispatcher)));
        }

        if constexpr((ret11(*)(CCBlockLayer*, bool))(&$CCBlockLayer::showLayer) != (ret11(D::*)(bool))(&D::showLayer)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfNonVirtual((ret11(D::*)(bool))(&D::showLayer)));
        }

        return true;
    }
};

template<class D>
struct $OpacityEffectAction : OpacityEffectAction, InterfaceBase {
    $OpacityEffectAction(const $OpacityEffectAction& c) : OpacityEffectAction(c) {}
    $OpacityEffectAction() = delete;

    using ret0 = OpacityEffectAction*;
    static inline auto address0 = base+0x1789f0;

    dupable static ret0 create(float p0,float p1,float p2,int p3) {
        return reinterpret_cast<ret0(*)(OpacityEffectAction*, float, float, float, int)>(address0)(p0, p1, p2, p3);
    }

    using ret1 = OpacityEffectAction*;
    static inline auto address1 = base+0x178c10;

    dupable static ret1 createFromString(gd::string p0) {
        return reinterpret_cast<ret1(*)(OpacityEffectAction*, gd::string)>(address1)(p0);
    }

    using ret2 = bool;
    static inline auto address2 = base+0x178b00;

    dupable ret2 init(float p0,float p1,float p2,int p3) {
        return reinterpret_cast<ret2(*)(OpacityEffectAction*, float, float, float, int)>(address2)(this, p0, p1, p2, p3);
    }

    using ret3 = void;
    static inline auto address3 = base+0x178b90;

    dupable ret3 step(float p0) {
        return reinterpret_cast<ret3(*)(OpacityEffectAction*, float)>(address3)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(OpacityEffectAction*, float, float, float, int))(&$OpacityEffectAction::create) != (ret0(D::*)(float, float, float, int))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(float, float, float, int))(&D::create)));
        }

        if constexpr((ret1(*)(OpacityEffectAction*, gd::string))(&$OpacityEffectAction::createFromString) != (ret1(D::*)(gd::string))(&D::createFromString)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(gd::string))(&D::createFromString)));
        }

        if constexpr((ret2(*)(OpacityEffectAction*, float, float, float, int))(&$OpacityEffectAction::init) != (ret2(D::*)(float, float, float, int))(&D::init)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(float, float, float, int))(&D::init)));
        }

        if constexpr((ret3(*)(OpacityEffectAction*, float))(&$OpacityEffectAction::step) != (ret3(D::*)(float))(&D::step)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(float))(&D::step)));
        }

        return true;
    }
};

template<class D>
struct $ArtistCell : ArtistCell, InterfaceBase {
    $ArtistCell(const $ArtistCell& c) : ArtistCell(c) {}
    $ArtistCell() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x11c740;

    dupable void constructor(char const* p0,float p1,float p2) {
        reinterpret_cast<void(*)(decltype(this), char const*, float, float)>(address0)(this, p0, p1, p2);
    }

    using ret1 = void;
    static inline auto address1 = base+0x11c980;

    dupable ret1 draw() {
        return reinterpret_cast<ret1(*)(ArtistCell*)>(address1)(this);
    }

    using ret2 = bool;
    static inline auto address2 = base+0x11c7c0;

    dupable ret2 init() {
        return reinterpret_cast<ret2(*)(ArtistCell*)>(address2)(this);
    }

    using ret3 = void;
    static inline auto address3 = base+0x1118b0;

    dupable ret3 loadFromObject(SongInfoObject* p0) {
        return reinterpret_cast<ret3(*)(ArtistCell*, SongInfoObject*)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x11c7e0;

    dupable ret4 onNewgrounds(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret4(*)(ArtistCell*, cocos2d::CCObject*)>(address4)(this, p0);
    }

    using ret5 = void;
    static inline auto address5 = base+0x110460;

    dupable ret5 updateBGColor(int p0) {
        return reinterpret_cast<ret5(*)(ArtistCell*, int)>(address5)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(ArtistCell*, char const*, float, float))(&$ArtistCell::constructor) != (ret0(D::*)(char const*, float, float))(&D::constructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(char const*, float, float))(&D::constructor)));
        }

        if constexpr((ret1(*)(ArtistCell*))(&$ArtistCell::draw) != (ret1(D::*)())(&D::draw)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::draw)));
        }

        if constexpr((ret2(*)(ArtistCell*))(&$ArtistCell::init) != (ret2(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::init)));
        }

        if constexpr((ret3(*)(ArtistCell*, SongInfoObject*))(&$ArtistCell::loadFromObject) != (ret3(D::*)(SongInfoObject*))(&D::loadFromObject)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(SongInfoObject*))(&D::loadFromObject)));
        }

        if constexpr((ret4(*)(ArtistCell*, cocos2d::CCObject*))(&$ArtistCell::onNewgrounds) != (ret4(D::*)(cocos2d::CCObject*))(&D::onNewgrounds)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(cocos2d::CCObject*))(&D::onNewgrounds)));
        }

        if constexpr((ret5(*)(ArtistCell*, int))(&$ArtistCell::updateBGColor) != (ret5(D::*)(int))(&D::updateBGColor)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)(int))(&D::updateBGColor)));
        }

        return true;
    }
};

template<class D>
struct $LevelEditorLayer : LevelEditorLayer, InterfaceBase {
    $LevelEditorLayer(const $LevelEditorLayer& c) : LevelEditorLayer(c) {}
    $LevelEditorLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x90e80;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0xa1b70;

    dupable ret1 update(float p0) {
        return reinterpret_cast<ret1(*)(LevelEditorLayer*, float)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0xa2a70;

    dupable ret2 draw() {
        return reinterpret_cast<ret2(*)(LevelEditorLayer*)>(address2)(this);
    }

    using ret3 = void;
    static inline auto address3 = base+0x9c200;

    dupable ret3 updateColor(cocos2d::_ccColor3B p0,float p1,int p2,bool p3,float p4,cocos2d::_ccHSVValue p5,int p6,bool p7,int p8,EffectGameObject* p9) {
        return reinterpret_cast<ret3(*)(LevelEditorLayer*, cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*)>(address3)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
    }

    using ret4 = void;
    static inline auto address4 = base+0xa04e0;

    dupable ret4 flipGravity(PlayerObject* p0,bool p1,bool p2) {
        return reinterpret_cast<ret4(*)(LevelEditorLayer*, PlayerObject*, bool, bool)>(address4)(this, p0, p1, p2);
    }

    using ret5 = void;
    static inline auto address5 = base+0x9c590;

    dupable ret5 calculateColorValues(EffectGameObject* p0,EffectGameObject* p1,int p2,float p3,ColorActionSprite* p4,GJEffectManager* p5) {
        return reinterpret_cast<ret5(*)(LevelEditorLayer*, EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*)>(address5)(this, p0, p1, p2, p3, p4, p5);
    }

    using ret6 = void;
    static inline auto address6 = base+0x9dab0;

    dupable ret6 addToGroup(GameObject* p0,int p1,bool p2) {
        return reinterpret_cast<ret6(*)(LevelEditorLayer*, GameObject*, int, bool)>(address6)(this, p0, p1, p2);
    }

    using ret7 = void;
    static inline auto address7 = base+0x9db60;

    dupable ret7 removeFromGroup(GameObject* p0,int p1) {
        return reinterpret_cast<ret7(*)(LevelEditorLayer*, GameObject*, int)>(address7)(this, p0, p1);
    }

    using ret8 = void;
    static inline auto address8 = base+0x9c7d0;

    dupable ret8 timeForXPos(float p0) {
        return reinterpret_cast<ret8(*)(LevelEditorLayer*, float)>(address8)(this, p0);
    }

    using ret9 = void;
    static inline auto address9 = base+0x9c800;

    dupable ret9 xPosForTime(float p0) {
        return reinterpret_cast<ret9(*)(LevelEditorLayer*, float)>(address9)(this, p0);
    }

    using ret10 = void;
    static inline auto address10 = base+0x93f30;

    dupable ret10 levelSettingsUpdated() {
        return reinterpret_cast<ret10(*)(LevelEditorLayer*)>(address10)(this);
    }

    using ret11 = void;
    static inline auto address11 = base+0x9b520;

    dupable ret11 activateTriggerEffect(EffectGameObject* p0,float p1,float p2,float p3) {
        return reinterpret_cast<ret11(*)(LevelEditorLayer*, EffectGameObject*, float, float, float)>(address11)(this, p0, p1, p2, p3);
    }

    using ret12 = GameObject*;
    static inline auto address12 = base+0x94640;

    dupable ret12 addObjectFromString(gd::string p0) {
        return reinterpret_cast<ret12(*)(LevelEditorLayer*, gd::string)>(address12)(this, p0);
    }

    using ret13 = void;
    static inline auto address13 = base+0x94f30;

    dupable ret13 addSpecial(GameObject* p0) {
        return reinterpret_cast<ret13(*)(LevelEditorLayer*, GameObject*)>(address13)(this, p0);
    }

    using ret14 = void;
    static inline auto address14 = base+0x96f80;

    dupable ret14 addToRedoList(UndoObject* p0) {
        return reinterpret_cast<ret14(*)(LevelEditorLayer*, UndoObject*)>(address14)(this, p0);
    }

    using ret15 = void;
    static inline auto address15 = base+0x94e20;

    dupable ret15 addToUndoList(UndoObject* p0,bool p1) {
        return reinterpret_cast<ret15(*)(LevelEditorLayer*, UndoObject*, bool)>(address15)(this, p0, p1);
    }

    using ret16 = void;
    static inline auto address16 = base+0xa2780;

    dupable ret16 animateInDualGround(GameObject* p0,float p1,bool p2) {
        return reinterpret_cast<ret16(*)(LevelEditorLayer*, GameObject*, float, bool)>(address16)(this, p0, p1, p2);
    }

    using ret17 = void;
    static inline auto address17 = base+0x9e620;

    dupable ret17 checkCollisions(PlayerObject* p0,float p1) {
        return reinterpret_cast<ret17(*)(LevelEditorLayer*, PlayerObject*, float)>(address17)(this, p0, p1);
    }

    using ret18 = LevelEditorLayer*;
    static inline auto address18 = base+0x90fb0;

    dupable static ret18 create(GJGameLevel* p0) {
        return reinterpret_cast<ret18(*)(LevelEditorLayer*, GJGameLevel*)>(address18)(p0);
    }

    using ret19 = void;
    static inline auto address19 = base+0x929f0;

    dupable ret19 createBackground() {
        return reinterpret_cast<ret19(*)(LevelEditorLayer*)>(address19)(this);
    }

    using ret20 = void;
    static inline auto address20 = base+0x92840;

    dupable ret20 createGroundLayer() {
        return reinterpret_cast<ret20(*)(LevelEditorLayer*)>(address20)(this);
    }

    using ret21 = GameObject*;
    static inline auto address21 = base+0x957c0;

    dupable ret21 createObject(int p0,cocos2d::CCPoint p1,bool p2) {
        return reinterpret_cast<ret21(*)(LevelEditorLayer*, int, cocos2d::CCPoint, bool)>(address21)(this, p0, p1, p2);
    }

    using ret22 = void;
    static inline auto address22 = base+0x92230;

    dupable ret22 createObjectsFromSetup(gd::string p0) {
        return reinterpret_cast<ret22(*)(LevelEditorLayer*, gd::string)>(address22)(this, p0);
    }

    using ret23 = void;
    static inline auto address23 = base+0x94730;

    dupable ret23 createObjectsFromString(gd::string p0,bool p1) {
        return reinterpret_cast<ret23(*)(LevelEditorLayer*, gd::string, bool)>(address23)(this, p0, p1);
    }

    using ret24 = void;
    static inline auto address24 = base+0x9c860;

    dupable ret24 getLastObjectX() {
        return reinterpret_cast<ret24(*)(LevelEditorLayer*)>(address24)(this);
    }

    using ret25 = void;
    static inline auto address25 = base+0x97790;

    dupable ret25 getLevelString() {
        return reinterpret_cast<ret25(*)(LevelEditorLayer*)>(address25)(this);
    }

    using ret26 = void;
    static inline auto address26 = base+0x9a610;

    dupable ret26 getNextColorChannel() {
        return reinterpret_cast<ret26(*)(LevelEditorLayer*)>(address26)(this);
    }

    using ret27 = void;
    static inline auto address27 = base+0x9a4e0;

    dupable ret27 getNextFreeBlockID(cocos2d::CCArray* p0) {
        return reinterpret_cast<ret27(*)(LevelEditorLayer*, cocos2d::CCArray*)>(address27)(this, p0);
    }

    using ret28 = int;
    static inline auto address28 = base+0x9a1b0;

    dupable ret28 getNextFreeGroupID(cocos2d::CCArray* p0) {
        return reinterpret_cast<ret28(*)(LevelEditorLayer*, cocos2d::CCArray*)>(address28)(this, p0);
    }

    using ret29 = void;
    static inline auto address29 = base+0x9a390;

    dupable ret29 getNextFreeItemID(cocos2d::CCArray* p0) {
        return reinterpret_cast<ret29(*)(LevelEditorLayer*, cocos2d::CCArray*)>(address29)(this, p0);
    }

    using ret30 = void;
    static inline auto address30 = base+0x96240;

    dupable ret30 getObjectRect(GameObject* p0,bool p1) {
        return reinterpret_cast<ret30(*)(LevelEditorLayer*, GameObject*, bool)>(address30)(this, p0, p1);
    }

    using ret31 = void;
    static inline auto address31 = base+0x96840;

    dupable ret31 getRelativeOffset(GameObject* p0) {
        return reinterpret_cast<ret31(*)(LevelEditorLayer*, GameObject*)>(address31)(this, p0);
    }

    using ret32 = void;
    static inline auto address32 = base+0x97020;

    dupable ret32 handleAction(bool p0,cocos2d::CCArray* p1) {
        return reinterpret_cast<ret32(*)(LevelEditorLayer*, bool, cocos2d::CCArray*)>(address32)(this, p0, p1);
    }

    using ret33 = bool;
    static inline auto address33 = base+0x91010;

    dupable ret33 init(GJGameLevel* p0) {
        return reinterpret_cast<ret33(*)(LevelEditorLayer*, GJGameLevel*)>(address33)(this, p0);
    }

    using ret34 = void;
    static inline auto address34 = base+0x960c0;

    dupable ret34 objectAtPosition(cocos2d::CCPoint p0) {
        return reinterpret_cast<ret34(*)(LevelEditorLayer*, cocos2d::CCPoint)>(address34)(this, p0);
    }

    using ret35 = void;
    static inline auto address35 = base+0x999f0;

    dupable ret35 objectMoved(GameObject* p0) {
        return reinterpret_cast<ret35(*)(LevelEditorLayer*, GameObject*)>(address35)(this, p0);
    }

    using ret36 = void;
    static inline auto address36 = base+0x95e60;

    dupable ret36 objectsInRect(cocos2d::CCRect p0,bool p1) {
        return reinterpret_cast<ret36(*)(LevelEditorLayer*, cocos2d::CCRect, bool)>(address36)(this, p0, p1);
    }

    using ret37 = void;
    static inline auto address37 = base+0xa06b0;

    dupable ret37 onPlaytest() {
        return reinterpret_cast<ret37(*)(LevelEditorLayer*)>(address37)(this);
    }

    using ret38 = void;
    static inline auto address38 = base+0xa1780;

    dupable ret38 onStopPlaytest() {
        return reinterpret_cast<ret38(*)(LevelEditorLayer*)>(address38)(this);
    }

    using ret39 = void;
    static inline auto address39 = base+0xa13c0;

    dupable ret39 playMusic() {
        return reinterpret_cast<ret39(*)(LevelEditorLayer*)>(address39)(this);
    }

    using ret40 = void;
    static inline auto address40 = base+0x9dbf0;

    dupable ret40 recreateGroups() {
        return reinterpret_cast<ret40(*)(LevelEditorLayer*)>(address40)(this);
    }

    using ret41 = void;
    static inline auto address41 = base+0x97750;

    dupable ret41 redoLastAction() {
        return reinterpret_cast<ret41(*)(LevelEditorLayer*)>(address41)(this);
    }

    using ret42 = void;
    static inline auto address42 = base+0x93d80;

    dupable ret42 removeAllObjects() {
        return reinterpret_cast<ret42(*)(LevelEditorLayer*)>(address42)(this);
    }

    using ret43 = void;
    static inline auto address43 = base+0x96d40;

    dupable ret43 removeAllObjectsOfType(int p0) {
        return reinterpret_cast<ret43(*)(LevelEditorLayer*, int)>(address43)(this, p0);
    }

    using ret44 = void;
    static inline auto address44 = base+0x96890;

    dupable ret44 removeObject(GameObject* p0,bool p1) {
        return reinterpret_cast<ret44(*)(LevelEditorLayer*, GameObject*, bool)>(address44)(this, p0, p1);
    }

    using ret45 = void;
    static inline auto address45 = base+0x969c0;

    dupable ret45 removeSpecial(GameObject* p0) {
        return reinterpret_cast<ret45(*)(LevelEditorLayer*, GameObject*)>(address45)(this, p0);
    }

    using ret46 = void;
    static inline auto address46 = base+0x9ddc0;

    dupable ret46 resetMovingObjects() {
        return reinterpret_cast<ret46(*)(LevelEditorLayer*)>(address46)(this);
    }

    using ret47 = void;
    static inline auto address47 = base+0x9c4b0;

    dupable ret47 resetObjectVector() {
        return reinterpret_cast<ret47(*)(LevelEditorLayer*)>(address47)(this);
    }

    using ret48 = void;
    static inline auto address48 = base+0x9aa70;

    dupable ret48 resetToggledGroups() {
        return reinterpret_cast<ret48(*)(LevelEditorLayer*)>(address48)(this);
    }

    using ret49 = void;
    static inline auto address49 = base+0x9c3c0;

    dupable ret49 resetToggledGroupsAndObjects() {
        return reinterpret_cast<ret49(*)(LevelEditorLayer*)>(address49)(this);
    }

    using ret50 = void;
    static inline auto address50 = base+0x9a870;

    dupable ret50 resetUnusedColorChannels() {
        return reinterpret_cast<ret50(*)(LevelEditorLayer*)>(address50)(this);
    }

    using ret51 = void;
    static inline auto address51 = base+0x95cd0;

    dupable ret51 rotationForSlopeNearObject(GameObject* p0) {
        return reinterpret_cast<ret51(*)(LevelEditorLayer*, GameObject*)>(address51)(this, p0);
    }

    using ret52 = void;
    static inline auto address52 = base+0x9bd30;

    dupable ret52 runColorEffect(EffectGameObject* p0,int p1,float p2,float p3,bool p4) {
        return reinterpret_cast<ret52(*)(LevelEditorLayer*, EffectGameObject*, int, float, float, bool)>(address52)(this, p0, p1, p2, p3, p4);
    }

    using ret53 = void;
    static inline auto address53 = base+0x90f20;

    dupable ret53 scene(GJGameLevel* p0) {
        return reinterpret_cast<ret53(*)(LevelEditorLayer*, GJGameLevel*)>(address53)(this, p0);
    }

    using ret54 = void;
    static inline auto address54 = base+0xa0ca0;

    dupable ret54 setupLevelStart(LevelSettingsObject* p0) {
        return reinterpret_cast<ret54(*)(LevelEditorLayer*, LevelSettingsObject*)>(address54)(this, p0);
    }

    using ret55 = void;
    static inline auto address55 = base+0x92b10;

    dupable ret55 sortStickyGroups() {
        return reinterpret_cast<ret55(*)(LevelEditorLayer*)>(address55)(this);
    }

    using ret56 = void;
    static inline auto address56 = base+0x9c030;

    dupable ret56 stopTriggersInGroup(int p0,float p1) {
        return reinterpret_cast<ret56(*)(LevelEditorLayer*, int, float)>(address56)(this, p0, p1);
    }

    using ret57 = void;
    static inline auto address57 = base+0xa0200;

    dupable ret57 toggleDualMode(GameObject* p0,bool p1,PlayerObject* p2,bool p3) {
        return reinterpret_cast<ret57(*)(LevelEditorLayer*, GameObject*, bool, PlayerObject*, bool)>(address57)(this, p0, p1, p2, p3);
    }

    using ret58 = void;
    static inline auto address58 = base+0x9bea0;

    dupable ret58 toggleGroupPreview(int p0,bool p1) {
        return reinterpret_cast<ret58(*)(LevelEditorLayer*, int, bool)>(address58)(this, p0, p1);
    }

    using ret59 = void;
    static inline auto address59 = base+0x9ab50;

    dupable ret59 transferDefaultColors(GJEffectManager* p0,GJEffectManager* p1) {
        return reinterpret_cast<ret59(*)(LevelEditorLayer*, GJEffectManager*, GJEffectManager*)>(address59)(this, p0, p1);
    }

    using ret60 = void;
    static inline auto address60 = base+0x97770;

    dupable ret60 undoLastAction() {
        return reinterpret_cast<ret60(*)(LevelEditorLayer*)>(address60)(this);
    }

    using ret61 = void;
    static inline auto address61 = base+0x9b9b0;

    dupable ret61 updateBGAndGColors() {
        return reinterpret_cast<ret61(*)(LevelEditorLayer*)>(address61)(this);
    }

    using ret62 = void;
    static inline auto address62 = base+0x9bc60;

    dupable ret62 updateBlendValues() {
        return reinterpret_cast<ret62(*)(LevelEditorLayer*)>(address62)(this);
    }

    using ret63 = void;
    static inline auto address63 = base+0xa1a60;

    dupable ret63 updateDualGround(PlayerObject* p0,int p1,bool p2) {
        return reinterpret_cast<ret63(*)(LevelEditorLayer*, PlayerObject*, int, bool)>(address63)(this, p0, p1, p2);
    }

    using ret64 = void;
    static inline auto address64 = base+0x93b50;

    dupable ret64 updateEditorMode() {
        return reinterpret_cast<ret64(*)(LevelEditorLayer*)>(address64)(this);
    }

    using ret65 = void;
    static inline auto address65 = base+0x9adc0;

    dupable ret65 updateGameObjectsNew() {
        return reinterpret_cast<ret65(*)(LevelEditorLayer*)>(address65)(this);
    }

    using ret66 = void;
    static inline auto address66 = base+0x93a60;

    dupable ret66 updateGround(float p0) {
        return reinterpret_cast<ret66(*)(LevelEditorLayer*, float)>(address66)(this, p0);
    }

    using ret67 = void;
    static inline auto address67 = base+0x92af0;

    dupable ret67 updateGroundWidth() {
        return reinterpret_cast<ret67(*)(LevelEditorLayer*)>(address67)(this);
    }

    using ret68 = void;
    static inline auto address68 = base+0x91ed0;

    dupable ret68 updateOptions() {
        return reinterpret_cast<ret68(*)(LevelEditorLayer*)>(address68)(this);
    }

    using ret69 = void;
    static inline auto address69 = base+0x9bb10;

    dupable ret69 updateToggledGroups() {
        return reinterpret_cast<ret69(*)(LevelEditorLayer*)>(address69)(this);
    }

    using ret70 = void;
    static inline auto address70 = base+0x92c70;

    dupable ret70 updateVisibility(float p0) {
        return reinterpret_cast<ret70(*)(LevelEditorLayer*, float)>(address70)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(LevelEditorLayer*))(&$LevelEditorLayer::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(LevelEditorLayer*, float))(&$LevelEditorLayer::update) != (ret1(D::*)(float))(&D::update)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)(float))(&D::update)));
        }

        if constexpr((ret2(*)(LevelEditorLayer*))(&$LevelEditorLayer::draw) != (ret2(D::*)())(&D::draw)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)())(&D::draw)));
        }

        if constexpr((ret3(*)(LevelEditorLayer*, cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*))(&$LevelEditorLayer::updateColor) != (ret3(D::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*))(&D::updateColor)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*))(&D::updateColor)));
        }

        if constexpr((ret4(*)(LevelEditorLayer*, PlayerObject*, bool, bool))(&$LevelEditorLayer::flipGravity) != (ret4(D::*)(PlayerObject*, bool, bool))(&D::flipGravity)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)(PlayerObject*, bool, bool))(&D::flipGravity)));
        }

        if constexpr((ret5(*)(LevelEditorLayer*, EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*))(&$LevelEditorLayer::calculateColorValues) != (ret5(D::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*))(&D::calculateColorValues)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*))(&D::calculateColorValues)));
        }

        if constexpr((ret6(*)(LevelEditorLayer*, GameObject*, int, bool))(&$LevelEditorLayer::addToGroup) != (ret6(D::*)(GameObject*, int, bool))(&D::addToGroup)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)(GameObject*, int, bool))(&D::addToGroup)));
        }

        if constexpr((ret7(*)(LevelEditorLayer*, GameObject*, int))(&$LevelEditorLayer::removeFromGroup) != (ret7(D::*)(GameObject*, int))(&D::removeFromGroup)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)(GameObject*, int))(&D::removeFromGroup)));
        }

        if constexpr((ret8(*)(LevelEditorLayer*, float))(&$LevelEditorLayer::timeForXPos) != (ret8(D::*)(float))(&D::timeForXPos)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)(float))(&D::timeForXPos)));
        }

        if constexpr((ret9(*)(LevelEditorLayer*, float))(&$LevelEditorLayer::xPosForTime) != (ret9(D::*)(float))(&D::xPosForTime)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfVirtual((ret9(D::*)(float))(&D::xPosForTime)));
        }

        if constexpr((ret10(*)(LevelEditorLayer*))(&$LevelEditorLayer::levelSettingsUpdated) != (ret10(D::*)())(&D::levelSettingsUpdated)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfVirtual((ret10(D::*)())(&D::levelSettingsUpdated)));
        }

        if constexpr((ret11(*)(LevelEditorLayer*, EffectGameObject*, float, float, float))(&$LevelEditorLayer::activateTriggerEffect) != (ret11(D::*)(EffectGameObject*, float, float, float))(&D::activateTriggerEffect)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfNonVirtual((ret11(D::*)(EffectGameObject*, float, float, float))(&D::activateTriggerEffect)));
        }

        if constexpr((ret12(*)(LevelEditorLayer*, gd::string))(&$LevelEditorLayer::addObjectFromString) != (ret12(D::*)(gd::string))(&D::addObjectFromString)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfNonVirtual((ret12(D::*)(gd::string))(&D::addObjectFromString)));
        }

        if constexpr((ret13(*)(LevelEditorLayer*, GameObject*))(&$LevelEditorLayer::addSpecial) != (ret13(D::*)(GameObject*))(&D::addSpecial)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfNonVirtual((ret13(D::*)(GameObject*))(&D::addSpecial)));
        }

        if constexpr((ret14(*)(LevelEditorLayer*, UndoObject*))(&$LevelEditorLayer::addToRedoList) != (ret14(D::*)(UndoObject*))(&D::addToRedoList)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfNonVirtual((ret14(D::*)(UndoObject*))(&D::addToRedoList)));
        }

        if constexpr((ret15(*)(LevelEditorLayer*, UndoObject*, bool))(&$LevelEditorLayer::addToUndoList) != (ret15(D::*)(UndoObject*, bool))(&D::addToUndoList)) {
            modContainer.registerHookEnable(address15, FunctionScrapper::addressOfNonVirtual((ret15(D::*)(UndoObject*, bool))(&D::addToUndoList)));
        }

        if constexpr((ret16(*)(LevelEditorLayer*, GameObject*, float, bool))(&$LevelEditorLayer::animateInDualGround) != (ret16(D::*)(GameObject*, float, bool))(&D::animateInDualGround)) {
            modContainer.registerHookEnable(address16, FunctionScrapper::addressOfNonVirtual((ret16(D::*)(GameObject*, float, bool))(&D::animateInDualGround)));
        }

        if constexpr((ret17(*)(LevelEditorLayer*, PlayerObject*, float))(&$LevelEditorLayer::checkCollisions) != (ret17(D::*)(PlayerObject*, float))(&D::checkCollisions)) {
            modContainer.registerHookEnable(address17, FunctionScrapper::addressOfNonVirtual((ret17(D::*)(PlayerObject*, float))(&D::checkCollisions)));
        }

        if constexpr((ret18(*)(LevelEditorLayer*, GJGameLevel*))(&$LevelEditorLayer::create) != (ret18(D::*)(GJGameLevel*))(&D::create)) {
            modContainer.registerHookEnable(address18, FunctionScrapper::addressOfNonVirtual((ret18(D::*)(GJGameLevel*))(&D::create)));
        }

        if constexpr((ret19(*)(LevelEditorLayer*))(&$LevelEditorLayer::createBackground) != (ret19(D::*)())(&D::createBackground)) {
            modContainer.registerHookEnable(address19, FunctionScrapper::addressOfNonVirtual((ret19(D::*)())(&D::createBackground)));
        }

        if constexpr((ret20(*)(LevelEditorLayer*))(&$LevelEditorLayer::createGroundLayer) != (ret20(D::*)())(&D::createGroundLayer)) {
            modContainer.registerHookEnable(address20, FunctionScrapper::addressOfNonVirtual((ret20(D::*)())(&D::createGroundLayer)));
        }

        if constexpr((ret21(*)(LevelEditorLayer*, int, cocos2d::CCPoint, bool))(&$LevelEditorLayer::createObject) != (ret21(D::*)(int, cocos2d::CCPoint, bool))(&D::createObject)) {
            modContainer.registerHookEnable(address21, FunctionScrapper::addressOfNonVirtual((ret21(D::*)(int, cocos2d::CCPoint, bool))(&D::createObject)));
        }

        if constexpr((ret22(*)(LevelEditorLayer*, gd::string))(&$LevelEditorLayer::createObjectsFromSetup) != (ret22(D::*)(gd::string))(&D::createObjectsFromSetup)) {
            modContainer.registerHookEnable(address22, FunctionScrapper::addressOfNonVirtual((ret22(D::*)(gd::string))(&D::createObjectsFromSetup)));
        }

        if constexpr((ret23(*)(LevelEditorLayer*, gd::string, bool))(&$LevelEditorLayer::createObjectsFromString) != (ret23(D::*)(gd::string, bool))(&D::createObjectsFromString)) {
            modContainer.registerHookEnable(address23, FunctionScrapper::addressOfNonVirtual((ret23(D::*)(gd::string, bool))(&D::createObjectsFromString)));
        }

        if constexpr((ret24(*)(LevelEditorLayer*))(&$LevelEditorLayer::getLastObjectX) != (ret24(D::*)())(&D::getLastObjectX)) {
            modContainer.registerHookEnable(address24, FunctionScrapper::addressOfNonVirtual((ret24(D::*)())(&D::getLastObjectX)));
        }

        if constexpr((ret25(*)(LevelEditorLayer*))(&$LevelEditorLayer::getLevelString) != (ret25(D::*)())(&D::getLevelString)) {
            modContainer.registerHookEnable(address25, FunctionScrapper::addressOfNonVirtual((ret25(D::*)())(&D::getLevelString)));
        }

        if constexpr((ret26(*)(LevelEditorLayer*))(&$LevelEditorLayer::getNextColorChannel) != (ret26(D::*)())(&D::getNextColorChannel)) {
            modContainer.registerHookEnable(address26, FunctionScrapper::addressOfNonVirtual((ret26(D::*)())(&D::getNextColorChannel)));
        }

        if constexpr((ret27(*)(LevelEditorLayer*, cocos2d::CCArray*))(&$LevelEditorLayer::getNextFreeBlockID) != (ret27(D::*)(cocos2d::CCArray*))(&D::getNextFreeBlockID)) {
            modContainer.registerHookEnable(address27, FunctionScrapper::addressOfNonVirtual((ret27(D::*)(cocos2d::CCArray*))(&D::getNextFreeBlockID)));
        }

        if constexpr((ret28(*)(LevelEditorLayer*, cocos2d::CCArray*))(&$LevelEditorLayer::getNextFreeGroupID) != (ret28(D::*)(cocos2d::CCArray*))(&D::getNextFreeGroupID)) {
            modContainer.registerHookEnable(address28, FunctionScrapper::addressOfNonVirtual((ret28(D::*)(cocos2d::CCArray*))(&D::getNextFreeGroupID)));
        }

        if constexpr((ret29(*)(LevelEditorLayer*, cocos2d::CCArray*))(&$LevelEditorLayer::getNextFreeItemID) != (ret29(D::*)(cocos2d::CCArray*))(&D::getNextFreeItemID)) {
            modContainer.registerHookEnable(address29, FunctionScrapper::addressOfNonVirtual((ret29(D::*)(cocos2d::CCArray*))(&D::getNextFreeItemID)));
        }

        if constexpr((ret30(*)(LevelEditorLayer*, GameObject*, bool))(&$LevelEditorLayer::getObjectRect) != (ret30(D::*)(GameObject*, bool))(&D::getObjectRect)) {
            modContainer.registerHookEnable(address30, FunctionScrapper::addressOfNonVirtual((ret30(D::*)(GameObject*, bool))(&D::getObjectRect)));
        }

        if constexpr((ret31(*)(LevelEditorLayer*, GameObject*))(&$LevelEditorLayer::getRelativeOffset) != (ret31(D::*)(GameObject*))(&D::getRelativeOffset)) {
            modContainer.registerHookEnable(address31, FunctionScrapper::addressOfNonVirtual((ret31(D::*)(GameObject*))(&D::getRelativeOffset)));
        }

        if constexpr((ret32(*)(LevelEditorLayer*, bool, cocos2d::CCArray*))(&$LevelEditorLayer::handleAction) != (ret32(D::*)(bool, cocos2d::CCArray*))(&D::handleAction)) {
            modContainer.registerHookEnable(address32, FunctionScrapper::addressOfNonVirtual((ret32(D::*)(bool, cocos2d::CCArray*))(&D::handleAction)));
        }

        if constexpr((ret33(*)(LevelEditorLayer*, GJGameLevel*))(&$LevelEditorLayer::init) != (ret33(D::*)(GJGameLevel*))(&D::init)) {
            modContainer.registerHookEnable(address33, FunctionScrapper::addressOfNonVirtual((ret33(D::*)(GJGameLevel*))(&D::init)));
        }

        if constexpr((ret34(*)(LevelEditorLayer*, cocos2d::CCPoint))(&$LevelEditorLayer::objectAtPosition) != (ret34(D::*)(cocos2d::CCPoint))(&D::objectAtPosition)) {
            modContainer.registerHookEnable(address34, FunctionScrapper::addressOfNonVirtual((ret34(D::*)(cocos2d::CCPoint))(&D::objectAtPosition)));
        }

        if constexpr((ret35(*)(LevelEditorLayer*, GameObject*))(&$LevelEditorLayer::objectMoved) != (ret35(D::*)(GameObject*))(&D::objectMoved)) {
            modContainer.registerHookEnable(address35, FunctionScrapper::addressOfNonVirtual((ret35(D::*)(GameObject*))(&D::objectMoved)));
        }

        if constexpr((ret36(*)(LevelEditorLayer*, cocos2d::CCRect, bool))(&$LevelEditorLayer::objectsInRect) != (ret36(D::*)(cocos2d::CCRect, bool))(&D::objectsInRect)) {
            modContainer.registerHookEnable(address36, FunctionScrapper::addressOfNonVirtual((ret36(D::*)(cocos2d::CCRect, bool))(&D::objectsInRect)));
        }

        if constexpr((ret37(*)(LevelEditorLayer*))(&$LevelEditorLayer::onPlaytest) != (ret37(D::*)())(&D::onPlaytest)) {
            modContainer.registerHookEnable(address37, FunctionScrapper::addressOfNonVirtual((ret37(D::*)())(&D::onPlaytest)));
        }

        if constexpr((ret38(*)(LevelEditorLayer*))(&$LevelEditorLayer::onStopPlaytest) != (ret38(D::*)())(&D::onStopPlaytest)) {
            modContainer.registerHookEnable(address38, FunctionScrapper::addressOfNonVirtual((ret38(D::*)())(&D::onStopPlaytest)));
        }

        if constexpr((ret39(*)(LevelEditorLayer*))(&$LevelEditorLayer::playMusic) != (ret39(D::*)())(&D::playMusic)) {
            modContainer.registerHookEnable(address39, FunctionScrapper::addressOfNonVirtual((ret39(D::*)())(&D::playMusic)));
        }

        if constexpr((ret40(*)(LevelEditorLayer*))(&$LevelEditorLayer::recreateGroups) != (ret40(D::*)())(&D::recreateGroups)) {
            modContainer.registerHookEnable(address40, FunctionScrapper::addressOfNonVirtual((ret40(D::*)())(&D::recreateGroups)));
        }

        if constexpr((ret41(*)(LevelEditorLayer*))(&$LevelEditorLayer::redoLastAction) != (ret41(D::*)())(&D::redoLastAction)) {
            modContainer.registerHookEnable(address41, FunctionScrapper::addressOfNonVirtual((ret41(D::*)())(&D::redoLastAction)));
        }

        if constexpr((ret42(*)(LevelEditorLayer*))(&$LevelEditorLayer::removeAllObjects) != (ret42(D::*)())(&D::removeAllObjects)) {
            modContainer.registerHookEnable(address42, FunctionScrapper::addressOfNonVirtual((ret42(D::*)())(&D::removeAllObjects)));
        }

        if constexpr((ret43(*)(LevelEditorLayer*, int))(&$LevelEditorLayer::removeAllObjectsOfType) != (ret43(D::*)(int))(&D::removeAllObjectsOfType)) {
            modContainer.registerHookEnable(address43, FunctionScrapper::addressOfNonVirtual((ret43(D::*)(int))(&D::removeAllObjectsOfType)));
        }

        if constexpr((ret44(*)(LevelEditorLayer*, GameObject*, bool))(&$LevelEditorLayer::removeObject) != (ret44(D::*)(GameObject*, bool))(&D::removeObject)) {
            modContainer.registerHookEnable(address44, FunctionScrapper::addressOfNonVirtual((ret44(D::*)(GameObject*, bool))(&D::removeObject)));
        }

        if constexpr((ret45(*)(LevelEditorLayer*, GameObject*))(&$LevelEditorLayer::removeSpecial) != (ret45(D::*)(GameObject*))(&D::removeSpecial)) {
            modContainer.registerHookEnable(address45, FunctionScrapper::addressOfNonVirtual((ret45(D::*)(GameObject*))(&D::removeSpecial)));
        }

        if constexpr((ret46(*)(LevelEditorLayer*))(&$LevelEditorLayer::resetMovingObjects) != (ret46(D::*)())(&D::resetMovingObjects)) {
            modContainer.registerHookEnable(address46, FunctionScrapper::addressOfNonVirtual((ret46(D::*)())(&D::resetMovingObjects)));
        }

        if constexpr((ret47(*)(LevelEditorLayer*))(&$LevelEditorLayer::resetObjectVector) != (ret47(D::*)())(&D::resetObjectVector)) {
            modContainer.registerHookEnable(address47, FunctionScrapper::addressOfNonVirtual((ret47(D::*)())(&D::resetObjectVector)));
        }

        if constexpr((ret48(*)(LevelEditorLayer*))(&$LevelEditorLayer::resetToggledGroups) != (ret48(D::*)())(&D::resetToggledGroups)) {
            modContainer.registerHookEnable(address48, FunctionScrapper::addressOfNonVirtual((ret48(D::*)())(&D::resetToggledGroups)));
        }

        if constexpr((ret49(*)(LevelEditorLayer*))(&$LevelEditorLayer::resetToggledGroupsAndObjects) != (ret49(D::*)())(&D::resetToggledGroupsAndObjects)) {
            modContainer.registerHookEnable(address49, FunctionScrapper::addressOfNonVirtual((ret49(D::*)())(&D::resetToggledGroupsAndObjects)));
        }

        if constexpr((ret50(*)(LevelEditorLayer*))(&$LevelEditorLayer::resetUnusedColorChannels) != (ret50(D::*)())(&D::resetUnusedColorChannels)) {
            modContainer.registerHookEnable(address50, FunctionScrapper::addressOfNonVirtual((ret50(D::*)())(&D::resetUnusedColorChannels)));
        }

        if constexpr((ret51(*)(LevelEditorLayer*, GameObject*))(&$LevelEditorLayer::rotationForSlopeNearObject) != (ret51(D::*)(GameObject*))(&D::rotationForSlopeNearObject)) {
            modContainer.registerHookEnable(address51, FunctionScrapper::addressOfNonVirtual((ret51(D::*)(GameObject*))(&D::rotationForSlopeNearObject)));
        }

        if constexpr((ret52(*)(LevelEditorLayer*, EffectGameObject*, int, float, float, bool))(&$LevelEditorLayer::runColorEffect) != (ret52(D::*)(EffectGameObject*, int, float, float, bool))(&D::runColorEffect)) {
            modContainer.registerHookEnable(address52, FunctionScrapper::addressOfNonVirtual((ret52(D::*)(EffectGameObject*, int, float, float, bool))(&D::runColorEffect)));
        }

        if constexpr((ret53(*)(LevelEditorLayer*, GJGameLevel*))(&$LevelEditorLayer::scene) != (ret53(D::*)(GJGameLevel*))(&D::scene)) {
            modContainer.registerHookEnable(address53, FunctionScrapper::addressOfNonVirtual((ret53(D::*)(GJGameLevel*))(&D::scene)));
        }

        if constexpr((ret54(*)(LevelEditorLayer*, LevelSettingsObject*))(&$LevelEditorLayer::setupLevelStart) != (ret54(D::*)(LevelSettingsObject*))(&D::setupLevelStart)) {
            modContainer.registerHookEnable(address54, FunctionScrapper::addressOfNonVirtual((ret54(D::*)(LevelSettingsObject*))(&D::setupLevelStart)));
        }

        if constexpr((ret55(*)(LevelEditorLayer*))(&$LevelEditorLayer::sortStickyGroups) != (ret55(D::*)())(&D::sortStickyGroups)) {
            modContainer.registerHookEnable(address55, FunctionScrapper::addressOfNonVirtual((ret55(D::*)())(&D::sortStickyGroups)));
        }

        if constexpr((ret56(*)(LevelEditorLayer*, int, float))(&$LevelEditorLayer::stopTriggersInGroup) != (ret56(D::*)(int, float))(&D::stopTriggersInGroup)) {
            modContainer.registerHookEnable(address56, FunctionScrapper::addressOfNonVirtual((ret56(D::*)(int, float))(&D::stopTriggersInGroup)));
        }

        if constexpr((ret57(*)(LevelEditorLayer*, GameObject*, bool, PlayerObject*, bool))(&$LevelEditorLayer::toggleDualMode) != (ret57(D::*)(GameObject*, bool, PlayerObject*, bool))(&D::toggleDualMode)) {
            modContainer.registerHookEnable(address57, FunctionScrapper::addressOfNonVirtual((ret57(D::*)(GameObject*, bool, PlayerObject*, bool))(&D::toggleDualMode)));
        }

        if constexpr((ret58(*)(LevelEditorLayer*, int, bool))(&$LevelEditorLayer::toggleGroupPreview) != (ret58(D::*)(int, bool))(&D::toggleGroupPreview)) {
            modContainer.registerHookEnable(address58, FunctionScrapper::addressOfNonVirtual((ret58(D::*)(int, bool))(&D::toggleGroupPreview)));
        }

        if constexpr((ret59(*)(LevelEditorLayer*, GJEffectManager*, GJEffectManager*))(&$LevelEditorLayer::transferDefaultColors) != (ret59(D::*)(GJEffectManager*, GJEffectManager*))(&D::transferDefaultColors)) {
            modContainer.registerHookEnable(address59, FunctionScrapper::addressOfNonVirtual((ret59(D::*)(GJEffectManager*, GJEffectManager*))(&D::transferDefaultColors)));
        }

        if constexpr((ret60(*)(LevelEditorLayer*))(&$LevelEditorLayer::undoLastAction) != (ret60(D::*)())(&D::undoLastAction)) {
            modContainer.registerHookEnable(address60, FunctionScrapper::addressOfNonVirtual((ret60(D::*)())(&D::undoLastAction)));
        }

        if constexpr((ret61(*)(LevelEditorLayer*))(&$LevelEditorLayer::updateBGAndGColors) != (ret61(D::*)())(&D::updateBGAndGColors)) {
            modContainer.registerHookEnable(address61, FunctionScrapper::addressOfNonVirtual((ret61(D::*)())(&D::updateBGAndGColors)));
        }

        if constexpr((ret62(*)(LevelEditorLayer*))(&$LevelEditorLayer::updateBlendValues) != (ret62(D::*)())(&D::updateBlendValues)) {
            modContainer.registerHookEnable(address62, FunctionScrapper::addressOfNonVirtual((ret62(D::*)())(&D::updateBlendValues)));
        }

        if constexpr((ret63(*)(LevelEditorLayer*, PlayerObject*, int, bool))(&$LevelEditorLayer::updateDualGround) != (ret63(D::*)(PlayerObject*, int, bool))(&D::updateDualGround)) {
            modContainer.registerHookEnable(address63, FunctionScrapper::addressOfNonVirtual((ret63(D::*)(PlayerObject*, int, bool))(&D::updateDualGround)));
        }

        if constexpr((ret64(*)(LevelEditorLayer*))(&$LevelEditorLayer::updateEditorMode) != (ret64(D::*)())(&D::updateEditorMode)) {
            modContainer.registerHookEnable(address64, FunctionScrapper::addressOfNonVirtual((ret64(D::*)())(&D::updateEditorMode)));
        }

        if constexpr((ret65(*)(LevelEditorLayer*))(&$LevelEditorLayer::updateGameObjectsNew) != (ret65(D::*)())(&D::updateGameObjectsNew)) {
            modContainer.registerHookEnable(address65, FunctionScrapper::addressOfNonVirtual((ret65(D::*)())(&D::updateGameObjectsNew)));
        }

        if constexpr((ret66(*)(LevelEditorLayer*, float))(&$LevelEditorLayer::updateGround) != (ret66(D::*)(float))(&D::updateGround)) {
            modContainer.registerHookEnable(address66, FunctionScrapper::addressOfNonVirtual((ret66(D::*)(float))(&D::updateGround)));
        }

        if constexpr((ret67(*)(LevelEditorLayer*))(&$LevelEditorLayer::updateGroundWidth) != (ret67(D::*)())(&D::updateGroundWidth)) {
            modContainer.registerHookEnable(address67, FunctionScrapper::addressOfNonVirtual((ret67(D::*)())(&D::updateGroundWidth)));
        }

        if constexpr((ret68(*)(LevelEditorLayer*))(&$LevelEditorLayer::updateOptions) != (ret68(D::*)())(&D::updateOptions)) {
            modContainer.registerHookEnable(address68, FunctionScrapper::addressOfNonVirtual((ret68(D::*)())(&D::updateOptions)));
        }

        if constexpr((ret69(*)(LevelEditorLayer*))(&$LevelEditorLayer::updateToggledGroups) != (ret69(D::*)())(&D::updateToggledGroups)) {
            modContainer.registerHookEnable(address69, FunctionScrapper::addressOfNonVirtual((ret69(D::*)())(&D::updateToggledGroups)));
        }

        if constexpr((ret70(*)(LevelEditorLayer*, float))(&$LevelEditorLayer::updateVisibility) != (ret70(D::*)(float))(&D::updateVisibility)) {
            modContainer.registerHookEnable(address70, FunctionScrapper::addressOfNonVirtual((ret70(D::*)(float))(&D::updateVisibility)));
        }

        return true;
    }
};

template<class D>
struct $AnimatedGameObject : AnimatedGameObject, InterfaceBase {
    $AnimatedGameObject(const $AnimatedGameObject& c) : AnimatedGameObject(c) {}
    $AnimatedGameObject() = delete;

    using ret0 = void;
    static inline auto address0 = base+0xc93d0;

    dupable ret0 playAnimation(int p0) {
        return reinterpret_cast<ret0(*)(AnimatedGameObject*, int)>(address0)(this, p0);
    }

    using ret1 = void;
    static inline auto address1 = base+0xc8450;

    dupable ret1 updateChildSpriteColor(cocos2d::_ccColor3B p0) {
        return reinterpret_cast<ret1(*)(AnimatedGameObject*, cocos2d::_ccColor3B)>(address1)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(AnimatedGameObject*, int))(&$AnimatedGameObject::playAnimation) != (ret0(D::*)(int))(&D::playAnimation)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(int))(&D::playAnimation)));
        }

        if constexpr((ret1(*)(AnimatedGameObject*, cocos2d::_ccColor3B))(&$AnimatedGameObject::updateChildSpriteColor) != (ret1(D::*)(cocos2d::_ccColor3B))(&D::updateChildSpriteColor)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::_ccColor3B))(&D::updateChildSpriteColor)));
        }

        return true;
    }
};

template<class D>
struct $GameToolbox : GameToolbox, InterfaceBase {
    $GameToolbox(const $GameToolbox& c) : GameToolbox(c) {}
    $GameToolbox() = delete;

    using ret0 = CCMenuItemToggler;
    static inline auto address0 = base+0x0;

    dupable static ret0 createToggleButton(gd::string p0,cocos2d::SEL_MenuHandler p1,bool p2,cocos2d::CCMenu* p3,cocos2d::CCPoint p4,cocos2d::CCNode* p5,cocos2d::CCNode* p6,cocos2d::CCArray* p7) {
        return reinterpret_cast<ret0(*)(GameToolbox*, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCArray*)>(address0)(p0, p1, p2, p3, p4, p5, p6, p7);
    }

    using ret1 = CCMenuItemToggler;
    static inline auto address1 = base+0x0;

    dupable static ret1 createToggleButton(gd::string p0,cocos2d::SEL_MenuHandler p1,bool p2,cocos2d::CCMenu* p3,cocos2d::CCPoint p4,cocos2d::CCNode* p5,cocos2d::CCNode* p6,float p7,float p8,float p9,cocos2d::CCPoint p10,char const* p11,bool p12,int p13,cocos2d::CCArray* p14) {
        return reinterpret_cast<ret1(*)(GameToolbox*, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*)>(address1)(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
    }
    static bool _apply() {

        if constexpr((ret0(*)(GameToolbox*, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCArray*))(&$GameToolbox::createToggleButton) != (ret0(D::*)(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCArray*))(&D::createToggleButton)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCArray*))(&D::createToggleButton)));
        }

        if constexpr((ret1(*)(GameToolbox*, gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*))(&$GameToolbox::createToggleButton) != (ret1(D::*)(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*))(&D::createToggleButton)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(gd::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*))(&D::createToggleButton)));
        }

        return true;
    }
};

template<class D>
struct $AchievementsLayer : AchievementsLayer, InterfaceBase {
    $AchievementsLayer(const $AchievementsLayer& c) : AchievementsLayer(c) {}
    $AchievementsLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x1bdea0;

    dupable ret0 customSetup() {
        return reinterpret_cast<ret0(*)(AchievementsLayer*)>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x1be190;

    dupable ret1 loadPage(int p0) {
        return reinterpret_cast<ret1(*)(AchievementsLayer*, int)>(address1)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(AchievementsLayer*))(&$AchievementsLayer::customSetup) != (ret0(D::*)())(&D::customSetup)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::customSetup)));
        }

        if constexpr((ret1(*)(AchievementsLayer*, int))(&$AchievementsLayer::loadPage) != (ret1(D::*)(int))(&D::loadPage)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(int))(&D::loadPage)));
        }

        return true;
    }
};

template<class D>
struct $SpawnTriggerAction : SpawnTriggerAction, InterfaceBase {
    $SpawnTriggerAction(const $SpawnTriggerAction& c) : SpawnTriggerAction(c) {}
    $SpawnTriggerAction() = delete;

    using ret0 = SpawnTriggerAction*;
    static inline auto address0 = base+0x17bf50;

    dupable static ret0 createFromString(gd::string p0) {
        return reinterpret_cast<ret0(*)(SpawnTriggerAction*, gd::string)>(address0)(p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SpawnTriggerAction*, gd::string))(&$SpawnTriggerAction::createFromString) != (ret0(D::*)(gd::string))(&D::createFromString)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(gd::string))(&D::createFromString)));
        }

        return true;
    }
};

template<class D>
struct $AchievementNotifier : AchievementNotifier, InterfaceBase {
    $AchievementNotifier(const $AchievementNotifier& c) : AchievementNotifier(c) {}
    $AchievementNotifier() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x464e00;

    dupable ret0 sharedState() {
        return reinterpret_cast<ret0(*)(AchievementNotifier*)>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x4650b0;

    dupable ret1 willSwitchToScene(cocos2d::CCScene* p0) {
        return reinterpret_cast<ret1(*)(AchievementNotifier*, cocos2d::CCScene*)>(address1)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(AchievementNotifier*))(&$AchievementNotifier::sharedState) != (ret0(D::*)())(&D::sharedState)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::sharedState)));
        }

        if constexpr((ret1(*)(AchievementNotifier*, cocos2d::CCScene*))(&$AchievementNotifier::willSwitchToScene) != (ret1(D::*)(cocos2d::CCScene*))(&D::willSwitchToScene)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCScene*))(&D::willSwitchToScene)));
        }

        return true;
    }
};

template<class D>
struct $SetupTouchTogglePopup : SetupTouchTogglePopup, InterfaceBase {
    $SetupTouchTogglePopup(const $SetupTouchTogglePopup& c) : SetupTouchTogglePopup(c) {}
    $SetupTouchTogglePopup() = delete;

    using ret0 = SetupTouchTogglePopup*;
    static inline auto address0 = base+0x1576a0;

    dupable static ret0 create(EffectGameObject* p0,cocos2d::CCArray* p1) {
        return reinterpret_cast<ret0(*)(SetupTouchTogglePopup*, EffectGameObject*, cocos2d::CCArray*)>(address0)(p0, p1);
    }

    using ret1 = void;
    static inline auto address1 = base+0x158b60;

    dupable ret1 onTargetIDArrow(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret1(*)(SetupTouchTogglePopup*, cocos2d::CCObject*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x1596a0;

    dupable ret2 textChanged(CCTextInputNode* p0) {
        return reinterpret_cast<ret2(*)(SetupTouchTogglePopup*, CCTextInputNode*)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x159480;

    dupable ret3 updateTargetID() {
        return reinterpret_cast<ret3(*)(SetupTouchTogglePopup*)>(address3)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SetupTouchTogglePopup*, EffectGameObject*, cocos2d::CCArray*))(&$SetupTouchTogglePopup::create) != (ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)));
        }

        if constexpr((ret1(*)(SetupTouchTogglePopup*, cocos2d::CCObject*))(&$SetupTouchTogglePopup::onTargetIDArrow) != (ret1(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)));
        }

        if constexpr((ret2(*)(SetupTouchTogglePopup*, CCTextInputNode*))(&$SetupTouchTogglePopup::textChanged) != (ret2(D::*)(CCTextInputNode*))(&D::textChanged)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(CCTextInputNode*))(&D::textChanged)));
        }

        if constexpr((ret3(*)(SetupTouchTogglePopup*))(&$SetupTouchTogglePopup::updateTargetID) != (ret3(D::*)())(&D::updateTargetID)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::updateTargetID)));
        }

        return true;
    }
};

template<class D>
struct $InheritanceNode : InheritanceNode, InterfaceBase {
    $InheritanceNode(const $InheritanceNode& c) : InheritanceNode(c) {}
    $InheritanceNode() = delete;
    static bool _apply() {

        return true;
    }
};

template<class D>
struct $AchievementCell : AchievementCell, InterfaceBase {
    $AchievementCell(const $AchievementCell& c) : AchievementCell(c) {}
    $AchievementCell() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x10eaa0;

    dupable ret0 loadFromDict(cocos2d::CCDictionary* p0) {
        return reinterpret_cast<ret0(*)(AchievementCell*, cocos2d::CCDictionary*)>(address0)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(AchievementCell*, cocos2d::CCDictionary*))(&$AchievementCell::loadFromDict) != (ret0(D::*)(cocos2d::CCDictionary*))(&D::loadFromDict)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCDictionary*))(&D::loadFromDict)));
        }

        return true;
    }
};

template<class D>
struct $CCActionTween : CCActionTween, InterfaceBase {
    $CCActionTween(const $CCActionTween& c) : CCActionTween(c) {}
    $CCActionTween() = delete;

    using ret0 = cocos2d::CCActionTween*;
    static inline auto address0 = base+0x447590;

    dupable static ret0 create(float p0,char const* p1,float p2,float p3) {
        return reinterpret_cast<ret0(*)(CCActionTween*, float, char const*, float, float)>(address0)(p0, p1, p2, p3);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCActionTween*, float, char const*, float, float))(&$CCActionTween::create) != (ret0(D::*)(float, char const*, float, float))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(float, char const*, float, float))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCScrollView : CCScrollView, InterfaceBase {
    $CCScrollView(const $CCScrollView& c) : CCScrollView(c) {}
    $CCScrollView() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x214800;

    dupable void constructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x214c30;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address1)(this);
    }

    using ret2 = decltype(declval<cocos2d::extension::CCScrollView>().init());
    static inline auto address2 = base+0x214fb0;

    dupable ret2 init() {
        return reinterpret_cast<ret2(*)(CCScrollView*)>(address2)(this);
    }

    using ret3 = decltype(declval<cocos2d::extension::CCScrollView>().setContentSize(declval<cocos2d::CCSize const&>()));
    static inline auto address3 = base+0x215eb0;

    dupable ret3 setContentSize(cocos2d::CCSize const& p0) {
        return reinterpret_cast<ret3(*)(CCScrollView*, cocos2d::CCSize const&)>(address3)(this, p0);
    }

    using ret4 = decltype(declval<cocos2d::extension::CCScrollView>().getContentSize());
    static inline auto address4 = base+0x215e90;

    dupable ret4 getContentSize() const {
        return reinterpret_cast<ret4(*)(CCScrollView*)>(address4)(this);
    }

    using ret5 = decltype(declval<cocos2d::extension::CCScrollView>().addChild(declval<cocos2d::CCNode*>()));
    static inline auto address5 = base+0x216160;

    dupable ret5 addChild(cocos2d::CCNode* p0) {
        return reinterpret_cast<ret5(*)(CCScrollView*, cocos2d::CCNode*)>(address5)(this, p0);
    }

    using ret6 = decltype(declval<cocos2d::extension::CCScrollView>().addChild(declval<cocos2d::CCNode*>(), declval<int>()));
    static inline auto address6 = base+0x216120;

    dupable ret6 addChild(cocos2d::CCNode* p0,int p1) {
        return reinterpret_cast<ret6(*)(CCScrollView*, cocos2d::CCNode*, int)>(address6)(this, p0, p1);
    }

    using ret7 = decltype(declval<cocos2d::extension::CCScrollView>().addChild(declval<cocos2d::CCNode*>(), declval<int>(), declval<int>()));
    static inline auto address7 = base+0x216080;

    dupable ret7 addChild(cocos2d::CCNode* p0,int p1,int p2) {
        return reinterpret_cast<ret7(*)(CCScrollView*, cocos2d::CCNode*, int, int)>(address7)(this, p0, p1, p2);
    }

    using ret8 = decltype(declval<cocos2d::extension::CCScrollView>().visit());
    static inline auto address8 = base+0x2164a0;

    dupable ret8 visit() {
        return reinterpret_cast<ret8(*)(CCScrollView*)>(address8)(this);
    }

    using ret9 = decltype(declval<cocos2d::extension::CCScrollView>().ccTouchBegan(declval<cocos2d::CCTouch*>(), declval<cocos2d::CCEvent*>()));
    static inline auto address9 = base+0x216620;

    dupable ret9 ccTouchBegan(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret9(*)(CCScrollView*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address9)(this, p0, p1);
    }

    using ret10 = decltype(declval<cocos2d::extension::CCScrollView>().ccTouchMoved(declval<cocos2d::CCTouch*>(), declval<cocos2d::CCEvent*>()));
    static inline auto address10 = base+0x216890;

    dupable ret10 ccTouchMoved(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret10(*)(CCScrollView*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address10)(this, p0, p1);
    }

    using ret11 = decltype(declval<cocos2d::extension::CCScrollView>().ccTouchEnded(declval<cocos2d::CCTouch*>(), declval<cocos2d::CCEvent*>()));
    static inline auto address11 = base+0x216c70;

    dupable ret11 ccTouchEnded(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret11(*)(CCScrollView*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address11)(this, p0, p1);
    }

    using ret12 = decltype(declval<cocos2d::extension::CCScrollView>().ccTouchCancelled(declval<cocos2d::CCTouch*>(), declval<cocos2d::CCEvent*>()));
    static inline auto address12 = base+0x216d30;

    dupable ret12 ccTouchCancelled(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret12(*)(CCScrollView*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address12)(this, p0, p1);
    }

    using ret13 = decltype(declval<cocos2d::extension::CCScrollView>().registerWithTouchDispatcher());
    static inline auto address13 = base+0x214ff0;

    dupable ret13 registerWithTouchDispatcher() {
        return reinterpret_cast<ret13(*)(CCScrollView*)>(address13)(this);
    }

    using ret14 = decltype(declval<cocos2d::extension::CCScrollView>().setTouchEnabled(declval<bool>()));
    static inline auto address14 = base+0x215250;

    dupable ret14 setTouchEnabled(bool p0) {
        return reinterpret_cast<ret14(*)(CCScrollView*, bool)>(address14)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCScrollView*))(&$CCScrollView::constructor) != (ret0(D::*)())(&D::constructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::constructor)));
        }

        if constexpr((ret1(*)(CCScrollView*))(&$CCScrollView::destructor) != (ret1(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::destructor)));
        }

        if constexpr((ret2(*)(CCScrollView*))(&$CCScrollView::init) != (ret2(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)())(&D::init)));
        }

        if constexpr((ret3(*)(CCScrollView*, cocos2d::CCSize const&))(&$CCScrollView::setContentSize) != (ret3(D::*)(cocos2d::CCSize const&))(&D::setContentSize)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)(cocos2d::CCSize const&))(&D::setContentSize)));
        }

        if constexpr((ret4(*)(CCScrollView*))(&$CCScrollView::getContentSize) != (ret4(D::*)())(&D::getContentSize)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)())(&D::getContentSize)));
        }

        if constexpr((ret5(*)(CCScrollView*, cocos2d::CCNode*))(&$CCScrollView::addChild) != (ret5(D::*)(cocos2d::CCNode*))(&D::addChild)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)(cocos2d::CCNode*))(&D::addChild)));
        }

        if constexpr((ret6(*)(CCScrollView*, cocos2d::CCNode*, int))(&$CCScrollView::addChild) != (ret6(D::*)(cocos2d::CCNode*, int))(&D::addChild)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)(cocos2d::CCNode*, int))(&D::addChild)));
        }

        if constexpr((ret7(*)(CCScrollView*, cocos2d::CCNode*, int, int))(&$CCScrollView::addChild) != (ret7(D::*)(cocos2d::CCNode*, int, int))(&D::addChild)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)(cocos2d::CCNode*, int, int))(&D::addChild)));
        }

        if constexpr((ret8(*)(CCScrollView*))(&$CCScrollView::visit) != (ret8(D::*)())(&D::visit)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)())(&D::visit)));
        }

        if constexpr((ret9(*)(CCScrollView*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$CCScrollView::ccTouchBegan) != (ret9(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchBegan)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfVirtual((ret9(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchBegan)));
        }

        if constexpr((ret10(*)(CCScrollView*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$CCScrollView::ccTouchMoved) != (ret10(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchMoved)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfVirtual((ret10(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchMoved)));
        }

        if constexpr((ret11(*)(CCScrollView*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$CCScrollView::ccTouchEnded) != (ret11(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchEnded)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfVirtual((ret11(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchEnded)));
        }

        if constexpr((ret12(*)(CCScrollView*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$CCScrollView::ccTouchCancelled) != (ret12(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchCancelled)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfVirtual((ret12(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchCancelled)));
        }

        if constexpr((ret13(*)(CCScrollView*))(&$CCScrollView::registerWithTouchDispatcher) != (ret13(D::*)())(&D::registerWithTouchDispatcher)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfVirtual((ret13(D::*)())(&D::registerWithTouchDispatcher)));
        }

        if constexpr((ret14(*)(CCScrollView*, bool))(&$CCScrollView::setTouchEnabled) != (ret14(D::*)(bool))(&D::setTouchEnabled)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfVirtual((ret14(D::*)(bool))(&D::setTouchEnabled)));
        }

        return true;
    }
};

template<class D>
struct $CurrencyRewardLayer : CurrencyRewardLayer, InterfaceBase {
    $CurrencyRewardLayer(const $CurrencyRewardLayer& c) : CurrencyRewardLayer(c) {}
    $CurrencyRewardLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x447950;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x44a5c0;

    dupable ret1 update(float p0) {
        return reinterpret_cast<ret1(*)(CurrencyRewardLayer*, float)>(address1)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CurrencyRewardLayer*))(&$CurrencyRewardLayer::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(CurrencyRewardLayer*, float))(&$CurrencyRewardLayer::update) != (ret1(D::*)(float))(&D::update)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)(float))(&D::update)));
        }

        return true;
    }
};

template<class D>
struct $CCRenderTexture : CCRenderTexture, InterfaceBase {
    $CCRenderTexture(const $CCRenderTexture& c) : CCRenderTexture(c) {}
    $CCRenderTexture() = delete;

    using ret0 = decltype(declval<cocos2d::CCRenderTexture>().begin());
    static inline auto address0 = base+0x35ce10;

    dupable ret0 begin() {
        return reinterpret_cast<ret0(*)(CCRenderTexture*)>(address0)(this);
    }

    using ret1 = decltype(declval<cocos2d::CCRenderTexture>().end());
    static inline auto address1 = base+0x35d2c0;

    dupable ret1 end() {
        return reinterpret_cast<ret1(*)(CCRenderTexture*)>(address1)(this);
    }

    using ret2 = cocos2d::CCRenderTexture*;
    static inline auto address2 = base+0x35c720;

    dupable static ret2 create(int p0,int p1,cocos2d::CCTexture2DPixelFormat p2) {
        return reinterpret_cast<ret2(*)(CCRenderTexture*, int, int, cocos2d::CCTexture2DPixelFormat)>(address2)(p0, p1, p2);
    }

    using ret3 = decltype(declval<cocos2d::CCRenderTexture>().newCCImage(declval<bool>()));
    static inline auto address3 = base+0x35d7d0;

    dupable ret3 newCCImage(bool p0) {
        return reinterpret_cast<ret3(*)(CCRenderTexture*, bool)>(address3)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCRenderTexture*))(&$CCRenderTexture::begin) != (ret0(D::*)())(&D::begin)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::begin)));
        }

        if constexpr((ret1(*)(CCRenderTexture*))(&$CCRenderTexture::end) != (ret1(D::*)())(&D::end)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::end)));
        }

        if constexpr((ret2(*)(CCRenderTexture*, int, int, cocos2d::CCTexture2DPixelFormat))(&$CCRenderTexture::create) != (ret2(D::*)(int, int, cocos2d::CCTexture2DPixelFormat))(&D::create)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(int, int, cocos2d::CCTexture2DPixelFormat))(&D::create)));
        }

        if constexpr((ret3(*)(CCRenderTexture*, bool))(&$CCRenderTexture::newCCImage) != (ret3(D::*)(bool))(&D::newCCImage)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(bool))(&D::newCCImage)));
        }

        return true;
    }
};

template<class D>
struct $CCControlUtils : CCControlUtils, InterfaceBase {
    $CCControlUtils(const $CCControlUtils& c) : CCControlUtils(c) {}
    $CCControlUtils() = delete;

    using ret0 = cocos2d::extension::HSV;
    static inline auto address0 = base+0x1e6750;

    dupable static ret0 HSVfromRGB(cocos2d::extension::RGBA p0) {
        return reinterpret_cast<ret0(*)(CCControlUtils*, cocos2d::extension::RGBA)>(address0)(p0);
    }

    using ret1 = cocos2d::extension::RGBA;
    static inline auto address1 = base+0x1e6850;

    dupable static ret1 RGBfromHSV(cocos2d::extension::HSV p0) {
        return reinterpret_cast<ret1(*)(CCControlUtils*, cocos2d::extension::HSV)>(address1)(p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCControlUtils*, cocos2d::extension::RGBA))(&$CCControlUtils::HSVfromRGB) != (ret0(D::*)(cocos2d::extension::RGBA))(&D::HSVfromRGB)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::extension::RGBA))(&D::HSVfromRGB)));
        }

        if constexpr((ret1(*)(CCControlUtils*, cocos2d::extension::HSV))(&$CCControlUtils::RGBfromHSV) != (ret1(D::*)(cocos2d::extension::HSV))(&D::RGBfromHSV)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::extension::HSV))(&D::RGBfromHSV)));
        }

        return true;
    }
};

template<class D>
struct $CCTouchHandler : CCTouchHandler, InterfaceBase {
    $CCTouchHandler(const $CCTouchHandler& c) : CCTouchHandler(c) {}
    $CCTouchHandler() = delete;

    using ret0 = decltype(declval<cocos2d::CCTouchHandler>().initWithDelegate(declval<cocos2d::CCTouchDelegate*>(), declval<int>()));
    static inline auto address0 = base+0x247d10;

    dupable ret0 initWithDelegate(cocos2d::CCTouchDelegate* p0,int p1) {
        return reinterpret_cast<ret0(*)(CCTouchHandler*, cocos2d::CCTouchDelegate*, int)>(address0)(this, p0, p1);
    }

    using ret1 = void;
    static inline auto address1 = base+0x247de0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address1)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCTouchHandler*, cocos2d::CCTouchDelegate*, int))(&$CCTouchHandler::initWithDelegate) != (ret0(D::*)(cocos2d::CCTouchDelegate*, int))(&D::initWithDelegate)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfVirtual((ret0(D::*)(cocos2d::CCTouchDelegate*, int))(&D::initWithDelegate)));
        }

        if constexpr((ret1(*)(CCTouchHandler*))(&$CCTouchHandler::destructor) != (ret1(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::destructor)));
        }

        return true;
    }
};

template<class D>
struct $SetupInteractObjectPopup : SetupInteractObjectPopup, InterfaceBase {
    $SetupInteractObjectPopup(const $SetupInteractObjectPopup& c) : SetupInteractObjectPopup(c) {}
    $SetupInteractObjectPopup() = delete;

    using ret0 = SetupInteractObjectPopup*;
    static inline auto address0 = base+0x29a400;

    dupable static ret0 create(EffectGameObject* p0,cocos2d::CCArray* p1) {
        return reinterpret_cast<ret0(*)(SetupInteractObjectPopup*, EffectGameObject*, cocos2d::CCArray*)>(address0)(p0, p1);
    }

    using ret1 = void;
    static inline auto address1 = base+0x29bbc0;

    dupable ret1 onTargetIDArrow(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret1(*)(SetupInteractObjectPopup*, cocos2d::CCObject*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x29c2b0;

    dupable ret2 textChanged(CCTextInputNode* p0) {
        return reinterpret_cast<ret2(*)(SetupInteractObjectPopup*, CCTextInputNode*)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x29c120;

    dupable ret3 updateTargetID() {
        return reinterpret_cast<ret3(*)(SetupInteractObjectPopup*)>(address3)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SetupInteractObjectPopup*, EffectGameObject*, cocos2d::CCArray*))(&$SetupInteractObjectPopup::create) != (ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)));
        }

        if constexpr((ret1(*)(SetupInteractObjectPopup*, cocos2d::CCObject*))(&$SetupInteractObjectPopup::onTargetIDArrow) != (ret1(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)));
        }

        if constexpr((ret2(*)(SetupInteractObjectPopup*, CCTextInputNode*))(&$SetupInteractObjectPopup::textChanged) != (ret2(D::*)(CCTextInputNode*))(&D::textChanged)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(CCTextInputNode*))(&D::textChanged)));
        }

        if constexpr((ret3(*)(SetupInteractObjectPopup*))(&$SetupInteractObjectPopup::updateTargetID) != (ret3(D::*)())(&D::updateTargetID)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::updateTargetID)));
        }

        return true;
    }
};

template<class D>
struct $CreateMenuItem : CreateMenuItem, InterfaceBase {
    $CreateMenuItem(const $CreateMenuItem& c) : CreateMenuItem(c) {}
    $CreateMenuItem() = delete;

    using ret0 = CreateMenuItem*;
    static inline auto address0 = base+0x1c580;

    dupable static ret0 create(cocos2d::CCNode* p0,cocos2d::CCNode* p1,cocos2d::CCObject* p2,cocos2d::SEL_MenuHandler p3) {
        return reinterpret_cast<ret0(*)(CreateMenuItem*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)>(address0)(p0, p1, p2, p3);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CreateMenuItem*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler))(&$CreateMenuItem::create) != (ret0(D::*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCSpritePlus : CCSpritePlus, InterfaceBase {
    $CCSpritePlus(const $CCSpritePlus& c) : CCSpritePlus(c) {}
    $CCSpritePlus() = delete;

    using ret0 = bool;
    static inline auto address0 = base+0x248670;

    dupable ret0 initWithSpriteFrameName(char const* p0) {
        return reinterpret_cast<ret0(*)(CCSpritePlus*, char const*)>(address0)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCSpritePlus*, char const*))(&$CCSpritePlus::initWithSpriteFrameName) != (ret0(D::*)(char const*))(&D::initWithSpriteFrameName)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(char const*))(&D::initWithSpriteFrameName)));
        }

        return true;
    }
};

template<class D>
struct $CCSprite : CCSprite, InterfaceBase {
    $CCSprite(const $CCSprite& c) : CCSprite(c) {}
    $CCSprite() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x133430;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = decltype(declval<cocos2d::CCSprite>().init());
    static inline auto address1 = base+0x132ef0;

    dupable ret1 init() {
        return reinterpret_cast<ret1(*)(CCSprite*)>(address1)(this);
    }

    using ret2 = decltype(declval<cocos2d::CCSprite>().setVertexZ(declval<float>()));
    static inline auto address2 = base+0x134a80;

    dupable ret2 setVertexZ(float p0) {
        return reinterpret_cast<ret2(*)(CCSprite*, float)>(address2)(this, p0);
    }

    using ret3 = decltype(declval<cocos2d::CCSprite>().setScaleX(declval<float>()));
    static inline auto address3 = base+0x134900;

    dupable ret3 setScaleX(float p0) {
        return reinterpret_cast<ret3(*)(CCSprite*, float)>(address3)(this, p0);
    }

    using ret4 = decltype(declval<cocos2d::CCSprite>().setScaleY(declval<float>()));
    static inline auto address4 = base+0x134980;

    dupable ret4 setScaleY(float p0) {
        return reinterpret_cast<ret4(*)(CCSprite*, float)>(address4)(this, p0);
    }

    using ret5 = decltype(declval<cocos2d::CCSprite>().setScale(declval<float>()));
    static inline auto address5 = base+0x134a00;

    dupable ret5 setScale(float p0) {
        return reinterpret_cast<ret5(*)(CCSprite*, float)>(address5)(this, p0);
    }

    using ret6 = decltype(declval<cocos2d::CCSprite>().setPosition(declval<cocos2d::CCPoint const&>()));
    static inline auto address6 = base+0x134650;

    dupable ret6 setPosition(cocos2d::CCPoint const& p0) {
        return reinterpret_cast<ret6(*)(CCSprite*, cocos2d::CCPoint const&)>(address6)(this, p0);
    }

    using ret7 = decltype(declval<cocos2d::CCSprite>().setSkewX(declval<float>()));
    static inline auto address7 = base+0x134820;

    dupable ret7 setSkewX(float p0) {
        return reinterpret_cast<ret7(*)(CCSprite*, float)>(address7)(this, p0);
    }

    using ret8 = decltype(declval<cocos2d::CCSprite>().setSkewY(declval<float>()));
    static inline auto address8 = base+0x134890;

    dupable ret8 setSkewY(float p0) {
        return reinterpret_cast<ret8(*)(CCSprite*, float)>(address8)(this, p0);
    }

    using ret9 = decltype(declval<cocos2d::CCSprite>().setAnchorPoint(declval<cocos2d::CCPoint const&>()));
    static inline auto address9 = base+0x134af0;

    dupable ret9 setAnchorPoint(cocos2d::CCPoint const& p0) {
        return reinterpret_cast<ret9(*)(CCSprite*, cocos2d::CCPoint const&)>(address9)(this, p0);
    }

    using ret10 = decltype(declval<cocos2d::CCSprite>().setVisible(declval<bool>()));
    static inline auto address10 = base+0x134b70;

    dupable ret10 setVisible(bool p0) {
        return reinterpret_cast<ret10(*)(CCSprite*, bool)>(address10)(this, p0);
    }

    using ret11 = decltype(declval<cocos2d::CCSprite>().setRotation(declval<float>()));
    static inline auto address11 = base+0x1346d0;

    dupable ret11 setRotation(float p0) {
        return reinterpret_cast<ret11(*)(CCSprite*, float)>(address11)(this, p0);
    }

    using ret12 = decltype(declval<cocos2d::CCSprite>().setRotationX(declval<float>()));
    static inline auto address12 = base+0x134740;

    dupable ret12 setRotationX(float p0) {
        return reinterpret_cast<ret12(*)(CCSprite*, float)>(address12)(this, p0);
    }

    using ret13 = decltype(declval<cocos2d::CCSprite>().setRotationY(declval<float>()));
    static inline auto address13 = base+0x1347b0;

    dupable ret13 setRotationY(float p0) {
        return reinterpret_cast<ret13(*)(CCSprite*, float)>(address13)(this, p0);
    }

    using ret14 = decltype(declval<cocos2d::CCSprite>().ignoreAnchorPointForPosition(declval<bool>()));
    static inline auto address14 = base+0x134b60;

    dupable ret14 ignoreAnchorPointForPosition(bool p0) {
        return reinterpret_cast<ret14(*)(CCSprite*, bool)>(address14)(this, p0);
    }

    using ret15 = decltype(declval<cocos2d::CCSprite>().addChild(declval<cocos2d::CCNode*>()));
    static inline auto address15 = base+0x134190;

    dupable ret15 addChild(cocos2d::CCNode* p0) {
        return reinterpret_cast<ret15(*)(CCSprite*, cocos2d::CCNode*)>(address15)(this, p0);
    }

    using ret16 = decltype(declval<cocos2d::CCSprite>().addChild(declval<cocos2d::CCNode*>(), declval<int>()));
    static inline auto address16 = base+0x1341a0;

    dupable ret16 addChild(cocos2d::CCNode* p0,int p1) {
        return reinterpret_cast<ret16(*)(CCSprite*, cocos2d::CCNode*, int)>(address16)(this, p0, p1);
    }

    using ret17 = decltype(declval<cocos2d::CCSprite>().addChild(declval<cocos2d::CCNode*>(), declval<int>(), declval<int>()));
    static inline auto address17 = base+0x1341b0;

    dupable ret17 addChild(cocos2d::CCNode* p0,int p1,int p2) {
        return reinterpret_cast<ret17(*)(CCSprite*, cocos2d::CCNode*, int, int)>(address17)(this, p0, p1, p2);
    }

    using ret18 = decltype(declval<cocos2d::CCSprite>().removeChild(declval<cocos2d::CCNode*>(), declval<bool>()));
    static inline auto address18 = base+0x134300;

    dupable ret18 removeChild(cocos2d::CCNode* p0,bool p1) {
        return reinterpret_cast<ret18(*)(CCSprite*, cocos2d::CCNode*, bool)>(address18)(this, p0, p1);
    }

    using ret19 = decltype(declval<cocos2d::CCSprite>().removeAllChildrenWithCleanup(declval<bool>()));
    static inline auto address19 = base+0x134340;

    dupable ret19 removeAllChildrenWithCleanup(bool p0) {
        return reinterpret_cast<ret19(*)(CCSprite*, bool)>(address19)(this, p0);
    }

    using ret20 = decltype(declval<cocos2d::CCSprite>().reorderChild(declval<cocos2d::CCNode*>(), declval<int>()));
    static inline auto address20 = base+0x134270;

    dupable ret20 reorderChild(cocos2d::CCNode* p0,int p1) {
        return reinterpret_cast<ret20(*)(CCSprite*, cocos2d::CCNode*, int)>(address20)(this, p0, p1);
    }

    using ret21 = decltype(declval<cocos2d::CCSprite>().sortAllChildren());
    static inline auto address21 = base+0x1343f0;

    dupable ret21 sortAllChildren() {
        return reinterpret_cast<ret21(*)(CCSprite*)>(address21)(this);
    }

    using ret22 = decltype(declval<cocos2d::CCSprite>().draw());
    static inline auto address22 = base+0x134070;

    dupable ret22 draw() {
        return reinterpret_cast<ret22(*)(CCSprite*)>(address22)(this);
    }

    using ret23 = decltype(declval<cocos2d::CCSprite>().updateTransform());
    static inline auto address23 = base+0x133b70;

    dupable ret23 updateTransform() {
        return reinterpret_cast<ret23(*)(CCSprite*)>(address23)(this);
    }

    using ret24 = decltype(declval<cocos2d::CCSprite>().setOpacity(declval<unsigned char>()));
    static inline auto address24 = base+0x134da0;

    dupable ret24 setOpacity(unsigned char p0) {
        return reinterpret_cast<ret24(*)(CCSprite*, unsigned char)>(address24)(this, p0);
    }

    using ret25 = decltype(declval<cocos2d::CCSprite>().updateDisplayedOpacity(declval<unsigned char>()));
    static inline auto address25 = base+0x1354c0;

    dupable ret25 updateDisplayedOpacity(unsigned char p0) {
        return reinterpret_cast<ret25(*)(CCSprite*, unsigned char)>(address25)(this, p0);
    }

    using ret26 = decltype(declval<cocos2d::CCSprite>().setColor(declval<cocos2d::_ccColor3B const&>()));
    static inline auto address26 = base+0x134ff0;

    dupable ret26 setColor(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret26(*)(CCSprite*, cocos2d::_ccColor3B const&)>(address26)(this, p0);
    }

    using ret27 = decltype(declval<cocos2d::CCSprite>().updateDisplayedColor(declval<cocos2d::_ccColor3B const&>()));
    static inline auto address27 = base+0x135370;

    dupable ret27 updateDisplayedColor(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret27(*)(CCSprite*, cocos2d::_ccColor3B const&)>(address27)(this, p0);
    }

    using ret28 = decltype(declval<cocos2d::CCSprite>().setOpacityModifyRGB(declval<bool>()));
    static inline auto address28 = base+0x135200;

    dupable ret28 setOpacityModifyRGB(bool p0) {
        return reinterpret_cast<ret28(*)(CCSprite*, bool)>(address28)(this, p0);
    }

    using ret29 = decltype(declval<cocos2d::CCSprite>().isOpacityModifyRGB());
    static inline auto address29 = base+0x135350;

    dupable ret29 isOpacityModifyRGB() {
        return reinterpret_cast<ret29(*)(CCSprite*)>(address29)(this);
    }

    using ret30 = decltype(declval<cocos2d::CCSprite>().initWithTexture(declval<cocos2d::CCTexture2D*>()));
    static inline auto address30 = base+0x133110;

    dupable ret30 initWithTexture(cocos2d::CCTexture2D* p0) {
        return reinterpret_cast<ret30(*)(CCSprite*, cocos2d::CCTexture2D*)>(address30)(this, p0);
    }

    using ret31 = decltype(declval<cocos2d::CCSprite>().initWithTexture(declval<cocos2d::CCTexture2D*>(), declval<cocos2d::CCRect const&>()));
    static inline auto address31 = base+0x1330f0;

    dupable ret31 initWithTexture(cocos2d::CCTexture2D* p0,cocos2d::CCRect const& p1) {
        return reinterpret_cast<ret31(*)(CCSprite*, cocos2d::CCTexture2D*, cocos2d::CCRect const&)>(address31)(this, p0, p1);
    }

    using ret32 = decltype(declval<cocos2d::CCSprite>().initWithTexture(declval<cocos2d::CCTexture2D*>(), declval<cocos2d::CCRect const&>(), declval<bool>()));
    static inline auto address32 = base+0x132f10;

    dupable ret32 initWithTexture(cocos2d::CCTexture2D* p0,cocos2d::CCRect const& p1,bool p2) {
        return reinterpret_cast<ret32(*)(CCSprite*, cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool)>(address32)(this, p0, p1, p2);
    }

    using ret33 = decltype(declval<cocos2d::CCSprite>().initWithSpriteFrame(declval<cocos2d::CCSpriteFrame*>()));
    static inline auto address33 = base+0x133270;

    dupable ret33 initWithSpriteFrame(cocos2d::CCSpriteFrame* p0) {
        return reinterpret_cast<ret33(*)(CCSprite*, cocos2d::CCSpriteFrame*)>(address33)(this, p0);
    }

    using ret34 = decltype(declval<cocos2d::CCSprite>().initWithSpriteFrameName(declval<char const*>()));
    static inline auto address34 = base+0x1332c0;

    dupable ret34 initWithSpriteFrameName(char const* p0) {
        return reinterpret_cast<ret34(*)(CCSprite*, char const*)>(address34)(this, p0);
    }

    using ret35 = decltype(declval<cocos2d::CCSprite>().initWithFile(declval<char const*>()));
    static inline auto address35 = base+0x133180;

    dupable ret35 initWithFile(char const* p0) {
        return reinterpret_cast<ret35(*)(CCSprite*, char const*)>(address35)(this, p0);
    }

    using ret36 = decltype(declval<cocos2d::CCSprite>().initWithFile(declval<char const*>(), declval<cocos2d::CCRect const&>()));
    static inline auto address36 = base+0x133210;

    dupable ret36 initWithFile(char const* p0,cocos2d::CCRect const& p1) {
        return reinterpret_cast<ret36(*)(CCSprite*, char const*, cocos2d::CCRect const&)>(address36)(this, p0, p1);
    }

    using ret37 = decltype(declval<cocos2d::CCSprite>().setTexture(declval<cocos2d::CCTexture2D*>()));
    static inline auto address37 = base+0x135a90;

    dupable ret37 setTexture(cocos2d::CCTexture2D* p0) {
        return reinterpret_cast<ret37(*)(CCSprite*, cocos2d::CCTexture2D*)>(address37)(this, p0);
    }

    using ret38 = decltype(declval<cocos2d::CCSprite>().getTexture());
    static inline auto address38 = base+0x135c00;

    dupable ret38 getTexture() {
        return reinterpret_cast<ret38(*)(CCSprite*)>(address38)(this);
    }

    using ret39 = decltype(declval<cocos2d::CCSprite>().setChildColor(declval<cocos2d::_ccColor3B const&>()));
    static inline auto address39 = base+0x135160;

    dupable ret39 setChildColor(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret39(*)(CCSprite*, cocos2d::_ccColor3B const&)>(address39)(this, p0);
    }

    using ret40 = decltype(declval<cocos2d::CCSprite>().setChildOpacity(declval<unsigned char>()));
    static inline auto address40 = base+0x134f50;

    dupable ret40 setChildOpacity(unsigned char p0) {
        return reinterpret_cast<ret40(*)(CCSprite*, unsigned char)>(address40)(this, p0);
    }

    using ret41 = decltype(declval<cocos2d::CCSprite>().getBatchNode());
    static inline auto address41 = base+0x135910;

    dupable ret41 getBatchNode() {
        return reinterpret_cast<ret41(*)(CCSprite*)>(address41)(this);
    }

    using ret42 = decltype(declval<cocos2d::CCSprite>().setBatchNode(declval<cocos2d::CCSpriteBatchNode*>()));
    static inline auto address42 = base+0x135920;

    dupable ret42 setBatchNode(cocos2d::CCSpriteBatchNode* p0) {
        return reinterpret_cast<ret42(*)(CCSprite*, cocos2d::CCSpriteBatchNode*)>(address42)(this, p0);
    }

    using ret43 = decltype(declval<cocos2d::CCSprite>().refreshTextureRect());
    static inline auto address43 = base+0x133520;

    dupable ret43 refreshTextureRect() {
        return reinterpret_cast<ret43(*)(CCSprite*)>(address43)(this);
    }

    using ret44 = decltype(declval<cocos2d::CCSprite>().setTextureRect(declval<cocos2d::CCRect const&>()));
    static inline auto address44 = base+0x133560;

    dupable ret44 setTextureRect(cocos2d::CCRect const& p0) {
        return reinterpret_cast<ret44(*)(CCSprite*, cocos2d::CCRect const&)>(address44)(this, p0);
    }

    using ret45 = decltype(declval<cocos2d::CCSprite>().setTextureRect(declval<cocos2d::CCRect const&>(), declval<bool>(), declval<cocos2d::CCSize const&>()));
    static inline auto address45 = base+0x133580;

    dupable ret45 setTextureRect(cocos2d::CCRect const& p0,bool p1,cocos2d::CCSize const& p2) {
        return reinterpret_cast<ret45(*)(CCSprite*, cocos2d::CCRect const&, bool, cocos2d::CCSize const&)>(address45)(this, p0, p1, p2);
    }

    using ret46 = decltype(declval<cocos2d::CCSprite>().setVertexRect(declval<cocos2d::CCRect const&>()));
    static inline auto address46 = base+0x1338f0;

    dupable ret46 setVertexRect(cocos2d::CCRect const& p0) {
        return reinterpret_cast<ret46(*)(CCSprite*, cocos2d::CCRect const&)>(address46)(this, p0);
    }

    using ret47 = decltype(declval<cocos2d::CCSprite>().setDisplayFrame(declval<cocos2d::CCSpriteFrame*>()));
    static inline auto address47 = base+0x135610;

    dupable ret47 setDisplayFrame(cocos2d::CCSpriteFrame* p0) {
        return reinterpret_cast<ret47(*)(CCSprite*, cocos2d::CCSpriteFrame*)>(address47)(this, p0);
    }

    using ret48 = decltype(declval<cocos2d::CCSprite>().isFrameDisplayed(declval<cocos2d::CCSpriteFrame*>()));
    static inline auto address48 = base+0x1356d0;

    dupable ret48 isFrameDisplayed(cocos2d::CCSpriteFrame* p0) {
        return reinterpret_cast<ret48(*)(CCSprite*, cocos2d::CCSpriteFrame*)>(address48)(this, p0);
    }

    using ret49 = decltype(declval<cocos2d::CCSprite>().displayFrame());
    static inline auto address49 = base+0x135760;

    dupable ret49 displayFrame() {
        return reinterpret_cast<ret49(*)(CCSprite*)>(address49)(this);
    }

    using ret50 = decltype(declval<cocos2d::CCSprite>().setDisplayFrameWithAnimationName(declval<char const*>(), declval<int>()));
    static inline auto address50 = base+0x135680;

    dupable ret50 setDisplayFrameWithAnimationName(char const* p0,int p1) {
        return reinterpret_cast<ret50(*)(CCSprite*, char const*, int)>(address50)(this, p0, p1);
    }

    using ret51 = decltype(declval<cocos2d::CCSprite>().setTextureCoords(declval<cocos2d::CCRect const&>()));
    static inline auto address51 = base+0x133910;

    dupable ret51 setTextureCoords(cocos2d::CCRect const& p0) {
        return reinterpret_cast<ret51(*)(CCSprite*, cocos2d::CCRect const&)>(address51)(this, p0);
    }

    using ret52 = decltype(declval<cocos2d::CCSprite>().updateBlendFunc());
    static inline auto address52 = base+0x135a20;

    dupable ret52 updateBlendFunc() {
        return reinterpret_cast<ret52(*)(CCSprite*)>(address52)(this);
    }

    using ret53 = decltype(declval<cocos2d::CCSprite>().setReorderChildDirtyRecursively());
    static inline auto address53 = base+0x134550;

    dupable ret53 setReorderChildDirtyRecursively() {
        return reinterpret_cast<ret53(*)(CCSprite*)>(address53)(this);
    }

    using ret54 = decltype(declval<cocos2d::CCSprite>().setDirtyRecursively(declval<bool>()));
    static inline auto address54 = base+0x1345b0;

    dupable ret54 setDirtyRecursively(bool p0) {
        return reinterpret_cast<ret54(*)(CCSprite*, bool)>(address54)(this, p0);
    }

    using ret55 = void;
    static inline auto address55 = base+0x133300;

    dupable void constructor() {
        reinterpret_cast<void(*)(decltype(this))>(address55)(this);
    }

    using ret56 = cocos2d::CCSprite*;
    static inline auto address56 = base+0x132df0;

    dupable static ret56 create() {
        return reinterpret_cast<ret56(*)(CCSprite*)>(address56)();
    }

    using ret57 = cocos2d::CCSprite*;
    static inline auto address57 = base+0x132a80;

    dupable static ret57 create(char const* p0) {
        return reinterpret_cast<ret57(*)(CCSprite*, char const*)>(address57)(p0);
    }

    using ret58 = cocos2d::CCSprite*;
    static inline auto address58 = base+0x132cb0;

    dupable static ret58 createWithSpriteFrame(cocos2d::CCSpriteFrame* p0) {
        return reinterpret_cast<ret58(*)(CCSprite*, cocos2d::CCSpriteFrame*)>(address58)(p0);
    }

    using ret59 = cocos2d::CCSprite*;
    static inline auto address59 = base+0x132dc0;

    dupable static ret59 createWithSpriteFrameName(char const* p0) {
        return reinterpret_cast<ret59(*)(CCSprite*, char const*)>(address59)(p0);
    }

    using ret60 = cocos2d::CCSprite*;
    static inline auto address60 = base+0x132790;

    dupable static ret60 createWithTexture(cocos2d::CCTexture2D* p0) {
        return reinterpret_cast<ret60(*)(CCSprite*, cocos2d::CCTexture2D*)>(address60)(p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCSprite*))(&$CCSprite::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(CCSprite*))(&$CCSprite::init) != (ret1(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::init)));
        }

        if constexpr((ret2(*)(CCSprite*, float))(&$CCSprite::setVertexZ) != (ret2(D::*)(float))(&D::setVertexZ)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)(float))(&D::setVertexZ)));
        }

        if constexpr((ret3(*)(CCSprite*, float))(&$CCSprite::setScaleX) != (ret3(D::*)(float))(&D::setScaleX)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)(float))(&D::setScaleX)));
        }

        if constexpr((ret4(*)(CCSprite*, float))(&$CCSprite::setScaleY) != (ret4(D::*)(float))(&D::setScaleY)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)(float))(&D::setScaleY)));
        }

        if constexpr((ret5(*)(CCSprite*, float))(&$CCSprite::setScale) != (ret5(D::*)(float))(&D::setScale)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)(float))(&D::setScale)));
        }

        if constexpr((ret6(*)(CCSprite*, cocos2d::CCPoint const&))(&$CCSprite::setPosition) != (ret6(D::*)(cocos2d::CCPoint const&))(&D::setPosition)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)(cocos2d::CCPoint const&))(&D::setPosition)));
        }

        if constexpr((ret7(*)(CCSprite*, float))(&$CCSprite::setSkewX) != (ret7(D::*)(float))(&D::setSkewX)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)(float))(&D::setSkewX)));
        }

        if constexpr((ret8(*)(CCSprite*, float))(&$CCSprite::setSkewY) != (ret8(D::*)(float))(&D::setSkewY)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)(float))(&D::setSkewY)));
        }

        if constexpr((ret9(*)(CCSprite*, cocos2d::CCPoint const&))(&$CCSprite::setAnchorPoint) != (ret9(D::*)(cocos2d::CCPoint const&))(&D::setAnchorPoint)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfVirtual((ret9(D::*)(cocos2d::CCPoint const&))(&D::setAnchorPoint)));
        }

        if constexpr((ret10(*)(CCSprite*, bool))(&$CCSprite::setVisible) != (ret10(D::*)(bool))(&D::setVisible)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfVirtual((ret10(D::*)(bool))(&D::setVisible)));
        }

        if constexpr((ret11(*)(CCSprite*, float))(&$CCSprite::setRotation) != (ret11(D::*)(float))(&D::setRotation)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfVirtual((ret11(D::*)(float))(&D::setRotation)));
        }

        if constexpr((ret12(*)(CCSprite*, float))(&$CCSprite::setRotationX) != (ret12(D::*)(float))(&D::setRotationX)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfVirtual((ret12(D::*)(float))(&D::setRotationX)));
        }

        if constexpr((ret13(*)(CCSprite*, float))(&$CCSprite::setRotationY) != (ret13(D::*)(float))(&D::setRotationY)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfVirtual((ret13(D::*)(float))(&D::setRotationY)));
        }

        if constexpr((ret14(*)(CCSprite*, bool))(&$CCSprite::ignoreAnchorPointForPosition) != (ret14(D::*)(bool))(&D::ignoreAnchorPointForPosition)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfVirtual((ret14(D::*)(bool))(&D::ignoreAnchorPointForPosition)));
        }

        if constexpr((ret15(*)(CCSprite*, cocos2d::CCNode*))(&$CCSprite::addChild) != (ret15(D::*)(cocos2d::CCNode*))(&D::addChild)) {
            modContainer.registerHookEnable(address15, FunctionScrapper::addressOfVirtual((ret15(D::*)(cocos2d::CCNode*))(&D::addChild)));
        }

        if constexpr((ret16(*)(CCSprite*, cocos2d::CCNode*, int))(&$CCSprite::addChild) != (ret16(D::*)(cocos2d::CCNode*, int))(&D::addChild)) {
            modContainer.registerHookEnable(address16, FunctionScrapper::addressOfVirtual((ret16(D::*)(cocos2d::CCNode*, int))(&D::addChild)));
        }

        if constexpr((ret17(*)(CCSprite*, cocos2d::CCNode*, int, int))(&$CCSprite::addChild) != (ret17(D::*)(cocos2d::CCNode*, int, int))(&D::addChild)) {
            modContainer.registerHookEnable(address17, FunctionScrapper::addressOfVirtual((ret17(D::*)(cocos2d::CCNode*, int, int))(&D::addChild)));
        }

        if constexpr((ret18(*)(CCSprite*, cocos2d::CCNode*, bool))(&$CCSprite::removeChild) != (ret18(D::*)(cocos2d::CCNode*, bool))(&D::removeChild)) {
            modContainer.registerHookEnable(address18, FunctionScrapper::addressOfVirtual((ret18(D::*)(cocos2d::CCNode*, bool))(&D::removeChild)));
        }

        if constexpr((ret19(*)(CCSprite*, bool))(&$CCSprite::removeAllChildrenWithCleanup) != (ret19(D::*)(bool))(&D::removeAllChildrenWithCleanup)) {
            modContainer.registerHookEnable(address19, FunctionScrapper::addressOfVirtual((ret19(D::*)(bool))(&D::removeAllChildrenWithCleanup)));
        }

        if constexpr((ret20(*)(CCSprite*, cocos2d::CCNode*, int))(&$CCSprite::reorderChild) != (ret20(D::*)(cocos2d::CCNode*, int))(&D::reorderChild)) {
            modContainer.registerHookEnable(address20, FunctionScrapper::addressOfVirtual((ret20(D::*)(cocos2d::CCNode*, int))(&D::reorderChild)));
        }

        if constexpr((ret21(*)(CCSprite*))(&$CCSprite::sortAllChildren) != (ret21(D::*)())(&D::sortAllChildren)) {
            modContainer.registerHookEnable(address21, FunctionScrapper::addressOfVirtual((ret21(D::*)())(&D::sortAllChildren)));
        }

        if constexpr((ret22(*)(CCSprite*))(&$CCSprite::draw) != (ret22(D::*)())(&D::draw)) {
            modContainer.registerHookEnable(address22, FunctionScrapper::addressOfVirtual((ret22(D::*)())(&D::draw)));
        }

        if constexpr((ret23(*)(CCSprite*))(&$CCSprite::updateTransform) != (ret23(D::*)())(&D::updateTransform)) {
            modContainer.registerHookEnable(address23, FunctionScrapper::addressOfVirtual((ret23(D::*)())(&D::updateTransform)));
        }

        if constexpr((ret24(*)(CCSprite*, unsigned char))(&$CCSprite::setOpacity) != (ret24(D::*)(unsigned char))(&D::setOpacity)) {
            modContainer.registerHookEnable(address24, FunctionScrapper::addressOfVirtual((ret24(D::*)(unsigned char))(&D::setOpacity)));
        }

        if constexpr((ret25(*)(CCSprite*, unsigned char))(&$CCSprite::updateDisplayedOpacity) != (ret25(D::*)(unsigned char))(&D::updateDisplayedOpacity)) {
            modContainer.registerHookEnable(address25, FunctionScrapper::addressOfVirtual((ret25(D::*)(unsigned char))(&D::updateDisplayedOpacity)));
        }

        if constexpr((ret26(*)(CCSprite*, cocos2d::_ccColor3B const&))(&$CCSprite::setColor) != (ret26(D::*)(cocos2d::_ccColor3B const&))(&D::setColor)) {
            modContainer.registerHookEnable(address26, FunctionScrapper::addressOfVirtual((ret26(D::*)(cocos2d::_ccColor3B const&))(&D::setColor)));
        }

        if constexpr((ret27(*)(CCSprite*, cocos2d::_ccColor3B const&))(&$CCSprite::updateDisplayedColor) != (ret27(D::*)(cocos2d::_ccColor3B const&))(&D::updateDisplayedColor)) {
            modContainer.registerHookEnable(address27, FunctionScrapper::addressOfVirtual((ret27(D::*)(cocos2d::_ccColor3B const&))(&D::updateDisplayedColor)));
        }

        if constexpr((ret28(*)(CCSprite*, bool))(&$CCSprite::setOpacityModifyRGB) != (ret28(D::*)(bool))(&D::setOpacityModifyRGB)) {
            modContainer.registerHookEnable(address28, FunctionScrapper::addressOfVirtual((ret28(D::*)(bool))(&D::setOpacityModifyRGB)));
        }

        if constexpr((ret29(*)(CCSprite*))(&$CCSprite::isOpacityModifyRGB) != (ret29(D::*)())(&D::isOpacityModifyRGB)) {
            modContainer.registerHookEnable(address29, FunctionScrapper::addressOfVirtual((ret29(D::*)())(&D::isOpacityModifyRGB)));
        }

        if constexpr((ret30(*)(CCSprite*, cocos2d::CCTexture2D*))(&$CCSprite::initWithTexture) != (ret30(D::*)(cocos2d::CCTexture2D*))(&D::initWithTexture)) {
            modContainer.registerHookEnable(address30, FunctionScrapper::addressOfVirtual((ret30(D::*)(cocos2d::CCTexture2D*))(&D::initWithTexture)));
        }

        if constexpr((ret31(*)(CCSprite*, cocos2d::CCTexture2D*, cocos2d::CCRect const&))(&$CCSprite::initWithTexture) != (ret31(D::*)(cocos2d::CCTexture2D*, cocos2d::CCRect const&))(&D::initWithTexture)) {
            modContainer.registerHookEnable(address31, FunctionScrapper::addressOfVirtual((ret31(D::*)(cocos2d::CCTexture2D*, cocos2d::CCRect const&))(&D::initWithTexture)));
        }

        if constexpr((ret32(*)(CCSprite*, cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool))(&$CCSprite::initWithTexture) != (ret32(D::*)(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool))(&D::initWithTexture)) {
            modContainer.registerHookEnable(address32, FunctionScrapper::addressOfVirtual((ret32(D::*)(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool))(&D::initWithTexture)));
        }

        if constexpr((ret33(*)(CCSprite*, cocos2d::CCSpriteFrame*))(&$CCSprite::initWithSpriteFrame) != (ret33(D::*)(cocos2d::CCSpriteFrame*))(&D::initWithSpriteFrame)) {
            modContainer.registerHookEnable(address33, FunctionScrapper::addressOfVirtual((ret33(D::*)(cocos2d::CCSpriteFrame*))(&D::initWithSpriteFrame)));
        }

        if constexpr((ret34(*)(CCSprite*, char const*))(&$CCSprite::initWithSpriteFrameName) != (ret34(D::*)(char const*))(&D::initWithSpriteFrameName)) {
            modContainer.registerHookEnable(address34, FunctionScrapper::addressOfVirtual((ret34(D::*)(char const*))(&D::initWithSpriteFrameName)));
        }

        if constexpr((ret35(*)(CCSprite*, char const*))(&$CCSprite::initWithFile) != (ret35(D::*)(char const*))(&D::initWithFile)) {
            modContainer.registerHookEnable(address35, FunctionScrapper::addressOfVirtual((ret35(D::*)(char const*))(&D::initWithFile)));
        }

        if constexpr((ret36(*)(CCSprite*, char const*, cocos2d::CCRect const&))(&$CCSprite::initWithFile) != (ret36(D::*)(char const*, cocos2d::CCRect const&))(&D::initWithFile)) {
            modContainer.registerHookEnable(address36, FunctionScrapper::addressOfVirtual((ret36(D::*)(char const*, cocos2d::CCRect const&))(&D::initWithFile)));
        }

        if constexpr((ret37(*)(CCSprite*, cocos2d::CCTexture2D*))(&$CCSprite::setTexture) != (ret37(D::*)(cocos2d::CCTexture2D*))(&D::setTexture)) {
            modContainer.registerHookEnable(address37, FunctionScrapper::addressOfVirtual((ret37(D::*)(cocos2d::CCTexture2D*))(&D::setTexture)));
        }

        if constexpr((ret38(*)(CCSprite*))(&$CCSprite::getTexture) != (ret38(D::*)())(&D::getTexture)) {
            modContainer.registerHookEnable(address38, FunctionScrapper::addressOfVirtual((ret38(D::*)())(&D::getTexture)));
        }

        if constexpr((ret39(*)(CCSprite*, cocos2d::_ccColor3B const&))(&$CCSprite::setChildColor) != (ret39(D::*)(cocos2d::_ccColor3B const&))(&D::setChildColor)) {
            modContainer.registerHookEnable(address39, FunctionScrapper::addressOfVirtual((ret39(D::*)(cocos2d::_ccColor3B const&))(&D::setChildColor)));
        }

        if constexpr((ret40(*)(CCSprite*, unsigned char))(&$CCSprite::setChildOpacity) != (ret40(D::*)(unsigned char))(&D::setChildOpacity)) {
            modContainer.registerHookEnable(address40, FunctionScrapper::addressOfVirtual((ret40(D::*)(unsigned char))(&D::setChildOpacity)));
        }

        if constexpr((ret41(*)(CCSprite*))(&$CCSprite::getBatchNode) != (ret41(D::*)())(&D::getBatchNode)) {
            modContainer.registerHookEnable(address41, FunctionScrapper::addressOfVirtual((ret41(D::*)())(&D::getBatchNode)));
        }

        if constexpr((ret42(*)(CCSprite*, cocos2d::CCSpriteBatchNode*))(&$CCSprite::setBatchNode) != (ret42(D::*)(cocos2d::CCSpriteBatchNode*))(&D::setBatchNode)) {
            modContainer.registerHookEnable(address42, FunctionScrapper::addressOfVirtual((ret42(D::*)(cocos2d::CCSpriteBatchNode*))(&D::setBatchNode)));
        }

        if constexpr((ret43(*)(CCSprite*))(&$CCSprite::refreshTextureRect) != (ret43(D::*)())(&D::refreshTextureRect)) {
            modContainer.registerHookEnable(address43, FunctionScrapper::addressOfVirtual((ret43(D::*)())(&D::refreshTextureRect)));
        }

        if constexpr((ret44(*)(CCSprite*, cocos2d::CCRect const&))(&$CCSprite::setTextureRect) != (ret44(D::*)(cocos2d::CCRect const&))(&D::setTextureRect)) {
            modContainer.registerHookEnable(address44, FunctionScrapper::addressOfVirtual((ret44(D::*)(cocos2d::CCRect const&))(&D::setTextureRect)));
        }

        if constexpr((ret45(*)(CCSprite*, cocos2d::CCRect const&, bool, cocos2d::CCSize const&))(&$CCSprite::setTextureRect) != (ret45(D::*)(cocos2d::CCRect const&, bool, cocos2d::CCSize const&))(&D::setTextureRect)) {
            modContainer.registerHookEnable(address45, FunctionScrapper::addressOfVirtual((ret45(D::*)(cocos2d::CCRect const&, bool, cocos2d::CCSize const&))(&D::setTextureRect)));
        }

        if constexpr((ret46(*)(CCSprite*, cocos2d::CCRect const&))(&$CCSprite::setVertexRect) != (ret46(D::*)(cocos2d::CCRect const&))(&D::setVertexRect)) {
            modContainer.registerHookEnable(address46, FunctionScrapper::addressOfVirtual((ret46(D::*)(cocos2d::CCRect const&))(&D::setVertexRect)));
        }

        if constexpr((ret47(*)(CCSprite*, cocos2d::CCSpriteFrame*))(&$CCSprite::setDisplayFrame) != (ret47(D::*)(cocos2d::CCSpriteFrame*))(&D::setDisplayFrame)) {
            modContainer.registerHookEnable(address47, FunctionScrapper::addressOfVirtual((ret47(D::*)(cocos2d::CCSpriteFrame*))(&D::setDisplayFrame)));
        }

        if constexpr((ret48(*)(CCSprite*, cocos2d::CCSpriteFrame*))(&$CCSprite::isFrameDisplayed) != (ret48(D::*)(cocos2d::CCSpriteFrame*))(&D::isFrameDisplayed)) {
            modContainer.registerHookEnable(address48, FunctionScrapper::addressOfVirtual((ret48(D::*)(cocos2d::CCSpriteFrame*))(&D::isFrameDisplayed)));
        }

        if constexpr((ret49(*)(CCSprite*))(&$CCSprite::displayFrame) != (ret49(D::*)())(&D::displayFrame)) {
            modContainer.registerHookEnable(address49, FunctionScrapper::addressOfVirtual((ret49(D::*)())(&D::displayFrame)));
        }

        if constexpr((ret50(*)(CCSprite*, char const*, int))(&$CCSprite::setDisplayFrameWithAnimationName) != (ret50(D::*)(char const*, int))(&D::setDisplayFrameWithAnimationName)) {
            modContainer.registerHookEnable(address50, FunctionScrapper::addressOfVirtual((ret50(D::*)(char const*, int))(&D::setDisplayFrameWithAnimationName)));
        }

        if constexpr((ret51(*)(CCSprite*, cocos2d::CCRect const&))(&$CCSprite::setTextureCoords) != (ret51(D::*)(cocos2d::CCRect const&))(&D::setTextureCoords)) {
            modContainer.registerHookEnable(address51, FunctionScrapper::addressOfVirtual((ret51(D::*)(cocos2d::CCRect const&))(&D::setTextureCoords)));
        }

        if constexpr((ret52(*)(CCSprite*))(&$CCSprite::updateBlendFunc) != (ret52(D::*)())(&D::updateBlendFunc)) {
            modContainer.registerHookEnable(address52, FunctionScrapper::addressOfVirtual((ret52(D::*)())(&D::updateBlendFunc)));
        }

        if constexpr((ret53(*)(CCSprite*))(&$CCSprite::setReorderChildDirtyRecursively) != (ret53(D::*)())(&D::setReorderChildDirtyRecursively)) {
            modContainer.registerHookEnable(address53, FunctionScrapper::addressOfVirtual((ret53(D::*)())(&D::setReorderChildDirtyRecursively)));
        }

        if constexpr((ret54(*)(CCSprite*, bool))(&$CCSprite::setDirtyRecursively) != (ret54(D::*)(bool))(&D::setDirtyRecursively)) {
            modContainer.registerHookEnable(address54, FunctionScrapper::addressOfVirtual((ret54(D::*)(bool))(&D::setDirtyRecursively)));
        }

        if constexpr((ret55(*)(CCSprite*))(&$CCSprite::constructor) != (ret55(D::*)())(&D::constructor)) {
            modContainer.registerHookEnable(address55, FunctionScrapper::addressOfNonVirtual((ret55(D::*)())(&D::constructor)));
        }

        if constexpr((ret56(*)(CCSprite*))(&$CCSprite::create) != (ret56(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address56, FunctionScrapper::addressOfNonVirtual((ret56(D::*)())(&D::create)));
        }

        if constexpr((ret57(*)(CCSprite*, char const*))(&$CCSprite::create) != (ret57(D::*)(char const*))(&D::create)) {
            modContainer.registerHookEnable(address57, FunctionScrapper::addressOfNonVirtual((ret57(D::*)(char const*))(&D::create)));
        }

        if constexpr((ret58(*)(CCSprite*, cocos2d::CCSpriteFrame*))(&$CCSprite::createWithSpriteFrame) != (ret58(D::*)(cocos2d::CCSpriteFrame*))(&D::createWithSpriteFrame)) {
            modContainer.registerHookEnable(address58, FunctionScrapper::addressOfNonVirtual((ret58(D::*)(cocos2d::CCSpriteFrame*))(&D::createWithSpriteFrame)));
        }

        if constexpr((ret59(*)(CCSprite*, char const*))(&$CCSprite::createWithSpriteFrameName) != (ret59(D::*)(char const*))(&D::createWithSpriteFrameName)) {
            modContainer.registerHookEnable(address59, FunctionScrapper::addressOfNonVirtual((ret59(D::*)(char const*))(&D::createWithSpriteFrameName)));
        }

        if constexpr((ret60(*)(CCSprite*, cocos2d::CCTexture2D*))(&$CCSprite::createWithTexture) != (ret60(D::*)(cocos2d::CCTexture2D*))(&D::createWithTexture)) {
            modContainer.registerHookEnable(address60, FunctionScrapper::addressOfNonVirtual((ret60(D::*)(cocos2d::CCTexture2D*))(&D::createWithTexture)));
        }

        return true;
    }
};

template<class D>
struct $CCTouchDispatcher : CCTouchDispatcher, InterfaceBase {
    $CCTouchDispatcher(const $CCTouchDispatcher& c) : CCTouchDispatcher(c) {}
    $CCTouchDispatcher() = delete;

    using ret0 = decltype(declval<cocos2d::CCTouchDispatcher>().decrementForcePrio(declval<int>()));
    static inline auto address0 = base+0x280f70;

    dupable ret0 decrementForcePrio(int p0) {
        return reinterpret_cast<ret0(*)(CCTouchDispatcher*, int)>(address0)(this, p0);
    }

    using ret1 = decltype(declval<cocos2d::CCTouchDispatcher>().incrementForcePrio(declval<int>()));
    static inline auto address1 = base+0x280f60;

    dupable ret1 incrementForcePrio(int p0) {
        return reinterpret_cast<ret1(*)(CCTouchDispatcher*, int)>(address1)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCTouchDispatcher*, int))(&$CCTouchDispatcher::decrementForcePrio) != (ret0(D::*)(int))(&D::decrementForcePrio)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(int))(&D::decrementForcePrio)));
        }

        if constexpr((ret1(*)(CCTouchDispatcher*, int))(&$CCTouchDispatcher::incrementForcePrio) != (ret1(D::*)(int))(&D::incrementForcePrio)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(int))(&D::incrementForcePrio)));
        }

        return true;
    }
};

template<class D>
struct $CCMotionStreak : CCMotionStreak, InterfaceBase {
    $CCMotionStreak(const $CCMotionStreak& c) : CCMotionStreak(c) {}
    $CCMotionStreak() = delete;

    using ret0 = decltype(declval<cocos2d::CCMotionStreak>().reset());
    static inline auto address0 = base+0x2ee190;

    dupable ret0 reset() {
        return reinterpret_cast<ret0(*)(CCMotionStreak*)>(address0)(this);
    }

    using ret1 = decltype(declval<cocos2d::CCMotionStreak>().resumeStroke());
    static inline auto address1 = base+0x2edb30;

    dupable ret1 resumeStroke() {
        return reinterpret_cast<ret1(*)(CCMotionStreak*)>(address1)(this);
    }

    using ret2 = decltype(declval<cocos2d::CCMotionStreak>().stopStroke());
    static inline auto address2 = base+0x2edb20;

    dupable ret2 stopStroke() {
        return reinterpret_cast<ret2(*)(CCMotionStreak*)>(address2)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCMotionStreak*))(&$CCMotionStreak::reset) != (ret0(D::*)())(&D::reset)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::reset)));
        }

        if constexpr((ret1(*)(CCMotionStreak*))(&$CCMotionStreak::resumeStroke) != (ret1(D::*)())(&D::resumeStroke)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::resumeStroke)));
        }

        if constexpr((ret2(*)(CCMotionStreak*))(&$CCMotionStreak::stopStroke) != (ret2(D::*)())(&D::stopStroke)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::stopStroke)));
        }

        return true;
    }
};

template<class D>
struct $CCTintTo : CCTintTo, InterfaceBase {
    $CCTintTo(const $CCTintTo& c) : CCTintTo(c) {}
    $CCTintTo() = delete;

    using ret0 = cocos2d::CCTintTo*;
    static inline auto address0 = base+0x1f82a0;

    dupable static ret0 create(float p0,unsigned char p1,unsigned char p2,unsigned char p3) {
        return reinterpret_cast<ret0(*)(CCTintTo*, float, unsigned char, unsigned char, unsigned char)>(address0)(p0, p1, p2, p3);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCTintTo*, float, unsigned char, unsigned char, unsigned char))(&$CCTintTo::create) != (ret0(D::*)(float, unsigned char, unsigned char, unsigned char))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(float, unsigned char, unsigned char, unsigned char))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCDictionary : CCDictionary, InterfaceBase {
    $CCDictionary(const $CCDictionary& c) : CCDictionary(c) {}
    $CCDictionary() = delete;

    using ret0 = decltype(declval<cocos2d::CCDictionary>().allKeys());
    static inline auto address0 = base+0x190450;

    dupable ret0 allKeys() {
        return reinterpret_cast<ret0(*)(CCDictionary*)>(address0)(this);
    }

    using ret1 = decltype(declval<cocos2d::CCDictionary>().count());
    static inline auto address1 = base+0x190430;

    dupable ret1 count() {
        return reinterpret_cast<ret1(*)(CCDictionary*)>(address1)(this);
    }

    using ret2 = cocos2d::CCDictionary*;
    static inline auto address2 = base+0x192650;

    dupable static ret2 create() {
        return reinterpret_cast<ret2(*)(CCDictionary*)>(address2)();
    }

    using ret3 = decltype(declval<cocos2d::CCDictionary>().objectForKey(declval<intptr_t>()));
    static inline auto address3 = base+0x190bb0;

    dupable ret3 objectForKey(intptr_t p0) {
        return reinterpret_cast<ret3(*)(CCDictionary*, intptr_t)>(address3)(this, p0);
    }

    using ret4 = decltype(declval<cocos2d::CCDictionary>().objectForKey(declval<gd::string const&>()));
    static inline auto address4 = base+0x190870;

    dupable ret4 objectForKey(gd::string const& p0) {
        return reinterpret_cast<ret4(*)(CCDictionary*, gd::string const&)>(address4)(this, p0);
    }

    using ret5 = decltype(declval<cocos2d::CCDictionary>().removeAllObjects());
    static inline auto address5 = base+0x190220;

    dupable ret5 removeAllObjects() {
        return reinterpret_cast<ret5(*)(CCDictionary*)>(address5)(this);
    }

    using ret6 = decltype(declval<cocos2d::CCDictionary>().removeObjectForKey(declval<intptr_t>()));
    static inline auto address6 = base+0x1921d0;

    dupable ret6 removeObjectForKey(intptr_t p0) {
        return reinterpret_cast<ret6(*)(CCDictionary*, intptr_t)>(address6)(this, p0);
    }

    using ret7 = decltype(declval<cocos2d::CCDictionary>().setObject(declval<cocos2d::CCObject*>(), declval<intptr_t>()));
    static inline auto address7 = base+0x191790;

    dupable ret7 setObject(cocos2d::CCObject* p0,intptr_t p1) {
        return reinterpret_cast<ret7(*)(CCDictionary*, cocos2d::CCObject*, intptr_t)>(address7)(this, p0, p1);
    }

    using ret8 = decltype(declval<cocos2d::CCDictionary>().setObject(declval<cocos2d::CCObject*>(), declval<gd::string const&>()));
    static inline auto address8 = base+0x190dc0;

    dupable ret8 setObject(cocos2d::CCObject* p0,gd::string const& p1) {
        return reinterpret_cast<ret8(*)(CCDictionary*, cocos2d::CCObject*, gd::string const&)>(address8)(this, p0, p1);
    }

    using ret9 = decltype(declval<cocos2d::CCDictionary>().valueForKey(declval<intptr_t>()));
    static inline auto address9 = base+0x190cf0;

    dupable ret9 valueForKey(intptr_t p0) {
        return reinterpret_cast<ret9(*)(CCDictionary*, intptr_t)>(address9)(this, p0);
    }

    using ret10 = decltype(declval<cocos2d::CCDictionary>().valueForKey(declval<gd::string const&>()));
    static inline auto address10 = base+0x1907a0;

    dupable ret10 valueForKey(gd::string const& p0) {
        return reinterpret_cast<ret10(*)(CCDictionary*, gd::string const&)>(address10)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCDictionary*))(&$CCDictionary::allKeys) != (ret0(D::*)())(&D::allKeys)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::allKeys)));
        }

        if constexpr((ret1(*)(CCDictionary*))(&$CCDictionary::count) != (ret1(D::*)())(&D::count)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::count)));
        }

        if constexpr((ret2(*)(CCDictionary*))(&$CCDictionary::create) != (ret2(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::create)));
        }

        if constexpr((ret3(*)(CCDictionary*, intptr_t))(&$CCDictionary::objectForKey) != (ret3(D::*)(intptr_t))(&D::objectForKey)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(intptr_t))(&D::objectForKey)));
        }

        if constexpr((ret4(*)(CCDictionary*, gd::string const&))(&$CCDictionary::objectForKey) != (ret4(D::*)(gd::string const&))(&D::objectForKey)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(gd::string const&))(&D::objectForKey)));
        }

        if constexpr((ret5(*)(CCDictionary*))(&$CCDictionary::removeAllObjects) != (ret5(D::*)())(&D::removeAllObjects)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)())(&D::removeAllObjects)));
        }

        if constexpr((ret6(*)(CCDictionary*, intptr_t))(&$CCDictionary::removeObjectForKey) != (ret6(D::*)(intptr_t))(&D::removeObjectForKey)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)(intptr_t))(&D::removeObjectForKey)));
        }

        if constexpr((ret7(*)(CCDictionary*, cocos2d::CCObject*, intptr_t))(&$CCDictionary::setObject) != (ret7(D::*)(cocos2d::CCObject*, intptr_t))(&D::setObject)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)(cocos2d::CCObject*, intptr_t))(&D::setObject)));
        }

        if constexpr((ret8(*)(CCDictionary*, cocos2d::CCObject*, gd::string const&))(&$CCDictionary::setObject) != (ret8(D::*)(cocos2d::CCObject*, gd::string const&))(&D::setObject)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfNonVirtual((ret8(D::*)(cocos2d::CCObject*, gd::string const&))(&D::setObject)));
        }

        if constexpr((ret9(*)(CCDictionary*, intptr_t))(&$CCDictionary::valueForKey) != (ret9(D::*)(intptr_t))(&D::valueForKey)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfNonVirtual((ret9(D::*)(intptr_t))(&D::valueForKey)));
        }

        if constexpr((ret10(*)(CCDictionary*, gd::string const&))(&$CCDictionary::valueForKey) != (ret10(D::*)(gd::string const&))(&D::valueForKey)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfNonVirtual((ret10(D::*)(gd::string const&))(&D::valueForKey)));
        }

        return true;
    }
};

template<class D>
struct $CCLightFlash : CCLightFlash, InterfaceBase {
    $CCLightFlash(const $CCLightFlash& c) : CCLightFlash(c) {}
    $CCLightFlash() = delete;

    using ret0 = CCLightFlash*;
    static inline auto address0 = base+0x295870;

    dupable static ret0 create() {
        return reinterpret_cast<ret0(*)(CCLightFlash*)>(address0)();
    }

    using ret1 = void;
    static inline auto address1 = base+0x295900;

    dupable ret1 playEffect(cocos2d::CCPoint p0,cocos2d::_ccColor3B p1,float p2,float p3,float p4,float p5,float p6,float p7,float p8,float p9,float p10,float p11,float p12,float p13,float p14,float p15,int p16,bool p17,bool p18,float p19) {
        return reinterpret_cast<ret1(*)(CCLightFlash*, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float)>(address1)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCLightFlash*))(&$CCLightFlash::create) != (ret0(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::create)));
        }

        if constexpr((ret1(*)(CCLightFlash*, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float))(&$CCLightFlash::playEffect) != (ret1(D::*)(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float))(&D::playEffect)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float))(&D::playEffect)));
        }

        return true;
    }
};

template<class D>
struct $SliderThumb : SliderThumb, InterfaceBase {
    $SliderThumb(const $SliderThumb& c) : SliderThumb(c) {}
    $SliderThumb() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x18ce80;

    dupable ret0 getValue() {
        return reinterpret_cast<ret0(*)(SliderThumb*)>(address0)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SliderThumb*))(&$SliderThumb::getValue) != (ret0(D::*)())(&D::getValue)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::getValue)));
        }

        return true;
    }
};

template<class D>
struct $GameStatsManager : GameStatsManager, InterfaceBase {
    $GameStatsManager(const $GameStatsManager& c) : GameStatsManager(c) {}
    $GameStatsManager() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x43600;

    dupable ret0 awardCurrencyForLevel(GJGameLevel* p0) {
        return reinterpret_cast<ret0(*)(GameStatsManager*, GJGameLevel*)>(address0)(this, p0);
    }

    using ret1 = void;
    static inline auto address1 = base+0x43c60;

    dupable ret1 awardDiamondsForLevel(GJGameLevel* p0) {
        return reinterpret_cast<ret1(*)(GameStatsManager*, GJGameLevel*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x4b1e0;

    dupable ret2 awardSecretKey() {
        return reinterpret_cast<ret2(*)(GameStatsManager*)>(address2)(this);
    }

    using ret3 = void;
    static inline auto address3 = base+0x429f0;

    dupable ret3 getSecretCoinKey(char const* p0) {
        return reinterpret_cast<ret3(*)(GameStatsManager*, char const*)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x3d310;

    dupable ret4 getStat(char const* p0) {
        return reinterpret_cast<ret4(*)(GameStatsManager*, char const*)>(address4)(this, p0);
    }

    using ret5 = void;
    static inline auto address5 = base+0x42730;

    dupable ret5 hasPendingUserCoin(char const* p0) {
        return reinterpret_cast<ret5(*)(GameStatsManager*, char const*)>(address5)(this, p0);
    }

    using ret6 = void;
    static inline auto address6 = base+0x40730;

    dupable ret6 hasSecretCoin(char const* p0) {
        return reinterpret_cast<ret6(*)(GameStatsManager*, char const*)>(address6)(this, p0);
    }

    using ret7 = void;
    static inline auto address7 = base+0x427e0;

    dupable ret7 hasUserCoin(char const* p0) {
        return reinterpret_cast<ret7(*)(GameStatsManager*, char const*)>(address7)(this, p0);
    }

    using ret8 = void;
    static inline auto address8 = base+0x3d6d0;

    dupable ret8 incrementStat(char const* p0) {
        return reinterpret_cast<ret8(*)(GameStatsManager*, char const*)>(address8)(this, p0);
    }

    using ret9 = void;
    static inline auto address9 = base+0x3d6e0;

    dupable ret9 incrementStat(char const* p0,int p1) {
        return reinterpret_cast<ret9(*)(GameStatsManager*, char const*, int)>(address9)(this, p0, p1);
    }

    using ret10 = void;
    static inline auto address10 = base+0x38f20;

    dupable ret10 sharedState() {
        return reinterpret_cast<ret10(*)(GameStatsManager*)>(address10)(this);
    }

    using ret11 = void;
    static inline auto address11 = base+0x42940;

    dupable ret11 storePendingUserCoin(char const* p0) {
        return reinterpret_cast<ret11(*)(GameStatsManager*, char const*)>(address11)(this, p0);
    }

    using ret12 = void;
    static inline auto address12 = base+0x42a10;

    dupable ret12 storeSecretCoin(char const* p0) {
        return reinterpret_cast<ret12(*)(GameStatsManager*, char const*)>(address12)(this, p0);
    }

    using ret13 = void;
    static inline auto address13 = base+0x42890;

    dupable ret13 storeUserCoin(char const* p0) {
        return reinterpret_cast<ret13(*)(GameStatsManager*, char const*)>(address13)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(GameStatsManager*, GJGameLevel*))(&$GameStatsManager::awardCurrencyForLevel) != (ret0(D::*)(GJGameLevel*))(&D::awardCurrencyForLevel)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(GJGameLevel*))(&D::awardCurrencyForLevel)));
        }

        if constexpr((ret1(*)(GameStatsManager*, GJGameLevel*))(&$GameStatsManager::awardDiamondsForLevel) != (ret1(D::*)(GJGameLevel*))(&D::awardDiamondsForLevel)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(GJGameLevel*))(&D::awardDiamondsForLevel)));
        }

        if constexpr((ret2(*)(GameStatsManager*))(&$GameStatsManager::awardSecretKey) != (ret2(D::*)())(&D::awardSecretKey)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::awardSecretKey)));
        }

        if constexpr((ret3(*)(GameStatsManager*, char const*))(&$GameStatsManager::getSecretCoinKey) != (ret3(D::*)(char const*))(&D::getSecretCoinKey)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(char const*))(&D::getSecretCoinKey)));
        }

        if constexpr((ret4(*)(GameStatsManager*, char const*))(&$GameStatsManager::getStat) != (ret4(D::*)(char const*))(&D::getStat)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(char const*))(&D::getStat)));
        }

        if constexpr((ret5(*)(GameStatsManager*, char const*))(&$GameStatsManager::hasPendingUserCoin) != (ret5(D::*)(char const*))(&D::hasPendingUserCoin)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)(char const*))(&D::hasPendingUserCoin)));
        }

        if constexpr((ret6(*)(GameStatsManager*, char const*))(&$GameStatsManager::hasSecretCoin) != (ret6(D::*)(char const*))(&D::hasSecretCoin)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)(char const*))(&D::hasSecretCoin)));
        }

        if constexpr((ret7(*)(GameStatsManager*, char const*))(&$GameStatsManager::hasUserCoin) != (ret7(D::*)(char const*))(&D::hasUserCoin)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)(char const*))(&D::hasUserCoin)));
        }

        if constexpr((ret8(*)(GameStatsManager*, char const*))(&$GameStatsManager::incrementStat) != (ret8(D::*)(char const*))(&D::incrementStat)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfNonVirtual((ret8(D::*)(char const*))(&D::incrementStat)));
        }

        if constexpr((ret9(*)(GameStatsManager*, char const*, int))(&$GameStatsManager::incrementStat) != (ret9(D::*)(char const*, int))(&D::incrementStat)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfNonVirtual((ret9(D::*)(char const*, int))(&D::incrementStat)));
        }

        if constexpr((ret10(*)(GameStatsManager*))(&$GameStatsManager::sharedState) != (ret10(D::*)())(&D::sharedState)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfNonVirtual((ret10(D::*)())(&D::sharedState)));
        }

        if constexpr((ret11(*)(GameStatsManager*, char const*))(&$GameStatsManager::storePendingUserCoin) != (ret11(D::*)(char const*))(&D::storePendingUserCoin)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfNonVirtual((ret11(D::*)(char const*))(&D::storePendingUserCoin)));
        }

        if constexpr((ret12(*)(GameStatsManager*, char const*))(&$GameStatsManager::storeSecretCoin) != (ret12(D::*)(char const*))(&D::storeSecretCoin)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfNonVirtual((ret12(D::*)(char const*))(&D::storeSecretCoin)));
        }

        if constexpr((ret13(*)(GameStatsManager*, char const*))(&$GameStatsManager::storeUserCoin) != (ret13(D::*)(char const*))(&D::storeUserCoin)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfNonVirtual((ret13(D::*)(char const*))(&D::storeUserCoin)));
        }

        return true;
    }
};

template<class D>
struct $CCTargetedTouchHandler : CCTargetedTouchHandler, InterfaceBase {
    $CCTargetedTouchHandler(const $CCTargetedTouchHandler& c) : CCTargetedTouchHandler(c) {}
    $CCTargetedTouchHandler() = delete;

    using ret0 = cocos2d::CCTargetedTouchHandler*;
    static inline auto address0 = base+0x248010;

    dupable static ret0 handlerWithDelegate(cocos2d::CCTouchDelegate* p0,int p1,bool p2) {
        return reinterpret_cast<ret0(*)(CCTargetedTouchHandler*, cocos2d::CCTouchDelegate*, int, bool)>(address0)(p0, p1, p2);
    }

    using ret1 = decltype(declval<cocos2d::CCTargetedTouchHandler>().initWithDelegate(declval<cocos2d::CCTouchDelegate*>(), declval<int>(), declval<bool>()));
    static inline auto address1 = base+0x2480f0;

    dupable ret1 initWithDelegate(cocos2d::CCTouchDelegate* p0,int p1,bool p2) {
        return reinterpret_cast<ret1(*)(CCTargetedTouchHandler*, cocos2d::CCTouchDelegate*, int, bool)>(address1)(this, p0, p1, p2);
    }

    using ret2 = void;
    static inline auto address2 = base+0x248180;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address2)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCTargetedTouchHandler*, cocos2d::CCTouchDelegate*, int, bool))(&$CCTargetedTouchHandler::handlerWithDelegate) != (ret0(D::*)(cocos2d::CCTouchDelegate*, int, bool))(&D::handlerWithDelegate)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCTouchDelegate*, int, bool))(&D::handlerWithDelegate)));
        }

        if constexpr((ret1(*)(CCTargetedTouchHandler*, cocos2d::CCTouchDelegate*, int, bool))(&$CCTargetedTouchHandler::initWithDelegate) != (ret1(D::*)(cocos2d::CCTouchDelegate*, int, bool))(&D::initWithDelegate)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)(cocos2d::CCTouchDelegate*, int, bool))(&D::initWithDelegate)));
        }

        if constexpr((ret2(*)(CCTargetedTouchHandler*))(&$CCTargetedTouchHandler::destructor) != (ret2(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::destructor)));
        }

        return true;
    }
};

template<class D>
struct $GJRobotSprite : GJRobotSprite, InterfaceBase {
    $GJRobotSprite(const $GJRobotSprite& c) : GJRobotSprite(c) {}
    $GJRobotSprite() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x34aaf0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = bool;
    static inline auto address1 = base+0x34ad50;

    dupable ret1 init() {
        return reinterpret_cast<ret1(*)(GJRobotSprite*)>(address1)(this);
    }

    using ret2 = void;
    static inline auto address2 = base+0x34bcc0;

    dupable ret2 setOpacity(unsigned char p0) {
        return reinterpret_cast<ret2(*)(GJRobotSprite*, unsigned char)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x34c3b0;

    dupable ret3 hideSecondary() {
        return reinterpret_cast<ret3(*)(GJRobotSprite*)>(address3)(this);
    }

    using ret4 = GJRobotSprite*;
    static inline auto address4 = base+0x34ac00;

    dupable static ret4 create() {
        return reinterpret_cast<ret4(*)(GJRobotSprite*)>(address4)();
    }

    using ret5 = void;
    static inline auto address5 = base+0x34bbd0;

    dupable ret5 updateColor02(cocos2d::_ccColor3B p0) {
        return reinterpret_cast<ret5(*)(GJRobotSprite*, cocos2d::_ccColor3B)>(address5)(this, p0);
    }

    using ret6 = void;
    static inline auto address6 = base+0x34bdd0;

    dupable ret6 updateFrame(int p0) {
        return reinterpret_cast<ret6(*)(GJRobotSprite*, int)>(address6)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(GJRobotSprite*))(&$GJRobotSprite::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(GJRobotSprite*))(&$GJRobotSprite::init) != (ret1(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::init)));
        }

        if constexpr((ret2(*)(GJRobotSprite*, unsigned char))(&$GJRobotSprite::setOpacity) != (ret2(D::*)(unsigned char))(&D::setOpacity)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)(unsigned char))(&D::setOpacity)));
        }

        if constexpr((ret3(*)(GJRobotSprite*))(&$GJRobotSprite::hideSecondary) != (ret3(D::*)())(&D::hideSecondary)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)())(&D::hideSecondary)));
        }

        if constexpr((ret4(*)(GJRobotSprite*))(&$GJRobotSprite::create) != (ret4(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)())(&D::create)));
        }

        if constexpr((ret5(*)(GJRobotSprite*, cocos2d::_ccColor3B))(&$GJRobotSprite::updateColor02) != (ret5(D::*)(cocos2d::_ccColor3B))(&D::updateColor02)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)(cocos2d::_ccColor3B))(&D::updateColor02)));
        }

        if constexpr((ret6(*)(GJRobotSprite*, int))(&$GJRobotSprite::updateFrame) != (ret6(D::*)(int))(&D::updateFrame)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)(int))(&D::updateFrame)));
        }

        return true;
    }
};

template<class D>
struct $CCStandardTouchHandler : CCStandardTouchHandler, InterfaceBase {
    $CCStandardTouchHandler(const $CCStandardTouchHandler& c) : CCStandardTouchHandler(c) {}
    $CCStandardTouchHandler() = delete;

    using ret0 = cocos2d::CCStandardTouchHandler*;
    static inline auto address0 = base+0x247f30;

    dupable static ret0 handlerWithDelegate(cocos2d::CCTouchDelegate* p0,int p1) {
        return reinterpret_cast<ret0(*)(CCStandardTouchHandler*, cocos2d::CCTouchDelegate*, int)>(address0)(p0, p1);
    }

    using ret1 = decltype(declval<cocos2d::CCStandardTouchHandler>().initWithDelegate(declval<cocos2d::CCTouchDelegate*>(), declval<int>()));
    static inline auto address1 = base+0x247ed0;

    dupable ret1 initWithDelegate(cocos2d::CCTouchDelegate* p0,int p1) {
        return reinterpret_cast<ret1(*)(CCStandardTouchHandler*, cocos2d::CCTouchDelegate*, int)>(address1)(this, p0, p1);
    }

    using ret2 = void;
    static inline auto address2 = base+0x2482a0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address2)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCStandardTouchHandler*, cocos2d::CCTouchDelegate*, int))(&$CCStandardTouchHandler::handlerWithDelegate) != (ret0(D::*)(cocos2d::CCTouchDelegate*, int))(&D::handlerWithDelegate)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCTouchDelegate*, int))(&D::handlerWithDelegate)));
        }

        if constexpr((ret1(*)(CCStandardTouchHandler*, cocos2d::CCTouchDelegate*, int))(&$CCStandardTouchHandler::initWithDelegate) != (ret1(D::*)(cocos2d::CCTouchDelegate*, int))(&D::initWithDelegate)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)(cocos2d::CCTouchDelegate*, int))(&D::initWithDelegate)));
        }

        if constexpr((ret2(*)(CCStandardTouchHandler*))(&$CCStandardTouchHandler::destructor) != (ret2(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::destructor)));
        }

        return true;
    }
};

template<class D>
struct $CCMouseDelegate : CCMouseDelegate, InterfaceBase {
    $CCMouseDelegate(const $CCMouseDelegate& c) : CCMouseDelegate(c) {}
    $CCMouseDelegate() = delete;
    static bool _apply() {

        return true;
    }
};

template<class D>
struct $CCSpriteFrameCache : CCSpriteFrameCache, InterfaceBase {
    $CCSpriteFrameCache(const $CCSpriteFrameCache& c) : CCSpriteFrameCache(c) {}
    $CCSpriteFrameCache() = delete;

    using ret0 = decltype(declval<cocos2d::CCSpriteFrameCache>().addSpriteFramesWithFile(declval<char const*>()));
    static inline auto address0 = base+0x199a10;

    dupable ret0 addSpriteFramesWithFile(char const* p0) {
        return reinterpret_cast<ret0(*)(CCSpriteFrameCache*, char const*)>(address0)(this, p0);
    }

    using ret1 = cocos2d::CCSpriteFrameCache*;
    static inline auto address1 = base+0x198970;

    dupable static ret1 sharedSpriteFrameCache() {
        return reinterpret_cast<ret1(*)(CCSpriteFrameCache*)>(address1)();
    }

    using ret2 = decltype(declval<cocos2d::CCSpriteFrameCache>().spriteFrameByName(declval<char const*>()));
    static inline auto address2 = base+0x19a7e0;

    dupable ret2 spriteFrameByName(char const* p0) {
        return reinterpret_cast<ret2(*)(CCSpriteFrameCache*, char const*)>(address2)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCSpriteFrameCache*, char const*))(&$CCSpriteFrameCache::addSpriteFramesWithFile) != (ret0(D::*)(char const*))(&D::addSpriteFramesWithFile)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(char const*))(&D::addSpriteFramesWithFile)));
        }

        if constexpr((ret1(*)(CCSpriteFrameCache*))(&$CCSpriteFrameCache::sharedSpriteFrameCache) != (ret1(D::*)())(&D::sharedSpriteFrameCache)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::sharedSpriteFrameCache)));
        }

        if constexpr((ret2(*)(CCSpriteFrameCache*, char const*))(&$CCSpriteFrameCache::spriteFrameByName) != (ret2(D::*)(char const*))(&D::spriteFrameByName)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(char const*))(&D::spriteFrameByName)));
        }

        return true;
    }
};

template<class D>
struct $FLAlertLayer : FLAlertLayer, InterfaceBase {
    $FLAlertLayer(const $FLAlertLayer& c) : FLAlertLayer(c) {}
    $FLAlertLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x25db60;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x25f350;

    dupable ret1 onEnter() {
        return reinterpret_cast<ret1(*)(FLAlertLayer*)>(address1)(this);
    }

    using ret2 = bool;
    static inline auto address2 = base+0x25ee40;

    dupable ret2 ccTouchBegan(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret2(*)(FLAlertLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address2)(this, p0, p1);
    }

    using ret3 = void;
    static inline auto address3 = base+0x25f0a0;

    dupable ret3 ccTouchMoved(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret3(*)(FLAlertLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address3)(this, p0, p1);
    }

    using ret4 = void;
    static inline auto address4 = base+0x25ef60;

    dupable ret4 ccTouchEnded(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret4(*)(FLAlertLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address4)(this, p0, p1);
    }

    using ret5 = void;
    static inline auto address5 = base+0x25f020;

    dupable ret5 ccTouchCancelled(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret5(*)(FLAlertLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address5)(this, p0, p1);
    }

    using ret6 = void;
    static inline auto address6 = base+0x25f2e0;

    dupable ret6 registerWithTouchDispatcher() {
        return reinterpret_cast<ret6(*)(FLAlertLayer*)>(address6)(this);
    }

    using ret7 = void;
    static inline auto address7 = base+0x25ed90;

    dupable ret7 keyBackClicked() {
        return reinterpret_cast<ret7(*)(FLAlertLayer*)>(address7)(this);
    }

    using ret8 = void;
    static inline auto address8 = base+0x25ece0;

    dupable ret8 keyDown(cocos2d::enumKeyCodes p0) {
        return reinterpret_cast<ret8(*)(FLAlertLayer*, cocos2d::enumKeyCodes)>(address8)(this, p0);
    }

    using ret9 = void;
    static inline auto address9 = base+0x25f120;

    dupable ret9 show() {
        return reinterpret_cast<ret9(*)(FLAlertLayer*)>(address9)(this);
    }

    using ret10 = bool;
    static inline auto address10 = base+0x25e1b0;

    dupable ret10 init(FLAlertLayerProtocol* p0,char const* p1,gd::string p2,char const* p3,char const* p4,float p5,bool p6,float p7) {
        return reinterpret_cast<ret10(*)(FLAlertLayer*, FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float)>(address10)(this, p0, p1, p2, p3, p4, p5, p6, p7);
    }

    using ret12 = FLAlertLayer*;
    static inline auto address12 = base+0x25e0e0;

    dupable static ret12 create(FLAlertLayerProtocol* p0,char const* p1,gd::string p2,char const* p3,char const* p4,float p5) {
        return reinterpret_cast<ret12(*)(FLAlertLayer*, FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float)>(address12)(p0, p1, p2, p3, p4, p5);
    }

    using ret13 = FLAlertLayer*;
    static inline auto address13 = base+0x25dec0;

    dupable static ret13 create(FLAlertLayerProtocol* p0,char const* p1,gd::string p2,char const* p3,char const* p4,float p5,bool p6,float p7) {
        return reinterpret_cast<ret13(*)(FLAlertLayer*, FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float)>(address13)(p0, p1, p2, p3, p4, p5, p6, p7);
    }
    static bool _apply() {

        if constexpr((ret0(*)(FLAlertLayer*))(&$FLAlertLayer::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(FLAlertLayer*))(&$FLAlertLayer::onEnter) != (ret1(D::*)())(&D::onEnter)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::onEnter)));
        }

        if constexpr((ret2(*)(FLAlertLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$FLAlertLayer::ccTouchBegan) != (ret2(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchBegan)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchBegan)));
        }

        if constexpr((ret3(*)(FLAlertLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$FLAlertLayer::ccTouchMoved) != (ret3(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchMoved)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchMoved)));
        }

        if constexpr((ret4(*)(FLAlertLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$FLAlertLayer::ccTouchEnded) != (ret4(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchEnded)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchEnded)));
        }

        if constexpr((ret5(*)(FLAlertLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$FLAlertLayer::ccTouchCancelled) != (ret5(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchCancelled)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchCancelled)));
        }

        if constexpr((ret6(*)(FLAlertLayer*))(&$FLAlertLayer::registerWithTouchDispatcher) != (ret6(D::*)())(&D::registerWithTouchDispatcher)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)())(&D::registerWithTouchDispatcher)));
        }

        if constexpr((ret7(*)(FLAlertLayer*))(&$FLAlertLayer::keyBackClicked) != (ret7(D::*)())(&D::keyBackClicked)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)())(&D::keyBackClicked)));
        }

        if constexpr((ret8(*)(FLAlertLayer*, cocos2d::enumKeyCodes))(&$FLAlertLayer::keyDown) != (ret8(D::*)(cocos2d::enumKeyCodes))(&D::keyDown)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)(cocos2d::enumKeyCodes))(&D::keyDown)));
        }

        if constexpr((ret9(*)(FLAlertLayer*))(&$FLAlertLayer::show) != (ret9(D::*)())(&D::show)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfVirtual((ret9(D::*)())(&D::show)));
        }

        if constexpr((ret10(*)(FLAlertLayer*, FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float))(&$FLAlertLayer::init) != (ret10(D::*)(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float))(&D::init)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfNonVirtual((ret10(D::*)(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float))(&D::init)));
        }

        if constexpr((ret12(*)(FLAlertLayer*, FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float))(&$FLAlertLayer::create) != (ret12(D::*)(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float))(&D::create)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfNonVirtual((ret12(D::*)(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float))(&D::create)));
        }

        if constexpr((ret13(*)(FLAlertLayer*, FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float))(&$FLAlertLayer::create) != (ret13(D::*)(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float))(&D::create)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfNonVirtual((ret13(D::*)(FLAlertLayerProtocol*, char const*, gd::string, char const*, char const*, float, bool, float))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCSpriteBatchNode : CCSpriteBatchNode, InterfaceBase {
    $CCSpriteBatchNode(const $CCSpriteBatchNode& c) : CCSpriteBatchNode(c) {}
    $CCSpriteBatchNode() = delete;

    using ret0 = cocos2d::CCSpriteBatchNode*;
    static inline auto address0 = base+0xbb540;

    dupable static ret0 create(char const* p0,unsigned int p1) {
        return reinterpret_cast<ret0(*)(CCSpriteBatchNode*, char const*, unsigned int)>(address0)(p0, p1);
    }

    using ret1 = decltype(declval<cocos2d::CCSpriteBatchNode>().createWithTexture(declval<cocos2d::CCTexture2D*>(), declval<unsigned int>()));
    static inline auto address1 = base+0xbb310;

    dupable static ret1 createWithTexture(cocos2d::CCTexture2D* p0,unsigned int p1) {
        return reinterpret_cast<ret1(*)(CCSpriteBatchNode*, cocos2d::CCTexture2D*, unsigned int)>(address1)(p0, p1);
    }

    using ret2 = decltype(declval<cocos2d::CCSpriteBatchNode>().getUsedAtlasCapacity());
    static inline auto address2 = base+0xbc6b0;

    dupable ret2 getUsedAtlasCapacity() {
        return reinterpret_cast<ret2(*)(CCSpriteBatchNode*)>(address2)(this);
    }

    using ret3 = decltype(declval<cocos2d::CCSpriteBatchNode>().increaseAtlasCapacity(declval<unsigned int>()));
    static inline auto address3 = base+0xbc670;

    dupable ret3 increaseAtlasCapacity(unsigned int p0) {
        return reinterpret_cast<ret3(*)(CCSpriteBatchNode*, unsigned int)>(address3)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCSpriteBatchNode*, char const*, unsigned int))(&$CCSpriteBatchNode::create) != (ret0(D::*)(char const*, unsigned int))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(char const*, unsigned int))(&D::create)));
        }

        if constexpr((ret1(*)(CCSpriteBatchNode*, cocos2d::CCTexture2D*, unsigned int))(&$CCSpriteBatchNode::createWithTexture) != (ret1(D::*)(cocos2d::CCTexture2D*, unsigned int))(&D::createWithTexture)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCTexture2D*, unsigned int))(&D::createWithTexture)));
        }

        if constexpr((ret2(*)(CCSpriteBatchNode*))(&$CCSpriteBatchNode::getUsedAtlasCapacity) != (ret2(D::*)())(&D::getUsedAtlasCapacity)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::getUsedAtlasCapacity)));
        }

        if constexpr((ret3(*)(CCSpriteBatchNode*, unsigned int))(&$CCSpriteBatchNode::increaseAtlasCapacity) != (ret3(D::*)(unsigned int))(&D::increaseAtlasCapacity)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(unsigned int))(&D::increaseAtlasCapacity)));
        }

        return true;
    }
};

template<class D>
struct $CCFadeOut : CCFadeOut, InterfaceBase {
    $CCFadeOut(const $CCFadeOut& c) : CCFadeOut(c) {}
    $CCFadeOut() = delete;

    using ret0 = cocos2d::CCFadeOut*;
    static inline auto address0 = base+0x1f7d80;

    dupable static ret0 create(float p0) {
        return reinterpret_cast<ret0(*)(CCFadeOut*, float)>(address0)(p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCFadeOut*, float))(&$CCFadeOut::create) != (ret0(D::*)(float))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(float))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $AchievementManager : AchievementManager, InterfaceBase {
    $AchievementManager(const $AchievementManager& c) : AchievementManager(c) {}
    $AchievementManager() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x434d60;

    dupable ret0 getAllAchievements() {
        return reinterpret_cast<ret0(*)(AchievementManager*)>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x424420;

    dupable ret1 sharedState() {
        return reinterpret_cast<ret1(*)(AchievementManager*)>(address1)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(AchievementManager*))(&$AchievementManager::getAllAchievements) != (ret0(D::*)())(&D::getAllAchievements)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::getAllAchievements)));
        }

        if constexpr((ret1(*)(AchievementManager*))(&$AchievementManager::sharedState) != (ret1(D::*)())(&D::sharedState)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::sharedState)));
        }

        return true;
    }
};

template<class D>
struct $CCSet : CCSet, InterfaceBase {
    $CCSet(const $CCSet& c) : CCSet(c) {}
    $CCSet() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x45ad80;

    dupable void constructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x45b050;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address1)(this);
    }

    using ret2 = decltype(declval<cocos2d::CCSet>().acceptVisitor(declval<cocos2d::CCDataVisitor&>()));
    static inline auto address2 = base+0x45b090;

    dupable ret2 acceptVisitor(cocos2d::CCDataVisitor& p0) {
        return reinterpret_cast<ret2(*)(CCSet*, cocos2d::CCDataVisitor&)>(address2)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCSet*))(&$CCSet::constructor) != (ret0(D::*)())(&D::constructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::constructor)));
        }

        if constexpr((ret1(*)(CCSet*))(&$CCSet::destructor) != (ret1(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::destructor)));
        }

        if constexpr((ret2(*)(CCSet*, cocos2d::CCDataVisitor&))(&$CCSet::acceptVisitor) != (ret2(D::*)(cocos2d::CCDataVisitor&))(&D::acceptVisitor)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)(cocos2d::CCDataVisitor&))(&D::acceptVisitor)));
        }

        return true;
    }
};

template<class D>
struct $BoomScrollLayer : BoomScrollLayer, InterfaceBase {
    $BoomScrollLayer(const $BoomScrollLayer& c) : BoomScrollLayer(c) {}
    $BoomScrollLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x1e42f0;

    dupable void constructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(BoomScrollLayer*))(&$BoomScrollLayer::constructor) != (ret0(D::*)())(&D::constructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::constructor)));
        }

        return true;
    }
};

template<class D>
struct $SetupShakePopup : SetupShakePopup, InterfaceBase {
    $SetupShakePopup(const $SetupShakePopup& c) : SetupShakePopup(c) {}
    $SetupShakePopup() = delete;

    using ret0 = SetupShakePopup*;
    static inline auto address0 = base+0x3adc00;

    dupable static ret0 create(EffectGameObject* p0,cocos2d::CCArray* p1) {
        return reinterpret_cast<ret0(*)(SetupShakePopup*, EffectGameObject*, cocos2d::CCArray*)>(address0)(p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SetupShakePopup*, EffectGameObject*, cocos2d::CCArray*))(&$SetupShakePopup::create) != (ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $SetGroupIDLayer : SetGroupIDLayer, InterfaceBase {
    $SetGroupIDLayer(const $SetGroupIDLayer& c) : SetGroupIDLayer(c) {}
    $SetGroupIDLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x1967a0;

    dupable ret0 onNextGroupID1(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret0(*)(SetGroupIDLayer*, cocos2d::CCObject*)>(address0)(this, p0);
    }

    using ret1 = void;
    static inline auto address1 = base+0x197af0;

    dupable ret1 textChanged(CCTextInputNode* p0) {
        return reinterpret_cast<ret1(*)(SetGroupIDLayer*, CCTextInputNode*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x197260;

    dupable ret2 updateGroupIDLabel() {
        return reinterpret_cast<ret2(*)(SetGroupIDLayer*)>(address2)(this);
    }

    using ret3 = void;
    static inline auto address3 = base+0x194410;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address3)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SetGroupIDLayer*, cocos2d::CCObject*))(&$SetGroupIDLayer::onNextGroupID1) != (ret0(D::*)(cocos2d::CCObject*))(&D::onNextGroupID1)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCObject*))(&D::onNextGroupID1)));
        }

        if constexpr((ret1(*)(SetGroupIDLayer*, CCTextInputNode*))(&$SetGroupIDLayer::textChanged) != (ret1(D::*)(CCTextInputNode*))(&D::textChanged)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(CCTextInputNode*))(&D::textChanged)));
        }

        if constexpr((ret2(*)(SetGroupIDLayer*))(&$SetGroupIDLayer::updateGroupIDLabel) != (ret2(D::*)())(&D::updateGroupIDLabel)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::updateGroupIDLabel)));
        }

        if constexpr((ret3(*)(SetGroupIDLayer*))(&$SetGroupIDLayer::destructor) != (ret3(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::destructor)));
        }

        return true;
    }
};

template<class D>
struct $CCSequence : CCSequence, InterfaceBase {
    $CCSequence(const $CCSequence& c) : CCSequence(c) {}
    $CCSequence() = delete;
    static bool _apply() {

        return true;
    }
};

template<class D>
struct $CCScene : CCScene, InterfaceBase {
    $CCScene(const $CCScene& c) : CCScene(c) {}
    $CCScene() = delete;

    using ret0 = cocos2d::CCScene*;
    static inline auto address0 = base+0x13c140;

    dupable static ret0 create() {
        return reinterpret_cast<ret0(*)(CCScene*)>(address0)();
    }

    using ret1 = decltype(declval<cocos2d::CCScene>().getHighestChildZ());
    static inline auto address1 = base+0x13c200;

    dupable ret1 getHighestChildZ() {
        return reinterpret_cast<ret1(*)(CCScene*)>(address1)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCScene*))(&$CCScene::create) != (ret0(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::create)));
        }

        if constexpr((ret1(*)(CCScene*))(&$CCScene::getHighestChildZ) != (ret1(D::*)())(&D::getHighestChildZ)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::getHighestChildZ)));
        }

        return true;
    }
};

template<class D>
struct $CCScaleTo : CCScaleTo, InterfaceBase {
    $CCScaleTo(const $CCScaleTo& c) : CCScaleTo(c) {}
    $CCScaleTo() = delete;

    using ret0 = cocos2d::CCScaleTo*;
    static inline auto address0 = base+0x1f6ff0;

    dupable static ret0 create(float p0,float p1) {
        return reinterpret_cast<ret0(*)(CCScaleTo*, float, float)>(address0)(p0, p1);
    }

    using ret1 = cocos2d::CCScaleTo*;
    static inline auto address1 = base+0x1f70f0;

    dupable static ret1 create(float p0,float p1,float p2) {
        return reinterpret_cast<ret1(*)(CCScaleTo*, float, float, float)>(address1)(p0, p1, p2);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCScaleTo*, float, float))(&$CCScaleTo::create) != (ret0(D::*)(float, float))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(float, float))(&D::create)));
        }

        if constexpr((ret1(*)(CCScaleTo*, float, float, float))(&$CCScaleTo::create) != (ret1(D::*)(float, float, float))(&D::create)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(float, float, float))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $RetryLevelLayer : RetryLevelLayer, InterfaceBase {
    $RetryLevelLayer(const $RetryLevelLayer& c) : RetryLevelLayer(c) {}
    $RetryLevelLayer() = delete;

    using ret0 = RetryLevelLayer*;
    static inline auto address0 = base+0x28dd60;

    dupable static ret0 create() {
        return reinterpret_cast<ret0(*)(RetryLevelLayer*)>(address0)();
    }
    static bool _apply() {

        if constexpr((ret0(*)(RetryLevelLayer*))(&$RetryLevelLayer::create) != (ret0(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCRepeatForever : CCRepeatForever, InterfaceBase {
    $CCRepeatForever(const $CCRepeatForever& c) : CCRepeatForever(c) {}
    $CCRepeatForever() = delete;

    using ret0 = cocos2d::CCRepeatForever*;
    static inline auto address0 = base+0x1f3920;

    dupable static ret0 create(cocos2d::CCActionInterval* p0) {
        return reinterpret_cast<ret0(*)(CCRepeatForever*, cocos2d::CCActionInterval*)>(address0)(p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCRepeatForever*, cocos2d::CCActionInterval*))(&$CCRepeatForever::create) != (ret0(D::*)(cocos2d::CCActionInterval*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCActionInterval*))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $SetupInstantCountPopup : SetupInstantCountPopup, InterfaceBase {
    $SetupInstantCountPopup(const $SetupInstantCountPopup& c) : SetupInstantCountPopup(c) {}
    $SetupInstantCountPopup() = delete;

    using ret0 = SetupInstantCountPopup*;
    static inline auto address0 = base+0x352c10;

    dupable static ret0 create(EffectGameObject* p0,cocos2d::CCArray* p1) {
        return reinterpret_cast<ret0(*)(SetupInstantCountPopup*, EffectGameObject*, cocos2d::CCArray*)>(address0)(p0, p1);
    }

    using ret1 = void;
    static inline auto address1 = base+0x354520;

    dupable ret1 onTargetIDArrow(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret1(*)(SetupInstantCountPopup*, cocos2d::CCObject*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x355270;

    dupable ret2 textChanged(CCTextInputNode* p0) {
        return reinterpret_cast<ret2(*)(SetupInstantCountPopup*, CCTextInputNode*)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x355170;

    dupable ret3 updateTargetID() {
        return reinterpret_cast<ret3(*)(SetupInstantCountPopup*)>(address3)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SetupInstantCountPopup*, EffectGameObject*, cocos2d::CCArray*))(&$SetupInstantCountPopup::create) != (ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)));
        }

        if constexpr((ret1(*)(SetupInstantCountPopup*, cocos2d::CCObject*))(&$SetupInstantCountPopup::onTargetIDArrow) != (ret1(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)));
        }

        if constexpr((ret2(*)(SetupInstantCountPopup*, CCTextInputNode*))(&$SetupInstantCountPopup::textChanged) != (ret2(D::*)(CCTextInputNode*))(&D::textChanged)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(CCTextInputNode*))(&D::textChanged)));
        }

        if constexpr((ret3(*)(SetupInstantCountPopup*))(&$SetupInstantCountPopup::updateTargetID) != (ret3(D::*)())(&D::updateTargetID)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::updateTargetID)));
        }

        return true;
    }
};

template<class D>
struct $AudioEffectsLayer : AudioEffectsLayer, InterfaceBase {
    $AudioEffectsLayer(const $AudioEffectsLayer& c) : AudioEffectsLayer(c) {}
    $AudioEffectsLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x271f40;

    dupable ret0 audioStep(float p0) {
        return reinterpret_cast<ret0(*)(AudioEffectsLayer*, float)>(address0)(this, p0);
    }

    using ret1 = AudioEffectsLayer*;
    static inline auto address1 = base+0x271a00;

    dupable static ret1 create(gd::string p0) {
        return reinterpret_cast<ret1(*)(AudioEffectsLayer*, gd::string)>(address1)(p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x271ee0;

    dupable ret2 resetAudioVars() {
        return reinterpret_cast<ret2(*)(AudioEffectsLayer*)>(address2)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(AudioEffectsLayer*, float))(&$AudioEffectsLayer::audioStep) != (ret0(D::*)(float))(&D::audioStep)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(float))(&D::audioStep)));
        }

        if constexpr((ret1(*)(AudioEffectsLayer*, gd::string))(&$AudioEffectsLayer::create) != (ret1(D::*)(gd::string))(&D::create)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(gd::string))(&D::create)));
        }

        if constexpr((ret2(*)(AudioEffectsLayer*))(&$AudioEffectsLayer::resetAudioVars) != (ret2(D::*)())(&D::resetAudioVars)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::resetAudioVars)));
        }

        return true;
    }
};

template<class D>
struct $CCPoolManager : CCPoolManager, InterfaceBase {
    $CCPoolManager(const $CCPoolManager& c) : CCPoolManager(c) {}
    $CCPoolManager() = delete;

    using ret0 = decltype(declval<cocos2d::CCPoolManager>().pop());
    static inline auto address0 = base+0x214620;

    dupable ret0 pop() {
        return reinterpret_cast<ret0(*)(CCPoolManager*)>(address0)(this);
    }

    using ret1 = cocos2d::CCPoolManager*;
    static inline auto address1 = base+0x2142c0;

    dupable static ret1 sharedPoolManager() {
        return reinterpret_cast<ret1(*)(CCPoolManager*)>(address1)();
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCPoolManager*))(&$CCPoolManager::pop) != (ret0(D::*)())(&D::pop)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::pop)));
        }

        if constexpr((ret1(*)(CCPoolManager*))(&$CCPoolManager::sharedPoolManager) != (ret1(D::*)())(&D::sharedPoolManager)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::sharedPoolManager)));
        }

        return true;
    }
};

template<class D>
struct $CCMenuItemToggler : CCMenuItemToggler, InterfaceBase {
    $CCMenuItemToggler(const $CCMenuItemToggler& c) : CCMenuItemToggler(c) {}
    $CCMenuItemToggler() = delete;

    using ret0 = CCMenuItemToggler*;
    static inline auto address0 = base+0x38400;

    dupable static ret0 create(cocos2d::CCNode* p0,cocos2d::CCNode* p1,cocos2d::CCObject* p2,cocos2d::SEL_MenuHandler p3) {
        return reinterpret_cast<ret0(*)(CCMenuItemToggler*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)>(address0)(p0, p1, p2, p3);
    }

    using ret1 = void;
    static inline auto address1 = base+0x38a40;

    dupable ret1 setSizeMult(float p0) {
        return reinterpret_cast<ret1(*)(CCMenuItemToggler*, float)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x38950;

    dupable ret2 toggle(bool p0) {
        return reinterpret_cast<ret2(*)(CCMenuItemToggler*, bool)>(address2)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCMenuItemToggler*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler))(&$CCMenuItemToggler::create) != (ret0(D::*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler))(&D::create)));
        }

        if constexpr((ret1(*)(CCMenuItemToggler*, float))(&$CCMenuItemToggler::setSizeMult) != (ret1(D::*)(float))(&D::setSizeMult)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(float))(&D::setSizeMult)));
        }

        if constexpr((ret2(*)(CCMenuItemToggler*, bool))(&$CCMenuItemToggler::toggle) != (ret2(D::*)(bool))(&D::toggle)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(bool))(&D::toggle)));
        }

        return true;
    }
};

template<class D>
struct $CCParticleSystemQuad : CCParticleSystemQuad, InterfaceBase {
    $CCParticleSystemQuad(const $CCParticleSystemQuad& c) : CCParticleSystemQuad(c) {}
    $CCParticleSystemQuad() = delete;

    using ret0 = cocos2d::CCParticleSystemQuad*;
    static inline auto address0 = base+0x36b000;

    dupable static ret0 create(char const* p0) {
        return reinterpret_cast<ret0(*)(CCParticleSystemQuad*, char const*)>(address0)(p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCParticleSystemQuad*, char const*))(&$CCParticleSystemQuad::create) != (ret0(D::*)(char const*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(char const*))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCParticleSystem : CCParticleSystem, InterfaceBase {
    $CCParticleSystem(const $CCParticleSystem& c) : CCParticleSystem(c) {}
    $CCParticleSystem() = delete;

    using ret0 = decltype(declval<cocos2d::CCParticleSystem>().resetSystem());
    static inline auto address0 = base+0x46bd50;

    dupable ret0 resetSystem() {
        return reinterpret_cast<ret0(*)(CCParticleSystem*)>(address0)(this);
    }

    using ret1 = decltype(declval<cocos2d::CCParticleSystem>().resumeSystem());
    static inline auto address1 = base+0x46bd40;

    dupable ret1 resumeSystem() {
        return reinterpret_cast<ret1(*)(CCParticleSystem*)>(address1)(this);
    }

    using ret2 = decltype(declval<cocos2d::CCParticleSystem>().stopSystem());
    static inline auto address2 = base+0x46bd10;

    dupable ret2 stopSystem() {
        return reinterpret_cast<ret2(*)(CCParticleSystem*)>(address2)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCParticleSystem*))(&$CCParticleSystem::resetSystem) != (ret0(D::*)())(&D::resetSystem)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::resetSystem)));
        }

        if constexpr((ret1(*)(CCParticleSystem*))(&$CCParticleSystem::resumeSystem) != (ret1(D::*)())(&D::resumeSystem)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::resumeSystem)));
        }

        if constexpr((ret2(*)(CCParticleSystem*))(&$CCParticleSystem::stopSystem) != (ret2(D::*)())(&D::stopSystem)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::stopSystem)));
        }

        return true;
    }
};

template<class D>
struct $EffectGameObject : EffectGameObject, InterfaceBase {
    $EffectGameObject(const $EffectGameObject& c) : EffectGameObject(c) {}
    $EffectGameObject() = delete;

    using ret0 = EffectGameObject*;
    static inline auto address0 = base+0xc9790;

    dupable static ret0 create(char const* p0) {
        return reinterpret_cast<ret0(*)(EffectGameObject*, char const*)>(address0)(p0);
    }

    using ret1 = void;
    static inline auto address1 = base+0xca1f0;

    dupable ret1 getTargetColorIndex() {
        return reinterpret_cast<ret1(*)(EffectGameObject*)>(address1)(this);
    }

    using ret2 = void;
    static inline auto address2 = base+0xc9870;

    dupable ret2 triggerObject(GJBaseGameLayer* p0) {
        return reinterpret_cast<ret2(*)(EffectGameObject*, GJBaseGameLayer*)>(address2)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(EffectGameObject*, char const*))(&$EffectGameObject::create) != (ret0(D::*)(char const*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(char const*))(&D::create)));
        }

        if constexpr((ret1(*)(EffectGameObject*))(&$EffectGameObject::getTargetColorIndex) != (ret1(D::*)())(&D::getTargetColorIndex)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::getTargetColorIndex)));
        }

        if constexpr((ret2(*)(EffectGameObject*, GJBaseGameLayer*))(&$EffectGameObject::triggerObject) != (ret2(D::*)(GJBaseGameLayer*))(&D::triggerObject)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)(GJBaseGameLayer*))(&D::triggerObject)));
        }

        return true;
    }
};

template<class D>
struct $CCLayerRGBA : CCLayerRGBA, InterfaceBase {
    $CCLayerRGBA(const $CCLayerRGBA& c) : CCLayerRGBA(c) {}
    $CCLayerRGBA() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x2738d0;

    dupable void constructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = decltype(declval<cocos2d::CCLayerRGBA>().init());
    static inline auto address1 = base+0x273b40;

    dupable ret1 init() {
        return reinterpret_cast<ret1(*)(CCLayerRGBA*)>(address1)(this);
    }

    using ret2 = decltype(declval<cocos2d::CCLayerRGBA>().getOpacity());
    static inline auto address2 = base+0x273be0;

    dupable ret2 getOpacity() {
        return reinterpret_cast<ret2(*)(CCLayerRGBA*)>(address2)(this);
    }

    using ret3 = decltype(declval<cocos2d::CCLayerRGBA>().getDisplayedOpacity());
    static inline auto address3 = base+0x273c00;

    dupable ret3 getDisplayedOpacity() {
        return reinterpret_cast<ret3(*)(CCLayerRGBA*)>(address3)(this);
    }

    using ret4 = decltype(declval<cocos2d::CCLayerRGBA>().setOpacity(declval<unsigned char>()));
    static inline auto address4 = base+0x273c20;

    dupable ret4 setOpacity(unsigned char p0) {
        return reinterpret_cast<ret4(*)(CCLayerRGBA*, unsigned char)>(address4)(this, p0);
    }

    using ret5 = decltype(declval<cocos2d::CCLayerRGBA>().updateDisplayedOpacity(declval<unsigned char>()));
    static inline auto address5 = base+0x273f20;

    dupable ret5 updateDisplayedOpacity(unsigned char p0) {
        return reinterpret_cast<ret5(*)(CCLayerRGBA*, unsigned char)>(address5)(this, p0);
    }

    using ret6 = decltype(declval<cocos2d::CCLayerRGBA>().isCascadeOpacityEnabled());
    static inline auto address6 = base+0x2741f0;

    dupable ret6 isCascadeOpacityEnabled() {
        return reinterpret_cast<ret6(*)(CCLayerRGBA*)>(address6)(this);
    }

    using ret7 = decltype(declval<cocos2d::CCLayerRGBA>().setCascadeOpacityEnabled(declval<bool>()));
    static inline auto address7 = base+0x274210;

    dupable ret7 setCascadeOpacityEnabled(bool p0) {
        return reinterpret_cast<ret7(*)(CCLayerRGBA*, bool)>(address7)(this, p0);
    }

    using ret8 = decltype(declval<cocos2d::CCLayerRGBA>().getColor());
    static inline auto address8 = base+0x273d60;

    dupable ret8 getColor() {
        return reinterpret_cast<ret8(*)(CCLayerRGBA*)>(address8)(this);
    }

    using ret9 = decltype(declval<cocos2d::CCLayerRGBA>().getDisplayedColor());
    static inline auto address9 = base+0x273d80;

    dupable ret9 getDisplayedColor() {
        return reinterpret_cast<ret9(*)(CCLayerRGBA*)>(address9)(this);
    }

    using ret10 = decltype(declval<cocos2d::CCLayerRGBA>().setColor(declval<cocos2d::_ccColor3B const&>()));
    static inline auto address10 = base+0x273da0;

    dupable ret10 setColor(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret10(*)(CCLayerRGBA*, cocos2d::_ccColor3B const&)>(address10)(this, p0);
    }

    using ret11 = decltype(declval<cocos2d::CCLayerRGBA>().updateDisplayedColor(declval<cocos2d::_ccColor3B const&>()));
    static inline auto address11 = base+0x2740b0;

    dupable ret11 updateDisplayedColor(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret11(*)(CCLayerRGBA*, cocos2d::_ccColor3B const&)>(address11)(this, p0);
    }

    using ret12 = decltype(declval<cocos2d::CCLayerRGBA>().isCascadeColorEnabled());
    static inline auto address12 = base+0x274230;

    dupable ret12 isCascadeColorEnabled() {
        return reinterpret_cast<ret12(*)(CCLayerRGBA*)>(address12)(this);
    }

    using ret13 = decltype(declval<cocos2d::CCLayerRGBA>().setCascadeColorEnabled(declval<bool>()));
    static inline auto address13 = base+0x274250;

    dupable ret13 setCascadeColorEnabled(bool p0) {
        return reinterpret_cast<ret13(*)(CCLayerRGBA*, bool)>(address13)(this, p0);
    }

    using ret14 = void;
    static inline auto address14 = base+0x273aa0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address14)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCLayerRGBA*))(&$CCLayerRGBA::constructor) != (ret0(D::*)())(&D::constructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::constructor)));
        }

        if constexpr((ret1(*)(CCLayerRGBA*))(&$CCLayerRGBA::init) != (ret1(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::init)));
        }

        if constexpr((ret2(*)(CCLayerRGBA*))(&$CCLayerRGBA::getOpacity) != (ret2(D::*)())(&D::getOpacity)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)())(&D::getOpacity)));
        }

        if constexpr((ret3(*)(CCLayerRGBA*))(&$CCLayerRGBA::getDisplayedOpacity) != (ret3(D::*)())(&D::getDisplayedOpacity)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)())(&D::getDisplayedOpacity)));
        }

        if constexpr((ret4(*)(CCLayerRGBA*, unsigned char))(&$CCLayerRGBA::setOpacity) != (ret4(D::*)(unsigned char))(&D::setOpacity)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)(unsigned char))(&D::setOpacity)));
        }

        if constexpr((ret5(*)(CCLayerRGBA*, unsigned char))(&$CCLayerRGBA::updateDisplayedOpacity) != (ret5(D::*)(unsigned char))(&D::updateDisplayedOpacity)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)(unsigned char))(&D::updateDisplayedOpacity)));
        }

        if constexpr((ret6(*)(CCLayerRGBA*))(&$CCLayerRGBA::isCascadeOpacityEnabled) != (ret6(D::*)())(&D::isCascadeOpacityEnabled)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)())(&D::isCascadeOpacityEnabled)));
        }

        if constexpr((ret7(*)(CCLayerRGBA*, bool))(&$CCLayerRGBA::setCascadeOpacityEnabled) != (ret7(D::*)(bool))(&D::setCascadeOpacityEnabled)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)(bool))(&D::setCascadeOpacityEnabled)));
        }

        if constexpr((ret8(*)(CCLayerRGBA*))(&$CCLayerRGBA::getColor) != (ret8(D::*)())(&D::getColor)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)())(&D::getColor)));
        }

        if constexpr((ret9(*)(CCLayerRGBA*))(&$CCLayerRGBA::getDisplayedColor) != (ret9(D::*)())(&D::getDisplayedColor)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfVirtual((ret9(D::*)())(&D::getDisplayedColor)));
        }

        if constexpr((ret10(*)(CCLayerRGBA*, cocos2d::_ccColor3B const&))(&$CCLayerRGBA::setColor) != (ret10(D::*)(cocos2d::_ccColor3B const&))(&D::setColor)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfVirtual((ret10(D::*)(cocos2d::_ccColor3B const&))(&D::setColor)));
        }

        if constexpr((ret11(*)(CCLayerRGBA*, cocos2d::_ccColor3B const&))(&$CCLayerRGBA::updateDisplayedColor) != (ret11(D::*)(cocos2d::_ccColor3B const&))(&D::updateDisplayedColor)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfVirtual((ret11(D::*)(cocos2d::_ccColor3B const&))(&D::updateDisplayedColor)));
        }

        if constexpr((ret12(*)(CCLayerRGBA*))(&$CCLayerRGBA::isCascadeColorEnabled) != (ret12(D::*)())(&D::isCascadeColorEnabled)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfVirtual((ret12(D::*)())(&D::isCascadeColorEnabled)));
        }

        if constexpr((ret13(*)(CCLayerRGBA*, bool))(&$CCLayerRGBA::setCascadeColorEnabled) != (ret13(D::*)(bool))(&D::setCascadeColorEnabled)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfVirtual((ret13(D::*)(bool))(&D::setCascadeColorEnabled)));
        }

        if constexpr((ret14(*)(CCLayerRGBA*))(&$CCLayerRGBA::destructor) != (ret14(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfNonVirtual((ret14(D::*)())(&D::destructor)));
        }

        return true;
    }
};

template<class D>
struct $CCEaseInOut : CCEaseInOut, InterfaceBase {
    $CCEaseInOut(const $CCEaseInOut& c) : CCEaseInOut(c) {}
    $CCEaseInOut() = delete;

    using ret0 = cocos2d::CCEaseInOut*;
    static inline auto address0 = base+0x2a1d80;

    dupable static ret0 create(cocos2d::CCActionInterval* p0,float p1) {
        return reinterpret_cast<ret0(*)(CCEaseInOut*, cocos2d::CCActionInterval*, float)>(address0)(p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCEaseInOut*, cocos2d::CCActionInterval*, float))(&$CCEaseInOut::create) != (ret0(D::*)(cocos2d::CCActionInterval*, float))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCActionInterval*, float))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $GJCommentListLayer : GJCommentListLayer, InterfaceBase {
    $GJCommentListLayer(const $GJCommentListLayer& c) : GJCommentListLayer(c) {}
    $GJCommentListLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x1482a0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = GJCommentListLayer*;
    static inline auto address1 = base+0x147d00;

    dupable static ret1 create(BoomListView* p0,char const* p1,cocos2d::_ccColor4B p2,float p3,float p4,bool p5) {
        return reinterpret_cast<ret1(*)(GJCommentListLayer*, BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool)>(address1)(p0, p1, p2, p3, p4, p5);
    }
    static bool _apply() {

        if constexpr((ret0(*)(GJCommentListLayer*))(&$GJCommentListLayer::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(GJCommentListLayer*, BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool))(&$GJCommentListLayer::create) != (ret1(D::*)(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool))(&D::create)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(BoomListView*, char const*, cocos2d::_ccColor4B, float, float, bool))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCCopying : CCCopying, InterfaceBase {
    $CCCopying(const $CCCopying& c) : CCCopying(c) {}
    $CCCopying() = delete;
    static bool _apply() {

        return true;
    }
};

template<class D>
struct $CCKeyboardHandler : CCKeyboardHandler, InterfaceBase {
    $CCKeyboardHandler(const $CCKeyboardHandler& c) : CCKeyboardHandler(c) {}
    $CCKeyboardHandler() = delete;

    using ret0 = cocos2d::CCKeyboardHandler*;
    static inline auto address0 = base+0x242030;

    dupable static ret0 handlerWithDelegate(cocos2d::CCKeyboardDelegate* p0) {
        return reinterpret_cast<ret0(*)(CCKeyboardHandler*, cocos2d::CCKeyboardDelegate*)>(address0)(p0);
    }

    using ret1 = decltype(declval<cocos2d::CCKeyboardHandler>().initWithDelegate(declval<cocos2d::CCKeyboardDelegate*>()));
    static inline auto address1 = base+0x241ff0;

    dupable ret1 initWithDelegate(cocos2d::CCKeyboardDelegate* p0) {
        return reinterpret_cast<ret1(*)(CCKeyboardHandler*, cocos2d::CCKeyboardDelegate*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x241e90;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address2)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCKeyboardHandler*, cocos2d::CCKeyboardDelegate*))(&$CCKeyboardHandler::handlerWithDelegate) != (ret0(D::*)(cocos2d::CCKeyboardDelegate*))(&D::handlerWithDelegate)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCKeyboardDelegate*))(&D::handlerWithDelegate)));
        }

        if constexpr((ret1(*)(CCKeyboardHandler*, cocos2d::CCKeyboardDelegate*))(&$CCKeyboardHandler::initWithDelegate) != (ret1(D::*)(cocos2d::CCKeyboardDelegate*))(&D::initWithDelegate)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)(cocos2d::CCKeyboardDelegate*))(&D::initWithDelegate)));
        }

        if constexpr((ret2(*)(CCKeyboardHandler*))(&$CCKeyboardHandler::destructor) != (ret2(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::destructor)));
        }

        return true;
    }
};

template<class D>
struct $CCNodeRGBA : CCNodeRGBA, InterfaceBase {
    $CCNodeRGBA(const $CCNodeRGBA& c) : CCNodeRGBA(c) {}
    $CCNodeRGBA() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x124b30;

    dupable void constructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x124bb0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address1)(this);
    }

    using ret2 = decltype(declval<cocos2d::CCNodeRGBA>().init());
    static inline auto address2 = base+0x124bf0;

    dupable ret2 init() {
        return reinterpret_cast<ret2(*)(CCNodeRGBA*)>(address2)(this);
    }

    using ret3 = decltype(declval<cocos2d::CCNodeRGBA>().getOpacity());
    static inline auto address3 = base+0x124cd0;

    dupable ret3 getOpacity() {
        return reinterpret_cast<ret3(*)(CCNodeRGBA*)>(address3)(this);
    }

    using ret4 = decltype(declval<cocos2d::CCNodeRGBA>().getDisplayedOpacity());
    static inline auto address4 = base+0x124cf0;

    dupable ret4 getDisplayedOpacity() {
        return reinterpret_cast<ret4(*)(CCNodeRGBA*)>(address4)(this);
    }

    using ret5 = decltype(declval<cocos2d::CCNodeRGBA>().setOpacity(declval<GLubyte>()));
    static inline auto address5 = base+0x124d10;

    dupable ret5 setOpacity(GLubyte p0) {
        return reinterpret_cast<ret5(*)(CCNodeRGBA*, GLubyte)>(address5)(this, p0);
    }

    using ret6 = decltype(declval<cocos2d::CCNodeRGBA>().updateDisplayedOpacity(declval<GLubyte>()));
    static inline auto address6 = base+0x124e50;

    dupable ret6 updateDisplayedOpacity(GLubyte p0) {
        return reinterpret_cast<ret6(*)(CCNodeRGBA*, GLubyte)>(address6)(this, p0);
    }

    using ret7 = decltype(declval<cocos2d::CCNodeRGBA>().isCascadeOpacityEnabled());
    static inline auto address7 = base+0x124fe0;

    dupable ret7 isCascadeOpacityEnabled() {
        return reinterpret_cast<ret7(*)(CCNodeRGBA*)>(address7)(this);
    }

    using ret8 = decltype(declval<cocos2d::CCNodeRGBA>().setCascadeOpacityEnabled(declval<bool>()));
    static inline auto address8 = base+0x125000;

    dupable ret8 setCascadeOpacityEnabled(bool p0) {
        return reinterpret_cast<ret8(*)(CCNodeRGBA*, bool)>(address8)(this, p0);
    }

    using ret9 = decltype(declval<cocos2d::CCNodeRGBA>().getColor());
    static inline auto address9 = base+0x125020;

    dupable ret9 getColor() {
        return reinterpret_cast<ret9(*)(CCNodeRGBA*)>(address9)(this);
    }

    using ret10 = decltype(declval<cocos2d::CCNodeRGBA>().getDisplayedColor());
    static inline auto address10 = base+0x125040;

    dupable ret10 getDisplayedColor() {
        return reinterpret_cast<ret10(*)(CCNodeRGBA*)>(address10)(this);
    }

    using ret11 = decltype(declval<cocos2d::CCNodeRGBA>().setColor(declval<cocos2d::_ccColor3B const&>()));
    static inline auto address11 = base+0x125060;

    dupable ret11 setColor(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret11(*)(CCNodeRGBA*, cocos2d::_ccColor3B const&)>(address11)(this, p0);
    }

    using ret12 = decltype(declval<cocos2d::CCNodeRGBA>().updateDisplayedColor(declval<cocos2d::_ccColor3B const&>()));
    static inline auto address12 = base+0x1251e0;

    dupable ret12 updateDisplayedColor(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret12(*)(CCNodeRGBA*, cocos2d::_ccColor3B const&)>(address12)(this, p0);
    }

    using ret13 = decltype(declval<cocos2d::CCNodeRGBA>().isCascadeColorEnabled());
    static inline auto address13 = base+0x125320;

    dupable ret13 isCascadeColorEnabled() {
        return reinterpret_cast<ret13(*)(CCNodeRGBA*)>(address13)(this);
    }

    using ret14 = decltype(declval<cocos2d::CCNodeRGBA>().setCascadeColorEnabled(declval<bool>()));
    static inline auto address14 = base+0x125340;

    dupable ret14 setCascadeColorEnabled(bool p0) {
        return reinterpret_cast<ret14(*)(CCNodeRGBA*, bool)>(address14)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCNodeRGBA*))(&$CCNodeRGBA::constructor) != (ret0(D::*)())(&D::constructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::constructor)));
        }

        if constexpr((ret1(*)(CCNodeRGBA*))(&$CCNodeRGBA::destructor) != (ret1(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::destructor)));
        }

        if constexpr((ret2(*)(CCNodeRGBA*))(&$CCNodeRGBA::init) != (ret2(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)())(&D::init)));
        }

        if constexpr((ret3(*)(CCNodeRGBA*))(&$CCNodeRGBA::getOpacity) != (ret3(D::*)())(&D::getOpacity)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)())(&D::getOpacity)));
        }

        if constexpr((ret4(*)(CCNodeRGBA*))(&$CCNodeRGBA::getDisplayedOpacity) != (ret4(D::*)())(&D::getDisplayedOpacity)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)())(&D::getDisplayedOpacity)));
        }

        if constexpr((ret5(*)(CCNodeRGBA*, GLubyte))(&$CCNodeRGBA::setOpacity) != (ret5(D::*)(GLubyte))(&D::setOpacity)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)(GLubyte))(&D::setOpacity)));
        }

        if constexpr((ret6(*)(CCNodeRGBA*, GLubyte))(&$CCNodeRGBA::updateDisplayedOpacity) != (ret6(D::*)(GLubyte))(&D::updateDisplayedOpacity)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)(GLubyte))(&D::updateDisplayedOpacity)));
        }

        if constexpr((ret7(*)(CCNodeRGBA*))(&$CCNodeRGBA::isCascadeOpacityEnabled) != (ret7(D::*)())(&D::isCascadeOpacityEnabled)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)())(&D::isCascadeOpacityEnabled)));
        }

        if constexpr((ret8(*)(CCNodeRGBA*, bool))(&$CCNodeRGBA::setCascadeOpacityEnabled) != (ret8(D::*)(bool))(&D::setCascadeOpacityEnabled)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)(bool))(&D::setCascadeOpacityEnabled)));
        }

        if constexpr((ret9(*)(CCNodeRGBA*))(&$CCNodeRGBA::getColor) != (ret9(D::*)())(&D::getColor)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfVirtual((ret9(D::*)())(&D::getColor)));
        }

        if constexpr((ret10(*)(CCNodeRGBA*))(&$CCNodeRGBA::getDisplayedColor) != (ret10(D::*)())(&D::getDisplayedColor)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfVirtual((ret10(D::*)())(&D::getDisplayedColor)));
        }

        if constexpr((ret11(*)(CCNodeRGBA*, cocos2d::_ccColor3B const&))(&$CCNodeRGBA::setColor) != (ret11(D::*)(cocos2d::_ccColor3B const&))(&D::setColor)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfVirtual((ret11(D::*)(cocos2d::_ccColor3B const&))(&D::setColor)));
        }

        if constexpr((ret12(*)(CCNodeRGBA*, cocos2d::_ccColor3B const&))(&$CCNodeRGBA::updateDisplayedColor) != (ret12(D::*)(cocos2d::_ccColor3B const&))(&D::updateDisplayedColor)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfVirtual((ret12(D::*)(cocos2d::_ccColor3B const&))(&D::updateDisplayedColor)));
        }

        if constexpr((ret13(*)(CCNodeRGBA*))(&$CCNodeRGBA::isCascadeColorEnabled) != (ret13(D::*)())(&D::isCascadeColorEnabled)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfVirtual((ret13(D::*)())(&D::isCascadeColorEnabled)));
        }

        if constexpr((ret14(*)(CCNodeRGBA*, bool))(&$CCNodeRGBA::setCascadeColorEnabled) != (ret14(D::*)(bool))(&D::setCascadeColorEnabled)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfVirtual((ret14(D::*)(bool))(&D::setCascadeColorEnabled)));
        }

        return true;
    }
};

template<class D>
struct $ZipUtils : ZipUtils, InterfaceBase {
    $ZipUtils(const $ZipUtils& c) : ZipUtils(c) {}
    $ZipUtils() = delete;

    using ret0 = decltype(declval<cocos2d::ZipUtils>().compressString(declval<gd::string>(), declval<bool>(), declval<int>()));
    static inline auto address0 = base+0xe9a50;

    dupable static ret0 compressString(gd::string p0,bool p1,int p2) {
        return reinterpret_cast<ret0(*)(ZipUtils*, gd::string, bool, int)>(address0)(p0, p1, p2);
    }

    using ret1 = decltype(declval<cocos2d::ZipUtils>().decompressString(declval<gd::string>(), declval<bool>(), declval<int>()));
    static inline auto address1 = base+0xea380;

    dupable static ret1 decompressString(gd::string p0,bool p1,int p2) {
        return reinterpret_cast<ret1(*)(ZipUtils*, gd::string, bool, int)>(address1)(p0, p1, p2);
    }
    static bool _apply() {

        if constexpr((ret0(*)(ZipUtils*, gd::string, bool, int))(&$ZipUtils::compressString) != (ret0(D::*)(gd::string, bool, int))(&D::compressString)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(gd::string, bool, int))(&D::compressString)));
        }

        if constexpr((ret1(*)(ZipUtils*, gd::string, bool, int))(&$ZipUtils::decompressString) != (ret1(D::*)(gd::string, bool, int))(&D::decompressString)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(gd::string, bool, int))(&D::decompressString)));
        }

        return true;
    }
};

template<class D>
struct $CCObject : CCObject, InterfaceBase {
    $CCObject(const $CCObject& c) : CCObject(c) {}
    $CCObject() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x250ca0;

    dupable void constructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = decltype(declval<cocos2d::CCObject>().acceptVisitor(declval<cocos2d::CCDataVisitor&>()));
    static inline auto address1 = base+0x250f30;

    dupable ret1 acceptVisitor(cocos2d::CCDataVisitor& p0) {
        return reinterpret_cast<ret1(*)(CCObject*, cocos2d::CCDataVisitor&)>(address1)(this, p0);
    }

    using ret2 = decltype(declval<cocos2d::CCObject>().autorelease());
    static inline auto address2 = base+0x250ed0;

    dupable ret2 autorelease() {
        return reinterpret_cast<ret2(*)(CCObject*)>(address2)(this);
    }

    using ret3 = decltype(declval<cocos2d::CCObject>().canEncode());
    static inline auto address3 = base+0x250f90;

    dupable ret3 canEncode() {
        return reinterpret_cast<ret3(*)(CCObject*)>(address3)(this);
    }

    using ret4 = decltype(declval<cocos2d::CCObject>().encodeWithCoder(declval<DS_Dictionary*>()));
    static inline auto address4 = base+0x250f70;

    dupable ret4 encodeWithCoder(DS_Dictionary* p0) {
        return reinterpret_cast<ret4(*)(CCObject*, DS_Dictionary*)>(address4)(this, p0);
    }

    using ret5 = decltype(declval<cocos2d::CCObject>().getTag());
    static inline auto address5 = base+0x250f50;

    dupable ret5 getTag() const {
        return reinterpret_cast<ret5(*)(CCObject*)>(address5)(this);
    }

    using ret6 = decltype(declval<cocos2d::CCObject>().isEqual(declval<cocos2d::CCObject const*>()));
    static inline auto address6 = base+0x250f20;

    dupable ret6 isEqual(cocos2d::CCObject const* p0) {
        return reinterpret_cast<ret6(*)(CCObject*, cocos2d::CCObject const*)>(address6)(this, p0);
    }

    using ret7 = decltype(declval<cocos2d::CCObject>().release());
    static inline auto address7 = base+0x250ea0;

    dupable ret7 release() {
        return reinterpret_cast<ret7(*)(CCObject*)>(address7)(this);
    }

    using ret8 = decltype(declval<cocos2d::CCObject>().retain());
    static inline auto address8 = base+0x250ec0;

    dupable ret8 retain() {
        return reinterpret_cast<ret8(*)(CCObject*)>(address8)(this);
    }

    using ret9 = decltype(declval<cocos2d::CCObject>().setTag(declval<int>()));
    static inline auto address9 = base+0x250f60;

    dupable ret9 setTag(int p0) {
        return reinterpret_cast<ret9(*)(CCObject*, int)>(address9)(this, p0);
    }

    using ret10 = void;
    static inline auto address10 = base+0x250d90;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address10)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCObject*))(&$CCObject::constructor) != (ret0(D::*)())(&D::constructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::constructor)));
        }

        if constexpr((ret1(*)(CCObject*, cocos2d::CCDataVisitor&))(&$CCObject::acceptVisitor) != (ret1(D::*)(cocos2d::CCDataVisitor&))(&D::acceptVisitor)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCDataVisitor&))(&D::acceptVisitor)));
        }

        if constexpr((ret2(*)(CCObject*))(&$CCObject::autorelease) != (ret2(D::*)())(&D::autorelease)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::autorelease)));
        }

        if constexpr((ret3(*)(CCObject*))(&$CCObject::canEncode) != (ret3(D::*)())(&D::canEncode)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::canEncode)));
        }

        if constexpr((ret4(*)(CCObject*, DS_Dictionary*))(&$CCObject::encodeWithCoder) != (ret4(D::*)(DS_Dictionary*))(&D::encodeWithCoder)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(DS_Dictionary*))(&D::encodeWithCoder)));
        }

        if constexpr((ret5(*)(CCObject*))(&$CCObject::getTag) != (ret5(D::*)())(&D::getTag)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)())(&D::getTag)));
        }

        if constexpr((ret6(*)(CCObject*, cocos2d::CCObject const*))(&$CCObject::isEqual) != (ret6(D::*)(cocos2d::CCObject const*))(&D::isEqual)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)(cocos2d::CCObject const*))(&D::isEqual)));
        }

        if constexpr((ret7(*)(CCObject*))(&$CCObject::release) != (ret7(D::*)())(&D::release)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)())(&D::release)));
        }

        if constexpr((ret8(*)(CCObject*))(&$CCObject::retain) != (ret8(D::*)())(&D::retain)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfNonVirtual((ret8(D::*)())(&D::retain)));
        }

        if constexpr((ret9(*)(CCObject*, int))(&$CCObject::setTag) != (ret9(D::*)(int))(&D::setTag)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfNonVirtual((ret9(D::*)(int))(&D::setTag)));
        }

        if constexpr((ret10(*)(CCObject*))(&$CCObject::destructor) != (ret10(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfNonVirtual((ret10(D::*)())(&D::destructor)));
        }

        return true;
    }
};

template<class D>
struct $CCNodeContainer : CCNodeContainer, InterfaceBase {
    $CCNodeContainer(const $CCNodeContainer& c) : CCNodeContainer(c) {}
    $CCNodeContainer() = delete;

    using ret0 = CCNodeContainer*;
    static inline auto address0 = base+0xb1090;

    dupable static ret0 create() {
        return reinterpret_cast<ret0(*)(CCNodeContainer*)>(address0)();
    }

    using ret1 = bool;
    static inline auto address1 = base+0xba950;

    dupable ret1 init() {
        return reinterpret_cast<ret1(*)(CCNodeContainer*)>(address1)(this);
    }

    using ret2 = void;
    static inline auto address2 = base+0xba960;

    dupable ret2 visit() {
        return reinterpret_cast<ret2(*)(CCNodeContainer*)>(address2)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCNodeContainer*))(&$CCNodeContainer::create) != (ret0(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::create)));
        }

        if constexpr((ret1(*)(CCNodeContainer*))(&$CCNodeContainer::init) != (ret1(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::init)));
        }

        if constexpr((ret2(*)(CCNodeContainer*))(&$CCNodeContainer::visit) != (ret2(D::*)())(&D::visit)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::visit)));
        }

        return true;
    }
};

template<class D>
struct $SetupAnimationPopup : SetupAnimationPopup, InterfaceBase {
    $SetupAnimationPopup(const $SetupAnimationPopup& c) : SetupAnimationPopup(c) {}
    $SetupAnimationPopup() = delete;

    using ret0 = SetupAnimationPopup*;
    static inline auto address0 = base+0x208b70;

    dupable static ret0 create(EffectGameObject* p0,cocos2d::CCArray* p1) {
        return reinterpret_cast<ret0(*)(SetupAnimationPopup*, EffectGameObject*, cocos2d::CCArray*)>(address0)(p0, p1);
    }

    using ret1 = void;
    static inline auto address1 = base+0x209fc0;

    dupable ret1 onTargetIDArrow(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret1(*)(SetupAnimationPopup*, cocos2d::CCObject*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x20ab30;

    dupable ret2 textChanged(CCTextInputNode* p0) {
        return reinterpret_cast<ret2(*)(SetupAnimationPopup*, CCTextInputNode*)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x20a910;

    dupable ret3 updateTargetID() {
        return reinterpret_cast<ret3(*)(SetupAnimationPopup*)>(address3)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SetupAnimationPopup*, EffectGameObject*, cocos2d::CCArray*))(&$SetupAnimationPopup::create) != (ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)));
        }

        if constexpr((ret1(*)(SetupAnimationPopup*, cocos2d::CCObject*))(&$SetupAnimationPopup::onTargetIDArrow) != (ret1(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)));
        }

        if constexpr((ret2(*)(SetupAnimationPopup*, CCTextInputNode*))(&$SetupAnimationPopup::textChanged) != (ret2(D::*)(CCTextInputNode*))(&D::textChanged)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(CCTextInputNode*))(&D::textChanged)));
        }

        if constexpr((ret3(*)(SetupAnimationPopup*))(&$SetupAnimationPopup::updateTargetID) != (ret3(D::*)())(&D::updateTargetID)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::updateTargetID)));
        }

        return true;
    }
};

template<class D>
struct $CCLayer : CCLayer, InterfaceBase {
    $CCLayer(const $CCLayer& c) : CCLayer(c) {}
    $CCLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x2725b0;

    dupable void constructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = decltype(declval<cocos2d::CCLayer>().ccTouchBegan(declval<cocos2d::CCTouch*>(), declval<cocos2d::CCEvent*>()));
    static inline auto address1 = base+0x2734d0;

    dupable ret1 ccTouchBegan(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret1(*)(CCLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address1)(this, p0, p1);
    }

    using ret2 = decltype(declval<cocos2d::CCLayer>().ccTouchCancelled(declval<cocos2d::CCTouch*>(), declval<cocos2d::CCEvent*>()));
    static inline auto address2 = base+0x273650;

    dupable ret2 ccTouchCancelled(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret2(*)(CCLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address2)(this, p0, p1);
    }

    using ret3 = decltype(declval<cocos2d::CCLayer>().ccTouchEnded(declval<cocos2d::CCTouch*>(), declval<cocos2d::CCEvent*>()));
    static inline auto address3 = base+0x2735d0;

    dupable ret3 ccTouchEnded(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret3(*)(CCLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address3)(this, p0, p1);
    }

    using ret4 = decltype(declval<cocos2d::CCLayer>().ccTouchMoved(declval<cocos2d::CCTouch*>(), declval<cocos2d::CCEvent*>()));
    static inline auto address4 = base+0x273550;

    dupable ret4 ccTouchMoved(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret4(*)(CCLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address4)(this, p0, p1);
    }

    using ret5 = decltype(declval<cocos2d::CCLayer>().ccTouchesBegan(declval<cocos2d::CCSet*>(), declval<cocos2d::CCEvent*>()));
    static inline auto address5 = base+0x2736d0;

    dupable ret5 ccTouchesBegan(cocos2d::CCSet* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret5(*)(CCLayer*, cocos2d::CCSet*, cocos2d::CCEvent*)>(address5)(this, p0, p1);
    }

    using ret6 = decltype(declval<cocos2d::CCLayer>().ccTouchesCancelled(declval<cocos2d::CCSet*>(), declval<cocos2d::CCEvent*>()));
    static inline auto address6 = base+0x273850;

    dupable ret6 ccTouchesCancelled(cocos2d::CCSet* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret6(*)(CCLayer*, cocos2d::CCSet*, cocos2d::CCEvent*)>(address6)(this, p0, p1);
    }

    using ret7 = decltype(declval<cocos2d::CCLayer>().ccTouchesEnded(declval<cocos2d::CCSet*>(), declval<cocos2d::CCEvent*>()));
    static inline auto address7 = base+0x2737d0;

    dupable ret7 ccTouchesEnded(cocos2d::CCSet* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret7(*)(CCLayer*, cocos2d::CCSet*, cocos2d::CCEvent*)>(address7)(this, p0, p1);
    }

    using ret8 = decltype(declval<cocos2d::CCLayer>().ccTouchesMoved(declval<cocos2d::CCSet*>(), declval<cocos2d::CCEvent*>()));
    static inline auto address8 = base+0x273750;

    dupable ret8 ccTouchesMoved(cocos2d::CCSet* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret8(*)(CCLayer*, cocos2d::CCSet*, cocos2d::CCEvent*)>(address8)(this, p0, p1);
    }

    using ret9 = cocos2d::CCLayer*;
    static inline auto address9 = base+0x272a00;

    dupable static ret9 create() {
        return reinterpret_cast<ret9(*)(CCLayer*)>(address9)();
    }

    using ret10 = decltype(declval<cocos2d::CCLayer>().didAccelerate(declval<cocos2d::CCAcceleration*>()));
    static inline auto address10 = base+0x272ea0;

    dupable ret10 didAccelerate(cocos2d::CCAcceleration* p0) {
        return reinterpret_cast<ret10(*)(CCLayer*, cocos2d::CCAcceleration*)>(address10)(this, p0);
    }

    using ret11 = decltype(declval<cocos2d::CCLayer>().getTouchMode());
    static inline auto address11 = base+0x272e10;

    dupable ret11 getTouchMode() {
        return reinterpret_cast<ret11(*)(CCLayer*)>(address11)(this);
    }

    using ret12 = decltype(declval<cocos2d::CCLayer>().getTouchPriority());
    static inline auto address12 = base+0x272e00;

    dupable ret12 getTouchPriority() {
        return reinterpret_cast<ret12(*)(CCLayer*)>(address12)(this);
    }

    using ret13 = decltype(declval<cocos2d::CCLayer>().init());
    static inline auto address13 = base+0x2729a0;

    dupable ret13 init() {
        return reinterpret_cast<ret13(*)(CCLayer*)>(address13)(this);
    }

    using ret14 = decltype(declval<cocos2d::CCLayer>().isAccelerometerEnabled());
    static inline auto address14 = base+0x272e20;

    dupable ret14 isAccelerometerEnabled() {
        return reinterpret_cast<ret14(*)(CCLayer*)>(address14)(this);
    }

    using ret15 = decltype(declval<cocos2d::CCLayer>().isKeyboardEnabled());
    static inline auto address15 = base+0x273010;

    dupable ret15 isKeyboardEnabled() {
        return reinterpret_cast<ret15(*)(CCLayer*)>(address15)(this);
    }

    using ret16 = decltype(declval<cocos2d::CCLayer>().isKeypadEnabled());
    static inline auto address16 = base+0x272f70;

    dupable ret16 isKeypadEnabled() {
        return reinterpret_cast<ret16(*)(CCLayer*)>(address16)(this);
    }

    using ret17 = decltype(declval<cocos2d::CCLayer>().isMouseEnabled());
    static inline auto address17 = base+0x273090;

    dupable ret17 isMouseEnabled() {
        return reinterpret_cast<ret17(*)(CCLayer*)>(address17)(this);
    }

    using ret18 = decltype(declval<cocos2d::CCLayer>().isTouchEnabled());
    static inline auto address18 = base+0x272ce0;

    dupable ret18 isTouchEnabled() {
        return reinterpret_cast<ret18(*)(CCLayer*)>(address18)(this);
    }

    using ret19 = decltype(declval<cocos2d::CCLayer>().keyBackClicked());
    static inline auto address19 = base+0x273160;

    dupable ret19 keyBackClicked() {
        return reinterpret_cast<ret19(*)(CCLayer*)>(address19)(this);
    }

    using ret20 = decltype(declval<cocos2d::CCLayer>().keyDown(declval<cocos2d::enumKeyCodes>()));
    static inline auto address20 = base+0x273280;

    dupable ret20 keyDown(cocos2d::enumKeyCodes p0) {
        return reinterpret_cast<ret20(*)(CCLayer*, cocos2d::enumKeyCodes)>(address20)(this, p0);
    }

    using ret21 = decltype(declval<cocos2d::CCLayer>().keyMenuClicked());
    static inline auto address21 = base+0x273200;

    dupable ret21 keyMenuClicked() {
        return reinterpret_cast<ret21(*)(CCLayer*)>(address21)(this);
    }

    using ret22 = decltype(declval<cocos2d::CCLayer>().onEnter());
    static inline auto address22 = base+0x273300;

    dupable ret22 onEnter() {
        return reinterpret_cast<ret22(*)(CCLayer*)>(address22)(this);
    }

    using ret23 = decltype(declval<cocos2d::CCLayer>().onEnterTransitionDidFinish());
    static inline auto address23 = base+0x273490;

    dupable ret23 onEnterTransitionDidFinish() {
        return reinterpret_cast<ret23(*)(CCLayer*)>(address23)(this);
    }

    using ret24 = decltype(declval<cocos2d::CCLayer>().onExit());
    static inline auto address24 = base+0x2733c0;

    dupable ret24 onExit() {
        return reinterpret_cast<ret24(*)(CCLayer*)>(address24)(this);
    }

    using ret25 = decltype(declval<cocos2d::CCLayer>().registerScriptTouchHandler(declval<int>(), declval<bool>(), declval<int>(), declval<bool>()));
    static inline auto address25 = base+0x272bd0;

    dupable ret25 registerScriptTouchHandler(int p0,bool p1,int p2,bool p3) {
        return reinterpret_cast<ret25(*)(CCLayer*, int, bool, int, bool)>(address25)(this, p0, p1, p2, p3);
    }

    using ret26 = decltype(declval<cocos2d::CCLayer>().registerWithTouchDispatcher());
    static inline auto address26 = base+0x272b40;

    dupable ret26 registerWithTouchDispatcher() {
        return reinterpret_cast<ret26(*)(CCLayer*)>(address26)(this);
    }

    using ret27 = decltype(declval<cocos2d::CCLayer>().setAccelerometerEnabled(declval<bool>()));
    static inline auto address27 = base+0x272e30;

    dupable ret27 setAccelerometerEnabled(bool p0) {
        return reinterpret_cast<ret27(*)(CCLayer*, bool)>(address27)(this, p0);
    }

    using ret28 = decltype(declval<cocos2d::CCLayer>().setAccelerometerInterval(declval<double>()));
    static inline auto address28 = base+0x272e70;

    dupable ret28 setAccelerometerInterval(double p0) {
        return reinterpret_cast<ret28(*)(CCLayer*, double)>(address28)(this, p0);
    }

    using ret29 = decltype(declval<cocos2d::CCLayer>().setKeyboardEnabled(declval<bool>()));
    static inline auto address29 = base+0x273020;

    dupable ret29 setKeyboardEnabled(bool p0) {
        return reinterpret_cast<ret29(*)(CCLayer*, bool)>(address29)(this, p0);
    }

    using ret30 = decltype(declval<cocos2d::CCLayer>().setKeypadEnabled(declval<bool>()));
    static inline auto address30 = base+0x272f80;

    dupable ret30 setKeypadEnabled(bool p0) {
        return reinterpret_cast<ret30(*)(CCLayer*, bool)>(address30)(this, p0);
    }

    using ret31 = decltype(declval<cocos2d::CCLayer>().setMouseEnabled(declval<bool>()));
    static inline auto address31 = base+0x2730a0;

    dupable ret31 setMouseEnabled(bool p0) {
        return reinterpret_cast<ret31(*)(CCLayer*, bool)>(address31)(this, p0);
    }

    using ret32 = decltype(declval<cocos2d::CCLayer>().setTouchEnabled(declval<bool>()));
    static inline auto address32 = base+0x272cf0;

    dupable ret32 setTouchEnabled(bool p0) {
        return reinterpret_cast<ret32(*)(CCLayer*, bool)>(address32)(this, p0);
    }

    using ret33 = decltype(declval<cocos2d::CCLayer>().setTouchMode(declval<cocos2d::ccTouchesMode>()));
    static inline auto address33 = base+0x272d60;

    dupable ret33 setTouchMode(cocos2d::ccTouchesMode p0) {
        return reinterpret_cast<ret33(*)(CCLayer*, cocos2d::ccTouchesMode)>(address33)(this, p0);
    }

    using ret34 = decltype(declval<cocos2d::CCLayer>().setTouchPriority(declval<int>()));
    static inline auto address34 = base+0x272db0;

    dupable ret34 setTouchPriority(int p0) {
        return reinterpret_cast<ret34(*)(CCLayer*, int)>(address34)(this, p0);
    }

    using ret35 = decltype(declval<cocos2d::CCLayer>().unregisterScriptTouchHandler());
    static inline auto address35 = base+0x272c30;

    dupable ret35 unregisterScriptTouchHandler() {
        return reinterpret_cast<ret35(*)(CCLayer*)>(address35)(this);
    }

    using ret36 = void;
    static inline auto address36 = base+0x2727b0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address36)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCLayer*))(&$CCLayer::constructor) != (ret0(D::*)())(&D::constructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::constructor)));
        }

        if constexpr((ret1(*)(CCLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$CCLayer::ccTouchBegan) != (ret1(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchBegan)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchBegan)));
        }

        if constexpr((ret2(*)(CCLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$CCLayer::ccTouchCancelled) != (ret2(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchCancelled)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchCancelled)));
        }

        if constexpr((ret3(*)(CCLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$CCLayer::ccTouchEnded) != (ret3(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchEnded)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchEnded)));
        }

        if constexpr((ret4(*)(CCLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$CCLayer::ccTouchMoved) != (ret4(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchMoved)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchMoved)));
        }

        if constexpr((ret5(*)(CCLayer*, cocos2d::CCSet*, cocos2d::CCEvent*))(&$CCLayer::ccTouchesBegan) != (ret5(D::*)(cocos2d::CCSet*, cocos2d::CCEvent*))(&D::ccTouchesBegan)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)(cocos2d::CCSet*, cocos2d::CCEvent*))(&D::ccTouchesBegan)));
        }

        if constexpr((ret6(*)(CCLayer*, cocos2d::CCSet*, cocos2d::CCEvent*))(&$CCLayer::ccTouchesCancelled) != (ret6(D::*)(cocos2d::CCSet*, cocos2d::CCEvent*))(&D::ccTouchesCancelled)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)(cocos2d::CCSet*, cocos2d::CCEvent*))(&D::ccTouchesCancelled)));
        }

        if constexpr((ret7(*)(CCLayer*, cocos2d::CCSet*, cocos2d::CCEvent*))(&$CCLayer::ccTouchesEnded) != (ret7(D::*)(cocos2d::CCSet*, cocos2d::CCEvent*))(&D::ccTouchesEnded)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)(cocos2d::CCSet*, cocos2d::CCEvent*))(&D::ccTouchesEnded)));
        }

        if constexpr((ret8(*)(CCLayer*, cocos2d::CCSet*, cocos2d::CCEvent*))(&$CCLayer::ccTouchesMoved) != (ret8(D::*)(cocos2d::CCSet*, cocos2d::CCEvent*))(&D::ccTouchesMoved)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)(cocos2d::CCSet*, cocos2d::CCEvent*))(&D::ccTouchesMoved)));
        }

        if constexpr((ret9(*)(CCLayer*))(&$CCLayer::create) != (ret9(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfNonVirtual((ret9(D::*)())(&D::create)));
        }

        if constexpr((ret10(*)(CCLayer*, cocos2d::CCAcceleration*))(&$CCLayer::didAccelerate) != (ret10(D::*)(cocos2d::CCAcceleration*))(&D::didAccelerate)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfVirtual((ret10(D::*)(cocos2d::CCAcceleration*))(&D::didAccelerate)));
        }

        if constexpr((ret11(*)(CCLayer*))(&$CCLayer::getTouchMode) != (ret11(D::*)())(&D::getTouchMode)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfVirtual((ret11(D::*)())(&D::getTouchMode)));
        }

        if constexpr((ret12(*)(CCLayer*))(&$CCLayer::getTouchPriority) != (ret12(D::*)())(&D::getTouchPriority)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfVirtual((ret12(D::*)())(&D::getTouchPriority)));
        }

        if constexpr((ret13(*)(CCLayer*))(&$CCLayer::init) != (ret13(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfVirtual((ret13(D::*)())(&D::init)));
        }

        if constexpr((ret14(*)(CCLayer*))(&$CCLayer::isAccelerometerEnabled) != (ret14(D::*)())(&D::isAccelerometerEnabled)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfVirtual((ret14(D::*)())(&D::isAccelerometerEnabled)));
        }

        if constexpr((ret15(*)(CCLayer*))(&$CCLayer::isKeyboardEnabled) != (ret15(D::*)())(&D::isKeyboardEnabled)) {
            modContainer.registerHookEnable(address15, FunctionScrapper::addressOfVirtual((ret15(D::*)())(&D::isKeyboardEnabled)));
        }

        if constexpr((ret16(*)(CCLayer*))(&$CCLayer::isKeypadEnabled) != (ret16(D::*)())(&D::isKeypadEnabled)) {
            modContainer.registerHookEnable(address16, FunctionScrapper::addressOfVirtual((ret16(D::*)())(&D::isKeypadEnabled)));
        }

        if constexpr((ret17(*)(CCLayer*))(&$CCLayer::isMouseEnabled) != (ret17(D::*)())(&D::isMouseEnabled)) {
            modContainer.registerHookEnable(address17, FunctionScrapper::addressOfVirtual((ret17(D::*)())(&D::isMouseEnabled)));
        }

        if constexpr((ret18(*)(CCLayer*))(&$CCLayer::isTouchEnabled) != (ret18(D::*)())(&D::isTouchEnabled)) {
            modContainer.registerHookEnable(address18, FunctionScrapper::addressOfVirtual((ret18(D::*)())(&D::isTouchEnabled)));
        }

        if constexpr((ret19(*)(CCLayer*))(&$CCLayer::keyBackClicked) != (ret19(D::*)())(&D::keyBackClicked)) {
            modContainer.registerHookEnable(address19, FunctionScrapper::addressOfVirtual((ret19(D::*)())(&D::keyBackClicked)));
        }

        if constexpr((ret20(*)(CCLayer*, cocos2d::enumKeyCodes))(&$CCLayer::keyDown) != (ret20(D::*)(cocos2d::enumKeyCodes))(&D::keyDown)) {
            modContainer.registerHookEnable(address20, FunctionScrapper::addressOfVirtual((ret20(D::*)(cocos2d::enumKeyCodes))(&D::keyDown)));
        }

        if constexpr((ret21(*)(CCLayer*))(&$CCLayer::keyMenuClicked) != (ret21(D::*)())(&D::keyMenuClicked)) {
            modContainer.registerHookEnable(address21, FunctionScrapper::addressOfVirtual((ret21(D::*)())(&D::keyMenuClicked)));
        }

        if constexpr((ret22(*)(CCLayer*))(&$CCLayer::onEnter) != (ret22(D::*)())(&D::onEnter)) {
            modContainer.registerHookEnable(address22, FunctionScrapper::addressOfVirtual((ret22(D::*)())(&D::onEnter)));
        }

        if constexpr((ret23(*)(CCLayer*))(&$CCLayer::onEnterTransitionDidFinish) != (ret23(D::*)())(&D::onEnterTransitionDidFinish)) {
            modContainer.registerHookEnable(address23, FunctionScrapper::addressOfVirtual((ret23(D::*)())(&D::onEnterTransitionDidFinish)));
        }

        if constexpr((ret24(*)(CCLayer*))(&$CCLayer::onExit) != (ret24(D::*)())(&D::onExit)) {
            modContainer.registerHookEnable(address24, FunctionScrapper::addressOfVirtual((ret24(D::*)())(&D::onExit)));
        }

        if constexpr((ret25(*)(CCLayer*, int, bool, int, bool))(&$CCLayer::registerScriptTouchHandler) != (ret25(D::*)(int, bool, int, bool))(&D::registerScriptTouchHandler)) {
            modContainer.registerHookEnable(address25, FunctionScrapper::addressOfVirtual((ret25(D::*)(int, bool, int, bool))(&D::registerScriptTouchHandler)));
        }

        if constexpr((ret26(*)(CCLayer*))(&$CCLayer::registerWithTouchDispatcher) != (ret26(D::*)())(&D::registerWithTouchDispatcher)) {
            modContainer.registerHookEnable(address26, FunctionScrapper::addressOfVirtual((ret26(D::*)())(&D::registerWithTouchDispatcher)));
        }

        if constexpr((ret27(*)(CCLayer*, bool))(&$CCLayer::setAccelerometerEnabled) != (ret27(D::*)(bool))(&D::setAccelerometerEnabled)) {
            modContainer.registerHookEnable(address27, FunctionScrapper::addressOfVirtual((ret27(D::*)(bool))(&D::setAccelerometerEnabled)));
        }

        if constexpr((ret28(*)(CCLayer*, double))(&$CCLayer::setAccelerometerInterval) != (ret28(D::*)(double))(&D::setAccelerometerInterval)) {
            modContainer.registerHookEnable(address28, FunctionScrapper::addressOfVirtual((ret28(D::*)(double))(&D::setAccelerometerInterval)));
        }

        if constexpr((ret29(*)(CCLayer*, bool))(&$CCLayer::setKeyboardEnabled) != (ret29(D::*)(bool))(&D::setKeyboardEnabled)) {
            modContainer.registerHookEnable(address29, FunctionScrapper::addressOfVirtual((ret29(D::*)(bool))(&D::setKeyboardEnabled)));
        }

        if constexpr((ret30(*)(CCLayer*, bool))(&$CCLayer::setKeypadEnabled) != (ret30(D::*)(bool))(&D::setKeypadEnabled)) {
            modContainer.registerHookEnable(address30, FunctionScrapper::addressOfVirtual((ret30(D::*)(bool))(&D::setKeypadEnabled)));
        }

        if constexpr((ret31(*)(CCLayer*, bool))(&$CCLayer::setMouseEnabled) != (ret31(D::*)(bool))(&D::setMouseEnabled)) {
            modContainer.registerHookEnable(address31, FunctionScrapper::addressOfVirtual((ret31(D::*)(bool))(&D::setMouseEnabled)));
        }

        if constexpr((ret32(*)(CCLayer*, bool))(&$CCLayer::setTouchEnabled) != (ret32(D::*)(bool))(&D::setTouchEnabled)) {
            modContainer.registerHookEnable(address32, FunctionScrapper::addressOfVirtual((ret32(D::*)(bool))(&D::setTouchEnabled)));
        }

        if constexpr((ret33(*)(CCLayer*, cocos2d::ccTouchesMode))(&$CCLayer::setTouchMode) != (ret33(D::*)(cocos2d::ccTouchesMode))(&D::setTouchMode)) {
            modContainer.registerHookEnable(address33, FunctionScrapper::addressOfVirtual((ret33(D::*)(cocos2d::ccTouchesMode))(&D::setTouchMode)));
        }

        if constexpr((ret34(*)(CCLayer*, int))(&$CCLayer::setTouchPriority) != (ret34(D::*)(int))(&D::setTouchPriority)) {
            modContainer.registerHookEnable(address34, FunctionScrapper::addressOfVirtual((ret34(D::*)(int))(&D::setTouchPriority)));
        }

        if constexpr((ret35(*)(CCLayer*))(&$CCLayer::unregisterScriptTouchHandler) != (ret35(D::*)())(&D::unregisterScriptTouchHandler)) {
            modContainer.registerHookEnable(address35, FunctionScrapper::addressOfVirtual((ret35(D::*)())(&D::unregisterScriptTouchHandler)));
        }

        if constexpr((ret36(*)(CCLayer*))(&$CCLayer::destructor) != (ret36(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address36, FunctionScrapper::addressOfNonVirtual((ret36(D::*)())(&D::destructor)));
        }

        return true;
    }
};

template<class D>
struct $CCMoveBy : CCMoveBy, InterfaceBase {
    $CCMoveBy(const $CCMoveBy& c) : CCMoveBy(c) {}
    $CCMoveBy() = delete;

    using ret0 = cocos2d::CCMoveBy*;
    static inline auto address0 = base+0x1f50e0;

    dupable static ret0 create(float p0,cocos2d::CCPoint const& p1) {
        return reinterpret_cast<ret0(*)(CCMoveBy*, float, cocos2d::CCPoint const&)>(address0)(p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCMoveBy*, float, cocos2d::CCPoint const&))(&$CCMoveBy::create) != (ret0(D::*)(float, cocos2d::CCPoint const&))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(float, cocos2d::CCPoint const&))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCMenuItemSprite : CCMenuItemSprite, InterfaceBase {
    $CCMenuItemSprite(const $CCMenuItemSprite& c) : CCMenuItemSprite(c) {}
    $CCMenuItemSprite() = delete;

    using ret0 = decltype(declval<cocos2d::CCMenuItemSprite>().selected());
    static inline auto address0 = base+0x1fd3f0;

    dupable ret0 selected() {
        return reinterpret_cast<ret0(*)(CCMenuItemSprite*)>(address0)(this);
    }

    using ret1 = decltype(declval<cocos2d::CCMenuItemSprite>().unselected());
    static inline auto address1 = base+0x1fd470;

    dupable ret1 unselected() {
        return reinterpret_cast<ret1(*)(CCMenuItemSprite*)>(address1)(this);
    }

    using ret2 = decltype(declval<cocos2d::CCMenuItemSprite>().setEnabled(declval<bool>()));
    static inline auto address2 = base+0x1fd4e0;

    dupable ret2 setEnabled(bool p0) {
        return reinterpret_cast<ret2(*)(CCMenuItemSprite*, bool)>(address2)(this, p0);
    }

    using ret3 = decltype(declval<cocos2d::CCMenuItemSprite>().getNormalImage());
    static inline auto address3 = base+0x1fcee0;

    dupable ret3 getNormalImage() {
        return reinterpret_cast<ret3(*)(CCMenuItemSprite*)>(address3)(this);
    }

    using ret4 = decltype(declval<cocos2d::CCMenuItemSprite>().setNormalImage(declval<cocos2d::CCNode*>()));
    static inline auto address4 = base+0x1fcef0;

    dupable ret4 setNormalImage(cocos2d::CCNode* p0) {
        return reinterpret_cast<ret4(*)(CCMenuItemSprite*, cocos2d::CCNode*)>(address4)(this, p0);
    }

    using ret5 = decltype(declval<cocos2d::CCMenuItemSprite>().getSelectedImage());
    static inline auto address5 = base+0x1fcfc0;

    dupable ret5 getSelectedImage() {
        return reinterpret_cast<ret5(*)(CCMenuItemSprite*)>(address5)(this);
    }

    using ret6 = decltype(declval<cocos2d::CCMenuItemSprite>().setSelectedImage(declval<cocos2d::CCNode*>()));
    static inline auto address6 = base+0x1fcfd0;

    dupable ret6 setSelectedImage(cocos2d::CCNode* p0) {
        return reinterpret_cast<ret6(*)(CCMenuItemSprite*, cocos2d::CCNode*)>(address6)(this, p0);
    }

    using ret7 = decltype(declval<cocos2d::CCMenuItemSprite>().getDisabledImage());
    static inline auto address7 = base+0x1fd070;

    dupable ret7 getDisabledImage() {
        return reinterpret_cast<ret7(*)(CCMenuItemSprite*)>(address7)(this);
    }

    using ret8 = decltype(declval<cocos2d::CCMenuItemSprite>().setDisabledImage(declval<cocos2d::CCNode*>()));
    static inline auto address8 = base+0x1fd080;

    dupable ret8 setDisabledImage(cocos2d::CCNode* p0) {
        return reinterpret_cast<ret8(*)(CCMenuItemSprite*, cocos2d::CCNode*)>(address8)(this, p0);
    }

    using ret9 = decltype(declval<cocos2d::CCMenuItemSprite>().updateImagesVisibility());
    static inline auto address9 = base+0x1fd510;

    dupable ret9 updateImagesVisibility() {
        return reinterpret_cast<ret9(*)(CCMenuItemSprite*)>(address9)(this);
    }

    using ret10 = decltype(declval<cocos2d::CCMenuItemSprite>().create(declval<cocos2d::CCNode*>(), declval<cocos2d::CCNode*>(), declval<cocos2d::CCNode*>()));
    static inline auto address10 = base+0x1fd120;

    dupable static ret10 create(cocos2d::CCNode* p0,cocos2d::CCNode* p1,cocos2d::CCNode* p2) {
        return reinterpret_cast<ret10(*)(CCMenuItemSprite*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*)>(address10)(p0, p1, p2);
    }

    using ret11 = decltype(declval<cocos2d::CCMenuItemSprite>().create(declval<cocos2d::CCNode*>(), declval<cocos2d::CCNode*>(), declval<cocos2d::CCNode*>(), declval<cocos2d::CCObject*>(), declval<cocos2d::SEL_MenuHandler>()));
    static inline auto address11 = base+0x1fd140;

    dupable static ret11 create(cocos2d::CCNode* p0,cocos2d::CCNode* p1,cocos2d::CCNode* p2,cocos2d::CCObject* p3,cocos2d::SEL_MenuHandler p4) {
        return reinterpret_cast<ret11(*)(CCMenuItemSprite*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)>(address11)(p0, p1, p2, p3, p4);
    }

    using ret12 = decltype(declval<cocos2d::CCMenuItemSprite>().create(declval<cocos2d::CCNode*>(), declval<cocos2d::CCNode*>(), declval<cocos2d::CCObject*>(), declval<cocos2d::SEL_MenuHandler>()));
    static inline auto address12 = base+0x1fd2d0;

    dupable static ret12 create(cocos2d::CCNode* p0,cocos2d::CCNode* p1,cocos2d::CCObject* p2,cocos2d::SEL_MenuHandler p3) {
        return reinterpret_cast<ret12(*)(CCMenuItemSprite*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)>(address12)(p0, p1, p2, p3);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCMenuItemSprite*))(&$CCMenuItemSprite::selected) != (ret0(D::*)())(&D::selected)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfVirtual((ret0(D::*)())(&D::selected)));
        }

        if constexpr((ret1(*)(CCMenuItemSprite*))(&$CCMenuItemSprite::unselected) != (ret1(D::*)())(&D::unselected)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::unselected)));
        }

        if constexpr((ret2(*)(CCMenuItemSprite*, bool))(&$CCMenuItemSprite::setEnabled) != (ret2(D::*)(bool))(&D::setEnabled)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)(bool))(&D::setEnabled)));
        }

        if constexpr((ret3(*)(CCMenuItemSprite*))(&$CCMenuItemSprite::getNormalImage) != (ret3(D::*)())(&D::getNormalImage)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)())(&D::getNormalImage)));
        }

        if constexpr((ret4(*)(CCMenuItemSprite*, cocos2d::CCNode*))(&$CCMenuItemSprite::setNormalImage) != (ret4(D::*)(cocos2d::CCNode*))(&D::setNormalImage)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)(cocos2d::CCNode*))(&D::setNormalImage)));
        }

        if constexpr((ret5(*)(CCMenuItemSprite*))(&$CCMenuItemSprite::getSelectedImage) != (ret5(D::*)())(&D::getSelectedImage)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)())(&D::getSelectedImage)));
        }

        if constexpr((ret6(*)(CCMenuItemSprite*, cocos2d::CCNode*))(&$CCMenuItemSprite::setSelectedImage) != (ret6(D::*)(cocos2d::CCNode*))(&D::setSelectedImage)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)(cocos2d::CCNode*))(&D::setSelectedImage)));
        }

        if constexpr((ret7(*)(CCMenuItemSprite*))(&$CCMenuItemSprite::getDisabledImage) != (ret7(D::*)())(&D::getDisabledImage)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)())(&D::getDisabledImage)));
        }

        if constexpr((ret8(*)(CCMenuItemSprite*, cocos2d::CCNode*))(&$CCMenuItemSprite::setDisabledImage) != (ret8(D::*)(cocos2d::CCNode*))(&D::setDisabledImage)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)(cocos2d::CCNode*))(&D::setDisabledImage)));
        }

        if constexpr((ret9(*)(CCMenuItemSprite*))(&$CCMenuItemSprite::updateImagesVisibility) != (ret9(D::*)())(&D::updateImagesVisibility)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfVirtual((ret9(D::*)())(&D::updateImagesVisibility)));
        }

        if constexpr((ret10(*)(CCMenuItemSprite*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*))(&$CCMenuItemSprite::create) != (ret10(D::*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*))(&D::create)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfNonVirtual((ret10(D::*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*))(&D::create)));
        }

        if constexpr((ret11(*)(CCMenuItemSprite*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler))(&$CCMenuItemSprite::create) != (ret11(D::*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler))(&D::create)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfNonVirtual((ret11(D::*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler))(&D::create)));
        }

        if constexpr((ret12(*)(CCMenuItemSprite*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler))(&$CCMenuItemSprite::create) != (ret12(D::*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler))(&D::create)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfNonVirtual((ret12(D::*)(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $SimplePlayer : SimplePlayer, InterfaceBase {
    $SimplePlayer(const $SimplePlayer& c) : SimplePlayer(c) {}
    $SimplePlayer() = delete;

    using ret0 = SimplePlayer*;
    static inline auto address0 = base+0x1b6140;

    dupable static ret0 create(int p0) {
        return reinterpret_cast<ret0(*)(SimplePlayer*, int)>(address0)(p0);
    }

    using ret1 = void;
    static inline auto address1 = base+0x1bace0;

    dupable ret1 setSecondColor(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret1(*)(SimplePlayer*, cocos2d::_ccColor3B const&)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x1ba1f0;

    dupable ret2 updateColors() {
        return reinterpret_cast<ret2(*)(SimplePlayer*)>(address2)(this);
    }

    using ret3 = void;
    static inline auto address3 = base+0x1b62f0;

    dupable ret3 updatePlayerFrame(int p0,IconType p1) {
        return reinterpret_cast<ret3(*)(SimplePlayer*, int, IconType)>(address3)(this, p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SimplePlayer*, int))(&$SimplePlayer::create) != (ret0(D::*)(int))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(int))(&D::create)));
        }

        if constexpr((ret1(*)(SimplePlayer*, cocos2d::_ccColor3B const&))(&$SimplePlayer::setSecondColor) != (ret1(D::*)(cocos2d::_ccColor3B const&))(&D::setSecondColor)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::_ccColor3B const&))(&D::setSecondColor)));
        }

        if constexpr((ret2(*)(SimplePlayer*))(&$SimplePlayer::updateColors) != (ret2(D::*)())(&D::updateColors)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::updateColors)));
        }

        if constexpr((ret3(*)(SimplePlayer*, int, IconType))(&$SimplePlayer::updatePlayerFrame) != (ret3(D::*)(int, IconType))(&D::updatePlayerFrame)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(int, IconType))(&D::updatePlayerFrame)));
        }

        return true;
    }
};

template<class D>
struct $CCMoveCNode : CCMoveCNode, InterfaceBase {
    $CCMoveCNode(const $CCMoveCNode& c) : CCMoveCNode(c) {}
    $CCMoveCNode() = delete;

    using ret0 = CCMoveCNode*;
    static inline auto address0 = base+0x1842a0;

    dupable static ret0 create() {
        return reinterpret_cast<ret0(*)(CCMoveCNode*)>(address0)();
    }

    using ret1 = bool;
    static inline auto address1 = base+0x18b3d0;

    dupable ret1 init() {
        return reinterpret_cast<ret1(*)(CCMoveCNode*)>(address1)(this);
    }

    using ret2 = void;
    static inline auto address2 = base+0x18b2c0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address2)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCMoveCNode*))(&$CCMoveCNode::create) != (ret0(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::create)));
        }

        if constexpr((ret1(*)(CCMoveCNode*))(&$CCMoveCNode::init) != (ret1(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::init)));
        }

        if constexpr((ret2(*)(CCMoveCNode*))(&$CCMoveCNode::destructor) != (ret2(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::destructor)));
        }

        return true;
    }
};

template<class D>
struct $UndoCommand : UndoCommand, InterfaceBase {
    $UndoCommand(const $UndoCommand& c) : UndoCommand(c) {}
    $UndoCommand() = delete;
    static bool _apply() {

        return true;
    }
};

template<class D>
struct $GJListLayer : GJListLayer, InterfaceBase {
    $GJListLayer(const $GJListLayer& c) : GJListLayer(c) {}
    $GJListLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x344350;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(GJListLayer*))(&$GJListLayer::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        return true;
    }
};

template<class D>
struct $CCKeyboardDispatcher : CCKeyboardDispatcher, InterfaceBase {
    $CCKeyboardDispatcher(const $CCKeyboardDispatcher& c) : CCKeyboardDispatcher(c) {}
    $CCKeyboardDispatcher() = delete;

    using ret0 = decltype(declval<cocos2d::CCKeyboardDispatcher>().dispatchKeyboardMSG(declval<cocos2d::enumKeyCodes>(), declval<bool>()));
    static inline auto address0 = base+0xe8190;

    dupable ret0 dispatchKeyboardMSG(cocos2d::enumKeyCodes p0,bool p1) {
        return reinterpret_cast<ret0(*)(CCKeyboardDispatcher*, cocos2d::enumKeyCodes, bool)>(address0)(this, p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCKeyboardDispatcher*, cocos2d::enumKeyCodes, bool))(&$CCKeyboardDispatcher::dispatchKeyboardMSG) != (ret0(D::*)(cocos2d::enumKeyCodes, bool))(&D::dispatchKeyboardMSG)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::enumKeyCodes, bool))(&D::dispatchKeyboardMSG)));
        }

        return true;
    }
};

template<class D>
struct $GJComment : GJComment, InterfaceBase {
    $GJComment(const $GJComment& c) : GJComment(c) {}
    $GJComment() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x2dfd70;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = bool;
    static inline auto address1 = base+0x2dfec0;

    dupable ret1 init() {
        return reinterpret_cast<ret1(*)(GJComment*)>(address1)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(GJComment*))(&$GJComment::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(GJComment*))(&$GJComment::init) != (ret1(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::init)));
        }

        return true;
    }
};

template<class D>
struct $CCMenuItemImage : CCMenuItemImage, InterfaceBase {
    $CCMenuItemImage(const $CCMenuItemImage& c) : CCMenuItemImage(c) {}
    $CCMenuItemImage() = delete;

    using ret0 = decltype(declval<cocos2d::CCMenuItemImage>().init());
    static inline auto address0 = base+0x1fd750;

    dupable ret0 init() {
        return reinterpret_cast<ret0(*)(CCMenuItemImage*)>(address0)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCMenuItemImage*))(&$CCMenuItemImage::init) != (ret0(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfVirtual((ret0(D::*)())(&D::init)));
        }

        return true;
    }
};

template<class D>
struct $CCNode : CCNode, InterfaceBase {
    $CCNode(const $CCNode& c) : CCNode(c) {}
    $CCNode() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x122550;

    dupable void constructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = decltype(declval<cocos2d::CCNode>()._setZOrder(declval<int>()));
    static inline auto address1 = base+0x122990;

    dupable ret1 _setZOrder(int p0) {
        return reinterpret_cast<ret1(*)(CCNode*, int)>(address1)(this, p0);
    }

    using ret2 = decltype(declval<cocos2d::CCNode>().addChild(declval<cocos2d::CCNode*>()));
    static inline auto address2 = base+0x1233d0;

    dupable ret2 addChild(cocos2d::CCNode* p0) {
        return reinterpret_cast<ret2(*)(CCNode*, cocos2d::CCNode*)>(address2)(this, p0);
    }

    using ret3 = decltype(declval<cocos2d::CCNode>().addChild(declval<cocos2d::CCNode*>(), declval<int>()));
    static inline auto address3 = base+0x1233b0;

    dupable ret3 addChild(cocos2d::CCNode* p0,int p1) {
        return reinterpret_cast<ret3(*)(CCNode*, cocos2d::CCNode*, int)>(address3)(this, p0, p1);
    }

    using ret4 = decltype(declval<cocos2d::CCNode>().addChild(declval<cocos2d::CCNode*>(), declval<int>(), declval<int>()));
    static inline auto address4 = base+0x1232a0;

    dupable ret4 addChild(cocos2d::CCNode* p0,int p1,int p2) {
        return reinterpret_cast<ret4(*)(CCNode*, cocos2d::CCNode*, int, int)>(address4)(this, p0, p1, p2);
    }

    using ret5 = decltype(declval<cocos2d::CCNode>().addComponent(declval<cocos2d::CCComponent*>()));
    static inline auto address5 = base+0x124a40;

    dupable ret5 addComponent(cocos2d::CCComponent* p0) {
        return reinterpret_cast<ret5(*)(CCNode*, cocos2d::CCComponent*)>(address5)(this, p0);
    }

    using ret6 = decltype(declval<cocos2d::CCNode>().cleanup());
    static inline auto address6 = base+0x123100;

    dupable ret6 cleanup() {
        return reinterpret_cast<ret6(*)(CCNode*)>(address6)(this);
    }

    using ret7 = decltype(declval<cocos2d::CCNode>().convertToNodeSpace(declval<cocos2d::CCPoint const&>()));
    static inline auto address7 = base+0x124750;

    dupable ret7 convertToNodeSpace(cocos2d::CCPoint const& p0) {
        return reinterpret_cast<ret7(*)(CCNode*, cocos2d::CCPoint const&)>(address7)(this, p0);
    }

    using ret8 = decltype(declval<cocos2d::CCNode>().convertToWorldSpace(declval<cocos2d::CCPoint const&>()));
    static inline auto address8 = base+0x124790;

    dupable ret8 convertToWorldSpace(cocos2d::CCPoint const& p0) {
        return reinterpret_cast<ret8(*)(CCNode*, cocos2d::CCPoint const&)>(address8)(this, p0);
    }

    using ret9 = cocos2d::CCNode*;
    static inline auto address9 = base+0x1230a0;

    dupable static ret9 create() {
        return reinterpret_cast<ret9(*)(CCNode*)>(address9)();
    }

    using ret10 = decltype(declval<cocos2d::CCNode>().draw());
    static inline auto address10 = base+0x123840;

    dupable ret10 draw() {
        return reinterpret_cast<ret10(*)(CCNode*)>(address10)(this);
    }

    using ret11 = decltype(declval<cocos2d::CCNode>().getActionByTag(declval<int>()));
    static inline auto address11 = base+0x123ee0;

    dupable ret11 getActionByTag(int p0) {
        return reinterpret_cast<ret11(*)(CCNode*, int)>(address11)(this, p0);
    }

    using ret12 = decltype(declval<cocos2d::CCNode>().getActionManager());
    static inline auto address12 = base+0x123e50;

    dupable ret12 getActionManager() {
        return reinterpret_cast<ret12(*)(CCNode*)>(address12)(this);
    }

    using ret13 = decltype(declval<cocos2d::CCNode>().getAnchorPoint());
    static inline auto address13 = base+0x122d80;

    dupable ret13 getAnchorPoint() {
        return reinterpret_cast<ret13(*)(CCNode*)>(address13)(this);
    }

    using ret14 = decltype(declval<cocos2d::CCNode>().getAnchorPointInPoints());
    static inline auto address14 = base+0x122d70;

    dupable ret14 getAnchorPointInPoints() {
        return reinterpret_cast<ret14(*)(CCNode*)>(address14)(this);
    }

    using ret15 = decltype(declval<cocos2d::CCNode>().getCamera());
    static inline auto address15 = base+0x122cb0;

    dupable ret15 getCamera() {
        return reinterpret_cast<ret15(*)(CCNode*)>(address15)(this);
    }

    using ret16 = decltype(declval<cocos2d::CCNode>().getChildByTag(declval<int>()));
    static inline auto address16 = base+0x123220;

    dupable ret16 getChildByTag(int p0) {
        return reinterpret_cast<ret16(*)(CCNode*, int)>(address16)(this, p0);
    }

    using ret17 = decltype(declval<cocos2d::CCNode>().getChildren());
    static inline auto address17 = base+0x122c80;

    dupable ret17 getChildren() {
        return reinterpret_cast<ret17(*)(CCNode*)>(address17)(this);
    }

    using ret18 = decltype(declval<cocos2d::CCNode>().getChildrenCount());
    static inline auto address18 = base+0x122c90;

    dupable ret18 getChildrenCount() const {
        return reinterpret_cast<ret18(*)(CCNode*)>(address18)(this);
    }

    using ret19 = decltype(declval<cocos2d::CCNode>().getContentSize());
    static inline auto address19 = base+0x122e00;

    dupable ret19 getContentSize() const {
        return reinterpret_cast<ret19(*)(CCNode*)>(address19)(this);
    }

    using ret20 = decltype(declval<cocos2d::CCNode>().getGLServerState());
    static inline auto address20 = base+0x122f90;

    dupable ret20 getGLServerState() {
        return reinterpret_cast<ret20(*)(CCNode*)>(address20)(this);
    }

    using ret21 = decltype(declval<cocos2d::CCNode>().getGrid());
    static inline auto address21 = base+0x122d00;

    dupable ret21 getGrid() {
        return reinterpret_cast<ret21(*)(CCNode*)>(address21)(this);
    }

    using ret22 = decltype(declval<cocos2d::CCNode>().getOrderOfArrival());
    static inline auto address22 = base+0x122f50;

    dupable ret22 getOrderOfArrival() {
        return reinterpret_cast<ret22(*)(CCNode*)>(address22)(this);
    }

    using ret23 = decltype(declval<cocos2d::CCNode>().getParent());
    static inline auto address23 = base+0x122ed0;

    dupable ret23 getParent() {
        return reinterpret_cast<ret23(*)(CCNode*)>(address23)(this);
    }

    using ret24 = decltype(declval<cocos2d::CCNode>().getPosition());
    static inline auto address24 = base+0x122b60;

    dupable ret24 getPosition() {
        return reinterpret_cast<ret24(*)(CCNode*)>(address24)(this);
    }

    using ret25 = decltype(declval<cocos2d::CCNode>().getPosition(declval<float*>(), declval<float*>()));
    static inline auto address25 = base+0x122b90;

    dupable ret25 getPosition(float* p0,float* p1) {
        return reinterpret_cast<ret25(*)(CCNode*, float*, float*)>(address25)(this, p0, p1);
    }

    using ret26 = decltype(declval<cocos2d::CCNode>().getPositionX());
    static inline auto address26 = base+0x122be0;

    dupable ret26 getPositionX() {
        return reinterpret_cast<ret26(*)(CCNode*)>(address26)(this);
    }

    using ret27 = decltype(declval<cocos2d::CCNode>().getPositionY());
    static inline auto address27 = base+0x122bf0;

    dupable ret27 getPositionY() {
        return reinterpret_cast<ret27(*)(CCNode*)>(address27)(this);
    }

    using ret28 = decltype(declval<cocos2d::CCNode>().getRotation());
    static inline auto address28 = base+0x122a00;

    dupable ret28 getRotation() {
        return reinterpret_cast<ret28(*)(CCNode*)>(address28)(this);
    }

    using ret29 = decltype(declval<cocos2d::CCNode>().getRotationX());
    static inline auto address29 = base+0x122a50;

    dupable ret29 getRotationX() {
        return reinterpret_cast<ret29(*)(CCNode*)>(address29)(this);
    }

    using ret30 = decltype(declval<cocos2d::CCNode>().getRotationY());
    static inline auto address30 = base+0x122a80;

    dupable ret30 getRotationY() {
        return reinterpret_cast<ret30(*)(CCNode*)>(address30)(this);
    }

    using ret31 = decltype(declval<cocos2d::CCNode>().getScale());
    static inline auto address31 = base+0x122ab0;

    dupable ret31 getScale() {
        return reinterpret_cast<ret31(*)(CCNode*)>(address31)(this);
    }

    using ret32 = decltype(declval<cocos2d::CCNode>().getScaleX());
    static inline auto address32 = base+0x122b00;

    dupable ret32 getScaleX() {
        return reinterpret_cast<ret32(*)(CCNode*)>(address32)(this);
    }

    using ret33 = decltype(declval<cocos2d::CCNode>().getScaleY());
    static inline auto address33 = base+0x122b30;

    dupable ret33 getScaleY() {
        return reinterpret_cast<ret33(*)(CCNode*)>(address33)(this);
    }

    using ret34 = decltype(declval<cocos2d::CCNode>().getScaledContentSize());
    static inline auto address34 = base+0x122e10;

    dupable ret34 getScaledContentSize() {
        return reinterpret_cast<ret34(*)(CCNode*)>(address34)(this);
    }

    using ret35 = decltype(declval<cocos2d::CCNode>().getScheduler());
    static inline auto address35 = base+0x123f70;

    dupable ret35 getScheduler() {
        return reinterpret_cast<ret35(*)(CCNode*)>(address35)(this);
    }

    using ret36 = decltype(declval<cocos2d::CCNode>().getShaderProgram());
    static inline auto address36 = base+0x122f70;

    dupable ret36 getShaderProgram() {
        return reinterpret_cast<ret36(*)(CCNode*)>(address36)(this);
    }

    using ret37 = decltype(declval<cocos2d::CCNode>().getSkewX());
    static inline auto address37 = base+0x122920;

    dupable ret37 getSkewX() {
        return reinterpret_cast<ret37(*)(CCNode*)>(address37)(this);
    }

    using ret38 = decltype(declval<cocos2d::CCNode>().getSkewY());
    static inline auto address38 = base+0x122950;

    dupable ret38 getSkewY() {
        return reinterpret_cast<ret38(*)(CCNode*)>(address38)(this);
    }

    using ret39 = decltype(declval<cocos2d::CCNode>().getUserData());
    static inline auto address39 = base+0x122f30;

    dupable ret39 getUserData() {
        return reinterpret_cast<ret39(*)(CCNode*)>(address39)(this);
    }

    using ret40 = decltype(declval<cocos2d::CCNode>().getUserObject());
    static inline auto address40 = base+0x122f80;

    dupable ret40 getUserObject() {
        return reinterpret_cast<ret40(*)(CCNode*)>(address40)(this);
    }

    using ret41 = decltype(declval<cocos2d::CCNode>().getVertexZ());
    static inline auto address41 = base+0x1229e0;

    dupable ret41 getVertexZ() {
        return reinterpret_cast<ret41(*)(CCNode*)>(address41)(this);
    }

    using ret42 = decltype(declval<cocos2d::CCNode>().getZOrder());
    static inline auto address42 = base+0x122980;

    dupable ret42 getZOrder() {
        return reinterpret_cast<ret42(*)(CCNode*)>(address42)(this);
    }

    using ret43 = decltype(declval<cocos2d::CCNode>().ignoreAnchorPointForPosition(declval<bool>()));
    static inline auto address43 = base+0x122f00;

    dupable ret43 ignoreAnchorPointForPosition(bool p0) {
        return reinterpret_cast<ret43(*)(CCNode*, bool)>(address43)(this, p0);
    }

    using ret44 = decltype(declval<cocos2d::CCNode>().init());
    static inline auto address44 = base+0x122910;

    dupable ret44 init() {
        return reinterpret_cast<ret44(*)(CCNode*)>(address44)(this);
    }

    using ret45 = decltype(declval<cocos2d::CCNode>().isIgnoreAnchorPointForPosition());
    static inline auto address45 = base+0x122ef0;

    dupable ret45 isIgnoreAnchorPointForPosition() {
        return reinterpret_cast<ret45(*)(CCNode*)>(address45)(this);
    }

    using ret46 = decltype(declval<cocos2d::CCNode>().isRunning());
    static inline auto address46 = base+0x122ec0;

    dupable ret46 isRunning() {
        return reinterpret_cast<ret46(*)(CCNode*)>(address46)(this);
    }

    using ret47 = decltype(declval<cocos2d::CCNode>().isVisible());
    static inline auto address47 = base+0x122d50;

    dupable ret47 isVisible() {
        return reinterpret_cast<ret47(*)(CCNode*)>(address47)(this);
    }

    using ret48 = decltype(declval<cocos2d::CCNode>().nodeToParentTransform());
    static inline auto address48 = base+0x124210;

    dupable ret48 nodeToParentTransform() {
        return reinterpret_cast<ret48(*)(CCNode*)>(address48)(this);
    }

    using ret49 = decltype(declval<cocos2d::CCNode>().nodeToWorldTransform());
    static inline auto address49 = base+0x124670;

    dupable ret49 nodeToWorldTransform() {
        return reinterpret_cast<ret49(*)(CCNode*)>(address49)(this);
    }

    using ret50 = decltype(declval<cocos2d::CCNode>().onEnter());
    static inline auto address50 = base+0x123a90;

    dupable ret50 onEnter() {
        return reinterpret_cast<ret50(*)(CCNode*)>(address50)(this);
    }

    using ret51 = decltype(declval<cocos2d::CCNode>().onEnterTransitionDidFinish());
    static inline auto address51 = base+0x123b90;

    dupable ret51 onEnterTransitionDidFinish() {
        return reinterpret_cast<ret51(*)(CCNode*)>(address51)(this);
    }

    using ret52 = decltype(declval<cocos2d::CCNode>().onExit());
    static inline auto address52 = base+0x123ca0;

    dupable ret52 onExit() {
        return reinterpret_cast<ret52(*)(CCNode*)>(address52)(this);
    }

    using ret53 = decltype(declval<cocos2d::CCNode>().onExitTransitionDidStart());
    static inline auto address53 = base+0x123c00;

    dupable ret53 onExitTransitionDidStart() {
        return reinterpret_cast<ret53(*)(CCNode*)>(address53)(this);
    }

    using ret54 = decltype(declval<cocos2d::CCNode>().parentToNodeTransform());
    static inline auto address54 = base+0x1245d0;

    dupable ret54 parentToNodeTransform() {
        return reinterpret_cast<ret54(*)(CCNode*)>(address54)(this);
    }

    using ret55 = decltype(declval<cocos2d::CCNode>().pauseSchedulerAndActions());
    static inline auto address55 = base+0x123d60;

    dupable ret55 pauseSchedulerAndActions() {
        return reinterpret_cast<ret55(*)(CCNode*)>(address55)(this);
    }

    using ret56 = decltype(declval<cocos2d::CCNode>().registerScriptHandler(declval<int>()));
    static inline auto address56 = base+0x123d90;

    dupable ret56 registerScriptHandler(int p0) {
        return reinterpret_cast<ret56(*)(CCNode*, int)>(address56)(this, p0);
    }

    using ret57 = decltype(declval<cocos2d::CCNode>().removeAllChildren());
    static inline auto address57 = base+0x123600;

    dupable ret57 removeAllChildren() {
        return reinterpret_cast<ret57(*)(CCNode*)>(address57)(this);
    }

    using ret58 = decltype(declval<cocos2d::CCNode>().removeAllChildrenWithCleanup(declval<bool>()));
    static inline auto address58 = base+0x123620;

    dupable ret58 removeAllChildrenWithCleanup(bool p0) {
        return reinterpret_cast<ret58(*)(CCNode*, bool)>(address58)(this, p0);
    }

    using ret59 = decltype(declval<cocos2d::CCNode>().removeAllComponents());
    static inline auto address59 = base+0x124aa0;

    dupable ret59 removeAllComponents() {
        return reinterpret_cast<ret59(*)(CCNode*)>(address59)(this);
    }

    using ret60 = decltype(declval<cocos2d::CCNode>().removeChild(declval<cocos2d::CCNode*>()));
    static inline auto address60 = base+0x123460;

    dupable ret60 removeChild(cocos2d::CCNode* p0) {
        return reinterpret_cast<ret60(*)(CCNode*, cocos2d::CCNode*)>(address60)(this, p0);
    }

    using ret61 = decltype(declval<cocos2d::CCNode>().removeChild(declval<cocos2d::CCNode*>(), declval<bool>()));
    static inline auto address61 = base+0x123480;

    dupable ret61 removeChild(cocos2d::CCNode* p0,bool p1) {
        return reinterpret_cast<ret61(*)(CCNode*, cocos2d::CCNode*, bool)>(address61)(this, p0, p1);
    }

    using ret62 = decltype(declval<cocos2d::CCNode>().removeChildByTag(declval<int>()));
    static inline auto address62 = base+0x1235a0;

    dupable ret62 removeChildByTag(int p0) {
        return reinterpret_cast<ret62(*)(CCNode*, int)>(address62)(this, p0);
    }

    using ret63 = decltype(declval<cocos2d::CCNode>().removeChildByTag(declval<int>(), declval<bool>()));
    static inline auto address63 = base+0x1235c0;

    dupable ret63 removeChildByTag(int p0,bool p1) {
        return reinterpret_cast<ret63(*)(CCNode*, int, bool)>(address63)(this, p0, p1);
    }

    using ret64 = decltype(declval<cocos2d::CCNode>().removeComponent(declval<char const*>()));
    static inline auto address64 = base+0x124a60;

    dupable ret64 removeComponent(char const* p0) {
        return reinterpret_cast<ret64(*)(CCNode*, char const*)>(address64)(this, p0);
    }

    using ret65 = decltype(declval<cocos2d::CCNode>().removeComponent(declval<cocos2d::CCComponent*>()));
    static inline auto address65 = base+0x124a80;

    dupable ret65 removeComponent(cocos2d::CCComponent* p0) {
        return reinterpret_cast<ret65(*)(CCNode*, cocos2d::CCComponent*)>(address65)(this, p0);
    }

    using ret66 = decltype(declval<cocos2d::CCNode>().removeFromParent());
    static inline auto address66 = base+0x1233f0;

    dupable ret66 removeFromParent() {
        return reinterpret_cast<ret66(*)(CCNode*)>(address66)(this);
    }

    using ret67 = decltype(declval<cocos2d::CCNode>().removeFromParentAndCleanup(declval<bool>()));
    static inline auto address67 = base+0x123410;

    dupable ret67 removeFromParentAndCleanup(bool p0) {
        return reinterpret_cast<ret67(*)(CCNode*, bool)>(address67)(this, p0);
    }

    using ret68 = decltype(declval<cocos2d::CCNode>().removeMeAndCleanup());
    static inline auto address68 = base+0x123440;

    dupable ret68 removeMeAndCleanup() {
        return reinterpret_cast<ret68(*)(CCNode*)>(address68)(this);
    }

    using ret69 = decltype(declval<cocos2d::CCNode>().reorderChild(declval<cocos2d::CCNode*>(), declval<int>()));
    static inline auto address69 = base+0x123760;

    dupable ret69 reorderChild(cocos2d::CCNode* p0,int p1) {
        return reinterpret_cast<ret69(*)(CCNode*, cocos2d::CCNode*, int)>(address69)(this, p0, p1);
    }

    using ret70 = decltype(declval<cocos2d::CCNode>().resumeSchedulerAndActions());
    static inline auto address70 = base+0x123b60;

    dupable ret70 resumeSchedulerAndActions() {
        return reinterpret_cast<ret70(*)(CCNode*)>(address70)(this);
    }

    using ret71 = decltype(declval<cocos2d::CCNode>().runAction(declval<cocos2d::CCAction*>()));
    static inline auto address71 = base+0x123e60;

    dupable ret71 runAction(cocos2d::CCAction* p0) {
        return reinterpret_cast<ret71(*)(CCNode*, cocos2d::CCAction*)>(address71)(this, p0);
    }

    using ret72 = decltype(declval<cocos2d::CCNode>().schedule(declval<cocos2d::SEL_SCHEDULE>()));
    static inline auto address72 = base+0x1240b0;

    dupable ret72 schedule(cocos2d::SEL_SCHEDULE p0) {
        return reinterpret_cast<ret72(*)(CCNode*, cocos2d::SEL_SCHEDULE)>(address72)(this, p0);
    }

    using ret73 = decltype(declval<cocos2d::CCNode>().schedule(declval<cocos2d::SEL_SCHEDULE>(), declval<float>()));
    static inline auto address73 = base+0x124120;

    dupable ret73 schedule(cocos2d::SEL_SCHEDULE p0,float p1) {
        return reinterpret_cast<ret73(*)(CCNode*, cocos2d::SEL_SCHEDULE, float)>(address73)(this, p0, p1);
    }

    using ret74 = decltype(declval<cocos2d::CCNode>().scheduleUpdate());
    static inline auto address74 = base+0x123f80;

    dupable ret74 scheduleUpdate() {
        return reinterpret_cast<ret74(*)(CCNode*)>(address74)(this);
    }

    using ret75 = decltype(declval<cocos2d::CCNode>().setActionManager(declval<cocos2d::CCActionManager*>()));
    static inline auto address75 = base+0x123e00;

    dupable ret75 setActionManager(cocos2d::CCActionManager* p0) {
        return reinterpret_cast<ret75(*)(CCNode*, cocos2d::CCActionManager*)>(address75)(this, p0);
    }

    using ret76 = decltype(declval<cocos2d::CCNode>().setAnchorPoint(declval<cocos2d::CCPoint const&>()));
    static inline auto address76 = base+0x122d90;

    dupable ret76 setAnchorPoint(cocos2d::CCPoint const& p0) {
        return reinterpret_cast<ret76(*)(CCNode*, cocos2d::CCPoint const&)>(address76)(this, p0);
    }

    using ret77 = decltype(declval<cocos2d::CCNode>().setContentSize(declval<cocos2d::CCSize const&>()));
    static inline auto address77 = base+0x122e50;

    dupable ret77 setContentSize(cocos2d::CCSize const& p0) {
        return reinterpret_cast<ret77(*)(CCNode*, cocos2d::CCSize const&)>(address77)(this, p0);
    }

    using ret78 = decltype(declval<cocos2d::CCNode>().setGLServerState(declval<cocos2d::ccGLServerState>()));
    static inline auto address78 = base+0x122fa0;

    dupable ret78 setGLServerState(cocos2d::ccGLServerState p0) {
        return reinterpret_cast<ret78(*)(CCNode*, cocos2d::ccGLServerState)>(address78)(this, p0);
    }

    using ret79 = decltype(declval<cocos2d::CCNode>().setGrid(declval<cocos2d::CCGridBase*>()));
    static inline auto address79 = base+0x122d10;

    dupable ret79 setGrid(cocos2d::CCGridBase* p0) {
        return reinterpret_cast<ret79(*)(CCNode*, cocos2d::CCGridBase*)>(address79)(this, p0);
    }

    using ret80 = decltype(declval<cocos2d::CCNode>().setOrderOfArrival(declval<unsigned int>()));
    static inline auto address80 = base+0x122f60;

    dupable ret80 setOrderOfArrival(unsigned int p0) {
        return reinterpret_cast<ret80(*)(CCNode*, unsigned int)>(address80)(this, p0);
    }

    using ret81 = decltype(declval<cocos2d::CCNode>().setParent(declval<cocos2d::CCNode*>()));
    static inline auto address81 = base+0x122ee0;

    dupable ret81 setParent(cocos2d::CCNode* p0) {
        return reinterpret_cast<ret81(*)(CCNode*, cocos2d::CCNode*)>(address81)(this, p0);
    }

    using ret82 = decltype(declval<cocos2d::CCNode>().setPosition(declval<cocos2d::CCPoint const&>()));
    static inline auto address82 = base+0x122b70;

    dupable ret82 setPosition(cocos2d::CCPoint const& p0) {
        return reinterpret_cast<ret82(*)(CCNode*, cocos2d::CCPoint const&)>(address82)(this, p0);
    }

    using ret83 = decltype(declval<cocos2d::CCNode>().setPosition(declval<float>(), declval<float>()));
    static inline auto address83 = base+0x122ba0;

    dupable ret83 setPosition(float p0,float p1) {
        return reinterpret_cast<ret83(*)(CCNode*, float, float)>(address83)(this, p0, p1);
    }

    using ret84 = decltype(declval<cocos2d::CCNode>().setPositionX(declval<float>()));
    static inline auto address84 = base+0x122c00;

    dupable ret84 setPositionX(float p0) {
        return reinterpret_cast<ret84(*)(CCNode*, float)>(address84)(this, p0);
    }

    using ret85 = decltype(declval<cocos2d::CCNode>().setPositionY(declval<float>()));
    static inline auto address85 = base+0x122c40;

    dupable ret85 setPositionY(float p0) {
        return reinterpret_cast<ret85(*)(CCNode*, float)>(address85)(this, p0);
    }

    using ret86 = decltype(declval<cocos2d::CCNode>().setRotation(declval<float>()));
    static inline auto address86 = base+0x122a10;

    dupable ret86 setRotation(float p0) {
        return reinterpret_cast<ret86(*)(CCNode*, float)>(address86)(this, p0);
    }

    using ret87 = decltype(declval<cocos2d::CCNode>().setRotationX(declval<float>()));
    static inline auto address87 = base+0x122a60;

    dupable ret87 setRotationX(float p0) {
        return reinterpret_cast<ret87(*)(CCNode*, float)>(address87)(this, p0);
    }

    using ret88 = decltype(declval<cocos2d::CCNode>().setRotationY(declval<float>()));
    static inline auto address88 = base+0x122a90;

    dupable ret88 setRotationY(float p0) {
        return reinterpret_cast<ret88(*)(CCNode*, float)>(address88)(this, p0);
    }

    using ret89 = decltype(declval<cocos2d::CCNode>().setScale(declval<float>()));
    static inline auto address89 = base+0x122ac0;

    dupable ret89 setScale(float p0) {
        return reinterpret_cast<ret89(*)(CCNode*, float)>(address89)(this, p0);
    }

    using ret90 = decltype(declval<cocos2d::CCNode>().setScale(declval<float>(), declval<float>()));
    static inline auto address90 = base+0x122ae0;

    dupable ret90 setScale(float p0,float p1) {
        return reinterpret_cast<ret90(*)(CCNode*, float, float)>(address90)(this, p0, p1);
    }

    using ret91 = decltype(declval<cocos2d::CCNode>().setScaleX(declval<float>()));
    static inline auto address91 = base+0x122b10;

    dupable ret91 setScaleX(float p0) {
        return reinterpret_cast<ret91(*)(CCNode*, float)>(address91)(this, p0);
    }

    using ret92 = decltype(declval<cocos2d::CCNode>().setScaleY(declval<float>()));
    static inline auto address92 = base+0x122b40;

    dupable ret92 setScaleY(float p0) {
        return reinterpret_cast<ret92(*)(CCNode*, float)>(address92)(this, p0);
    }

    using ret93 = decltype(declval<cocos2d::CCNode>().setScheduler(declval<cocos2d::CCScheduler*>()));
    static inline auto address93 = base+0x123f20;

    dupable ret93 setScheduler(cocos2d::CCScheduler* p0) {
        return reinterpret_cast<ret93(*)(CCNode*, cocos2d::CCScheduler*)>(address93)(this, p0);
    }

    using ret94 = decltype(declval<cocos2d::CCNode>().setShaderProgram(declval<cocos2d::CCGLProgram*>()));
    static inline auto address94 = base+0x122ff0;

    dupable ret94 setShaderProgram(cocos2d::CCGLProgram* p0) {
        return reinterpret_cast<ret94(*)(CCNode*, cocos2d::CCGLProgram*)>(address94)(this, p0);
    }

    using ret95 = decltype(declval<cocos2d::CCNode>().setSkewX(declval<float>()));
    static inline auto address95 = base+0x122930;

    dupable ret95 setSkewX(float p0) {
        return reinterpret_cast<ret95(*)(CCNode*, float)>(address95)(this, p0);
    }

    using ret96 = decltype(declval<cocos2d::CCNode>().setSkewY(declval<float>()));
    static inline auto address96 = base+0x122960;

    dupable ret96 setSkewY(float p0) {
        return reinterpret_cast<ret96(*)(CCNode*, float)>(address96)(this, p0);
    }

    using ret97 = decltype(declval<cocos2d::CCNode>().setUserData(declval<void*>()));
    static inline auto address97 = base+0x122f40;

    dupable ret97 setUserData(void* p0) {
        return reinterpret_cast<ret97(*)(CCNode*, void*)>(address97)(this, p0);
    }

    using ret98 = decltype(declval<cocos2d::CCNode>().setUserObject(declval<cocos2d::CCObject*>()));
    static inline auto address98 = base+0x122fb0;

    dupable ret98 setUserObject(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret98(*)(CCNode*, cocos2d::CCObject*)>(address98)(this, p0);
    }

    using ret99 = decltype(declval<cocos2d::CCNode>().setVertexZ(declval<float>()));
    static inline auto address99 = base+0x1229f0;

    dupable ret99 setVertexZ(float p0) {
        return reinterpret_cast<ret99(*)(CCNode*, float)>(address99)(this, p0);
    }

    using ret100 = decltype(declval<cocos2d::CCNode>().setVisible(declval<bool>()));
    static inline auto address100 = base+0x122d60;

    dupable ret100 setVisible(bool p0) {
        return reinterpret_cast<ret100(*)(CCNode*, bool)>(address100)(this, p0);
    }

    using ret101 = decltype(declval<cocos2d::CCNode>().setZOrder(declval<int>()));
    static inline auto address101 = base+0x1229a0;

    dupable ret101 setZOrder(int p0) {
        return reinterpret_cast<ret101(*)(CCNode*, int)>(address101)(this, p0);
    }

    using ret102 = decltype(declval<cocos2d::CCNode>().sortAllChildren());
    static inline auto address102 = base+0x1237b0;

    dupable ret102 sortAllChildren() {
        return reinterpret_cast<ret102(*)(CCNode*)>(address102)(this);
    }

    using ret103 = decltype(declval<cocos2d::CCNode>().stopActionByTag(declval<int>()));
    static inline auto address103 = base+0x123ec0;

    dupable ret103 stopActionByTag(int p0) {
        return reinterpret_cast<ret103(*)(CCNode*, int)>(address103)(this, p0);
    }

    using ret104 = decltype(declval<cocos2d::CCNode>().stopAllActions());
    static inline auto address104 = base+0x123190;

    dupable ret104 stopAllActions() {
        return reinterpret_cast<ret104(*)(CCNode*)>(address104)(this);
    }

    using ret105 = decltype(declval<cocos2d::CCNode>().unregisterScriptHandler());
    static inline auto address105 = base+0x123dc0;

    dupable ret105 unregisterScriptHandler() {
        return reinterpret_cast<ret105(*)(CCNode*)>(address105)(this);
    }

    using ret106 = decltype(declval<cocos2d::CCNode>().unschedule(declval<cocos2d::SEL_SCHEDULE>()));
    static inline auto address106 = base+0x124180;

    dupable ret106 unschedule(cocos2d::SEL_SCHEDULE p0) {
        return reinterpret_cast<ret106(*)(CCNode*, cocos2d::SEL_SCHEDULE)>(address106)(this, p0);
    }

    using ret107 = decltype(declval<cocos2d::CCNode>().unscheduleAllSelectors());
    static inline auto address107 = base+0x1231b0;

    dupable ret107 unscheduleAllSelectors() {
        return reinterpret_cast<ret107(*)(CCNode*)>(address107)(this);
    }

    using ret108 = decltype(declval<cocos2d::CCNode>().unscheduleUpdate());
    static inline auto address108 = base+0x124060;

    dupable ret108 unscheduleUpdate() {
        return reinterpret_cast<ret108(*)(CCNode*)>(address108)(this);
    }

    using ret109 = decltype(declval<cocos2d::CCNode>().update(declval<float>()));
    static inline auto address109 = base+0x1241a0;

    dupable ret109 update(float p0) {
        return reinterpret_cast<ret109(*)(CCNode*, float)>(address109)(this, p0);
    }

    using ret110 = decltype(declval<cocos2d::CCNode>().updateTransform());
    static inline auto address110 = base+0x1249d0;

    dupable ret110 updateTransform() {
        return reinterpret_cast<ret110(*)(CCNode*)>(address110)(this);
    }

    using ret111 = decltype(declval<cocos2d::CCNode>().updateTweenAction(declval<float>(), declval<char const*>()));
    static inline auto address111 = base+0x1249c0;

    dupable ret111 updateTweenAction(float p0,char const* p1) {
        return reinterpret_cast<ret111(*)(CCNode*, float, char const*)>(address111)(this, p0, p1);
    }

    using ret112 = decltype(declval<cocos2d::CCNode>().visit());
    static inline auto address112 = base+0x123850;

    dupable ret112 visit() {
        return reinterpret_cast<ret112(*)(CCNode*)>(address112)(this);
    }

    using ret113 = decltype(declval<cocos2d::CCNode>().worldToNodeTransform());
    static inline auto address113 = base+0x124710;

    dupable ret113 worldToNodeTransform() {
        return reinterpret_cast<ret113(*)(CCNode*)>(address113)(this);
    }

    using ret114 = void;
    static inline auto address114 = base+0x122750;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address114)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCNode*))(&$CCNode::constructor) != (ret0(D::*)())(&D::constructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::constructor)));
        }

        if constexpr((ret1(*)(CCNode*, int))(&$CCNode::_setZOrder) != (ret1(D::*)(int))(&D::_setZOrder)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(int))(&D::_setZOrder)));
        }

        if constexpr((ret2(*)(CCNode*, cocos2d::CCNode*))(&$CCNode::addChild) != (ret2(D::*)(cocos2d::CCNode*))(&D::addChild)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(cocos2d::CCNode*))(&D::addChild)));
        }

        if constexpr((ret3(*)(CCNode*, cocos2d::CCNode*, int))(&$CCNode::addChild) != (ret3(D::*)(cocos2d::CCNode*, int))(&D::addChild)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(cocos2d::CCNode*, int))(&D::addChild)));
        }

        if constexpr((ret4(*)(CCNode*, cocos2d::CCNode*, int, int))(&$CCNode::addChild) != (ret4(D::*)(cocos2d::CCNode*, int, int))(&D::addChild)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(cocos2d::CCNode*, int, int))(&D::addChild)));
        }

        if constexpr((ret5(*)(CCNode*, cocos2d::CCComponent*))(&$CCNode::addComponent) != (ret5(D::*)(cocos2d::CCComponent*))(&D::addComponent)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)(cocos2d::CCComponent*))(&D::addComponent)));
        }

        if constexpr((ret6(*)(CCNode*))(&$CCNode::cleanup) != (ret6(D::*)())(&D::cleanup)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)())(&D::cleanup)));
        }

        if constexpr((ret7(*)(CCNode*, cocos2d::CCPoint const&))(&$CCNode::convertToNodeSpace) != (ret7(D::*)(cocos2d::CCPoint const&))(&D::convertToNodeSpace)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)(cocos2d::CCPoint const&))(&D::convertToNodeSpace)));
        }

        if constexpr((ret8(*)(CCNode*, cocos2d::CCPoint const&))(&$CCNode::convertToWorldSpace) != (ret8(D::*)(cocos2d::CCPoint const&))(&D::convertToWorldSpace)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfNonVirtual((ret8(D::*)(cocos2d::CCPoint const&))(&D::convertToWorldSpace)));
        }

        if constexpr((ret9(*)(CCNode*))(&$CCNode::create) != (ret9(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfNonVirtual((ret9(D::*)())(&D::create)));
        }

        if constexpr((ret10(*)(CCNode*))(&$CCNode::draw) != (ret10(D::*)())(&D::draw)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfNonVirtual((ret10(D::*)())(&D::draw)));
        }

        if constexpr((ret11(*)(CCNode*, int))(&$CCNode::getActionByTag) != (ret11(D::*)(int))(&D::getActionByTag)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfNonVirtual((ret11(D::*)(int))(&D::getActionByTag)));
        }

        if constexpr((ret12(*)(CCNode*))(&$CCNode::getActionManager) != (ret12(D::*)())(&D::getActionManager)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfNonVirtual((ret12(D::*)())(&D::getActionManager)));
        }

        if constexpr((ret13(*)(CCNode*))(&$CCNode::getAnchorPoint) != (ret13(D::*)())(&D::getAnchorPoint)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfNonVirtual((ret13(D::*)())(&D::getAnchorPoint)));
        }

        if constexpr((ret14(*)(CCNode*))(&$CCNode::getAnchorPointInPoints) != (ret14(D::*)())(&D::getAnchorPointInPoints)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfNonVirtual((ret14(D::*)())(&D::getAnchorPointInPoints)));
        }

        if constexpr((ret15(*)(CCNode*))(&$CCNode::getCamera) != (ret15(D::*)())(&D::getCamera)) {
            modContainer.registerHookEnable(address15, FunctionScrapper::addressOfNonVirtual((ret15(D::*)())(&D::getCamera)));
        }

        if constexpr((ret16(*)(CCNode*, int))(&$CCNode::getChildByTag) != (ret16(D::*)(int))(&D::getChildByTag)) {
            modContainer.registerHookEnable(address16, FunctionScrapper::addressOfNonVirtual((ret16(D::*)(int))(&D::getChildByTag)));
        }

        if constexpr((ret17(*)(CCNode*))(&$CCNode::getChildren) != (ret17(D::*)())(&D::getChildren)) {
            modContainer.registerHookEnable(address17, FunctionScrapper::addressOfNonVirtual((ret17(D::*)())(&D::getChildren)));
        }

        if constexpr((ret18(*)(CCNode*))(&$CCNode::getChildrenCount) != (ret18(D::*)())(&D::getChildrenCount)) {
            modContainer.registerHookEnable(address18, FunctionScrapper::addressOfNonVirtual((ret18(D::*)())(&D::getChildrenCount)));
        }

        if constexpr((ret19(*)(CCNode*))(&$CCNode::getContentSize) != (ret19(D::*)())(&D::getContentSize)) {
            modContainer.registerHookEnable(address19, FunctionScrapper::addressOfNonVirtual((ret19(D::*)())(&D::getContentSize)));
        }

        if constexpr((ret20(*)(CCNode*))(&$CCNode::getGLServerState) != (ret20(D::*)())(&D::getGLServerState)) {
            modContainer.registerHookEnable(address20, FunctionScrapper::addressOfNonVirtual((ret20(D::*)())(&D::getGLServerState)));
        }

        if constexpr((ret21(*)(CCNode*))(&$CCNode::getGrid) != (ret21(D::*)())(&D::getGrid)) {
            modContainer.registerHookEnable(address21, FunctionScrapper::addressOfNonVirtual((ret21(D::*)())(&D::getGrid)));
        }

        if constexpr((ret22(*)(CCNode*))(&$CCNode::getOrderOfArrival) != (ret22(D::*)())(&D::getOrderOfArrival)) {
            modContainer.registerHookEnable(address22, FunctionScrapper::addressOfNonVirtual((ret22(D::*)())(&D::getOrderOfArrival)));
        }

        if constexpr((ret23(*)(CCNode*))(&$CCNode::getParent) != (ret23(D::*)())(&D::getParent)) {
            modContainer.registerHookEnable(address23, FunctionScrapper::addressOfNonVirtual((ret23(D::*)())(&D::getParent)));
        }

        if constexpr((ret24(*)(CCNode*))(&$CCNode::getPosition) != (ret24(D::*)())(&D::getPosition)) {
            modContainer.registerHookEnable(address24, FunctionScrapper::addressOfNonVirtual((ret24(D::*)())(&D::getPosition)));
        }

        if constexpr((ret25(*)(CCNode*, float*, float*))(&$CCNode::getPosition) != (ret25(D::*)(float*, float*))(&D::getPosition)) {
            modContainer.registerHookEnable(address25, FunctionScrapper::addressOfNonVirtual((ret25(D::*)(float*, float*))(&D::getPosition)));
        }

        if constexpr((ret26(*)(CCNode*))(&$CCNode::getPositionX) != (ret26(D::*)())(&D::getPositionX)) {
            modContainer.registerHookEnable(address26, FunctionScrapper::addressOfNonVirtual((ret26(D::*)())(&D::getPositionX)));
        }

        if constexpr((ret27(*)(CCNode*))(&$CCNode::getPositionY) != (ret27(D::*)())(&D::getPositionY)) {
            modContainer.registerHookEnable(address27, FunctionScrapper::addressOfNonVirtual((ret27(D::*)())(&D::getPositionY)));
        }

        if constexpr((ret28(*)(CCNode*))(&$CCNode::getRotation) != (ret28(D::*)())(&D::getRotation)) {
            modContainer.registerHookEnable(address28, FunctionScrapper::addressOfNonVirtual((ret28(D::*)())(&D::getRotation)));
        }

        if constexpr((ret29(*)(CCNode*))(&$CCNode::getRotationX) != (ret29(D::*)())(&D::getRotationX)) {
            modContainer.registerHookEnable(address29, FunctionScrapper::addressOfNonVirtual((ret29(D::*)())(&D::getRotationX)));
        }

        if constexpr((ret30(*)(CCNode*))(&$CCNode::getRotationY) != (ret30(D::*)())(&D::getRotationY)) {
            modContainer.registerHookEnable(address30, FunctionScrapper::addressOfNonVirtual((ret30(D::*)())(&D::getRotationY)));
        }

        if constexpr((ret31(*)(CCNode*))(&$CCNode::getScale) != (ret31(D::*)())(&D::getScale)) {
            modContainer.registerHookEnable(address31, FunctionScrapper::addressOfNonVirtual((ret31(D::*)())(&D::getScale)));
        }

        if constexpr((ret32(*)(CCNode*))(&$CCNode::getScaleX) != (ret32(D::*)())(&D::getScaleX)) {
            modContainer.registerHookEnable(address32, FunctionScrapper::addressOfNonVirtual((ret32(D::*)())(&D::getScaleX)));
        }

        if constexpr((ret33(*)(CCNode*))(&$CCNode::getScaleY) != (ret33(D::*)())(&D::getScaleY)) {
            modContainer.registerHookEnable(address33, FunctionScrapper::addressOfNonVirtual((ret33(D::*)())(&D::getScaleY)));
        }

        if constexpr((ret34(*)(CCNode*))(&$CCNode::getScaledContentSize) != (ret34(D::*)())(&D::getScaledContentSize)) {
            modContainer.registerHookEnable(address34, FunctionScrapper::addressOfNonVirtual((ret34(D::*)())(&D::getScaledContentSize)));
        }

        if constexpr((ret35(*)(CCNode*))(&$CCNode::getScheduler) != (ret35(D::*)())(&D::getScheduler)) {
            modContainer.registerHookEnable(address35, FunctionScrapper::addressOfNonVirtual((ret35(D::*)())(&D::getScheduler)));
        }

        if constexpr((ret36(*)(CCNode*))(&$CCNode::getShaderProgram) != (ret36(D::*)())(&D::getShaderProgram)) {
            modContainer.registerHookEnable(address36, FunctionScrapper::addressOfNonVirtual((ret36(D::*)())(&D::getShaderProgram)));
        }

        if constexpr((ret37(*)(CCNode*))(&$CCNode::getSkewX) != (ret37(D::*)())(&D::getSkewX)) {
            modContainer.registerHookEnable(address37, FunctionScrapper::addressOfNonVirtual((ret37(D::*)())(&D::getSkewX)));
        }

        if constexpr((ret38(*)(CCNode*))(&$CCNode::getSkewY) != (ret38(D::*)())(&D::getSkewY)) {
            modContainer.registerHookEnable(address38, FunctionScrapper::addressOfNonVirtual((ret38(D::*)())(&D::getSkewY)));
        }

        if constexpr((ret39(*)(CCNode*))(&$CCNode::getUserData) != (ret39(D::*)())(&D::getUserData)) {
            modContainer.registerHookEnable(address39, FunctionScrapper::addressOfNonVirtual((ret39(D::*)())(&D::getUserData)));
        }

        if constexpr((ret40(*)(CCNode*))(&$CCNode::getUserObject) != (ret40(D::*)())(&D::getUserObject)) {
            modContainer.registerHookEnable(address40, FunctionScrapper::addressOfNonVirtual((ret40(D::*)())(&D::getUserObject)));
        }

        if constexpr((ret41(*)(CCNode*))(&$CCNode::getVertexZ) != (ret41(D::*)())(&D::getVertexZ)) {
            modContainer.registerHookEnable(address41, FunctionScrapper::addressOfNonVirtual((ret41(D::*)())(&D::getVertexZ)));
        }

        if constexpr((ret42(*)(CCNode*))(&$CCNode::getZOrder) != (ret42(D::*)())(&D::getZOrder)) {
            modContainer.registerHookEnable(address42, FunctionScrapper::addressOfNonVirtual((ret42(D::*)())(&D::getZOrder)));
        }

        if constexpr((ret43(*)(CCNode*, bool))(&$CCNode::ignoreAnchorPointForPosition) != (ret43(D::*)(bool))(&D::ignoreAnchorPointForPosition)) {
            modContainer.registerHookEnable(address43, FunctionScrapper::addressOfNonVirtual((ret43(D::*)(bool))(&D::ignoreAnchorPointForPosition)));
        }

        if constexpr((ret44(*)(CCNode*))(&$CCNode::init) != (ret44(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address44, FunctionScrapper::addressOfNonVirtual((ret44(D::*)())(&D::init)));
        }

        if constexpr((ret45(*)(CCNode*))(&$CCNode::isIgnoreAnchorPointForPosition) != (ret45(D::*)())(&D::isIgnoreAnchorPointForPosition)) {
            modContainer.registerHookEnable(address45, FunctionScrapper::addressOfNonVirtual((ret45(D::*)())(&D::isIgnoreAnchorPointForPosition)));
        }

        if constexpr((ret46(*)(CCNode*))(&$CCNode::isRunning) != (ret46(D::*)())(&D::isRunning)) {
            modContainer.registerHookEnable(address46, FunctionScrapper::addressOfNonVirtual((ret46(D::*)())(&D::isRunning)));
        }

        if constexpr((ret47(*)(CCNode*))(&$CCNode::isVisible) != (ret47(D::*)())(&D::isVisible)) {
            modContainer.registerHookEnable(address47, FunctionScrapper::addressOfNonVirtual((ret47(D::*)())(&D::isVisible)));
        }

        if constexpr((ret48(*)(CCNode*))(&$CCNode::nodeToParentTransform) != (ret48(D::*)())(&D::nodeToParentTransform)) {
            modContainer.registerHookEnable(address48, FunctionScrapper::addressOfNonVirtual((ret48(D::*)())(&D::nodeToParentTransform)));
        }

        if constexpr((ret49(*)(CCNode*))(&$CCNode::nodeToWorldTransform) != (ret49(D::*)())(&D::nodeToWorldTransform)) {
            modContainer.registerHookEnable(address49, FunctionScrapper::addressOfNonVirtual((ret49(D::*)())(&D::nodeToWorldTransform)));
        }

        if constexpr((ret50(*)(CCNode*))(&$CCNode::onEnter) != (ret50(D::*)())(&D::onEnter)) {
            modContainer.registerHookEnable(address50, FunctionScrapper::addressOfNonVirtual((ret50(D::*)())(&D::onEnter)));
        }

        if constexpr((ret51(*)(CCNode*))(&$CCNode::onEnterTransitionDidFinish) != (ret51(D::*)())(&D::onEnterTransitionDidFinish)) {
            modContainer.registerHookEnable(address51, FunctionScrapper::addressOfNonVirtual((ret51(D::*)())(&D::onEnterTransitionDidFinish)));
        }

        if constexpr((ret52(*)(CCNode*))(&$CCNode::onExit) != (ret52(D::*)())(&D::onExit)) {
            modContainer.registerHookEnable(address52, FunctionScrapper::addressOfNonVirtual((ret52(D::*)())(&D::onExit)));
        }

        if constexpr((ret53(*)(CCNode*))(&$CCNode::onExitTransitionDidStart) != (ret53(D::*)())(&D::onExitTransitionDidStart)) {
            modContainer.registerHookEnable(address53, FunctionScrapper::addressOfNonVirtual((ret53(D::*)())(&D::onExitTransitionDidStart)));
        }

        if constexpr((ret54(*)(CCNode*))(&$CCNode::parentToNodeTransform) != (ret54(D::*)())(&D::parentToNodeTransform)) {
            modContainer.registerHookEnable(address54, FunctionScrapper::addressOfNonVirtual((ret54(D::*)())(&D::parentToNodeTransform)));
        }

        if constexpr((ret55(*)(CCNode*))(&$CCNode::pauseSchedulerAndActions) != (ret55(D::*)())(&D::pauseSchedulerAndActions)) {
            modContainer.registerHookEnable(address55, FunctionScrapper::addressOfNonVirtual((ret55(D::*)())(&D::pauseSchedulerAndActions)));
        }

        if constexpr((ret56(*)(CCNode*, int))(&$CCNode::registerScriptHandler) != (ret56(D::*)(int))(&D::registerScriptHandler)) {
            modContainer.registerHookEnable(address56, FunctionScrapper::addressOfNonVirtual((ret56(D::*)(int))(&D::registerScriptHandler)));
        }

        if constexpr((ret57(*)(CCNode*))(&$CCNode::removeAllChildren) != (ret57(D::*)())(&D::removeAllChildren)) {
            modContainer.registerHookEnable(address57, FunctionScrapper::addressOfNonVirtual((ret57(D::*)())(&D::removeAllChildren)));
        }

        if constexpr((ret58(*)(CCNode*, bool))(&$CCNode::removeAllChildrenWithCleanup) != (ret58(D::*)(bool))(&D::removeAllChildrenWithCleanup)) {
            modContainer.registerHookEnable(address58, FunctionScrapper::addressOfNonVirtual((ret58(D::*)(bool))(&D::removeAllChildrenWithCleanup)));
        }

        if constexpr((ret59(*)(CCNode*))(&$CCNode::removeAllComponents) != (ret59(D::*)())(&D::removeAllComponents)) {
            modContainer.registerHookEnable(address59, FunctionScrapper::addressOfNonVirtual((ret59(D::*)())(&D::removeAllComponents)));
        }

        if constexpr((ret60(*)(CCNode*, cocos2d::CCNode*))(&$CCNode::removeChild) != (ret60(D::*)(cocos2d::CCNode*))(&D::removeChild)) {
            modContainer.registerHookEnable(address60, FunctionScrapper::addressOfNonVirtual((ret60(D::*)(cocos2d::CCNode*))(&D::removeChild)));
        }

        if constexpr((ret61(*)(CCNode*, cocos2d::CCNode*, bool))(&$CCNode::removeChild) != (ret61(D::*)(cocos2d::CCNode*, bool))(&D::removeChild)) {
            modContainer.registerHookEnable(address61, FunctionScrapper::addressOfNonVirtual((ret61(D::*)(cocos2d::CCNode*, bool))(&D::removeChild)));
        }

        if constexpr((ret62(*)(CCNode*, int))(&$CCNode::removeChildByTag) != (ret62(D::*)(int))(&D::removeChildByTag)) {
            modContainer.registerHookEnable(address62, FunctionScrapper::addressOfNonVirtual((ret62(D::*)(int))(&D::removeChildByTag)));
        }

        if constexpr((ret63(*)(CCNode*, int, bool))(&$CCNode::removeChildByTag) != (ret63(D::*)(int, bool))(&D::removeChildByTag)) {
            modContainer.registerHookEnable(address63, FunctionScrapper::addressOfNonVirtual((ret63(D::*)(int, bool))(&D::removeChildByTag)));
        }

        if constexpr((ret64(*)(CCNode*, char const*))(&$CCNode::removeComponent) != (ret64(D::*)(char const*))(&D::removeComponent)) {
            modContainer.registerHookEnable(address64, FunctionScrapper::addressOfNonVirtual((ret64(D::*)(char const*))(&D::removeComponent)));
        }

        if constexpr((ret65(*)(CCNode*, cocos2d::CCComponent*))(&$CCNode::removeComponent) != (ret65(D::*)(cocos2d::CCComponent*))(&D::removeComponent)) {
            modContainer.registerHookEnable(address65, FunctionScrapper::addressOfNonVirtual((ret65(D::*)(cocos2d::CCComponent*))(&D::removeComponent)));
        }

        if constexpr((ret66(*)(CCNode*))(&$CCNode::removeFromParent) != (ret66(D::*)())(&D::removeFromParent)) {
            modContainer.registerHookEnable(address66, FunctionScrapper::addressOfNonVirtual((ret66(D::*)())(&D::removeFromParent)));
        }

        if constexpr((ret67(*)(CCNode*, bool))(&$CCNode::removeFromParentAndCleanup) != (ret67(D::*)(bool))(&D::removeFromParentAndCleanup)) {
            modContainer.registerHookEnable(address67, FunctionScrapper::addressOfNonVirtual((ret67(D::*)(bool))(&D::removeFromParentAndCleanup)));
        }

        if constexpr((ret68(*)(CCNode*))(&$CCNode::removeMeAndCleanup) != (ret68(D::*)())(&D::removeMeAndCleanup)) {
            modContainer.registerHookEnable(address68, FunctionScrapper::addressOfNonVirtual((ret68(D::*)())(&D::removeMeAndCleanup)));
        }

        if constexpr((ret69(*)(CCNode*, cocos2d::CCNode*, int))(&$CCNode::reorderChild) != (ret69(D::*)(cocos2d::CCNode*, int))(&D::reorderChild)) {
            modContainer.registerHookEnable(address69, FunctionScrapper::addressOfNonVirtual((ret69(D::*)(cocos2d::CCNode*, int))(&D::reorderChild)));
        }

        if constexpr((ret70(*)(CCNode*))(&$CCNode::resumeSchedulerAndActions) != (ret70(D::*)())(&D::resumeSchedulerAndActions)) {
            modContainer.registerHookEnable(address70, FunctionScrapper::addressOfNonVirtual((ret70(D::*)())(&D::resumeSchedulerAndActions)));
        }

        if constexpr((ret71(*)(CCNode*, cocos2d::CCAction*))(&$CCNode::runAction) != (ret71(D::*)(cocos2d::CCAction*))(&D::runAction)) {
            modContainer.registerHookEnable(address71, FunctionScrapper::addressOfNonVirtual((ret71(D::*)(cocos2d::CCAction*))(&D::runAction)));
        }

        if constexpr((ret72(*)(CCNode*, cocos2d::SEL_SCHEDULE))(&$CCNode::schedule) != (ret72(D::*)(cocos2d::SEL_SCHEDULE))(&D::schedule)) {
            modContainer.registerHookEnable(address72, FunctionScrapper::addressOfNonVirtual((ret72(D::*)(cocos2d::SEL_SCHEDULE))(&D::schedule)));
        }

        if constexpr((ret73(*)(CCNode*, cocos2d::SEL_SCHEDULE, float))(&$CCNode::schedule) != (ret73(D::*)(cocos2d::SEL_SCHEDULE, float))(&D::schedule)) {
            modContainer.registerHookEnable(address73, FunctionScrapper::addressOfNonVirtual((ret73(D::*)(cocos2d::SEL_SCHEDULE, float))(&D::schedule)));
        }

        if constexpr((ret74(*)(CCNode*))(&$CCNode::scheduleUpdate) != (ret74(D::*)())(&D::scheduleUpdate)) {
            modContainer.registerHookEnable(address74, FunctionScrapper::addressOfNonVirtual((ret74(D::*)())(&D::scheduleUpdate)));
        }

        if constexpr((ret75(*)(CCNode*, cocos2d::CCActionManager*))(&$CCNode::setActionManager) != (ret75(D::*)(cocos2d::CCActionManager*))(&D::setActionManager)) {
            modContainer.registerHookEnable(address75, FunctionScrapper::addressOfNonVirtual((ret75(D::*)(cocos2d::CCActionManager*))(&D::setActionManager)));
        }

        if constexpr((ret76(*)(CCNode*, cocos2d::CCPoint const&))(&$CCNode::setAnchorPoint) != (ret76(D::*)(cocos2d::CCPoint const&))(&D::setAnchorPoint)) {
            modContainer.registerHookEnable(address76, FunctionScrapper::addressOfNonVirtual((ret76(D::*)(cocos2d::CCPoint const&))(&D::setAnchorPoint)));
        }

        if constexpr((ret77(*)(CCNode*, cocos2d::CCSize const&))(&$CCNode::setContentSize) != (ret77(D::*)(cocos2d::CCSize const&))(&D::setContentSize)) {
            modContainer.registerHookEnable(address77, FunctionScrapper::addressOfNonVirtual((ret77(D::*)(cocos2d::CCSize const&))(&D::setContentSize)));
        }

        if constexpr((ret78(*)(CCNode*, cocos2d::ccGLServerState))(&$CCNode::setGLServerState) != (ret78(D::*)(cocos2d::ccGLServerState))(&D::setGLServerState)) {
            modContainer.registerHookEnable(address78, FunctionScrapper::addressOfNonVirtual((ret78(D::*)(cocos2d::ccGLServerState))(&D::setGLServerState)));
        }

        if constexpr((ret79(*)(CCNode*, cocos2d::CCGridBase*))(&$CCNode::setGrid) != (ret79(D::*)(cocos2d::CCGridBase*))(&D::setGrid)) {
            modContainer.registerHookEnable(address79, FunctionScrapper::addressOfNonVirtual((ret79(D::*)(cocos2d::CCGridBase*))(&D::setGrid)));
        }

        if constexpr((ret80(*)(CCNode*, unsigned int))(&$CCNode::setOrderOfArrival) != (ret80(D::*)(unsigned int))(&D::setOrderOfArrival)) {
            modContainer.registerHookEnable(address80, FunctionScrapper::addressOfNonVirtual((ret80(D::*)(unsigned int))(&D::setOrderOfArrival)));
        }

        if constexpr((ret81(*)(CCNode*, cocos2d::CCNode*))(&$CCNode::setParent) != (ret81(D::*)(cocos2d::CCNode*))(&D::setParent)) {
            modContainer.registerHookEnable(address81, FunctionScrapper::addressOfNonVirtual((ret81(D::*)(cocos2d::CCNode*))(&D::setParent)));
        }

        if constexpr((ret82(*)(CCNode*, cocos2d::CCPoint const&))(&$CCNode::setPosition) != (ret82(D::*)(cocos2d::CCPoint const&))(&D::setPosition)) {
            modContainer.registerHookEnable(address82, FunctionScrapper::addressOfNonVirtual((ret82(D::*)(cocos2d::CCPoint const&))(&D::setPosition)));
        }

        if constexpr((ret83(*)(CCNode*, float, float))(&$CCNode::setPosition) != (ret83(D::*)(float, float))(&D::setPosition)) {
            modContainer.registerHookEnable(address83, FunctionScrapper::addressOfNonVirtual((ret83(D::*)(float, float))(&D::setPosition)));
        }

        if constexpr((ret84(*)(CCNode*, float))(&$CCNode::setPositionX) != (ret84(D::*)(float))(&D::setPositionX)) {
            modContainer.registerHookEnable(address84, FunctionScrapper::addressOfNonVirtual((ret84(D::*)(float))(&D::setPositionX)));
        }

        if constexpr((ret85(*)(CCNode*, float))(&$CCNode::setPositionY) != (ret85(D::*)(float))(&D::setPositionY)) {
            modContainer.registerHookEnable(address85, FunctionScrapper::addressOfNonVirtual((ret85(D::*)(float))(&D::setPositionY)));
        }

        if constexpr((ret86(*)(CCNode*, float))(&$CCNode::setRotation) != (ret86(D::*)(float))(&D::setRotation)) {
            modContainer.registerHookEnable(address86, FunctionScrapper::addressOfNonVirtual((ret86(D::*)(float))(&D::setRotation)));
        }

        if constexpr((ret87(*)(CCNode*, float))(&$CCNode::setRotationX) != (ret87(D::*)(float))(&D::setRotationX)) {
            modContainer.registerHookEnable(address87, FunctionScrapper::addressOfNonVirtual((ret87(D::*)(float))(&D::setRotationX)));
        }

        if constexpr((ret88(*)(CCNode*, float))(&$CCNode::setRotationY) != (ret88(D::*)(float))(&D::setRotationY)) {
            modContainer.registerHookEnable(address88, FunctionScrapper::addressOfNonVirtual((ret88(D::*)(float))(&D::setRotationY)));
        }

        if constexpr((ret89(*)(CCNode*, float))(&$CCNode::setScale) != (ret89(D::*)(float))(&D::setScale)) {
            modContainer.registerHookEnable(address89, FunctionScrapper::addressOfNonVirtual((ret89(D::*)(float))(&D::setScale)));
        }

        if constexpr((ret90(*)(CCNode*, float, float))(&$CCNode::setScale) != (ret90(D::*)(float, float))(&D::setScale)) {
            modContainer.registerHookEnable(address90, FunctionScrapper::addressOfNonVirtual((ret90(D::*)(float, float))(&D::setScale)));
        }

        if constexpr((ret91(*)(CCNode*, float))(&$CCNode::setScaleX) != (ret91(D::*)(float))(&D::setScaleX)) {
            modContainer.registerHookEnable(address91, FunctionScrapper::addressOfNonVirtual((ret91(D::*)(float))(&D::setScaleX)));
        }

        if constexpr((ret92(*)(CCNode*, float))(&$CCNode::setScaleY) != (ret92(D::*)(float))(&D::setScaleY)) {
            modContainer.registerHookEnable(address92, FunctionScrapper::addressOfNonVirtual((ret92(D::*)(float))(&D::setScaleY)));
        }

        if constexpr((ret93(*)(CCNode*, cocos2d::CCScheduler*))(&$CCNode::setScheduler) != (ret93(D::*)(cocos2d::CCScheduler*))(&D::setScheduler)) {
            modContainer.registerHookEnable(address93, FunctionScrapper::addressOfNonVirtual((ret93(D::*)(cocos2d::CCScheduler*))(&D::setScheduler)));
        }

        if constexpr((ret94(*)(CCNode*, cocos2d::CCGLProgram*))(&$CCNode::setShaderProgram) != (ret94(D::*)(cocos2d::CCGLProgram*))(&D::setShaderProgram)) {
            modContainer.registerHookEnable(address94, FunctionScrapper::addressOfNonVirtual((ret94(D::*)(cocos2d::CCGLProgram*))(&D::setShaderProgram)));
        }

        if constexpr((ret95(*)(CCNode*, float))(&$CCNode::setSkewX) != (ret95(D::*)(float))(&D::setSkewX)) {
            modContainer.registerHookEnable(address95, FunctionScrapper::addressOfNonVirtual((ret95(D::*)(float))(&D::setSkewX)));
        }

        if constexpr((ret96(*)(CCNode*, float))(&$CCNode::setSkewY) != (ret96(D::*)(float))(&D::setSkewY)) {
            modContainer.registerHookEnable(address96, FunctionScrapper::addressOfNonVirtual((ret96(D::*)(float))(&D::setSkewY)));
        }

        if constexpr((ret97(*)(CCNode*, void*))(&$CCNode::setUserData) != (ret97(D::*)(void*))(&D::setUserData)) {
            modContainer.registerHookEnable(address97, FunctionScrapper::addressOfNonVirtual((ret97(D::*)(void*))(&D::setUserData)));
        }

        if constexpr((ret98(*)(CCNode*, cocos2d::CCObject*))(&$CCNode::setUserObject) != (ret98(D::*)(cocos2d::CCObject*))(&D::setUserObject)) {
            modContainer.registerHookEnable(address98, FunctionScrapper::addressOfNonVirtual((ret98(D::*)(cocos2d::CCObject*))(&D::setUserObject)));
        }

        if constexpr((ret99(*)(CCNode*, float))(&$CCNode::setVertexZ) != (ret99(D::*)(float))(&D::setVertexZ)) {
            modContainer.registerHookEnable(address99, FunctionScrapper::addressOfNonVirtual((ret99(D::*)(float))(&D::setVertexZ)));
        }

        if constexpr((ret100(*)(CCNode*, bool))(&$CCNode::setVisible) != (ret100(D::*)(bool))(&D::setVisible)) {
            modContainer.registerHookEnable(address100, FunctionScrapper::addressOfNonVirtual((ret100(D::*)(bool))(&D::setVisible)));
        }

        if constexpr((ret101(*)(CCNode*, int))(&$CCNode::setZOrder) != (ret101(D::*)(int))(&D::setZOrder)) {
            modContainer.registerHookEnable(address101, FunctionScrapper::addressOfNonVirtual((ret101(D::*)(int))(&D::setZOrder)));
        }

        if constexpr((ret102(*)(CCNode*))(&$CCNode::sortAllChildren) != (ret102(D::*)())(&D::sortAllChildren)) {
            modContainer.registerHookEnable(address102, FunctionScrapper::addressOfNonVirtual((ret102(D::*)())(&D::sortAllChildren)));
        }

        if constexpr((ret103(*)(CCNode*, int))(&$CCNode::stopActionByTag) != (ret103(D::*)(int))(&D::stopActionByTag)) {
            modContainer.registerHookEnable(address103, FunctionScrapper::addressOfNonVirtual((ret103(D::*)(int))(&D::stopActionByTag)));
        }

        if constexpr((ret104(*)(CCNode*))(&$CCNode::stopAllActions) != (ret104(D::*)())(&D::stopAllActions)) {
            modContainer.registerHookEnable(address104, FunctionScrapper::addressOfNonVirtual((ret104(D::*)())(&D::stopAllActions)));
        }

        if constexpr((ret105(*)(CCNode*))(&$CCNode::unregisterScriptHandler) != (ret105(D::*)())(&D::unregisterScriptHandler)) {
            modContainer.registerHookEnable(address105, FunctionScrapper::addressOfNonVirtual((ret105(D::*)())(&D::unregisterScriptHandler)));
        }

        if constexpr((ret106(*)(CCNode*, cocos2d::SEL_SCHEDULE))(&$CCNode::unschedule) != (ret106(D::*)(cocos2d::SEL_SCHEDULE))(&D::unschedule)) {
            modContainer.registerHookEnable(address106, FunctionScrapper::addressOfNonVirtual((ret106(D::*)(cocos2d::SEL_SCHEDULE))(&D::unschedule)));
        }

        if constexpr((ret107(*)(CCNode*))(&$CCNode::unscheduleAllSelectors) != (ret107(D::*)())(&D::unscheduleAllSelectors)) {
            modContainer.registerHookEnable(address107, FunctionScrapper::addressOfNonVirtual((ret107(D::*)())(&D::unscheduleAllSelectors)));
        }

        if constexpr((ret108(*)(CCNode*))(&$CCNode::unscheduleUpdate) != (ret108(D::*)())(&D::unscheduleUpdate)) {
            modContainer.registerHookEnable(address108, FunctionScrapper::addressOfNonVirtual((ret108(D::*)())(&D::unscheduleUpdate)));
        }

        if constexpr((ret109(*)(CCNode*, float))(&$CCNode::update) != (ret109(D::*)(float))(&D::update)) {
            modContainer.registerHookEnable(address109, FunctionScrapper::addressOfNonVirtual((ret109(D::*)(float))(&D::update)));
        }

        if constexpr((ret110(*)(CCNode*))(&$CCNode::updateTransform) != (ret110(D::*)())(&D::updateTransform)) {
            modContainer.registerHookEnable(address110, FunctionScrapper::addressOfNonVirtual((ret110(D::*)())(&D::updateTransform)));
        }

        if constexpr((ret111(*)(CCNode*, float, char const*))(&$CCNode::updateTweenAction) != (ret111(D::*)(float, char const*))(&D::updateTweenAction)) {
            modContainer.registerHookEnable(address111, FunctionScrapper::addressOfNonVirtual((ret111(D::*)(float, char const*))(&D::updateTweenAction)));
        }

        if constexpr((ret112(*)(CCNode*))(&$CCNode::visit) != (ret112(D::*)())(&D::visit)) {
            modContainer.registerHookEnable(address112, FunctionScrapper::addressOfNonVirtual((ret112(D::*)())(&D::visit)));
        }

        if constexpr((ret113(*)(CCNode*))(&$CCNode::worldToNodeTransform) != (ret113(D::*)())(&D::worldToNodeTransform)) {
            modContainer.registerHookEnable(address113, FunctionScrapper::addressOfNonVirtual((ret113(D::*)())(&D::worldToNodeTransform)));
        }

        if constexpr((ret114(*)(CCNode*))(&$CCNode::destructor) != (ret114(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address114, FunctionScrapper::addressOfNonVirtual((ret114(D::*)())(&D::destructor)));
        }

        return true;
    }
};

template<class D>
struct $EditorOptionsLayer : EditorOptionsLayer, InterfaceBase {
    $EditorOptionsLayer(const $EditorOptionsLayer& c) : EditorOptionsLayer(c) {}
    $EditorOptionsLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x147b30;

    dupable ret0 onButtonsPerRow(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret0(*)(EditorOptionsLayer*, cocos2d::CCObject*)>(address0)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(EditorOptionsLayer*, cocos2d::CCObject*))(&$EditorOptionsLayer::onButtonsPerRow) != (ret0(D::*)(cocos2d::CCObject*))(&D::onButtonsPerRow)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCObject*))(&D::onButtonsPerRow)));
        }

        return true;
    }
};

template<class D>
struct $CCAnimatedSprite : CCAnimatedSprite, InterfaceBase {
    $CCAnimatedSprite(const $CCAnimatedSprite& c) : CCAnimatedSprite(c) {}
    $CCAnimatedSprite() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x1a6430;

    dupable ret0 runAnimation(gd::string p0) {
        return reinterpret_cast<ret0(*)(CCAnimatedSprite*, gd::string)>(address0)(this, p0);
    }

    using ret1 = void;
    static inline auto address1 = base+0x1a65b0;

    dupable ret1 tweenToAnimation(gd::string p0,float p1) {
        return reinterpret_cast<ret1(*)(CCAnimatedSprite*, gd::string, float)>(address1)(this, p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCAnimatedSprite*, gd::string))(&$CCAnimatedSprite::runAnimation) != (ret0(D::*)(gd::string))(&D::runAnimation)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(gd::string))(&D::runAnimation)));
        }

        if constexpr((ret1(*)(CCAnimatedSprite*, gd::string, float))(&$CCAnimatedSprite::tweenToAnimation) != (ret1(D::*)(gd::string, float))(&D::tweenToAnimation)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(gd::string, float))(&D::tweenToAnimation)));
        }

        return true;
    }
};

template<class D>
struct $CCScheduler : CCScheduler, InterfaceBase {
    $CCScheduler(const $CCScheduler& c) : CCScheduler(c) {}
    $CCScheduler() = delete;

    using ret0 = decltype(declval<cocos2d::CCScheduler>().scheduleSelector(declval<cocos2d::SEL_SCHEDULE>(), declval<cocos2d::CCObject*>(), declval<float>(), declval<unsigned int>(), declval<float>(), declval<bool>()));
    static inline auto address0 = base+0x242b20;

    dupable ret0 scheduleSelector(cocos2d::SEL_SCHEDULE p0,cocos2d::CCObject* p1,float p2,unsigned int p3,float p4,bool p5) {
        return reinterpret_cast<ret0(*)(CCScheduler*, cocos2d::SEL_SCHEDULE, cocos2d::CCObject*, float, unsigned int, float, bool)>(address0)(this, p0, p1, p2, p3, p4, p5);
    }

    using ret1 = decltype(declval<cocos2d::CCScheduler>().scheduleUpdateForTarget(declval<cocos2d::CCObject*>(), declval<int>(), declval<bool>()));
    static inline auto address1 = base+0x2438d0;

    dupable ret1 scheduleUpdateForTarget(cocos2d::CCObject* p0,int p1,bool p2) {
        return reinterpret_cast<ret1(*)(CCScheduler*, cocos2d::CCObject*, int, bool)>(address1)(this, p0, p1, p2);
    }

    using ret2 = decltype(declval<cocos2d::CCScheduler>().unscheduleAllForTarget(declval<cocos2d::CCObject*>()));
    static inline auto address2 = base+0x243e40;

    dupable ret2 unscheduleAllForTarget(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret2(*)(CCScheduler*, cocos2d::CCObject*)>(address2)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCScheduler*, cocos2d::SEL_SCHEDULE, cocos2d::CCObject*, float, unsigned int, float, bool))(&$CCScheduler::scheduleSelector) != (ret0(D::*)(cocos2d::SEL_SCHEDULE, cocos2d::CCObject*, float, unsigned int, float, bool))(&D::scheduleSelector)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::SEL_SCHEDULE, cocos2d::CCObject*, float, unsigned int, float, bool))(&D::scheduleSelector)));
        }

        if constexpr((ret1(*)(CCScheduler*, cocos2d::CCObject*, int, bool))(&$CCScheduler::scheduleUpdateForTarget) != (ret1(D::*)(cocos2d::CCObject*, int, bool))(&D::scheduleUpdateForTarget)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCObject*, int, bool))(&D::scheduleUpdateForTarget)));
        }

        if constexpr((ret2(*)(CCScheduler*, cocos2d::CCObject*))(&$CCScheduler::unscheduleAllForTarget) != (ret2(D::*)(cocos2d::CCObject*))(&D::unscheduleAllForTarget)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(cocos2d::CCObject*))(&D::unscheduleAllForTarget)));
        }

        return true;
    }
};

template<class D>
struct $TextInputDelegate : TextInputDelegate, InterfaceBase {
    $TextInputDelegate(const $TextInputDelegate& c) : TextInputDelegate(c) {}
    $TextInputDelegate() = delete;
    static bool _apply() {

        return true;
    }
};

template<class D>
struct $GameObject : GameObject, InterfaceBase {
    $GameObject(const $GameObject& c) : GameObject(c) {}
    $GameObject() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x2f4ca0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x2fbb90;

    dupable ret1 update(float p0) {
        return reinterpret_cast<ret1(*)(GameObject*, float)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x335b00;

    dupable ret2 setScaleX(float p0) {
        return reinterpret_cast<ret2(*)(GameObject*, float)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x335b90;

    dupable ret3 setScaleY(float p0) {
        return reinterpret_cast<ret3(*)(GameObject*, float)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x335c20;

    dupable ret4 setScale(float p0) {
        return reinterpret_cast<ret4(*)(GameObject*, float)>(address4)(this, p0);
    }

    using ret5 = void;
    static inline auto address5 = base+0x335850;

    dupable ret5 setPosition(cocos2d::CCPoint const& p0) {
        return reinterpret_cast<ret5(*)(GameObject*, cocos2d::CCPoint const&)>(address5)(this, p0);
    }

    using ret6 = void;
    static inline auto address6 = base+0x336280;

    dupable ret6 setVisible(bool p0) {
        return reinterpret_cast<ret6(*)(GameObject*, bool)>(address6)(this, p0);
    }

    using ret7 = void;
    static inline auto address7 = base+0x335970;

    dupable ret7 setRotation(float p0) {
        return reinterpret_cast<ret7(*)(GameObject*, float)>(address7)(this, p0);
    }

    using ret8 = void;
    static inline auto address8 = base+0x335f10;

    dupable ret8 setOpacity(unsigned char p0) {
        return reinterpret_cast<ret8(*)(GameObject*, unsigned char)>(address8)(this, p0);
    }

    using ret9 = bool;
    static inline auto address9 = base+0x2f56a0;

    dupable ret9 initWithTexture(cocos2d::CCTexture2D* p0) {
        return reinterpret_cast<ret9(*)(GameObject*, cocos2d::CCTexture2D*)>(address9)(this, p0);
    }

    using ret10 = void;
    static inline auto address10 = base+0x341f20;

    dupable ret10 setChildColor(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret10(*)(GameObject*, cocos2d::_ccColor3B const&)>(address10)(this, p0);
    }

    using ret11 = void;
    static inline auto address11 = base+0x335a60;

    dupable ret11 setFlipX(bool p0) {
        return reinterpret_cast<ret11(*)(GameObject*, bool)>(address11)(this, p0);
    }

    using ret12 = void;
    static inline auto address12 = base+0x335ab0;

    dupable ret12 setFlipY(bool p0) {
        return reinterpret_cast<ret12(*)(GameObject*, bool)>(address12)(this, p0);
    }

    using ret13 = void;
    static inline auto address13 = base+0x2fbba0;

    dupable ret13 customSetup() {
        return reinterpret_cast<ret13(*)(GameObject*)>(address13)(this);
    }

    using ret14 = void;
    static inline auto address14 = base+0x307f60;

    dupable ret14 setupCustomSprites() {
        return reinterpret_cast<ret14(*)(GameObject*)>(address14)(this);
    }

    using ret15 = void;
    static inline auto address15 = base+0x33a5b0;

    dupable ret15 addMainSpriteToParent(bool p0) {
        return reinterpret_cast<ret15(*)(GameObject*, bool)>(address15)(this, p0);
    }

    using ret16 = void;
    static inline auto address16 = base+0x2fa620;

    dupable ret16 resetObject() {
        return reinterpret_cast<ret16(*)(GameObject*)>(address16)(this);
    }

    using ret17 = void;
    static inline auto address17 = base+0x2fa8f0;

    dupable ret17 triggerObject(GJBaseGameLayer* p0) {
        return reinterpret_cast<ret17(*)(GameObject*, GJBaseGameLayer*)>(address17)(this, p0);
    }

    using ret18 = void;
    static inline auto address18 = base+0x2faf60;

    dupable ret18 activateObject() {
        return reinterpret_cast<ret18(*)(GameObject*)>(address18)(this);
    }

    using ret19 = void;
    static inline auto address19 = base+0x2fb8f0;

    dupable ret19 deactivateObject(bool p0) {
        return reinterpret_cast<ret19(*)(GameObject*, bool)>(address19)(this, p0);
    }

    using ret20 = cocos2d::CCRect*;
    static inline auto address20 = base+0x3352b0;

    dupable ret20 getObjectRect() {
        return reinterpret_cast<ret20(*)(GameObject*)>(address20)(this);
    }

    using ret21 = cocos2d::CCRect*;
    static inline auto address21 = base+0x3352d0;

    dupable ret21 getObjectRect(float p0,float p1) {
        return reinterpret_cast<ret21(*)(GameObject*, float, float)>(address21)(this, p0, p1);
    }

    using ret22 = cocos2d::CCRect*;
    static inline auto address22 = base+0x3354e0;

    dupable ret22 getObjectRect2(float p0,float p1) {
        return reinterpret_cast<ret22(*)(GameObject*, float, float)>(address22)(this, p0, p1);
    }

    using ret23 = cocos2d::CCRect*;
    static inline auto address23 = base+0x3355b0;

    dupable ret23 getObjectTextureRect() {
        return reinterpret_cast<ret23(*)(GameObject*)>(address23)(this);
    }

    using ret24 = void;
    static inline auto address24 = base+0x335750;

    dupable ret24 getRealPosition() {
        return reinterpret_cast<ret24(*)(GameObject*)>(address24)(this);
    }

    using ret25 = void;
    static inline auto address25 = base+0x2fa520;

    dupable ret25 setStartPos(cocos2d::CCPoint p0) {
        return reinterpret_cast<ret25(*)(GameObject*, cocos2d::CCPoint)>(address25)(this, p0);
    }

    using ret26 = void;
    static inline auto address26 = base+0x2fa800;

    dupable ret26 updateStartValues() {
        return reinterpret_cast<ret26(*)(GameObject*)>(address26)(this);
    }

    using ret27 = void;
    static inline auto address27 = base+0xdc1a0;

    dupable ret27 customObjectSetup() {
        return reinterpret_cast<ret27(*)(GameObject*)>(address27)(this);
    }

    using ret28 = gd::string;
    static inline auto address28 = base+0x33d3d0;

    dupable ret28 getSaveString() {
        return reinterpret_cast<ret28(*)(GameObject*)>(address28)(this);
    }

    using ret29 = void;
    static inline auto address29 = base+0x335a40;

    dupable ret29 isFlipX() {
        return reinterpret_cast<ret29(*)(GameObject*)>(address29)(this);
    }

    using ret30 = void;
    static inline auto address30 = base+0x335a50;

    dupable ret30 isFlipY() {
        return reinterpret_cast<ret30(*)(GameObject*)>(address30)(this);
    }

    using ret31 = void;
    static inline auto address31 = base+0x335cb0;

    dupable ret31 setRScaleX(float p0) {
        return reinterpret_cast<ret31(*)(GameObject*, float)>(address31)(this, p0);
    }

    using ret32 = void;
    static inline auto address32 = base+0x335d60;

    dupable ret32 setRScaleY(float p0) {
        return reinterpret_cast<ret32(*)(GameObject*, float)>(address32)(this, p0);
    }

    using ret33 = void;
    static inline auto address33 = base+0x335e10;

    dupable ret33 setRScale(float p0) {
        return reinterpret_cast<ret33(*)(GameObject*, float)>(address33)(this, p0);
    }

    using ret34 = void;
    static inline auto address34 = base+0x335e50;

    dupable ret34 getRScaleX() {
        return reinterpret_cast<ret34(*)(GameObject*)>(address34)(this);
    }

    using ret35 = void;
    static inline auto address35 = base+0x335e80;

    dupable ret35 getRScaleY() {
        return reinterpret_cast<ret35(*)(GameObject*)>(address35)(this);
    }

    using ret36 = void;
    static inline auto address36 = base+0x336970;

    dupable ret36 calculateSpawnXPos() {
        return reinterpret_cast<ret36(*)(GameObject*)>(address36)(this);
    }

    using ret37 = void;
    static inline auto address37 = base+0x336990;

    dupable ret37 triggerActivated(float p0) {
        return reinterpret_cast<ret37(*)(GameObject*, float)>(address37)(this, p0);
    }

    using ret38 = void;
    static inline auto address38 = base+0x3369a0;

    dupable ret38 powerOnObject() {
        return reinterpret_cast<ret38(*)(GameObject*)>(address38)(this);
    }

    using ret39 = void;
    static inline auto address39 = base+0x3369c0;

    dupable ret39 powerOffObject() {
        return reinterpret_cast<ret39(*)(GameObject*)>(address39)(this);
    }

    using ret40 = void;
    static inline auto address40 = base+0x341c90;

    dupable ret40 setObjectColor(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret40(*)(GameObject*, cocos2d::_ccColor3B const&)>(address40)(this, p0);
    }

    using ret41 = void;
    static inline auto address41 = base+0x341ed0;

    dupable ret41 setGlowColor(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret41(*)(GameObject*, cocos2d::_ccColor3B const&)>(address41)(this, p0);
    }

    using ret42 = void;
    static inline auto address42 = base+0x342ad0;

    dupable ret42 getOrientedBox() {
        return reinterpret_cast<ret42(*)(GameObject*)>(address42)(this);
    }

    using ret43 = void;
    static inline auto address43 = base+0x33ad00;

    dupable ret43 addToGroup(int p0) {
        return reinterpret_cast<ret43(*)(GameObject*, int)>(address43)(this, p0);
    }

    using ret44 = void;
    static inline auto address44 = base+0x33ada0;

    dupable ret44 removeFromGroup(int p0) {
        return reinterpret_cast<ret44(*)(GameObject*, int)>(address44)(this, p0);
    }

    using ret45 = void;
    static inline auto address45 = base+0xdc1b0;

    dupable ret45 spawnXPosition() {
        return reinterpret_cast<ret45(*)(GameObject*)>(address45)(this);
    }

    using ret46 = void;
    static inline auto address46 = base+0xdc1d0;

    dupable ret46 getObjectRectDirty() const {
        return reinterpret_cast<ret46(*)(GameObject*)>(address46)(this);
    }

    using ret47 = void;
    static inline auto address47 = base+0xdc1e0;

    dupable ret47 setObjectRectDirty(bool p0) {
        return reinterpret_cast<ret47(*)(GameObject*, bool)>(address47)(this, p0);
    }

    using ret48 = void;
    static inline auto address48 = base+0xdc1f0;

    dupable ret48 getOrientedRectDirty() const {
        return reinterpret_cast<ret48(*)(GameObject*)>(address48)(this);
    }

    using ret49 = void;
    static inline auto address49 = base+0xdc200;

    dupable ret49 setOrientedRectDirty(bool p0) {
        return reinterpret_cast<ret49(*)(GameObject*, bool)>(address49)(this, p0);
    }

    using ret50 = GameObjectType;
    static inline auto address50 = base+0xdc210;

    dupable ret50 getType() const {
        return reinterpret_cast<ret50(*)(GameObject*)>(address50)(this);
    }

    using ret51 = void;
    static inline auto address51 = base+0xdc220;

    dupable ret51 setType(GameObjectType p0) {
        return reinterpret_cast<ret51(*)(GameObject*, GameObjectType)>(address51)(this, p0);
    }

    using ret52 = void;
    static inline auto address52 = base+0xdc230;

    dupable ret52 getStartPos() const {
        return reinterpret_cast<ret52(*)(GameObject*)>(address52)(this);
    }

    using ret53 = void;
    static inline auto address53 = base+0x342a20;

    dupable ret53 activatedByPlayer(GameObject* p0) {
        return reinterpret_cast<ret53(*)(GameObject*, GameObject*)>(address53)(this, p0);
    }

    using ret54 = void;
    static inline auto address54 = base+0x2f7fe0;

    dupable ret54 addColorSprite() {
        return reinterpret_cast<ret54(*)(GameObject*)>(address54)(this);
    }

    using ret55 = void;
    static inline auto address55 = base+0x2fb470;

    dupable ret55 addColorSpriteToParent(bool p0) {
        return reinterpret_cast<ret55(*)(GameObject*, bool)>(address55)(this, p0);
    }

    using ret56 = void;
    static inline auto address56 = base+0x335700;

    dupable ret56 addToTempOffset(float p0,float p1) {
        return reinterpret_cast<ret56(*)(GameObject*, float, float)>(address56)(this, p0, p1);
    }

    using ret57 = void;
    static inline auto address57 = base+0x342b20;

    dupable ret57 calculateOrientedBox() {
        return reinterpret_cast<ret57(*)(GameObject*)>(address57)(this);
    }

    using ret58 = void;
    static inline auto address58 = base+0x342db0;

    dupable ret58 canChangeCustomColor() {
        return reinterpret_cast<ret58(*)(GameObject*)>(address58)(this);
    }

    using ret59 = void;
    static inline auto address59 = base+0x343460;

    dupable ret59 colorForMode(int p0,bool p1) {
        return reinterpret_cast<ret59(*)(GameObject*, int, bool)>(address59)(this, p0, p1);
    }

    using ret60 = void;
    static inline auto address60 = base+0x2f5570;

    dupable ret60 commonSetup() {
        return reinterpret_cast<ret60(*)(GameObject*)>(address60)(this);
    }

    using ret61 = void;
    static inline auto address61 = base+0x33ae30;

    dupable ret61 copyGroups(GameObject* p0) {
        return reinterpret_cast<ret61(*)(GameObject*, GameObject*)>(address61)(this, p0);
    }

    using ret62 = GameObject*;
    static inline auto address62 = base+0x2f5490;

    dupable static ret62 createWithFrame(char const* p0) {
        return reinterpret_cast<ret62(*)(GameObject*, char const*)>(address62)(p0);
    }

    using ret63 = GameObject*;
    static inline auto address63 = base+0x2f4ce0;

    dupable static ret63 createWithKey(int p0) {
        return reinterpret_cast<ret63(*)(GameObject*, int)>(address63)(p0);
    }

    using ret64 = void;
    static inline auto address64 = base+0x336a00;

    dupable ret64 destroyObject() {
        return reinterpret_cast<ret64(*)(GameObject*)>(address64)(this);
    }

    using ret65 = void;
    static inline auto address65 = base+0x33a9e0;

    dupable ret65 determineSlopeDirection() {
        return reinterpret_cast<ret65(*)(GameObject*)>(address65)(this);
    }

    using ret66 = void;
    static inline auto address66 = base+0x343860;

    dupable ret66 getActiveColorForMode(int p0,bool p1) {
        return reinterpret_cast<ret66(*)(GameObject*, int, bool)>(address66)(this, p0, p1);
    }

    using ret67 = void;
    static inline auto address67 = base+0x341bf0;

    dupable ret67 getBallFrame(int p0) {
        return reinterpret_cast<ret67(*)(GameObject*, int)>(address67)(this, p0);
    }

    using ret68 = void;
    static inline auto address68 = base+0x3353d0;

    dupable ret68 getBoxOffset() {
        return reinterpret_cast<ret68(*)(GameObject*)>(address68)(this);
    }

    using ret69 = constcocos2d::_ccColor3B&;
    static inline auto address69 = base+0x343b90;

    dupable ret69 getColorIndex() {
        return reinterpret_cast<ret69(*)(GameObject*)>(address69)(this);
    }

    using ret70 = void;
    static inline auto address70 = base+0x343a20;

    dupable ret70 getDidUpdateLastPosition() {
        return reinterpret_cast<ret70(*)(GameObject*)>(address70)(this);
    }

    using ret71 = int;
    static inline auto address71 = base+0x33ae10;

    dupable ret71 getGroupID(int p0) {
        return reinterpret_cast<ret71(*)(GameObject*, int)>(address71)(this, p0);
    }

    using ret72 = void;
    static inline auto address72 = base+0x3439d0;

    dupable ret72 getLastPosition() {
        return reinterpret_cast<ret72(*)(GameObject*)>(address72)(this);
    }

    using ret73 = void;
    static inline auto address73 = base+0x334c30;

    dupable ret73 getMainColorMode() {
        return reinterpret_cast<ret73(*)(GameObject*)>(address73)(this);
    }

    using ret74 = void;
    static inline auto address74 = base+0x337d70;

    dupable ret74 getObjectZOrder() {
        return reinterpret_cast<ret74(*)(GameObject*)>(address74)(this);
    }

    using ret75 = float;
    static inline auto address75 = base+0x343c10;

    dupable ret75 getObjectRadius() {
        return reinterpret_cast<ret75(*)(GameObject*)>(address75)(this);
    }

    using ret76 = void;
    static inline auto address76 = base+0x341c20;

    dupable ret76 getSecondaryColorMode() {
        return reinterpret_cast<ret76(*)(GameObject*)>(address76)(this);
    }

    using ret77 = void;
    static inline auto address77 = base+0x343a00;

    dupable ret77 getSectionIdx() {
        return reinterpret_cast<ret77(*)(GameObject*)>(address77)(this);
    }

    using ret78 = void;
    static inline auto address78 = base+0x33b110;

    dupable ret78 groupWasDisabled() {
        return reinterpret_cast<ret78(*)(GameObject*)>(address78)(this);
    }

    using ret79 = void;
    static inline auto address79 = base+0x33b0f0;

    dupable ret79 groupWasEnabled() {
        return reinterpret_cast<ret79(*)(GameObject*)>(address79)(this);
    }

    using ret80 = void;
    static inline auto address80 = base+0x342a80;

    dupable ret80 hasBeenActivated() {
        return reinterpret_cast<ret80(*)(GameObject*)>(address80)(this);
    }

    using ret81 = void;
    static inline auto address81 = base+0x342a50;

    dupable ret81 hasBeenActivatedByPlayer(GameObject* p0) {
        return reinterpret_cast<ret81(*)(GameObject*, GameObject*)>(address81)(this, p0);
    }

    using ret82 = void;
    static inline auto address82 = base+0x342f80;

    dupable ret82 hasSecondaryColor() {
        return reinterpret_cast<ret82(*)(GameObject*)>(address82)(this);
    }

    using ret83 = void;
    static inline auto address83 = base+0x3352a0;

    dupable ret83 ignoreEnter() {
        return reinterpret_cast<ret83(*)(GameObject*)>(address83)(this);
    }

    using ret84 = void;
    static inline auto address84 = base+0x335290;

    dupable ret84 ignoreFade() {
        return reinterpret_cast<ret84(*)(GameObject*)>(address84)(this);
    }

    using ret85 = void;
    static inline auto address85 = base+0x343d10;

    dupable ret85 isBasicTrigger() {
        return reinterpret_cast<ret85(*)(GameObject*)>(address85)(this);
    }

    using ret86 = void;
    static inline auto address86 = base+0x343b40;

    dupable ret86 isColorTrigger() {
        return reinterpret_cast<ret86(*)(GameObject*)>(address86)(this);
    }

    using ret87 = void;
    static inline auto address87 = base+0x343a60;

    dupable ret87 isSpawnableTrigger() {
        return reinterpret_cast<ret87(*)(GameObject*)>(address87)(this);
    }

    using ret88 = void;
    static inline auto address88 = base+0x343c40;

    dupable ret88 isSpecialObject() {
        return reinterpret_cast<ret88(*)(GameObject*)>(address88)(this);
    }

    using ret89 = GameObject*;
    static inline auto address89 = base+0x33b720;

    dupable static ret89 objectFromString(gd::string p0,bool p1) {
        return reinterpret_cast<ret89(*)(GameObject*, gd::string, bool)>(address89)(p0, p1);
    }

    using ret90 = void;
    static inline auto address90 = base+0x2fa9d0;

    dupable ret90 playShineEffect() {
        return reinterpret_cast<ret90(*)(GameObject*)>(address90)(this);
    }

    using ret91 = void;
    static inline auto address91 = base+0x335790;

    dupable ret91 quickUpdatePosition() {
        return reinterpret_cast<ret91(*)(GameObject*)>(address91)(this);
    }

    using ret92 = void;
    static inline auto address92 = base+0x2f7f70;

    dupable ret92 removeGlow() {
        return reinterpret_cast<ret92(*)(GameObject*)>(address92)(this);
    }

    using ret93 = void;
    static inline auto address93 = base+0x2fa7e0;

    dupable ret93 resetGroupDisabled() {
        return reinterpret_cast<ret93(*)(GameObject*)>(address93)(this);
    }

    using ret94 = void;
    static inline auto address94 = base+0x33d250;

    dupable ret94 saveActiveColors() {
        return reinterpret_cast<ret94(*)(GameObject*)>(address94)(this);
    }

    using ret95 = void;
    static inline auto address95 = base+0x341f90;

    dupable ret95 selectObject(cocos2d::_ccColor3B p0) {
        return reinterpret_cast<ret95(*)(GameObject*, cocos2d::_ccColor3B)>(address95)(this, p0);
    }

    using ret96 = void;
    static inline auto address96 = base+0x304fc0;

    dupable ret96 setDefaultMainColorMode(int p0) {
        return reinterpret_cast<ret96(*)(GameObject*, int)>(address96)(this, p0);
    }

    using ret97 = void;
    static inline auto address97 = base+0x343a30;

    dupable ret97 setDidUpdateLastPosition(bool const& p0) {
        return reinterpret_cast<ret97(*)(GameObject*, bool const&)>(address97)(this, p0);
    }

    using ret98 = void;
    static inline auto address98 = base+0x336200;

    dupable ret98 setGlowOpacity(unsigned char p0) {
        return reinterpret_cast<ret98(*)(GameObject*, unsigned char)>(address98)(this, p0);
    }

    using ret99 = void;
    static inline auto address99 = base+0x3439e0;

    dupable ret99 setLastPosition(cocos2d::CCPoint const& p0) {
        return reinterpret_cast<ret99(*)(GameObject*, cocos2d::CCPoint const&)>(address99)(this, p0);
    }

    using ret100 = void;
    static inline auto address100 = base+0x342e70;

    dupable ret100 setMainColorMode(int p0) {
        return reinterpret_cast<ret100(*)(GameObject*, int)>(address100)(this, p0);
    }

    using ret101 = void;
    static inline auto address101 = base+0x343a10;

    dupable ret101 setSectionIdx(int const& p0) {
        return reinterpret_cast<ret101(*)(GameObject*, int const&)>(address101)(this, p0);
    }

    using ret102 = void;
    static inline auto address102 = base+0x337dd0;

    dupable ret102 setupCoinArt() {
        return reinterpret_cast<ret102(*)(GameObject*)>(address102)(this);
    }

    using ret103 = void;
    static inline auto address103 = base+0x342800;

    dupable ret103 slopeFloorTop() {
        return reinterpret_cast<ret103(*)(GameObject*)>(address103)(this);
    }

    using ret104 = void;
    static inline auto address104 = base+0x3427e0;

    dupable ret104 slopeWallLeft() {
        return reinterpret_cast<ret104(*)(GameObject*)>(address104)(this);
    }

    using ret105 = void;
    static inline auto address105 = base+0x335eb0;

    dupable ret105 updateCustomScale(float p0) {
        return reinterpret_cast<ret105(*)(GameObject*, float)>(address105)(this, p0);
    }

    using ret106 = void;
    static inline auto address106 = base+0x343340;

    dupable ret106 updateMainColor() {
        return reinterpret_cast<ret106(*)(GameObject*)>(address106)(this);
    }

    using ret107 = void;
    static inline auto address107 = base+0x342b50;

    dupable ret107 updateOrientedBox() {
        return reinterpret_cast<ret107(*)(GameObject*)>(address107)(this);
    }

    using ret108 = void;
    static inline auto address108 = base+0x343740;

    dupable ret108 updateSecondaryColor() {
        return reinterpret_cast<ret108(*)(GameObject*)>(address108)(this);
    }

    using ret109 = void;
    static inline auto address109 = base+0x2fa590;

    dupable ret109 updateStartPos() {
        return reinterpret_cast<ret109(*)(GameObject*)>(address109)(this);
    }

    using ret110 = void;
    static inline auto address110 = base+0x3369e0;

    dupable ret110 updateState() {
        return reinterpret_cast<ret110(*)(GameObject*)>(address110)(this);
    }

    using ret111 = void;
    static inline auto address111 = base+0x337f00;

    dupable ret111 updateSyncedAnimation(float p0) {
        return reinterpret_cast<ret111(*)(GameObject*, float)>(address111)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(GameObject*))(&$GameObject::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(GameObject*, float))(&$GameObject::update) != (ret1(D::*)(float))(&D::update)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)(float))(&D::update)));
        }

        if constexpr((ret2(*)(GameObject*, float))(&$GameObject::setScaleX) != (ret2(D::*)(float))(&D::setScaleX)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)(float))(&D::setScaleX)));
        }

        if constexpr((ret3(*)(GameObject*, float))(&$GameObject::setScaleY) != (ret3(D::*)(float))(&D::setScaleY)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)(float))(&D::setScaleY)));
        }

        if constexpr((ret4(*)(GameObject*, float))(&$GameObject::setScale) != (ret4(D::*)(float))(&D::setScale)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)(float))(&D::setScale)));
        }

        if constexpr((ret5(*)(GameObject*, cocos2d::CCPoint const&))(&$GameObject::setPosition) != (ret5(D::*)(cocos2d::CCPoint const&))(&D::setPosition)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)(cocos2d::CCPoint const&))(&D::setPosition)));
        }

        if constexpr((ret6(*)(GameObject*, bool))(&$GameObject::setVisible) != (ret6(D::*)(bool))(&D::setVisible)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)(bool))(&D::setVisible)));
        }

        if constexpr((ret7(*)(GameObject*, float))(&$GameObject::setRotation) != (ret7(D::*)(float))(&D::setRotation)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)(float))(&D::setRotation)));
        }

        if constexpr((ret8(*)(GameObject*, unsigned char))(&$GameObject::setOpacity) != (ret8(D::*)(unsigned char))(&D::setOpacity)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)(unsigned char))(&D::setOpacity)));
        }

        if constexpr((ret9(*)(GameObject*, cocos2d::CCTexture2D*))(&$GameObject::initWithTexture) != (ret9(D::*)(cocos2d::CCTexture2D*))(&D::initWithTexture)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfVirtual((ret9(D::*)(cocos2d::CCTexture2D*))(&D::initWithTexture)));
        }

        if constexpr((ret10(*)(GameObject*, cocos2d::_ccColor3B const&))(&$GameObject::setChildColor) != (ret10(D::*)(cocos2d::_ccColor3B const&))(&D::setChildColor)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfVirtual((ret10(D::*)(cocos2d::_ccColor3B const&))(&D::setChildColor)));
        }

        if constexpr((ret11(*)(GameObject*, bool))(&$GameObject::setFlipX) != (ret11(D::*)(bool))(&D::setFlipX)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfVirtual((ret11(D::*)(bool))(&D::setFlipX)));
        }

        if constexpr((ret12(*)(GameObject*, bool))(&$GameObject::setFlipY) != (ret12(D::*)(bool))(&D::setFlipY)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfVirtual((ret12(D::*)(bool))(&D::setFlipY)));
        }

        if constexpr((ret13(*)(GameObject*))(&$GameObject::customSetup) != (ret13(D::*)())(&D::customSetup)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfVirtual((ret13(D::*)())(&D::customSetup)));
        }

        if constexpr((ret14(*)(GameObject*))(&$GameObject::setupCustomSprites) != (ret14(D::*)())(&D::setupCustomSprites)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfVirtual((ret14(D::*)())(&D::setupCustomSprites)));
        }

        if constexpr((ret15(*)(GameObject*, bool))(&$GameObject::addMainSpriteToParent) != (ret15(D::*)(bool))(&D::addMainSpriteToParent)) {
            modContainer.registerHookEnable(address15, FunctionScrapper::addressOfVirtual((ret15(D::*)(bool))(&D::addMainSpriteToParent)));
        }

        if constexpr((ret16(*)(GameObject*))(&$GameObject::resetObject) != (ret16(D::*)())(&D::resetObject)) {
            modContainer.registerHookEnable(address16, FunctionScrapper::addressOfVirtual((ret16(D::*)())(&D::resetObject)));
        }

        if constexpr((ret17(*)(GameObject*, GJBaseGameLayer*))(&$GameObject::triggerObject) != (ret17(D::*)(GJBaseGameLayer*))(&D::triggerObject)) {
            modContainer.registerHookEnable(address17, FunctionScrapper::addressOfVirtual((ret17(D::*)(GJBaseGameLayer*))(&D::triggerObject)));
        }

        if constexpr((ret18(*)(GameObject*))(&$GameObject::activateObject) != (ret18(D::*)())(&D::activateObject)) {
            modContainer.registerHookEnable(address18, FunctionScrapper::addressOfVirtual((ret18(D::*)())(&D::activateObject)));
        }

        if constexpr((ret19(*)(GameObject*, bool))(&$GameObject::deactivateObject) != (ret19(D::*)(bool))(&D::deactivateObject)) {
            modContainer.registerHookEnable(address19, FunctionScrapper::addressOfVirtual((ret19(D::*)(bool))(&D::deactivateObject)));
        }

        if constexpr((ret20(*)(GameObject*))(&$GameObject::getObjectRect) != (ret20(D::*)())(&D::getObjectRect)) {
            modContainer.registerHookEnable(address20, FunctionScrapper::addressOfVirtual((ret20(D::*)())(&D::getObjectRect)));
        }

        if constexpr((ret21(*)(GameObject*, float, float))(&$GameObject::getObjectRect) != (ret21(D::*)(float, float))(&D::getObjectRect)) {
            modContainer.registerHookEnable(address21, FunctionScrapper::addressOfVirtual((ret21(D::*)(float, float))(&D::getObjectRect)));
        }

        if constexpr((ret22(*)(GameObject*, float, float))(&$GameObject::getObjectRect2) != (ret22(D::*)(float, float))(&D::getObjectRect2)) {
            modContainer.registerHookEnable(address22, FunctionScrapper::addressOfVirtual((ret22(D::*)(float, float))(&D::getObjectRect2)));
        }

        if constexpr((ret23(*)(GameObject*))(&$GameObject::getObjectTextureRect) != (ret23(D::*)())(&D::getObjectTextureRect)) {
            modContainer.registerHookEnable(address23, FunctionScrapper::addressOfVirtual((ret23(D::*)())(&D::getObjectTextureRect)));
        }

        if constexpr((ret24(*)(GameObject*))(&$GameObject::getRealPosition) != (ret24(D::*)())(&D::getRealPosition)) {
            modContainer.registerHookEnable(address24, FunctionScrapper::addressOfVirtual((ret24(D::*)())(&D::getRealPosition)));
        }

        if constexpr((ret25(*)(GameObject*, cocos2d::CCPoint))(&$GameObject::setStartPos) != (ret25(D::*)(cocos2d::CCPoint))(&D::setStartPos)) {
            modContainer.registerHookEnable(address25, FunctionScrapper::addressOfVirtual((ret25(D::*)(cocos2d::CCPoint))(&D::setStartPos)));
        }

        if constexpr((ret26(*)(GameObject*))(&$GameObject::updateStartValues) != (ret26(D::*)())(&D::updateStartValues)) {
            modContainer.registerHookEnable(address26, FunctionScrapper::addressOfVirtual((ret26(D::*)())(&D::updateStartValues)));
        }

        if constexpr((ret27(*)(GameObject*))(&$GameObject::customObjectSetup) != (ret27(D::*)())(&D::customObjectSetup)) {
            modContainer.registerHookEnable(address27, FunctionScrapper::addressOfVirtual((ret27(D::*)())(&D::customObjectSetup)));
        }

        if constexpr((ret28(*)(GameObject*))(&$GameObject::getSaveString) != (ret28(D::*)())(&D::getSaveString)) {
            modContainer.registerHookEnable(address28, FunctionScrapper::addressOfVirtual((ret28(D::*)())(&D::getSaveString)));
        }

        if constexpr((ret29(*)(GameObject*))(&$GameObject::isFlipX) != (ret29(D::*)())(&D::isFlipX)) {
            modContainer.registerHookEnable(address29, FunctionScrapper::addressOfVirtual((ret29(D::*)())(&D::isFlipX)));
        }

        if constexpr((ret30(*)(GameObject*))(&$GameObject::isFlipY) != (ret30(D::*)())(&D::isFlipY)) {
            modContainer.registerHookEnable(address30, FunctionScrapper::addressOfVirtual((ret30(D::*)())(&D::isFlipY)));
        }

        if constexpr((ret31(*)(GameObject*, float))(&$GameObject::setRScaleX) != (ret31(D::*)(float))(&D::setRScaleX)) {
            modContainer.registerHookEnable(address31, FunctionScrapper::addressOfVirtual((ret31(D::*)(float))(&D::setRScaleX)));
        }

        if constexpr((ret32(*)(GameObject*, float))(&$GameObject::setRScaleY) != (ret32(D::*)(float))(&D::setRScaleY)) {
            modContainer.registerHookEnable(address32, FunctionScrapper::addressOfVirtual((ret32(D::*)(float))(&D::setRScaleY)));
        }

        if constexpr((ret33(*)(GameObject*, float))(&$GameObject::setRScale) != (ret33(D::*)(float))(&D::setRScale)) {
            modContainer.registerHookEnable(address33, FunctionScrapper::addressOfVirtual((ret33(D::*)(float))(&D::setRScale)));
        }

        if constexpr((ret34(*)(GameObject*))(&$GameObject::getRScaleX) != (ret34(D::*)())(&D::getRScaleX)) {
            modContainer.registerHookEnable(address34, FunctionScrapper::addressOfVirtual((ret34(D::*)())(&D::getRScaleX)));
        }

        if constexpr((ret35(*)(GameObject*))(&$GameObject::getRScaleY) != (ret35(D::*)())(&D::getRScaleY)) {
            modContainer.registerHookEnable(address35, FunctionScrapper::addressOfVirtual((ret35(D::*)())(&D::getRScaleY)));
        }

        if constexpr((ret36(*)(GameObject*))(&$GameObject::calculateSpawnXPos) != (ret36(D::*)())(&D::calculateSpawnXPos)) {
            modContainer.registerHookEnable(address36, FunctionScrapper::addressOfVirtual((ret36(D::*)())(&D::calculateSpawnXPos)));
        }

        if constexpr((ret37(*)(GameObject*, float))(&$GameObject::triggerActivated) != (ret37(D::*)(float))(&D::triggerActivated)) {
            modContainer.registerHookEnable(address37, FunctionScrapper::addressOfVirtual((ret37(D::*)(float))(&D::triggerActivated)));
        }

        if constexpr((ret38(*)(GameObject*))(&$GameObject::powerOnObject) != (ret38(D::*)())(&D::powerOnObject)) {
            modContainer.registerHookEnable(address38, FunctionScrapper::addressOfVirtual((ret38(D::*)())(&D::powerOnObject)));
        }

        if constexpr((ret39(*)(GameObject*))(&$GameObject::powerOffObject) != (ret39(D::*)())(&D::powerOffObject)) {
            modContainer.registerHookEnable(address39, FunctionScrapper::addressOfVirtual((ret39(D::*)())(&D::powerOffObject)));
        }

        if constexpr((ret40(*)(GameObject*, cocos2d::_ccColor3B const&))(&$GameObject::setObjectColor) != (ret40(D::*)(cocos2d::_ccColor3B const&))(&D::setObjectColor)) {
            modContainer.registerHookEnable(address40, FunctionScrapper::addressOfVirtual((ret40(D::*)(cocos2d::_ccColor3B const&))(&D::setObjectColor)));
        }

        if constexpr((ret41(*)(GameObject*, cocos2d::_ccColor3B const&))(&$GameObject::setGlowColor) != (ret41(D::*)(cocos2d::_ccColor3B const&))(&D::setGlowColor)) {
            modContainer.registerHookEnable(address41, FunctionScrapper::addressOfVirtual((ret41(D::*)(cocos2d::_ccColor3B const&))(&D::setGlowColor)));
        }

        if constexpr((ret42(*)(GameObject*))(&$GameObject::getOrientedBox) != (ret42(D::*)())(&D::getOrientedBox)) {
            modContainer.registerHookEnable(address42, FunctionScrapper::addressOfVirtual((ret42(D::*)())(&D::getOrientedBox)));
        }

        if constexpr((ret43(*)(GameObject*, int))(&$GameObject::addToGroup) != (ret43(D::*)(int))(&D::addToGroup)) {
            modContainer.registerHookEnable(address43, FunctionScrapper::addressOfVirtual((ret43(D::*)(int))(&D::addToGroup)));
        }

        if constexpr((ret44(*)(GameObject*, int))(&$GameObject::removeFromGroup) != (ret44(D::*)(int))(&D::removeFromGroup)) {
            modContainer.registerHookEnable(address44, FunctionScrapper::addressOfVirtual((ret44(D::*)(int))(&D::removeFromGroup)));
        }

        if constexpr((ret45(*)(GameObject*))(&$GameObject::spawnXPosition) != (ret45(D::*)())(&D::spawnXPosition)) {
            modContainer.registerHookEnable(address45, FunctionScrapper::addressOfVirtual((ret45(D::*)())(&D::spawnXPosition)));
        }

        if constexpr((ret46(*)(GameObject*))(&$GameObject::getObjectRectDirty) != (ret46(D::*)())(&D::getObjectRectDirty)) {
            modContainer.registerHookEnable(address46, FunctionScrapper::addressOfVirtual((ret46(D::*)())(&D::getObjectRectDirty)));
        }

        if constexpr((ret47(*)(GameObject*, bool))(&$GameObject::setObjectRectDirty) != (ret47(D::*)(bool))(&D::setObjectRectDirty)) {
            modContainer.registerHookEnable(address47, FunctionScrapper::addressOfVirtual((ret47(D::*)(bool))(&D::setObjectRectDirty)));
        }

        if constexpr((ret48(*)(GameObject*))(&$GameObject::getOrientedRectDirty) != (ret48(D::*)())(&D::getOrientedRectDirty)) {
            modContainer.registerHookEnable(address48, FunctionScrapper::addressOfVirtual((ret48(D::*)())(&D::getOrientedRectDirty)));
        }

        if constexpr((ret49(*)(GameObject*, bool))(&$GameObject::setOrientedRectDirty) != (ret49(D::*)(bool))(&D::setOrientedRectDirty)) {
            modContainer.registerHookEnable(address49, FunctionScrapper::addressOfVirtual((ret49(D::*)(bool))(&D::setOrientedRectDirty)));
        }

        if constexpr((ret50(*)(GameObject*))(&$GameObject::getType) != (ret50(D::*)())(&D::getType)) {
            modContainer.registerHookEnable(address50, FunctionScrapper::addressOfVirtual((ret50(D::*)())(&D::getType)));
        }

        if constexpr((ret51(*)(GameObject*, GameObjectType))(&$GameObject::setType) != (ret51(D::*)(GameObjectType))(&D::setType)) {
            modContainer.registerHookEnable(address51, FunctionScrapper::addressOfVirtual((ret51(D::*)(GameObjectType))(&D::setType)));
        }

        if constexpr((ret52(*)(GameObject*))(&$GameObject::getStartPos) != (ret52(D::*)())(&D::getStartPos)) {
            modContainer.registerHookEnable(address52, FunctionScrapper::addressOfVirtual((ret52(D::*)())(&D::getStartPos)));
        }

        if constexpr((ret53(*)(GameObject*, GameObject*))(&$GameObject::activatedByPlayer) != (ret53(D::*)(GameObject*))(&D::activatedByPlayer)) {
            modContainer.registerHookEnable(address53, FunctionScrapper::addressOfNonVirtual((ret53(D::*)(GameObject*))(&D::activatedByPlayer)));
        }

        if constexpr((ret54(*)(GameObject*))(&$GameObject::addColorSprite) != (ret54(D::*)())(&D::addColorSprite)) {
            modContainer.registerHookEnable(address54, FunctionScrapper::addressOfNonVirtual((ret54(D::*)())(&D::addColorSprite)));
        }

        if constexpr((ret55(*)(GameObject*, bool))(&$GameObject::addColorSpriteToParent) != (ret55(D::*)(bool))(&D::addColorSpriteToParent)) {
            modContainer.registerHookEnable(address55, FunctionScrapper::addressOfNonVirtual((ret55(D::*)(bool))(&D::addColorSpriteToParent)));
        }

        if constexpr((ret56(*)(GameObject*, float, float))(&$GameObject::addToTempOffset) != (ret56(D::*)(float, float))(&D::addToTempOffset)) {
            modContainer.registerHookEnable(address56, FunctionScrapper::addressOfNonVirtual((ret56(D::*)(float, float))(&D::addToTempOffset)));
        }

        if constexpr((ret57(*)(GameObject*))(&$GameObject::calculateOrientedBox) != (ret57(D::*)())(&D::calculateOrientedBox)) {
            modContainer.registerHookEnable(address57, FunctionScrapper::addressOfNonVirtual((ret57(D::*)())(&D::calculateOrientedBox)));
        }

        if constexpr((ret58(*)(GameObject*))(&$GameObject::canChangeCustomColor) != (ret58(D::*)())(&D::canChangeCustomColor)) {
            modContainer.registerHookEnable(address58, FunctionScrapper::addressOfNonVirtual((ret58(D::*)())(&D::canChangeCustomColor)));
        }

        if constexpr((ret59(*)(GameObject*, int, bool))(&$GameObject::colorForMode) != (ret59(D::*)(int, bool))(&D::colorForMode)) {
            modContainer.registerHookEnable(address59, FunctionScrapper::addressOfNonVirtual((ret59(D::*)(int, bool))(&D::colorForMode)));
        }

        if constexpr((ret60(*)(GameObject*))(&$GameObject::commonSetup) != (ret60(D::*)())(&D::commonSetup)) {
            modContainer.registerHookEnable(address60, FunctionScrapper::addressOfNonVirtual((ret60(D::*)())(&D::commonSetup)));
        }

        if constexpr((ret61(*)(GameObject*, GameObject*))(&$GameObject::copyGroups) != (ret61(D::*)(GameObject*))(&D::copyGroups)) {
            modContainer.registerHookEnable(address61, FunctionScrapper::addressOfNonVirtual((ret61(D::*)(GameObject*))(&D::copyGroups)));
        }

        if constexpr((ret62(*)(GameObject*, char const*))(&$GameObject::createWithFrame) != (ret62(D::*)(char const*))(&D::createWithFrame)) {
            modContainer.registerHookEnable(address62, FunctionScrapper::addressOfNonVirtual((ret62(D::*)(char const*))(&D::createWithFrame)));
        }

        if constexpr((ret63(*)(GameObject*, int))(&$GameObject::createWithKey) != (ret63(D::*)(int))(&D::createWithKey)) {
            modContainer.registerHookEnable(address63, FunctionScrapper::addressOfNonVirtual((ret63(D::*)(int))(&D::createWithKey)));
        }

        if constexpr((ret64(*)(GameObject*))(&$GameObject::destroyObject) != (ret64(D::*)())(&D::destroyObject)) {
            modContainer.registerHookEnable(address64, FunctionScrapper::addressOfNonVirtual((ret64(D::*)())(&D::destroyObject)));
        }

        if constexpr((ret65(*)(GameObject*))(&$GameObject::determineSlopeDirection) != (ret65(D::*)())(&D::determineSlopeDirection)) {
            modContainer.registerHookEnable(address65, FunctionScrapper::addressOfNonVirtual((ret65(D::*)())(&D::determineSlopeDirection)));
        }

        if constexpr((ret66(*)(GameObject*, int, bool))(&$GameObject::getActiveColorForMode) != (ret66(D::*)(int, bool))(&D::getActiveColorForMode)) {
            modContainer.registerHookEnable(address66, FunctionScrapper::addressOfNonVirtual((ret66(D::*)(int, bool))(&D::getActiveColorForMode)));
        }

        if constexpr((ret67(*)(GameObject*, int))(&$GameObject::getBallFrame) != (ret67(D::*)(int))(&D::getBallFrame)) {
            modContainer.registerHookEnable(address67, FunctionScrapper::addressOfNonVirtual((ret67(D::*)(int))(&D::getBallFrame)));
        }

        if constexpr((ret68(*)(GameObject*))(&$GameObject::getBoxOffset) != (ret68(D::*)())(&D::getBoxOffset)) {
            modContainer.registerHookEnable(address68, FunctionScrapper::addressOfNonVirtual((ret68(D::*)())(&D::getBoxOffset)));
        }

        if constexpr((ret69(*)(GameObject*))(&$GameObject::getColorIndex) != (ret69(D::*)())(&D::getColorIndex)) {
            modContainer.registerHookEnable(address69, FunctionScrapper::addressOfNonVirtual((ret69(D::*)())(&D::getColorIndex)));
        }

        if constexpr((ret70(*)(GameObject*))(&$GameObject::getDidUpdateLastPosition) != (ret70(D::*)())(&D::getDidUpdateLastPosition)) {
            modContainer.registerHookEnable(address70, FunctionScrapper::addressOfNonVirtual((ret70(D::*)())(&D::getDidUpdateLastPosition)));
        }

        if constexpr((ret71(*)(GameObject*, int))(&$GameObject::getGroupID) != (ret71(D::*)(int))(&D::getGroupID)) {
            modContainer.registerHookEnable(address71, FunctionScrapper::addressOfNonVirtual((ret71(D::*)(int))(&D::getGroupID)));
        }

        if constexpr((ret72(*)(GameObject*))(&$GameObject::getLastPosition) != (ret72(D::*)())(&D::getLastPosition)) {
            modContainer.registerHookEnable(address72, FunctionScrapper::addressOfNonVirtual((ret72(D::*)())(&D::getLastPosition)));
        }

        if constexpr((ret73(*)(GameObject*))(&$GameObject::getMainColorMode) != (ret73(D::*)())(&D::getMainColorMode)) {
            modContainer.registerHookEnable(address73, FunctionScrapper::addressOfNonVirtual((ret73(D::*)())(&D::getMainColorMode)));
        }

        if constexpr((ret74(*)(GameObject*))(&$GameObject::getObjectZOrder) != (ret74(D::*)())(&D::getObjectZOrder)) {
            modContainer.registerHookEnable(address74, FunctionScrapper::addressOfNonVirtual((ret74(D::*)())(&D::getObjectZOrder)));
        }

        if constexpr((ret75(*)(GameObject*))(&$GameObject::getObjectRadius) != (ret75(D::*)())(&D::getObjectRadius)) {
            modContainer.registerHookEnable(address75, FunctionScrapper::addressOfNonVirtual((ret75(D::*)())(&D::getObjectRadius)));
        }

        if constexpr((ret76(*)(GameObject*))(&$GameObject::getSecondaryColorMode) != (ret76(D::*)())(&D::getSecondaryColorMode)) {
            modContainer.registerHookEnable(address76, FunctionScrapper::addressOfNonVirtual((ret76(D::*)())(&D::getSecondaryColorMode)));
        }

        if constexpr((ret77(*)(GameObject*))(&$GameObject::getSectionIdx) != (ret77(D::*)())(&D::getSectionIdx)) {
            modContainer.registerHookEnable(address77, FunctionScrapper::addressOfNonVirtual((ret77(D::*)())(&D::getSectionIdx)));
        }

        if constexpr((ret78(*)(GameObject*))(&$GameObject::groupWasDisabled) != (ret78(D::*)())(&D::groupWasDisabled)) {
            modContainer.registerHookEnable(address78, FunctionScrapper::addressOfNonVirtual((ret78(D::*)())(&D::groupWasDisabled)));
        }

        if constexpr((ret79(*)(GameObject*))(&$GameObject::groupWasEnabled) != (ret79(D::*)())(&D::groupWasEnabled)) {
            modContainer.registerHookEnable(address79, FunctionScrapper::addressOfNonVirtual((ret79(D::*)())(&D::groupWasEnabled)));
        }

        if constexpr((ret80(*)(GameObject*))(&$GameObject::hasBeenActivated) != (ret80(D::*)())(&D::hasBeenActivated)) {
            modContainer.registerHookEnable(address80, FunctionScrapper::addressOfNonVirtual((ret80(D::*)())(&D::hasBeenActivated)));
        }

        if constexpr((ret81(*)(GameObject*, GameObject*))(&$GameObject::hasBeenActivatedByPlayer) != (ret81(D::*)(GameObject*))(&D::hasBeenActivatedByPlayer)) {
            modContainer.registerHookEnable(address81, FunctionScrapper::addressOfNonVirtual((ret81(D::*)(GameObject*))(&D::hasBeenActivatedByPlayer)));
        }

        if constexpr((ret82(*)(GameObject*))(&$GameObject::hasSecondaryColor) != (ret82(D::*)())(&D::hasSecondaryColor)) {
            modContainer.registerHookEnable(address82, FunctionScrapper::addressOfNonVirtual((ret82(D::*)())(&D::hasSecondaryColor)));
        }

        if constexpr((ret83(*)(GameObject*))(&$GameObject::ignoreEnter) != (ret83(D::*)())(&D::ignoreEnter)) {
            modContainer.registerHookEnable(address83, FunctionScrapper::addressOfNonVirtual((ret83(D::*)())(&D::ignoreEnter)));
        }

        if constexpr((ret84(*)(GameObject*))(&$GameObject::ignoreFade) != (ret84(D::*)())(&D::ignoreFade)) {
            modContainer.registerHookEnable(address84, FunctionScrapper::addressOfNonVirtual((ret84(D::*)())(&D::ignoreFade)));
        }

        if constexpr((ret85(*)(GameObject*))(&$GameObject::isBasicTrigger) != (ret85(D::*)())(&D::isBasicTrigger)) {
            modContainer.registerHookEnable(address85, FunctionScrapper::addressOfNonVirtual((ret85(D::*)())(&D::isBasicTrigger)));
        }

        if constexpr((ret86(*)(GameObject*))(&$GameObject::isColorTrigger) != (ret86(D::*)())(&D::isColorTrigger)) {
            modContainer.registerHookEnable(address86, FunctionScrapper::addressOfNonVirtual((ret86(D::*)())(&D::isColorTrigger)));
        }

        if constexpr((ret87(*)(GameObject*))(&$GameObject::isSpawnableTrigger) != (ret87(D::*)())(&D::isSpawnableTrigger)) {
            modContainer.registerHookEnable(address87, FunctionScrapper::addressOfNonVirtual((ret87(D::*)())(&D::isSpawnableTrigger)));
        }

        if constexpr((ret88(*)(GameObject*))(&$GameObject::isSpecialObject) != (ret88(D::*)())(&D::isSpecialObject)) {
            modContainer.registerHookEnable(address88, FunctionScrapper::addressOfNonVirtual((ret88(D::*)())(&D::isSpecialObject)));
        }

        if constexpr((ret89(*)(GameObject*, gd::string, bool))(&$GameObject::objectFromString) != (ret89(D::*)(gd::string, bool))(&D::objectFromString)) {
            modContainer.registerHookEnable(address89, FunctionScrapper::addressOfNonVirtual((ret89(D::*)(gd::string, bool))(&D::objectFromString)));
        }

        if constexpr((ret90(*)(GameObject*))(&$GameObject::playShineEffect) != (ret90(D::*)())(&D::playShineEffect)) {
            modContainer.registerHookEnable(address90, FunctionScrapper::addressOfNonVirtual((ret90(D::*)())(&D::playShineEffect)));
        }

        if constexpr((ret91(*)(GameObject*))(&$GameObject::quickUpdatePosition) != (ret91(D::*)())(&D::quickUpdatePosition)) {
            modContainer.registerHookEnable(address91, FunctionScrapper::addressOfNonVirtual((ret91(D::*)())(&D::quickUpdatePosition)));
        }

        if constexpr((ret92(*)(GameObject*))(&$GameObject::removeGlow) != (ret92(D::*)())(&D::removeGlow)) {
            modContainer.registerHookEnable(address92, FunctionScrapper::addressOfNonVirtual((ret92(D::*)())(&D::removeGlow)));
        }

        if constexpr((ret93(*)(GameObject*))(&$GameObject::resetGroupDisabled) != (ret93(D::*)())(&D::resetGroupDisabled)) {
            modContainer.registerHookEnable(address93, FunctionScrapper::addressOfNonVirtual((ret93(D::*)())(&D::resetGroupDisabled)));
        }

        if constexpr((ret94(*)(GameObject*))(&$GameObject::saveActiveColors) != (ret94(D::*)())(&D::saveActiveColors)) {
            modContainer.registerHookEnable(address94, FunctionScrapper::addressOfNonVirtual((ret94(D::*)())(&D::saveActiveColors)));
        }

        if constexpr((ret95(*)(GameObject*, cocos2d::_ccColor3B))(&$GameObject::selectObject) != (ret95(D::*)(cocos2d::_ccColor3B))(&D::selectObject)) {
            modContainer.registerHookEnable(address95, FunctionScrapper::addressOfNonVirtual((ret95(D::*)(cocos2d::_ccColor3B))(&D::selectObject)));
        }

        if constexpr((ret96(*)(GameObject*, int))(&$GameObject::setDefaultMainColorMode) != (ret96(D::*)(int))(&D::setDefaultMainColorMode)) {
            modContainer.registerHookEnable(address96, FunctionScrapper::addressOfNonVirtual((ret96(D::*)(int))(&D::setDefaultMainColorMode)));
        }

        if constexpr((ret97(*)(GameObject*, bool const&))(&$GameObject::setDidUpdateLastPosition) != (ret97(D::*)(bool const&))(&D::setDidUpdateLastPosition)) {
            modContainer.registerHookEnable(address97, FunctionScrapper::addressOfNonVirtual((ret97(D::*)(bool const&))(&D::setDidUpdateLastPosition)));
        }

        if constexpr((ret98(*)(GameObject*, unsigned char))(&$GameObject::setGlowOpacity) != (ret98(D::*)(unsigned char))(&D::setGlowOpacity)) {
            modContainer.registerHookEnable(address98, FunctionScrapper::addressOfNonVirtual((ret98(D::*)(unsigned char))(&D::setGlowOpacity)));
        }

        if constexpr((ret99(*)(GameObject*, cocos2d::CCPoint const&))(&$GameObject::setLastPosition) != (ret99(D::*)(cocos2d::CCPoint const&))(&D::setLastPosition)) {
            modContainer.registerHookEnable(address99, FunctionScrapper::addressOfNonVirtual((ret99(D::*)(cocos2d::CCPoint const&))(&D::setLastPosition)));
        }

        if constexpr((ret100(*)(GameObject*, int))(&$GameObject::setMainColorMode) != (ret100(D::*)(int))(&D::setMainColorMode)) {
            modContainer.registerHookEnable(address100, FunctionScrapper::addressOfNonVirtual((ret100(D::*)(int))(&D::setMainColorMode)));
        }

        if constexpr((ret101(*)(GameObject*, int const&))(&$GameObject::setSectionIdx) != (ret101(D::*)(int const&))(&D::setSectionIdx)) {
            modContainer.registerHookEnable(address101, FunctionScrapper::addressOfNonVirtual((ret101(D::*)(int const&))(&D::setSectionIdx)));
        }

        if constexpr((ret102(*)(GameObject*))(&$GameObject::setupCoinArt) != (ret102(D::*)())(&D::setupCoinArt)) {
            modContainer.registerHookEnable(address102, FunctionScrapper::addressOfNonVirtual((ret102(D::*)())(&D::setupCoinArt)));
        }

        if constexpr((ret103(*)(GameObject*))(&$GameObject::slopeFloorTop) != (ret103(D::*)())(&D::slopeFloorTop)) {
            modContainer.registerHookEnable(address103, FunctionScrapper::addressOfNonVirtual((ret103(D::*)())(&D::slopeFloorTop)));
        }

        if constexpr((ret104(*)(GameObject*))(&$GameObject::slopeWallLeft) != (ret104(D::*)())(&D::slopeWallLeft)) {
            modContainer.registerHookEnable(address104, FunctionScrapper::addressOfNonVirtual((ret104(D::*)())(&D::slopeWallLeft)));
        }

        if constexpr((ret105(*)(GameObject*, float))(&$GameObject::updateCustomScale) != (ret105(D::*)(float))(&D::updateCustomScale)) {
            modContainer.registerHookEnable(address105, FunctionScrapper::addressOfNonVirtual((ret105(D::*)(float))(&D::updateCustomScale)));
        }

        if constexpr((ret106(*)(GameObject*))(&$GameObject::updateMainColor) != (ret106(D::*)())(&D::updateMainColor)) {
            modContainer.registerHookEnable(address106, FunctionScrapper::addressOfNonVirtual((ret106(D::*)())(&D::updateMainColor)));
        }

        if constexpr((ret107(*)(GameObject*))(&$GameObject::updateOrientedBox) != (ret107(D::*)())(&D::updateOrientedBox)) {
            modContainer.registerHookEnable(address107, FunctionScrapper::addressOfNonVirtual((ret107(D::*)())(&D::updateOrientedBox)));
        }

        if constexpr((ret108(*)(GameObject*))(&$GameObject::updateSecondaryColor) != (ret108(D::*)())(&D::updateSecondaryColor)) {
            modContainer.registerHookEnable(address108, FunctionScrapper::addressOfNonVirtual((ret108(D::*)())(&D::updateSecondaryColor)));
        }

        if constexpr((ret109(*)(GameObject*))(&$GameObject::updateStartPos) != (ret109(D::*)())(&D::updateStartPos)) {
            modContainer.registerHookEnable(address109, FunctionScrapper::addressOfNonVirtual((ret109(D::*)())(&D::updateStartPos)));
        }

        if constexpr((ret110(*)(GameObject*))(&$GameObject::updateState) != (ret110(D::*)())(&D::updateState)) {
            modContainer.registerHookEnable(address110, FunctionScrapper::addressOfNonVirtual((ret110(D::*)())(&D::updateState)));
        }

        if constexpr((ret111(*)(GameObject*, float))(&$GameObject::updateSyncedAnimation) != (ret111(D::*)(float))(&D::updateSyncedAnimation)) {
            modContainer.registerHookEnable(address111, FunctionScrapper::addressOfNonVirtual((ret111(D::*)(float))(&D::updateSyncedAnimation)));
        }

        return true;
    }
};

template<class D>
struct $CCAnimate : CCAnimate, InterfaceBase {
    $CCAnimate(const $CCAnimate& c) : CCAnimate(c) {}
    $CCAnimate() = delete;

    using ret0 = cocos2d::CCAnimate*;
    static inline auto address0 = base+0x1f8fc0;

    dupable static ret0 create(cocos2d::CCAnimation* p0) {
        return reinterpret_cast<ret0(*)(CCAnimate*, cocos2d::CCAnimation*)>(address0)(p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCAnimate*, cocos2d::CCAnimation*))(&$CCAnimate::create) != (ret0(D::*)(cocos2d::CCAnimation*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCAnimation*))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCMenu : CCMenu, InterfaceBase {
    $CCMenu(const $CCMenu& c) : CCMenu(c) {}
    $CCMenu() = delete;

    using ret0 = decltype(declval<cocos2d::CCMenu>().alignItemsHorizontallyWithPadding(declval<float>()));
    static inline auto address0 = base+0x4393e0;

    dupable ret0 alignItemsHorizontallyWithPadding(float p0) {
        return reinterpret_cast<ret0(*)(CCMenu*, float)>(address0)(this, p0);
    }

    using ret1 = decltype(declval<cocos2d::CCMenu>().alignItemsVerticallyWithPadding(declval<float>()));
    static inline auto address1 = base+0x439190;

    dupable ret1 alignItemsVerticallyWithPadding(float p0) {
        return reinterpret_cast<ret1(*)(CCMenu*, float)>(address1)(this, p0);
    }

    using ret2 = cocos2d::CCMenu*;
    static inline auto address2 = base+0x438720;

    dupable static ret2 create() {
        return reinterpret_cast<ret2(*)(CCMenu*)>(address2)();
    }

    using ret3 = cocos2d::CCMenu*;
    static inline auto address3 = base+0x4387e0;

    dupable static ret3 createWithArray(cocos2d::CCArray* p0) {
        return reinterpret_cast<ret3(*)(CCMenu*, cocos2d::CCArray*)>(address3)(p0);
    }

    using ret4 = cocos2d::CCMenu*;
    static inline auto address4 = base+0x438b80;

    dupable static ret4 createWithItem(cocos2d::CCMenuItem* p0) {
        return reinterpret_cast<ret4(*)(CCMenu*, cocos2d::CCMenuItem*)>(address4)(p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCMenu*, float))(&$CCMenu::alignItemsHorizontallyWithPadding) != (ret0(D::*)(float))(&D::alignItemsHorizontallyWithPadding)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(float))(&D::alignItemsHorizontallyWithPadding)));
        }

        if constexpr((ret1(*)(CCMenu*, float))(&$CCMenu::alignItemsVerticallyWithPadding) != (ret1(D::*)(float))(&D::alignItemsVerticallyWithPadding)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(float))(&D::alignItemsVerticallyWithPadding)));
        }

        if constexpr((ret2(*)(CCMenu*))(&$CCMenu::create) != (ret2(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::create)));
        }

        if constexpr((ret3(*)(CCMenu*, cocos2d::CCArray*))(&$CCMenu::createWithArray) != (ret3(D::*)(cocos2d::CCArray*))(&D::createWithArray)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(cocos2d::CCArray*))(&D::createWithArray)));
        }

        if constexpr((ret4(*)(CCMenu*, cocos2d::CCMenuItem*))(&$CCMenu::createWithItem) != (ret4(D::*)(cocos2d::CCMenuItem*))(&D::createWithItem)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(cocos2d::CCMenuItem*))(&D::createWithItem)));
        }

        return true;
    }
};

template<class D>
struct $CCTouch : CCTouch, InterfaceBase {
    $CCTouch(const $CCTouch& c) : CCTouch(c) {}
    $CCTouch() = delete;

    using ret0 = decltype(declval<cocos2d::CCTouch>().getDelta());
    static inline auto address0 = base+0x38340;

    dupable ret0 getDelta() const {
        return reinterpret_cast<ret0(*)(CCTouch*)>(address0)(this);
    }

    using ret1 = decltype(declval<cocos2d::CCTouch>().getLocationInView());
    static inline auto address1 = base+0x38250;

    dupable ret1 getLocationInView() const {
        return reinterpret_cast<ret1(*)(CCTouch*)>(address1)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCTouch*))(&$CCTouch::getDelta) != (ret0(D::*)())(&D::getDelta)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::getDelta)));
        }

        if constexpr((ret1(*)(CCTouch*))(&$CCTouch::getLocationInView) != (ret1(D::*)())(&D::getLocationInView)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::getLocationInView)));
        }

        return true;
    }
};

template<class D>
struct $CCLayerColor : CCLayerColor, InterfaceBase {
    $CCLayerColor(const $CCLayerColor& c) : CCLayerColor(c) {}
    $CCLayerColor() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x274320;

    dupable void constructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = cocos2d::CCLayerColor*;
    static inline auto address1 = base+0x2745e0;

    dupable static ret1 create(cocos2d::_ccColor4B const& p0,float p1,float p2) {
        return reinterpret_cast<ret1(*)(CCLayerColor*, cocos2d::_ccColor4B const&, float, float)>(address1)(p0, p1, p2);
    }

    using ret2 = decltype(declval<cocos2d::CCLayerColor>().draw());
    static inline auto address2 = base+0x274b50;

    dupable ret2 draw() {
        return reinterpret_cast<ret2(*)(CCLayerColor*)>(address2)(this);
    }

    using ret3 = decltype(declval<cocos2d::CCLayerColor>().getBlendFunc());
    static inline auto address3 = base+0x274480;

    dupable ret3 getBlendFunc() {
        return reinterpret_cast<ret3(*)(CCLayerColor*)>(address3)(this);
    }

    using ret4 = decltype(declval<cocos2d::CCLayerColor>().init());
    static inline auto address4 = base+0x274800;

    dupable ret4 init() {
        return reinterpret_cast<ret4(*)(CCLayerColor*)>(address4)(this);
    }

    using ret5 = decltype(declval<cocos2d::CCLayerColor>().initWithColor(declval<cocos2d::_ccColor4B const&>()));
    static inline auto address5 = base+0x2749a0;

    dupable ret5 initWithColor(cocos2d::_ccColor4B const& p0) {
        return reinterpret_cast<ret5(*)(CCLayerColor*, cocos2d::_ccColor4B const&)>(address5)(this, p0);
    }

    using ret6 = decltype(declval<cocos2d::CCLayerColor>().initWithColor(declval<cocos2d::_ccColor4B const&>(), declval<float>(), declval<float>()));
    static inline auto address6 = base+0x274850;

    dupable ret6 initWithColor(cocos2d::_ccColor4B const& p0,float p1,float p2) {
        return reinterpret_cast<ret6(*)(CCLayerColor*, cocos2d::_ccColor4B const&, float, float)>(address6)(this, p0, p1, p2);
    }

    using ret7 = decltype(declval<cocos2d::CCLayerColor>().setBlendFunc(declval<cocos2d::_ccBlendFunc>()));
    static inline auto address7 = base+0x2744a0;

    dupable ret7 setBlendFunc(cocos2d::_ccBlendFunc p0) {
        return reinterpret_cast<ret7(*)(CCLayerColor*, cocos2d::_ccBlendFunc)>(address7)(this, p0);
    }

    using ret8 = decltype(declval<cocos2d::CCLayerColor>().setColor(declval<cocos2d::_ccColor3B const&>()));
    static inline auto address8 = base+0x274c20;

    dupable ret8 setColor(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret8(*)(CCLayerColor*, cocos2d::_ccColor3B const&)>(address8)(this, p0);
    }

    using ret9 = decltype(declval<cocos2d::CCLayerColor>().setContentSize(declval<cocos2d::CCSize const&>()));
    static inline auto address9 = base+0x2749f0;

    dupable ret9 setContentSize(cocos2d::CCSize const& p0) {
        return reinterpret_cast<ret9(*)(CCLayerColor*, cocos2d::CCSize const&)>(address9)(this, p0);
    }

    using ret10 = decltype(declval<cocos2d::CCLayerColor>().setOpacity(declval<unsigned char>()));
    static inline auto address10 = base+0x274db0;

    dupable ret10 setOpacity(unsigned char p0) {
        return reinterpret_cast<ret10(*)(CCLayerColor*, unsigned char)>(address10)(this, p0);
    }

    using ret11 = decltype(declval<cocos2d::CCLayerColor>().updateColor());
    static inline auto address11 = base+0x274ae0;

    dupable ret11 updateColor() {
        return reinterpret_cast<ret11(*)(CCLayerColor*)>(address11)(this);
    }

    using ret12 = void;
    static inline auto address12 = base+0x2743d0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address12)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCLayerColor*))(&$CCLayerColor::constructor) != (ret0(D::*)())(&D::constructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::constructor)));
        }

        if constexpr((ret1(*)(CCLayerColor*, cocos2d::_ccColor4B const&, float, float))(&$CCLayerColor::create) != (ret1(D::*)(cocos2d::_ccColor4B const&, float, float))(&D::create)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::_ccColor4B const&, float, float))(&D::create)));
        }

        if constexpr((ret2(*)(CCLayerColor*))(&$CCLayerColor::draw) != (ret2(D::*)())(&D::draw)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::draw)));
        }

        if constexpr((ret3(*)(CCLayerColor*))(&$CCLayerColor::getBlendFunc) != (ret3(D::*)())(&D::getBlendFunc)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::getBlendFunc)));
        }

        if constexpr((ret4(*)(CCLayerColor*))(&$CCLayerColor::init) != (ret4(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)())(&D::init)));
        }

        if constexpr((ret5(*)(CCLayerColor*, cocos2d::_ccColor4B const&))(&$CCLayerColor::initWithColor) != (ret5(D::*)(cocos2d::_ccColor4B const&))(&D::initWithColor)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)(cocos2d::_ccColor4B const&))(&D::initWithColor)));
        }

        if constexpr((ret6(*)(CCLayerColor*, cocos2d::_ccColor4B const&, float, float))(&$CCLayerColor::initWithColor) != (ret6(D::*)(cocos2d::_ccColor4B const&, float, float))(&D::initWithColor)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)(cocos2d::_ccColor4B const&, float, float))(&D::initWithColor)));
        }

        if constexpr((ret7(*)(CCLayerColor*, cocos2d::_ccBlendFunc))(&$CCLayerColor::setBlendFunc) != (ret7(D::*)(cocos2d::_ccBlendFunc))(&D::setBlendFunc)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)(cocos2d::_ccBlendFunc))(&D::setBlendFunc)));
        }

        if constexpr((ret8(*)(CCLayerColor*, cocos2d::_ccColor3B const&))(&$CCLayerColor::setColor) != (ret8(D::*)(cocos2d::_ccColor3B const&))(&D::setColor)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfNonVirtual((ret8(D::*)(cocos2d::_ccColor3B const&))(&D::setColor)));
        }

        if constexpr((ret9(*)(CCLayerColor*, cocos2d::CCSize const&))(&$CCLayerColor::setContentSize) != (ret9(D::*)(cocos2d::CCSize const&))(&D::setContentSize)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfNonVirtual((ret9(D::*)(cocos2d::CCSize const&))(&D::setContentSize)));
        }

        if constexpr((ret10(*)(CCLayerColor*, unsigned char))(&$CCLayerColor::setOpacity) != (ret10(D::*)(unsigned char))(&D::setOpacity)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfNonVirtual((ret10(D::*)(unsigned char))(&D::setOpacity)));
        }

        if constexpr((ret11(*)(CCLayerColor*))(&$CCLayerColor::updateColor) != (ret11(D::*)())(&D::updateColor)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfNonVirtual((ret11(D::*)())(&D::updateColor)));
        }

        if constexpr((ret12(*)(CCLayerColor*))(&$CCLayerColor::destructor) != (ret12(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfNonVirtual((ret12(D::*)())(&D::destructor)));
        }

        return true;
    }
};

template<class D>
struct $MenuGameLayer : MenuGameLayer, InterfaceBase {
    $MenuGameLayer(const $MenuGameLayer& c) : MenuGameLayer(c) {}
    $MenuGameLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x28fdc0;

    dupable ret0 resetPlayer() {
        return reinterpret_cast<ret0(*)(MenuGameLayer*)>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x28fa70;

    dupable ret1 update(float p0) {
        return reinterpret_cast<ret1(*)(MenuGameLayer*, float)>(address1)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(MenuGameLayer*))(&$MenuGameLayer::resetPlayer) != (ret0(D::*)())(&D::resetPlayer)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::resetPlayer)));
        }

        if constexpr((ret1(*)(MenuGameLayer*, float))(&$MenuGameLayer::update) != (ret1(D::*)(float))(&D::update)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(float))(&D::update)));
        }

        return true;
    }
};

template<class D>
struct $CCClippingNode : CCClippingNode, InterfaceBase {
    $CCClippingNode(const $CCClippingNode& c) : CCClippingNode(c) {}
    $CCClippingNode() = delete;

    using ret0 = cocos2d::CCClippingNode*;
    static inline auto address0 = base+0x4192a0;

    dupable static ret0 create() {
        return reinterpret_cast<ret0(*)(CCClippingNode*)>(address0)();
    }

    using ret1 = cocos2d::CCClippingNode*;
    static inline auto address1 = base+0x419330;

    dupable static ret1 create(cocos2d::CCNode* p0) {
        return reinterpret_cast<ret1(*)(CCClippingNode*, cocos2d::CCNode*)>(address1)(p0);
    }

    using ret2 = decltype(declval<cocos2d::CCClippingNode>().getAlphaThreshold());
    static inline auto address2 = base+0x419a10;

    dupable ret2 getAlphaThreshold() const {
        return reinterpret_cast<ret2(*)(CCClippingNode*)>(address2)(this);
    }

    using ret3 = decltype(declval<cocos2d::CCClippingNode>().getStencil());
    static inline auto address3 = base+0x4199c0;

    dupable ret3 getStencil() const {
        return reinterpret_cast<ret3(*)(CCClippingNode*)>(address3)(this);
    }

    using ret4 = decltype(declval<cocos2d::CCClippingNode>().isInverted());
    static inline auto address4 = base+0x419a30;

    dupable ret4 isInverted() const {
        return reinterpret_cast<ret4(*)(CCClippingNode*)>(address4)(this);
    }

    using ret5 = decltype(declval<cocos2d::CCClippingNode>().onEnter());
    static inline auto address5 = base+0x419470;

    dupable ret5 onEnter() {
        return reinterpret_cast<ret5(*)(CCClippingNode*)>(address5)(this);
    }

    using ret6 = decltype(declval<cocos2d::CCClippingNode>().onEnterTransitionDidFinish());
    static inline auto address6 = base+0x4194a0;

    dupable ret6 onEnterTransitionDidFinish() {
        return reinterpret_cast<ret6(*)(CCClippingNode*)>(address6)(this);
    }

    using ret7 = decltype(declval<cocos2d::CCClippingNode>().onExit());
    static inline auto address7 = base+0x419500;

    dupable ret7 onExit() {
        return reinterpret_cast<ret7(*)(CCClippingNode*)>(address7)(this);
    }

    using ret8 = decltype(declval<cocos2d::CCClippingNode>().onExitTransitionDidStart());
    static inline auto address8 = base+0x4194d0;

    dupable ret8 onExitTransitionDidStart() {
        return reinterpret_cast<ret8(*)(CCClippingNode*)>(address8)(this);
    }

    using ret9 = decltype(declval<cocos2d::CCClippingNode>().setAlphaThreshold(declval<float>()));
    static inline auto address9 = base+0x419a20;

    dupable ret9 setAlphaThreshold(float p0) {
        return reinterpret_cast<ret9(*)(CCClippingNode*, float)>(address9)(this, p0);
    }

    using ret10 = decltype(declval<cocos2d::CCClippingNode>().setInverted(declval<bool>()));
    static inline auto address10 = base+0x419a40;

    dupable ret10 setInverted(bool p0) {
        return reinterpret_cast<ret10(*)(CCClippingNode*, bool)>(address10)(this, p0);
    }

    using ret11 = decltype(declval<cocos2d::CCClippingNode>().setStencil(declval<cocos2d::CCNode*>()));
    static inline auto address11 = base+0x4199d0;

    dupable ret11 setStencil(cocos2d::CCNode* p0) {
        return reinterpret_cast<ret11(*)(CCClippingNode*, cocos2d::CCNode*)>(address11)(this, p0);
    }

    using ret12 = decltype(declval<cocos2d::CCClippingNode>().visit());
    static inline auto address12 = base+0x419530;

    dupable ret12 visit() {
        return reinterpret_cast<ret12(*)(CCClippingNode*)>(address12)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCClippingNode*))(&$CCClippingNode::create) != (ret0(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::create)));
        }

        if constexpr((ret1(*)(CCClippingNode*, cocos2d::CCNode*))(&$CCClippingNode::create) != (ret1(D::*)(cocos2d::CCNode*))(&D::create)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCNode*))(&D::create)));
        }

        if constexpr((ret2(*)(CCClippingNode*))(&$CCClippingNode::getAlphaThreshold) != (ret2(D::*)())(&D::getAlphaThreshold)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::getAlphaThreshold)));
        }

        if constexpr((ret3(*)(CCClippingNode*))(&$CCClippingNode::getStencil) != (ret3(D::*)())(&D::getStencil)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::getStencil)));
        }

        if constexpr((ret4(*)(CCClippingNode*))(&$CCClippingNode::isInverted) != (ret4(D::*)())(&D::isInverted)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)())(&D::isInverted)));
        }

        if constexpr((ret5(*)(CCClippingNode*))(&$CCClippingNode::onEnter) != (ret5(D::*)())(&D::onEnter)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)())(&D::onEnter)));
        }

        if constexpr((ret6(*)(CCClippingNode*))(&$CCClippingNode::onEnterTransitionDidFinish) != (ret6(D::*)())(&D::onEnterTransitionDidFinish)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)())(&D::onEnterTransitionDidFinish)));
        }

        if constexpr((ret7(*)(CCClippingNode*))(&$CCClippingNode::onExit) != (ret7(D::*)())(&D::onExit)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)())(&D::onExit)));
        }

        if constexpr((ret8(*)(CCClippingNode*))(&$CCClippingNode::onExitTransitionDidStart) != (ret8(D::*)())(&D::onExitTransitionDidStart)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfNonVirtual((ret8(D::*)())(&D::onExitTransitionDidStart)));
        }

        if constexpr((ret9(*)(CCClippingNode*, float))(&$CCClippingNode::setAlphaThreshold) != (ret9(D::*)(float))(&D::setAlphaThreshold)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfNonVirtual((ret9(D::*)(float))(&D::setAlphaThreshold)));
        }

        if constexpr((ret10(*)(CCClippingNode*, bool))(&$CCClippingNode::setInverted) != (ret10(D::*)(bool))(&D::setInverted)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfNonVirtual((ret10(D::*)(bool))(&D::setInverted)));
        }

        if constexpr((ret11(*)(CCClippingNode*, cocos2d::CCNode*))(&$CCClippingNode::setStencil) != (ret11(D::*)(cocos2d::CCNode*))(&D::setStencil)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfNonVirtual((ret11(D::*)(cocos2d::CCNode*))(&D::setStencil)));
        }

        if constexpr((ret12(*)(CCClippingNode*))(&$CCClippingNode::visit) != (ret12(D::*)())(&D::visit)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfNonVirtual((ret12(D::*)())(&D::visit)));
        }

        return true;
    }
};

template<class D>
struct $ScrollingLayer : ScrollingLayer, InterfaceBase {
    $ScrollingLayer(const $ScrollingLayer& c) : ScrollingLayer(c) {}
    $ScrollingLayer() = delete;

    using ret0 = ScrollingLayer*;
    static inline auto address0 = base+0x41a900;

    dupable static ret0 create(cocos2d::CCSize p0,cocos2d::CCPoint p1,float p2) {
        return reinterpret_cast<ret0(*)(ScrollingLayer*, cocos2d::CCSize, cocos2d::CCPoint, float)>(address0)(p0, p1, p2);
    }
    static bool _apply() {

        if constexpr((ret0(*)(ScrollingLayer*, cocos2d::CCSize, cocos2d::CCPoint, float))(&$ScrollingLayer::create) != (ret0(D::*)(cocos2d::CCSize, cocos2d::CCPoint, float))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCSize, cocos2d::CCPoint, float))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCImage : CCImage, InterfaceBase {
    $CCImage(const $CCImage& c) : CCImage(c) {}
    $CCImage() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x24fa00;

    dupable void constructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x24fa80;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address1)(this);
    }

    using ret2 = decltype(declval<cocos2d::CCImage>().initWithImageData(declval<void*>(), declval<int>(), declval<cocos2d::CCImage::EImageFormat>(), declval<int>(), declval<int>(), declval<int>()));
    static inline auto address2 = base+0x24fcb0;

    dupable ret2 initWithImageData(void* p0,int p1,cocos2d::CCImage::EImageFormat p2,int p3,int p4,int p5) {
        return reinterpret_cast<ret2(*)(CCImage*, void*, int, cocos2d::CCImage::EImageFormat, int, int, int)>(address2)(this, p0, p1, p2, p3, p4, p5);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCImage*))(&$CCImage::constructor) != (ret0(D::*)())(&D::constructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::constructor)));
        }

        if constexpr((ret1(*)(CCImage*))(&$CCImage::destructor) != (ret1(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::destructor)));
        }

        if constexpr((ret2(*)(CCImage*, void*, int, cocos2d::CCImage::EImageFormat, int, int, int))(&$CCImage::initWithImageData) != (ret2(D::*)(void*, int, cocos2d::CCImage::EImageFormat, int, int, int))(&D::initWithImageData)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(void*, int, cocos2d::CCImage::EImageFormat, int, int, int))(&D::initWithImageData)));
        }

        return true;
    }
};

template<class D>
struct $CCApplicationProtocol : CCApplicationProtocol, InterfaceBase {
    $CCApplicationProtocol(const $CCApplicationProtocol& c) : CCApplicationProtocol(c) {}
    $CCApplicationProtocol() = delete;

    using ret0 = decltype(declval<cocos2d::CCApplicationProtocol>().gameDidSave());
    static inline auto address0 = base+0x1a45f0;

    dupable ret0 gameDidSave() {
        return reinterpret_cast<ret0(*)(CCApplicationProtocol*)>(address0)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCApplicationProtocol*))(&$CCApplicationProtocol::gameDidSave) != (ret0(D::*)())(&D::gameDidSave)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::gameDidSave)));
        }

        return true;
    }
};

template<class D>
struct $CCLabelTTF : CCLabelTTF, InterfaceBase {
    $CCLabelTTF(const $CCLabelTTF& c) : CCLabelTTF(c) {}
    $CCLabelTTF() = delete;

    using ret0 = decltype(declval<cocos2d::CCLabelTTF>().updateTexture());
    static inline auto address0 = base+0x1fadc0;

    dupable ret0 updateTexture() {
        return reinterpret_cast<ret0(*)(CCLabelTTF*)>(address0)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCLabelTTF*))(&$CCLabelTTF::updateTexture) != (ret0(D::*)())(&D::updateTexture)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::updateTexture)));
        }

        return true;
    }
};

template<class D>
struct $CCRotateBy : CCRotateBy, InterfaceBase {
    $CCRotateBy(const $CCRotateBy& c) : CCRotateBy(c) {}
    $CCRotateBy() = delete;

    using ret0 = cocos2d::CCRotateBy*;
    static inline auto address0 = base+0x1f4c50;

    dupable static ret0 create(float p0,float p1) {
        return reinterpret_cast<ret0(*)(CCRotateBy*, float, float)>(address0)(p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCRotateBy*, float, float))(&$CCRotateBy::create) != (ret0(D::*)(float, float))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(float, float))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCKeyboardDelegate : CCKeyboardDelegate, InterfaceBase {
    $CCKeyboardDelegate(const $CCKeyboardDelegate& c) : CCKeyboardDelegate(c) {}
    $CCKeyboardDelegate() = delete;
    static bool _apply() {

        return true;
    }
};

template<class D>
struct $ButtonSprite : ButtonSprite, InterfaceBase {
    $ButtonSprite(const $ButtonSprite& c) : ButtonSprite(c) {}
    $ButtonSprite() = delete;

    using ret0 = ButtonSprite*;
    static inline auto address0 = base+0x4fa10;

    dupable static ret0 create(char const* p0) {
        return reinterpret_cast<ret0(*)(ButtonSprite*, char const*)>(address0)(p0);
    }

    using ret1 = ButtonSprite*;
    static inline auto address1 = base+0x4fa40;

    dupable static ret1 create(char const* p0,int p1,int p2,float p3,bool p4) {
        return reinterpret_cast<ret1(*)(ButtonSprite*, char const*, int, int, float, bool)>(address1)(p0, p1, p2, p3, p4);
    }

    using ret2 = void;
    static inline auto address2 = base+0x502d0;

    dupable ret2 updateBGImage(char const* p0) {
        return reinterpret_cast<ret2(*)(ButtonSprite*, char const*)>(address2)(this, p0);
    }

    using ret3 = ButtonSprite*;
    static inline auto address3 = base+0x4fa60;

    dupable static ret3 create(char const* p0,float p1) {
        return reinterpret_cast<ret3(*)(ButtonSprite*, char const*, float)>(address3)(p0, p1);
    }

    using ret4 = ButtonSprite*;
    static inline auto address4 = base+0x4fa90;

    dupable static ret4 create(cocos2d::CCSprite* p0,int p1,int p2,float p3,float p4,bool p5,char const* p6,bool p7) {
        return reinterpret_cast<ret4(*)(ButtonSprite*, cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool)>(address4)(p0, p1, p2, p3, p4, p5, p6, p7);
    }
    static bool _apply() {

        if constexpr((ret0(*)(ButtonSprite*, char const*))(&$ButtonSprite::create) != (ret0(D::*)(char const*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(char const*))(&D::create)));
        }

        if constexpr((ret1(*)(ButtonSprite*, char const*, int, int, float, bool))(&$ButtonSprite::create) != (ret1(D::*)(char const*, int, int, float, bool))(&D::create)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(char const*, int, int, float, bool))(&D::create)));
        }

        if constexpr((ret2(*)(ButtonSprite*, char const*))(&$ButtonSprite::updateBGImage) != (ret2(D::*)(char const*))(&D::updateBGImage)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(char const*))(&D::updateBGImage)));
        }

        if constexpr((ret3(*)(ButtonSprite*, char const*, float))(&$ButtonSprite::create) != (ret3(D::*)(char const*, float))(&D::create)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(char const*, float))(&D::create)));
        }

        if constexpr((ret4(*)(ButtonSprite*, cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool))(&$ButtonSprite::create) != (ret4(D::*)(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool))(&D::create)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $BoomListView : BoomListView, InterfaceBase {
    $BoomListView(const $BoomListView& c) : BoomListView(c) {}
    $BoomListView() = delete;

    using ret0 = BoomListView*;
    static inline auto address0 = base+0x18ecb0;

    dupable static ret0 create(cocos2d::CCArray* p0,float p1,float p2,int p3,BoomListType p4) {
        return reinterpret_cast<ret0(*)(BoomListView*, cocos2d::CCArray*, float, float, int, BoomListType)>(address0)(p0, p1, p2, p3, p4);
    }

    using ret1 = bool;
    static inline auto address1 = base+0x18ee00;

    dupable ret1 init(cocos2d::CCArray* p0,float p1,float p2,int p3,BoomListType p4) {
        return reinterpret_cast<ret1(*)(BoomListView*, cocos2d::CCArray*, float, float, int, BoomListType)>(address1)(this, p0, p1, p2, p3, p4);
    }

    using ret2 = void;
    static inline auto address2 = base+0x18f790;

    dupable ret2 draw() {
        return reinterpret_cast<ret2(*)(BoomListView*)>(address2)(this);
    }

    using ret3 = void;
    static inline auto address3 = base+0x18ef90;

    dupable ret3 setupList() {
        return reinterpret_cast<ret3(*)(BoomListView*)>(address3)(this);
    }

    using ret4 = void;
    static inline auto address4 = base+0x18f030;

    dupable ret4 TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& p0,TableViewCell* p1,TableView* p2) {
        return reinterpret_cast<ret4(*)(BoomListView*, CCIndexPath&, TableViewCell*, TableView*)>(address4)(this, p0, p1, p2);
    }

    using ret5 = void;
    static inline auto address5 = base+0x18f070;

    dupable ret5 cellHeightForRowAtIndexPath(CCIndexPath& p0,TableView* p1) {
        return reinterpret_cast<ret5(*)(BoomListView*, CCIndexPath&, TableView*)>(address5)(this, p0, p1);
    }

    using ret6 = void;
    static inline auto address6 = base+0x18f090;

    dupable ret6 didSelectRowAtIndexPath(CCIndexPath& p0,TableView* p1) {
        return reinterpret_cast<ret6(*)(BoomListView*, CCIndexPath&, TableView*)>(address6)(this, p0, p1);
    }

    using ret7 = int;
    static inline auto address7 = base+0x18f0b0;

    dupable ret7 numberOfRowsInSection(unsigned int p0,TableView* p1) {
        return reinterpret_cast<ret7(*)(BoomListView*, unsigned int, TableView*)>(address7)(this, p0, p1);
    }

    using ret8 = void;
    static inline auto address8 = base+0x18f0e0;

    dupable ret8 numberOfSectionsInTableView(TableView* p0) {
        return reinterpret_cast<ret8(*)(BoomListView*, TableView*)>(address8)(this, p0);
    }

    using ret9 = void;
    static inline auto address9 = base+0x18f100;

    dupable ret9 cellForRowAtIndexPath(CCIndexPath& p0,TableView* p1) {
        return reinterpret_cast<ret9(*)(BoomListView*, CCIndexPath&, TableView*)>(address9)(this, p0, p1);
    }

    using ret10 = void;
    static inline auto address10 = base+0x18f770;

    dupable ret10 TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* p0,TableViewCellEditingStyle p1,CCIndexPath& p2) {
        return reinterpret_cast<ret10(*)(BoomListView*, TableView*, TableViewCellEditingStyle, CCIndexPath&)>(address10)(this, p0, p1, p2);
    }

    using ret11 = void;
    static inline auto address11 = base+0x18f050;

    dupable ret11 TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& p0,TableViewCell* p1,TableView* p2) {
        return reinterpret_cast<ret11(*)(BoomListView*, CCIndexPath&, TableViewCell*, TableView*)>(address11)(this, p0, p1, p2);
    }

    using ret12 = TableViewCell*;
    static inline auto address12 = base+0x18f200;

    dupable ret12 getListCell(char const* p0) {
        return reinterpret_cast<ret12(*)(BoomListView*, char const*)>(address12)(this, p0);
    }

    using ret13 = void;
    static inline auto address13 = base+0x18f4a0;

    dupable ret13 loadCell(TableViewCell* p0,int p1) {
        return reinterpret_cast<ret13(*)(BoomListView*, TableViewCell*, int)>(address13)(this, p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(BoomListView*, cocos2d::CCArray*, float, float, int, BoomListType))(&$BoomListView::create) != (ret0(D::*)(cocos2d::CCArray*, float, float, int, BoomListType))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCArray*, float, float, int, BoomListType))(&D::create)));
        }

        if constexpr((ret1(*)(BoomListView*, cocos2d::CCArray*, float, float, int, BoomListType))(&$BoomListView::init) != (ret1(D::*)(cocos2d::CCArray*, float, float, int, BoomListType))(&D::init)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCArray*, float, float, int, BoomListType))(&D::init)));
        }

        if constexpr((ret2(*)(BoomListView*))(&$BoomListView::draw) != (ret2(D::*)())(&D::draw)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::draw)));
        }

        if constexpr((ret3(*)(BoomListView*))(&$BoomListView::setupList) != (ret3(D::*)())(&D::setupList)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)())(&D::setupList)));
        }

        if constexpr((ret4(*)(BoomListView*, CCIndexPath&, TableViewCell*, TableView*))(&$BoomListView::TableViewWillDisplayCellForRowAtIndexPath) != (ret4(D::*)(CCIndexPath&, TableViewCell*, TableView*))(&D::TableViewWillDisplayCellForRowAtIndexPath)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)(CCIndexPath&, TableViewCell*, TableView*))(&D::TableViewWillDisplayCellForRowAtIndexPath)));
        }

        if constexpr((ret5(*)(BoomListView*, CCIndexPath&, TableView*))(&$BoomListView::cellHeightForRowAtIndexPath) != (ret5(D::*)(CCIndexPath&, TableView*))(&D::cellHeightForRowAtIndexPath)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)(CCIndexPath&, TableView*))(&D::cellHeightForRowAtIndexPath)));
        }

        if constexpr((ret6(*)(BoomListView*, CCIndexPath&, TableView*))(&$BoomListView::didSelectRowAtIndexPath) != (ret6(D::*)(CCIndexPath&, TableView*))(&D::didSelectRowAtIndexPath)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)(CCIndexPath&, TableView*))(&D::didSelectRowAtIndexPath)));
        }

        if constexpr((ret7(*)(BoomListView*, unsigned int, TableView*))(&$BoomListView::numberOfRowsInSection) != (ret7(D::*)(unsigned int, TableView*))(&D::numberOfRowsInSection)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)(unsigned int, TableView*))(&D::numberOfRowsInSection)));
        }

        if constexpr((ret8(*)(BoomListView*, TableView*))(&$BoomListView::numberOfSectionsInTableView) != (ret8(D::*)(TableView*))(&D::numberOfSectionsInTableView)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)(TableView*))(&D::numberOfSectionsInTableView)));
        }

        if constexpr((ret9(*)(BoomListView*, CCIndexPath&, TableView*))(&$BoomListView::cellForRowAtIndexPath) != (ret9(D::*)(CCIndexPath&, TableView*))(&D::cellForRowAtIndexPath)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfVirtual((ret9(D::*)(CCIndexPath&, TableView*))(&D::cellForRowAtIndexPath)));
        }

        if constexpr((ret10(*)(BoomListView*, TableView*, TableViewCellEditingStyle, CCIndexPath&))(&$BoomListView::TableViewCommitCellEditingStyleForRowAtIndexPath) != (ret10(D::*)(TableView*, TableViewCellEditingStyle, CCIndexPath&))(&D::TableViewCommitCellEditingStyleForRowAtIndexPath)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfVirtual((ret10(D::*)(TableView*, TableViewCellEditingStyle, CCIndexPath&))(&D::TableViewCommitCellEditingStyleForRowAtIndexPath)));
        }

        if constexpr((ret11(*)(BoomListView*, CCIndexPath&, TableViewCell*, TableView*))(&$BoomListView::TableViewWillReloadCellForRowAtIndexPath) != (ret11(D::*)(CCIndexPath&, TableViewCell*, TableView*))(&D::TableViewWillReloadCellForRowAtIndexPath)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfVirtual((ret11(D::*)(CCIndexPath&, TableViewCell*, TableView*))(&D::TableViewWillReloadCellForRowAtIndexPath)));
        }

        if constexpr((ret12(*)(BoomListView*, char const*))(&$BoomListView::getListCell) != (ret12(D::*)(char const*))(&D::getListCell)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfVirtual((ret12(D::*)(char const*))(&D::getListCell)));
        }

        if constexpr((ret13(*)(BoomListView*, TableViewCell*, int))(&$BoomListView::loadCell) != (ret13(D::*)(TableViewCell*, int))(&D::loadCell)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfVirtual((ret13(D::*)(TableViewCell*, int))(&D::loadCell)));
        }

        return true;
    }
};

template<class D>
struct $CCLabelBMFont : CCLabelBMFont, InterfaceBase {
    $CCLabelBMFont(const $CCLabelBMFont& c) : CCLabelBMFont(c) {}
    $CCLabelBMFont() = delete;

    using ret0 = cocos2d::CCLabelBMFont*;
    static inline auto address0 = base+0x347660;

    dupable static ret0 create(char const* p0,char const* p1) {
        return reinterpret_cast<ret0(*)(CCLabelBMFont*, char const*, char const*)>(address0)(p0, p1);
    }

    using ret1 = decltype(declval<cocos2d::CCLabelBMFont>().limitLabelWidth(declval<float>(), declval<float>(), declval<float>()));
    static inline auto address1 = base+0x34a6e0;

    dupable ret1 limitLabelWidth(float p0,float p1,float p2) {
        return reinterpret_cast<ret1(*)(CCLabelBMFont*, float, float, float)>(address1)(this, p0, p1, p2);
    }

    using ret2 = decltype(declval<cocos2d::CCLabelBMFont>().setScale(declval<float>()));
    static inline auto address2 = base+0x34a5d0;

    dupable ret2 setScale(float p0) {
        return reinterpret_cast<ret2(*)(CCLabelBMFont*, float)>(address2)(this, p0);
    }

    using ret3 = decltype(declval<cocos2d::CCLabelBMFont>().setString(declval<char const*>(), declval<bool>()));
    static inline auto address3 = base+0x3489e0;

    dupable ret3 setString(char const* p0,bool p1) {
        return reinterpret_cast<ret3(*)(CCLabelBMFont*, char const*, bool)>(address3)(this, p0, p1);
    }

    using ret4 = decltype(declval<cocos2d::CCLabelBMFont>().setAnchorPoint(declval<cocos2d::CCPoint const&>()));
    static inline auto address4 = base+0x349440;

    dupable ret4 setAnchorPoint(cocos2d::CCPoint const& p0) {
        return reinterpret_cast<ret4(*)(CCLabelBMFont*, cocos2d::CCPoint const&)>(address4)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCLabelBMFont*, char const*, char const*))(&$CCLabelBMFont::create) != (ret0(D::*)(char const*, char const*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(char const*, char const*))(&D::create)));
        }

        if constexpr((ret1(*)(CCLabelBMFont*, float, float, float))(&$CCLabelBMFont::limitLabelWidth) != (ret1(D::*)(float, float, float))(&D::limitLabelWidth)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(float, float, float))(&D::limitLabelWidth)));
        }

        if constexpr((ret2(*)(CCLabelBMFont*, float))(&$CCLabelBMFont::setScale) != (ret2(D::*)(float))(&D::setScale)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(float))(&D::setScale)));
        }

        if constexpr((ret3(*)(CCLabelBMFont*, char const*, bool))(&$CCLabelBMFont::setString) != (ret3(D::*)(char const*, bool))(&D::setString)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(char const*, bool))(&D::setString)));
        }

        if constexpr((ret4(*)(CCLabelBMFont*, cocos2d::CCPoint const&))(&$CCLabelBMFont::setAnchorPoint) != (ret4(D::*)(cocos2d::CCPoint const&))(&D::setAnchorPoint)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(cocos2d::CCPoint const&))(&D::setAnchorPoint)));
        }

        return true;
    }
};

template<class D>
struct $CCFadeTo : CCFadeTo, InterfaceBase {
    $CCFadeTo(const $CCFadeTo& c) : CCFadeTo(c) {}
    $CCFadeTo() = delete;

    using ret0 = cocos2d::CCFadeTo*;
    static inline auto address0 = base+0x1f7ff0;

    dupable static ret0 create(float p0,unsigned char p1) {
        return reinterpret_cast<ret0(*)(CCFadeTo*, float, unsigned char)>(address0)(p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCFadeTo*, float, unsigned char))(&$CCFadeTo::create) != (ret0(D::*)(float, unsigned char))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(float, unsigned char))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCApplication : CCApplication, InterfaceBase {
    $CCApplication(const $CCApplication& c) : CCApplication(c) {}
    $CCApplication() = delete;

    using ret0 = decltype(declval<cocos2d::CCApplication>().getCurrentLanguage());
    static inline auto address0 = base+0x1a3f40;

    dupable ret0 getCurrentLanguage() {
        return reinterpret_cast<ret0(*)(CCApplication*)>(address0)(this);
    }

    using ret1 = decltype(declval<cocos2d::CCApplication>().getTargetPlatform());
    static inline auto address1 = base+0x1a3f20;

    dupable ret1 getTargetPlatform() {
        return reinterpret_cast<ret1(*)(CCApplication*)>(address1)(this);
    }

    using ret2 = decltype(declval<cocos2d::CCApplication>().openURL(declval<char const*>()));
    static inline auto address2 = base+0x1a4550;

    dupable ret2 openURL(char const* p0) {
        return reinterpret_cast<ret2(*)(CCApplication*, char const*)>(address2)(this, p0);
    }

    using ret3 = decltype(declval<cocos2d::CCApplication>().setAnimationInterval(declval<double>()));
    static inline auto address3 = base+0x1a3ee0;

    dupable ret3 setAnimationInterval(double p0) {
        return reinterpret_cast<ret3(*)(CCApplication*, double)>(address3)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCApplication*))(&$CCApplication::getCurrentLanguage) != (ret0(D::*)())(&D::getCurrentLanguage)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::getCurrentLanguage)));
        }

        if constexpr((ret1(*)(CCApplication*))(&$CCApplication::getTargetPlatform) != (ret1(D::*)())(&D::getTargetPlatform)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::getTargetPlatform)));
        }

        if constexpr((ret2(*)(CCApplication*, char const*))(&$CCApplication::openURL) != (ret2(D::*)(char const*))(&D::openURL)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(char const*))(&D::openURL)));
        }

        if constexpr((ret3(*)(CCApplication*, double))(&$CCApplication::setAnimationInterval) != (ret3(D::*)(double))(&D::setAnimationInterval)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(double))(&D::setAnimationInterval)));
        }

        return true;
    }
};

template<class D>
struct $CCEaseElasticOut : CCEaseElasticOut, InterfaceBase {
    $CCEaseElasticOut(const $CCEaseElasticOut& c) : CCEaseElasticOut(c) {}
    $CCEaseElasticOut() = delete;

    using ret0 = cocos2d::CCEaseElasticOut*;
    static inline auto address0 = base+0x2a3080;

    dupable static ret0 create(cocos2d::CCActionInterval* p0,float p1) {
        return reinterpret_cast<ret0(*)(CCEaseElasticOut*, cocos2d::CCActionInterval*, float)>(address0)(p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCEaseElasticOut*, cocos2d::CCActionInterval*, float))(&$CCEaseElasticOut::create) != (ret0(D::*)(cocos2d::CCActionInterval*, float))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCActionInterval*, float))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCEaseIn : CCEaseIn, InterfaceBase {
    $CCEaseIn(const $CCEaseIn& c) : CCEaseIn(c) {}
    $CCEaseIn() = delete;

    using ret0 = cocos2d::CCEaseIn*;
    static inline auto address0 = base+0x2a1960;

    dupable static ret0 create(cocos2d::CCActionInterval* p0,float p1) {
        return reinterpret_cast<ret0(*)(CCEaseIn*, cocos2d::CCActionInterval*, float)>(address0)(p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCEaseIn*, cocos2d::CCActionInterval*, float))(&$CCEaseIn::create) != (ret0(D::*)(cocos2d::CCActionInterval*, float))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCActionInterval*, float))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $SetupObjectTogglePopup : SetupObjectTogglePopup, InterfaceBase {
    $SetupObjectTogglePopup(const $SetupObjectTogglePopup& c) : SetupObjectTogglePopup(c) {}
    $SetupObjectTogglePopup() = delete;

    using ret0 = SetupObjectTogglePopup*;
    static inline auto address0 = base+0x1c0860;

    dupable static ret0 create(EffectGameObject* p0,cocos2d::CCArray* p1) {
        return reinterpret_cast<ret0(*)(SetupObjectTogglePopup*, EffectGameObject*, cocos2d::CCArray*)>(address0)(p0, p1);
    }

    using ret1 = bool;
    static inline auto address1 = base+0x1c0a40;

    dupable ret1 init(EffectGameObject* p0,cocos2d::CCArray* p1) {
        return reinterpret_cast<ret1(*)(SetupObjectTogglePopup*, EffectGameObject*, cocos2d::CCArray*)>(address1)(this, p0, p1);
    }

    using ret2 = void;
    static inline auto address2 = base+0x1c1c40;

    dupable ret2 onTargetIDArrow(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret2(*)(SetupObjectTogglePopup*, cocos2d::CCObject*)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x1c2660;

    dupable ret3 textChanged(CCTextInputNode* p0) {
        return reinterpret_cast<ret3(*)(SetupObjectTogglePopup*, CCTextInputNode*)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x1c2440;

    dupable ret4 updateTargetID() {
        return reinterpret_cast<ret4(*)(SetupObjectTogglePopup*)>(address4)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SetupObjectTogglePopup*, EffectGameObject*, cocos2d::CCArray*))(&$SetupObjectTogglePopup::create) != (ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::create)));
        }

        if constexpr((ret1(*)(SetupObjectTogglePopup*, EffectGameObject*, cocos2d::CCArray*))(&$SetupObjectTogglePopup::init) != (ret1(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::init)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(EffectGameObject*, cocos2d::CCArray*))(&D::init)));
        }

        if constexpr((ret2(*)(SetupObjectTogglePopup*, cocos2d::CCObject*))(&$SetupObjectTogglePopup::onTargetIDArrow) != (ret2(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)));
        }

        if constexpr((ret3(*)(SetupObjectTogglePopup*, CCTextInputNode*))(&$SetupObjectTogglePopup::textChanged) != (ret3(D::*)(CCTextInputNode*))(&D::textChanged)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(CCTextInputNode*))(&D::textChanged)));
        }

        if constexpr((ret4(*)(SetupObjectTogglePopup*))(&$SetupObjectTogglePopup::updateTargetID) != (ret4(D::*)())(&D::updateTargetID)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)())(&D::updateTargetID)));
        }

        return true;
    }
};

template<class D>
struct $CCMenuItemLabel : CCMenuItemLabel, InterfaceBase {
    $CCMenuItemLabel(const $CCMenuItemLabel& c) : CCMenuItemLabel(c) {}
    $CCMenuItemLabel() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x1fc0d0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = decltype(declval<cocos2d::CCMenuItemLabel>().activate());
    static inline auto address1 = base+0x1fc240;

    dupable ret1 activate() {
        return reinterpret_cast<ret1(*)(CCMenuItemLabel*)>(address1)(this);
    }

    using ret2 = decltype(declval<cocos2d::CCMenuItemLabel>().selected());
    static inline auto address2 = base+0x1fc2e0;

    dupable ret2 selected() {
        return reinterpret_cast<ret2(*)(CCMenuItemLabel*)>(address2)(this);
    }

    using ret3 = decltype(declval<cocos2d::CCMenuItemLabel>().unselected());
    static inline auto address3 = base+0x1fc380;

    dupable ret3 unselected() {
        return reinterpret_cast<ret3(*)(CCMenuItemLabel*)>(address3)(this);
    }

    using ret4 = decltype(declval<cocos2d::CCMenuItemLabel>().setEnabled(declval<bool>()));
    static inline auto address4 = base+0x1fc3f0;

    dupable ret4 setEnabled(bool p0) {
        return reinterpret_cast<ret4(*)(CCMenuItemLabel*, bool)>(address4)(this, p0);
    }

    using ret5 = decltype(declval<cocos2d::CCMenuItemLabel>().getDisabledColor());
    static inline auto address5 = base+0x1fbb80;

    dupable ret5 getDisabledColor() {
        return reinterpret_cast<ret5(*)(CCMenuItemLabel*)>(address5)(this);
    }

    using ret6 = decltype(declval<cocos2d::CCMenuItemLabel>().setDisabledColor(declval<cocos2d::_ccColor3B const&>()));
    static inline auto address6 = base+0x1fbb90;

    dupable ret6 setDisabledColor(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret6(*)(CCMenuItemLabel*, cocos2d::_ccColor3B const&)>(address6)(this, p0);
    }

    using ret7 = decltype(declval<cocos2d::CCMenuItemLabel>().getLabel());
    static inline auto address7 = base+0x1fbbb0;

    dupable ret7 getLabel() {
        return reinterpret_cast<ret7(*)(CCMenuItemLabel*)>(address7)(this);
    }

    using ret8 = decltype(declval<cocos2d::CCMenuItemLabel>().setLabel(declval<cocos2d::CCNode*>()));
    static inline auto address8 = base+0x1fbbc0;

    dupable ret8 setLabel(cocos2d::CCNode* p0) {
        return reinterpret_cast<ret8(*)(CCMenuItemLabel*, cocos2d::CCNode*)>(address8)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCMenuItemLabel*))(&$CCMenuItemLabel::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(CCMenuItemLabel*))(&$CCMenuItemLabel::activate) != (ret1(D::*)())(&D::activate)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::activate)));
        }

        if constexpr((ret2(*)(CCMenuItemLabel*))(&$CCMenuItemLabel::selected) != (ret2(D::*)())(&D::selected)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)())(&D::selected)));
        }

        if constexpr((ret3(*)(CCMenuItemLabel*))(&$CCMenuItemLabel::unselected) != (ret3(D::*)())(&D::unselected)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)())(&D::unselected)));
        }

        if constexpr((ret4(*)(CCMenuItemLabel*, bool))(&$CCMenuItemLabel::setEnabled) != (ret4(D::*)(bool))(&D::setEnabled)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)(bool))(&D::setEnabled)));
        }

        if constexpr((ret5(*)(CCMenuItemLabel*))(&$CCMenuItemLabel::getDisabledColor) != (ret5(D::*)())(&D::getDisabledColor)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)())(&D::getDisabledColor)));
        }

        if constexpr((ret6(*)(CCMenuItemLabel*, cocos2d::_ccColor3B const&))(&$CCMenuItemLabel::setDisabledColor) != (ret6(D::*)(cocos2d::_ccColor3B const&))(&D::setDisabledColor)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)(cocos2d::_ccColor3B const&))(&D::setDisabledColor)));
        }

        if constexpr((ret7(*)(CCMenuItemLabel*))(&$CCMenuItemLabel::getLabel) != (ret7(D::*)())(&D::getLabel)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)())(&D::getLabel)));
        }

        if constexpr((ret8(*)(CCMenuItemLabel*, cocos2d::CCNode*))(&$CCMenuItemLabel::setLabel) != (ret8(D::*)(cocos2d::CCNode*))(&D::setLabel)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)(cocos2d::CCNode*))(&D::setLabel)));
        }

        return true;
    }
};

template<class D>
struct $CCIMEDelegate : CCIMEDelegate, InterfaceBase {
    $CCIMEDelegate(const $CCIMEDelegate& c) : CCIMEDelegate(c) {}
    $CCIMEDelegate() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x277670;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = decltype(declval<cocos2d::CCIMEDelegate>().attachWithIME());
    static inline auto address1 = base+0x2776a0;

    dupable ret1 attachWithIME() {
        return reinterpret_cast<ret1(*)(CCIMEDelegate*)>(address1)(this);
    }

    using ret2 = decltype(declval<cocos2d::CCIMEDelegate>().detachWithIME());
    static inline auto address2 = base+0x277880;

    dupable ret2 detachWithIME() {
        return reinterpret_cast<ret2(*)(CCIMEDelegate*)>(address2)(this);
    }

    using ret3 = void;
    static inline auto address3 = base+0x277310;

    dupable void constructor() {
        reinterpret_cast<void(*)(decltype(this))>(address3)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCIMEDelegate*))(&$CCIMEDelegate::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(CCIMEDelegate*))(&$CCIMEDelegate::attachWithIME) != (ret1(D::*)())(&D::attachWithIME)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::attachWithIME)));
        }

        if constexpr((ret2(*)(CCIMEDelegate*))(&$CCIMEDelegate::detachWithIME) != (ret2(D::*)())(&D::detachWithIME)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)())(&D::detachWithIME)));
        }

        if constexpr((ret3(*)(CCIMEDelegate*))(&$CCIMEDelegate::constructor) != (ret3(D::*)())(&D::constructor)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::constructor)));
        }

        return true;
    }
};

template<class D>
struct $CCDirector : CCDirector, InterfaceBase {
    $CCDirector(const $CCDirector& c) : CCDirector(c) {}
    $CCDirector() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x2493a0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = decltype(declval<cocos2d::CCDirector>().init());
    static inline auto address1 = base+0x248df0;

    dupable ret1 init() {
        return reinterpret_cast<ret1(*)(CCDirector*)>(address1)(this);
    }

    using ret2 = decltype(declval<cocos2d::CCDirector>().getScheduler());
    static inline auto address2 = base+0x24af00;

    dupable ret2 getScheduler() {
        return reinterpret_cast<ret2(*)(CCDirector*)>(address2)(this);
    }

    using ret3 = decltype(declval<cocos2d::CCDirector>().setScheduler(declval<cocos2d::CCScheduler*>()));
    static inline auto address3 = base+0x24aec0;

    dupable ret3 setScheduler(cocos2d::CCScheduler* p0) {
        return reinterpret_cast<ret3(*)(CCDirector*, cocos2d::CCScheduler*)>(address3)(this, p0);
    }

    using ret4 = decltype(declval<cocos2d::CCDirector>().getActionManager());
    static inline auto address4 = base+0x24af50;

    dupable ret4 getActionManager() {
        return reinterpret_cast<ret4(*)(CCDirector*)>(address4)(this);
    }

    using ret5 = decltype(declval<cocos2d::CCDirector>().setActionManager(declval<cocos2d::CCActionManager*>()));
    static inline auto address5 = base+0x24af10;

    dupable ret5 setActionManager(cocos2d::CCActionManager* p0) {
        return reinterpret_cast<ret5(*)(CCDirector*, cocos2d::CCActionManager*)>(address5)(this, p0);
    }

    using ret6 = decltype(declval<cocos2d::CCDirector>().getTouchDispatcher());
    static inline auto address6 = base+0x24afa0;

    dupable ret6 getTouchDispatcher() {
        return reinterpret_cast<ret6(*)(CCDirector*)>(address6)(this);
    }

    using ret7 = decltype(declval<cocos2d::CCDirector>().setTouchDispatcher(declval<cocos2d::CCTouchDispatcher*>()));
    static inline auto address7 = base+0x24af60;

    dupable ret7 setTouchDispatcher(cocos2d::CCTouchDispatcher* p0) {
        return reinterpret_cast<ret7(*)(CCDirector*, cocos2d::CCTouchDispatcher*)>(address7)(this, p0);
    }

    using ret8 = decltype(declval<cocos2d::CCDirector>().getKeypadDispatcher());
    static inline auto address8 = base+0x24b090;

    dupable ret8 getKeypadDispatcher() {
        return reinterpret_cast<ret8(*)(CCDirector*)>(address8)(this);
    }

    using ret9 = decltype(declval<cocos2d::CCDirector>().setKeypadDispatcher(declval<cocos2d::CCKeypadDispatcher*>()));
    static inline auto address9 = base+0x24b050;

    dupable ret9 setKeypadDispatcher(cocos2d::CCKeypadDispatcher* p0) {
        return reinterpret_cast<ret9(*)(CCDirector*, cocos2d::CCKeypadDispatcher*)>(address9)(this, p0);
    }

    using ret10 = decltype(declval<cocos2d::CCDirector>().getKeyboardDispatcher());
    static inline auto address10 = base+0x24aff0;

    dupable ret10 getKeyboardDispatcher() {
        return reinterpret_cast<ret10(*)(CCDirector*)>(address10)(this);
    }

    using ret11 = decltype(declval<cocos2d::CCDirector>().setKeyboardDispatcher(declval<cocos2d::CCKeyboardDispatcher*>()));
    static inline auto address11 = base+0x24afb0;

    dupable ret11 setKeyboardDispatcher(cocos2d::CCKeyboardDispatcher* p0) {
        return reinterpret_cast<ret11(*)(CCDirector*, cocos2d::CCKeyboardDispatcher*)>(address11)(this, p0);
    }

    using ret12 = decltype(declval<cocos2d::CCDirector>().getMouseDispatcher());
    static inline auto address12 = base+0x24b040;

    dupable ret12 getMouseDispatcher() {
        return reinterpret_cast<ret12(*)(CCDirector*)>(address12)(this);
    }

    using ret13 = decltype(declval<cocos2d::CCDirector>().setMouseDispatcher(declval<cocos2d::CCMouseDispatcher*>()));
    static inline auto address13 = base+0x24b000;

    dupable ret13 setMouseDispatcher(cocos2d::CCMouseDispatcher* p0) {
        return reinterpret_cast<ret13(*)(CCDirector*, cocos2d::CCMouseDispatcher*)>(address13)(this, p0);
    }

    using ret14 = decltype(declval<cocos2d::CCDirector>().getAccelerometer());
    static inline auto address14 = base+0x24b0e0;

    dupable ret14 getAccelerometer() {
        return reinterpret_cast<ret14(*)(CCDirector*)>(address14)(this);
    }

    using ret15 = decltype(declval<cocos2d::CCDirector>().setAccelerometer(declval<cocos2d::CCAccelerometer*>()));
    static inline auto address15 = base+0x24b0a0;

    dupable ret15 setAccelerometer(cocos2d::CCAccelerometer* p0) {
        return reinterpret_cast<ret15(*)(CCDirector*, cocos2d::CCAccelerometer*)>(address15)(this, p0);
    }

    using ret16 = decltype(declval<cocos2d::CCDirector>().getDeltaTime());
    static inline auto address16 = base+0x249bd0;

    dupable ret16 getDeltaTime() {
        return reinterpret_cast<ret16(*)(CCDirector*)>(address16)(this);
    }

    using ret17 = decltype(declval<cocos2d::CCDirector>().getSceneDelegate());
    static inline auto address17 = base+0x24b320;

    dupable ret17 getSceneDelegate() {
        return reinterpret_cast<ret17(*)(CCDirector*)>(address17)(this);
    }

    using ret18 = decltype(declval<cocos2d::CCDirector>().setSceneDelegate(declval<cocos2d::CCSceneDelegate*>()));
    static inline auto address18 = base+0x24b330;

    dupable ret18 setSceneDelegate(cocos2d::CCSceneDelegate* p0) {
        return reinterpret_cast<ret18(*)(CCDirector*, cocos2d::CCSceneDelegate*)>(address18)(this, p0);
    }

    using ret19 = decltype(declval<cocos2d::CCDirector>().getWinSize());
    static inline auto address19 = base+0x24a0f0;

    dupable ret19 getWinSize() {
        return reinterpret_cast<ret19(*)(CCDirector*)>(address19)(this);
    }

    using ret20 = decltype(declval<cocos2d::CCDirector>().pushScene(declval<cocos2d::CCScene*>()));
    static inline auto address20 = base+0x24a620;

    dupable ret20 pushScene(cocos2d::CCScene* p0) {
        return reinterpret_cast<ret20(*)(CCDirector*, cocos2d::CCScene*)>(address20)(this, p0);
    }

    using ret21 = decltype(declval<cocos2d::CCDirector>().replaceScene(declval<cocos2d::CCScene*>()));
    static inline auto address21 = base+0x24a6d0;

    dupable ret21 replaceScene(cocos2d::CCScene* p0) {
        return reinterpret_cast<ret21(*)(CCDirector*, cocos2d::CCScene*)>(address21)(this, p0);
    }

    using ret22 = decltype(declval<cocos2d::CCDirector>().resetSmoothFixCounter());
    static inline auto address22 = base+0x249bc0;

    dupable ret22 resetSmoothFixCounter() {
        return reinterpret_cast<ret22(*)(CCDirector*)>(address22)(this);
    }

    using ret23 = decltype(declval<cocos2d::CCDirector>().sharedDirector());
    static inline auto address23 = base+0x248cb0;

    dupable static ret23 sharedDirector() {
        return reinterpret_cast<ret23(*)(CCDirector*)>(address23)();
    }

    using ret24 = decltype(declval<cocos2d::CCDirector>().calculateDeltaTime());
    static inline auto address24 = base+0x2497a0;

    dupable ret24 calculateDeltaTime() {
        return reinterpret_cast<ret24(*)(CCDirector*)>(address24)(this);
    }

    using ret25 = decltype(declval<cocos2d::CCDirector>().calculateMPF());
    static inline auto address25 = base+0x19eac0;

    dupable ret25 calculateMPF() {
        return reinterpret_cast<ret25(*)(CCDirector*)>(address25)(this);
    }

    using ret26 = decltype(declval<cocos2d::CCDirector>().convertToGL(declval<cocos2d::CCPoint const&>()));
    static inline auto address26 = base+0x24a210;

    dupable ret26 convertToGL(cocos2d::CCPoint const& p0) {
        return reinterpret_cast<ret26(*)(CCDirector*, cocos2d::CCPoint const&)>(address26)(this, p0);
    }

    using ret27 = decltype(declval<cocos2d::CCDirector>().drawScene());
    static inline auto address27 = base+0x249690;

    dupable ret27 drawScene() {
        return reinterpret_cast<ret27(*)(CCDirector*)>(address27)(this);
    }

    using ret28 = decltype(declval<cocos2d::CCDirector>().setNextScene());
    static inline auto address28 = base+0x2498d0;

    dupable ret28 setNextScene() {
        return reinterpret_cast<ret28(*)(CCDirector*)>(address28)(this);
    }

    using ret29 = decltype(declval<cocos2d::CCDirector>().showStats());
    static inline auto address29 = base+0x2499e0;

    dupable ret29 showStats() {
        return reinterpret_cast<ret29(*)(CCDirector*)>(address29)(this);
    }

    using ret30 = decltype(declval<cocos2d::CCDirector>().updateContentScale(declval<cocos2d::TextureQuality>()));
    static inline auto address30 = base+0x249ff0;

    dupable ret30 updateContentScale(cocos2d::TextureQuality p0) {
        return reinterpret_cast<ret30(*)(CCDirector*, cocos2d::TextureQuality)>(address30)(this, p0);
    }

    using ret31 = decltype(declval<cocos2d::CCDirector>().popSceneWithTransition(declval<float>(), declval<cocos2d::PopTransition>()));
    static inline auto address31 = base+0x24a8b0;

    dupable ret31 popSceneWithTransition(float p0,cocos2d::PopTransition p1) {
        return reinterpret_cast<ret31(*)(CCDirector*, float, cocos2d::PopTransition)>(address31)(this, p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCDirector*))(&$CCDirector::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(CCDirector*))(&$CCDirector::init) != (ret1(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::init)));
        }

        if constexpr((ret2(*)(CCDirector*))(&$CCDirector::getScheduler) != (ret2(D::*)())(&D::getScheduler)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)())(&D::getScheduler)));
        }

        if constexpr((ret3(*)(CCDirector*, cocos2d::CCScheduler*))(&$CCDirector::setScheduler) != (ret3(D::*)(cocos2d::CCScheduler*))(&D::setScheduler)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)(cocos2d::CCScheduler*))(&D::setScheduler)));
        }

        if constexpr((ret4(*)(CCDirector*))(&$CCDirector::getActionManager) != (ret4(D::*)())(&D::getActionManager)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)())(&D::getActionManager)));
        }

        if constexpr((ret5(*)(CCDirector*, cocos2d::CCActionManager*))(&$CCDirector::setActionManager) != (ret5(D::*)(cocos2d::CCActionManager*))(&D::setActionManager)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)(cocos2d::CCActionManager*))(&D::setActionManager)));
        }

        if constexpr((ret6(*)(CCDirector*))(&$CCDirector::getTouchDispatcher) != (ret6(D::*)())(&D::getTouchDispatcher)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)())(&D::getTouchDispatcher)));
        }

        if constexpr((ret7(*)(CCDirector*, cocos2d::CCTouchDispatcher*))(&$CCDirector::setTouchDispatcher) != (ret7(D::*)(cocos2d::CCTouchDispatcher*))(&D::setTouchDispatcher)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)(cocos2d::CCTouchDispatcher*))(&D::setTouchDispatcher)));
        }

        if constexpr((ret8(*)(CCDirector*))(&$CCDirector::getKeypadDispatcher) != (ret8(D::*)())(&D::getKeypadDispatcher)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)())(&D::getKeypadDispatcher)));
        }

        if constexpr((ret9(*)(CCDirector*, cocos2d::CCKeypadDispatcher*))(&$CCDirector::setKeypadDispatcher) != (ret9(D::*)(cocos2d::CCKeypadDispatcher*))(&D::setKeypadDispatcher)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfVirtual((ret9(D::*)(cocos2d::CCKeypadDispatcher*))(&D::setKeypadDispatcher)));
        }

        if constexpr((ret10(*)(CCDirector*))(&$CCDirector::getKeyboardDispatcher) != (ret10(D::*)())(&D::getKeyboardDispatcher)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfVirtual((ret10(D::*)())(&D::getKeyboardDispatcher)));
        }

        if constexpr((ret11(*)(CCDirector*, cocos2d::CCKeyboardDispatcher*))(&$CCDirector::setKeyboardDispatcher) != (ret11(D::*)(cocos2d::CCKeyboardDispatcher*))(&D::setKeyboardDispatcher)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfVirtual((ret11(D::*)(cocos2d::CCKeyboardDispatcher*))(&D::setKeyboardDispatcher)));
        }

        if constexpr((ret12(*)(CCDirector*))(&$CCDirector::getMouseDispatcher) != (ret12(D::*)())(&D::getMouseDispatcher)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfVirtual((ret12(D::*)())(&D::getMouseDispatcher)));
        }

        if constexpr((ret13(*)(CCDirector*, cocos2d::CCMouseDispatcher*))(&$CCDirector::setMouseDispatcher) != (ret13(D::*)(cocos2d::CCMouseDispatcher*))(&D::setMouseDispatcher)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfVirtual((ret13(D::*)(cocos2d::CCMouseDispatcher*))(&D::setMouseDispatcher)));
        }

        if constexpr((ret14(*)(CCDirector*))(&$CCDirector::getAccelerometer) != (ret14(D::*)())(&D::getAccelerometer)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfVirtual((ret14(D::*)())(&D::getAccelerometer)));
        }

        if constexpr((ret15(*)(CCDirector*, cocos2d::CCAccelerometer*))(&$CCDirector::setAccelerometer) != (ret15(D::*)(cocos2d::CCAccelerometer*))(&D::setAccelerometer)) {
            modContainer.registerHookEnable(address15, FunctionScrapper::addressOfVirtual((ret15(D::*)(cocos2d::CCAccelerometer*))(&D::setAccelerometer)));
        }

        if constexpr((ret16(*)(CCDirector*))(&$CCDirector::getDeltaTime) != (ret16(D::*)())(&D::getDeltaTime)) {
            modContainer.registerHookEnable(address16, FunctionScrapper::addressOfVirtual((ret16(D::*)())(&D::getDeltaTime)));
        }

        if constexpr((ret17(*)(CCDirector*))(&$CCDirector::getSceneDelegate) != (ret17(D::*)())(&D::getSceneDelegate)) {
            modContainer.registerHookEnable(address17, FunctionScrapper::addressOfVirtual((ret17(D::*)())(&D::getSceneDelegate)));
        }

        if constexpr((ret18(*)(CCDirector*, cocos2d::CCSceneDelegate*))(&$CCDirector::setSceneDelegate) != (ret18(D::*)(cocos2d::CCSceneDelegate*))(&D::setSceneDelegate)) {
            modContainer.registerHookEnable(address18, FunctionScrapper::addressOfVirtual((ret18(D::*)(cocos2d::CCSceneDelegate*))(&D::setSceneDelegate)));
        }

        if constexpr((ret19(*)(CCDirector*))(&$CCDirector::getWinSize) != (ret19(D::*)())(&D::getWinSize)) {
            modContainer.registerHookEnable(address19, FunctionScrapper::addressOfNonVirtual((ret19(D::*)())(&D::getWinSize)));
        }

        if constexpr((ret20(*)(CCDirector*, cocos2d::CCScene*))(&$CCDirector::pushScene) != (ret20(D::*)(cocos2d::CCScene*))(&D::pushScene)) {
            modContainer.registerHookEnable(address20, FunctionScrapper::addressOfNonVirtual((ret20(D::*)(cocos2d::CCScene*))(&D::pushScene)));
        }

        if constexpr((ret21(*)(CCDirector*, cocos2d::CCScene*))(&$CCDirector::replaceScene) != (ret21(D::*)(cocos2d::CCScene*))(&D::replaceScene)) {
            modContainer.registerHookEnable(address21, FunctionScrapper::addressOfNonVirtual((ret21(D::*)(cocos2d::CCScene*))(&D::replaceScene)));
        }

        if constexpr((ret22(*)(CCDirector*))(&$CCDirector::resetSmoothFixCounter) != (ret22(D::*)())(&D::resetSmoothFixCounter)) {
            modContainer.registerHookEnable(address22, FunctionScrapper::addressOfNonVirtual((ret22(D::*)())(&D::resetSmoothFixCounter)));
        }

        if constexpr((ret23(*)(CCDirector*))(&$CCDirector::sharedDirector) != (ret23(D::*)())(&D::sharedDirector)) {
            modContainer.registerHookEnable(address23, FunctionScrapper::addressOfNonVirtual((ret23(D::*)())(&D::sharedDirector)));
        }

        if constexpr((ret24(*)(CCDirector*))(&$CCDirector::calculateDeltaTime) != (ret24(D::*)())(&D::calculateDeltaTime)) {
            modContainer.registerHookEnable(address24, FunctionScrapper::addressOfNonVirtual((ret24(D::*)())(&D::calculateDeltaTime)));
        }

        if constexpr((ret25(*)(CCDirector*))(&$CCDirector::calculateMPF) != (ret25(D::*)())(&D::calculateMPF)) {
            modContainer.registerHookEnable(address25, FunctionScrapper::addressOfNonVirtual((ret25(D::*)())(&D::calculateMPF)));
        }

        if constexpr((ret26(*)(CCDirector*, cocos2d::CCPoint const&))(&$CCDirector::convertToGL) != (ret26(D::*)(cocos2d::CCPoint const&))(&D::convertToGL)) {
            modContainer.registerHookEnable(address26, FunctionScrapper::addressOfNonVirtual((ret26(D::*)(cocos2d::CCPoint const&))(&D::convertToGL)));
        }

        if constexpr((ret27(*)(CCDirector*))(&$CCDirector::drawScene) != (ret27(D::*)())(&D::drawScene)) {
            modContainer.registerHookEnable(address27, FunctionScrapper::addressOfNonVirtual((ret27(D::*)())(&D::drawScene)));
        }

        if constexpr((ret28(*)(CCDirector*))(&$CCDirector::setNextScene) != (ret28(D::*)())(&D::setNextScene)) {
            modContainer.registerHookEnable(address28, FunctionScrapper::addressOfNonVirtual((ret28(D::*)())(&D::setNextScene)));
        }

        if constexpr((ret29(*)(CCDirector*))(&$CCDirector::showStats) != (ret29(D::*)())(&D::showStats)) {
            modContainer.registerHookEnable(address29, FunctionScrapper::addressOfNonVirtual((ret29(D::*)())(&D::showStats)));
        }

        if constexpr((ret30(*)(CCDirector*, cocos2d::TextureQuality))(&$CCDirector::updateContentScale) != (ret30(D::*)(cocos2d::TextureQuality))(&D::updateContentScale)) {
            modContainer.registerHookEnable(address30, FunctionScrapper::addressOfNonVirtual((ret30(D::*)(cocos2d::TextureQuality))(&D::updateContentScale)));
        }

        if constexpr((ret31(*)(CCDirector*, float, cocos2d::PopTransition))(&$CCDirector::popSceneWithTransition) != (ret31(D::*)(float, cocos2d::PopTransition))(&D::popSceneWithTransition)) {
            modContainer.registerHookEnable(address31, FunctionScrapper::addressOfNonVirtual((ret31(D::*)(float, cocos2d::PopTransition))(&D::popSceneWithTransition)));
        }

        return true;
    }
};

template<class D>
struct $UILayer : UILayer, InterfaceBase {
    $UILayer(const $UILayer& c) : UILayer(c) {}
    $UILayer() = delete;

    using ret0 = UILayer*;
    static inline auto address0 = base+0x27fd10;

    dupable static ret0 create() {
        return reinterpret_cast<ret0(*)(UILayer*)>(address0)();
    }

    using ret1 = void;
    static inline auto address1 = base+0x280960;

    dupable ret1 disableMenu() {
        return reinterpret_cast<ret1(*)(UILayer*)>(address1)(this);
    }

    using ret2 = void;
    static inline auto address2 = base+0x280940;

    dupable ret2 enableMenu() {
        return reinterpret_cast<ret2(*)(UILayer*)>(address2)(this);
    }

    using ret3 = void;
    static inline auto address3 = base+0x280830;

    dupable ret3 pCommand(cocos2d::CCNode* p0) {
        return reinterpret_cast<ret3(*)(UILayer*, cocos2d::CCNode*)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x280430;

    dupable ret4 toggleCheckpointsMenu(bool p0) {
        return reinterpret_cast<ret4(*)(UILayer*, bool)>(address4)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(UILayer*))(&$UILayer::create) != (ret0(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::create)));
        }

        if constexpr((ret1(*)(UILayer*))(&$UILayer::disableMenu) != (ret1(D::*)())(&D::disableMenu)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::disableMenu)));
        }

        if constexpr((ret2(*)(UILayer*))(&$UILayer::enableMenu) != (ret2(D::*)())(&D::enableMenu)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::enableMenu)));
        }

        if constexpr((ret3(*)(UILayer*, cocos2d::CCNode*))(&$UILayer::pCommand) != (ret3(D::*)(cocos2d::CCNode*))(&D::pCommand)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(cocos2d::CCNode*))(&D::pCommand)));
        }

        if constexpr((ret4(*)(UILayer*, bool))(&$UILayer::toggleCheckpointsMenu) != (ret4(D::*)(bool))(&D::toggleCheckpointsMenu)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(bool))(&D::toggleCheckpointsMenu)));
        }

        return true;
    }
};

template<class D>
struct $CCKeypadHandler : CCKeypadHandler, InterfaceBase {
    $CCKeypadHandler(const $CCKeypadHandler& c) : CCKeypadHandler(c) {}
    $CCKeypadHandler() = delete;

    using ret0 = cocos2d::CCKeypadHandler*;
    static inline auto address0 = base+0x1ff2d0;

    dupable static ret0 handlerWithDelegate(cocos2d::CCKeypadDelegate* p0) {
        return reinterpret_cast<ret0(*)(CCKeypadHandler*, cocos2d::CCKeypadDelegate*)>(address0)(p0);
    }

    using ret1 = decltype(declval<cocos2d::CCKeypadHandler>().initWithDelegate(declval<cocos2d::CCKeypadDelegate*>()));
    static inline auto address1 = base+0x1ff290;

    dupable ret1 initWithDelegate(cocos2d::CCKeypadDelegate* p0) {
        return reinterpret_cast<ret1(*)(CCKeypadHandler*, cocos2d::CCKeypadDelegate*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x1ff130;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address2)(this);
    }

    using ret3 = cocos2d::CCKeypadDelegate*;
    static inline auto address3 = base+0x1ff0b0;

    dupable ret3 getDelegate() {
        return reinterpret_cast<ret3(*)(CCKeypadHandler*)>(address3)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCKeypadHandler*, cocos2d::CCKeypadDelegate*))(&$CCKeypadHandler::handlerWithDelegate) != (ret0(D::*)(cocos2d::CCKeypadDelegate*))(&D::handlerWithDelegate)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCKeypadDelegate*))(&D::handlerWithDelegate)));
        }

        if constexpr((ret1(*)(CCKeypadHandler*, cocos2d::CCKeypadDelegate*))(&$CCKeypadHandler::initWithDelegate) != (ret1(D::*)(cocos2d::CCKeypadDelegate*))(&D::initWithDelegate)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)(cocos2d::CCKeypadDelegate*))(&D::initWithDelegate)));
        }

        if constexpr((ret2(*)(CCKeypadHandler*))(&$CCKeypadHandler::destructor) != (ret2(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::destructor)));
        }

        if constexpr((ret3(*)(CCKeypadHandler*))(&$CCKeypadHandler::getDelegate) != (ret3(D::*)())(&D::getDelegate)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::getDelegate)));
        }

        return true;
    }
};

template<class D>
struct $CCScale9Sprite : CCScale9Sprite, InterfaceBase {
    $CCScale9Sprite(const $CCScale9Sprite& c) : CCScale9Sprite(c) {}
    $CCScale9Sprite() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x211330;

    dupable void constructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = cocos2d::extension::CCScale9Sprite*;
    static inline auto address1 = base+0x2130d0;

    dupable static ret1 create(char const* p0) {
        return reinterpret_cast<ret1(*)(CCScale9Sprite*, char const*)>(address1)(p0);
    }

    using ret2 = cocos2d::extension::CCScale9Sprite*;
    static inline auto address2 = base+0x212ef0;

    dupable static ret2 create(char const* p0,cocos2d::CCRect p1) {
        return reinterpret_cast<ret2(*)(CCScale9Sprite*, char const*, cocos2d::CCRect)>(address2)(p0, p1);
    }

    using ret3 = void;
    static inline auto address3 = base+0x211590;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address3)(this);
    }

    using ret4 = decltype(declval<cocos2d::extension::CCScale9Sprite>().init());
    static inline auto address4 = base+0x2115d0;

    dupable ret4 init() {
        return reinterpret_cast<ret4(*)(CCScale9Sprite*)>(address4)(this);
    }

    using ret5 = decltype(declval<cocos2d::extension::CCScale9Sprite>().setContentSize(declval<cocos2d::CCSize const&>()));
    static inline auto address5 = base+0x2127c0;

    dupable ret5 setContentSize(cocos2d::CCSize const& p0) {
        return reinterpret_cast<ret5(*)(CCScale9Sprite*, cocos2d::CCSize const&)>(address5)(this, p0);
    }

    using ret6 = decltype(declval<cocos2d::extension::CCScale9Sprite>().visit());
    static inline auto address6 = base+0x213bf0;

    dupable ret6 visit() {
        return reinterpret_cast<ret6(*)(CCScale9Sprite*)>(address6)(this);
    }

    using ret7 = decltype(declval<cocos2d::extension::CCScale9Sprite>().getOpacity());
    static inline auto address7 = base+0x213f30;

    dupable ret7 getOpacity() {
        return reinterpret_cast<ret7(*)(CCScale9Sprite*)>(address7)(this);
    }

    using ret8 = decltype(declval<cocos2d::extension::CCScale9Sprite>().setOpacity(declval<unsigned char>()));
    static inline auto address8 = base+0x213dd0;

    dupable ret8 setOpacity(unsigned char p0) {
        return reinterpret_cast<ret8(*)(CCScale9Sprite*, unsigned char)>(address8)(this, p0);
    }

    using ret9 = decltype(declval<cocos2d::extension::CCScale9Sprite>().updateDisplayedOpacity(declval<unsigned char>()));
    static inline auto address9 = base+0x2139b0;

    dupable ret9 updateDisplayedOpacity(unsigned char p0) {
        return reinterpret_cast<ret9(*)(CCScale9Sprite*, unsigned char)>(address9)(this, p0);
    }

    using ret10 = decltype(declval<cocos2d::extension::CCScale9Sprite>().getColor());
    static inline auto address10 = base+0x213db0;

    dupable ret10 getColor() {
        return reinterpret_cast<ret10(*)(CCScale9Sprite*)>(address10)(this);
    }

    using ret11 = decltype(declval<cocos2d::extension::CCScale9Sprite>().setColor(declval<cocos2d::_ccColor3B const&>()));
    static inline auto address11 = base+0x213c20;

    dupable ret11 setColor(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret11(*)(CCScale9Sprite*, cocos2d::_ccColor3B const&)>(address11)(this, p0);
    }

    using ret12 = decltype(declval<cocos2d::extension::CCScale9Sprite>().updateDisplayedColor(declval<cocos2d::_ccColor3B const&>()));
    static inline auto address12 = base+0x213a20;

    dupable ret12 updateDisplayedColor(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret12(*)(CCScale9Sprite*, cocos2d::_ccColor3B const&)>(address12)(this, p0);
    }

    using ret13 = decltype(declval<cocos2d::extension::CCScale9Sprite>().setOpacityModifyRGB(declval<bool>()));
    static inline auto address13 = base+0x213830;

    dupable ret13 setOpacityModifyRGB(bool p0) {
        return reinterpret_cast<ret13(*)(CCScale9Sprite*, bool)>(address13)(this, p0);
    }

    using ret14 = decltype(declval<cocos2d::extension::CCScale9Sprite>().isOpacityModifyRGB());
    static inline auto address14 = base+0x213990;

    dupable ret14 isOpacityModifyRGB() {
        return reinterpret_cast<ret14(*)(CCScale9Sprite*)>(address14)(this);
    }

    using ret15 = decltype(declval<cocos2d::extension::CCScale9Sprite>().getPreferredSize());
    static inline auto address15 = base+0x213620;

    dupable ret15 getPreferredSize() {
        return reinterpret_cast<ret15(*)(CCScale9Sprite*)>(address15)(this);
    }

    using ret16 = decltype(declval<cocos2d::extension::CCScale9Sprite>().setPreferredSize(declval<cocos2d::CCSize>()));
    static inline auto address16 = base+0x2135f0;

    dupable ret16 setPreferredSize(cocos2d::CCSize p0) {
        return reinterpret_cast<ret16(*)(CCScale9Sprite*, cocos2d::CCSize)>(address16)(this, p0);
    }

    using ret17 = decltype(declval<cocos2d::extension::CCScale9Sprite>().getCapInsets());
    static inline auto address17 = base+0x2136e0;

    dupable ret17 getCapInsets() {
        return reinterpret_cast<ret17(*)(CCScale9Sprite*)>(address17)(this);
    }

    using ret18 = decltype(declval<cocos2d::extension::CCScale9Sprite>().setCapInsets(declval<cocos2d::CCRect>()));
    static inline auto address18 = base+0x213640;

    dupable ret18 setCapInsets(cocos2d::CCRect p0) {
        return reinterpret_cast<ret18(*)(CCScale9Sprite*, cocos2d::CCRect)>(address18)(this, p0);
    }

    using ret19 = decltype(declval<cocos2d::extension::CCScale9Sprite>().getInsetLeft());
    static inline auto address19 = base+0x213b30;

    dupable ret19 getInsetLeft() {
        return reinterpret_cast<ret19(*)(CCScale9Sprite*)>(address19)(this);
    }

    using ret20 = decltype(declval<cocos2d::extension::CCScale9Sprite>().setInsetLeft(declval<float>()));
    static inline auto address20 = base+0x213b70;

    dupable ret20 setInsetLeft(float p0) {
        return reinterpret_cast<ret20(*)(CCScale9Sprite*, float)>(address20)(this, p0);
    }

    using ret21 = decltype(declval<cocos2d::extension::CCScale9Sprite>().getInsetTop());
    static inline auto address21 = base+0x213b40;

    dupable ret21 getInsetTop() {
        return reinterpret_cast<ret21(*)(CCScale9Sprite*)>(address21)(this);
    }

    using ret22 = decltype(declval<cocos2d::extension::CCScale9Sprite>().setInsetTop(declval<float>()));
    static inline auto address22 = base+0x213b90;

    dupable ret22 setInsetTop(float p0) {
        return reinterpret_cast<ret22(*)(CCScale9Sprite*, float)>(address22)(this, p0);
    }

    using ret23 = decltype(declval<cocos2d::extension::CCScale9Sprite>().getInsetRight());
    static inline auto address23 = base+0x213b50;

    dupable ret23 getInsetRight() {
        return reinterpret_cast<ret23(*)(CCScale9Sprite*)>(address23)(this);
    }

    using ret24 = decltype(declval<cocos2d::extension::CCScale9Sprite>().setInsetRight(declval<float>()));
    static inline auto address24 = base+0x213bb0;

    dupable ret24 setInsetRight(float p0) {
        return reinterpret_cast<ret24(*)(CCScale9Sprite*, float)>(address24)(this, p0);
    }

    using ret25 = decltype(declval<cocos2d::extension::CCScale9Sprite>().getInsetBottom());
    static inline auto address25 = base+0x213b60;

    dupable ret25 getInsetBottom() {
        return reinterpret_cast<ret25(*)(CCScale9Sprite*)>(address25)(this);
    }

    using ret26 = decltype(declval<cocos2d::extension::CCScale9Sprite>().setInsetBottom(declval<float>()));
    static inline auto address26 = base+0x213bd0;

    dupable ret26 setInsetBottom(float p0) {
        return reinterpret_cast<ret26(*)(CCScale9Sprite*, float)>(address26)(this, p0);
    }

    using ret27 = decltype(declval<cocos2d::extension::CCScale9Sprite>().initWithBatchNode(declval<cocos2d::CCSpriteBatchNode*>(), declval<cocos2d::CCRect>(), declval<bool>(), declval<cocos2d::CCRect>()));
    static inline auto address27 = base+0x211690;

    dupable ret27 initWithBatchNode(cocos2d::CCSpriteBatchNode* p0,cocos2d::CCRect p1,bool p2,cocos2d::CCRect p3) {
        return reinterpret_cast<ret27(*)(CCScale9Sprite*, cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect)>(address27)(this, p0, p1, p2, p3);
    }

    using ret28 = decltype(declval<cocos2d::extension::CCScale9Sprite>().initWithBatchNode(declval<cocos2d::CCSpriteBatchNode*>(), declval<cocos2d::CCRect>(), declval<cocos2d::CCRect>()));
    static inline auto address28 = base+0x211630;

    dupable ret28 initWithBatchNode(cocos2d::CCSpriteBatchNode* p0,cocos2d::CCRect p1,cocos2d::CCRect p2) {
        return reinterpret_cast<ret28(*)(CCScale9Sprite*, cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, cocos2d::CCRect)>(address28)(this, p0, p1, p2);
    }

    using ret29 = decltype(declval<cocos2d::extension::CCScale9Sprite>().initWithFile(declval<char const*>(), declval<cocos2d::CCRect>(), declval<cocos2d::CCRect>()));
    static inline auto address29 = base+0x212d50;

    dupable ret29 initWithFile(char const* p0,cocos2d::CCRect p1,cocos2d::CCRect p2) {
        return reinterpret_cast<ret29(*)(CCScale9Sprite*, char const*, cocos2d::CCRect, cocos2d::CCRect)>(address29)(this, p0, p1, p2);
    }

    using ret30 = decltype(declval<cocos2d::extension::CCScale9Sprite>().initWithFile(declval<char const*>(), declval<cocos2d::CCRect>()));
    static inline auto address30 = base+0x212e80;

    dupable ret30 initWithFile(char const* p0,cocos2d::CCRect p1) {
        return reinterpret_cast<ret30(*)(CCScale9Sprite*, char const*, cocos2d::CCRect)>(address30)(this, p0, p1);
    }

    using ret31 = decltype(declval<cocos2d::extension::CCScale9Sprite>().initWithFile(declval<cocos2d::CCRect>(), declval<char const*>()));
    static inline auto address31 = base+0x212f80;

    dupable ret31 initWithFile(cocos2d::CCRect p0,char const* p1) {
        return reinterpret_cast<ret31(*)(CCScale9Sprite*, cocos2d::CCRect, char const*)>(address31)(this, p0, p1);
    }

    using ret32 = decltype(declval<cocos2d::extension::CCScale9Sprite>().initWithFile(declval<char const*>()));
    static inline auto address32 = base+0x213080;

    dupable ret32 initWithFile(char const* p0) {
        return reinterpret_cast<ret32(*)(CCScale9Sprite*, char const*)>(address32)(this, p0);
    }

    using ret33 = decltype(declval<cocos2d::extension::CCScale9Sprite>().initWithSpriteFrame(declval<cocos2d::CCSpriteFrame*>(), declval<cocos2d::CCRect>()));
    static inline auto address33 = base+0x213140;

    dupable ret33 initWithSpriteFrame(cocos2d::CCSpriteFrame* p0,cocos2d::CCRect p1) {
        return reinterpret_cast<ret33(*)(CCScale9Sprite*, cocos2d::CCSpriteFrame*, cocos2d::CCRect)>(address33)(this, p0, p1);
    }

    using ret34 = decltype(declval<cocos2d::extension::CCScale9Sprite>().initWithSpriteFrame(declval<cocos2d::CCSpriteFrame*>()));
    static inline auto address34 = base+0x213250;

    dupable ret34 initWithSpriteFrame(cocos2d::CCSpriteFrame* p0) {
        return reinterpret_cast<ret34(*)(CCScale9Sprite*, cocos2d::CCSpriteFrame*)>(address34)(this, p0);
    }

    using ret35 = decltype(declval<cocos2d::extension::CCScale9Sprite>().initWithSpriteFrameName(declval<char const*>(), declval<cocos2d::CCRect>()));
    static inline auto address35 = base+0x213310;

    dupable ret35 initWithSpriteFrameName(char const* p0,cocos2d::CCRect p1) {
        return reinterpret_cast<ret35(*)(CCScale9Sprite*, char const*, cocos2d::CCRect)>(address35)(this, p0, p1);
    }

    using ret36 = decltype(declval<cocos2d::extension::CCScale9Sprite>().initWithSpriteFrameName(declval<char const*>()));
    static inline auto address36 = base+0x213410;

    dupable ret36 initWithSpriteFrameName(char const* p0) {
        return reinterpret_cast<ret36(*)(CCScale9Sprite*, char const*)>(address36)(this, p0);
    }

    using ret37 = decltype(declval<cocos2d::extension::CCScale9Sprite>().updateWithBatchNode(declval<cocos2d::CCSpriteBatchNode*>(), declval<cocos2d::CCRect>(), declval<bool>(), declval<cocos2d::CCRect>()));
    static inline auto address37 = base+0x211730;

    dupable ret37 updateWithBatchNode(cocos2d::CCSpriteBatchNode* p0,cocos2d::CCRect p1,bool p2,cocos2d::CCRect p3) {
        return reinterpret_cast<ret37(*)(CCScale9Sprite*, cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect)>(address37)(this, p0, p1, p2, p3);
    }

    using ret38 = decltype(declval<cocos2d::extension::CCScale9Sprite>().setSpriteFrame(declval<cocos2d::CCSpriteFrame*>()));
    static inline auto address38 = base+0x213a90;

    dupable ret38 setSpriteFrame(cocos2d::CCSpriteFrame* p0) {
        return reinterpret_cast<ret38(*)(CCScale9Sprite*, cocos2d::CCSpriteFrame*)>(address38)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCScale9Sprite*))(&$CCScale9Sprite::constructor) != (ret0(D::*)())(&D::constructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::constructor)));
        }

        if constexpr((ret1(*)(CCScale9Sprite*, char const*))(&$CCScale9Sprite::create) != (ret1(D::*)(char const*))(&D::create)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(char const*))(&D::create)));
        }

        if constexpr((ret2(*)(CCScale9Sprite*, char const*, cocos2d::CCRect))(&$CCScale9Sprite::create) != (ret2(D::*)(char const*, cocos2d::CCRect))(&D::create)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(char const*, cocos2d::CCRect))(&D::create)));
        }

        if constexpr((ret3(*)(CCScale9Sprite*))(&$CCScale9Sprite::destructor) != (ret3(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::destructor)));
        }

        if constexpr((ret4(*)(CCScale9Sprite*))(&$CCScale9Sprite::init) != (ret4(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)())(&D::init)));
        }

        if constexpr((ret5(*)(CCScale9Sprite*, cocos2d::CCSize const&))(&$CCScale9Sprite::setContentSize) != (ret5(D::*)(cocos2d::CCSize const&))(&D::setContentSize)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)(cocos2d::CCSize const&))(&D::setContentSize)));
        }

        if constexpr((ret6(*)(CCScale9Sprite*))(&$CCScale9Sprite::visit) != (ret6(D::*)())(&D::visit)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)())(&D::visit)));
        }

        if constexpr((ret7(*)(CCScale9Sprite*))(&$CCScale9Sprite::getOpacity) != (ret7(D::*)())(&D::getOpacity)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)())(&D::getOpacity)));
        }

        if constexpr((ret8(*)(CCScale9Sprite*, unsigned char))(&$CCScale9Sprite::setOpacity) != (ret8(D::*)(unsigned char))(&D::setOpacity)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)(unsigned char))(&D::setOpacity)));
        }

        if constexpr((ret9(*)(CCScale9Sprite*, unsigned char))(&$CCScale9Sprite::updateDisplayedOpacity) != (ret9(D::*)(unsigned char))(&D::updateDisplayedOpacity)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfVirtual((ret9(D::*)(unsigned char))(&D::updateDisplayedOpacity)));
        }

        if constexpr((ret10(*)(CCScale9Sprite*))(&$CCScale9Sprite::getColor) != (ret10(D::*)())(&D::getColor)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfVirtual((ret10(D::*)())(&D::getColor)));
        }

        if constexpr((ret11(*)(CCScale9Sprite*, cocos2d::_ccColor3B const&))(&$CCScale9Sprite::setColor) != (ret11(D::*)(cocos2d::_ccColor3B const&))(&D::setColor)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfVirtual((ret11(D::*)(cocos2d::_ccColor3B const&))(&D::setColor)));
        }

        if constexpr((ret12(*)(CCScale9Sprite*, cocos2d::_ccColor3B const&))(&$CCScale9Sprite::updateDisplayedColor) != (ret12(D::*)(cocos2d::_ccColor3B const&))(&D::updateDisplayedColor)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfVirtual((ret12(D::*)(cocos2d::_ccColor3B const&))(&D::updateDisplayedColor)));
        }

        if constexpr((ret13(*)(CCScale9Sprite*, bool))(&$CCScale9Sprite::setOpacityModifyRGB) != (ret13(D::*)(bool))(&D::setOpacityModifyRGB)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfVirtual((ret13(D::*)(bool))(&D::setOpacityModifyRGB)));
        }

        if constexpr((ret14(*)(CCScale9Sprite*))(&$CCScale9Sprite::isOpacityModifyRGB) != (ret14(D::*)())(&D::isOpacityModifyRGB)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfVirtual((ret14(D::*)())(&D::isOpacityModifyRGB)));
        }

        if constexpr((ret15(*)(CCScale9Sprite*))(&$CCScale9Sprite::getPreferredSize) != (ret15(D::*)())(&D::getPreferredSize)) {
            modContainer.registerHookEnable(address15, FunctionScrapper::addressOfVirtual((ret15(D::*)())(&D::getPreferredSize)));
        }

        if constexpr((ret16(*)(CCScale9Sprite*, cocos2d::CCSize))(&$CCScale9Sprite::setPreferredSize) != (ret16(D::*)(cocos2d::CCSize))(&D::setPreferredSize)) {
            modContainer.registerHookEnable(address16, FunctionScrapper::addressOfVirtual((ret16(D::*)(cocos2d::CCSize))(&D::setPreferredSize)));
        }

        if constexpr((ret17(*)(CCScale9Sprite*))(&$CCScale9Sprite::getCapInsets) != (ret17(D::*)())(&D::getCapInsets)) {
            modContainer.registerHookEnable(address17, FunctionScrapper::addressOfVirtual((ret17(D::*)())(&D::getCapInsets)));
        }

        if constexpr((ret18(*)(CCScale9Sprite*, cocos2d::CCRect))(&$CCScale9Sprite::setCapInsets) != (ret18(D::*)(cocos2d::CCRect))(&D::setCapInsets)) {
            modContainer.registerHookEnable(address18, FunctionScrapper::addressOfVirtual((ret18(D::*)(cocos2d::CCRect))(&D::setCapInsets)));
        }

        if constexpr((ret19(*)(CCScale9Sprite*))(&$CCScale9Sprite::getInsetLeft) != (ret19(D::*)())(&D::getInsetLeft)) {
            modContainer.registerHookEnable(address19, FunctionScrapper::addressOfVirtual((ret19(D::*)())(&D::getInsetLeft)));
        }

        if constexpr((ret20(*)(CCScale9Sprite*, float))(&$CCScale9Sprite::setInsetLeft) != (ret20(D::*)(float))(&D::setInsetLeft)) {
            modContainer.registerHookEnable(address20, FunctionScrapper::addressOfVirtual((ret20(D::*)(float))(&D::setInsetLeft)));
        }

        if constexpr((ret21(*)(CCScale9Sprite*))(&$CCScale9Sprite::getInsetTop) != (ret21(D::*)())(&D::getInsetTop)) {
            modContainer.registerHookEnable(address21, FunctionScrapper::addressOfVirtual((ret21(D::*)())(&D::getInsetTop)));
        }

        if constexpr((ret22(*)(CCScale9Sprite*, float))(&$CCScale9Sprite::setInsetTop) != (ret22(D::*)(float))(&D::setInsetTop)) {
            modContainer.registerHookEnable(address22, FunctionScrapper::addressOfVirtual((ret22(D::*)(float))(&D::setInsetTop)));
        }

        if constexpr((ret23(*)(CCScale9Sprite*))(&$CCScale9Sprite::getInsetRight) != (ret23(D::*)())(&D::getInsetRight)) {
            modContainer.registerHookEnable(address23, FunctionScrapper::addressOfVirtual((ret23(D::*)())(&D::getInsetRight)));
        }

        if constexpr((ret24(*)(CCScale9Sprite*, float))(&$CCScale9Sprite::setInsetRight) != (ret24(D::*)(float))(&D::setInsetRight)) {
            modContainer.registerHookEnable(address24, FunctionScrapper::addressOfVirtual((ret24(D::*)(float))(&D::setInsetRight)));
        }

        if constexpr((ret25(*)(CCScale9Sprite*))(&$CCScale9Sprite::getInsetBottom) != (ret25(D::*)())(&D::getInsetBottom)) {
            modContainer.registerHookEnable(address25, FunctionScrapper::addressOfVirtual((ret25(D::*)())(&D::getInsetBottom)));
        }

        if constexpr((ret26(*)(CCScale9Sprite*, float))(&$CCScale9Sprite::setInsetBottom) != (ret26(D::*)(float))(&D::setInsetBottom)) {
            modContainer.registerHookEnable(address26, FunctionScrapper::addressOfVirtual((ret26(D::*)(float))(&D::setInsetBottom)));
        }

        if constexpr((ret27(*)(CCScale9Sprite*, cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect))(&$CCScale9Sprite::initWithBatchNode) != (ret27(D::*)(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect))(&D::initWithBatchNode)) {
            modContainer.registerHookEnable(address27, FunctionScrapper::addressOfVirtual((ret27(D::*)(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect))(&D::initWithBatchNode)));
        }

        if constexpr((ret28(*)(CCScale9Sprite*, cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, cocos2d::CCRect))(&$CCScale9Sprite::initWithBatchNode) != (ret28(D::*)(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, cocos2d::CCRect))(&D::initWithBatchNode)) {
            modContainer.registerHookEnable(address28, FunctionScrapper::addressOfVirtual((ret28(D::*)(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, cocos2d::CCRect))(&D::initWithBatchNode)));
        }

        if constexpr((ret29(*)(CCScale9Sprite*, char const*, cocos2d::CCRect, cocos2d::CCRect))(&$CCScale9Sprite::initWithFile) != (ret29(D::*)(char const*, cocos2d::CCRect, cocos2d::CCRect))(&D::initWithFile)) {
            modContainer.registerHookEnable(address29, FunctionScrapper::addressOfVirtual((ret29(D::*)(char const*, cocos2d::CCRect, cocos2d::CCRect))(&D::initWithFile)));
        }

        if constexpr((ret30(*)(CCScale9Sprite*, char const*, cocos2d::CCRect))(&$CCScale9Sprite::initWithFile) != (ret30(D::*)(char const*, cocos2d::CCRect))(&D::initWithFile)) {
            modContainer.registerHookEnable(address30, FunctionScrapper::addressOfVirtual((ret30(D::*)(char const*, cocos2d::CCRect))(&D::initWithFile)));
        }

        if constexpr((ret31(*)(CCScale9Sprite*, cocos2d::CCRect, char const*))(&$CCScale9Sprite::initWithFile) != (ret31(D::*)(cocos2d::CCRect, char const*))(&D::initWithFile)) {
            modContainer.registerHookEnable(address31, FunctionScrapper::addressOfVirtual((ret31(D::*)(cocos2d::CCRect, char const*))(&D::initWithFile)));
        }

        if constexpr((ret32(*)(CCScale9Sprite*, char const*))(&$CCScale9Sprite::initWithFile) != (ret32(D::*)(char const*))(&D::initWithFile)) {
            modContainer.registerHookEnable(address32, FunctionScrapper::addressOfVirtual((ret32(D::*)(char const*))(&D::initWithFile)));
        }

        if constexpr((ret33(*)(CCScale9Sprite*, cocos2d::CCSpriteFrame*, cocos2d::CCRect))(&$CCScale9Sprite::initWithSpriteFrame) != (ret33(D::*)(cocos2d::CCSpriteFrame*, cocos2d::CCRect))(&D::initWithSpriteFrame)) {
            modContainer.registerHookEnable(address33, FunctionScrapper::addressOfVirtual((ret33(D::*)(cocos2d::CCSpriteFrame*, cocos2d::CCRect))(&D::initWithSpriteFrame)));
        }

        if constexpr((ret34(*)(CCScale9Sprite*, cocos2d::CCSpriteFrame*))(&$CCScale9Sprite::initWithSpriteFrame) != (ret34(D::*)(cocos2d::CCSpriteFrame*))(&D::initWithSpriteFrame)) {
            modContainer.registerHookEnable(address34, FunctionScrapper::addressOfVirtual((ret34(D::*)(cocos2d::CCSpriteFrame*))(&D::initWithSpriteFrame)));
        }

        if constexpr((ret35(*)(CCScale9Sprite*, char const*, cocos2d::CCRect))(&$CCScale9Sprite::initWithSpriteFrameName) != (ret35(D::*)(char const*, cocos2d::CCRect))(&D::initWithSpriteFrameName)) {
            modContainer.registerHookEnable(address35, FunctionScrapper::addressOfVirtual((ret35(D::*)(char const*, cocos2d::CCRect))(&D::initWithSpriteFrameName)));
        }

        if constexpr((ret36(*)(CCScale9Sprite*, char const*))(&$CCScale9Sprite::initWithSpriteFrameName) != (ret36(D::*)(char const*))(&D::initWithSpriteFrameName)) {
            modContainer.registerHookEnable(address36, FunctionScrapper::addressOfVirtual((ret36(D::*)(char const*))(&D::initWithSpriteFrameName)));
        }

        if constexpr((ret37(*)(CCScale9Sprite*, cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect))(&$CCScale9Sprite::updateWithBatchNode) != (ret37(D::*)(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect))(&D::updateWithBatchNode)) {
            modContainer.registerHookEnable(address37, FunctionScrapper::addressOfVirtual((ret37(D::*)(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect))(&D::updateWithBatchNode)));
        }

        if constexpr((ret38(*)(CCScale9Sprite*, cocos2d::CCSpriteFrame*))(&$CCScale9Sprite::setSpriteFrame) != (ret38(D::*)(cocos2d::CCSpriteFrame*))(&D::setSpriteFrame)) {
            modContainer.registerHookEnable(address38, FunctionScrapper::addressOfVirtual((ret38(D::*)(cocos2d::CCSpriteFrame*))(&D::setSpriteFrame)));
        }

        return true;
    }
};

template<class D>
struct $GJSpiderSprite : GJSpiderSprite, InterfaceBase {
    $GJSpiderSprite(const $GJSpiderSprite& c) : GJSpiderSprite(c) {}
    $GJSpiderSprite() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x34c4a0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = bool;
    static inline auto address1 = base+0x34c700;

    dupable ret1 init() {
        return reinterpret_cast<ret1(*)(GJSpiderSprite*)>(address1)(this);
    }

    using ret2 = GJSpiderSprite*;
    static inline auto address2 = base+0x34c5b0;

    dupable static ret2 create() {
        return reinterpret_cast<ret2(*)(GJSpiderSprite*)>(address2)();
    }
    static bool _apply() {

        if constexpr((ret0(*)(GJSpiderSprite*))(&$GJSpiderSprite::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(GJSpiderSprite*))(&$GJSpiderSprite::init) != (ret1(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::init)));
        }

        if constexpr((ret2(*)(GJSpiderSprite*))(&$GJSpiderSprite::create) != (ret2(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $GJEffectManager : GJEffectManager, InterfaceBase {
    $GJEffectManager(const $GJEffectManager& c) : GJEffectManager(c) {}
    $GJEffectManager() = delete;

    using ret0 = bool;
    static inline auto address0 = base+0x180230;

    dupable ret0 init() {
        return reinterpret_cast<ret0(*)(GJEffectManager*)>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x180cb0;

    dupable ret1 activeColorForIndex(int p0) {
        return reinterpret_cast<ret1(*)(GJEffectManager*, int)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x180e10;

    dupable ret2 activeOpacityForIndex(int p0) {
        return reinterpret_cast<ret2(*)(GJEffectManager*, int)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x1817a0;

    dupable ret3 addAllInheritedColorActions(cocos2d::CCArray* p0) {
        return reinterpret_cast<ret3(*)(GJEffectManager*, cocos2d::CCArray*)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x184c10;

    dupable ret4 addGroupPulseEffect(PulseEffectAction* p0) {
        return reinterpret_cast<ret4(*)(GJEffectManager*, PulseEffectAction*)>(address4)(this, p0);
    }

    using ret5 = void;
    static inline auto address5 = base+0x180f70;

    dupable ret5 calculateBaseActiveColors() {
        return reinterpret_cast<ret5(*)(GJEffectManager*)>(address5)(this);
    }

    using ret6 = void;
    static inline auto address6 = base+0x1818f0;

    dupable ret6 calculateInheritedColor(int p0,ColorAction* p1) {
        return reinterpret_cast<ret6(*)(GJEffectManager*, int, ColorAction*)>(address6)(this, p0, p1);
    }

    using ret7 = void;
    static inline auto address7 = base+0x185b90;

    dupable ret7 calculateLightBGColor(cocos2d::_ccColor3B p0) {
        return reinterpret_cast<ret7(*)(GJEffectManager*, cocos2d::_ccColor3B)>(address7)(this, p0);
    }

    using ret8 = void;
    static inline auto address8 = base+0x181dc0;

    dupable ret8 colorActionChanged(ColorAction* p0) {
        return reinterpret_cast<ret8(*)(GJEffectManager*, ColorAction*)>(address8)(this, p0);
    }

    using ret9 = void;
    static inline auto address9 = base+0x181da0;

    dupable ret9 colorExists(int p0) {
        return reinterpret_cast<ret9(*)(GJEffectManager*, int)>(address9)(this, p0);
    }

    using ret10 = void;
    static inline auto address10 = base+0x182650;

    dupable ret10 colorForEffect(cocos2d::_ccColor3B p0,cocos2d::_ccHSVValue p1) {
        return reinterpret_cast<ret10(*)(GJEffectManager*, cocos2d::_ccColor3B, cocos2d::_ccHSVValue)>(address10)(this, p0, p1);
    }

    using ret11 = cocos2d::_ccColor3B;
    static inline auto address11 = base+0x184f90;

    dupable ret11 colorForGroupID(int p0,cocos2d::_ccColor3B const& p1,bool p2) {
        return reinterpret_cast<ret11(*)(GJEffectManager*, int, cocos2d::_ccColor3B const&, bool)>(address11)(this, p0, p1, p2);
    }

    using ret12 = void;
    static inline auto address12 = base+0x180ad0;

    dupable ret12 colorForIndex(int p0) {
        return reinterpret_cast<ret12(*)(GJEffectManager*, int)>(address12)(this, p0);
    }

    using ret13 = void;
    static inline auto address13 = base+0x181bf0;

    dupable ret13 colorForPulseEffect(cocos2d::_ccColor3B const& p0,PulseEffectAction* p1) {
        return reinterpret_cast<ret13(*)(GJEffectManager*, cocos2d::_ccColor3B const&, PulseEffectAction*)>(address13)(this, p0, p1);
    }

    using ret14 = void;
    static inline auto address14 = base+0x185a40;

    dupable ret14 countChangedForItem(int p0) {
        return reinterpret_cast<ret14(*)(GJEffectManager*, int)>(address14)(this, p0);
    }

    using ret15 = void;
    static inline auto address15 = base+0x185a10;

    dupable ret15 countForItem(int p0) {
        return reinterpret_cast<ret15(*)(GJEffectManager*, int)>(address15)(this, p0);
    }

    using ret16 = GJEffectManager*;
    static inline auto address16 = base+0x1800f0;

    dupable static ret16 create() {
        return reinterpret_cast<ret16(*)(GJEffectManager*)>(address16)();
    }

    using ret17 = void;
    static inline auto address17 = base+0x182ed0;

    dupable ret17 createFollowCommand(float p0,float p1,float p2,int p3,int p4,bool p5,int p6) {
        return reinterpret_cast<ret17(*)(GJEffectManager*, float, float, float, int, int, bool, int)>(address17)(this, p0, p1, p2, p3, p4, p5, p6);
    }

    using ret18 = void;
    static inline auto address18 = base+0x182cc0;

    dupable ret18 createMoveCommand(cocos2d::CCPoint p0,int p1,float p2,int p3,float p4,bool p5,bool p6,int p7) {
        return reinterpret_cast<ret18(*)(GJEffectManager*, cocos2d::CCPoint, int, float, int, float, bool, bool, int)>(address18)(this, p0, p1, p2, p3, p4, p5, p6, p7);
    }

    using ret19 = void;
    static inline auto address19 = base+0x182fe0;

    dupable ret19 createPlayerFollowCommand(float p0,float p1,int p2,float p3,float p4,int p5,int p6) {
        return reinterpret_cast<ret19(*)(GJEffectManager*, float, float, int, float, float, int, int)>(address19)(this, p0, p1, p2, p3, p4, p5, p6);
    }

    using ret20 = void;
    static inline auto address20 = base+0x182df0;

    dupable ret20 createRotateCommand(int p0,float p1,int p2,int p3,int p4,float p5,bool p6,int p7) {
        return reinterpret_cast<ret20(*)(GJEffectManager*, int, float, int, int, int, float, bool, int)>(address20)(this, p0, p1, p2, p3, p4, p5, p6, p7);
    }

    using ret21 = void;
    static inline auto address21 = base+0x180980;

    dupable ret21 getAllColorActions() {
        return reinterpret_cast<ret21(*)(GJEffectManager*)>(address21)(this);
    }

    using ret22 = void;
    static inline auto address22 = base+0x1809e0;

    dupable ret22 getAllColorSprites() {
        return reinterpret_cast<ret22(*)(GJEffectManager*)>(address22)(this);
    }

    using ret23 = constcocos2d::_ccColor3B&;
    static inline auto address23 = base+0x180b00;

    dupable ret23 getColorAction(int p0) {
        return reinterpret_cast<ret23(*)(GJEffectManager*, int)>(address23)(this, p0);
    }

    using ret24 = constcocos2d::_ccColor3B&;
    static inline auto address24 = base+0x180d00;

    dupable ret24 getColorSprite(int p0) {
        return reinterpret_cast<ret24(*)(GJEffectManager*, int)>(address24)(this, p0);
    }

    using ret25 = void;
    static inline auto address25 = base+0x1867e0;

    dupable ret25 getCurrentStateString() {
        return reinterpret_cast<ret25(*)(GJEffectManager*)>(address25)(this);
    }

    using ret26 = void;
    static inline auto address26 = base+0x184390;

    dupable ret26 getLoadedMoveOffset() {
        return reinterpret_cast<ret26(*)(GJEffectManager*)>(address26)(this);
    }

    using ret27 = void;
    static inline auto address27 = base+0x185d30;

    dupable ret27 getMixedColor(cocos2d::_ccColor3B p0,cocos2d::_ccColor3B p1,float p2) {
        return reinterpret_cast<ret27(*)(GJEffectManager*, cocos2d::_ccColor3B, cocos2d::_ccColor3B, float)>(address27)(this, p0, p1, p2);
    }

    using ret28 = uint8_t;
    static inline auto address28 = base+0x1845b0;

    dupable ret28 getOpacityActionForGroup(int p0) {
        return reinterpret_cast<ret28(*)(GJEffectManager*, int)>(address28)(this, p0);
    }

    using ret29 = void;
    static inline auto address29 = base+0x185e90;

    dupable ret29 getSaveString() {
        return reinterpret_cast<ret29(*)(GJEffectManager*)>(address29)(this);
    }

    using ret30 = void;
    static inline auto address30 = base+0x1828f0;

    dupable ret30 handleObjectCollision(bool p0,int p1,int p2) {
        return reinterpret_cast<ret30(*)(GJEffectManager*, bool, int, int)>(address30)(this, p0, p1, p2);
    }

    using ret31 = void;
    static inline auto address31 = base+0x185540;

    dupable ret31 hasActiveDualTouch() {
        return reinterpret_cast<ret31(*)(GJEffectManager*)>(address31)(this);
    }

    using ret32 = void;
    static inline auto address32 = base+0x1853b0;

    dupable ret32 hasBeenTriggered(int p0) {
        return reinterpret_cast<ret32(*)(GJEffectManager*, int)>(address32)(this, p0);
    }

    using ret33 = void;
    static inline auto address33 = base+0x184f60;

    dupable ret33 hasPulseEffectForGroupID(int p0) {
        return reinterpret_cast<ret33(*)(GJEffectManager*, int)>(address33)(this, p0);
    }

    using ret34 = bool;
    static inline auto address34 = base+0x1853d0;

    dupable ret34 isGroupEnabled(int p0) {
        return reinterpret_cast<ret34(*)(GJEffectManager*, int)>(address34)(this, p0);
    }

    using ret35 = void;
    static inline auto address35 = base+0x184c90;

    dupable ret35 keyForGroupIDColor(int p0,cocos2d::_ccColor3B const& p1,bool p2) {
        return reinterpret_cast<ret35(*)(GJEffectManager*, int, cocos2d::_ccColor3B const&, bool)>(address35)(this, p0, p1, p2);
    }

    using ret36 = void;
    static inline auto address36 = base+0x188db0;

    dupable ret36 loadState(gd::string p0) {
        return reinterpret_cast<ret36(*)(GJEffectManager*, gd::string)>(address36)(this, p0);
    }

    using ret37 = void;
    static inline auto address37 = base+0x182a00;

    dupable ret37 objectsCollided(int p0,int p1) {
        return reinterpret_cast<ret37(*)(GJEffectManager*, int, int)>(address37)(this, p0, p1);
    }

    using ret38 = void;
    static inline auto address38 = base+0x180c80;

    dupable ret38 opacityForIndex(int p0) {
        return reinterpret_cast<ret38(*)(GJEffectManager*, int)>(address38)(this, p0);
    }

    using ret39 = float;
    static inline auto address39 = base+0x184740;

    dupable ret39 opacityModForGroup(int p0) {
        return reinterpret_cast<ret39(*)(GJEffectManager*, int)>(address39)(this, p0);
    }

    using ret40 = void;
    static inline auto address40 = base+0x1855a0;

    dupable ret40 playerButton(bool p0,bool p1) {
        return reinterpret_cast<ret40(*)(GJEffectManager*, bool, bool)>(address40)(this, p0, p1);
    }

    using ret41 = void;
    static inline auto address41 = base+0x185860;

    dupable ret41 playerDied() {
        return reinterpret_cast<ret41(*)(GJEffectManager*)>(address41)(this);
    }

    using ret42 = void;
    static inline auto address42 = base+0x182720;

    dupable ret42 postCollisionCheck() {
        return reinterpret_cast<ret42(*)(GJEffectManager*)>(address42)(this);
    }

    using ret43 = void;
    static inline auto address43 = base+0x182680;

    dupable ret43 preCollisionCheck() {
        return reinterpret_cast<ret43(*)(GJEffectManager*)>(address43)(this);
    }

    using ret44 = void;
    static inline auto address44 = base+0x183660;

    dupable ret44 prepareMoveActions(float p0,bool p1) {
        return reinterpret_cast<ret44(*)(GJEffectManager*, float, bool)>(address44)(this, p0, p1);
    }

    using ret45 = void;
    static inline auto address45 = base+0x180e70;

    dupable ret45 processColors() {
        return reinterpret_cast<ret45(*)(GJEffectManager*)>(address45)(this);
    }

    using ret46 = void;
    static inline auto address46 = base+0x181530;

    dupable ret46 processCopyColorPulseActions() {
        return reinterpret_cast<ret46(*)(GJEffectManager*)>(address46)(this);
    }

    using ret47 = void;
    static inline auto address47 = base+0x181190;

    dupable ret47 processInheritedColors() {
        return reinterpret_cast<ret47(*)(GJEffectManager*)>(address47)(this);
    }

    using ret48 = void;
    static inline auto address48 = base+0x181040;

    dupable ret48 processPulseActions() {
        return reinterpret_cast<ret48(*)(GJEffectManager*)>(address48)(this);
    }

    using ret49 = void;
    static inline auto address49 = base+0x182b70;

    dupable ret49 registerCollisionTrigger(int p0,int p1,int p2,bool p3,bool p4,int p5) {
        return reinterpret_cast<ret49(*)(GJEffectManager*, int, int, int, bool, bool, int)>(address49)(this, p0, p1, p2, p3, p4, p5);
    }

    using ret50 = void;
    static inline auto address50 = base+0x1825e0;

    dupable ret50 removeAllPulseActions() {
        return reinterpret_cast<ret50(*)(GJEffectManager*)>(address50)(this);
    }

    using ret51 = void;
    static inline auto address51 = base+0x181d60;

    dupable ret51 removeColorAction(int p0) {
        return reinterpret_cast<ret51(*)(GJEffectManager*, int)>(address51)(this, p0);
    }

    using ret52 = void;
    static inline auto address52 = base+0x180690;

    dupable ret52 reset() {
        return reinterpret_cast<ret52(*)(GJEffectManager*)>(address52)(this);
    }

    using ret53 = void;
    static inline auto address53 = base+0x185280;

    dupable ret53 resetColorCache() {
        return reinterpret_cast<ret53(*)(GJEffectManager*)>(address53)(this);
    }

    using ret54 = void;
    static inline auto address54 = base+0x1807d0;

    dupable ret54 resetEffects() {
        return reinterpret_cast<ret54(*)(GJEffectManager*)>(address54)(this);
    }

    using ret55 = void;
    static inline auto address55 = base+0x180940;

    dupable ret55 resetMoveActions() {
        return reinterpret_cast<ret55(*)(GJEffectManager*)>(address55)(this);
    }

    using ret56 = void;
    static inline auto address56 = base+0x1853f0;

    dupable ret56 resetToggledGroups() {
        return reinterpret_cast<ret56(*)(GJEffectManager*)>(address56)(this);
    }

    using ret57 = void;
    static inline auto address57 = base+0x182630;

    dupable ret57 resetTriggeredIDs() {
        return reinterpret_cast<ret57(*)(GJEffectManager*)>(address57)(this);
    }

    using ret58 = void;
    static inline auto address58 = base+0x1858d0;

    dupable ret58 runCountTrigger(int p0,int p1,bool p2,int p3,bool p4,int p5) {
        return reinterpret_cast<ret58(*)(GJEffectManager*, int, int, bool, int, bool, int)>(address58)(this, p0, p1, p2, p3, p4, p5);
    }

    using ret59 = void;
    static inline auto address59 = base+0x1857a0;

    dupable ret59 runDeathTrigger(int p0,bool p1,int p2) {
        return reinterpret_cast<ret59(*)(GJEffectManager*, int, bool, int)>(address59)(this, p0, p1, p2);
    }

    using ret60 = OpacityEffectAction*;
    static inline auto address60 = base+0x1845d0;

    dupable ret60 runOpacityActionOnGroup(int p0,float p1,float p2,int p3) {
        return reinterpret_cast<ret60(*)(GJEffectManager*, int, float, float, int)>(address60)(this, p0, p1, p2, p3);
    }

    using ret61 = void;
    static inline auto address61 = base+0x184890;

    dupable ret61 runPulseEffect(int p0,bool p1,float p2,float p3,float p4,PulseEffectType p5,cocos2d::_ccColor3B p6,cocos2d::_ccHSVValue p7,int p8,bool p9,bool p10,bool p11,int p12) {
        return reinterpret_cast<ret61(*)(GJEffectManager*, int, bool, float, float, float, PulseEffectType, cocos2d::_ccColor3B, cocos2d::_ccHSVValue, int, bool, bool, bool, int)>(address61)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
    }

    using ret62 = void;
    static inline auto address62 = base+0x185460;

    dupable ret62 runTouchTriggerCommand(int p0,bool p1,TouchTriggerType p2,bool p3,int p4) {
        return reinterpret_cast<ret62(*)(GJEffectManager*, int, bool, TouchTriggerType, bool, int)>(address62)(this, p0, p1, p2, p3, p4);
    }

    using ret63 = void;
    static inline auto address63 = base+0x181d00;

    dupable ret63 setColorAction(ColorAction* p0,int p1) {
        return reinterpret_cast<ret63(*)(GJEffectManager*, ColorAction*, int)>(address63)(this, p0, p1);
    }

    using ret64 = void;
    static inline auto address64 = base+0x185e00;

    dupable ret64 setFollowing(int p0,int p1,bool p2) {
        return reinterpret_cast<ret64(*)(GJEffectManager*, int, int, bool)>(address64)(this, p0, p1, p2);
    }

    using ret65 = void;
    static inline auto address65 = base+0x186290;

    dupable ret65 setupFromString(gd::string p0) {
        return reinterpret_cast<ret65(*)(GJEffectManager*, gd::string)>(address65)(this, p0);
    }

    using ret66 = void;
    static inline auto address66 = base+0x180e40;

    dupable ret66 shouldBlend(int p0) {
        return reinterpret_cast<ret66(*)(GJEffectManager*, int)>(address66)(this, p0);
    }

    using ret67 = void;
    static inline auto address67 = base+0x1852a0;

    dupable ret67 spawnGroup(int p0,float p1,int p2) {
        return reinterpret_cast<ret67(*)(GJEffectManager*, int, float, int)>(address67)(this, p0, p1, p2);
    }

    using ret68 = void;
    static inline auto address68 = base+0x183150;

    dupable ret68 stopActionsForTrigger(EffectGameObject* p0) {
        return reinterpret_cast<ret68(*)(GJEffectManager*, EffectGameObject*)>(address68)(this, p0);
    }

    using ret69 = void;
    static inline auto address69 = base+0x1830e0;

    dupable ret69 stopMoveActionsForGroup(int p0) {
        return reinterpret_cast<ret69(*)(GJEffectManager*, int)>(address69)(this, p0);
    }

    using ret70 = void;
    static inline auto address70 = base+0x185380;

    dupable ret70 storeTriggeredID(int p0) {
        return reinterpret_cast<ret70(*)(GJEffectManager*, int)>(address70)(this, p0);
    }

    using ret71 = void;
    static inline auto address71 = base+0x182c80;

    dupable ret71 toggleGroup(int p0,bool p1) {
        return reinterpret_cast<ret71(*)(GJEffectManager*, int, bool)>(address71)(this, p0, p1);
    }

    using ret72 = void;
    static inline auto address72 = base+0x181850;

    dupable ret72 traverseInheritanceChain(InheritanceNode* p0) {
        return reinterpret_cast<ret72(*)(GJEffectManager*, InheritanceNode*)>(address72)(this, p0);
    }

    using ret73 = void;
    static inline auto address73 = base+0x1847e0;

    dupable ret73 updateActiveOpacityEffects() {
        return reinterpret_cast<ret73(*)(GJEffectManager*)>(address73)(this);
    }

    using ret74 = void;
    static inline auto address74 = base+0x184560;

    dupable ret74 updateColorAction(ColorAction* p0) {
        return reinterpret_cast<ret74(*)(GJEffectManager*, ColorAction*)>(address74)(this, p0);
    }

    using ret75 = void;
    static inline auto address75 = base+0x181f40;

    dupable ret75 updateColorEffects(float p0) {
        return reinterpret_cast<ret75(*)(GJEffectManager*, float)>(address75)(this, p0);
    }

    using ret76 = void;
    static inline auto address76 = base+0x180a40;

    dupable ret76 updateColors(cocos2d::_ccColor3B p0,cocos2d::_ccColor3B p1) {
        return reinterpret_cast<ret76(*)(GJEffectManager*, cocos2d::_ccColor3B, cocos2d::_ccColor3B)>(address76)(this, p0, p1);
    }

    using ret77 = void;
    static inline auto address77 = base+0x181df0;

    dupable ret77 updateEffects(float p0) {
        return reinterpret_cast<ret77(*)(GJEffectManager*, float)>(address77)(this, p0);
    }

    using ret78 = void;
    static inline auto address78 = base+0x184780;

    dupable ret78 updateOpacityAction(OpacityEffectAction* p0) {
        return reinterpret_cast<ret78(*)(GJEffectManager*, OpacityEffectAction*)>(address78)(this, p0);
    }

    using ret79 = void;
    static inline auto address79 = base+0x1823e0;

    dupable ret79 updateOpacityEffects(float p0) {
        return reinterpret_cast<ret79(*)(GJEffectManager*, float)>(address79)(this, p0);
    }

    using ret80 = void;
    static inline auto address80 = base+0x182130;

    dupable ret80 updatePulseEffects(float p0) {
        return reinterpret_cast<ret80(*)(GJEffectManager*, float)>(address80)(this, p0);
    }

    using ret81 = void;
    static inline auto address81 = base+0x182510;

    dupable ret81 updateSpawnTriggers(float p0) {
        return reinterpret_cast<ret81(*)(GJEffectManager*, float)>(address81)(this, p0);
    }

    using ret82 = void;
    static inline auto address82 = base+0x185e60;

    dupable ret82 wasFollowing(int p0,int p1) {
        return reinterpret_cast<ret82(*)(GJEffectManager*, int, int)>(address82)(this, p0, p1);
    }

    using ret83 = void;
    static inline auto address83 = base+0x181820;

    dupable ret83 wouldCreateLoop(InheritanceNode* p0,int p1) {
        return reinterpret_cast<ret83(*)(GJEffectManager*, InheritanceNode*, int)>(address83)(this, p0, p1);
    }

    using ret84 = void;
    static inline auto address84 = base+0x17fe00;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address84)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(GJEffectManager*))(&$GJEffectManager::init) != (ret0(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfVirtual((ret0(D::*)())(&D::init)));
        }

        if constexpr((ret1(*)(GJEffectManager*, int))(&$GJEffectManager::activeColorForIndex) != (ret1(D::*)(int))(&D::activeColorForIndex)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(int))(&D::activeColorForIndex)));
        }

        if constexpr((ret2(*)(GJEffectManager*, int))(&$GJEffectManager::activeOpacityForIndex) != (ret2(D::*)(int))(&D::activeOpacityForIndex)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(int))(&D::activeOpacityForIndex)));
        }

        if constexpr((ret3(*)(GJEffectManager*, cocos2d::CCArray*))(&$GJEffectManager::addAllInheritedColorActions) != (ret3(D::*)(cocos2d::CCArray*))(&D::addAllInheritedColorActions)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(cocos2d::CCArray*))(&D::addAllInheritedColorActions)));
        }

        if constexpr((ret4(*)(GJEffectManager*, PulseEffectAction*))(&$GJEffectManager::addGroupPulseEffect) != (ret4(D::*)(PulseEffectAction*))(&D::addGroupPulseEffect)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(PulseEffectAction*))(&D::addGroupPulseEffect)));
        }

        if constexpr((ret5(*)(GJEffectManager*))(&$GJEffectManager::calculateBaseActiveColors) != (ret5(D::*)())(&D::calculateBaseActiveColors)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)())(&D::calculateBaseActiveColors)));
        }

        if constexpr((ret6(*)(GJEffectManager*, int, ColorAction*))(&$GJEffectManager::calculateInheritedColor) != (ret6(D::*)(int, ColorAction*))(&D::calculateInheritedColor)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)(int, ColorAction*))(&D::calculateInheritedColor)));
        }

        if constexpr((ret7(*)(GJEffectManager*, cocos2d::_ccColor3B))(&$GJEffectManager::calculateLightBGColor) != (ret7(D::*)(cocos2d::_ccColor3B))(&D::calculateLightBGColor)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)(cocos2d::_ccColor3B))(&D::calculateLightBGColor)));
        }

        if constexpr((ret8(*)(GJEffectManager*, ColorAction*))(&$GJEffectManager::colorActionChanged) != (ret8(D::*)(ColorAction*))(&D::colorActionChanged)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfNonVirtual((ret8(D::*)(ColorAction*))(&D::colorActionChanged)));
        }

        if constexpr((ret9(*)(GJEffectManager*, int))(&$GJEffectManager::colorExists) != (ret9(D::*)(int))(&D::colorExists)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfNonVirtual((ret9(D::*)(int))(&D::colorExists)));
        }

        if constexpr((ret10(*)(GJEffectManager*, cocos2d::_ccColor3B, cocos2d::_ccHSVValue))(&$GJEffectManager::colorForEffect) != (ret10(D::*)(cocos2d::_ccColor3B, cocos2d::_ccHSVValue))(&D::colorForEffect)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfNonVirtual((ret10(D::*)(cocos2d::_ccColor3B, cocos2d::_ccHSVValue))(&D::colorForEffect)));
        }

        if constexpr((ret11(*)(GJEffectManager*, int, cocos2d::_ccColor3B const&, bool))(&$GJEffectManager::colorForGroupID) != (ret11(D::*)(int, cocos2d::_ccColor3B const&, bool))(&D::colorForGroupID)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfNonVirtual((ret11(D::*)(int, cocos2d::_ccColor3B const&, bool))(&D::colorForGroupID)));
        }

        if constexpr((ret12(*)(GJEffectManager*, int))(&$GJEffectManager::colorForIndex) != (ret12(D::*)(int))(&D::colorForIndex)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfNonVirtual((ret12(D::*)(int))(&D::colorForIndex)));
        }

        if constexpr((ret13(*)(GJEffectManager*, cocos2d::_ccColor3B const&, PulseEffectAction*))(&$GJEffectManager::colorForPulseEffect) != (ret13(D::*)(cocos2d::_ccColor3B const&, PulseEffectAction*))(&D::colorForPulseEffect)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfNonVirtual((ret13(D::*)(cocos2d::_ccColor3B const&, PulseEffectAction*))(&D::colorForPulseEffect)));
        }

        if constexpr((ret14(*)(GJEffectManager*, int))(&$GJEffectManager::countChangedForItem) != (ret14(D::*)(int))(&D::countChangedForItem)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfNonVirtual((ret14(D::*)(int))(&D::countChangedForItem)));
        }

        if constexpr((ret15(*)(GJEffectManager*, int))(&$GJEffectManager::countForItem) != (ret15(D::*)(int))(&D::countForItem)) {
            modContainer.registerHookEnable(address15, FunctionScrapper::addressOfNonVirtual((ret15(D::*)(int))(&D::countForItem)));
        }

        if constexpr((ret16(*)(GJEffectManager*))(&$GJEffectManager::create) != (ret16(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address16, FunctionScrapper::addressOfNonVirtual((ret16(D::*)())(&D::create)));
        }

        if constexpr((ret17(*)(GJEffectManager*, float, float, float, int, int, bool, int))(&$GJEffectManager::createFollowCommand) != (ret17(D::*)(float, float, float, int, int, bool, int))(&D::createFollowCommand)) {
            modContainer.registerHookEnable(address17, FunctionScrapper::addressOfNonVirtual((ret17(D::*)(float, float, float, int, int, bool, int))(&D::createFollowCommand)));
        }

        if constexpr((ret18(*)(GJEffectManager*, cocos2d::CCPoint, int, float, int, float, bool, bool, int))(&$GJEffectManager::createMoveCommand) != (ret18(D::*)(cocos2d::CCPoint, int, float, int, float, bool, bool, int))(&D::createMoveCommand)) {
            modContainer.registerHookEnable(address18, FunctionScrapper::addressOfNonVirtual((ret18(D::*)(cocos2d::CCPoint, int, float, int, float, bool, bool, int))(&D::createMoveCommand)));
        }

        if constexpr((ret19(*)(GJEffectManager*, float, float, int, float, float, int, int))(&$GJEffectManager::createPlayerFollowCommand) != (ret19(D::*)(float, float, int, float, float, int, int))(&D::createPlayerFollowCommand)) {
            modContainer.registerHookEnable(address19, FunctionScrapper::addressOfNonVirtual((ret19(D::*)(float, float, int, float, float, int, int))(&D::createPlayerFollowCommand)));
        }

        if constexpr((ret20(*)(GJEffectManager*, int, float, int, int, int, float, bool, int))(&$GJEffectManager::createRotateCommand) != (ret20(D::*)(int, float, int, int, int, float, bool, int))(&D::createRotateCommand)) {
            modContainer.registerHookEnable(address20, FunctionScrapper::addressOfNonVirtual((ret20(D::*)(int, float, int, int, int, float, bool, int))(&D::createRotateCommand)));
        }

        if constexpr((ret21(*)(GJEffectManager*))(&$GJEffectManager::getAllColorActions) != (ret21(D::*)())(&D::getAllColorActions)) {
            modContainer.registerHookEnable(address21, FunctionScrapper::addressOfNonVirtual((ret21(D::*)())(&D::getAllColorActions)));
        }

        if constexpr((ret22(*)(GJEffectManager*))(&$GJEffectManager::getAllColorSprites) != (ret22(D::*)())(&D::getAllColorSprites)) {
            modContainer.registerHookEnable(address22, FunctionScrapper::addressOfNonVirtual((ret22(D::*)())(&D::getAllColorSprites)));
        }

        if constexpr((ret23(*)(GJEffectManager*, int))(&$GJEffectManager::getColorAction) != (ret23(D::*)(int))(&D::getColorAction)) {
            modContainer.registerHookEnable(address23, FunctionScrapper::addressOfNonVirtual((ret23(D::*)(int))(&D::getColorAction)));
        }

        if constexpr((ret24(*)(GJEffectManager*, int))(&$GJEffectManager::getColorSprite) != (ret24(D::*)(int))(&D::getColorSprite)) {
            modContainer.registerHookEnable(address24, FunctionScrapper::addressOfNonVirtual((ret24(D::*)(int))(&D::getColorSprite)));
        }

        if constexpr((ret25(*)(GJEffectManager*))(&$GJEffectManager::getCurrentStateString) != (ret25(D::*)())(&D::getCurrentStateString)) {
            modContainer.registerHookEnable(address25, FunctionScrapper::addressOfNonVirtual((ret25(D::*)())(&D::getCurrentStateString)));
        }

        if constexpr((ret26(*)(GJEffectManager*))(&$GJEffectManager::getLoadedMoveOffset) != (ret26(D::*)())(&D::getLoadedMoveOffset)) {
            modContainer.registerHookEnable(address26, FunctionScrapper::addressOfNonVirtual((ret26(D::*)())(&D::getLoadedMoveOffset)));
        }

        if constexpr((ret27(*)(GJEffectManager*, cocos2d::_ccColor3B, cocos2d::_ccColor3B, float))(&$GJEffectManager::getMixedColor) != (ret27(D::*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float))(&D::getMixedColor)) {
            modContainer.registerHookEnable(address27, FunctionScrapper::addressOfNonVirtual((ret27(D::*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float))(&D::getMixedColor)));
        }

        if constexpr((ret28(*)(GJEffectManager*, int))(&$GJEffectManager::getOpacityActionForGroup) != (ret28(D::*)(int))(&D::getOpacityActionForGroup)) {
            modContainer.registerHookEnable(address28, FunctionScrapper::addressOfNonVirtual((ret28(D::*)(int))(&D::getOpacityActionForGroup)));
        }

        if constexpr((ret29(*)(GJEffectManager*))(&$GJEffectManager::getSaveString) != (ret29(D::*)())(&D::getSaveString)) {
            modContainer.registerHookEnable(address29, FunctionScrapper::addressOfNonVirtual((ret29(D::*)())(&D::getSaveString)));
        }

        if constexpr((ret30(*)(GJEffectManager*, bool, int, int))(&$GJEffectManager::handleObjectCollision) != (ret30(D::*)(bool, int, int))(&D::handleObjectCollision)) {
            modContainer.registerHookEnable(address30, FunctionScrapper::addressOfNonVirtual((ret30(D::*)(bool, int, int))(&D::handleObjectCollision)));
        }

        if constexpr((ret31(*)(GJEffectManager*))(&$GJEffectManager::hasActiveDualTouch) != (ret31(D::*)())(&D::hasActiveDualTouch)) {
            modContainer.registerHookEnable(address31, FunctionScrapper::addressOfNonVirtual((ret31(D::*)())(&D::hasActiveDualTouch)));
        }

        if constexpr((ret32(*)(GJEffectManager*, int))(&$GJEffectManager::hasBeenTriggered) != (ret32(D::*)(int))(&D::hasBeenTriggered)) {
            modContainer.registerHookEnable(address32, FunctionScrapper::addressOfNonVirtual((ret32(D::*)(int))(&D::hasBeenTriggered)));
        }

        if constexpr((ret33(*)(GJEffectManager*, int))(&$GJEffectManager::hasPulseEffectForGroupID) != (ret33(D::*)(int))(&D::hasPulseEffectForGroupID)) {
            modContainer.registerHookEnable(address33, FunctionScrapper::addressOfNonVirtual((ret33(D::*)(int))(&D::hasPulseEffectForGroupID)));
        }

        if constexpr((ret34(*)(GJEffectManager*, int))(&$GJEffectManager::isGroupEnabled) != (ret34(D::*)(int))(&D::isGroupEnabled)) {
            modContainer.registerHookEnable(address34, FunctionScrapper::addressOfNonVirtual((ret34(D::*)(int))(&D::isGroupEnabled)));
        }

        if constexpr((ret35(*)(GJEffectManager*, int, cocos2d::_ccColor3B const&, bool))(&$GJEffectManager::keyForGroupIDColor) != (ret35(D::*)(int, cocos2d::_ccColor3B const&, bool))(&D::keyForGroupIDColor)) {
            modContainer.registerHookEnable(address35, FunctionScrapper::addressOfNonVirtual((ret35(D::*)(int, cocos2d::_ccColor3B const&, bool))(&D::keyForGroupIDColor)));
        }

        if constexpr((ret36(*)(GJEffectManager*, gd::string))(&$GJEffectManager::loadState) != (ret36(D::*)(gd::string))(&D::loadState)) {
            modContainer.registerHookEnable(address36, FunctionScrapper::addressOfNonVirtual((ret36(D::*)(gd::string))(&D::loadState)));
        }

        if constexpr((ret37(*)(GJEffectManager*, int, int))(&$GJEffectManager::objectsCollided) != (ret37(D::*)(int, int))(&D::objectsCollided)) {
            modContainer.registerHookEnable(address37, FunctionScrapper::addressOfNonVirtual((ret37(D::*)(int, int))(&D::objectsCollided)));
        }

        if constexpr((ret38(*)(GJEffectManager*, int))(&$GJEffectManager::opacityForIndex) != (ret38(D::*)(int))(&D::opacityForIndex)) {
            modContainer.registerHookEnable(address38, FunctionScrapper::addressOfNonVirtual((ret38(D::*)(int))(&D::opacityForIndex)));
        }

        if constexpr((ret39(*)(GJEffectManager*, int))(&$GJEffectManager::opacityModForGroup) != (ret39(D::*)(int))(&D::opacityModForGroup)) {
            modContainer.registerHookEnable(address39, FunctionScrapper::addressOfNonVirtual((ret39(D::*)(int))(&D::opacityModForGroup)));
        }

        if constexpr((ret40(*)(GJEffectManager*, bool, bool))(&$GJEffectManager::playerButton) != (ret40(D::*)(bool, bool))(&D::playerButton)) {
            modContainer.registerHookEnable(address40, FunctionScrapper::addressOfNonVirtual((ret40(D::*)(bool, bool))(&D::playerButton)));
        }

        if constexpr((ret41(*)(GJEffectManager*))(&$GJEffectManager::playerDied) != (ret41(D::*)())(&D::playerDied)) {
            modContainer.registerHookEnable(address41, FunctionScrapper::addressOfNonVirtual((ret41(D::*)())(&D::playerDied)));
        }

        if constexpr((ret42(*)(GJEffectManager*))(&$GJEffectManager::postCollisionCheck) != (ret42(D::*)())(&D::postCollisionCheck)) {
            modContainer.registerHookEnable(address42, FunctionScrapper::addressOfNonVirtual((ret42(D::*)())(&D::postCollisionCheck)));
        }

        if constexpr((ret43(*)(GJEffectManager*))(&$GJEffectManager::preCollisionCheck) != (ret43(D::*)())(&D::preCollisionCheck)) {
            modContainer.registerHookEnable(address43, FunctionScrapper::addressOfNonVirtual((ret43(D::*)())(&D::preCollisionCheck)));
        }

        if constexpr((ret44(*)(GJEffectManager*, float, bool))(&$GJEffectManager::prepareMoveActions) != (ret44(D::*)(float, bool))(&D::prepareMoveActions)) {
            modContainer.registerHookEnable(address44, FunctionScrapper::addressOfNonVirtual((ret44(D::*)(float, bool))(&D::prepareMoveActions)));
        }

        if constexpr((ret45(*)(GJEffectManager*))(&$GJEffectManager::processColors) != (ret45(D::*)())(&D::processColors)) {
            modContainer.registerHookEnable(address45, FunctionScrapper::addressOfNonVirtual((ret45(D::*)())(&D::processColors)));
        }

        if constexpr((ret46(*)(GJEffectManager*))(&$GJEffectManager::processCopyColorPulseActions) != (ret46(D::*)())(&D::processCopyColorPulseActions)) {
            modContainer.registerHookEnable(address46, FunctionScrapper::addressOfNonVirtual((ret46(D::*)())(&D::processCopyColorPulseActions)));
        }

        if constexpr((ret47(*)(GJEffectManager*))(&$GJEffectManager::processInheritedColors) != (ret47(D::*)())(&D::processInheritedColors)) {
            modContainer.registerHookEnable(address47, FunctionScrapper::addressOfNonVirtual((ret47(D::*)())(&D::processInheritedColors)));
        }

        if constexpr((ret48(*)(GJEffectManager*))(&$GJEffectManager::processPulseActions) != (ret48(D::*)())(&D::processPulseActions)) {
            modContainer.registerHookEnable(address48, FunctionScrapper::addressOfNonVirtual((ret48(D::*)())(&D::processPulseActions)));
        }

        if constexpr((ret49(*)(GJEffectManager*, int, int, int, bool, bool, int))(&$GJEffectManager::registerCollisionTrigger) != (ret49(D::*)(int, int, int, bool, bool, int))(&D::registerCollisionTrigger)) {
            modContainer.registerHookEnable(address49, FunctionScrapper::addressOfNonVirtual((ret49(D::*)(int, int, int, bool, bool, int))(&D::registerCollisionTrigger)));
        }

        if constexpr((ret50(*)(GJEffectManager*))(&$GJEffectManager::removeAllPulseActions) != (ret50(D::*)())(&D::removeAllPulseActions)) {
            modContainer.registerHookEnable(address50, FunctionScrapper::addressOfNonVirtual((ret50(D::*)())(&D::removeAllPulseActions)));
        }

        if constexpr((ret51(*)(GJEffectManager*, int))(&$GJEffectManager::removeColorAction) != (ret51(D::*)(int))(&D::removeColorAction)) {
            modContainer.registerHookEnable(address51, FunctionScrapper::addressOfNonVirtual((ret51(D::*)(int))(&D::removeColorAction)));
        }

        if constexpr((ret52(*)(GJEffectManager*))(&$GJEffectManager::reset) != (ret52(D::*)())(&D::reset)) {
            modContainer.registerHookEnable(address52, FunctionScrapper::addressOfNonVirtual((ret52(D::*)())(&D::reset)));
        }

        if constexpr((ret53(*)(GJEffectManager*))(&$GJEffectManager::resetColorCache) != (ret53(D::*)())(&D::resetColorCache)) {
            modContainer.registerHookEnable(address53, FunctionScrapper::addressOfNonVirtual((ret53(D::*)())(&D::resetColorCache)));
        }

        if constexpr((ret54(*)(GJEffectManager*))(&$GJEffectManager::resetEffects) != (ret54(D::*)())(&D::resetEffects)) {
            modContainer.registerHookEnable(address54, FunctionScrapper::addressOfNonVirtual((ret54(D::*)())(&D::resetEffects)));
        }

        if constexpr((ret55(*)(GJEffectManager*))(&$GJEffectManager::resetMoveActions) != (ret55(D::*)())(&D::resetMoveActions)) {
            modContainer.registerHookEnable(address55, FunctionScrapper::addressOfNonVirtual((ret55(D::*)())(&D::resetMoveActions)));
        }

        if constexpr((ret56(*)(GJEffectManager*))(&$GJEffectManager::resetToggledGroups) != (ret56(D::*)())(&D::resetToggledGroups)) {
            modContainer.registerHookEnable(address56, FunctionScrapper::addressOfNonVirtual((ret56(D::*)())(&D::resetToggledGroups)));
        }

        if constexpr((ret57(*)(GJEffectManager*))(&$GJEffectManager::resetTriggeredIDs) != (ret57(D::*)())(&D::resetTriggeredIDs)) {
            modContainer.registerHookEnable(address57, FunctionScrapper::addressOfNonVirtual((ret57(D::*)())(&D::resetTriggeredIDs)));
        }

        if constexpr((ret58(*)(GJEffectManager*, int, int, bool, int, bool, int))(&$GJEffectManager::runCountTrigger) != (ret58(D::*)(int, int, bool, int, bool, int))(&D::runCountTrigger)) {
            modContainer.registerHookEnable(address58, FunctionScrapper::addressOfNonVirtual((ret58(D::*)(int, int, bool, int, bool, int))(&D::runCountTrigger)));
        }

        if constexpr((ret59(*)(GJEffectManager*, int, bool, int))(&$GJEffectManager::runDeathTrigger) != (ret59(D::*)(int, bool, int))(&D::runDeathTrigger)) {
            modContainer.registerHookEnable(address59, FunctionScrapper::addressOfNonVirtual((ret59(D::*)(int, bool, int))(&D::runDeathTrigger)));
        }

        if constexpr((ret60(*)(GJEffectManager*, int, float, float, int))(&$GJEffectManager::runOpacityActionOnGroup) != (ret60(D::*)(int, float, float, int))(&D::runOpacityActionOnGroup)) {
            modContainer.registerHookEnable(address60, FunctionScrapper::addressOfNonVirtual((ret60(D::*)(int, float, float, int))(&D::runOpacityActionOnGroup)));
        }

        if constexpr((ret61(*)(GJEffectManager*, int, bool, float, float, float, PulseEffectType, cocos2d::_ccColor3B, cocos2d::_ccHSVValue, int, bool, bool, bool, int))(&$GJEffectManager::runPulseEffect) != (ret61(D::*)(int, bool, float, float, float, PulseEffectType, cocos2d::_ccColor3B, cocos2d::_ccHSVValue, int, bool, bool, bool, int))(&D::runPulseEffect)) {
            modContainer.registerHookEnable(address61, FunctionScrapper::addressOfNonVirtual((ret61(D::*)(int, bool, float, float, float, PulseEffectType, cocos2d::_ccColor3B, cocos2d::_ccHSVValue, int, bool, bool, bool, int))(&D::runPulseEffect)));
        }

        if constexpr((ret62(*)(GJEffectManager*, int, bool, TouchTriggerType, bool, int))(&$GJEffectManager::runTouchTriggerCommand) != (ret62(D::*)(int, bool, TouchTriggerType, bool, int))(&D::runTouchTriggerCommand)) {
            modContainer.registerHookEnable(address62, FunctionScrapper::addressOfNonVirtual((ret62(D::*)(int, bool, TouchTriggerType, bool, int))(&D::runTouchTriggerCommand)));
        }

        if constexpr((ret63(*)(GJEffectManager*, ColorAction*, int))(&$GJEffectManager::setColorAction) != (ret63(D::*)(ColorAction*, int))(&D::setColorAction)) {
            modContainer.registerHookEnable(address63, FunctionScrapper::addressOfNonVirtual((ret63(D::*)(ColorAction*, int))(&D::setColorAction)));
        }

        if constexpr((ret64(*)(GJEffectManager*, int, int, bool))(&$GJEffectManager::setFollowing) != (ret64(D::*)(int, int, bool))(&D::setFollowing)) {
            modContainer.registerHookEnable(address64, FunctionScrapper::addressOfNonVirtual((ret64(D::*)(int, int, bool))(&D::setFollowing)));
        }

        if constexpr((ret65(*)(GJEffectManager*, gd::string))(&$GJEffectManager::setupFromString) != (ret65(D::*)(gd::string))(&D::setupFromString)) {
            modContainer.registerHookEnable(address65, FunctionScrapper::addressOfNonVirtual((ret65(D::*)(gd::string))(&D::setupFromString)));
        }

        if constexpr((ret66(*)(GJEffectManager*, int))(&$GJEffectManager::shouldBlend) != (ret66(D::*)(int))(&D::shouldBlend)) {
            modContainer.registerHookEnable(address66, FunctionScrapper::addressOfNonVirtual((ret66(D::*)(int))(&D::shouldBlend)));
        }

        if constexpr((ret67(*)(GJEffectManager*, int, float, int))(&$GJEffectManager::spawnGroup) != (ret67(D::*)(int, float, int))(&D::spawnGroup)) {
            modContainer.registerHookEnable(address67, FunctionScrapper::addressOfNonVirtual((ret67(D::*)(int, float, int))(&D::spawnGroup)));
        }

        if constexpr((ret68(*)(GJEffectManager*, EffectGameObject*))(&$GJEffectManager::stopActionsForTrigger) != (ret68(D::*)(EffectGameObject*))(&D::stopActionsForTrigger)) {
            modContainer.registerHookEnable(address68, FunctionScrapper::addressOfNonVirtual((ret68(D::*)(EffectGameObject*))(&D::stopActionsForTrigger)));
        }

        if constexpr((ret69(*)(GJEffectManager*, int))(&$GJEffectManager::stopMoveActionsForGroup) != (ret69(D::*)(int))(&D::stopMoveActionsForGroup)) {
            modContainer.registerHookEnable(address69, FunctionScrapper::addressOfNonVirtual((ret69(D::*)(int))(&D::stopMoveActionsForGroup)));
        }

        if constexpr((ret70(*)(GJEffectManager*, int))(&$GJEffectManager::storeTriggeredID) != (ret70(D::*)(int))(&D::storeTriggeredID)) {
            modContainer.registerHookEnable(address70, FunctionScrapper::addressOfNonVirtual((ret70(D::*)(int))(&D::storeTriggeredID)));
        }

        if constexpr((ret71(*)(GJEffectManager*, int, bool))(&$GJEffectManager::toggleGroup) != (ret71(D::*)(int, bool))(&D::toggleGroup)) {
            modContainer.registerHookEnable(address71, FunctionScrapper::addressOfNonVirtual((ret71(D::*)(int, bool))(&D::toggleGroup)));
        }

        if constexpr((ret72(*)(GJEffectManager*, InheritanceNode*))(&$GJEffectManager::traverseInheritanceChain) != (ret72(D::*)(InheritanceNode*))(&D::traverseInheritanceChain)) {
            modContainer.registerHookEnable(address72, FunctionScrapper::addressOfNonVirtual((ret72(D::*)(InheritanceNode*))(&D::traverseInheritanceChain)));
        }

        if constexpr((ret73(*)(GJEffectManager*))(&$GJEffectManager::updateActiveOpacityEffects) != (ret73(D::*)())(&D::updateActiveOpacityEffects)) {
            modContainer.registerHookEnable(address73, FunctionScrapper::addressOfNonVirtual((ret73(D::*)())(&D::updateActiveOpacityEffects)));
        }

        if constexpr((ret74(*)(GJEffectManager*, ColorAction*))(&$GJEffectManager::updateColorAction) != (ret74(D::*)(ColorAction*))(&D::updateColorAction)) {
            modContainer.registerHookEnable(address74, FunctionScrapper::addressOfNonVirtual((ret74(D::*)(ColorAction*))(&D::updateColorAction)));
        }

        if constexpr((ret75(*)(GJEffectManager*, float))(&$GJEffectManager::updateColorEffects) != (ret75(D::*)(float))(&D::updateColorEffects)) {
            modContainer.registerHookEnable(address75, FunctionScrapper::addressOfNonVirtual((ret75(D::*)(float))(&D::updateColorEffects)));
        }

        if constexpr((ret76(*)(GJEffectManager*, cocos2d::_ccColor3B, cocos2d::_ccColor3B))(&$GJEffectManager::updateColors) != (ret76(D::*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B))(&D::updateColors)) {
            modContainer.registerHookEnable(address76, FunctionScrapper::addressOfNonVirtual((ret76(D::*)(cocos2d::_ccColor3B, cocos2d::_ccColor3B))(&D::updateColors)));
        }

        if constexpr((ret77(*)(GJEffectManager*, float))(&$GJEffectManager::updateEffects) != (ret77(D::*)(float))(&D::updateEffects)) {
            modContainer.registerHookEnable(address77, FunctionScrapper::addressOfNonVirtual((ret77(D::*)(float))(&D::updateEffects)));
        }

        if constexpr((ret78(*)(GJEffectManager*, OpacityEffectAction*))(&$GJEffectManager::updateOpacityAction) != (ret78(D::*)(OpacityEffectAction*))(&D::updateOpacityAction)) {
            modContainer.registerHookEnable(address78, FunctionScrapper::addressOfNonVirtual((ret78(D::*)(OpacityEffectAction*))(&D::updateOpacityAction)));
        }

        if constexpr((ret79(*)(GJEffectManager*, float))(&$GJEffectManager::updateOpacityEffects) != (ret79(D::*)(float))(&D::updateOpacityEffects)) {
            modContainer.registerHookEnable(address79, FunctionScrapper::addressOfNonVirtual((ret79(D::*)(float))(&D::updateOpacityEffects)));
        }

        if constexpr((ret80(*)(GJEffectManager*, float))(&$GJEffectManager::updatePulseEffects) != (ret80(D::*)(float))(&D::updatePulseEffects)) {
            modContainer.registerHookEnable(address80, FunctionScrapper::addressOfNonVirtual((ret80(D::*)(float))(&D::updatePulseEffects)));
        }

        if constexpr((ret81(*)(GJEffectManager*, float))(&$GJEffectManager::updateSpawnTriggers) != (ret81(D::*)(float))(&D::updateSpawnTriggers)) {
            modContainer.registerHookEnable(address81, FunctionScrapper::addressOfNonVirtual((ret81(D::*)(float))(&D::updateSpawnTriggers)));
        }

        if constexpr((ret82(*)(GJEffectManager*, int, int))(&$GJEffectManager::wasFollowing) != (ret82(D::*)(int, int))(&D::wasFollowing)) {
            modContainer.registerHookEnable(address82, FunctionScrapper::addressOfNonVirtual((ret82(D::*)(int, int))(&D::wasFollowing)));
        }

        if constexpr((ret83(*)(GJEffectManager*, InheritanceNode*, int))(&$GJEffectManager::wouldCreateLoop) != (ret83(D::*)(InheritanceNode*, int))(&D::wouldCreateLoop)) {
            modContainer.registerHookEnable(address83, FunctionScrapper::addressOfNonVirtual((ret83(D::*)(InheritanceNode*, int))(&D::wouldCreateLoop)));
        }

        if constexpr((ret84(*)(GJEffectManager*))(&$GJEffectManager::destructor) != (ret84(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address84, FunctionScrapper::addressOfNonVirtual((ret84(D::*)())(&D::destructor)));
        }

        return true;
    }
};

template<class D>
struct $EndLevelLayer : EndLevelLayer, InterfaceBase {
    $EndLevelLayer(const $EndLevelLayer& c) : EndLevelLayer(c) {}
    $EndLevelLayer() = delete;

    using ret0 = EndLevelLayer*;
    static inline auto address0 = base+0x2787d0;

    dupable static ret0 create() {
        return reinterpret_cast<ret0(*)(EndLevelLayer*)>(address0)();
    }
    static bool _apply() {

        if constexpr((ret0(*)(EndLevelLayer*))(&$EndLevelLayer::create) != (ret0(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCTransitionFade : CCTransitionFade, InterfaceBase {
    $CCTransitionFade(const $CCTransitionFade& c) : CCTransitionFade(c) {}
    $CCTransitionFade() = delete;

    using ret0 = cocos2d::CCTransitionFade*;
    static inline auto address0 = base+0x8ea30;

    dupable static ret0 create(float p0,cocos2d::CCScene* p1) {
        return reinterpret_cast<ret0(*)(CCTransitionFade*, float, cocos2d::CCScene*)>(address0)(p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCTransitionFade*, float, cocos2d::CCScene*))(&$CCTransitionFade::create) != (ret0(D::*)(float, cocos2d::CCScene*))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(float, cocos2d::CCScene*))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCTextureCache : CCTextureCache, InterfaceBase {
    $CCTextureCache(const $CCTextureCache& c) : CCTextureCache(c) {}
    $CCTextureCache() = delete;

    using ret0 = decltype(declval<cocos2d::CCTextureCache>().addImage(declval<char const*>(), declval<bool>()));
    static inline auto address0 = base+0x358120;

    dupable ret0 addImage(char const* p0,bool p1) {
        return reinterpret_cast<ret0(*)(CCTextureCache*, char const*, bool)>(address0)(this, p0, p1);
    }

    using ret1 = cocos2d::CCTextureCache*;
    static inline auto address1 = base+0x356e00;

    dupable static ret1 sharedTextureCache() {
        return reinterpret_cast<ret1(*)(CCTextureCache*)>(address1)();
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCTextureCache*, char const*, bool))(&$CCTextureCache::addImage) != (ret0(D::*)(char const*, bool))(&D::addImage)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(char const*, bool))(&D::addImage)));
        }

        if constexpr((ret1(*)(CCTextureCache*))(&$CCTextureCache::sharedTextureCache) != (ret1(D::*)())(&D::sharedTextureCache)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::sharedTextureCache)));
        }

        return true;
    }
};

template<class D>
struct $CCHide : CCHide, InterfaceBase {
    $CCHide(const $CCHide& c) : CCHide(c) {}
    $CCHide() = delete;

    using ret0 = cocos2d::CCHide*;
    static inline auto address0 = base+0x4543e0;

    dupable static ret0 create() {
        return reinterpret_cast<ret0(*)(CCHide*)>(address0)();
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCHide*))(&$CCHide::create) != (ret0(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCEaseOut : CCEaseOut, InterfaceBase {
    $CCEaseOut(const $CCEaseOut& c) : CCEaseOut(c) {}
    $CCEaseOut() = delete;

    using ret0 = cocos2d::CCEaseOut*;
    static inline auto address0 = base+0x2a1b70;

    dupable static ret0 create(cocos2d::CCActionInterval* p0,float p1) {
        return reinterpret_cast<ret0(*)(CCEaseOut*, cocos2d::CCActionInterval*, float)>(address0)(p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCEaseOut*, cocos2d::CCActionInterval*, float))(&$CCEaseOut::create) != (ret0(D::*)(cocos2d::CCActionInterval*, float))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCActionInterval*, float))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCCircleWave : CCCircleWave, InterfaceBase {
    $CCCircleWave(const $CCCircleWave& c) : CCCircleWave(c) {}
    $CCCircleWave() = delete;

    using ret0 = CCCircleWave*;
    static inline auto address0 = base+0xbd270;

    dupable static ret0 create(float p0,float p1,float p2,bool p3) {
        return reinterpret_cast<ret0(*)(CCCircleWave*, float, float, float, bool)>(address0)(p0, p1, p2, p3);
    }

    using ret1 = CCCircleWave*;
    static inline auto address1 = base+0xbd290;

    dupable static ret1 create(float p0,float p1,float p2,bool p3,bool p4) {
        return reinterpret_cast<ret1(*)(CCCircleWave*, float, float, float, bool, bool)>(address1)(p0, p1, p2, p3, p4);
    }

    using ret2 = bool;
    static inline auto address2 = base+0xbd380;

    dupable ret2 init(float p0,float p1,float p2,bool p3,bool p4) {
        return reinterpret_cast<ret2(*)(CCCircleWave*, float, float, float, bool, bool)>(address2)(this, p0, p1, p2, p3, p4);
    }

    using ret3 = void;
    static inline auto address3 = base+0xbd670;

    dupable ret3 followObject(cocos2d::CCNode* p0,bool p1) {
        return reinterpret_cast<ret3(*)(CCCircleWave*, cocos2d::CCNode*, bool)>(address3)(this, p0, p1);
    }

    using ret4 = void;
    static inline auto address4 = base+0xbd630;

    dupable ret4 updatePosition(float p0) {
        return reinterpret_cast<ret4(*)(CCCircleWave*, float)>(address4)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCCircleWave*, float, float, float, bool))(&$CCCircleWave::create) != (ret0(D::*)(float, float, float, bool))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(float, float, float, bool))(&D::create)));
        }

        if constexpr((ret1(*)(CCCircleWave*, float, float, float, bool, bool))(&$CCCircleWave::create) != (ret1(D::*)(float, float, float, bool, bool))(&D::create)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(float, float, float, bool, bool))(&D::create)));
        }

        if constexpr((ret2(*)(CCCircleWave*, float, float, float, bool, bool))(&$CCCircleWave::init) != (ret2(D::*)(float, float, float, bool, bool))(&D::init)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(float, float, float, bool, bool))(&D::init)));
        }

        if constexpr((ret3(*)(CCCircleWave*, cocos2d::CCNode*, bool))(&$CCCircleWave::followObject) != (ret3(D::*)(cocos2d::CCNode*, bool))(&D::followObject)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(cocos2d::CCNode*, bool))(&D::followObject)));
        }

        if constexpr((ret4(*)(CCCircleWave*, float))(&$CCCircleWave::updatePosition) != (ret4(D::*)(float))(&D::updatePosition)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(float))(&D::updatePosition)));
        }

        return true;
    }
};

template<class D>
struct $TableViewDataSource : TableViewDataSource, InterfaceBase {
    $TableViewDataSource(const $TableViewDataSource& c) : TableViewDataSource(c) {}
    $TableViewDataSource() = delete;
    static bool _apply() {

        return true;
    }
};

template<class D>
struct $CCMenuItem : CCMenuItem, InterfaceBase {
    $CCMenuItem(const $CCMenuItem& c) : CCMenuItem(c) {}
    $CCMenuItem() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x1fb8e0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = decltype(declval<cocos2d::CCMenuItem>().activate());
    static inline auto address1 = base+0x1fba70;

    dupable ret1 activate() {
        return reinterpret_cast<ret1(*)(CCMenuItem*)>(address1)(this);
    }

    using ret2 = decltype(declval<cocos2d::CCMenuItem>().selected());
    static inline auto address2 = base+0x1fb9e0;

    dupable ret2 selected() {
        return reinterpret_cast<ret2(*)(CCMenuItem*)>(address2)(this);
    }

    using ret3 = decltype(declval<cocos2d::CCMenuItem>().unselected());
    static inline auto address3 = base+0x1fb9f0;

    dupable ret3 unselected() {
        return reinterpret_cast<ret3(*)(CCMenuItem*)>(address3)(this);
    }

    using ret4 = decltype(declval<cocos2d::CCMenuItem>().registerScriptTapHandler(declval<int>()));
    static inline auto address4 = base+0x1fba00;

    dupable ret4 registerScriptTapHandler(int p0) {
        return reinterpret_cast<ret4(*)(CCMenuItem*, int)>(address4)(this, p0);
    }

    using ret5 = decltype(declval<cocos2d::CCMenuItem>().unregisterScriptTapHandler());
    static inline auto address5 = base+0x1fba30;

    dupable ret5 unregisterScriptTapHandler() {
        return reinterpret_cast<ret5(*)(CCMenuItem*)>(address5)(this);
    }

    using ret6 = decltype(declval<cocos2d::CCMenuItem>().isEnabled());
    static inline auto address6 = base+0x1fbaf0;

    dupable ret6 isEnabled() {
        return reinterpret_cast<ret6(*)(CCMenuItem*)>(address6)(this);
    }

    using ret7 = decltype(declval<cocos2d::CCMenuItem>().setEnabled(declval<bool>()));
    static inline auto address7 = base+0x1fbae0;

    dupable ret7 setEnabled(bool p0) {
        return reinterpret_cast<ret7(*)(CCMenuItem*, bool)>(address7)(this, p0);
    }

    using ret8 = decltype(declval<cocos2d::CCMenuItem>().isSelected());
    static inline auto address8 = base+0x1fbb50;

    dupable ret8 isSelected() {
        return reinterpret_cast<ret8(*)(CCMenuItem*)>(address8)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCMenuItem*))(&$CCMenuItem::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(CCMenuItem*))(&$CCMenuItem::activate) != (ret1(D::*)())(&D::activate)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::activate)));
        }

        if constexpr((ret2(*)(CCMenuItem*))(&$CCMenuItem::selected) != (ret2(D::*)())(&D::selected)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)())(&D::selected)));
        }

        if constexpr((ret3(*)(CCMenuItem*))(&$CCMenuItem::unselected) != (ret3(D::*)())(&D::unselected)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)())(&D::unselected)));
        }

        if constexpr((ret4(*)(CCMenuItem*, int))(&$CCMenuItem::registerScriptTapHandler) != (ret4(D::*)(int))(&D::registerScriptTapHandler)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)(int))(&D::registerScriptTapHandler)));
        }

        if constexpr((ret5(*)(CCMenuItem*))(&$CCMenuItem::unregisterScriptTapHandler) != (ret5(D::*)())(&D::unregisterScriptTapHandler)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)())(&D::unregisterScriptTapHandler)));
        }

        if constexpr((ret6(*)(CCMenuItem*))(&$CCMenuItem::isEnabled) != (ret6(D::*)())(&D::isEnabled)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)())(&D::isEnabled)));
        }

        if constexpr((ret7(*)(CCMenuItem*, bool))(&$CCMenuItem::setEnabled) != (ret7(D::*)(bool))(&D::setEnabled)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)(bool))(&D::setEnabled)));
        }

        if constexpr((ret8(*)(CCMenuItem*))(&$CCMenuItem::isSelected) != (ret8(D::*)())(&D::isSelected)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)())(&D::isSelected)));
        }

        return true;
    }
};

template<class D>
struct $CCString : CCString, InterfaceBase {
    $CCString(const $CCString& c) : CCString(c) {}
    $CCString() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x44c590;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = decltype(declval<cocos2d::CCString>().isEqual(declval<cocos2d::CCObject const*>()));
    static inline auto address1 = base+0x44c8f0;

    dupable ret1 isEqual(cocos2d::CCObject const* p0) {
        return reinterpret_cast<ret1(*)(CCString*, cocos2d::CCObject const*)>(address1)(this, p0);
    }

    using ret2 = decltype(declval<cocos2d::CCString>().acceptVisitor(declval<cocos2d::CCDataVisitor&>()));
    static inline auto address2 = base+0x44ccb0;

    dupable ret2 acceptVisitor(cocos2d::CCDataVisitor& p0) {
        return reinterpret_cast<ret2(*)(CCString*, cocos2d::CCDataVisitor&)>(address2)(this, p0);
    }

    using ret3 = cocos2d::CCObject*;
    static inline auto address3 = base+0x44c870;

    dupable ret3 copyWithZone(cocos2d::CCZone* p0) {
        return reinterpret_cast<ret3(*)(CCString*, cocos2d::CCZone*)>(address3)(this, p0);
    }

    using ret4 = void;
    static inline auto address4 = base+0x44c310;

    dupable void constructor(gd::string const& p0) {
        reinterpret_cast<void(*)(decltype(this), gd::string const&)>(address4)(this, p0);
    }

    using ret5 = decltype(declval<cocos2d::CCString>().boolValue());
    static inline auto address5 = base+0x44c810;

    dupable ret5 boolValue() const {
        return reinterpret_cast<ret5(*)(CCString*)>(address5)(this);
    }

    using ret6 = decltype(declval<cocos2d::CCString>().doubleValue());
    static inline auto address6 = base+0x44c7f0;

    dupable ret6 doubleValue() const {
        return reinterpret_cast<ret6(*)(CCString*)>(address6)(this);
    }

    using ret7 = decltype(declval<cocos2d::CCString>().floatValue());
    static inline auto address7 = base+0x44c7d0;

    dupable ret7 floatValue() const {
        return reinterpret_cast<ret7(*)(CCString*)>(address7)(this);
    }

    using ret8 = decltype(declval<cocos2d::CCString>().getCString());
    static inline auto address8 = base+0x44c470;

    dupable ret8 getCString() const {
        return reinterpret_cast<ret8(*)(CCString*)>(address8)(this);
    }

    using ret9 = decltype(declval<cocos2d::CCString>().intValue());
    static inline auto address9 = base+0x44c780;

    dupable ret9 intValue() const {
        return reinterpret_cast<ret9(*)(CCString*)>(address9)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCString*))(&$CCString::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(CCString*, cocos2d::CCObject const*))(&$CCString::isEqual) != (ret1(D::*)(cocos2d::CCObject const*))(&D::isEqual)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)(cocos2d::CCObject const*))(&D::isEqual)));
        }

        if constexpr((ret2(*)(CCString*, cocos2d::CCDataVisitor&))(&$CCString::acceptVisitor) != (ret2(D::*)(cocos2d::CCDataVisitor&))(&D::acceptVisitor)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)(cocos2d::CCDataVisitor&))(&D::acceptVisitor)));
        }

        if constexpr((ret3(*)(CCString*, cocos2d::CCZone*))(&$CCString::copyWithZone) != (ret3(D::*)(cocos2d::CCZone*))(&D::copyWithZone)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)(cocos2d::CCZone*))(&D::copyWithZone)));
        }

        if constexpr((ret4(*)(CCString*, gd::string const&))(&$CCString::constructor) != (ret4(D::*)(gd::string const&))(&D::constructor)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)(gd::string const&))(&D::constructor)));
        }

        if constexpr((ret5(*)(CCString*))(&$CCString::boolValue) != (ret5(D::*)())(&D::boolValue)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)())(&D::boolValue)));
        }

        if constexpr((ret6(*)(CCString*))(&$CCString::doubleValue) != (ret6(D::*)())(&D::doubleValue)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)())(&D::doubleValue)));
        }

        if constexpr((ret7(*)(CCString*))(&$CCString::floatValue) != (ret7(D::*)())(&D::floatValue)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)())(&D::floatValue)));
        }

        if constexpr((ret8(*)(CCString*))(&$CCString::getCString) != (ret8(D::*)())(&D::getCString)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfNonVirtual((ret8(D::*)())(&D::getCString)));
        }

        if constexpr((ret9(*)(CCString*))(&$CCString::intValue) != (ret9(D::*)())(&D::intValue)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfNonVirtual((ret9(D::*)())(&D::intValue)));
        }

        return true;
    }
};

template<class D>
struct $CCAnimation : CCAnimation, InterfaceBase {
    $CCAnimation(const $CCAnimation& c) : CCAnimation(c) {}
    $CCAnimation() = delete;

    using ret0 = decltype(declval<cocos2d::CCAnimation>().createWithSpriteFrames(declval<cocos2d::CCArray*>(), declval<float>()));
    static inline auto address0 = base+0x140df0;

    dupable static ret0 createWithSpriteFrames(cocos2d::CCArray* p0,float p1) {
        return reinterpret_cast<ret0(*)(CCAnimation*, cocos2d::CCArray*, float)>(address0)(p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCAnimation*, cocos2d::CCArray*, float))(&$CCAnimation::createWithSpriteFrames) != (ret0(D::*)(cocos2d::CCArray*, float))(&D::createWithSpriteFrames)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCArray*, float))(&D::createWithSpriteFrames)));
        }

        return true;
    }
};

template<class D>
struct $CCDrawNode : CCDrawNode, InterfaceBase {
    $CCDrawNode(const $CCDrawNode& c) : CCDrawNode(c) {}
    $CCDrawNode() = delete;

    using ret0 = decltype(declval<cocos2d::CCDrawNode>().clear());
    static inline auto address0 = base+0x379e80;

    dupable ret0 clear() {
        return reinterpret_cast<ret0(*)(CCDrawNode*)>(address0)(this);
    }

    using ret1 = cocos2d::CCDrawNode*;
    static inline auto address1 = base+0x378d00;

    dupable static ret1 create() {
        return reinterpret_cast<ret1(*)(CCDrawNode*)>(address1)();
    }

    using ret2 = decltype(declval<cocos2d::CCDrawNode>().drawPolygon(declval<cocos2d::CCPoint*>(), declval<unsigned int>(), declval<cocos2d::_ccColor4F const&>(), declval<float>(), declval<cocos2d::_ccColor4F const&>()));
    static inline auto address2 = base+0x3797f0;

    dupable ret2 drawPolygon(cocos2d::CCPoint* p0,unsigned int p1,cocos2d::_ccColor4F const& p2,float p3,cocos2d::_ccColor4F const& p4) {
        return reinterpret_cast<ret2(*)(CCDrawNode*, cocos2d::CCPoint*, unsigned int, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&)>(address2)(this, p0, p1, p2, p3, p4);
    }

    using ret3 = decltype(declval<cocos2d::CCDrawNode>().drawSegment(declval<cocos2d::CCPoint const&>(), declval<cocos2d::CCPoint const&>(), declval<float>(), declval<cocos2d::_ccColor4F const&>()));
    static inline auto address3 = base+0x3792d0;

    dupable ret3 drawSegment(cocos2d::CCPoint const& p0,cocos2d::CCPoint const& p1,float p2,cocos2d::_ccColor4F const& p3) {
        return reinterpret_cast<ret3(*)(CCDrawNode*, cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&)>(address3)(this, p0, p1, p2, p3);
    }

    using ret4 = decltype(declval<cocos2d::CCDrawNode>().getBlendFunc());
    static inline auto address4 = base+0x379ea0;

    dupable ret4 getBlendFunc() const {
        return reinterpret_cast<ret4(*)(CCDrawNode*)>(address4)(this);
    }

    using ret5 = decltype(declval<cocos2d::CCDrawNode>().init());
    static inline auto address5 = base+0x378e00;

    dupable ret5 init() {
        return reinterpret_cast<ret5(*)(CCDrawNode*)>(address5)(this);
    }

    using ret6 = decltype(declval<cocos2d::CCDrawNode>().setBlendFunc(declval<cocos2d::_ccBlendFunc const&>()));
    static inline auto address6 = base+0x379eb0;

    dupable ret6 setBlendFunc(cocos2d::_ccBlendFunc const& p0) {
        return reinterpret_cast<ret6(*)(CCDrawNode*, cocos2d::_ccBlendFunc const&)>(address6)(this, p0);
    }

    using ret7 = decltype(declval<cocos2d::CCDrawNode>().draw());
    static inline auto address7 = base+0x379020;

    dupable ret7 draw() {
        return reinterpret_cast<ret7(*)(CCDrawNode*)>(address7)(this);
    }

    using ret8 = void;
    static inline auto address8 = base+0x378cc0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address8)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCDrawNode*))(&$CCDrawNode::clear) != (ret0(D::*)())(&D::clear)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::clear)));
        }

        if constexpr((ret1(*)(CCDrawNode*))(&$CCDrawNode::create) != (ret1(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::create)));
        }

        if constexpr((ret2(*)(CCDrawNode*, cocos2d::CCPoint*, unsigned int, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&))(&$CCDrawNode::drawPolygon) != (ret2(D::*)(cocos2d::CCPoint*, unsigned int, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&))(&D::drawPolygon)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(cocos2d::CCPoint*, unsigned int, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&))(&D::drawPolygon)));
        }

        if constexpr((ret3(*)(CCDrawNode*, cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&))(&$CCDrawNode::drawSegment) != (ret3(D::*)(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&))(&D::drawSegment)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&))(&D::drawSegment)));
        }

        if constexpr((ret4(*)(CCDrawNode*))(&$CCDrawNode::getBlendFunc) != (ret4(D::*)())(&D::getBlendFunc)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)())(&D::getBlendFunc)));
        }

        if constexpr((ret5(*)(CCDrawNode*))(&$CCDrawNode::init) != (ret5(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)())(&D::init)));
        }

        if constexpr((ret6(*)(CCDrawNode*, cocos2d::_ccBlendFunc const&))(&$CCDrawNode::setBlendFunc) != (ret6(D::*)(cocos2d::_ccBlendFunc const&))(&D::setBlendFunc)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)(cocos2d::_ccBlendFunc const&))(&D::setBlendFunc)));
        }

        if constexpr((ret7(*)(CCDrawNode*))(&$CCDrawNode::draw) != (ret7(D::*)())(&D::draw)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)())(&D::draw)));
        }

        if constexpr((ret8(*)(CCDrawNode*))(&$CCDrawNode::destructor) != (ret8(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfNonVirtual((ret8(D::*)())(&D::destructor)));
        }

        return true;
    }
};

template<class D>
struct $CCCallFunc : CCCallFunc, InterfaceBase {
    $CCCallFunc(const $CCCallFunc& c) : CCCallFunc(c) {}
    $CCCallFunc() = delete;

    using ret0 = cocos2d::CCCallFunc*;
    static inline auto address0 = base+0x454d90;

    dupable static ret0 create(int p0) {
        return reinterpret_cast<ret0(*)(CCCallFunc*, int)>(address0)(p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCCallFunc*, int))(&$CCCallFunc::create) != (ret0(D::*)(int))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(int))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $DialogLayer : DialogLayer, InterfaceBase {
    $DialogLayer(const $DialogLayer& c) : DialogLayer(c) {}
    $DialogLayer() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x204720;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x205900;

    dupable ret1 onEnter() {
        return reinterpret_cast<ret1(*)(DialogLayer*)>(address1)(this);
    }

    using ret2 = bool;
    static inline auto address2 = base+0x205790;

    dupable ret2 ccTouchBegan(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret2(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address2)(this, p0, p1);
    }

    using ret3 = void;
    static inline auto address3 = base+0x205820;

    dupable ret3 ccTouchMoved(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret3(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address3)(this, p0, p1);
    }

    using ret4 = void;
    static inline auto address4 = base+0x2057e0;

    dupable ret4 ccTouchEnded(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret4(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address4)(this, p0, p1);
    }

    using ret5 = void;
    static inline auto address5 = base+0x205840;

    dupable ret5 ccTouchCancelled(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret5(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address5)(this, p0, p1);
    }

    using ret6 = void;
    static inline auto address6 = base+0x205890;

    dupable ret6 registerWithTouchDispatcher() {
        return reinterpret_cast<ret6(*)(DialogLayer*)>(address6)(this);
    }

    using ret7 = void;
    static inline auto address7 = base+0x2056a0;

    dupable ret7 keyBackClicked() {
        return reinterpret_cast<ret7(*)(DialogLayer*)>(address7)(this);
    }

    using ret8 = void;
    static inline auto address8 = base+0x205ce0;

    dupable ret8 keyDown(cocos2d::enumKeyCodes p0) {
        return reinterpret_cast<ret8(*)(DialogLayer*, cocos2d::enumKeyCodes)>(address8)(this, p0);
    }

    using ret9 = void;
    static inline auto address9 = base+0x205930;

    dupable ret9 fadeInTextFinished(TextArea* p0) {
        return reinterpret_cast<ret9(*)(DialogLayer*, TextArea*)>(address9)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(DialogLayer*))(&$DialogLayer::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(DialogLayer*))(&$DialogLayer::onEnter) != (ret1(D::*)())(&D::onEnter)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::onEnter)));
        }

        if constexpr((ret2(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$DialogLayer::ccTouchBegan) != (ret2(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchBegan)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchBegan)));
        }

        if constexpr((ret3(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$DialogLayer::ccTouchMoved) != (ret3(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchMoved)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchMoved)));
        }

        if constexpr((ret4(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$DialogLayer::ccTouchEnded) != (ret4(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchEnded)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchEnded)));
        }

        if constexpr((ret5(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$DialogLayer::ccTouchCancelled) != (ret5(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchCancelled)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchCancelled)));
        }

        if constexpr((ret6(*)(DialogLayer*))(&$DialogLayer::registerWithTouchDispatcher) != (ret6(D::*)())(&D::registerWithTouchDispatcher)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)())(&D::registerWithTouchDispatcher)));
        }

        if constexpr((ret7(*)(DialogLayer*))(&$DialogLayer::keyBackClicked) != (ret7(D::*)())(&D::keyBackClicked)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)())(&D::keyBackClicked)));
        }

        if constexpr((ret8(*)(DialogLayer*, cocos2d::enumKeyCodes))(&$DialogLayer::keyDown) != (ret8(D::*)(cocos2d::enumKeyCodes))(&D::keyDown)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)(cocos2d::enumKeyCodes))(&D::keyDown)));
        }

        if constexpr((ret9(*)(DialogLayer*, TextArea*))(&$DialogLayer::fadeInTextFinished) != (ret9(D::*)(TextArea*))(&D::fadeInTextFinished)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfVirtual((ret9(D::*)(TextArea*))(&D::fadeInTextFinished)));
        }

        return true;
    }
};

template<class D>
struct $AppDelegate : AppDelegate, InterfaceBase {
    $AppDelegate(const $AppDelegate& c) : AppDelegate(c) {}
    $AppDelegate() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x3aaab0;

    dupable ret0 bgScale() {
        return reinterpret_cast<ret0(*)(AppDelegate*)>(address0)(this);
    }

    using ret1 = bool;
    static inline auto address1 = base+0x3aa900;

    dupable ret1 applicationDidFinishLaunching() {
        return reinterpret_cast<ret1(*)(AppDelegate*)>(address1)(this);
    }

    using ret2 = void;
    static inline auto address2 = base+0x3aabe0;

    dupable ret2 applicationDidEnterBackground() {
        return reinterpret_cast<ret2(*)(AppDelegate*)>(address2)(this);
    }

    using ret3 = void;
    static inline auto address3 = base+0x3aac80;

    dupable ret3 applicationWillEnterForeground() {
        return reinterpret_cast<ret3(*)(AppDelegate*)>(address3)(this);
    }

    using ret4 = bool;
    static inline auto address4 = base+0x3aab30;

    dupable ret4 applicationWillBecomeActive() {
        return reinterpret_cast<ret4(*)(AppDelegate*)>(address4)(this);
    }

    using ret5 = bool;
    static inline auto address5 = base+0x3aab50;

    dupable ret5 applicationWillResignActive() {
        return reinterpret_cast<ret5(*)(AppDelegate*)>(address5)(this);
    }

    using ret6 = void;
    static inline auto address6 = base+0x3aaf10;

    dupable ret6 trySaveGame() {
        return reinterpret_cast<ret6(*)(AppDelegate*)>(address6)(this);
    }

    using ret7 = void;
    static inline auto address7 = base+0x3aaf40;

    dupable ret7 willSwitchToScene(cocos2d::CCScene* p0) {
        return reinterpret_cast<ret7(*)(AppDelegate*, cocos2d::CCScene*)>(address7)(this, p0);
    }

    using ret8 = AppDelegate*;
    static inline auto address8 = base+0x3aab10;

    dupable static ret8 get() {
        return reinterpret_cast<ret8(*)(AppDelegate*)>(address8)();
    }
    static bool _apply() {

        if constexpr((ret0(*)(AppDelegate*))(&$AppDelegate::bgScale) != (ret0(D::*)())(&D::bgScale)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::bgScale)));
        }

        if constexpr((ret1(*)(AppDelegate*))(&$AppDelegate::applicationDidFinishLaunching) != (ret1(D::*)())(&D::applicationDidFinishLaunching)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::applicationDidFinishLaunching)));
        }

        if constexpr((ret2(*)(AppDelegate*))(&$AppDelegate::applicationDidEnterBackground) != (ret2(D::*)())(&D::applicationDidEnterBackground)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)())(&D::applicationDidEnterBackground)));
        }

        if constexpr((ret3(*)(AppDelegate*))(&$AppDelegate::applicationWillEnterForeground) != (ret3(D::*)())(&D::applicationWillEnterForeground)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)())(&D::applicationWillEnterForeground)));
        }

        if constexpr((ret4(*)(AppDelegate*))(&$AppDelegate::applicationWillBecomeActive) != (ret4(D::*)())(&D::applicationWillBecomeActive)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)())(&D::applicationWillBecomeActive)));
        }

        if constexpr((ret5(*)(AppDelegate*))(&$AppDelegate::applicationWillResignActive) != (ret5(D::*)())(&D::applicationWillResignActive)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)())(&D::applicationWillResignActive)));
        }

        if constexpr((ret6(*)(AppDelegate*))(&$AppDelegate::trySaveGame) != (ret6(D::*)())(&D::trySaveGame)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)())(&D::trySaveGame)));
        }

        if constexpr((ret7(*)(AppDelegate*, cocos2d::CCScene*))(&$AppDelegate::willSwitchToScene) != (ret7(D::*)(cocos2d::CCScene*))(&D::willSwitchToScene)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)(cocos2d::CCScene*))(&D::willSwitchToScene)));
        }

        if constexpr((ret8(*)(AppDelegate*))(&$AppDelegate::get) != (ret8(D::*)())(&D::get)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfNonVirtual((ret8(D::*)())(&D::get)));
        }

        return true;
    }
};

template<class D>
struct $CCDelayTime : CCDelayTime, InterfaceBase {
    $CCDelayTime(const $CCDelayTime& c) : CCDelayTime(c) {}
    $CCDelayTime() = delete;

    using ret0 = cocos2d::CCDelayTime*;
    static inline auto address0 = base+0x1f4380;

    dupable static ret0 create(float p0) {
        return reinterpret_cast<ret0(*)(CCDelayTime*, float)>(address0)(p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCDelayTime*, float))(&$CCDelayTime::create) != (ret0(D::*)(float))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(float))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $SetTargetIDLayer : SetTargetIDLayer, InterfaceBase {
    $SetTargetIDLayer(const $SetTargetIDLayer& c) : SetTargetIDLayer(c) {}
    $SetTargetIDLayer() = delete;

    using ret0 = SetTargetIDLayer*;
    static inline auto address0 = base+0x159d20;

    dupable static ret0 create(EffectGameObject* p0,cocos2d::CCArray* p1,gd::string p2) {
        return reinterpret_cast<ret0(*)(SetTargetIDLayer*, EffectGameObject*, cocos2d::CCArray*, gd::string)>(address0)(p0, p1, p2);
    }

    using ret1 = void;
    static inline auto address1 = base+0x15aed0;

    dupable ret1 onTargetIDArrow(cocos2d::CCObject* p0) {
        return reinterpret_cast<ret1(*)(SetTargetIDLayer*, cocos2d::CCObject*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x15b6c0;

    dupable ret2 textChanged(CCTextInputNode* p0) {
        return reinterpret_cast<ret2(*)(SetTargetIDLayer*, CCTextInputNode*)>(address2)(this, p0);
    }

    using ret3 = void;
    static inline auto address3 = base+0x15b4a0;

    dupable ret3 updateTargetID() {
        return reinterpret_cast<ret3(*)(SetTargetIDLayer*)>(address3)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(SetTargetIDLayer*, EffectGameObject*, cocos2d::CCArray*, gd::string))(&$SetTargetIDLayer::create) != (ret0(D::*)(EffectGameObject*, cocos2d::CCArray*, gd::string))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(EffectGameObject*, cocos2d::CCArray*, gd::string))(&D::create)));
        }

        if constexpr((ret1(*)(SetTargetIDLayer*, cocos2d::CCObject*))(&$SetTargetIDLayer::onTargetIDArrow) != (ret1(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(cocos2d::CCObject*))(&D::onTargetIDArrow)));
        }

        if constexpr((ret2(*)(SetTargetIDLayer*, CCTextInputNode*))(&$SetTargetIDLayer::textChanged) != (ret2(D::*)(CCTextInputNode*))(&D::textChanged)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(CCTextInputNode*))(&D::textChanged)));
        }

        if constexpr((ret3(*)(SetTargetIDLayer*))(&$SetTargetIDLayer::updateTargetID) != (ret3(D::*)())(&D::updateTargetID)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::updateTargetID)));
        }

        return true;
    }
};

template<class D>
struct $CCTexture2D : CCTexture2D, InterfaceBase {
    $CCTexture2D(const $CCTexture2D& c) : CCTexture2D(c) {}
    $CCTexture2D() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x246350;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x246280;

    dupable void constructor() {
        reinterpret_cast<void(*)(decltype(this))>(address1)(this);
    }

    using ret2 = decltype(declval<cocos2d::CCTexture2D>().getContentSize());
    static inline auto address2 = base+0x246460;

    dupable ret2 getContentSize() {
        return reinterpret_cast<ret2(*)(CCTexture2D*)>(address2)(this);
    }

    using ret3 = decltype(declval<cocos2d::CCTexture2D>().getMaxS());
    static inline auto address3 = base+0x2464e0;

    dupable ret3 getMaxS() {
        return reinterpret_cast<ret3(*)(CCTexture2D*)>(address3)(this);
    }

    using ret4 = decltype(declval<cocos2d::CCTexture2D>().getMaxT());
    static inline auto address4 = base+0x246500;

    dupable ret4 getMaxT() {
        return reinterpret_cast<ret4(*)(CCTexture2D*)>(address4)(this);
    }

    using ret5 = decltype(declval<cocos2d::CCTexture2D>().getName());
    static inline auto address5 = base+0x246450;

    dupable ret5 getName() {
        return reinterpret_cast<ret5(*)(CCTexture2D*)>(address5)(this);
    }

    using ret6 = decltype(declval<cocos2d::CCTexture2D>().getPixelFormat());
    static inline auto address6 = base+0x246420;

    dupable ret6 getPixelFormat() {
        return reinterpret_cast<ret6(*)(CCTexture2D*)>(address6)(this);
    }

    using ret7 = decltype(declval<cocos2d::CCTexture2D>().getPixelsHigh());
    static inline auto address7 = base+0x246440;

    dupable ret7 getPixelsHigh() {
        return reinterpret_cast<ret7(*)(CCTexture2D*)>(address7)(this);
    }

    using ret8 = decltype(declval<cocos2d::CCTexture2D>().getPixelsWide());
    static inline auto address8 = base+0x246430;

    dupable ret8 getPixelsWide() {
        return reinterpret_cast<ret8(*)(CCTexture2D*)>(address8)(this);
    }

    using ret9 = decltype(declval<cocos2d::CCTexture2D>().getShaderProgram());
    static inline auto address9 = base+0x246520;

    dupable ret9 getShaderProgram() {
        return reinterpret_cast<ret9(*)(CCTexture2D*)>(address9)(this);
    }

    using ret10 = decltype(declval<cocos2d::CCTexture2D>().initPremultipliedATextureWithImage(declval<cocos2d::CCImage*>(), declval<unsigned int>(), declval<unsigned int>()));
    static inline auto address10 = base+0x2469a0;

    dupable ret10 initPremultipliedATextureWithImage(cocos2d::CCImage* p0,unsigned int p1,unsigned int p2) {
        return reinterpret_cast<ret10(*)(CCTexture2D*, cocos2d::CCImage*, unsigned int, unsigned int)>(address10)(this, p0, p1, p2);
    }

    using ret11 = decltype(declval<cocos2d::CCTexture2D>().initWithData(declval<void const*>(), declval<cocos2d::CCTexture2DPixelFormat>(), declval<unsigned int>(), declval<unsigned int>(), declval<cocos2d::CCSize const&>()));
    static inline auto address11 = base+0x2465d0;

    dupable ret11 initWithData(void const* p0,cocos2d::CCTexture2DPixelFormat p1,unsigned int p2,unsigned int p3,cocos2d::CCSize const& p4) {
        return reinterpret_cast<ret11(*)(CCTexture2D*, void const*, cocos2d::CCTexture2DPixelFormat, unsigned int, unsigned int, cocos2d::CCSize const&)>(address11)(this, p0, p1, p2, p3, p4);
    }

    using ret12 = decltype(declval<cocos2d::CCTexture2D>().setAliasTexParameters());
    static inline auto address12 = base+0x247a20;

    dupable ret12 setAliasTexParameters() {
        return reinterpret_cast<ret12(*)(CCTexture2D*)>(address12)(this);
    }

    using ret13 = decltype(declval<cocos2d::CCTexture2D>().setAntiAliasTexParameters());
    static inline auto address13 = base+0x247a80;

    dupable ret13 setAntiAliasTexParameters() {
        return reinterpret_cast<ret13(*)(CCTexture2D*)>(address13)(this);
    }

    using ret14 = decltype(declval<cocos2d::CCTexture2D>().setMaxS(declval<float>()));
    static inline auto address14 = base+0x2464f0;

    dupable ret14 setMaxS(float p0) {
        return reinterpret_cast<ret14(*)(CCTexture2D*, float)>(address14)(this, p0);
    }

    using ret15 = decltype(declval<cocos2d::CCTexture2D>().setMaxT(declval<float>()));
    static inline auto address15 = base+0x246510;

    dupable ret15 setMaxT(float p0) {
        return reinterpret_cast<ret15(*)(CCTexture2D*, float)>(address15)(this, p0);
    }

    using ret16 = decltype(declval<cocos2d::CCTexture2D>().setShaderProgram(declval<cocos2d::CCGLProgram*>()));
    static inline auto address16 = base+0x246530;

    dupable ret16 setShaderProgram(cocos2d::CCGLProgram* p0) {
        return reinterpret_cast<ret16(*)(CCTexture2D*, cocos2d::CCGLProgram*)>(address16)(this, p0);
    }

    using ret17 = decltype(declval<cocos2d::CCTexture2D>().initWithImage(declval<cocos2d::CCImage*>()));
    static inline auto address17 = base+0x246940;

    dupable ret17 initWithImage(cocos2d::CCImage* p0) {
        return reinterpret_cast<ret17(*)(CCTexture2D*, cocos2d::CCImage*)>(address17)(this, p0);
    }

    using ret18 = decltype(declval<cocos2d::CCTexture2D>().setTexParameters(declval<cocos2d::_ccTexParams*>()));
    static inline auto address18 = base+0x247980;

    dupable ret18 setTexParameters(cocos2d::_ccTexParams* p0) {
        return reinterpret_cast<ret18(*)(CCTexture2D*, cocos2d::_ccTexParams*)>(address18)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCTexture2D*))(&$CCTexture2D::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(CCTexture2D*))(&$CCTexture2D::constructor) != (ret1(D::*)())(&D::constructor)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::constructor)));
        }

        if constexpr((ret2(*)(CCTexture2D*))(&$CCTexture2D::getContentSize) != (ret2(D::*)())(&D::getContentSize)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::getContentSize)));
        }

        if constexpr((ret3(*)(CCTexture2D*))(&$CCTexture2D::getMaxS) != (ret3(D::*)())(&D::getMaxS)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::getMaxS)));
        }

        if constexpr((ret4(*)(CCTexture2D*))(&$CCTexture2D::getMaxT) != (ret4(D::*)())(&D::getMaxT)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfNonVirtual((ret4(D::*)())(&D::getMaxT)));
        }

        if constexpr((ret5(*)(CCTexture2D*))(&$CCTexture2D::getName) != (ret5(D::*)())(&D::getName)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfNonVirtual((ret5(D::*)())(&D::getName)));
        }

        if constexpr((ret6(*)(CCTexture2D*))(&$CCTexture2D::getPixelFormat) != (ret6(D::*)())(&D::getPixelFormat)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfNonVirtual((ret6(D::*)())(&D::getPixelFormat)));
        }

        if constexpr((ret7(*)(CCTexture2D*))(&$CCTexture2D::getPixelsHigh) != (ret7(D::*)())(&D::getPixelsHigh)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfNonVirtual((ret7(D::*)())(&D::getPixelsHigh)));
        }

        if constexpr((ret8(*)(CCTexture2D*))(&$CCTexture2D::getPixelsWide) != (ret8(D::*)())(&D::getPixelsWide)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfNonVirtual((ret8(D::*)())(&D::getPixelsWide)));
        }

        if constexpr((ret9(*)(CCTexture2D*))(&$CCTexture2D::getShaderProgram) != (ret9(D::*)())(&D::getShaderProgram)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfNonVirtual((ret9(D::*)())(&D::getShaderProgram)));
        }

        if constexpr((ret10(*)(CCTexture2D*, cocos2d::CCImage*, unsigned int, unsigned int))(&$CCTexture2D::initPremultipliedATextureWithImage) != (ret10(D::*)(cocos2d::CCImage*, unsigned int, unsigned int))(&D::initPremultipliedATextureWithImage)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfNonVirtual((ret10(D::*)(cocos2d::CCImage*, unsigned int, unsigned int))(&D::initPremultipliedATextureWithImage)));
        }

        if constexpr((ret11(*)(CCTexture2D*, void const*, cocos2d::CCTexture2DPixelFormat, unsigned int, unsigned int, cocos2d::CCSize const&))(&$CCTexture2D::initWithData) != (ret11(D::*)(void const*, cocos2d::CCTexture2DPixelFormat, unsigned int, unsigned int, cocos2d::CCSize const&))(&D::initWithData)) {
            modContainer.registerHookEnable(address11, FunctionScrapper::addressOfNonVirtual((ret11(D::*)(void const*, cocos2d::CCTexture2DPixelFormat, unsigned int, unsigned int, cocos2d::CCSize const&))(&D::initWithData)));
        }

        if constexpr((ret12(*)(CCTexture2D*))(&$CCTexture2D::setAliasTexParameters) != (ret12(D::*)())(&D::setAliasTexParameters)) {
            modContainer.registerHookEnable(address12, FunctionScrapper::addressOfNonVirtual((ret12(D::*)())(&D::setAliasTexParameters)));
        }

        if constexpr((ret13(*)(CCTexture2D*))(&$CCTexture2D::setAntiAliasTexParameters) != (ret13(D::*)())(&D::setAntiAliasTexParameters)) {
            modContainer.registerHookEnable(address13, FunctionScrapper::addressOfNonVirtual((ret13(D::*)())(&D::setAntiAliasTexParameters)));
        }

        if constexpr((ret14(*)(CCTexture2D*, float))(&$CCTexture2D::setMaxS) != (ret14(D::*)(float))(&D::setMaxS)) {
            modContainer.registerHookEnable(address14, FunctionScrapper::addressOfNonVirtual((ret14(D::*)(float))(&D::setMaxS)));
        }

        if constexpr((ret15(*)(CCTexture2D*, float))(&$CCTexture2D::setMaxT) != (ret15(D::*)(float))(&D::setMaxT)) {
            modContainer.registerHookEnable(address15, FunctionScrapper::addressOfNonVirtual((ret15(D::*)(float))(&D::setMaxT)));
        }

        if constexpr((ret16(*)(CCTexture2D*, cocos2d::CCGLProgram*))(&$CCTexture2D::setShaderProgram) != (ret16(D::*)(cocos2d::CCGLProgram*))(&D::setShaderProgram)) {
            modContainer.registerHookEnable(address16, FunctionScrapper::addressOfNonVirtual((ret16(D::*)(cocos2d::CCGLProgram*))(&D::setShaderProgram)));
        }

        if constexpr((ret17(*)(CCTexture2D*, cocos2d::CCImage*))(&$CCTexture2D::initWithImage) != (ret17(D::*)(cocos2d::CCImage*))(&D::initWithImage)) {
            modContainer.registerHookEnable(address17, FunctionScrapper::addressOfNonVirtual((ret17(D::*)(cocos2d::CCImage*))(&D::initWithImage)));
        }

        if constexpr((ret18(*)(CCTexture2D*, cocos2d::_ccTexParams*))(&$CCTexture2D::setTexParameters) != (ret18(D::*)(cocos2d::_ccTexParams*))(&D::setTexParameters)) {
            modContainer.registerHookEnable(address18, FunctionScrapper::addressOfNonVirtual((ret18(D::*)(cocos2d::_ccTexParams*))(&D::setTexParameters)));
        }

        return true;
    }
};

template<class D>
struct $CCControlColourPicker : CCControlColourPicker, InterfaceBase {
    $CCControlColourPicker(const $CCControlColourPicker& c) : CCControlColourPicker(c) {}
    $CCControlColourPicker() = delete;

    using ret0 = decltype(declval<cocos2d::extension::CCControlColourPicker>().setColorValue(declval<cocos2d::_ccColor3B const&>()));
    static inline auto address0 = base+0x1aac10;

    dupable ret0 setColorValue(cocos2d::_ccColor3B const& p0) {
        return reinterpret_cast<ret0(*)(CCControlColourPicker*, cocos2d::_ccColor3B const&)>(address0)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCControlColourPicker*, cocos2d::_ccColor3B const&))(&$CCControlColourPicker::setColorValue) != (ret0(D::*)(cocos2d::_ccColor3B const&))(&D::setColorValue)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::_ccColor3B const&))(&D::setColorValue)));
        }

        return true;
    }
};

template<class D>
struct $MoreVideoOptionsLayer : MoreVideoOptionsLayer, InterfaceBase {
    $MoreVideoOptionsLayer(const $MoreVideoOptionsLayer& c) : MoreVideoOptionsLayer(c) {}
    $MoreVideoOptionsLayer() = delete;

    using ret0 = MoreVideoOptionsLayer*;
    static inline auto address0 = base+0x443c10;

    dupable static ret0 create() {
        return reinterpret_cast<ret0(*)(MoreVideoOptionsLayer*)>(address0)();
    }

    using ret1 = bool;
    static inline auto address1 = base+0x444150;

    dupable ret1 init() {
        return reinterpret_cast<ret1(*)(MoreVideoOptionsLayer*)>(address1)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(MoreVideoOptionsLayer*))(&$MoreVideoOptionsLayer::create) != (ret0(D::*)())(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::create)));
        }

        if constexpr((ret1(*)(MoreVideoOptionsLayer*))(&$MoreVideoOptionsLayer::init) != (ret1(D::*)())(&D::init)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)())(&D::init)));
        }

        return true;
    }
};

template<class D>
struct $CCBezierTo : CCBezierTo, InterfaceBase {
    $CCBezierTo(const $CCBezierTo& c) : CCBezierTo(c) {}
    $CCBezierTo() = delete;

    using ret0 = cocos2d::CCBezierTo*;
    static inline auto address0 = base+0x1f6c10;

    dupable static ret0 create(float p0,cocos2d::_ccBezierConfig const& p1) {
        return reinterpret_cast<ret0(*)(CCBezierTo*, float, cocos2d::_ccBezierConfig const&)>(address0)(p0, p1);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCBezierTo*, float, cocos2d::_ccBezierConfig const&))(&$CCBezierTo::create) != (ret0(D::*)(float, cocos2d::_ccBezierConfig const&))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(float, cocos2d::_ccBezierConfig const&))(&D::create)));
        }

        return true;
    }
};

template<class D>
struct $CCScrollLayerExt : CCScrollLayerExt, InterfaceBase {
    $CCScrollLayerExt(const $CCScrollLayerExt& c) : CCScrollLayerExt(c) {}
    $CCScrollLayerExt() = delete;

    using ret0 = void;
    static inline auto address0 = base+0x2359b0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address0)(this);
    }

    using ret1 = void;
    static inline auto address1 = base+0x236550;

    dupable ret1 visit() {
        return reinterpret_cast<ret1(*)(CCScrollLayerExt*)>(address1)(this);
    }

    using ret2 = bool;
    static inline auto address2 = base+0x235ef0;

    dupable ret2 ccTouchBegan(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret2(*)(CCScrollLayerExt*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address2)(this, p0, p1);
    }

    using ret3 = void;
    static inline auto address3 = base+0x236300;

    dupable ret3 ccTouchMoved(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret3(*)(CCScrollLayerExt*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address3)(this, p0, p1);
    }

    using ret4 = void;
    static inline auto address4 = base+0x236020;

    dupable ret4 ccTouchEnded(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret4(*)(CCScrollLayerExt*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address4)(this, p0, p1);
    }

    using ret5 = void;
    static inline auto address5 = base+0x2362a0;

    dupable ret5 ccTouchCancelled(cocos2d::CCTouch* p0,cocos2d::CCEvent* p1) {
        return reinterpret_cast<ret5(*)(CCScrollLayerExt*, cocos2d::CCTouch*, cocos2d::CCEvent*)>(address5)(this, p0, p1);
    }

    using ret6 = void;
    static inline auto address6 = base+0x235eb0;

    dupable ret6 registerWithTouchDispatcher() {
        return reinterpret_cast<ret6(*)(CCScrollLayerExt*)>(address6)(this);
    }

    using ret7 = void;
    static inline auto address7 = base+0x2366a0;

    dupable ret7 preVisitWithClippingRect(cocos2d::CCRect p0) {
        return reinterpret_cast<ret7(*)(CCScrollLayerExt*, cocos2d::CCRect)>(address7)(this, p0);
    }

    using ret8 = void;
    static inline auto address8 = base+0x236720;

    dupable ret8 postVisit() {
        return reinterpret_cast<ret8(*)(CCScrollLayerExt*)>(address8)(this);
    }

    using ret9 = void;
    static inline auto address9 = base+0x235870;

    dupable ret9 moveToTop() {
        return reinterpret_cast<ret9(*)(CCScrollLayerExt*)>(address9)(this);
    }

    using ret10 = void;
    static inline auto address10 = base+0x2357d0;

    dupable ret10 moveToTopWithOffset(float p0) {
        return reinterpret_cast<ret10(*)(CCScrollLayerExt*, float)>(address10)(this, p0);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCScrollLayerExt*))(&$CCScrollLayerExt::destructor) != (ret0(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)())(&D::destructor)));
        }

        if constexpr((ret1(*)(CCScrollLayerExt*))(&$CCScrollLayerExt::visit) != (ret1(D::*)())(&D::visit)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)())(&D::visit)));
        }

        if constexpr((ret2(*)(CCScrollLayerExt*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$CCScrollLayerExt::ccTouchBegan) != (ret2(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchBegan)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfVirtual((ret2(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchBegan)));
        }

        if constexpr((ret3(*)(CCScrollLayerExt*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$CCScrollLayerExt::ccTouchMoved) != (ret3(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchMoved)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfVirtual((ret3(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchMoved)));
        }

        if constexpr((ret4(*)(CCScrollLayerExt*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$CCScrollLayerExt::ccTouchEnded) != (ret4(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchEnded)) {
            modContainer.registerHookEnable(address4, FunctionScrapper::addressOfVirtual((ret4(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchEnded)));
        }

        if constexpr((ret5(*)(CCScrollLayerExt*, cocos2d::CCTouch*, cocos2d::CCEvent*))(&$CCScrollLayerExt::ccTouchCancelled) != (ret5(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchCancelled)) {
            modContainer.registerHookEnable(address5, FunctionScrapper::addressOfVirtual((ret5(D::*)(cocos2d::CCTouch*, cocos2d::CCEvent*))(&D::ccTouchCancelled)));
        }

        if constexpr((ret6(*)(CCScrollLayerExt*))(&$CCScrollLayerExt::registerWithTouchDispatcher) != (ret6(D::*)())(&D::registerWithTouchDispatcher)) {
            modContainer.registerHookEnable(address6, FunctionScrapper::addressOfVirtual((ret6(D::*)())(&D::registerWithTouchDispatcher)));
        }

        if constexpr((ret7(*)(CCScrollLayerExt*, cocos2d::CCRect))(&$CCScrollLayerExt::preVisitWithClippingRect) != (ret7(D::*)(cocos2d::CCRect))(&D::preVisitWithClippingRect)) {
            modContainer.registerHookEnable(address7, FunctionScrapper::addressOfVirtual((ret7(D::*)(cocos2d::CCRect))(&D::preVisitWithClippingRect)));
        }

        if constexpr((ret8(*)(CCScrollLayerExt*))(&$CCScrollLayerExt::postVisit) != (ret8(D::*)())(&D::postVisit)) {
            modContainer.registerHookEnable(address8, FunctionScrapper::addressOfVirtual((ret8(D::*)())(&D::postVisit)));
        }

        if constexpr((ret9(*)(CCScrollLayerExt*))(&$CCScrollLayerExt::moveToTop) != (ret9(D::*)())(&D::moveToTop)) {
            modContainer.registerHookEnable(address9, FunctionScrapper::addressOfNonVirtual((ret9(D::*)())(&D::moveToTop)));
        }

        if constexpr((ret10(*)(CCScrollLayerExt*, float))(&$CCScrollLayerExt::moveToTopWithOffset) != (ret10(D::*)(float))(&D::moveToTopWithOffset)) {
            modContainer.registerHookEnable(address10, FunctionScrapper::addressOfNonVirtual((ret10(D::*)(float))(&D::moveToTopWithOffset)));
        }

        return true;
    }
};

template<class D>
struct $CustomListView : CustomListView, InterfaceBase {
    $CustomListView(const $CustomListView& c) : CustomListView(c) {}
    $CustomListView() = delete;

    using ret0 = CustomListView*;
    static inline auto address0 = base+0x10d410;

    dupable static ret0 create(cocos2d::CCArray* p0,float p1,float p2,int p3,BoomListType p4) {
        return reinterpret_cast<ret0(*)(CustomListView*, cocos2d::CCArray*, float, float, int, BoomListType)>(address0)(p0, p1, p2, p3, p4);
    }

    using ret1 = void;
    static inline auto address1 = base+0x10d560;

    dupable ret1 getListCell(char const* p0) {
        return reinterpret_cast<ret1(*)(CustomListView*, char const*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x10e610;

    dupable ret2 loadCell(TableViewCell* p0,int p1) {
        return reinterpret_cast<ret2(*)(CustomListView*, TableViewCell*, int)>(address2)(this, p0, p1);
    }

    using ret3 = void;
    static inline auto address3 = base+0x116e70;

    dupable ret3 setupList() {
        return reinterpret_cast<ret3(*)(CustomListView*)>(address3)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CustomListView*, cocos2d::CCArray*, float, float, int, BoomListType))(&$CustomListView::create) != (ret0(D::*)(cocos2d::CCArray*, float, float, int, BoomListType))(&D::create)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCArray*, float, float, int, BoomListType))(&D::create)));
        }

        if constexpr((ret1(*)(CustomListView*, char const*))(&$CustomListView::getListCell) != (ret1(D::*)(char const*))(&D::getListCell)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfNonVirtual((ret1(D::*)(char const*))(&D::getListCell)));
        }

        if constexpr((ret2(*)(CustomListView*, TableViewCell*, int))(&$CustomListView::loadCell) != (ret2(D::*)(TableViewCell*, int))(&D::loadCell)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)(TableViewCell*, int))(&D::loadCell)));
        }

        if constexpr((ret3(*)(CustomListView*))(&$CustomListView::setupList) != (ret3(D::*)())(&D::setupList)) {
            modContainer.registerHookEnable(address3, FunctionScrapper::addressOfNonVirtual((ret3(D::*)())(&D::setupList)));
        }

        return true;
    }
};

template<class D>
struct $CCMouseHandler : CCMouseHandler, InterfaceBase {
    $CCMouseHandler(const $CCMouseHandler& c) : CCMouseHandler(c) {}
    $CCMouseHandler() = delete;

    using ret0 = cocos2d::CCMouseHandler*;
    static inline auto address0 = base+0x12ef80;

    dupable static ret0 handlerWithDelegate(cocos2d::CCMouseDelegate* p0) {
        return reinterpret_cast<ret0(*)(CCMouseHandler*, cocos2d::CCMouseDelegate*)>(address0)(p0);
    }

    using ret1 = decltype(declval<cocos2d::CCMouseHandler>().initWithDelegate(declval<cocos2d::CCMouseDelegate*>()));
    static inline auto address1 = base+0x12ef40;

    dupable ret1 initWithDelegate(cocos2d::CCMouseDelegate* p0) {
        return reinterpret_cast<ret1(*)(CCMouseHandler*, cocos2d::CCMouseDelegate*)>(address1)(this, p0);
    }

    using ret2 = void;
    static inline auto address2 = base+0x12ede0;

    dupable void destructor() {
        reinterpret_cast<void(*)(decltype(this))>(address2)(this);
    }
    static bool _apply() {

        if constexpr((ret0(*)(CCMouseHandler*, cocos2d::CCMouseDelegate*))(&$CCMouseHandler::handlerWithDelegate) != (ret0(D::*)(cocos2d::CCMouseDelegate*))(&D::handlerWithDelegate)) {
            modContainer.registerHookEnable(address0, FunctionScrapper::addressOfNonVirtual((ret0(D::*)(cocos2d::CCMouseDelegate*))(&D::handlerWithDelegate)));
        }

        if constexpr((ret1(*)(CCMouseHandler*, cocos2d::CCMouseDelegate*))(&$CCMouseHandler::initWithDelegate) != (ret1(D::*)(cocos2d::CCMouseDelegate*))(&D::initWithDelegate)) {
            modContainer.registerHookEnable(address1, FunctionScrapper::addressOfVirtual((ret1(D::*)(cocos2d::CCMouseDelegate*))(&D::initWithDelegate)));
        }

        if constexpr((ret2(*)(CCMouseHandler*))(&$CCMouseHandler::destructor) != (ret2(D::*)())(&D::destructor)) {
            modContainer.registerHookEnable(address2, FunctionScrapper::addressOfNonVirtual((ret2(D::*)())(&D::destructor)));
        }

        return true;
    }
};
