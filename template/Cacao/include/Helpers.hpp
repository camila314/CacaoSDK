// Copyright camila314 2021
#pragma once

#include <Defs.hpp>
#include <map>
#include <vector>
#include <type_traits>
#include <Cacao>
#include <iostream>

#define ORIG(name, addr) FCAST(name, m->getOriginal(getBase()+addr))

#define CAC_CREATE(cls, ...) static cls* create() {\
    auto pRet = new cls(); \
    if (pRet && pRet->init(__VA_ARGS__)) { \
        pRet->autorelease(); \
        return pRet; \
    } \
    CC_SAFE_DELETE(pRet); \
    return NULL;}
#define CAC_PROPERTY(type, name) \
    protected: \
        type m_##name; \
    public: \
        inline auto name(type t) {m_##name = t;return this;}

#define CAC_TYPEINFO(addr) {                                                            \
        uint64_t ok1 = *((uint64_t*)this);                                              \
        uint64_t ok2 = (*((uint64_t*)(ok1-8)))+16;                                      \
        uint64_t n_typinfo = getBase()+addr;                                            \
        if (*(uint64_t*)ok2 != n_typinfo)                                               \
            MemoryContainer(ok2, 8, reinterpret_cast<char*>(&n_typinfo)).enable();      \
    }

#define CAC_TYPEINFO_NUM(addr, num) {                                                   \
        uint64_t ok1 = *((uint64_t*)this);                                              \
        uint64_t ok2 = (*((uint64_t*)(ok1-8)))+24+num*16;                               \
        uint64_t n_typinfo = getBase()+addr;                                            \
        if (*(uint64_t*)ok2 != n_typinfo)                                               \
            MemoryContainer(ok2, 8, reinterpret_cast<char*>(&n_typinfo)).enable();      \
    }
namespace Cacao {
    typedef void (cocos2d::CCObject::* CC_SEL)(cocos2d::CCObject*);
    typedef void (cocos2d::CCObject::* CC_SCHED)(float);

    inline void printGeometry(cocos2d::CCPoint p) {std::cout << "X: " << p.x << " Y: " << p.y << "\n";}
    inline void printGeometry(cocos2d::CCSize p) {std::cout << "Width: " << p.width << " Height: " << p.height << "\n";}
    inline void printGeometry(cocos2d::CCRect p) {std::cout << "X: " << p.origin.x << " Y: " << p.origin.y << " Width: " << p.size.width << " Height: " << p.size.height << "\n";}
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
    
    template <typename K>
    void repeatFunction(K func, int times, float delay) {
        GameManager::sharedState()->getScheduler()->scheduleSelector(reinterpret_cast<CC_SCHED&>(func), GameManager::sharedState(), delay, times, 0.0, false);
    }

    template <typename T>
    char const* typeinfo_name_for(T ptr) {
        long vtable = *(long*)(ptr);
        long typeinfo = *(long*)(vtable-8);
        char const* infoname = *(char const**)(typeinfo + 8);
        return infoname;
    }

    template <typename T>
    char const* typeinfoNameFor(T ptr) {
        long vtable = *(long*)(ptr);
        long typeinfo = *(long*)(vtable-8);
        char const* infoname = *(char const**)(typeinfo + 8);
        return infoname;
    }

    std::vector<int> collapseGroups(GameObject* object);
    int uniqueGroupToObjects(cocos2d::CCArray* objects, LevelEditorLayer* lel);
    inline int uniqueGroupToObject(GameObject* obj, LevelEditorLayer* lel) {
        auto arr = cocos2d::CCArray::create();
        arr->addObject(obj);
        return uniqueGroupToObjects(arr, lel);
    }

    template <typename T>
    std::vector<T> ccToVec(cocos2d::CCArray* arr) {
        return std::vector<T>(reinterpret_cast<T*>(arr->data->arr), reinterpret_cast<T*>(arr->data->arr) + arr->data->num);
    }

    template <typename T, typename = typename std::enable_if<std::is_convertible<T, cocos2d::CCObject*>::value>::type>
    void ccAsVec(cocos2d::CCArray* arr, std::function<void(std::vector<T>&)> cb) {
        std::vector<T> swag(ccToVec<T>(arr));
        cb(swag);
        for (auto i : ccToVec<T>(arr)) {
            if (std::find(swag.begin(), swag.end(), i) == swag.end()) {
                printf("item removed\n");
                i->release();
            }
        }

        if (swag.size() == 0) {
            arr->data->num = swag.size();
            arr->data->max = swag.size() ? swag.size() : 1;

            arr->removeAllObjects();
            printf("nothing\n");
        } else if (swag != ccToVec<T>(arr)){
            arr->data->num = swag.size();
            arr->data->max = swag.size() ? swag.size() : 1;

            free(arr->data->arr);
            arr->data->arr = (cocos2d::CCObject**)malloc(swag.size() * sizeof(T));
            memcpy(arr->data->arr, &swag[0], swag.size() * sizeof(T));

            printf("its %p\n", arr->data->arr);
        } else {
            printf("no change\n");
        }
    }

    template <typename K, typename V, 
              typename = typename std::enable_if<std::is_convertible<V, cocos2d::CCObject*>::value>::type,
              typename = typename std::enable_if<std::is_same<K, int>::value || std::is_same<K, std::string>::value>::type>
    void ccAsMap(cocos2d::CCDictionary* dict, std::function<void(std::map<K, V>&)> cb) {
        std::map<K, V> swag;

        constexpr bool isInt = std::is_same<K, int>::value;
        constexpr bool isStr = std::is_same<K, std::string>::value;
        typedef typename std::conditional<isInt, cocos2d::CCInteger*, cocos2d::CCString*>::type ccKeyType;

        if (dict->m_eDictType == cocos2d::CCDictionary::kCCDictInt && isStr)
            std::cerr << "Error: tried to access an int dict as if it was a string dict" << std::endl; 
        else if (dict->m_eDictType == cocos2d::CCDictionary::kCCDictStr && isInt)
            std::cerr << "Error: tried to access a string dict as if it was an int dict" << std::endl;
        else
            dict->m_eDictType = isInt ? cocos2d::CCDictionary::kCCDictInt : cocos2d::CCDictionary::kCCDictStr;

        using namespace cocos2d;

        CCDictElement* element;
        CCDICT_FOREACH(dict, element) {
            if constexpr (isInt) {
                auto key = element->getIntKey();
                swag[key] = reinterpret_cast<V>(element->getObject());
            } else {
                auto key = element->getStrKey();
                //printf("a %p\n", element->getObject());
                swag[key] = reinterpret_cast<V>(element->getObject());
            }
        }

        dict->removeAllObjects();

        cb(swag);

        for (auto [k, v] : swag) {
            if constexpr (isStr) {
                gd::string mystr(k.c_str());
                printf("c %s b %p\n", std::string(mystr).c_str(), v);
                dict->setObject(v, mystr);
            } else 
                dict->setObject(v, k);
        }
    }

    cocos2d::CCPoint anchorPosition(double x, double y, double ax, double ay);
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
        EditorUIEditor* addEditPopup(int ob, void(*callback)(EditorUI*));
        EditorUIEditor* addSaveString(int ob, GameObject*(*fromString)(GameObject*, std::string), std::string(*toString)(GameObject*, std::string));

        void applyBars();
        void applyObjects();
        void applyCallbacks();
        void applyPopups();
        void applySaveStrings();

        inline void applyAll() {
            this->applyBars();
            this->applyObjects();
            this->applyCallbacks();
            this->applyPopups();
            this->applySaveStrings();
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

        std::map<int, void(*)(EditorUI*)> editPopups;
        static bool appliedPopups;
        static EditorUIEditor* popupInstance;

        std::map<int, GameObject*(*)(GameObject*, std::string)> saveFromStrings;
        std::map<int, std::string(*)(GameObject*, std::string)> saveToStrings;
        static bool appliedSaveStrings;
        static EditorUIEditor* saveStringInstance;
    };

    class CacAlertLayer : public FLAlertLayer {
     public:
        CacAlertLayer() : 
            FLAlertLayer() {
                m_title = cocos2d::CCLabelBMFont::create("", "goldFont.fnt");
            }

        virtual void onClose() {}
        virtual bool alertInit() {return true;}
        virtual void keyBackClicked();
        virtual void show();
        inline void l_onClose(CCObject* sender) {keyBackClicked();}

        bool init(cocos2d::CCSize size);
        inline bool init() {return init(cocos2d::CCSize(300.0,200.0));}
        inline CacAlertLayer* title(char const* t) {m_title->setString(t, true);return this;}
     protected:
        CCMenuItemSpriteExtra* m_closeButton;
        cocos2d::CCLabelBMFont* m_title;
    };

    class CacTextContainer : public cocos2d::CCNode {
     public:
        static CacTextContainer* create(cocos2d::CCSize const& size, TextInputDelegate* delegate, char const* font);
        bool init(cocos2d::CCSize size, float fontSize, TextInputDelegate* delegate, char const* font);
        inline CCTextInputNode* textInputNode() {return m_textInputNode;}
        inline CacTextContainer* placeholder(char const* pholder) {m_textInputNode->m_placeholderLabel->setString(pholder);return this;}
        inline CacTextContainer* allowedChars(char const* filter) {m_textInputNode->setAllowedChars(std::string(filter));return this;}
        inline CacTextContainer* charLimit(int limit) {m_textInputNode->m_maxLabelLength = limit;return this;}
        inline CacTextContainer* text(char const* text) {m_textInputNode->setString(text);return this;}
        inline std::string text() {return m_textInputNode->getString();}
     protected:
        cocos2d::extension::CCScale9Sprite* m_box;
        CCTextInputNode* m_textInputNode;

    };
}  // namespace Cacao
