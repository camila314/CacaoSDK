// 
// Copyright camila314 & alk1m123 2021. 
//
#pragma once 

#include <Base.hpp>
#include <MacroBase.hpp>
#include <PlatformBase.hpp>

#include <Core.hpp>
#include <gdstdlib.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
// #include <Cacao.hpp>


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
