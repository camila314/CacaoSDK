class MenuLayer : cocos2d::CCLayer, FLAlertLayerProtocol {
    virtual ~MenuLayer() = 0x1d1230;
    virtual bool init() = 0x1d14b0;
    virtual void keyBackClicked() = 0x1d3160;
    virtual void keyDown(cocos2d::enumKeyCodes) = 0x1d33d0;
    virtual void googlePlaySignedIn() = 0x1d2f30;
    virtual void FLAlert_Clicked(FLAlertLayer*, bool) = 0x1d3190;

    void onMoreGames(cocos2d::CCObject*) = 0x1d2ad0;
    void onQuit(cocos2d::CCObject*) = 0x1d2b40;
    void scene(bool) = 0x1d12d0;
}

// class PlayLayer : GJBaseGameLayer, CCCircleWaveDelegate {
//     void addCircle(CCCircleWave*) = 0x7e0f0;
//     void addObject(GameObject*) = 0x70e50;
//     void addToGroupOld(GameObject*) = 0x77680;
//     void addToSpeedObjects(GameObject*) = 0x7cfc0;
//     void animateInDualGround(GameObject*, float, bool) = 0x7d710;
//     void animateInGround(bool) = 0x7d9d0;
//     void animateOutGround(bool) = 0x6f350;
//     void animateOutGroundFinished() = 0x7de80;
//     void applyEnterEffect(GameObject*) = 0x7c310;
//     virtual void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*) = 0x7aa10;
//     void cameraMoveX(float, float, float) = 0x7cbe0;
//     void cameraMoveY(float, float, float) = 0x7cc60;
//     void checkCollisions(PlayerObject*, float) = 0x78c90;
//     void circleWaveWillBeRemoved(CCCircleWave*) = 0x7e110;
//     void claimParticle(gd::string) = 0x76ba0;
//     void clearPickedUpItems() = 0x7cfa0;
//     void colorObject(int, cocos2d::_ccColor3B) = 0x77810;
//     void commitJumps() = 0x737e0;
//     static PlayLayer* create(GJGameLevel*) = 0x6b590;
//     void createCheckpoint() = 0x7e470;
//     void createObjectsFromSetup(gd::string) = 0x6d130;
//     void createParticle(int, char const*, int, cocos2d::tCCPositionType) = 0x76800;
//     void currencyWillExit(CurrencyRewardLayer*) = 0x7e070;
//     void delayedResetLevel() = 0x7e050;
//     void destroyPlayer(PlayerObject*, GameObject*) = 0x7ab80;
//     void dialogClosed(DialogLayer*) = 0x7e0b0;
//     virtual void draw() = 0x7d160;
//     void enterDualMode(GameObject*, bool) = 0x7d6a0;
//     void exitAirMode() = 0x7dd40;
//     void exitBirdMode(PlayerObject*) = 0x7dd80;
//     void exitDartMode(PlayerObject*) = 0x7ddd0;
//     void exitFlyMode(PlayerObject*) = 0x7dcf0;
//     void exitRobotMode(PlayerObject*) = 0x7de20;
//     void exitRollMode(PlayerObject*) = 0x7de60;
//     void exitSpiderMode(PlayerObject*) = 0x7de40;
//     void flipFinished() = 0x7e150;
//     virtual void flipGravity(PlayerObject*, bool, bool) = 0x7cd10;
//     void flipObjects() = 0x76130;
//     void fullReset() = 0x7f8e0;
//     void getLastCheckpoint() = 0x7f840;
//     void getMaxPortalY() = 0x7b4e0;
//     void getMinPortalY() = 0x7b550;
//     void getObjectsState() = 0x7e9d0;
//     void getOtherPlayer(PlayerObject*) = 0x7dcc0;
//     void getParticleKey(int, char const*, int, cocos2d::tCCPositionType) = 0x764d0;
//     void getParticleKey2(gd::string) = 0x767b0;
//     void getRelativeMod(cocos2d::CCPoint, float, float, float) = 0x7c2a0;
//     void getTempMilliTime() = 0x778e0;
//     void gravityEffectFinished() = 0x7cec0;
//     void hasItem(int) = 0x7cee0;
//     void hasUniqueCoin(GameObject*) = 0x77510;
//     void incrementJumps() = 0x7ff40;
//     bool init(GJGameLevel*) = 0x6b5f0;
//     void isFlipping() = 0x76100;
//     void levelComplete() = 0x72b80;
//     void lightningFlash(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, int, bool, float) = 0x75cc0;
//     void lightningFlash(cocos2d::CCPoint, cocos2d::_ccColor3B) = 0x75bf0;
//     void loadDefaultColors() = 0x6ef30;
//     void loadFromCheckpoint(CheckpointObject*) = 0x7f000;
//     void loadLastCheckpoint() = 0x7efc0;
//     void loadSavedObjectsState(gd::string) = 0x7f3d0;
//     void markCheckpoint() = 0x7ef60;
//     void moveCameraToPos(cocos2d::CCPoint) = 0x7c980;
//     virtual void onEnterTransitionDidFinish() = 0x806e0;
//     virtual void onExit() = 0x80710;
//     void onQuit() = 0x72710;
//     void optimizeColorGroups() = 0x6dad0;
//     void optimizeOpacityGroups() = 0x6dc20;
//     void optimizeSaveRequiredGroups() = 0x6dd70;
//     void pauseGame(bool) = 0x802d0;
//     void pickupItem(GameObject*) = 0x7c1d0;
//     void playAnimationCommand(int, int) = 0x75930;
//     void playEndAnimationToPos(cocos2d::CCPoint) = 0x759a0;
//     void playExitDualEffect(PlayerObject*) = 0x7d1d0;
//     void playFlashEffect(float, int, float) = 0x75e50;
//     void playGravityEffect(bool) = 0x7b5a0;
//     void playSpeedParticle(float) = 0x77030;
//     void playerWillSwitchMode(PlayerObject*, GameObject*) = 0x7b820;
//     void prepareSpawnObjects() = 0x7fc00;
//     void processItems() = 0x735c0;
//     void processLoadedMoveActions() = 0x7a7c0;
//     void recordAction(bool, PlayerObject*) = 0x7e190;
//     void registerActiveObject(GameObject*) = 0x77620;
//     void registerStateObject(GameObject*) = 0x777b0;
//     void removeAllObjects() = 0x727b0;
//     void removeFromGroupOld(GameObject*) = 0x77750;
//     void removeLastCheckpoint() = 0x7f870;
//     void removePlayer2() = 0x7d630;
//     void resetLevel() = 0x71c50;
//     void resume() = 0x80480;
//     void resumeAndRestart() = 0x80400;
//     void saveRecordAction(bool, PlayerObject*) = 0x78750;
//     void scene(GJGameLevel*) = 0x6b500;
//     void setupLevelStart(LevelSettingsObject*) = 0x6f560;
//     void setupReplay(gd::string) = 0x7e1e0;
//     void shakeCamera(float, float, float) = 0x744a0;
//     void shouldBlend(int) = 0x771b0;
//     void showCompleteEffect() = 0x738e0;
//     void showCompleteText() = 0x73be0;
//     void showEndLayer() = 0x74450;
//     void showHint() = 0x7deb0;
//     void showNewBest(bool, int, int, bool, bool, bool) = 0x74580;
//     void showRetryLayer() = 0x75ba0;
//     void showTwoPlayerGuide() = 0x6df00;
//     void sortGroups() = 0x6d9e0;
//     void spawnCircle() = 0x73820;
//     void spawnFirework() = 0x74200;
//     void spawnParticle(char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint) = 0x76330;
//     void spawnPlayer2() = 0x7d170;
//     void startGame() = 0x726b0;
//     void startMusic() = 0x72910;
//     void startRecording() = 0x7fec0;
//     void startRecordingDelayed() = 0x7fed0;
//     void stopCameraShake() = 0x75900;
//     void stopRecording() = 0x6d090;
//     void storeCheckpoint(CheckpointObject*) = 0x7ef10;
//     void switchToFlyMode(PlayerObject*, GameObject*, bool, int) = 0x7baf0;
//     void switchToRobotMode(PlayerObject*, GameObject*, bool) = 0x7bc80;
//     void switchToRollMode(PlayerObject*, GameObject*, bool) = 0x7bbe0;
//     void switchToSpiderMode(PlayerObject*, GameObject*, bool) = 0x7bd20;
//     void timeForXPos(float) = 0x7d120;
//     void timeForXPos2(float, bool) = 0x293eb0;
//     void toggleBGEffectVisibility(bool) = 0x7fe80;
//     void toggleDualMode(GameObject*, bool, PlayerObject*, bool) = 0x7bf90;
//     void toggleFlipped(bool, bool) = 0x7bdc0;
//     void toggleGhostEffect(int) = 0x7fe40;
//     void toggleGlitter(bool) = 0x70e00;
//     void togglePracticeMode(bool) = 0x7f9e0;
//     void toggleProgressbar() = 0x6eeb0;
//     void tryStartRecord() = 0x7fe00;
//     void unclaimParticle(char const*, cocos2d::CCParticleSystemQuad*) = 0x76e00;
//     void unregisterActiveObject(GameObject*) = 0x77660;
//     void unregisterStateObject(GameObject*) = 0x777f0;
//     virtual void update(float) = 0x77900;
//     void updateAttempts() = 0x7fcd0;
//     void updateCamera(float) = 0x6e2b0;
//     virtual void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*) = 0x7c7f0;
//     void updateDualGround(PlayerObject*, int, bool) = 0x7caa0;
//     void updateEffectPositions() = 0x7a6d0;
//     void updateLevelColors() = 0x6f1e0;
//     void updateMoveObjectsLastPosition() = 0x7a720;
//     void updateProgressbar() = 0x6ed70;
//     void updateReplay(float) = 0x78b60;
//     void updateTimeMod(float, bool) = 0x786f0;
//     virtual void updateTweenAction(float, char const*) = 0x7ffb0;
//     void updateVisibility() = 0x6fb90;
//     void vfDChk() = 0x7fcb0;
//     virtual void visit() = 0x75ef0;
//     void visitWithColorFlash() = 0x761f0;
//     void willSwitchToMode(int, PlayerObject*) = 0x7b9e0;
//     void xPosForTime(float) = 0x7d140;
//     ~PlayLayer() = 0x6b090;

//     bool m_gameStarted = 0x4dc;
//     EndPortalObject* m_endPortal = 0x530;
//     float m_length = 0x5f8;
//     float m_trueLength = 0x5fc;
//     GJGameLevel* m_level = 0x728;
//     int m_attempt = 0x754;
//     bool m_testMode = 0x738;
//     bool m_practiceMode = 0x739;
//     float m_time = 0x760;
//     GameModes m_gameModes = 0x76f;
// }

// class LevelEditorLayer : GJBaseGameLayer {
//     virtual ~LevelEditorLayer() = 0x90e80;
//     virtual void update(float) = 0xa1b70;
//     virtual void draw() = 0xa2a70;
//     virtual void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*) = 0x9c200;
//     virtual void flipGravity(PlayerObject*, bool, bool) = 0xa04e0;
//     virtual void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*) = 0x9c590;
//     virtual void addToGroup(GameObject*, int, bool) = 0x9dab0;
//     virtual void removeFromGroup(GameObject*, int) = 0x9db60;
//     virtual void timeForXPos(float) = 0x9c7d0;
//     virtual void xPosForTime(float) = 0x9c800;
//     virtual void levelSettingsUpdated() = 0x93f30;

//     void activateTriggerEffect(EffectGameObject*, float, float, float) = 0x9b520;
//     GameObject* addObjectFromString(gd::string) = 0x94640;
//     void addSpecial(GameObject*) = 0x94f30;
//     void addToRedoList(UndoObject*) = 0x96f80;
//     void addToUndoList(UndoObject*, bool) = 0x94e20;
//     void animateInDualGround(GameObject*, float, bool) = 0xa2780;
//     void checkCollisions(PlayerObject*, float) = 0x9e620;
//     static LevelEditorLayer* create(GJGameLevel*) = 0x90fb0;
//     void createBackground() = 0x929f0;
//     void createGroundLayer() = 0x92840;
//     GameObject* createObject(int, cocos2d::CCPoint, bool) = 0x957c0;
//     void createObjectsFromSetup(gd::string) = 0x92230;
//     void createObjectsFromString(gd::string, bool) = 0x94730;
//     void getLastObjectX() = 0x9c860;
//     void getLevelString() = 0x97790;
//     void getNextColorChannel() = 0x9a610;
//     void getNextFreeBlockID(cocos2d::CCArray*) = 0x9a4e0;
//     int getNextFreeGroupID(cocos2d::CCArray*) = 0x9a1b0;
//     void getNextFreeItemID(cocos2d::CCArray*) = 0x9a390;
//     void getObjectRect(GameObject*, bool) = 0x96240;
//     void getRelativeOffset(GameObject*) = 0x96840;
//     void handleAction(bool, cocos2d::CCArray*) = 0x97020;
//     bool init(GJGameLevel*) = 0x91010;
//     void objectAtPosition(cocos2d::CCPoint) = 0x960c0;
//     void objectMoved(GameObject*) = 0x999f0;
//     void objectsInRect(cocos2d::CCRect, bool) = 0x95e60;
//     void onPlaytest() = 0xa06b0;
//     void onStopPlaytest() = 0xa1780;
//     void playMusic() = 0xa13c0;
//     void recreateGroups() = 0x9dbf0;
//     void redoLastAction() = 0x97750;
//     void removeAllObjects() = 0x93d80;
//     void removeAllObjectsOfType(int) = 0x96d40;
//     void removeObject(GameObject*, bool) = 0x96890;
//     void removeSpecial(GameObject*) = 0x969c0;
//     void resetMovingObjects() = 0x9ddc0;
//     void resetObjectVector() = 0x9c4b0;
//     void resetToggledGroups() = 0x9aa70;
//     void resetToggledGroupsAndObjects() = 0x9c3c0;
//     void resetUnusedColorChannels() = 0x9a870;
//     void rotationForSlopeNearObject(GameObject*) = 0x95cd0;
//     void runColorEffect(EffectGameObject*, int, float, float, bool) = 0x9bd30;
//     void scene(GJGameLevel*) = 0x90f20;
//     void setupLevelStart(LevelSettingsObject*) = 0xa0ca0;
//     void sortStickyGroups() = 0x92b10;
//     void stopTriggersInGroup(int, float) = 0x9c030;
//     void toggleDualMode(GameObject*, bool, PlayerObject*, bool) = 0xa0200;
//     void toggleGroupPreview(int, bool) = 0x9bea0;
//     void transferDefaultColors(GJEffectManager*, GJEffectManager*) = 0x9ab50;
//     void undoLastAction() = 0x97770;
//     void updateBGAndGColors() = 0x9b9b0;
//     void updateBlendValues() = 0x9bc60;
//     void updateDualGround(PlayerObject*, int, bool) = 0xa1a60;
//     void updateEditorMode() = 0x93b50;
//     void updateGameObjectsNew() = 0x9adc0;
//     void updateGround(float) = 0x93a60;
//     void updateGroundWidth() = 0x92af0;
//     void updateOptions() = 0x91ed0;
//     void updateToggledGroups() = 0x9bb10;
//     void updateVisibility(float) = 0x92c70;

//     cocos2d::CCArray* m_objects = 0x3a0;
//     EditorUI* m_editorUI = 0x5d8;
// }

// class EditorUI : cocos2d::CCLayer {
//     void constrainGameLayerPosition() = 0x1c6d0;
//     void create(LevelEditorLayer*) = 0x8a80;
//     void deselectAll() = 0x1f300;
//     void onDeselectAll(cocos2d::CCObject*) = 0x19cd0;
//     void disableButton(CreateMenuItem*) = 0x1c0f0;
//     void editButtonUsable() = 0x28f30;
//     void editObject(cocos2d::CCObject*) = 0x195a0;
//     void enableButton(CreateMenuItem*) = 0x1bff0;
//     CCMenuItemSpriteExtra* getCreateBtn(int, int) = 0x1f6c0;
//     void getGroupCenter(cocos2d::CCArray*, bool) = 0x23470;
//     cocos2d::CCArray* getSelectedObjects() = 0x23f30;
//     void init(LevelEditorLayer*) = 0x8ae0;
//     virtual void keyDown(cocos2d::enumKeyCodes) = 0x30790;
//     void moveObject(GameObject*, cocos2d::CCPoint) = 0x24b10;
//     void onDuplicate(cocos2d::CCObject*) = 0x18ba0;
//     void pasteObjects(gd::string) = 0x232d0;
//     void playerTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2ebf0;
//     void playtestStopped() = 0x24790;
//     void redoLastAction(cocos2d::CCObject*) = 0xb8e0;
//     void replaceGroupID(GameObject*, int, int) = 0x27470;
//     void scaleChanged(float) = 0x25490;
//     void scaleObjects(cocos2d::CCArray*, float, cocos2d::CCPoint) = 0x252e0;
//     void selectObjects(cocos2d::CCArray*, bool) = 0x23940;
//     void setupCreateMenu() = 0xcb50;
//     void undoLastAction(cocos2d::CCObject*) = 0xb830;
//     void updateButtons() = 0x1a300;
//     void updateObjectInfoLabel() = 0x1cb10;
//     void updateSlider() = 0x18a90;
//     void updateZoom(float) = 0x248c0;

//     LevelEditorLayer* m_editorLayer = 0x408;
//     cocos2d::CCArray* m_editBars = 0x358;
//     cocos2d::CCNode* m_locationSlider = 0x228;
//     GameObject* m_lastSelectedObject = 0x440;
//     gd::string m_clipboard = 0x458;
// }