#include <Cacao>

class $redirect(MenuLayer) {
	void onMoreGames(cocos2d::CCObject* ob) {
		FLAlertLayer::create("Cacao", "Hello from custom mod!", "OK")->show();
	} 
};
