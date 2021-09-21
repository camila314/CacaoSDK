#include <CacKit>


class $hook0 : public $MenuLayer<$hook0> {
// class $redirect(MenuLayer) {
public:
	void onMoreGames(CCObject* ob) {
		FLAlertLayer::create("Cacao", "Hello from custom mod!", "OK")->show();
	} 
} MyMenuLayerHook;

$apply();

void $inject(); 
static int const _inject = ($inject(), 0); 
void $inject() {
    std::cout << "a" << std::endl;
}
