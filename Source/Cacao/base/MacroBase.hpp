// 
// Copyright camila314 & alk1m123 2022. 
//
#pragma once 

/**
 * 2 levels of indirection for common operations
 */
#define CONCAT_(x, y) x##y
#define CONCAT(x, y) CONCAT_(x, y)

#define STR_(...) #__VA_ARGS__
#define STR(...) STR_(__VA_ARGS__)


#define EXPAND(x) x
#define INVOKE(macro, ...) EXPAND(macro(__VA_ARGS__))

#if _WIN32
    #define CallConv(x) x
#else
    #define CallConv(x)
#endif

#define STACKFIX(a) \
    constexpr int _sf = a; \
    __asm add esp, _sf

#if defined(CACAO_DEBUG)
	#define CacaoDebug(format, ...) CacaoLog(format, ##__VA_ARGS__)
#else
    #define CacaoDebug(format, ...)
#endif

/**
 * Get type of a function
 */
#define getPReturnOf(Class, Function) decltype(std::declval<Class>().Function())
#define getReturnOf(Class, Function, ...) decltype(std::declval<Class>().Function( __VA_ARGS__ ))

// #define functionOfP(Class, Function, ...) getPReturnOf(Class, Function, __VA_ARGS__) functionOf_(REPEAT0, Class, Function, __VA_ARGS__)
// #define functionOf(Class, Function, ...) getReturnOf(Class, Function, __VA_ARGS__) functionOf_( GETREPEAT(__VA_ARGS__), Class, Function, __VA_ARGS__ )
// #define functionOf_(Macro, Class, Function, ...) Class::Function( Macro(PARAMETER, 0, __VA_ARGS__) )

#define NUMBER_AFTER(num) CONCAT(NUMBER_AFTER_, num)()
#define NUMBER_AFTER_0() 1
#define NUMBER_AFTER_1() 2
#define NUMBER_AFTER_2() 3
#define NUMBER_AFTER_3() 4
#define NUMBER_AFTER_4() 5
#define NUMBER_AFTER_5() 6
#define NUMBER_AFTER_6() 7
#define NUMBER_AFTER_7() 8
#define NUMBER_AFTER_8() 9
#define NUMBER_AFTER_9() 10
#define NUMBER_AFTER_10() 11
#define NUMBER_AFTER_11() 12
#define NUMBER_AFTER_12() 13
#define NUMBER_AFTER_13() 14
#define NUMBER_AFTER_14() 15
#define NUMBER_AFTER_15() 16
#define NUMBER_AFTER_16() 17
#define NUMBER_AFTER_17() 18
#define NUMBER_AFTER_18() 19
#define NUMBER_AFTER_19() 20

#define TYPE(arg, i) decltype(CONCAT(p, i))
#define PARAMETER(arg, i) CONCAT(p, i)
#define EVAL(arg, i) arg PARAMETER(arg, i)
#define DECLVAL(arg, i) std::declval<arg>()

#define GETREPEAT(...) EXPAND(CONCAT(REPEAT, NUMBER_OF_ARGS(__VA_ARGS__)))
#define REPEAT0( macro, i, ...)
#define REPEAT1( macro, i, arg, ...) macro(arg, i)
#define REPEAT2( macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT1( macro, NUMBER_AFTER(i), __VA_ARGS__))
#define REPEAT3( macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT2( macro, NUMBER_AFTER(i), __VA_ARGS__))
#define REPEAT4( macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT3( macro, NUMBER_AFTER(i), __VA_ARGS__))
#define REPEAT5( macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT4( macro, NUMBER_AFTER(i), __VA_ARGS__))
#define REPEAT6( macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT5( macro, NUMBER_AFTER(i), __VA_ARGS__))
#define REPEAT7( macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT6( macro, NUMBER_AFTER(i), __VA_ARGS__))
#define REPEAT8( macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT7( macro, NUMBER_AFTER(i), __VA_ARGS__))
#define REPEAT9( macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT8( macro, NUMBER_AFTER(i), __VA_ARGS__))
#define REPEAT10(macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT9( macro, NUMBER_AFTER(i), __VA_ARGS__))
#define REPEAT11(macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT10(macro, NUMBER_AFTER(i), __VA_ARGS__))
#define REPEAT12(macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT11(macro, NUMBER_AFTER(i), __VA_ARGS__))
#define REPEAT13(macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT12(macro, NUMBER_AFTER(i), __VA_ARGS__))
#define REPEAT14(macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT13(macro, NUMBER_AFTER(i), __VA_ARGS__))
#define REPEAT15(macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT14(macro, NUMBER_AFTER(i), __VA_ARGS__))
#define REPEAT16(macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT15(macro, NUMBER_AFTER(i), __VA_ARGS__))
#define REPEAT17(macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT16(macro, NUMBER_AFTER(i), __VA_ARGS__))
#define REPEAT18(macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT17(macro, NUMBER_AFTER(i), __VA_ARGS__))
#define REPEAT19(macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT18(macro, NUMBER_AFTER(i), __VA_ARGS__))
#define REPEAT20(macro, i, arg, ...) macro(arg, i), EXPAND(REPEAT19(macro, NUMBER_AFTER(i), __VA_ARGS__))

#define getReturnOf0( Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT0( DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf1( Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT1( DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf2( Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT2( DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf3( Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT3( DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf4( Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT4( DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf5( Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT5( DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf6( Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT6( DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf7( Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT7( DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf8( Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT8( DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf9( Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT9( DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf10(Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT10(DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf11(Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT11(DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf12(Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT12(DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf13(Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT13(DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf14(Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT14(DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf15(Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT15(DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf16(Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT16(DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf17(Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT17(DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf18(Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT18(DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf19(Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT19(DECLVAL, 0, __VA_ARGS__))))
#define getReturnOf20(Class, Function, ...) decltype(std::declval<Class>().Function(EXPAND(REPEAT20(DECLVAL, 0, __VA_ARGS__))))

#define getEvalsOf0(... ) EXPAND(REPEAT0( EVAL, 0, __VA_ARGS__))
#define getEvalsOf1(... ) EXPAND(REPEAT1( EVAL, 0, __VA_ARGS__))
#define getEvalsOf2(... ) EXPAND(REPEAT2( EVAL, 0, __VA_ARGS__))
#define getEvalsOf3(... ) EXPAND(REPEAT3( EVAL, 0, __VA_ARGS__))
#define getEvalsOf4(... ) EXPAND(REPEAT4( EVAL, 0, __VA_ARGS__))
#define getEvalsOf5(... ) EXPAND(REPEAT5( EVAL, 0, __VA_ARGS__))
#define getEvalsOf6(... ) EXPAND(REPEAT6( EVAL, 0, __VA_ARGS__))
#define getEvalsOf7(... ) EXPAND(REPEAT7( EVAL, 0, __VA_ARGS__))
#define getEvalsOf8(... ) EXPAND(REPEAT8( EVAL, 0, __VA_ARGS__))
#define getEvalsOf9(... ) EXPAND(REPEAT9( EVAL, 0, __VA_ARGS__))
#define getEvalsOf10(...) EXPAND(REPEAT10(EVAL, 0, __VA_ARGS__))
#define getEvalsOf11(...) EXPAND(REPEAT11(EVAL, 0, __VA_ARGS__))
#define getEvalsOf12(...) EXPAND(REPEAT12(EVAL, 0, __VA_ARGS__))
#define getEvalsOf13(...) EXPAND(REPEAT13(EVAL, 0, __VA_ARGS__))
#define getEvalsOf14(...) EXPAND(REPEAT14(EVAL, 0, __VA_ARGS__))
#define getEvalsOf15(...) EXPAND(REPEAT15(EVAL, 0, __VA_ARGS__))
#define getEvalsOf16(...) EXPAND(REPEAT16(EVAL, 0, __VA_ARGS__))
#define getEvalsOf17(...) EXPAND(REPEAT17(EVAL, 0, __VA_ARGS__))
#define getEvalsOf18(...) EXPAND(REPEAT18(EVAL, 0, __VA_ARGS__))
#define getEvalsOf19(...) EXPAND(REPEAT19(EVAL, 0, __VA_ARGS__))
#define getEvalsOf20(...) EXPAND(REPEAT20(EVAL, 0, __VA_ARGS__))


#define setInterfaceTypesOf(Id, Class, Function, Const, Count, ...)                                  \
using CONCAT(ret, Id) = INVOKE(CONCAT(getReturnOf, Count), Class, Function, __VA_ARGS__);            \
using CONCAT(mem, Id) = CONCAT(ret, Id)(Class::*)(__VA_ARGS__) Const;                                \
using CONCAT(der, Id) = CONCAT(ret, Id)(D::*)(__VA_ARGS__) Const;                                    \
using CONCAT(fun, Id) = CONCAT(ret, Id)(*)(Const Class* ,##__VA_ARGS__);                             \

#define setInterfaceStaticTypesOf(Id, Class, Function, Const, Count, ...)                            \
using CONCAT(ret, Id) = INVOKE(CONCAT(getReturnOf, Count), Class, Function, __VA_ARGS__);            \
using CONCAT(mem, Id) = CONCAT(ret, Id)(*)(__VA_ARGS__);                                             \
using CONCAT(der, Id) = CONCAT(ret, Id)(*)(__VA_ARGS__);                                             \
using CONCAT(fun, Id) = CONCAT(ret, Id)(*)(__VA_ARGS__);                                             \

#define getOutoflineFunctionOf(Class, Function, Const, Count, ...)                                   \
INVOKE(CONCAT(getReturnOf, Count), Class, Function, __VA_ARGS__) Class::Function(EXPAND(CONCAT(getEvalsOf, Count)(__VA_ARGS__))) Const

#define getFunctionOf(Class, Function, Const, Count, ...)                                            \
INVOKE(CONCAT(getReturnOf, Count), Class, Function, __VA_ARGS__) Function(INVOKE(CONCAT(getEvalsOf, Count), __VA_ARGS__)) Const

#define getWrapperOf(Class, Function, Const, Count, ...)                                             \
INVOKE(CONCAT(getReturnOf, Count), Class, Function, __VA_ARGS__) Function##Wrapper(INVOKE(CONCAT(getEvalsOf, Count), __VA_ARGS__)) Const

// #define setHeaderTypesOf(Id, Class, Function, Convention, Count)                                               \
// using CONCAT(r, Id) = CONCAT(getReturnOf, Count)(Class, Function, CONCAT(getTypesOf, Count)());                  \
// using CONCAT(a, Id) = CONCAT(r, Id)(Class::*)(__VA_ARGS__);                                	   \

// #define setHeaderStaticTypesOf(Id, Class, Function, Convention, Count)                                         \
// using CONCAT(r, Id) = CONCAT(getReturnOf, Count)(Class, Function, CONCAT(getTypesOf, Count)());                  \
// using CONCAT(f, Id) = CONCAT(r, Id)(CallConv(Convention)*)(CONCAT(getTypesOf, Count)());                         \



