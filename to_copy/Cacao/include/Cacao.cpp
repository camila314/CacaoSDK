// Copyright camden314 2021
#include <Cacao.hpp>

using namespace cocos2d;

namespace Cacao {
    cocos2d::CCPoint relativePosition(double x, double y) {
        auto winSize = cocos2d::CCDirector::sharedDirector()->getWinSize();
        float xp = winSize.width * (x/100.);
        float yp = winSize.height * (y/100.);
        return {.x = xp , .y = yp};
    }
    cocos2d::CCSprite* spriteFromPng(unsigned char* img, int img_len) {
        auto image = new cocos2d::CCImage();
        image->initWithImageData((void*)img, img_len, cocos2d::CCImage::kFmtPng,1,1,1);

        auto text = new cocos2d::CCTexture2D();
        text->initWithImage(image);

        cocos2d::CCRect r(0, 0, image->getWidth(), image->getHeight());

        std::cout << image->getWidth() << "\n";
        std::cout << image->getHeight() << "\n";

        auto sprite = cocos2d::CCSprite::create();
        sprite->initWithTexture(text, r);

        sprite->setTexture(text);

        return sprite;
    }

    CCMenuItemToggler* createToggler(cocos2d::CCObject* parent, CC_SEL callback) {
        auto on = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOn_001.png");
        auto off = cocos2d::CCSprite::createWithSpriteFrameName("GJ_checkOff_001.png");
        return CCMenuItemToggler::create(off, on, parent, callback);
    }

    void FLDialogDelegate::onSubmit(FLDialogHelper* dl, const std::string& text) {dl->close();}
    void FLDialogDelegate::onCancel(FLDialogHelper* dl) {dl->close();}
    void FLDialogDelegate::onShow(FLDialogHelper* dl) {}

    FLDialogHelper* FLDialogHelper::create(FLDialogDelegate* del, char const* title, char const* submit, char const* cancel, char const* placeholder) {
        FLDialogHelper* pRet = new FLDialogHelper();
        if (pRet->initWithStuff(del, title, submit, cancel, placeholder)) {
            return pRet;
        }
        delete pRet;
        return NULL;
    }
    // convenience functions
    FLDialogHelper* FLDialogHelper::create(FLDialogDelegate* del, char const* title, char const* submit, char const* cancel) {
        return FLDialogHelper::create(del, title, submit, cancel, "Insert text");
    }
    FLDialogHelper* FLDialogHelper::create(FLDialogDelegate* del, char const* title, char const* submit) {
        return FLDialogHelper::create(del, title, submit, "Cancel");
    }
    FLDialogHelper* FLDialogHelper::create(FLDialogDelegate* del, char const* title) {
        return FLDialogHelper::create(del, title, "Submit");
    }
    FLDialogHelper* FLDialogHelper::create(FLDialogDelegate* del) {
        return FLDialogHelper::create(del, "Cacao Prompt");
    }
    FLDialogHelper* FLDialogHelper::create() {
        return FLDialogHelper::create(NULL);
    }

    void FLDialogHelper::close() {
        alertLayer->keyBackClicked();
    }
    void FLDialogHelper::onSubmit(CCObject*) {
        std::string text(textNode->getString_s());
        del->onSubmit(this, text);
    }

    void FLDialogHelper::onCancel(CCObject*) {
        del->onCancel(this);
    }

    bool FLDialogHelper::initWithStuff(FLDialogDelegate* delegate, char const* title, char const* submit, char const* cancel, char const* placeholder) {
        if (delegate) {
            del = delegate;
        } else {
            del = new FLDialogDelegate();
        }


        alertLayer = FLAlertLayer::create("ok","ok","ok");
        mainLayer = alertLayer->mainLayer;

        CCArray* ch = alertLayer->mainLayer->getChildren();

        for (int i=0; i<ch->count(); i++) { 
            // im so sorry for this code ik its bad.
            // all you need to know is 0x682FC0 is the vtable address for CCMenu
            // all im doing here is just making all of the FLALertLayer stuff invisible
            auto ob = ch->objectAtIndex(i);
            if ((getBase()+0x682FC0) == *((long*)ob)) { // if its a CCMenu
                CCArray* ch2 = ((CCNode*)ob)->getChildren();
                for (int i=0; i<ch2->count(); i++) {
                    ((CCMenuItem*)ch2->objectAtIndex(i))->setVisible(false);
                }
            }  else {
                ((CCNode*)ob)->setVisible(false);
            }
        }

        CCSize wSize = CCDirector::sharedDirector()->getWinSize();

            CCRect squareRect(0,0,80,80);
            float squareHeight = 135.f;
            float squareY = 80.f;
            CCPoint squarePosition = {wSize.width/2.f, wSize.height/2.f + squareY};
            CCPoint titlePosition = {squarePosition.x, squarePosition.y + squareHeight/2. - 16};
            CCPoint menuPosition = {squarePosition.x, squarePosition.y - 60};

            auto label = CCLabelBMFont::create(title, "bigFont.fnt");
            label->setPosition(titlePosition);
            label->setScale(0.6);
            mainLayer->addChild(label);

            float textWidth = 360.0;
            float textHeight = 50.0;

            auto input = CCTextInputNode::create(textWidth, textHeight, placeholder, "Thonburi", 12, NULL);
            input->setPosition(squarePosition);
            mainLayer->addChild(input);
            textNode = input;

            CCPoint colOffset = {-100, -8};
            auto lay = CCLayerColor::create(ccc4(230,230,230,150), 200, 16);
            lay->setPosition(squarePosition + colOffset);
            mainLayer->addChild(lay);

            auto canc = ButtonSprite::create(cancel, 90, 0, 1, true);
            auto menuCancel = CCMenuItemSpriteExtra::create(canc, canc, this, menu_selector(FLDialogHelper::onCancel));
            menuCancel->setScale(0.8);

            auto subm = ButtonSprite::create(submit, 90, 0, 1, true);
            auto menuSubmit = CCMenuItemSpriteExtra::create(subm, subm, this, menu_selector(FLDialogHelper::onSubmit));
            CCPoint offset(50, 0);
            menuSubmit->setScale(0.8);

            for (int i=0; i<ch->count(); i++) { // same with this
                //for weird reasons the button only works if i add it to the existing CCMenu.
                // so i am doing that here
                auto ob = ch->objectAtIndex(i);
                if ((getBase()+0x682FC0) == *((long*)ob)) { // if its a CCMenu
                    CCMenu* m = (CCMenu*)ob;
                    menuSubmit->setPosition(m->convertToNodeSpace(menuPosition + offset));
                    menuCancel->setPosition(m->convertToNodeSpace(menuPosition - offset));

                    m->addChild(menuSubmit);
                    m->addChild(menuCancel);
                    break;
                }
            }

        return true;
    }
    void FLDialogHelper::show() {
        del->onShow(this);
        alertLayer->show();
    }
}  // namespace Cacao