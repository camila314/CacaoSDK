#include <Cacao>

class $redirect(MenuLayer) {
public:
	void onMoreGames(CCObject* ob) {
		FLAlertLayer::create("Cacao", "Hello from custom mod!", "OK")->show();
	} 
} MyMenuLayerHook;
