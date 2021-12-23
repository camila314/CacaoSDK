// 
// Copyright camila314 & alk1m123 2021. 
//
#pragma once 

#include <Base.hpp>
#include <MacroBase.hpp>
#include <PlatformBase.hpp>

#include <Core.hpp>
#include <cocos2d.h>
#include <cocos-ext.h>
#include <unordered_map>
// #include <Cacao.hpp>

inline std::unordered_map<void*, bool> destructorLock;

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

// jesus fucking christ (painfully written by @hjfod)
enum GameObjectType {
	kGameObjectTypeSolid = 0,
	kGameObjectTypeHazard = 2,
	kGameObjectTypeInverseGravityPortal = 3,
	kGameObjectTypeNormalGravityPortal = 4,
	kGameObjectTypeShipPortal = 5,
	kGameObjectTypeCubePortal = 6,
	kGameObjectTypeDecoration = 7,
	kGameObjectTypeYellowJumpPad = 8,
	kGameObjectTypePinkJumpPad = 9,
	kGameObjectTypeGravityPad = 10,
	kGameObjectTypeYellowJumpRing = 11,
	kGameObjectTypePinkJumpRing = 12,
	kGameObjectTypeGravityRing = 13,
	kGameObjectTypeInverseMirrorPortal = 14,
	kGameObjectTypeNormalMirrorPortal = 15,
	kGameObjectTypeBallPortal = 16,
	kGameObjectTypeRegularSizePortal = 17,
	kGameObjectTypeMiniSizePortal = 18,
	kGameObjectTypeUfoPortal = 19,
	kGameObjectTypeModifier = 20,
	kGameObjectTypeSecretCoin = 22,
	kGameObjectTypeDualPortal = 23,
	kGameObjectTypeSoloPortal = 24,
	kGameObjectTypeSlope = 25,
	kGameObjectTypeWavePortal = 26,
	kGameObjectTypeRobotPortal = 27,
	kGameObjectTypeTeleportPortal = 28,
	kGameObjectTypeGreenRing = 29,
	kGameObjectTypeCollectible = 30,
	kGameObjectTypeUserCoin = 31,
	kGameObjectTypeDropRing = 32,
	kGameObjectTypeSpiderPortal = 33,
	kGameObjectTypeRedJumpPad = 34,
	kGameObjectTypeRedJumpRing = 35,
	kGameObjectTypeCustomRing = 36,
	kGameObjectTypeDashRing = 37,
	kGameObjectTypeGravityDashRing = 38,
	kGameObjectTypeCollisionObject = 39,
	kGameObjectTypeSpecial = 40,
};

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
