#include <Cacao>

class $redirect(MenuLayer) {
public:
	void onMoreGames(cocos2d::CCObject* ob) {
		FLAlertLayer::create("Cacao", "Hello from custom mod!", "OK")->show();
	} 
};
