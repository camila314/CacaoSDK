class SpawnTriggerAction : cocos2d::CCNode {
    static SpawnTriggerAction* createFromString(gd::string) = 0x17bf50;
    bool m_timerEnded;
    float m_delay;
    float m_timer;
    int m_group;
    int m_uuid;
}

class PulseEffectAction : cocos2d::CCNode {
    static PulseEffectAction* createFromString(gd::string) = 0x179e90;
    void getSaveString() = 0x17a850;
    int m_group = 0x130;
}

class ToggleTriggerAction : cocos2d::CCNode {
    static ToggleTriggerAction* createFromString(gd::string) = 0x1765e0;
}

class OpacityEffectAction : cocos2d::CCNode {
    static OpacityEffectAction* create(float, float, float, int) = 0x1789f0;
    static OpacityEffectAction* createFromString(gd::string) = 0x178c10;
    bool init(float, float, float, int) = 0x178b00;
    void step(float) = 0x178b90;

    float m_time;
    float m_beginOpacity;
    float m_endOpacity;
    bool m_finished;
    float m_elapsed;
    int m_group;
    float m_opacity;
    int m_uuid;
    float m_delta;
}

class TouchToggleAction : cocos2d::CCNode {
    static TouchToggleAction* createFromString(gd::string) = 0x177e10;
}

class CollisionTriggerAction : cocos2d::CCNode {
    static CollisionTriggerAction* createFromString(gd::string) = 0x176ee0;
}

class ColorAction : cocos2d::CCNode {
    void getSaveString() = 0x17d080;
    void setupFromDict(cocos2d::CCDictionary*) = 0x17f310;
    void setupFromString(gd::string) = 0x17f270;
    cocos2d::_ccColor3B m_color = 0x12c;
}

class ColorActionSprite : cocos2d::CCNode {
    float m_opacity;
    cocos2d::_ccColor3B m_f0124;
    cocos2d::_ccColor3B m_activeColor;
}

class ColorChannelSprite {
    void updateBlending(bool) = 0x16e1d0;
    void updateCopyLabel(int, bool) = 0x16ded0;
    void updateOpacity(float) = 0x16e080;
    void updateValues(ColorAction*) = 0x16e2e0;
}

class CountTriggerAction : cocos2d::CCNode {
    static CountTriggerAction* createFromString(gd::string) = 0x1754f0;

    int m_previousCount;
    int m_targetCount;
    int m_targetID;
    bool m_activateGroup;
    bool m_multiActivate = 0x138;
}
