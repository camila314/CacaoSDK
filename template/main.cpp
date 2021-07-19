#include <CacKit>

CAC_HOOKS

class: public $MenuLayer {
	void onMoreGames(CCObject* ob) override {
		FLAlertLayer::create("Cacao", "Hello from custom mod!", "OK")->show();
	}
} MenuLayerHook;

END_CAC_HOOKS
