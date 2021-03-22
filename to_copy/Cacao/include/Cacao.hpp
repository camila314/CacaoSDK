// Copyright camden314 2021
#ifndef __CACAO_HPP__
#define __CACAO_HPP__

#include <cc_defs.hpp>
#include <map>
#include <vector>

#define ORIG(name, addr) FCAST(name, m->getOriginal(getBase()+addr))
namespace Cacao {
    typedef void (cocos2d::CCObject::* CC_SEL)(cocos2d::CCObject*);
    typedef void (cocos2d::CCObject::* CC_SCHED)(float);

    template <typename K>
    void scheduleFunction(K func) {
        GameManager::sharedState()->getScheduler()->scheduleSelector(reinterpret_cast<CC_SCHED&>(func), GameManager::sharedState(), 0.0, 0, 0.0, false);
    }
    template <typename K>
    void scheduleFunction(K func, float delay) {
        GameManager::sharedState()->getScheduler()->scheduleSelector(reinterpret_cast<CC_SCHED&>(func), GameManager::sharedState(), 0.0, 0, delay, false);
    }

    template <typename K>
    void repeatFunction(K func, int times) {
        GameManager::sharedState()->getScheduler()->scheduleSelector(reinterpret_cast<CC_SCHED&>(func), GameManager::sharedState(), 0.0, times, 0.0, false);
    }

    template <typename T>
    char const* tInfoName(T ptr) {
        //printf("%p\n", ptr);
        long vtable = *(long*)(ptr);
        //printf("%p\n", vtable - getBase());
        long typeinfo = *(long*)(vtable-8);
        //printf("%p\n", typeinfo);
        char const* infoname = *(char const**)(typeinfo + 8);
        return infoname;
    }

    cocos2d::CCPoint relativePosition(double x, double y);
    cocos2d::CCPoint addedPosition(double x, double y);
    cocos2d::CCSprite* spriteFromPng(unsigned char* img, int img_len);

    CCMenuItemToggler* createToggler(cocos2d::CCObject* parent, CC_SEL callback);
    void addGDObject(char const* name, int id);

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

    class EditorUIEditor : public cocos2d::CCNode {
     public:
        static EditorUIEditor* create(ModContainer* mc);

        EditorUIEditor* bar(int b);
        EditorUIEditor* addIndex(int index, int id);

        template<typename... Args>
        EditorUIEditor* addObjectsToGameSheet02(Args... obs) {
            // stolen from the stack overflow https://stackoverflow.com/questions/43195778/push-back-variadic-function-parameters-into-a-vector
            int a[] = {0, (this->gameSheet2Objects.push_back(obs), 0)...};
            static_cast<void>(a);  // unused
            return this;
        }

        template<typename... Args>
        EditorUIEditor* addEffectObjects(Args... obs) {
            // stolen from the stack overflow https://stackoverflow.com/questions/43195778/push-back-variadic-function-parameters-into-a-vector
            int a[] = {0, (this->effectObjects.push_back(obs), 0)...};
            static_cast<void>(a);  // unused
            return this;
        }

        EditorUIEditor* addTriggerCallback(int ob, void(*callback)(GameObject*, GJBaseGameLayer*));

        void applyBars();
        void applyObjects();
        void applyCallbacks();

        inline void applyAll() {
            this->applyBars();
            this->applyObjects();
            this->applyCallbacks();
        }

     protected:
        bool initWithMC(ModContainer* mc);
        ModContainer* mc;

        int currentEditBar;
        std::map<int, std::vector<std::pair<int, int>>> editBars;
        static bool appliedBars;
        static EditorUIEditor* barInstance;

        std::vector<int> effectObjects;
        std::vector<int> gameSheet2Objects;
        static bool appliedObjects;
        static EditorUIEditor* objectInstance;

        std::map<int, void(*)(GameObject*, GJBaseGameLayer*)> triggerCallbacks;
        static bool appliedCallbacks;
        static EditorUIEditor* callbackInstance;

    };
}  // namespace Cacao

#endif