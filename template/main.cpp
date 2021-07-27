#include <CacKit>

class: public $MenuLayer {
	void onMoreGames(CCObject* ob) override {
		FLAlertLayer::create("Cacao", "Hello from custom mod!", "OK")->show();
	} 
} MyMenuLayerHook;

APPLY_HOOKS();
