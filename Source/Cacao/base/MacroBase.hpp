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

#define NUMBER_OF_ARGS(...) NUMBER_OF_ARGS_(__VA_ARGS__, NUMBER_SEQUENCE(),)
#define NUMBER_OF_ARGS_(...) NUMBER_OF_ARGS_N(__VA_ARGS__)
#define NUMBER_OF_ARGS_N( 					\
_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, 	\
_11,_12,_13,_14,_15,_16,_17,_18,_19,_20, 	\
_21,_22,_23,_24,_25,_26,_27,_28,_29,_30, 	\
_31,_32,_33,_34,_35,_36,_37,_38,_39,_40, 	\
_41,_42,_43,_44,_45,_46,_47,_48,_49,_50, 	\
_51,_52,_53,_54,_55,_56,_57,_58,_59,_60, 	\
_61,_62,_63,N,...) N
#define NUMBER_SEQUENCE() 					\
63, 62, 61, 60,                    			\
59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 	\
49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 	\
39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 	\
29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 	\
19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 	\
9,  8,  7,  6,  5,  4,  3,  2,  1,  0

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

#define GETREPEAT(...) CONCAT(REPEAT, NUMBER_OF_ARGS(__VA_ARGS__))
#define REPEAT0( macro, i, ...)
#define REPEAT1( macro, i, arg, ...) macro(arg, i)
#define REPEAT2( macro, i, arg, ...) macro(arg, i), REPEAT1( macro, NUMBER_AFTER(i), __VA_ARGS__)
#define REPEAT3( macro, i, arg, ...) macro(arg, i), REPEAT2( macro, NUMBER_AFTER(i), __VA_ARGS__)
#define REPEAT4( macro, i, arg, ...) macro(arg, i), REPEAT3( macro, NUMBER_AFTER(i), __VA_ARGS__)
#define REPEAT5( macro, i, arg, ...) macro(arg, i), REPEAT4( macro, NUMBER_AFTER(i), __VA_ARGS__)
#define REPEAT6( macro, i, arg, ...) macro(arg, i), REPEAT5( macro, NUMBER_AFTER(i), __VA_ARGS__)
#define REPEAT7( macro, i, arg, ...) macro(arg, i), REPEAT6( macro, NUMBER_AFTER(i), __VA_ARGS__)
#define REPEAT8( macro, i, arg, ...) macro(arg, i), REPEAT7( macro, NUMBER_AFTER(i), __VA_ARGS__)
#define REPEAT9( macro, i, arg, ...) macro(arg, i), REPEAT8( macro, NUMBER_AFTER(i), __VA_ARGS__)
#define REPEAT10(macro, i, arg, ...) macro(arg, i), REPEAT9( macro, NUMBER_AFTER(i), __VA_ARGS__)
#define REPEAT11(macro, i, arg, ...) macro(arg, i), REPEAT10(macro, NUMBER_AFTER(i), __VA_ARGS__)
#define REPEAT12(macro, i, arg, ...) macro(arg, i), REPEAT11(macro, NUMBER_AFTER(i), __VA_ARGS__)
#define REPEAT13(macro, i, arg, ...) macro(arg, i), REPEAT12(macro, NUMBER_AFTER(i), __VA_ARGS__)
#define REPEAT14(macro, i, arg, ...) macro(arg, i), REPEAT13(macro, NUMBER_AFTER(i), __VA_ARGS__)
#define REPEAT15(macro, i, arg, ...) macro(arg, i), REPEAT14(macro, NUMBER_AFTER(i), __VA_ARGS__)
#define REPEAT16(macro, i, arg, ...) macro(arg, i), REPEAT15(macro, NUMBER_AFTER(i), __VA_ARGS__)
#define REPEAT17(macro, i, arg, ...) macro(arg, i), REPEAT16(macro, NUMBER_AFTER(i), __VA_ARGS__)
#define REPEAT18(macro, i, arg, ...) macro(arg, i), REPEAT17(macro, NUMBER_AFTER(i), __VA_ARGS__)
#define REPEAT19(macro, i, arg, ...) macro(arg, i), REPEAT18(macro, NUMBER_AFTER(i), __VA_ARGS__)
#define REPEAT20(macro, i, arg, ...) macro(arg, i), REPEAT19(macro, NUMBER_AFTER(i), __VA_ARGS__)



#define getReturnOf0( Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT0( DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf1( Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT1( DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf2( Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT2( DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf3( Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT3( DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf4( Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT4( DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf5( Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT5( DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf6( Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT6( DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf7( Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT7( DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf8( Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT8( DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf9( Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT9( DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf10(Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT10(DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf11(Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT11(DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf12(Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT12(DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf13(Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT13(DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf14(Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT14(DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf15(Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT15(DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf16(Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT16(DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf17(Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT17(DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf18(Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT18(DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf19(Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT19(DECLVAL, 0, __VA_ARGS__)))
#define getReturnOf20(Class, Function, ...) decltype(std::declval<Class>().Function(REPEAT20(DECLVAL, 0, __VA_ARGS__)))

#define getEvalsOf0(... ) REPEAT0( EVAL, 0, __VA_ARGS__)
#define getEvalsOf1(... ) REPEAT1( EVAL, 0, __VA_ARGS__)
#define getEvalsOf2(... ) REPEAT2( EVAL, 0, __VA_ARGS__)
#define getEvalsOf3(... ) REPEAT3( EVAL, 0, __VA_ARGS__)
#define getEvalsOf4(... ) REPEAT4( EVAL, 0, __VA_ARGS__)
#define getEvalsOf5(... ) REPEAT5( EVAL, 0, __VA_ARGS__)
#define getEvalsOf6(... ) REPEAT6( EVAL, 0, __VA_ARGS__)
#define getEvalsOf7(... ) REPEAT7( EVAL, 0, __VA_ARGS__)
#define getEvalsOf8(... ) REPEAT8( EVAL, 0, __VA_ARGS__)
#define getEvalsOf9(... ) REPEAT9( EVAL, 0, __VA_ARGS__)
#define getEvalsOf10(...) REPEAT10(EVAL, 0, __VA_ARGS__)
#define getEvalsOf11(...) REPEAT11(EVAL, 0, __VA_ARGS__)
#define getEvalsOf12(...) REPEAT12(EVAL, 0, __VA_ARGS__)
#define getEvalsOf13(...) REPEAT13(EVAL, 0, __VA_ARGS__)
#define getEvalsOf14(...) REPEAT14(EVAL, 0, __VA_ARGS__)
#define getEvalsOf15(...) REPEAT15(EVAL, 0, __VA_ARGS__)
#define getEvalsOf16(...) REPEAT16(EVAL, 0, __VA_ARGS__)
#define getEvalsOf17(...) REPEAT17(EVAL, 0, __VA_ARGS__)
#define getEvalsOf18(...) REPEAT18(EVAL, 0, __VA_ARGS__)
#define getEvalsOf19(...) REPEAT19(EVAL, 0, __VA_ARGS__)
#define getEvalsOf20(...) REPEAT20(EVAL, 0, __VA_ARGS__)


#define setInterfaceTypesOf(Id, Class, Function, Const, Count, ...)                                  \
using CONCAT(ret, Id) = CONCAT(getReturnOf, Count)(Class, Function, __VA_ARGS__);                    \
using CONCAT(mem, Id) = CONCAT(ret, Id)(Class::*)(__VA_ARGS__) Const;                                \
using CONCAT(der, Id) = CONCAT(ret, Id)(D::*)(__VA_ARGS__) Const;                                    \
using CONCAT(fun, Id) = CONCAT(ret, Id)(*)(Const Class* ,##__VA_ARGS__);                             \

#define setInterfaceStaticTypesOf(Id, Class, Function, Const, Count, ...)                            \
using CONCAT(ret, Id) = CONCAT(getReturnOf, Count)(Class, Function, __VA_ARGS__);                    \
using CONCAT(mem, Id) = CONCAT(ret, Id)(*)(__VA_ARGS__);                                             \
using CONCAT(der, Id) = CONCAT(ret, Id)(*)(__VA_ARGS__);                                             \
using CONCAT(fun, Id) = CONCAT(ret, Id)(*)(__VA_ARGS__);                                             \

#define getOutoflineFunctionOf(Class, Function, Const, Count, ...)             \
CONCAT(getReturnOf, Count)(Class, Function, __VA_ARGS__) Class::Function(CONCAT(getEvalsOf, Count)(__VA_ARGS__)) Const

#define getFunctionOf(Class, Function, Const, Count, ...)             \
CONCAT(getReturnOf, Count)(Class, Function, __VA_ARGS__) Function(CONCAT(getEvalsOf, Count)(__VA_ARGS__)) Const

#define getWrapperOf(Class, Function, Const, Count, ...)             \
CONCAT(getReturnOf, Count)(Class, Function, __VA_ARGS__) Function##Wrapper(CONCAT(getEvalsOf, Count)(__VA_ARGS__)) Const

// #define setHeaderTypesOf(Id, Class, Function, Convention, Count)                                               \
// using CONCAT(r, Id) = CONCAT(getReturnOf, Count)(Class, Function, CONCAT(getTypesOf, Count)());                  \
// using CONCAT(a, Id) = CONCAT(r, Id)(Class::*)(__VA_ARGS__);                                	   \

// #define setHeaderStaticTypesOf(Id, Class, Function, Convention, Count)                                         \
// using CONCAT(r, Id) = CONCAT(getReturnOf, Count)(Class, Function, CONCAT(getTypesOf, Count)());                  \
// using CONCAT(f, Id) = CONCAT(r, Id)(CallConv(Convention)*)(CONCAT(getTypesOf, Count)());                         \



