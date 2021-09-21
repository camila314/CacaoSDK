// class SongInfoObject : cocos2d::CCNode {
//     int m_unknown0;
//     gd::string m_unknown1;
//     gd::string m_artist;
//     gd::string m_unknown2;
//     gd::string m_youtube;
//     gd::string m_unknown3;
//     int m_unknown4;
//     float m_unknown5;
//     unsigned short m_pad;
//     unsigned short m_metadata;
//     int m_uuid;
// }

// class GJGameLevel {
//     virtual ~GJGameLevel() = 0x2db2d0;
//     virtual void encodeWithCoder(DS_Dictionary*) = 0x2dd1c0;
//     virtual bool canEncode() = 0x2ddae0;
//     virtual bool init() = 0x2db310;

//     static GJGameLevel* create() = 0x2b83e0;
//     void getAudioFileName() = 0x2dbe70;
//     void getCoinKey(int) = 0x2ce360;
//     void getLengthKey(int) = 0x2dbba0;
//     void getNormalPercent() = 0x2b8b20;
//     void levelWasAltered() = 0x2db530;
//     void savePercentage(int, bool, int, int, bool) = 0x2db700;

//     int m_levelId = 0x130;
//     gd::string m_name = 0x138;
//     gd::string m_levelString = 0x148;
//     gd::string m_author = 0x150;
//     int m_audioTrack = 0x18c;
//     int m_songID = 0x190;
//     LevelDifficulty m_difficulty = 0x1ac;
//     bool m_lowDetail = 0x1c5;
//     int m_bestNormal = 0x214;
//     int m_bestPractice = 0x238;
//     int m_score = 0x248;
//     int m_epic = 0x24c;
//     int m_demon = 0x26c;
//     int m_stars = 0x27c;
//     OBB2D* m_hitbox = 0x2b0;
//     bool m_official = 0x324;
// }

// class LevelSettingsObject : cocos2d::CCNode {
//     virtual ~LevelSettingsObject() = 0xa5650;
//     virtual bool init() = 0xa5690;

//     static LevelSettingsObject* create() = 0x92760;
//     void objectFromDict(cocos2d::CCDictionary*) = 0xa5810;
//     static LevelSettingsObject* objectFromString(gd::string) = 0x945a0;
//     void setupColorsFromLegacyMode(cocos2d::CCDictionary*) = 0xa6a30;

//     GJGameLevel* m_level = 0x150;
//     GJEffectManager* m_effectManager = 0x120;
//     int m_fontType = 0x144;
//     bool m_is2Player = 0x132;
// }

// class UndoCommand {
// }

// class OBB2D : cocos2d::CCNode  {
//     void calculateWithCenter(cocos2d::CCPoint, float, float, float) = 0x35a9c0;
//     static OBB2D* create(cocos2d::CCPoint, float, float, float) = 0x35a890;
//     void getBoundingRect() = 0x35b2b0;
//     void overlaps(OBB2D*) = 0x35b0a0;
//     void overlaps1Way(OBB2D*) = 0x35b0d0;
// }

// class GJComment {
//     virtual ~GJComment() = 0x2dfd70;
//     virtual bool init() = 0x2dfec0;
// }
