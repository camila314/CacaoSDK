# CacaoSDK
Cacao is a revolutionary Geometry Dash modding framework for MacOS users. Cacao requires CMake so make sure you have that. To start, run the `create` file and specify a location

Cacao uses [a modified version of Lilac Core](https://github.com/altalk23/lilac-core/) for function hooking.

<<<<<<< HEAD
## Prerequisites

The projects created with the `./create` are normally in the current working directory. To override this you can add a `CACAO_PROJECT_FOLDER` environment variable. You can do this by adding `export CACAO_PROJECT_FOLDER="path/to/project/folder"` to your .bash_profile file.
=======
Cacao uses a modified version of [rd_route](https://github.com/rodionovd/rd_route) and also uses [Zydis](https://github.com/zyantific/zydis) for function hooking.
>>>>>>> master

## How to use

TODO: Make this properly documented  

### Cacao

<<<<<<< HEAD
Cacao comes with a neat little way to hook very quickly. This let's you automatically hook functions without needing to manually find the address each time. It works by subclassing some of the Cacao classes and overriding some of the methods. Cacao classes are just like normal GD classes but prefixed with a `$`. To easily subclass these classes there is a macro called `$()`. To use it I give the macro the class I want to hook. Example:
=======
Cacao comes with a neat little way to hook functions very quickly. This let's you automatically hook functions without needing to manually find the address each time. It works by subclassing some of the Cacao classes and overriding some of the methods. Cacao classes are just like normal GD classes but prefixed with a `$`. To easily subclass these classes there is a macro called `$redirect`. To use it I give the macro the class I want to hook. You'll also notice that I assign a variable to it. This is because the variable allows me to activate the hooking automatically. And to apply all the hooks to the GD I use a macro called `$apply`. Example:
>>>>>>> master
```cpp
#include <Cacao>
#include <iostream>

class $(EditorUI) {
    void undoLastAction(CCObject* p0) {
        std::cout << "Undo!" << std::endl;
    }
};
```

If you want to call the original function, there is also an easy way to do that as well:
```cpp
#include <Cacao>
#include <iostream>

class $(EditorUI) {
    void undoLastAction(CCObject* p0) {
        std::cout << "Undo!" << std::endl;
        $EditorUI::undoLastAction(p0);
    }
};
```
<<<<<<< HEAD

If you need the name of the hook class you can use the `$()` macro with 2 parameters:
=======
Since the Cacao classes subclass the GD classes, we can use the members and functions like we would in a normal class. 
>>>>>>> master
```cpp
#include <Cacao>
#include <iostream>

class $(EditorUI, EditorUIHook) {
	void callback(CCObject*) {
		std::cout << "Called from EditorUIHook!" << std::endl;
	}
    void undoLastAction(CCObject* p0) {
    	auto func = &EditorUIHook::callback;
        (this->*func)(p0); // c++ syntax moment
        $EditorUI::undoLastAction(p0);
    }
};
```

<<<<<<< HEAD
Since the Cacao classes subclass the GD classes, we can use the members and functions like we would in a normal class.
```cpp
=======
If you want, you can also use a function with the name `inject` to run code before the mod is loaded. The function needs to be declared before the `$apply` however. The variable "m" is reserved for the mod container that is automatically created by Cacao. If you want your mod to be used by other things (like any future Megahack thing I do), it's important to give the mod a proper name. This can be easily done by defining `CAC_PROJ_NAME` with the name. \*\*Make sure you do this before you include Cacao.
```cpp
#define CAC_PROJ_NAME "My first mod"
>>>>>>> master
#include <Cacao>
#include <iostream>

class $(EditorUI) {
    void undoLastAction(CCObject* p0) {
        std::cout << "We have " << getSelectedObjects()->count() << " objects selected" << std::endl;
        $EditorUI::undoLastAction(p0);
    }
<<<<<<< HEAD
};
=======
} MyEditorUIHook;

void inject() {
    std::cout << "Hello!" << std::endl;
}

$apply();

```

If theres a function/class you want to be added to the Cacao catalog just create an issue or tell me on discord.

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
#include <Cacao>
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

>>>>>>> master
```

If you want, you can also use a function with the name `inject` to run code after the mod is loaded.
```cpp
#include <Cacao>
<<<<<<< HEAD
#include <iostream>
=======
ModContainer* m;
>>>>>>> master

class $(EditorUI) {
    void undoLastAction(CCObject* p0) {
        std::cout << "We have " << getSelectedObjects()->count() << " objects selected" << std::endl;
        $EditorUI::undoLastAction(p0);
    }
};

void inject() {
    std::cout << "Hello!" << std::endl;
}
```

If there's a function, class, or member you want to be added to the Cacao catalog consider creating a pull request on [CacaoData](https://github.com/altalk23/CacaoData/).

For Cacao, (almost) all class variables are accessed via functions and prefixed with an underscore, e.g `GameManager::sharedState()->_playLayer()`. You can find a full list of these inside the Header.hpp header file.

For a full list of helper functions, look at the helpers/Cacao.hpp header file.
