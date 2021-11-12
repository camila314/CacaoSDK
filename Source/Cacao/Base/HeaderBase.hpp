// 
// Copyright camila314 & alk1m123 2021. 
//
#pragma once 

#include <iostream>
#include <Compat/gdstdlib.hpp>
#include <Core/Core.hpp>
// #include <CCMenuItemSpriteExtra.h>

#include <Base/MacroBase.hpp>
#include <Base/FunctionBase.hpp>
#include <Base/Base.hpp>
#include <cocos2dx/cocos2d.h>
#include <cocos2dext/cocos-ext.h>


#define GM (GameManager::sharedState())
#define LEL (GM->_editorLayer())
#define PL (GM->_playLayer())
#define GJBL (LEL ? static_cast<GJBaseGameLayer*>(LEL) : static_cast<GJBaseGameLayer*>(PL))
#define WINSIZE (CCDirector::sharedDirector()->getWinSize())

struct GameModes {
    bool cube;
    bool ship;
    bool ufo;
    bool ball;
    bool wave;
    bool robot;
    bool spider;
};

struct LevelDifficulty {
    int32_t denominator;
    int32_t numerator;  
};

#define CLASSPARAM(__TYPE__, __GETTER__, __OFFSET__)        \
    inline __TYPE__& _##__GETTER__() {                      \
        return *((__TYPE__*)((long)this + __OFFSET__));     \
    }

#define STRUCTPARAM(__TYPE__, __GETTER__, __OFFSET__)       \
    inline __TYPE__ _##__GETTER__() {                       \
        return *(__TYPE__*)((long)this+__OFFSET__);         \
    }

#if defined(__GNUC__) && defined(__APPLE__) 
    #define jumpDestructor(address) asm volatile(                                           \
        "pop %%rbp \n"                                                                      \
        STR(addq CONCAT($, address), %%rax\n)                                               \
        "jmpq *%%rax" : : "r" (base)                                                        \
    );                                                                                      \
    __builtin_unreachable();      

    #define endDestructor() asm volatile(                                                   \
        "pop %%rbp \n"                                                                      \
        "ret" : :                                                                           \
    );                                                                                      \
    __builtin_unreachable();                                                            

#elif defined(_MSC_VER) 
    #pragma warning( disable : 4731 ) // pop ebp warning
    #define jumpDestructor(address) __asm {                                                 \
        __asm mov esp, ebp                                                                  \
        __asm pop ebp                                                                       \
        __asm mov eax, [base]                                                               \
        __asm add eax, address                                                              \
        __asm jmp eax                                                                       \
    };                                                                                      \
    __assume(0);

    #define endDestructor() __asm {                                                         \
        __asm mov esp, ebp                                                                  \
        __asm pop ebp                                                                       \
        __asm ret                                                                           \
    };                                                                                      \
    __assume(0);

#else // ???
    #define jumpDestructor(address)

#endif



#if defined(__APPLE__) 
    #define getFunction(type, offset, ...) reinterpret_cast<type>(base+offset)(__VA_ARGS__)
#elif defined(__WIN32)

#else
    
#endif


//thanks pie
enum SearchType {
    kSearch          = 0x0,
    kMostDownloaded  = 0x1,
    kMostLiked       = 0x2,
    kTrending        = 0x3,
    kRecent          = 0x4,
    kUsersLevels     = 0x5,
    kFeatured        = 0x6,
    kMagic           = 0x7,
    kMapPacks        = 0x9,
    kAwarded         = 0xB,
    kFollowed        = 0xC,
    kFriends         = 0xD,
    kFindUsers       = 0xE,
    kHallOfFame      = 0x10,
    kMyLevels        = 0x62,
    kSavedLevels     = 0x63
};
enum GameObjectType {};
enum PulseEffectType {};
enum TouchTriggerType {};
enum PlayerButton {};
enum GhostType {};
enum IconType {};
enum BoomListType {};
enum TableViewCellEditingStyle {};
enum CCIndexPath {};
enum UserListType {};
enum GJErrorCode {};
enum AccountError {};
enum GJSongError {};
enum LikeItemType {};
enum GJStoreItem {};
enum CommentError {};
enum BackupAccountError {};
enum UpdateResponse {};
