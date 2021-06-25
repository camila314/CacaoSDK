#include <CacKit>

CAC_HOOKS
// do some hooking
class: public $PlayLayer {
    void update(float dt) override {
        std::cout << "hello!" << std::endl;

        $PlayLayer::update(dt);
    }
} ExampleHook;

END_CAC_HOOKS

void inject() {
    // after hooking work
}
