#include <CacKit>

CAC_HOOKS
class: public $PlayLayer {
    void update(float dt) override {
        std::cout << "hello!\n";

        $PlayLayer::update(dt);
    }
} TemplateMod;
END_CAC_HOOKS

void inject() {
	//do some setup stuff
}
