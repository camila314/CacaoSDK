#pragma once

namespace uiTests {
    using namespace cocos2d;
    class CacBaseTester {
     public:
        virtual void onBtnPress(cocos2d::CCObject* sender) = 0;
    };
    class EditorUITest : public $EditorUI {
     public:
        EditorUITest(CacBaseTester* tst) {
            tester = tst;
        }
        void _onPress() {
            tester->onBtnPress(cac_this);
        }
        void setupCreateMenu(int) override {
            $EditorUI::setupCreateMenu(0);

            auto menu = cocos2d::CCMenu::create();
            cac_this->addChild(menu);

            auto sprite = CCSprite::createWithSpriteFrameName("GJ_hsvBtn_001.png");
            auto mitem = CCMenuItemSpriteExtra::create(sprite, sprite, cac_this, menu_selector(EditorUITest::_onPress));
            menu->addChild(mitem);

             auto dir = CCDirector::sharedDirector();
            float top = dir->getScreenTop()-60.0;
            float rgt = dir->getScreenRight()-24.0;
            CCPoint base = ccp(rgt, top);

            CCPoint offset = ccp(38*-3, 0);
            menu->setPosition(base + offset);
        }
        static inline CacBaseTester* tester;
    };
};

template <typename T>
class CacUiTester : public uiTests::CacBaseTester {
 public:
    CacUiTester<T>() {
        if constexpr (std::tr1::is_same<T, $EditorUI>::value) {
            (new uiTests::EditorUITest(this));
        }
    }
};
