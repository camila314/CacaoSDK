// Copyright 2021 camden314

using cocos2d::CCObject;

#define CAC_EZHOOK_START(mc, addr, ret, ...) { \
	ModContainer* CACMC = (mc); \
	long CACADDR = addr; \
	ret(*CACHOOK)(__VA_ARGS__) = +[](__VA_ARGS__) { \
		auto CAC_ORIG = FCAST(*CACHOOK, (mc)->getOriginal(getBase()+addr)); \

#define CAC_EZHOOK_END }; \
	CACMC->registerHook(getBase()+CACADDR, CACHOOK); \
	}

#define CAC_EDITMENU_START(mc) \
	CAC_EZHOOK_START(mc, 0xcb50, void, EditorUI* self) \
	CAC_ORIG(self); \

#define CAC_EDITMENU_BAR_START(bar) \
	{EditButtonBar* theBar = static_cast<EditButtonBar*>(self->_editBars()->objectAtIndex((bar))); \
	cocos2d::CCArray* why = cocos2d::CCArray::create(); \
	CCObject* ob; \
	int counter = 0; \
	CCARRAY_FOREACH(theBar->_objectSlots(), ob) { \
		counter++;

#define CAC_EDITMENU_ADD(objId, index) \
		if (counter==(index)) { \
			why->addObject(self->getCreateBtn((objId), 4)); \
		};
#define CAC_EDITMENU_BAR_END \
		why->addObject(ob); \
	} \
	theBar->loadFromItems(why, 6, 2, false); \
	}; \

#define CAC_EDITMENU_END CAC_EZHOOK_END


#define CAC_ENABLE_OBJ_BTN(mc, ...) \
	CAC_EZHOOK_START(m, 0x28f30, bool, EditorUI* self) \
		auto obs = self->getSelectedObjects(); \
		if (obs->count()>0) { \
			int ids[] = {__VA_ARGS__}; \
			for (int i=0;i<sizeof(ids)/sizeof(int);i++) {\
				if (reinterpret_cast<GameObject*>(obs->objectAtIndex(0))->_id() == ids[i]) return true; \
			} \
		} \
		return CAC_ORIG(self); \
	CAC_EZHOOK_END