class AchievementCell {
    void loadFromDict(cocos2d::CCDictionary*) = 0x10eaa0;
}

class AchievementsLayer {
    void customSetup() = 0x1bdea0;
    void loadPage(int) = 0x1be190;
}

class AchievementManager {
    void getAllAchievements() = 0x434d60;
    void sharedState() = 0x424420;
}

class AchievementNotifier : cocos2d::CCNode {
    void sharedState() = 0x464e00;
    void willSwitchToScene(cocos2d::CCScene*) = 0x4650b0;
}
