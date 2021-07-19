#include <CacKit>

CAC_HOOKS

class: public $MenuLayer {
	void onQuit(CCObject* ob) override {
		FLAlertLayer::create("Cacao", "Hello from custom mod!", "OK")->show();
	}
} MyMod;

END_CAC_HOOKS