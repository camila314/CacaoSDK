// Copyright camden314 2021
// me toooooooooo
#ifndef __CC_DEFS_HPP__
#define __CC_DEFS_HPP__

#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <string>
#include <map>
#include <GDML/GDML.hpp>
#include <CCMenuItemSpriteExtra.h>
#include <cocos2dx/cocos2d.h>
#include <cocos2dext/cocos-ext.h>


#define GM (GameManager::sharedState())
#define LEL (GM->_editorLayer())
#define PL (GM->_playLayer())
#define GJBL (LEL ? static_cast<GJBaseGameLayer*>(LEL) : static_cast<GJBaseGameLayer*>(PL))
#define WINSIZE (CCDirector::sharedDirector()->getWinSize())

typedef void(*queuefunc)(std::string);

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

typedef struct GameModes {
    bool cube;
    bool ship;
    bool ufo;
    bool ball;
    bool wave;
    bool robot;
    bool spider;
} GameModes;

typedef struct LevelDifficulty {
    int32_t denominator;
    int32_t numerator;  
} LevelDifficulty;

#define CLASS_PARAM(__TYPE__, __GETTER__, __OFFSET__) \
    inline __TYPE__& _##__GETTER__() { \
        return *((__TYPE__*)((long)this + __OFFSET__)); \
    }

#define STRUCT_PARAM(__TYPE__, __GETTER__, __OFFSET__) \
    inline __TYPE__ _##__GETTER__() { \
        return *(__TYPE__*)((long)this+__OFFSET__); \
    }

int xCompSpeed(void const*, void const*);
int xCompRealPos(void const*, void const*);


class GDObj { 
public:

    void* valOffset(long offset);
    void setValOffset(long offset, void* setter);
    template <typename T>
    T& __member(long offset) {
        return *reinterpret_cast<T*>(valOffset(offset));
    }
};


enum GameObjectType {};
enum PulseEffectType {};
enum TouchTriggerType {};
enum PlayerButton {};
enum GhostType {};
enum IconType {};


