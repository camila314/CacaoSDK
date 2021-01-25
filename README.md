# CacaoSDK
CacaoSDK is a toolkit for Geometry Dash programming on the MacOS platform. To start, run the `create` file and specify a location

## Prerequisites

Cacao requires the GNU gcc that is not installed by default on macs. The best way to install it is to use brew, `brew install gcc@5`. While the version used is customizable in the makefile it's highly recommended that you use gcc 5.

### Compiler issues

On MacOS 10.14 (Mojave), there are issues with headers not being found. To fix this, ensure that the command line developer tools are installed and run the following:

```bash
	cd /Library/Developer/CommandLineTools/Packages/
	open macOS_SDK_headers_for_macOS_10.14.pkg
```

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

For Cacao, all class variables are accessed via functions and prefixed with an underscore, e.g `GameManager::sharedState()._playLayer()`.

For a full list of functions, look at the Cacao.hpp header file.