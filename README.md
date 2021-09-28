# CacaoSDK
Cacao is a revolutionary Geometry Dash modding framework for MacOS users. Cacao requires CMake so make sure you have that. To start, run the `create` file and specify a location

Cacao uses [Lilac Core](https://github.com/lilac-sdk/core/) for function hooking.

## Prerequisites

The projects created with the `./create` are normally in the current working directory. To override this you can add a `CACAO_PROJECT_FOLDER` environment variable. You can do this by adding `export CACAO_PROJECT_FOLDER="path/to/project/folder"` to your .bash_profile file.

## How to use

TODO: Make this properly documented  

### CacKit

Cacao comes with a neat little way to hook very quickly with a tool called CacKit (amazing name, right). This let's you automatically hook functions without needing to manually find the address each time. It works by subclassing some of the CacKit classes and overriding some of the methods. CacKit classes are just like normal GD classes but prefixed with a `$`. To easily subclass these classes there is a macro called `$redirect`. To use it I give the macro the class I want to hook. You'll also notice that I assign a variable to it. This is because the variable allows me to activate the hooking automatically. And to apply all the hooks to the GD I use a macro called `$apply`. Example:
```cpp
#include <CacKit>
#include <iostream>

class $redirect(EditorUI) {
public:
    void undoLastAction(CCObject* p0) {
        std::cout << "Undo!" << std::endl;
    }
} MyEditorUIHook;

$apply();
```

If you want to call the original function, there is also an easy way to do that as well:
```cpp
#include <CacKit>
#include <iostream>

class $redirect(EditorUI) {
public:
    void undoLastAction(CCObject* p0) {
        std::cout << "Undo!" << std::endl;
        $EditorUI::undoLastAction(p0);
    }
} MyEditorUIHook;

$apply();
```
Since the CacKit classes subclass the GD classes, we can use the members and functions like we would in a normal class. 
```cpp
#include <CacKit>
#include <iostream>

class $redirect(EditorUI) {
public:
    void undoLastAction(CCObject* p0) {
        std::cout << "We have " << getSelectedObjects()->count() << " objects selected" << std::endl;
        $EditorUI::undoLastAction(p0);
    }
} MyEditorUIHook;

$apply();
```

If you want, you can also use a function with the name `inject` to run code before the mod is loaded. The function needs to be declared before the `$apply` however. The variable "m" is reserved for the mod container that is automatically created by CacKit. If you want your mod to be used by other things (like any future Megahack thing I do), it's important to give the mod a proper name. This can be easily done by defining `CAC_PROJ_NAME` with the name. \*\*Make sure you do this before you include CacKit.
```cpp
#define CAC_PROJ_NAME "My first mod"
#include <CacKit>
#include <iostream>

class $redirect(EditorUI) {
public:
    void undoLastAction(CCObject* p0) {
        std::cout << "We have " << getSelectedObjects()->count() << " objects selected" << std::endl;
        $EditorUI::undoLastAction(p0);
    }
} MyEditorUIHook;

void inject() {
    std::cout << "Hello!" << std::endl;
}

$apply();

```

If theres a function/class you want to be added to the CacKit catalog just create an issue or tell me on discord.

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
    m->registerHook(base+0x543210, myHook);
```

You'll notice that in this snippet, we don't save the original function into a seperate variable. This is mainly for ease and to avoid having to define a bunch of function pointers to put them in. If you do, however, want to save the original function, you can use this:

```cpp
func_t orig = m->getOriginal(base+0x543210);
```

The `getOriginal` function by default returns a type `func_t` (aka `void (*)()`). If you want to quickly cast it into the same type as the hook, you can use the `FCAST` macro provided. Full code example:

```cpp
#include <Cacao.hpp>
ModContainer* m;

void hook(int param1, char param2) {
    // do stuff here
    func_t orig = m->getOriginal(getBase()+0x314159);
    return FCAST(hook, orig)(param1, param2);
}

void inject() {
    m = new ModContainer("test");
    m->registerHook(getBase()+0x314159, hook);
}

$apply();

```

There is actually a more visually pleasing way of calling the original function using the macro `ORIG`. This macro only works if the ModContainer instance is named `m`. Here is an example:

```cpp
#include <Cacao.hpp>
ModContainer* m;

int cool(void* param1, char* param2) {
    int ret_value = ORIG(cool, 0x314159)(param1, param2);
    return ret_value * 2;
}

void inject() {
    m = new ModContainer("test");
    m->registerHook(getBase()+0x314159, hook);
}

$apply();

```

Instead of using `int main`, we are using `void inject`. The inject function is what is called when you inject the dylib file into gd. `$apply` macro calls the `enable` method for us so we don't need to. There exists a `disable` function as well, which undoes all of the hooks and patches.

### Cacao

For Cacao, (almost) all class variables are accessed via functions and prefixed with an underscore, e.g `GameManager::sharedState()->_playLayer()`. You can find a full list of these inside the cc_defs.hpp header file

For a full list of helper functions, look at the Cacao.hpp header file.
