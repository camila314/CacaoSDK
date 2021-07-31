#include <CacKit>

class REDIRECT($MenuLayer) {
	void onMoreGames(CCObject* ob) {
		FLAlertLayer::create("Cacao", "Hello from custom mod!", "OK")->show();
	} 
} MyMenuLayerHook;

APPLY_HOOKS();
