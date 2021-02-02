// Copyright camden314 2021
#ifndef __CACAO_HPP__
#define __CACAO_HPP__

#include <cc_defs.hpp>


namespace Cacao {
    typedef void (cocos2d::CCObject::* CC_SEL)(cocos2d::CCObject*);

    cocos2d::CCPoint relativePosition(double x, double y);
    cocos2d::CCSprite* spriteFromPng(unsigned char* img, int img_len);

    CCMenuItemToggler* createToggler(cocos2d::CCObject* parent, CC_SEL callback);


    class FLDialogHelper;

    class FLDialogDelegate {
    protected:
        virtual void onSubmit(FLDialogHelper* dl, const std::string& text);
        virtual void onCancel(FLDialogHelper* dl);
        virtual void onShow(FLDialogHelper* dl);
        friend class FLDialogHelper;
    };

    class FLDialogHelper : public cocos2d::CCNode {
     public:
        static FLDialogHelper* create(FLDialogDelegate* del, char const* title, char const* submit, char const* cancel, char const* placeholder);
        // convenience functions
        static FLDialogHelper* create(FLDialogDelegate* del, char const* title, char const* submit, char const* cancel);
        static FLDialogHelper* create(FLDialogDelegate* del, char const* title, char const* submit);
        static FLDialogHelper* create(FLDialogDelegate* del, char const* title);
        static FLDialogHelper* create(FLDialogDelegate* del);
        static FLDialogHelper* create();
        void close();
        void show();

        bool initWithStuff(FLDialogDelegate* delegate, char const* title, char const* submit, char const* cancel, char const* placeholder);
     protected:
        FLAlertLayer* alertLayer;
        cocos2d::CCLayer* mainLayer;
        CCTextInputNode* textNode;
        FLDialogDelegate* del;
     private:
        void onSubmit(cocos2d::CCObject*);
        void onCancel(cocos2d::CCObject*);
    };
}  // namespace Cacao

#endif