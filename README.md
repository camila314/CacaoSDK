# CacaoSDK
CacaoSDK is an extension of the [CappuccinoSDK](https://github.com/AndreNIH/CappuccinoSDK) toolkit for Geometry Dash programming on MacOS. To start, run the `create` file and specify a location

Cacao uses a modified version of [rd_route](https://github.com/rodionovd/rd_route) and also uses [Zydis](https://github.com/zyantific/zydis) for function hooking.
## Prerequisites

Cacao uses the MacOS 10.7 SDK for compiling, since it is compatible with the current version of Geometry Dash. You can easily get the 10.7 sdk from [this repository](https://github.com/phracker/MacOSX-SDKs). You also need to modify the makefile to add the path of the sdk, put respectively in the `SDK_LOCATION` variable.

## How to use

### GDML

Cacao comes with a memory management and hooking library, GDML. GDML comes with one main class, `ModContainer`. Usually there is one container per program, but multiple mod containers are useful if you need to enable/disable multiple different mods at once, for example a mod menu. A `ModContainer` instance can be created like this:

```cpp
auto m = new ModContainer("My mod container");
```

`ModContainer` has one static method, which is `containerByName`. This will simply iterate through all created containers until it finds one with a matching name. If none are found, it will throw a `ModNotFoundException` exception. `containerByName` accepts any parameter than can be converted into a string. An example:

```cpp
ModContainer::containerByName("My mod container").disable();

std::string name("My mod container");
ModContainer::containerByName(name).enable();
```

In order to create memory patches and hooks, there are 2 methods for you. `ModContainer::registerWrite` and `ModContainer::registerHook`. Here is how to use `registerWrite`:

```cpp
	int64_t base = getBase(); // GDML base address function
	m->registerWrite(base+0x123456, 4, "\x90\x90\x90\x90")
```

With the above example, once enabled, the program will write the 4 bytes `90909090` into the address `base+0x123456`.

For `registerHook`, it is also easy to use:

```cpp
	int64_t base = getBase(); // GDML base address function
	m->registerHook(base+0x543210, (func_t)myHook);
```

You'll notice that in this snippet, we don't save the original function into a seperate variable. This is mainly for ease and to avoid having to define a bunch of function pointers to put them in. If you do, however, want to save the original function, you can use this:

```cpp
func_t orig = m->getOriginal(base+0x543210);
```

The `getOriginal` function by default returns a type `func_t` (aka `void (*)()`). If you want to quickly cast it into the same type as the hook, you can use the `FCAST` macro provided. Full code example:

```cpp
#include <Cacao.hpp>
ModContainer* m;

void hook(int param2, char param2) {
	// do stuff here
	func_t orig = m->getOriginal(getBase()+0x314159);
	return FCAST(hook, orig)(param1, param2);
}

void inject() {
	m = new ModContainer("test");
	m->registerHook(getBase()+0x314159, (func_t)hook);
	m->enable();
}
```

Instead of using `int main`, we are using `void inject`. The inject function is what is called when you inject the dylib file into gd. Also, we have to call `enable` for the mods to actually start working. There exists a `disable` function as well, which undoes all of the hooks and patches.

### Cacao

For Cacao, all class variables are accessed via functions and prefixed with an underscore, e.g `GameManager::sharedState()._playLayer()`. You can find a full list of these inside the cc_defs.hpp header file

For a full list of helper functions, look at the Cacao.hpp header file.