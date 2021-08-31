// deprecated
#define APPLY_HOOKS() void __apply_hooks() {                \
    __if_exists(inject) {                                   \
        inject();                                           \
    }                                                       \
    for(auto& i : __cackit::glob) i->apply_hooks();         \
    if (__cackit::glob.size() > 0) m->enable();             \
}                                                           \
static int const __cachook = (__apply_hooks(), 0)
// comment this after implementing vtable in constructor
#define $apply(...) APPLY_HOOKS()

// uncomment this after implementing vtable in constructor
// #define $apply(...) __VA_ARGS__

// uncomment this after implementing vtable in constructor
// #define inject() $inject(); static int const _inject = ($inject(), 0); void $inject()

#define CONCAT_(x, y) x##y
#define CONCAT(x, y) CONCAT_(x, y)

#define CONCAT3_(x, y, z) x##y##z
#define CONCAT3(x, y, z) CONCAT3_(x, y, z)

#define VTABLE(cl) CONCAT(v, cl)
// old hopefully
#define REDIRECT_(base, counter) CONCAT($hook, counter): public base<CONCAT($hook, counter)>

#define IMPLEMENT___(base, derived, vtable) derived: public base<derived, vtable>
#define IMPLEMENT__(base, derived) IMPLEMENT___(base, derived, VTABLE(derived))
#define IMPLEMENT_(base, counter) IMPLEMENT__(base, CONCAT($hook, counter))

#define $redirect(base) IMPLEMENT_($##base, __COUNTER__)

#define VADD_(len, cls) extern "C" void** CONCAT3(_ZTV, len, cls); constexpr auto CONCAT(v, cls) = &CONCAT3(_ZTV, len, cls);
#define VADD(len, num) VADD_(len, CONCAT($hook, num))

VADD(6, 0);  VADD(6, 1);  VADD(6, 2);  VADD(6, 3);  VADD(6, 4);
VADD(6, 5);  VADD(6, 6);  VADD(6, 7);  VADD(6, 8);  VADD(6, 9);
VADD(7, 10); VADD(7, 11); VADD(7, 12); VADD(7, 13); VADD(7, 14);
VADD(7, 15); VADD(7, 16); VADD(7, 17); VADD(7, 18); VADD(7, 19);
VADD(7, 20); VADD(7, 21); VADD(7, 22); VADD(7, 23); VADD(7, 24); 
VADD(7, 25); VADD(7, 26); VADD(7, 27); VADD(7, 28); VADD(7, 29);
VADD(7, 30); VADD(7, 31); VADD(7, 32); VADD(7, 33); VADD(7, 34); 
VADD(7, 35); VADD(7, 36); VADD(7, 37); VADD(7, 38); VADD(7, 39);
VADD(7, 40); VADD(7, 41); VADD(7, 42); VADD(7, 43); VADD(7, 44); 
VADD(7, 45); VADD(7, 46); VADD(7, 47); VADD(7, 48); VADD(7, 49);
VADD(7, 50); VADD(7, 51); VADD(7, 52); VADD(7, 53); VADD(7, 54); 
VADD(7, 55); VADD(7, 56); VADD(7, 57); VADD(7, 58); VADD(7, 59);
VADD(7, 60); VADD(7, 61); VADD(7, 62); VADD(7, 63); VADD(7, 64); 
VADD(7, 65); VADD(7, 66); VADD(7, 67); VADD(7, 68); VADD(7, 69);
VADD(7, 70); VADD(7, 71); VADD(7, 72); VADD(7, 73); VADD(7, 74); 
VADD(7, 75); VADD(7, 76); VADD(7, 77); VADD(7, 78); VADD(7, 79);
VADD(7, 80); VADD(7, 81); VADD(7, 82); VADD(7, 83); VADD(7, 84); 
VADD(7, 85); VADD(7, 86); VADD(7, 87); VADD(7, 88); VADD(7, 89);
VADD(7, 90); VADD(7, 91); VADD(7, 92); VADD(7, 93); VADD(7, 94); 
VADD(7, 95); VADD(7, 96); VADD(7, 97); VADD(7, 98); VADD(7, 99);
