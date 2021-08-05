//Copyright camden314 2021. Autogenerated using a python script
//please add meeeeee - alk1m123/altalk23
#include <Cacao.hpp>
using namespace cocos2d;
using namespace cocos2d::extension;
ModContainer* m;

#ifndef CAC_PROJ_NAME
#define CAC_PROJ_NAME "Default Cacao Project"
#endif

#define APPLY_HOOKS() void __apply_hooks() {                \
    __if_exists(inject) {                                   \
        inject();                                           \
    }                                                       \
    for(auto& i : __cackit::glob) i->apply_hooks();         \
    if (__cackit::glob.size() > 0) m->enable();             \
}                                                           \
static int const __cachook = (__apply_hooks(), 0)
#define $apply() APPLY_HOOKS()

#define CONCAT_(x, y) x##y
#define CONCAT(x, y) CONCAT_(x, y)
#define REDIRECT_(base, counter) CONCAT($hook, counter): public base<CONCAT($hook, counter)>
#define $redirect(base) REDIRECT_($##base, __COUNTER__)

typedef char const* c_string;

// deprecated lol
template <class F>
struct GetReturnType;

// deprecated lol
template <class K>
struct RemoveRef;

// deprecated lol
template <class R, class... A, class G>
struct GetReturnType<R (G::*)(A...)>
{
  typedef R type;
};

// deprecated lol
template <class M>
struct RemoveRef <M&>
{
    typedef M type;
};

// deprecated lol
#define cac_this (reinterpret_cast<RemoveRef<decltype(*this)>::type::__thistype>(this))

// "A destructor is used to destroy objects of its class type. The address of a destructor shall not be taken."
// - C++ standard 12.4.2
// Therefore, we shall not take the destructor of the class and replace it with an empty function. ~alk
template <class T>
inline long extract_destructor(T instance) {
    return (*reinterpret_cast<long*>(*reinterpret_cast<long*>(instance)+8));
};

// Welcome back we missed you
template <typename F, class T>
inline long extract_virtual(T instance, F func) {
    return (*reinterpret_cast<long*>(*reinterpret_cast<long*>(instance)+*reinterpret_cast<long*>(&func)-1));
};

template <typename F>
inline long extract(F func) {
    return (*reinterpret_cast<long*>(&func));
};

class $CacBase {
public:
    virtual void apply_hooks() = 0; 
};

namespace __cackit {
  std::vector<$CacBase*> glob;  
}
