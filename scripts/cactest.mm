@interface GameObject : cocos2d::CCSpritePlus
    int getGroupID(int) = 0x33ae10, 1;
    void setPosition(CCPoint) = 0x335850, 2;
    void setStartPos(CCPoint) = 0x2fa520, 3;
    void selectObject(_ccColor3B) = 0x341f90, 4;
    void setupCoinArt() = 0x337dd0, 5;
    void destroyObject();
    void playShineEffect();
    void calculateSpawnXPos() = 0x336970, 6, 288;
    bool init(char const*) = 0x2f5520, 7;
    ~GameObject() = 0xb00b, 1;
    int type;
    int id;
    OBB2D* hitbox = 0x2b0;
    bool inEditLayer = 0x279; 
    cocos2d::CCPoint startPos = 0x37c;
@end
