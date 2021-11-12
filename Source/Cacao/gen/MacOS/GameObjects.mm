class GameObject : CCSpritePlus {
    virtual ~GameObject() = 0x2f4ca0;
    virtual void update(float) = 0x2fbb90;
    virtual void setScaleX(float) = 0x335b00;
    virtual void setScaleY(float) = 0x335b90;
    virtual void setScale(float) = 0x335c20;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x335850;
    virtual void setVisible(bool) = 0x336280;
    virtual void setRotation(float) = 0x335970;
    virtual void setOpacity(unsigned char) = 0x335f10;
    virtual bool initWithTexture(cocos2d::CCTexture2D*) = 0x2f56a0;
    virtual void setChildColor(cocos2d::_ccColor3B const&) = 0x341f20;
    virtual void setFlipX(bool) = 0x335a60;
    virtual void setFlipY(bool) = 0x335ab0;
    virtual void customSetup() = 0x2fbba0;
    virtual void setupCustomSprites() = 0x307f60;
    virtual void addMainSpriteToParent(bool) = 0x33a5b0;
    virtual void resetObject() = 0x2fa620;
    virtual void triggerObject(GJBaseGameLayer*) = 0x2fa8f0;
    virtual void activateObject() = 0x2faf60;
    virtual void deactivateObject(bool) = 0x2fb8f0;
    virtual cocos2d::CCRect* getObjectRect() = 0x3352b0;
    virtual cocos2d::CCRect* getObjectRect(float, float) = 0x3352d0;
    virtual cocos2d::CCRect* getObjectRect2(float, float) = 0x3354e0;
    virtual cocos2d::CCRect* getObjectTextureRect() = 0x3355b0;
    virtual void getRealPosition() = 0x335750;
    virtual void setStartPos(cocos2d::CCPoint) = 0x2fa520;
    virtual void updateStartValues() = 0x2fa800;
    virtual gd::string getSaveString() = 0x33d3d0;
    virtual void isFlipX() = 0x335a40;
    virtual void isFlipY() = 0x335a50;
    virtual void setRScaleX(float) = 0x335cb0;
    virtual void setRScaleY(float) = 0x335d60;
    virtual void setRScale(float) = 0x335e10;
    virtual void getRScaleX() = 0x335e50;
    virtual void getRScaleY() = 0x335e80;
    virtual void calculateSpawnXPos() = 0x336970;
    virtual void triggerActivated(float) = 0x336990;
    virtual void powerOnObject() = 0x3369a0;
    virtual void powerOffObject() = 0x3369c0;
    virtual void setObjectColor(cocos2d::_ccColor3B const&) = 0x341c90;
    virtual void setGlowColor(cocos2d::_ccColor3B const&) = 0x341ed0;
    virtual void getOrientedBox() = 0x342ad0;
    virtual void addToGroup(int) = 0x33ad00;
    virtual void removeFromGroup(int) = 0x33ada0;
    virtual void spawnXPosition() = 0xdc1b0;
    virtual void getObjectRectDirty() const = 0xdc1d0;
    virtual void setObjectRectDirty(bool) = 0xdc1e0;
    virtual void getOrientedRectDirty() const = 0xdc1f0;
    virtual void setOrientedRectDirty(bool) = 0xdc200;
    virtual void getType() const = 0xdc210;
    virtual void setType(GameObjectType) = 0xdc220;
    virtual void getStartPos() const = 0xdc230;

    void activatedByPlayer(GameObject*) = 0x342a20;
    void addColorSprite() = 0x2f7fe0;
    void addColorSpriteToParent(bool) = 0x2fb470;
    void addToTempOffset(float, float) = 0x335700;
    void calculateOrientedBox() = 0x342b20;
    void canChangeCustomColor() = 0x342db0;
    void colorForMode(int, bool) = 0x343460;
    void commonSetup() = 0x2f5570;
    void copyGroups(GameObject*) = 0x33ae30;
    static GameObject* createWithFrame(char const*) = 0x2f5490;
    static GameObject* createWithKey(int) = 0x2f4ce0;
    void destroyObject() = 0x336a00;
    void determineSlopeDirection() = 0x33a9e0;
    void getActiveColorForMode(int, bool) = 0x343860;
    void getBallFrame(int) = 0x341bf0;
    void getBoxOffset() = 0x3353d0;
    const cocos2d::_ccColor3B& getColorIndex() = 0x343b90;
    void getDidUpdateLastPosition() = 0x343a20;
    int getGroupID(int) = 0x33ae10;
    void getLastPosition() = 0x3439d0;
    void getMainColorMode() = 0x334c30;
    void getObjectZOrder() = 0x337d70;
    void getSecondaryColorMode() = 0x341c20;
    void getSectionIdx() = 0x343a00;
    void groupWasDisabled() = 0x33b110;
    void groupWasEnabled() = 0x33b0f0;
    void hasBeenActivated() = 0x342a80;
    void hasBeenActivatedByPlayer(GameObject*) = 0x342a50;
    void hasSecondaryColor() = 0x342f80;
    void ignoreEnter() = 0x3352a0;
    void ignoreFade() = 0x335290;
    void isBasicTrigger() = 0x343d10;
    void isColorTrigger() = 0x343b40;
    void isSpawnableTrigger() = 0x343a60;
    void isSpecialObject() = 0x343c40;
    static GameObject* objectFromString(gd::string, bool) = 0x33b720;
    void playShineEffect() = 0x2fa9d0;
    void quickUpdatePosition() = 0x335790;
    void removeGlow() = 0x2f7f70;
    void resetGroupDisabled() = 0x2fa7e0;
    void saveActiveColors() = 0x33d250;
    void selectObject(cocos2d::_ccColor3B) = 0x341f90;
    void setDefaultMainColorMode(int) = 0x304fc0;
    void setDidUpdateLastPosition(bool const&) = 0x343a30;
    void setGlowOpacity(unsigned char) = 0x336200;
    void setLastPosition(cocos2d::CCPoint const&) = 0x3439e0;
    void setMainColorMode(int) = 0x342e70;
    void setSectionIdx(int const&) = 0x343a10;
    void setupCoinArt() = 0x337dd0;
    void slopeFloorTop() = 0x342800;
    void slopeWallLeft() = 0x3427e0;
    void updateCustomScale(float) = 0x335eb0;
    void updateMainColor() = 0x343340;
    void updateOrientedBox() = 0x342b50;
    void updateSecondaryColor() = 0x343740;
    void updateStartPos() = 0x2fa590;
    void updateState() = 0x3369e0;
    void updateSyncedAnimation(float) = 0x337f00;

    int m_type = 0x370;
    int m_id = 0x3c4;
    OBB2D* m_hitbox = 0x2b0;
    bool m_inEditLayer = 0x279;
    cocos2d::CCPoint m_startPos = 0x37c;
    bool m_touchTriggered = 0x378;
    bool m_spawnTriggered = 0x379;
    int m_uuid = 0x36c;
    int m_colorID = 0x3bc;
    int m_zOrder = 0x42c;
    int m_unknownType = 0x3d4;
    int m_coinID = 0x3e8;
    float m_scale = 0x3c0;
    float m_multiScaleMultiplier = 0x44c;
}

class GameObjectCopy {
    virtual ~GameObjectCopy() = 0xa3290;

    static GameObjectCopy* create(GameObject*) = 0x975a0;
    void resetObject() = 0x976a0;
}

class PlayerObject : GameObject {
    virtual ~PlayerObject() = 0x217220;
    virtual void update(float) = 0x218bf0;
    virtual void setScaleX(float) = 0x22e7f0;
    virtual void setScaleY(float) = 0x22e830;
    virtual void setScale(float) = 0x22e870;
    virtual void setPosition(cocos2d::CCPoint const&) = 0x22c8b0;
    virtual void setVisible(bool) = 0x22e8b0;
    virtual void setRotation(float) = 0x22e6e0;
    virtual void setOpacity(unsigned char) = 0x22d400;
    virtual void setColor(cocos2d::_ccColor3B const&) = 0x22cdf0;
    virtual void setFlipX(bool) = 0x22e720;
    virtual void setFlipY(bool) = 0x22e7b0;
    virtual void resetObject() = 0x223170;
    virtual void getRealPosition() = 0x22d5f0;
    virtual void getOrientedBox() = 0x22dee0;
    virtual void animationFinished(char const*) = 0x22e9d0;

    void activateStreak() = 0x21aef0;
    void addAllParticles() = 0x2189b0;
    void addToTouchedRings(GameObject*) = 0x22b800;
    void boostPlayer(float) = 0x21d6b0;
    void bumpPlayer(float, int) = 0x22d890;
    void buttonDown(PlayerButton) = 0x22b7e0;
    void checkSnapJumpToObject(GameObject*) = 0x2217f0;
    void collidedWithObject(float, GameObject*) = 0x21d880;
    void collidedWithObject(float, GameObject*, cocos2d::CCRect) = 0x21f0b0;
    void collidedWithSlope(float, GameObject*, bool) = 0x21d8d0;
    void convertToClosestRotation(float) = 0x21c860;
    void copyAttributes(PlayerObject*) = 0x22dc70;
    static PlayerObject* create(int, int, cocos2d::CCLayer*) = 0x217260;
    void deactivateParticle() = 0x21a540;
    void deactivateStreak(bool) = 0x218b30;
    void fadeOutStreak2(float) = 0x225890;
    void flashPlayer(float, float, cocos2d::_ccColor3B, cocos2d::_ccColor3B) = 0x221c80;
    void flipGravity(bool, bool) = 0x21c090;
    void flipMod() = 0x21a4c0;
    void getActiveMode() = 0x22b950;
    void getModifiedSlopeYVel() = 0x21bff0;
    void getOldPosition(float) = 0x21a830;
    void getSecondColor() = 0x22cee0;
    void gravityDown() = 0x22e930;
    void gravityUp() = 0x22e900;
    void hardFlipGravity() = 0x22b860;
    void hitGround(bool) = 0x220a30;
    void incrementJumps() = 0x21c050;
    bool init(int, int, cocos2d::CCLayer*) = 0x2172e0;
    void isBoostValid(float) = 0x21d650;
    void isFlying() = 0x21a4e0;
    void isSafeFlip(float) = 0x2209f0;
    void isSafeMode(float) = 0x2209b0;
    void isSafeSpiderFlip(float) = 0x221be0;
    void levelFlipFinished() = 0x21b060;
    void levelFlipping() = 0x21a510;
    void levelWillFlip() = 0x21b020;
    void loadFromCheckpoint(PlayerCheckpoint*) = 0x22e420;
    void lockPlayer() = 0x22d680;
    void logValues() = 0x221220;
    void modeDidChange() = 0x22bfd0;
    void placeStreakPoint() = 0x21af90;
    void playBurstEffect() = 0x21c780;
    void playDeathEffect() = 0x225930;
    void playDynamicSpiderRun() = 0x222ec0;
    void playerDestroyed(bool) = 0x2256d0;
    void playerIsFalling() = 0x21c730;
    void playerTeleported() = 0x22b840;
    void playingEndEffect() = 0x22d7e0;
    void postCollision(float) = 0x21cd10;
    void preCollision() = 0x21ccc0;
    void preSlopeCollision(float, GameObject*) = 0x21ec80;
    void propellPlayer(float) = 0x22d8e0;
    void pushButton(PlayerButton) = 0x22aa00;
    void pushDown() = 0x22dbd0;
    void pushPlayer(float) = 0x22dbb0;
    void releaseButton(PlayerButton) = 0x22b6f0;
    void removeAllParticles() = 0x218ac0;
    void removePendingCheckpoint() = 0x2237b0;
    void resetAllParticles() = 0x21adb0;
    void resetCollisionLog() = 0x21cc20;
    void resetPlayerIcon() = 0x22be00;
    void resetStateVariables() = 0x223760;
    void resetStreak() = 0x21ae10;
    void ringJump(GameObject*) = 0x22abf0;
    void runBallRotation(float) = 0x21ca10;
    void runBallRotation2() = 0x21cb10;
    void runNormalRotation() = 0x21c960;
    void runRotateAction(bool) = 0x21c570;
    void saveToCheckpoint(PlayerCheckpoint*) = 0x22e2f0;
    void setSecondColor(cocos2d::_ccColor3B const&) = 0x219610;
    void setupStreak() = 0x218720;
    void spawnCircle() = 0x225480;
    void spawnCircle2() = 0x2252a0;
    void spawnDualCircle() = 0x2255c0;
    void spawnFromPlayer(PlayerObject*) = 0x22dde0;
    void spawnPortalCircle(cocos2d::_ccColor3B, float) = 0x225350;
    void spawnScaleCircle() = 0x2251b0;
    void specialGroundHit() = 0x22dbf0;
    void speedDown() = 0x22e970;
    void speedUp() = 0x22e950;
    void spiderTestJump(bool) = 0x21b160;
    void startDashing(GameObject*) = 0x221d70;
    void stopBurstEffect() = 0x22c680;
    void stopDashing() = 0x222990;
    void stopRotation(bool) = 0x21c830;
    void storeCollision(bool, int) = 0x21cc60;
    void switchedToMode(GameObjectType) = 0x22b9a0;
    void testForMoving(float, GameObject*) = 0x21eb70;
    void toggleBirdMode(bool) = 0x224070;
    void toggleDartMode(bool) = 0x2243f0;
    void toggleFlyMode(bool) = 0x223820;
    void toggleGhostEffect(GhostType) = 0x225000;
    void togglePlayerScale(bool) = 0x224bd0;
    void toggleRobotMode(bool) = 0x223c70;
    void toggleRollMode(bool) = 0x223b20;
    void toggleSpiderMode(bool) = 0x224830;
    void toggleVisibility(bool) = 0x21abf0;
    void touchedObject(GameObject*) = 0x22e660;
    void tryPlaceCheckpoint() = 0x21a950;
    void updateCheckpointMode(bool) = 0x218980;
    void updateCheckpointTest() = 0x21a890;
    void updateCollide(bool, int) = 0x220f10;
    void updateCollideBottom(float, int) = 0x221790;
    void updateCollideTop(float, int) = 0x221c20;
    void updateDashAnimation() = 0x21a570;
    void updateDashArt() = 0x222520;
    void updateGlowColor() = 0x22cf10;
    void updateJump(float) = 0x219680;
    void updateJumpVariables() = 0x21a740;
    void updatePlayerBirdFrame(int) = 0x22bfe0;
    void updatePlayerDartFrame(int) = 0x22c260;
    void updatePlayerFrame(int) = 0x22c470;
    void updatePlayerGlow() = 0x22bc50;
    void updatePlayerRobotFrame(int) = 0x22d620;
    void updatePlayerRollFrame(int) = 0x22c6a0;
    void updatePlayerScale() = 0x22b8b0;
    void updatePlayerShipFrame(int) = 0x22ba40;
    void updatePlayerSpiderFrame(int) = 0x22d650;
    void updatePlayerSpriteExtra(gd::string) = 0x218440;
    void updateRobotAnimationSpeed() = 0x22df40;
    void updateRotation(float) = 0x2214b0;
    void updateRotation(float, float) = 0x221230;
    void updateShipRotation(float) = 0x221310;
    void updateShipSpriteExtra(gd::string) = 0x218510;
    void updateSlopeRotation(float) = 0x221030;
    void updateSlopeYVelocity(float) = 0x22e920;
    void updateSpecial(float) = 0x21a790;
    void updateStateVariables() = 0x21a770;
    void updateTimeMod(float) = 0x2185e0;
    void usingWallLimitedMode() = 0x22df00;
    void yStartDown() = 0x22e9b0;
    void yStartUp() = 0x22e990;

    HardStreak* m_waveStreak = 0x600;
    double m_speed = 0x608;
    double m_gravity = 0x618;
    bool m_inPlayLayer = 0x62c;
    GJRobotSprite* m_robotSprite = 0x6a8;
    GJSpiderSprite* m_spiderSprite = 0x6b0;
    bool m_isHolding = 0x745;
    bool m_hasJustHeld = 0x746;
    double m_yAccel = 0x760;
    bool m_isShip = 0x770;
    bool m_isBird = 0x771;
    bool m_isBall = 0x772;
    bool m_isDart = 0x773;
    bool m_isRobot = 0x774;
    bool m_isSpider = 0x775;
    bool m_upsideDown = 0x776;
    bool m_dead = 0x777;
    bool m_onGround = 0x778;
    float m_vehicleSize = 0x77c;
    cocos2d::CCPoint m_lastPortalLocation = 0x78c;
    bool m_isSliding = 0x7a0;
    bool m_isRising = 0x7a1;
    cocos2d::CCPoint m_lastHitGround = 0x7a4;
    GameObject* m_lastPortal = 0x7b8;
    cocos2d::_ccColor3B m_pCol1 = 0x7c2;
    cocos2d::_ccColor3B m_pCol2 = 0x7c5;
    float m_xPos = 0x7c8;
    float m_yPos = 0x7cc;
}

class SimplePlayer {
    static SimplePlayer* create(int) = 0x1b6140;
    void setSecondColor(cocos2d::_ccColor3B const&) = 0x1bace0;
    void updateColors() = 0x1ba1f0;
    void updatePlayerFrame(int, IconType) = 0x1b62f0;
}

class AnimatedGameObject {
    void playAnimation(int) = 0xc93d0;
    void updateChildSpriteColor(cocos2d::_ccColor3B) = 0xc8450;
}

class CheckpointObject {
    static CheckpointObject* create() = 0x7e7d0;
    void getObject() = 0x7ef50;
}

class EffectGameObject : GameObject {
    static EffectGameObject* create(char const*) = 0xc9790;
    void getTargetColorIndex() = 0xca1f0;
    void triggerObject(GJBaseGameLayer*) = 0xc9870;

    int m_targetGroup = 0x4F8;
    bool m_activateGroup = 0x578;
    bool m_touchHoldMode = 0x579;
    int m_animationID = 0x584;
    float m_spawnDelay = 0x588;
    bool m_multiTrigger = 0x594;
    int m_targetCount = 0x598;
    int m_compareType = 0x5A0;
    int m_itemBlockBID = 0x5A8;
    int m_itemBlockID = 0x5B0;
}

class EndPortalObject : GameObject {
    static EndPortalObject* create() = 0x1da8f0;
    void updateColors(cocos2d::_ccColor3B) = 0x1dacb0;
}

class LabelGameObject : GameObject {
    bool init() = 0x2f5520;
    void setObjectColor(cocos2d::_ccColor3B const&) = 0xdbca0;
}

class UndoObject {
    virtual ~UndoObject() = 0xa2fd0;

    static UndoObject* create(GameObject*, UndoCommand) = 0x94ea0;
    static UndoObject* createWithArray(cocos2d::CCArray*, UndoCommand) = 0x96ee0;
}

class PlayerCheckpoint {
    virtual ~PlayerCheckpoint() = 0x80760;
    virtual bool init() = 0x807a0;

    static PlayerCheckpoint* create() = 0x7e8c0;
}
