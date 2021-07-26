#include <CacKit>

CAC_HOOKS

class MenuLayerHook: public $MenuLayer<MenuLayerHook> {
public:
	void onMoreGames(CCObject* ob) override {
		FLAlertLayer::create("Cacao", "Hello from custom mod!", "OK")->show();
	}
} MyMenuLayerHook;

END_CAC_HOOKS
