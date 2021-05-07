#include <CacKit>

class: public $PlayLayer {
    void update(float dt) override {
        std::cout << "hello!\n";

        $PlayLayer::update(dt);
    }
} TemplateMod;

void inject() {
	//do some setup stuff
}
