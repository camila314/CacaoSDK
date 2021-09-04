// Copyright camila314 2021
#include <Cacao.hpp>
#include <stdexcept>
#include <set>

using namespace cocos2d;

namespace Cacao {

    cocos2d::CCPoint anchorPosition(double x, double y, double ax, double ay) {
        auto winSize = cocos2d::CCDirector::sharedDirector()->getWinSize();
        float axp = cocos2d::CCDirector::sharedDirector()->getScreenLeft() + winSize.width * ax;
        float ayp = cocos2d::CCDirector::sharedDirector()->getScreenBottom() + winSize.height * ay;
        CCPoint ccp;
        ccp.x = axp + x;
        ccp.y = ayp + y;
        return ccp;
    }

    cocos2d::CCPoint relativePosition(double x, double y) {
        auto winSize = cocos2d::CCDirector::sharedDirector()->getWinSize();
        float xp = winSize.width * (x/100.);
        float yp = winSize.height * (y/100.);
        CCPoint ccp;
        ccp.x = xp;
        ccp.y = yp;
        return ccp;
    }
    cocos2d::CCPoint addedPosition(double x, double y) {
        auto winSize = cocos2d::CCDirector::sharedDirector()->getWinSize();
        float xp = winSize.width/2 + x;
        float yp = winSize.height/2 + y;
        CCPoint ccp;
        ccp.x = xp;
        ccp.y = yp;
        return ccp;
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

    void addGDObject(char const* name, int id) {
        auto toolbox = ObjectToolbox::sharedState();
        CCDictionary* keyInt = toolbox->_intKeyObjects();
        CCDictionary* keyStr = toolbox->_strKeyObjects();

        auto strid = CCString::createWithFormat("%i", id);
        auto strname = CCString::createWithFormat("%s", name);

        keyStr->setObject(strid, std::string(name));
        keyInt->setObject(strname, id);
    }

    std::vector<int> collapseGroups(GameObject* object) {
         std::vector<int> gs;

        int gid = 0;
        int iter = 0;
        do {
            gid = object->getGroupID(iter);
            iter++;
            if (gid!=0)
                gs.push_back(gid);
        } while(gid!=0);
        return gs;
    }

    int uniqueGroupToObjects(CCArray* objects, LevelEditorLayer* lel) {
        std::vector<int> g;
        for (auto obj : ccToVec<GameObject*>(lel->_objects())) {
            auto ig = collapseGroups(obj);
            g.insert(g.end(), ig.begin(), ig.end());
        }
        std::set<int> inclusiveG;
        for (int group : g) {
            if (std::count(g.begin(), g.end(), group) >= objects->count()) {
                inclusiveG.insert(group);
            }
        }
        std::set<int> uniqueG = inclusiveG;
        for (auto obj : ccToVec<GameObject*>(lel->_objects())) {
            if (objects->containsObject(obj) || obj->_zOrder()==314159) {
                continue;
            }
            for (int group : inclusiveG) {
                auto bad_groups = collapseGroups(obj);
                if (std::count(bad_groups.begin(), bad_groups.end(), group)) {
                    uniqueG.erase(group);
                }
            }
        }
        if (uniqueG.size()) {
            return *uniqueG.begin();
        } else {
            int newG = lel->getNextFreeGroupID(lel->_objects());
            for (auto obj : ccToVec<GameObject*>(objects)) {
                obj->addToGroup(newG);
            }
            return newG;
        }
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
        std::string text(textNode->getString());
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
        mainLayer = alertLayer->m_mainLayer;

        CCArray* ch = alertLayer->m_mainLayer->getChildren();

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
            CCPoint titlePosition = {squarePosition.x, (float)(squarePosition.y + squareHeight/2. - 16)};
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

    EditorUIEditor* EditorUIEditor::create(ModContainer* mc) {
        EditorUIEditor* pRet = new EditorUIEditor();
        if (pRet->initWithMC(mc)) {
            return pRet;
        }
        delete pRet;
        return NULL;
    }

    bool EditorUIEditor::initWithMC(ModContainer* mc) {
        if (CCNode::init()) {
            this->mc = mc;
            this->currentEditBar = -1;
        }
        return true;
    }
    EditorUIEditor* EditorUIEditor::bar(int b) {
        if (13 > b > 0) {
            this->currentEditBar = b;
        }
        return this;
    }

    EditorUIEditor* EditorUIEditor::addIndex(int index, int id) {
        if (this->currentEditBar > 0) {
            /*if (!this->editBars[this->currentEditBar])
                this->editBars.insert(this->currentEditBar, {});*/

            this->editBars[this->currentEditBar].push_back({index, id});
        }
        return this;
    }

    EditorUIEditor* EditorUIEditor::addEditPopup(int ob, void(*callback)(EditorUI*)) {
        if (!this->editPopups.count(ob)) 
            this->editPopups.insert(std::pair<int, void(*)(EditorUI*)>(ob, callback));
        return this;
    }

    EditorUIEditor* EditorUIEditor::addTriggerCallback(int ob, void(*callback)(GameObject*, GJBaseGameLayer*)) {
        if (!this->triggerCallbacks.count(ob)) 
            this->triggerCallbacks.insert(std::pair<int, void(*)(GameObject*, GJBaseGameLayer*)>(ob, callback));
        return this;
    }

    EditorUIEditor* EditorUIEditor::addSaveString(int ob, GameObject*(*fromString)(GameObject*, std::string), std::string(*toString)(GameObject*, std::string)) {
        if (!this->saveFromStrings.count(ob)) 
            this->saveFromStrings.insert(std::pair<int, GameObject*(*)(GameObject*, std::string)>(ob, fromString));
        if (!this->saveToStrings.count(ob)) 
            this->saveToStrings.insert(std::pair<int, std::string(*)(GameObject*, std::string)>(ob, toString));
        return this;
    }

    bool EditorUIEditor::appliedBars = false;
    bool EditorUIEditor::appliedObjects = false;
    bool EditorUIEditor::appliedCallbacks = false;
    bool EditorUIEditor::appliedPopups = false;
    bool EditorUIEditor::appliedSaveStrings = false;
    EditorUIEditor* EditorUIEditor::barInstance = nullptr;
    EditorUIEditor* EditorUIEditor::objectInstance = nullptr;
    EditorUIEditor* EditorUIEditor::callbackInstance = nullptr;
    EditorUIEditor* EditorUIEditor::popupInstance = nullptr;
    EditorUIEditor* EditorUIEditor::saveStringInstance = nullptr;

    void EditorUIEditor::applyBars() {
        if (!EditorUIEditor::appliedBars) {
            EditorUIEditor::appliedBars = true;
            EditorUIEditor::barInstance = this;

            // oh right this is not a global class so the thing that makes the stuff work wont work
            // class $redirect(EditorUI);
            this->mc->registerHook(getBase() + 0xcb50, +[](EditorUI* self) {
                auto inst = EditorUIEditor::barInstance;

                if (!inst) {
                    throw std::runtime_error(std::string("No editor ui editor instance found!"));
                }
                auto orig = reinterpret_cast<void(*)(EditorUI*)>(inst->mc->getOriginal(getBase() + 0xcb50));

                orig(self);

                for (const auto &bar : inst->editBars) {
                    if (self->_editBars()->count() > bar.first) {
                        EditButtonBar* theBar = static_cast<EditButtonBar*>(self->_editBars()->objectAtIndex((bar.first)));
                        cocos2d::CCArray* why = cocos2d::CCArray::create();
                        CCObject* ob;
                        int counter = 0;
                        CCARRAY_FOREACH(theBar->_objectSlots(), ob) {
                            counter++;
                            for (auto i : bar.second) {
                                if (counter == i.first) {
                                    why->addObject(self->getCreateBtn(i.second, 4));
                                    break;
                                }
                            }
                            why->addObject(ob);
                        }
                        theBar->loadFromItems(why, GM->getIntGameVariable("0049"), GM->getIntGameVariable("0050"), false);
                    }
                }
            });
        }
        EditorUIEditor::barInstance = this;
    }
    void EditorUIEditor::applyObjects() {
        if (!EditorUIEditor::appliedObjects) {
            EditorUIEditor::appliedObjects = true;
            EditorUIEditor::objectInstance = this;
            this->mc->registerHook(getBase() + 0x2fbba0, +[](GameObject* self) {
                auto inst = EditorUIEditor::objectInstance;

                if (!inst) {
                    throw std::runtime_error(std::string("No editor ui editor instance found!"));
                }
                auto orig = reinterpret_cast<void(*)(GameObject*)>(inst->mc->getOriginal(getBase() + 0x2fbba0));

                int id = self->_id();
                if(std::find(inst->gameSheet2Objects.begin(), inst->gameSheet2Objects.end(), id) != inst->gameSheet2Objects.end()) {
                    self->_id() = 901;
                }
                orig(self);
                self->_id() = id;
            });

            this->mc->registerHook(getBase() + 0x2f4ce0, +[](int key) {
                // GameObject::createWithKey
                auto inst = EditorUIEditor::objectInstance;

                if (!inst) {
                    throw std::runtime_error(std::string("No editor ui editor instance found!"));
                }
                auto orig = reinterpret_cast<GameObject*(*)(int)>(inst->mc->getOriginal(getBase() + 0x2f4ce0));

                if(std::find(inst->effectObjects.begin(), inst->effectObjects.end(), key) != inst->effectObjects.end()) {
                    char const* frame = ObjectToolbox::sharedState()->intKeyToFrame(key);
                    GameObject* gob = reinterpret_cast<GameObject*>(EffectGameObject::create(frame));
                    gob->_id() = key; 
                    return gob;
                } else {
                    return orig(key);
                }
            });
        }
        EditorUIEditor::objectInstance = this;
    }

    void EditorUIEditor::applyCallbacks() {
        if (!EditorUIEditor::appliedCallbacks) {
            EditorUIEditor::appliedCallbacks = true;
            EditorUIEditor::callbackInstance = this;
            this->mc->registerHook(getBase() + 0x2fa8f0, +[](GameObject* self, GJBaseGameLayer* gjbgl) {
                auto inst = EditorUIEditor::callbackInstance;
                if (!inst) {
                    throw std::runtime_error(std::string("No editor ui editor instance found!"));
                }
                auto orig = reinterpret_cast<void(*)(GameObject*, GJBaseGameLayer*)>(inst->mc->getOriginal(getBase() + 0x2fbba0));

                if (inst->triggerCallbacks.count(self->_id()) > 0) {
                    inst->triggerCallbacks[self->_id()](self, gjbgl);
                } else {
                    orig(self, gjbgl);
                }
            });

            this->mc->registerHook(getBase() + 0x343a60, +[](GameObject* self) {
                auto inst = EditorUIEditor::callbackInstance;
                if (!inst) {
                    throw std::runtime_error(std::string("No editor ui editor instance found!"));
                }
                auto orig = reinterpret_cast<bool(*)(GameObject*)>(inst->mc->getOriginal(getBase() + 0x343a60));
                if (inst->triggerCallbacks.count(self->_id()) > 0) {
                    return true;
                } else {
                    return orig(self);
                }
            });
        }
        EditorUIEditor::callbackInstance = this;
    }

    void EditorUIEditor::applyPopups() {
        if (!EditorUIEditor::appliedPopups) {
            EditorUIEditor::appliedPopups = true;
            EditorUIEditor::popupInstance = this;
            this->mc->registerHook(getBase() + 0x195a0, +[](EditorUI* self) {
                auto inst = EditorUIEditor::popupInstance;
                if (!inst) {
                    throw std::runtime_error(std::string("No editor ui editor instance found!"));
                }
                auto orig = reinterpret_cast<void(*)(EditorUI*)>(inst->mc->getOriginal(getBase() + 0x195a0));
                auto ob = self->_lastSelectedObject();
                if (ob && inst->editPopups.count(ob->_id()) > 0) {
                    inst->editPopups[ob->_id()](self);
                } else {
                    orig(self);
                }
            });

            this->mc->registerHook(getBase() + 0x28f30, +[](EditorUI* self) {
                auto inst = EditorUIEditor::popupInstance;
                if (!inst) {
                    throw std::runtime_error(std::string("No editor ui editor instance found!"));
                }
                auto orig = reinterpret_cast<bool(*)(EditorUI*)>(inst->mc->getOriginal(getBase() + 0x28f30));
                auto ob = self->_lastSelectedObject();
                if (ob && inst->editPopups.count(ob->_id()) > 0) {
                    return true;
                } else {
                    return orig(self);
                }
            });
        }
        EditorUIEditor::popupInstance = this;
    }

    void EditorUIEditor::applySaveStrings() {
        if (!EditorUIEditor::appliedSaveStrings) {
            EditorUIEditor::appliedSaveStrings = true;
            EditorUIEditor::saveStringInstance = this;
            this->mc->registerHook(getBase() + 0x33d3d0, +[](GameObject* go) {
                auto inst = EditorUIEditor::saveStringInstance;
                if (!inst) {
                    throw std::runtime_error(std::string("No editor ui editor instance found!"));
                }
                auto orig = reinterpret_cast<std::string(*)(GameObject*)>(inst->mc->getOriginal(getBase() + 0x33d3d0));
                auto st = orig(go);
                if (inst->saveToStrings.count(go->_id()) > 0) 
                    return inst->saveToStrings[go->_id()](go, st);
                return st;
            });

            this->mc->registerHook(getBase() + 0x33b720, +[](std::string st, bool idk) {
                auto inst = EditorUIEditor::saveStringInstance;
                if (!inst) {
                    throw std::runtime_error(std::string("No editor ui editor instance found!"));
                }
                auto orig = reinterpret_cast<GameObject*(*)(std::string, bool)>(inst->mc->getOriginal(getBase() + 0x33b720));
                auto go = orig(st, idk);
                if (inst->saveFromStrings.count(go->_id()) > 0) 
                    return inst->saveFromStrings[go->_id()](go, st);
                return go;
            });
        }
        EditorUIEditor::saveStringInstance = this;
    }

    void CacAlertLayer::keyBackClicked() {
        onClose();
        setKeypadEnabled(false);
        setTouchEnabled(false);
        removeFromParentAndCleanup(true);
    }

    bool CacAlertLayer::init(CCSize size) {
        uint64_t ok1 = *((uint64_t*)this);
        uint64_t ok2 = (*((uint64_t*)(ok1-8)))+16;

        uint64_t n_typinfo = getBase()+0x65d870;
        MemoryContainer(ok2, 8, reinterpret_cast<char*>(&n_typinfo)).enable();


        if (CCLayerColor::initWithColor(ccc4(0,0,0,150))) { 

            m_mainLayer = CCLayer::create();
            m_buttonMenu = CCMenu::create();
            addChild(m_mainLayer);
            m_mainLayer->addChild(m_buttonMenu);

            auto scale9 = extension::CCScale9Sprite::create("GJ_square01.png");
            scale9->setContentSize(size);
            scale9->setPosition(Cacao::relativePosition(50,50));
            m_mainLayer->addChild(scale9, -2);


            auto close = CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png");

            m_closeButton = CCMenuItemSpriteExtra::create(close, NULL, this, menu_selector(CacAlertLayer::l_onClose));
            m_closeButton->setPosition( - size.width / 2, size.height / 2 );
            m_buttonMenu->addChild(m_closeButton);


            m_title->limitLabelWidth(size.width*4, .75f, .2f);
            m_title->setPosition(Cacao::addedPosition(0, size.height/2 - 25));
            m_mainLayer->addChild(m_title);

            alertInit();
            return true;
        }
        return false;
    }

    void CacAlertLayer::show(void) {
        //m_helper->m_noElasticity = m_noElasticity;
        //m_helper->show();

        registerWithTouchDispatcher();
        CCDirector::sharedDirector()->getTouchDispatcher()->incrementForcePrio(2);

        setTouchEnabled(true);
        setKeypadEnabled(true);

        FLAlertLayer::show();
    }

    CacTextContainer* CacTextContainer::create(cocos2d::CCSize const& size, TextInputDelegate* delegate, char const* font) {
        auto pRet = new CacTextContainer();
        if (pRet && pRet->init(size, 24, delegate, font)) {
            pRet->autorelease();
            return pRet;
        }
        CC_SAFE_DELETE(pRet);
        return NULL;
    }

    bool CacTextContainer::init(cocos2d::CCSize size, float fontSize, TextInputDelegate* delegate, char const* font) {
        float clampMult = fmin(1, size.height/40.0);
        if ((m_textInputNode = CCTextInputNode::create(size.width, size.height, "", "Thonburi", fontSize, font))) {
            m_textInputNode->m_delegate = delegate;
            m_textInputNode->setLabelPlaceholderColor(ccc3(120, 170, 240));
            addChild(m_textInputNode,2);
            m_textInputNode->setMaxLabelScale(size.height/50.);
            m_box = cocos2d::extension::CCScale9Sprite::create("square02b_small.png");
            m_box->setOpacity(100);
            m_box->setColor(ccc3(0,0,0));
            m_box->setContentSize(CCSizeMake((size.width+10)/clampMult, fmax(size.height-10,40)));
            m_box->setScale(clampMult);
            addChild(m_box, 1);
            return true;
        }
        return false;
    }
}  // namespace Cacao
