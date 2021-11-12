#include <Cacao>

class $implement(MenuLayer, MyMenuLayerHook) {
public:
	void onMoreGames(CCObject* ob) {
		FLAlertLayer::create("Cacao", "Hello from custom mod!", "OK")->show();
	} 
} endImplement(MyMenuLayerHook);

$apply();
