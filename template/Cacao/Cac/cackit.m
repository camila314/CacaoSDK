@interface AnimatedGameObject
    void playAnimation(int) = 0xc93d0;
    void updateChildSpriteColor(cocos2d::_ccColor3B) = 0xc8450;
@end

@interface AppDelegate
    void bgScale() = 0x3aaab0;
    void get() = 0x3aab10;
@end

@interface AudioEffectsLayer
    void audioStep(float) = 0x271f40;
    void create(std::string) = 0x271a00;
    void resetAudioVars() = 0x271ee0;
@end

@interface ButtonSprite
    void create(char const*) = 0x4fa10;
    void create(char const*, int, int, float, bool) = 0x4fa40;
    void updateBGImage(char const*) = 0x502d0;
@end

@interface CCAnimatedSprite
    void runAnimation(std::string) = 0x1a6430;
    void tweenToAnimation(std::string, float) = 0x1a65b0;
@end

@interface CCCircleWave
    void create(float, float, float, bool) = 0xbd270;
    void create(float, float, float, bool, bool) = 0xbd290;
    void followObject(cocos2d::CCNode*, bool) = 0xbd670;
    void updatePosition(float) = 0xbd630;
@end

@interface CCLightFlash
    void create() = 0x295870;
    void playEffect(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float) = 0x295900;
@end

@interface CCMenuItemSpriteExtra
    void create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, Cacao::CC_SEL) = 0x1253c0;
    void setSizeMult(float) = 0x1255e0;
@end

@interface CCMenuItemToggler
    void create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, Cacao::CC_SEL) = 0x38400;
    void setSizeMult(float) = 0x38a40;
    void toggle(bool) = 0x38950;
@end

@interface CCMoveCNode
    void create() = 0x1842a0;
    void init() = 0x18b3d0;
@end

@interface CCNodeContainer
    void create() = 0xb1090;
    void init() = 0xba950;
    void visit() = 0xba960;
@end

@interface CCSpritePlus
    void initWithSpriteFrameName(char const*) = 0x248670;
@end

@interface CCTextInputNode
    void create(float, float, char const*, char const*, int, char const*) = 0x5cfb0;
    void getString() = 0x5d6f0;
    void refreshLabel() = 0x5d730;
    void setAllowedChars(std::string) = 0x5d360;
    void setLabelPlaceholderColor(cocos2d::_ccColor3B) = 0x5da90;
    void setLabelPlaceholderScale(float) = 0x5da70;
    void setMaxLabelScale(float) = 0x5da30;
    void setMaxLabelWidth(float) = 0x5da50;
    void setString(std::string) = 0x5d3e0;
    void updateLabel(std::string) = 0x5d4a0;
@end

@interface CheckpointObject
    void create() = 0x7e7d0;
    void getObject() = 0x7ef50;
@end

@interface CollisionBlockPopup
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x130010;
    void onNextItemID(cocos2d::CCObject*) = 0x130e60;
@end

@interface CollisionTriggerAction
    void createFromString(std::string) = 0x176ee0;
@end

@interface ColorAction
    void getSaveString() = 0x17d080;
    void setupFromDict(cocos2d::CCDictionary*) = 0x17f310;
    void setupFromString(std::string) = 0x17f270;
@end

@interface ColorChannelSprite
    void updateBlending(bool) = 0x16e1d0;
    void updateCopyLabel(int, bool) = 0x16ded0;
    void updateOpacity(float) = 0x16e080;
    void updateValues(ColorAction*) = 0x16e2e0;
@end

@interface ColorSelectPopup
    void colorValueChanged(cocos2d::_ccColor3B) = 0x423320;
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x41eb70;
    void init(EffectGameObject*, cocos2d::CCArray*, ColorAction*) = 0x41ee70;
    void onDefault(cocos2d::CCObject*) = 0x4220e0;
    void onMultiTrigger(cocos2d::CCObject*) = 0x422680;
    void onPlayerColor1(cocos2d::CCObject*) = 0x422500;
    void onPlayerColor2(cocos2d::CCObject*) = 0x4225c0;
    void onSpawnedByTrigger(cocos2d::CCObject*) = 0x4227f0;
    void onToggleHSVMode(cocos2d::CCObject*) = 0x4227b0;
    void onTouchTriggered(cocos2d::CCObject*) = 0x4228b0;
    void show() = 0x423570;
    void sliderChanged(cocos2d::CCObject*) = 0x421ca0;
    void updateCopyColor() = 0x423b70;
    void updateCopyColorTextInputLabel() = 0x422ed0;
    void updateDurLabel() = 0x421eb0;
    void updateHSVMode() = 0x422e00;
    void updateOpacityLabel() = 0x422000;
    void updateTouchTriggered() = 0x423020;
@end

@interface CountTriggerAction
    void createFromString(std::string) = 0x1754f0;
@end

@interface CreateMenuItem
    void create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, Cacao::CC_SEL) = 0x1c580;
@end

@interface CreatorLayer
    void onMyLevels(cocos2d::CCObject*) = 0x142b70;
    void onSavedLevels(cocos2d::CCObject*) = 0x142860;
@end

@interface CustomizeObjectLayer
    void colorSelectClosed(cocos2d::CCNode*) = 0xe1050;
    void create(GameObject*, cocos2d::CCArray*) = 0xdd340;
    void init(GameObject*, cocos2d::CCArray*) = 0xdd560;
    void textChanged(CCTextInputNode*) = 0xe1470;
    void textInputClosed(CCTextInputNode*) = 0xe1430;
@end

@interface DelayedSpawnNode
    void create() = 0x9b360;
@end

@interface DialogLayer
    void create(DialogObject*, int) = 0x2047c0;
@end

@interface DialogObject
    void create(std::string, std::string, int, float, bool, cocos2d::_ccColor3B) = 0x204410;
@end

@interface DrawGridLayer
    void addPlayer2Point(cocos2d::CCPoint, bool) = 0xa25b0;
    void addPlayerPoint(cocos2d::CCPoint) = 0xa39c0;
    void addToSpeedObjects(GameObject*) = 0x99900;
    void create(cocos2d::CCNode*, LevelEditorLayer*) = 0x920c0;
    void draw() = 0xa3c40;
    void init(cocos2d::CCNode*, LevelEditorLayer*) = 0xa36e0;
    void timeForXPos(float) = 0x9b330;
    void update(float) = 0xa3b30;
    void updateTimeMarkers() = 0x92950;
    void xPosForTime(float) = 0x9c830;
@end

@interface EditButtonBar
    void loadFromItems(cocos2d::CCArray*, int, int, bool) = 0x351010;
@end

@interface EditorOptionsLayer
    void onButtonsPerRow(cocos2d::CCObject*) = 0x147b30;
@end

@interface EditorPauseLayer
    void create(LevelEditorLayer*) = 0x13c680;
    void saveLevel() = 0x13ebd0;
@end

@interface EditorUI
    void constrainGameLayerPosition() = 0x1c6d0;
    void create(LevelEditorLayer*) = 0x8a80;
    void deselectAll() = 0x1f300;
    void disableButton(CreateMenuItem*) = 0x1c0f0;
    void editButtonUsable() = 0x28f30;
    void editObject(cocos2d::CCObject*) = 0x195a0;
    void enableButton(CreateMenuItem*) = 0x1bff0;
    CreateMenuItem* getCreateBtn(int, int) = 0x1f6c0;
    void getGroupCenter(cocos2d::CCArray*, bool) = 0x23470;
    void getSelectedObjects() = 0x23f30;
    void init(LevelEditorLayer*) = 0x8ae0;
    void keyDown(cocos2d::enumKeyCodes) = 0x30790;
    void moveObject(GameObject*, cocos2d::CCPoint) = 0x24b10;
    void onDuplicate(cocos2d::CCObject*) = 0x18ba0;
    void pasteObjects(std::string) = 0x232d0;
    void playtestStopped() = 0x24790;
    void redoLastAction(cocos2d::CCObject*) = 0xb8e0;
    void replaceGroupID(GameObject*, int, int) = 0x27470;
    void scaleChanged(float) = 0x25490;
    void scaleObjects(cocos2d::CCArray*, float, cocos2d::CCPoint) = 0x252e0;
    void selectObjects(cocos2d::CCArray*, bool) = 0x23940;
    void setupCreateMenu() = 0xcb50;
    void undoLastAction(cocos2d::CCObject*) = 0xb830;
    void updateButtons() = 0x1a300;
    void updateObjectInfoLabel() = 0x1cb10;
    void updateSlider() = 0x18a90;
    void updateZoom(float) = 0x248c0;
@end

@interface EffectGameObject
    void create(char const*) = 0xc9790;
    void getTargetColorIndex() = 0xca1f0;
    void triggerObject(GJBaseGameLayer*) = 0xc9870;
@end

@interface EndLevelLayer
    void create() = 0x2787d0;
@end

@interface EndPortalObject
    void create() = 0x1da8f0;
    void updateColors(cocos2d::_ccColor3B) = 0x1dacb0;
@end

@interface FLAlertLayer
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25ee40;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25f020;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25ef60;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x25f0a0;
    void create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float) = 0x25e0e0;
    void create(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float) = 0x25dec0;
    void init(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float) = 0x25e1b0;
    void keyBackClicked() = 0x25ed90;
    void keyDown(cocos2d::enumKeyCodes) = 0x25ece0;
    void onEnter() = 0x25f350;
    void registerWithTouchDispatcher() = 0x25f2e0;
    void show() = 0x25f120;
@end

@interface FMODAudioEngine
    void fadeBackgroundMusic(bool, float) = 0x20fd50;
    void getBackgroundMusicVolume() = 0x2104a0;
    void isBackgroundMusicPlaying() = 0x20feb0;
    void pauseAllEffects() = 0x210420;
    void pauseBackgroundMusic() = 0x20fdd0;
    void resumeAllEffects() = 0x210440;
    void resumeBackgroundMusic() = 0x20fdf0;
    void setBackgroundMusicTime(float) = 0x20fe10;
    void sharedEngine() = 0x20ef80;
@end

@interface FollowRewardPage
    void create() = 0x22f140;
@end

@interface GJAccountManager
    void sharedState() = 0x85070;
@end

@interface GJBaseGameLayer
    void addObjectCounter(LabelGameObject*, int) = 0xb9eb0;
    void addToGroup(GameObject*, int, bool) = 0xb77f0;
    void addToGroups(GameObject*, bool) = 0xb7780;
    void addToSection(GameObject*) = 0xb7b70;
    void atlasValue(int) = 0xb21e0;
    void bumpPlayer(PlayerObject*, GameObject*) = 0xb6860;
    void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*) = 0xba9a0;
    void calculateOpacityValues(EffectGameObject*, EffectGameObject*, float, GJEffectManager*) = 0xb5be0;
    void checkSpawnObjects() = 0xb6f90;
    void collectItem(int, int) = 0xb9e20;
    void collectedObject(EffectGameObject*) = 0xb9b60;
    void createMoveCommand(cocos2d::CCPoint, int, float, int, float, bool, bool, int) = 0xb73a0;
    void createTextLayers() = 0xb5260;
    void damagingObjectsInRect(cocos2d::CCRect) = 0xb6140;
    void enableHighCapacityMode() = 0xb11e0;
    void flipGravity(PlayerObject*, bool, bool) = 0xba990;
    void getCapacityString() = 0xb2210;
    void getGroundHeightForMode(int) = 0xb6630;
    void getGroup(int) = 0xb6f20;
    void getMoveDeltaForObjects(int, int) = 0xb6db0;
    void getOptimizedGroup(int) = 0xb7940;
    void getStaticGroup(int) = 0xb79a0;
    void init() = 0xafc90;
    void isGroupDisabledForObject(GameObject*) = 0xb5cc0;
    void isGroupDisabledForObjectFull(GameObject*, cocos2d::CCArray*) = 0xb5de0;
    void loadUpToPosition(float) = 0xba680;
    void objectIntersectsCircle(GameObject*, GameObject*) = 0xb66e0;
    void objectTriggered(EffectGameObject*) = 0xb71b0;
    void objectsCollided(int, int) = 0xb6d90;
    void optimizeMoveGroups() = 0xb96c0;
    void parentForZLayer(int, bool, int) = 0xb55d0;
    void playerTouchedRing(PlayerObject*, GameObject*) = 0xb69e0;
    void processColorObject(EffectGameObject*, int, cocos2d::CCDictionary*, float, GJEffectManager*) = 0xb5a90;
    void processFollowActions() = 0xb8fd0;
    void processMoveActions() = 0xb86c0;
    void processMoveActionsStep(float) = 0xb7ea0;
    void processOpacityObject(EffectGameObject*, cocos2d::CCDictionary*, float, GJEffectManager*) = 0xb5ae0;
    void processPlayerFollowActions(float) = 0xb8b50;
    void processRotationActions() = 0xb7fd0;
    void pushButton(int, bool) = 0xb9920;
    void rectIntersectsCircle(cocos2d::CCRect, cocos2d::CCPoint, float) = 0xb6470;
    void refreshCounterLabels() = 0xb9fc0;
    void releaseButton(int, bool) = 0xb9a00;
    void removeFromGroup(GameObject*, int) = 0xb7a60;
    void removeFromGroups(GameObject*) = 0xb7a00;
    void removeObjectFromSection(GameObject*) = 0xb7e00;
    void reorderObjectSection(GameObject*) = 0xb7cb0;
    void resetGroupCounters(bool) = 0xba300;
    void resetMoveOptimizedValue() = 0xb9670;
    void sectionForPos(float) = 0xb6120;
    void setupLayers() = 0xaffe0;
    void shouldExitHackedLevel() = 0xb1100;
    void spawnGroup(int) = 0xb7050;
    void spawnGroupTriggered(int, float, int) = 0xb7020;
    void staticObjectsInRect(cocos2d::CCRect) = 0xb5f90;
    void testInstantCountTrigger(int, int, int, bool, int) = 0xb9ae0;
    void toggleGroup(int, bool) = 0xb75f0;
    void toggleGroupTriggered(int, bool) = 0xb75a0;
    void togglePlayerVisibility(bool) = 0xba910;
    void triggerMoveCommand(EffectGameObject*) = 0xb7290;
    void updateCollisionBlocks() = 0xb6a30;
    void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*) = 0xb7420;
    void updateCounters(int, int) = 0xb9bc0;
    void updateDisabledObjectsLastPos(cocos2d::CCArray*) = 0xb95b0;
    void updateLayerCapacity(std::string) = 0xb1680;
    void updateLegacyLayerCapacity(int, int, int, int) = 0xb1590;
    void updateOBB2(cocos2d::CCRect) = 0xb63f0;
    void updateQueuedLabels() = 0xb9f30;
@end

@interface GJColorSetupLayer
    void updateSpriteColors() = 0xefe50;
@end

@interface GJDropDownLayer
    void create(char const*) = 0x352530;
    void customSetup() = 0x352570;
    void disableUI() = 0x352580;
    void draw() = 0x352910;
    void enableUI() = 0x3525a0;
    void enterAnimFinished() = 0x3528a0;
    void enterLayer() = 0x3525c0;
    void exitLayer(cocos2d::CCObject*) = 0x352670;
    void hideLayer(bool) = 0x3527b0;
    void init(char const*, float) = 0x352100;
    void layerHidden() = 0x3528d0;
    void layerVisible() = 0x3528b0;
    void registerWithTouchDispatcher() = 0x3525f0;
    void showLayer(bool) = 0x3526c0;
@end

@interface GJEffectManager
    void activeColorForIndex(int) = 0x180cb0;
    void activeOpacityForIndex(int) = 0x180e10;
    void addAllInheritedColorActions(cocos2d::CCArray*) = 0x1817a0;
    void addGroupPulseEffect(PulseEffectAction*) = 0x184c10;
    void calculateBaseActiveColors() = 0x180f70;
    void calculateInheritedColor(int, ColorAction*) = 0x1818f0;
    void calculateLightBGColor(cocos2d::_ccColor3B) = 0x185b90;
    void colorActionChanged(ColorAction*) = 0x181dc0;
    void colorExists(int) = 0x181da0;
    void colorForEffect(cocos2d::_ccColor3B, cocos2d::_ccHSVValue) = 0x182650;
    cocos2d::_ccColor3B colorForGroupID(int, cocos2d::_ccColor3B const&, bool) = 0x184f90;
    void colorForIndex(int) = 0x180ad0;
    void colorForPulseEffect(cocos2d::_ccColor3B const&, PulseEffectAction*) = 0x181bf0;
    void countChangedForItem(int) = 0x185a40;
    void countForItem(int) = 0x185a10;
    void create() = 0x1800f0;
    void createFollowCommand(float, float, float, int, int, bool, int) = 0x182ed0;
    void createMoveCommand(cocos2d::CCPoint, int, float, int, float, bool, bool, int) = 0x182cc0;
    void createPlayerFollowCommand(float, float, int, float, float, int, int) = 0x182fe0;
    void createRotateCommand(int, float, int, int, int, float, bool, int) = 0x182df0;
    void getAllColorActions() = 0x180980;
    void getAllColorSprites() = 0x1809e0;
    void getColorAction(int) = 0x180b00;
    void getColorSprite(int) = 0x180d00;
    void getCurrentStateString() = 0x1867e0;
    void getLoadedMoveOffset() = 0x184390;
    void getMixedColor(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float) = 0x185d30;
    void getOpacityActionForGroup(int) = 0x1845b0;
    void getSaveString() = 0x185e90;
    void handleObjectCollision(bool, int, int) = 0x1828f0;
    void hasActiveDualTouch() = 0x185540;
    void hasBeenTriggered(int) = 0x1853b0;
    void hasPulseEffectForGroupID(int) = 0x184f60;
    bool init() = 0x180230;
    bool isGroupEnabled(int) = 0x1853d0;
    void keyForGroupIDColor(int, cocos2d::_ccColor3B const&, bool) = 0x184c90;
    void loadState(std::string) = 0x188db0;
    void objectsCollided(int, int) = 0x182a00;
    void opacityForIndex(int) = 0x180c80;
    float opacityModForGroup(int) = 0x184740;
    void playerButton(bool, bool) = 0x1855a0;
    void playerDied() = 0x185860;
    void postCollisionCheck() = 0x182720;
    void preCollisionCheck() = 0x182680;
    void prepareMoveActions(float, bool) = 0x183660;
    void processColors() = 0x180e70;
    void processCopyColorPulseActions() = 0x181530;
    void processInheritedColors() = 0x181190;
    void processPulseActions() = 0x181040;
    void registerCollisionTrigger(int, int, int, bool, bool, int) = 0x182b70;
    void removeAllPulseActions() = 0x1825e0;
    void removeColorAction(int) = 0x181d60;
    void reset() = 0x180690;
    void resetColorCache() = 0x185280;
    void resetEffects() = 0x1807d0;
    void resetMoveActions() = 0x180940;
    void resetToggledGroups() = 0x1853f0;
    void resetTriggeredIDs() = 0x182630;
    void runCountTrigger(int, int, bool, int, bool, int) = 0x1858d0;
    void runDeathTrigger(int, bool, int) = 0x1857a0;
    OpacityEffectAction* runOpacityActionOnGroup(int, float, float, int) = 0x1845d0;
    void runPulseEffect(int, bool, float, float, float, PulseEffectType, cocos2d::_ccColor3B, cocos2d::_ccHSVValue, int, bool, bool, bool, int) = 0x184890;
    void runTouchTriggerCommand(int, bool, TouchTriggerType, bool, int) = 0x185460;
    void setColorAction(ColorAction*, int) = 0x181d00;
    void setFollowing(int, int, bool) = 0x185e00;
    void setupFromString(std::string) = 0x186290;
    void shouldBlend(int) = 0x180e40;
    void spawnGroup(int, float, int) = 0x1852a0;
    void stopActionsForTrigger(EffectGameObject*) = 0x183150;
    void stopMoveActionsForGroup(int) = 0x1830e0;
    void storeTriggeredID(int) = 0x185380;
    void toggleGroup(int, bool) = 0x182c80;
    void traverseInheritanceChain(InheritanceNode*) = 0x181850;
    void updateActiveOpacityEffects() = 0x1847e0;
    void updateColorAction(ColorAction*) = 0x184560;
    void updateColorEffects(float) = 0x181f40;
    void updateColors(cocos2d::_ccColor3B, cocos2d::_ccColor3B) = 0x180a40;
    void updateEffects(float) = 0x181df0;
    void updateOpacityAction(OpacityEffectAction*) = 0x184780;
    void updateOpacityEffects(float) = 0x1823e0;
    void updatePulseEffects(float) = 0x182130;
    void updateSpawnTriggers(float) = 0x182510;
    void wasFollowing(int, int) = 0x185e60;
    void wouldCreateLoop(InheritanceNode*, int) = 0x181820;
@end

@interface GJFollowCommandLayer
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x16a550;
    void onUpdateGroupID(cocos2d::CCObject*) = 0x16c8f0;
    void onUpdateGroupID2(cocos2d::CCObject*) = 0x16c9e0;
    void textChanged(CCTextInputNode*) = 0x16d480;
    void updateTargetGroupID() = 0x16cfe0;
    void updateTargetGroupID2() = 0x16d1c0;
@end

@interface GJGameLevel
    void create() = 0x2b83e0;
    void getAudioFileName() = 0x2dbe70;
    void getCoinKey(int) = 0x2ce360;
    void getLengthKey(int) = 0x2dbba0;
    void getNormalPercent() = 0x2b8b20;
    void levelWasAltered() = 0x2db530;
    void savePercentage(int, bool, int, int, bool) = 0x2db700;
@end

@interface GJGroundLayer
    void create(int, int) = 0x355c00;
    void deactivateGround() = 0x356a40;
    void getGroundY() = 0x356ac0;
    void updateGround01Color(cocos2d::_ccColor3B) = 0x356640;
    void updateGround02Color(cocos2d::_ccColor3B) = 0x356710;
    void updateGroundPos(cocos2d::CCPoint) = 0x3566c0;
    void updateGroundWidth() = 0x356790;
@end

@interface GJMoveCommandLayer
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x36f8a0;
    void init(EffectGameObject*, cocos2d::CCArray*) = 0x36fac0;
    void keyBackClicked() = 0x374970;
    void onUpdateGroupID(cocos2d::CCObject*) = 0x373350;
    void onUpdateGroupID2(cocos2d::CCObject*) = 0x3734c0;
    void textChanged(CCTextInputNode*) = 0x374470;
    void textInputClosed(CCTextInputNode*) = 0x374430;
    void textInputReturn(CCTextInputNode*) = 0x374c10;
    void textInputShouldOffset(CCTextInputNode*, float) = 0x374b50;
    void updateEditorLabel() = 0x374110;
    void updateMoveTargetElements() = 0x373ac0;
    void updateTargetGroupID() = 0x374050;
    void updateTargetGroupID2() = 0x374230;
    void updateTextInputLabel() = 0x373680;
    void updateTextInputLabel2() = 0x373760;
    void updateValueXLabel() = 0x373840;
    void updateValueYLabel() = 0x373950;
    void valuePopupClosed(ConfigureValuePopup*, float) = 0x373c20;
@end

@interface GJPFollowCommandLayer
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x1aea20;
    void textChanged(CCTextInputNode*) = 0x1b1dc0;
    void updateTargetGroupID() = 0x1b1a60;
@end

@interface GJRobotSprite
    void create() = 0x34ac00;
    void updateColor02(cocos2d::_ccColor3B) = 0x34bbd0;
    void updateFrame(int) = 0x34bdd0;
@end

@interface GJRotateCommandLayer
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x1ba0;
    void onUpdateGroupID(cocos2d::CCObject*) = 0x4bb0;
    void onUpdateGroupID2(cocos2d::CCObject*) = 0x4ca0;
    void textChanged(CCTextInputNode*) = 0x58d0;
    void updateTargetGroupID() = 0x54b0;
    void updateTargetGroupID2() = 0x5690;
@end

@interface GJSearchObject
    void create(SearchType) = 0x2df120;
    void create(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, int, int) = 0x2dee30;
    void getPageObject(int) = 0x2df9a0;
@end

@interface GJSpecialColorSelect
    void textForColorIdx(int) = 0x383a50;
@end

@interface GJSpiderSprite
    void create() = 0x34c5b0;
@end

@interface GManager
    void save() = 0x26f300;
    void saveData(DS_Dictionary*, std::string) = 0x26f4b0;
    void saveGMTo(std::string) = 0x26f3b0;
@end

@interface GameLevelManager
    void createNewLevel() = 0x2b8180;
    void sharedState() = 0x2a8340;
@end

@interface GameManager
    void accountStatusChanged() = 0x1cdad0;
    _ccColor3B colorForIdx(int) = 0x1cbc80;
    void didExitPlayscene() = 0x1d0230;
    void doQuickSave() = 0x1d0200;
    void fadeInMusic(char const*) = 0x1c2ff0;
    void getBGTexture(int) = 0x1cca00;
    void getFontFile(int) = 0x1cc5f0;
    int getGameVariable(char const*) = 0x1cccd0;
    void getIntGameVariable(char const*) = 0x1cd1d0;
    void getUGV(char const*) = 0x1ccfa0;
    void loadDeathEffect(int) = 0x1cc690;
    void loadFont(int) = 0x1cc550;
    void reloadAll(bool, bool, bool) = 0x1d08a0;
    void reloadAllStep5() = 0x1d0b00;
    void reportPercentageForLevel(int, int, bool) = 0x1c5b00;
    int setGameVariable(char const*, bool) = 0x1cca80;
    void setIntGameVariable(char const*, int) = 0x1cd0e0;
    void setUGV(char const*, bool) = 0x1cce50;
    void sharedState() = 0x1c2b30;
@end

@interface GameObject
    void activateObject() = 0x2faf60;
    void activatedByPlayer(GameObject*) = 0x342a20;
    void addColorSprite() = 0x2f7fe0;
    void addColorSpriteToParent(bool) = 0x2fb470;
    void addMainSpriteToParent(bool) = 0x33a5b0;
    void addToGroup(int) = 0x33ad00;
    void addToTempOffset(float, float) = 0x335700;
    void calculateOrientedBox() = 0x342b20;
    void calculateSpawnXPos() = 0x336970;
    void canChangeCustomColor() = 0x342db0;
    void colorForMode(int, bool) = 0x343460;
    void commonSetup() = 0x2f5570;
    void copyGroups(GameObject*) = 0x33ae30;
    void createWithFrame(char const*) = 0x2f5490;
    void createWithKey(int) = 0x2f4ce0;
    void customSetup() = 0x2fbba0;
    void deactivateObject(bool) = 0x2fb8f0;
    void destroyObject() = 0x336a00;
    void determineSlopeDirection() = 0x33a9e0;
    void getActiveColorForMode(int, bool) = 0x343860;
    void getBallFrame(int) = 0x341bf0;
    void getBoxOffset() = 0x3353d0;
    void getColorIndex() = 0x343b90;
    void getDidUpdateLastPosition() = 0x343a20;
    int getGroupID(int) = 0x33ae10;
    void getLastPosition() = 0x3439d0;
    void getMainColorMode() = 0x334c30;
    void getObjectRect() = 0x3352b0;
    void getObjectRect(float, float) = 0x3352d0;
    void getObjectRect2(float, float) = 0x3354e0;
    void getObjectRectDirty() = 0xdc1d0;
    void getObjectTextureRect() = 0x3355b0;
    void getObjectZOrder() = 0x337d70;
    void getOrientedRectDirty() = 0xdc1f0;
    void getRScaleX() = 0x335e50;
    void getRScaleY() = 0x335e80;
    void getSaveString() = 0x33d3d0;
    void getSecondaryColorMode() = 0x341c20;
    void getSectionIdx() = 0x343a00;
    void getStartPos() = 0xdc230;
    void getType() = 0xdc210;
    void groupWasDisabled() = 0x33b110;
    void groupWasEnabled() = 0x33b0f0;
    void hasBeenActivated() = 0x342a80;
    void hasBeenActivatedByPlayer(GameObject*) = 0x342a50;
    void hasSecondaryColor() = 0x342f80;
    void ignoreEnter() = 0x3352a0;
    void ignoreFade() = 0x335290;
    void initWithTexture(cocos2d::CCTexture2D*) = 0x2f56a0;
    void isBasicTrigger() = 0x343d10;
    void isColorTrigger() = 0x343b40;
    void isFlipX() = 0x335a40;
    void isFlipY() = 0x335a50;
    void isSpawnableTrigger() = 0x343a60;
    void isSpecialObject() = 0x343c40;
    void objectFromString(std::string, bool) = 0x33b720;
    void playShineEffect() = 0x2fa9d0;
    void powerOffObject() = 0x3369c0;
    void powerOnObject() = 0x3369a0;
    void quickUpdatePosition() = 0x335790;
    void removeFromGroup(int) = 0x33ada0;
    void removeGlow() = 0x2f7f70;
    void resetGroupDisabled() = 0x2fa7e0;
    void saveActiveColors() = 0x33d250;
    void selectObject(cocos2d::_ccColor3B) = 0x341f90;
    void setChildColor(cocos2d::_ccColor3B const&) = 0x341f20;
    void setDefaultMainColorMode(int) = 0x304fc0;
    void setDidUpdateLastPosition(bool const&) = 0x343a30;
    void setGlowColor(cocos2d::_ccColor3B const&) = 0x341ed0;
    void setGlowOpacity(unsigned char) = 0x336200;
    void setLastPosition(cocos2d::CCPoint const&) = 0x3439e0;
    void setMainColorMode(int) = 0x342e70;
    void setObjectColor(cocos2d::_ccColor3B const&) = 0x341c90;
    void setObjectRectDirty(bool) = 0xdc1e0;
    void setOrientedRectDirty(bool) = 0xdc200;
    void setPosition(cocos2d::CCPoint const&) = 0x335850;
    void setRScale(float) = 0x335e10;
    void setRScaleX(float) = 0x335cb0;
    void setRScaleY(float) = 0x335d60;
    void setSectionIdx(int const&) = 0x343a10;
    void setStartPos(cocos2d::CCPoint) = 0x2fa520;
    void setType(GameObjectType) = 0xdc220;
    void setupCoinArt() = 0x337dd0;
    void setupCustomSprites() = 0x307f60;
    void slopeFloorTop() = 0x342800;
    void slopeWallLeft() = 0x3427e0;
    void spawnXPosition() = 0xdc1b0;
    void triggerActivated(float) = 0x336990;
    void triggerObject(GJBaseGameLayer*) = 0x2fa8f0;
    void updateCustomScale(float) = 0x335eb0;
    void updateMainColor() = 0x343340;
    void updateOrientedBox() = 0x342b50;
    void updateSecondaryColor() = 0x343740;
    void updateStartPos() = 0x2fa590;
    void updateStartValues() = 0x2fa800;
    void updateState() = 0x3369e0;
    void updateSyncedAnimation(float) = 0x337f00;
@end

@interface GameObjectCopy
    void create(GameObject*) = 0x975a0;
    void resetObject() = 0x976a0;
@end

@interface GameSoundManager
    void disableMetering() = 0x362d80;
    void enableMetering() = 0x362d00;
    void getMeteringValue() = 0x362db0;
    void playBackgroundMusic(std::string, bool, bool) = 0x362070;
    void playEffect(std::string, float, float, float) = 0x3623d0;
    void sharedManager() = 0x3610f0;
    void stopBackgroundMusic() = 0x362130;
@end

@interface GameStatsManager
    void awardCurrencyForLevel(GJGameLevel*) = 0x43600;
    void awardDiamondsForLevel(GJGameLevel*) = 0x43c60;
    void awardSecretKey() = 0x4b1e0;
    void getSecretCoinKey(char const*) = 0x429f0;
    void getStat(char const*) = 0x3d310;
    void hasPendingUserCoin(char const*) = 0x42730;
    void hasSecretCoin(char const*) = 0x40730;
    void hasUserCoin(char const*) = 0x427e0;
    void incrementStat(char const*) = 0x3d6d0;
    void incrementStat(char const*, int) = 0x3d6e0;
    void sharedState() = 0x38f20;
    void storePendingUserCoin(char const*) = 0x42940;
    void storeSecretCoin(char const*) = 0x42a10;
    void storeUserCoin(char const*) = 0x42890;
@end

@interface GameToolbox
    void createToggleButton(std::string, Cacao::CC_SEL, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*) = 0x28bdd0;
    void getRelativeOffset(GameObject*, cocos2d::CCPoint) = 0x28c060;
    void multipliedColorValue(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float) = 0x28cb90;
    void stringSetupToDict(std::string, char const*) = 0x28d700;
    void stringSetupToMap(std::string, char const*) = 0x28d4c0;
    void transformColor(cocos2d::_ccColor3B const&, cocos2d::_ccHSVValue) = 0x28c950;
    void transformColor(cocos2d::_ccColor3B const&, float, float, float) = 0x28c930;
@end

@interface GravityEffectSprite
    void create() = 0x6d0a0;
    void init() = 0x80b20;
    void updateSpritesColor(cocos2d::_ccColor3B) = 0x7ce30;
@end

@interface GroupCommandObject
    void create() = 0x18b460;
    void createFromString(std::string) = 0x16ece0;
    void easeToText(int) = 0x16ecb0;
    void getEasedAction(cocos2d::CCActionInterval*, int, float) = 0x16e7b0;
    void runMoveCommand(cocos2d::CCPoint, float, int, float, bool, bool) = 0x16e640;
    void runRotateCommand(float, float, int, float, bool) = 0x16e8f0;
@end

@interface HardStreak
    void addPoint(cocos2d::CCPoint) = 0x5c950;
    void reset() = 0x5c930;
    void resumeStroke() = 0x5c210;
    void stopStroke() = 0x5c8f0;
@end

@interface InfoLayer
    void loadPage(int, bool) = 0x458fb0;
    void onRefreshComments(cocos2d::CCObject*) = 0x459b60;
@end

@interface LabelGameObject
    void init() = 0x2f5520;
    void setObjectColor(cocos2d::_ccColor3B const&) = 0xdbca0;
@end

@interface LevelBrowserLayer
    void loadPage(GJSearchObject*) = 0x253650;
    void scene(GJSearchObject*) = 0x2511d0;
    void setIDPopupClosed(SetIDPopup*, int) = 0x2554f0;
@end

@interface LevelEditorLayer
    void activateTriggerEffect(EffectGameObject*, float, float, float) = 0x9b520;
    GameObject* addObjectFromString(std::string) = 0x94640;
    void addSpecial(GameObject*) = 0x94f30;
    void addToGroup(GameObject*, int, bool) = 0x9dab0;
    void addToRedoList(UndoObject*) = 0x96f80;
    void addToUndoList(UndoObject*, bool) = 0x94e20;
    void animateInDualGround(GameObject*, float, bool) = 0xa2780;
    void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*) = 0x9c590;
    void checkCollisions(PlayerObject*, float) = 0x9e620;
    void create(GJGameLevel*) = 0x90fb0;
    void createBackground() = 0x929f0;
    void createGroundLayer() = 0x92840;
    void createObject(int, cocos2d::CCPoint, bool) = 0x957c0;
    void createObjectsFromSetup(std::string) = 0x92230;
    void createObjectsFromString(std::string, bool) = 0x94730;
    void draw() = 0xa2a70;
    void flipGravity(PlayerObject*, bool, bool) = 0xa04e0;
    void getLastObjectX() = 0x9c860;
    void getLevelString() = 0x97790;
    void getNextColorChannel() = 0x9a610;
    void getNextFreeBlockID(cocos2d::CCArray*) = 0x9a4e0;
    int getNextFreeGroupID(cocos2d::CCArray*) = 0x9a1b0;
    void getNextFreeItemID(cocos2d::CCArray*) = 0x9a390;
    void getObjectRect(GameObject*, bool) = 0x96240;
    void getRelativeOffset(GameObject*) = 0x96840;
    void handleAction(bool, cocos2d::CCArray*) = 0x97020;
    void init(GJGameLevel*) = 0x91010;
    void levelSettingsUpdated() = 0x93f30;
    void objectAtPosition(cocos2d::CCPoint) = 0x960c0;
    void objectMoved(GameObject*) = 0x999f0;
    void objectsInRect(cocos2d::CCRect, bool) = 0x95e60;
    void onPlaytest() = 0xa06b0;
    void onStopPlaytest() = 0xa1780;
    void playMusic() = 0xa13c0;
    void recreateGroups() = 0x9dbf0;
    void redoLastAction() = 0x97750;
    void removeAllObjects() = 0x93d80;
    void removeAllObjectsOfType(int) = 0x96d40;
    void removeFromGroup(GameObject*, int) = 0x9db60;
    void removeObject(GameObject*, bool) = 0x96890;
    void removeSpecial(GameObject*) = 0x969c0;
    void resetMovingObjects() = 0x9ddc0;
    void resetObjectVector() = 0x9c4b0;
    void resetToggledGroups() = 0x9aa70;
    void resetToggledGroupsAndObjects() = 0x9c3c0;
    void resetUnusedColorChannels() = 0x9a870;
    void rotationForSlopeNearObject(GameObject*) = 0x95cd0;
    void runColorEffect(EffectGameObject*, int, float, float, bool) = 0x9bd30;
    void scene(GJGameLevel*) = 0x90f20;
    void setupLevelStart(LevelSettingsObject*) = 0xa0ca0;
    void sortStickyGroups() = 0x92b10;
    void stopTriggersInGroup(int, float) = 0x9c030;
    void timeForXPos(float) = 0x9c7d0;
    void toggleDualMode(GameObject*, bool, PlayerObject*, bool) = 0xa0200;
    void toggleGroupPreview(int, bool) = 0x9bea0;
    void transferDefaultColors(GJEffectManager*, GJEffectManager*) = 0x9ab50;
    void undoLastAction() = 0x97770;
    void update(float) = 0xa1b70;
    void updateBGAndGColors() = 0x9b9b0;
    void updateBlendValues() = 0x9bc60;
    void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*) = 0x9c200;
    void updateDualGround(PlayerObject*, int, bool) = 0xa1a60;
    void updateEditorMode() = 0x93b50;
    void updateGameObjectsNew() = 0x9adc0;
    void updateGround(float) = 0x93a60;
    void updateGroundWidth() = 0x92af0;
    void updateOptions() = 0x91ed0;
    void updateToggledGroups() = 0x9bb10;
    void updateVisibility(float) = 0x92c70;
    void xPosForTime(float) = 0x9c800;
@end

@interface LevelSettingsLayer
    void create(LevelSettingsObject*, LevelEditorLayer*) = 0xa7c30;
@end

@interface LevelSettingsObject
    void create() = 0x92760;
    void init() = 0xa5690;
    void objectFromDict(cocos2d::CCDictionary*) = 0xa5810;
    void objectFromString(std::string) = 0x945a0;
    void setupColorsFromLegacyMode(cocos2d::CCDictionary*) = 0xa6a30;
@end

@interface LevelTools
    void getAudioString(int) = 0x293880;
    void verifyLevelIntegrity(std::string, int) = 0x294360;
    void xPosForTime(float, cocos2d::CCArray*, int) = 0x293d90;
@end

@interface LoadingLayer
    void loadAssets() = 0x1dfb20;
@end

@interface LocalLevelManager
    void sharedState() = 0x35dd60;
@end

@interface MenuGameLayer
    void resetPlayer() = 0x28fdc0;
    void update(float) = 0x28fa70;
@end

@interface MenuLayer
    void keyBackClicked() = 0x1d3160;
    void onMoreGames(cocos2d::CCObject*) = 0x1d2ad0;
    void onQuit(cocos2d::CCObject*) = 0x1d2b40;
@end

@interface MoreVideoOptionsLayer
    void create() = 0x443c10;
    void init() = 0x444150;
@end

@interface MusicDownloadManager
    void incrementPriorityForSong(int) = 0x2ef750;
    void sharedState() = 0x2ee4c0;
@end

@interface OBB2D
    void calculateWithCenter(cocos2d::CCPoint, float, float, float) = 0x35a9c0;
    void create(cocos2d::CCPoint, float, float, float) = 0x35a890;
    void getBoundingRect() = 0x35b2b0;
    void overlaps(OBB2D*) = 0x35b0a0;
    void overlaps1Way(OBB2D*) = 0x35b0d0;
@end

@interface ObjectToolbox
    void init() = 0x3b2d80;
    c_string intKeyToFrame(int) = 0x4173b0;
    void sharedState() = 0x3b2bc0;
@end

@interface OpacityEffectAction
    OpacityEffectAction* create(float, float, float, int) = 0x1789f0;
    void createFromString(std::string) = 0x178c10;
    void init(float, float, float, int) = 0x178b00;
    void step(float) = 0x178b90;
@end

@interface PauseLayer
    void create(bool) = 0x20b1e0;
    void onEdit(cocos2d::CCObject*) = 0x20c630;
@end

@interface PlatformToolbox
    void hideCursor() = 0x27c340;
    void showCursor() = 0x27c360;
@end

@interface PlayLayer
    void addCircle(CCCircleWave*) = 0x7e0f0;
    void addObject(GameObject*) = 0x70e50;
    void addToGroupOld(GameObject*) = 0x77680;
    void addToSpeedObjects(GameObject*) = 0x7cfc0;
    void animateInDualGround(GameObject*, float, bool) = 0x7d710;
    void animateInGround(bool) = 0x7d9d0;
    void animateOutGround(bool) = 0x6f350;
    void animateOutGroundFinished() = 0x7de80;
    void applyEnterEffect(GameObject*) = 0x7c310;
    void calculateColorValues(EffectGameObject*, EffectGameObject*, int, float, ColorActionSprite*, GJEffectManager*) = 0x7aa10;
    void cameraMoveX(float, float, float) = 0x7cbe0;
    void cameraMoveY(float, float, float) = 0x7cc60;
    void checkCollisions(PlayerObject*, float) = 0x78c90;
    void circleWaveWillBeRemoved(CCCircleWave*) = 0x7e110;
    void claimParticle(std::string) = 0x76ba0;
    void clearPickedUpItems() = 0x7cfa0;
    void colorObject(int, cocos2d::_ccColor3B) = 0x77810;
    void commitJumps() = 0x737e0;
    void create(GJGameLevel*) = 0x6b590;
    void createCheckpoint() = 0x7e470;
    void createObjectsFromSetup(std::string) = 0x6d130;
    void createParticle(int, char const*, int, cocos2d::tCCPositionType) = 0x76800;
    void currencyWillExit(CurrencyRewardLayer*) = 0x7e070;
    void delayedResetLevel() = 0x7e050;
    void destroyPlayer(PlayerObject*, GameObject*) = 0x7ab80;
    void dialogClosed(DialogLayer*) = 0x7e0b0;
    void draw() = 0x7d160;
    void enterDualMode(GameObject*, bool) = 0x7d6a0;
    void exitAirMode() = 0x7dd40;
    void exitBirdMode(PlayerObject*) = 0x7dd80;
    void exitDartMode(PlayerObject*) = 0x7ddd0;
    void exitFlyMode(PlayerObject*) = 0x7dcf0;
    void exitRobotMode(PlayerObject*) = 0x7de20;
    void exitRollMode(PlayerObject*) = 0x7de60;
    void exitSpiderMode(PlayerObject*) = 0x7de40;
    void flipFinished() = 0x7e150;
    void flipGravity(PlayerObject*, bool, bool) = 0x7cd10;
    void flipObjects() = 0x76130;
    void fullReset() = 0x7f8e0;
    void getLastCheckpoint() = 0x7f840;
    void getMaxPortalY() = 0x7b4e0;
    void getMinPortalY() = 0x7b550;
    void getObjectsState() = 0x7e9d0;
    void getOtherPlayer(PlayerObject*) = 0x7dcc0;
    void getParticleKey(int, char const*, int, cocos2d::tCCPositionType) = 0x764d0;
    void getParticleKey2(std::string) = 0x767b0;
    void getRelativeMod(cocos2d::CCPoint, float, float, float) = 0x7c2a0;
    void getTempMilliTime() = 0x778e0;
    void gravityEffectFinished() = 0x7cec0;
    void hasItem(int) = 0x7cee0;
    void hasUniqueCoin(GameObject*) = 0x77510;
    void incrementJumps() = 0x7ff40;
    void init(GJGameLevel*) = 0x6b5f0;
    void isFlipping() = 0x76100;
    void levelComplete() = 0x72b80;
    void lightningFlash(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, int, bool, float) = 0x75cc0;
    void lightningFlash(cocos2d::CCPoint, cocos2d::_ccColor3B) = 0x75bf0;
    void loadDefaultColors() = 0x6ef30;
    void loadFromCheckpoint(CheckpointObject*) = 0x7f000;
    void loadLastCheckpoint() = 0x7efc0;
    void loadSavedObjectsState(std::string) = 0x7f3d0;
    void markCheckpoint() = 0x7ef60;
    void moveCameraToPos(cocos2d::CCPoint) = 0x7c980;
    void onEnterTransitionDidFinish() = 0x806e0;
    void onExit() = 0x80710;
    void onQuit() = 0x72710;
    void optimizeColorGroups() = 0x6dad0;
    void optimizeOpacityGroups() = 0x6dc20;
    void optimizeSaveRequiredGroups() = 0x6dd70;
    void pauseGame(bool) = 0x802d0;
    void pickupItem(GameObject*) = 0x7c1d0;
    void playAnimationCommand(int, int) = 0x75930;
    void playEndAnimationToPos(cocos2d::CCPoint) = 0x759a0;
    void playExitDualEffect(PlayerObject*) = 0x7d1d0;
    void playFlashEffect(float, int, float) = 0x75e50;
    void playGravityEffect(bool) = 0x7b5a0;
    void playSpeedParticle(float) = 0x77030;
    void playerWillSwitchMode(PlayerObject*, GameObject*) = 0x7b820;
    void prepareSpawnObjects() = 0x7fc00;
    void processItems() = 0x735c0;
    void processLoadedMoveActions() = 0x7a7c0;
    void recordAction(bool, PlayerObject*) = 0x7e190;
    void registerActiveObject(GameObject*) = 0x77620;
    void registerStateObject(GameObject*) = 0x777b0;
    void removeAllObjects() = 0x727b0;
    void removeFromGroupOld(GameObject*) = 0x77750;
    void removeLastCheckpoint() = 0x7f870;
    void removePlayer2() = 0x7d630;
    void resetLevel() = 0x71c50;
    void resume() = 0x80480;
    void resumeAndRestart() = 0x80400;
    void saveRecordAction(bool, PlayerObject*) = 0x78750;
    void scene(GJGameLevel*) = 0x6b500;
    void setupLevelStart(LevelSettingsObject*) = 0x6f560;
    void setupReplay(std::string) = 0x7e1e0;
    void shakeCamera(float, float, float) = 0x744a0;
    void shouldBlend(int) = 0x771b0;
    void showCompleteEffect() = 0x738e0;
    void showCompleteText() = 0x73be0;
    void showEndLayer() = 0x74450;
    void showHint() = 0x7deb0;
    void showNewBest(bool, int, int, bool, bool, bool) = 0x74580;
    void showRetryLayer() = 0x75ba0;
    void showTwoPlayerGuide() = 0x6df00;
    void sortGroups() = 0x6d9e0;
    void spawnCircle() = 0x73820;
    void spawnFirework() = 0x74200;
    void spawnParticle(char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint) = 0x76330;
    void spawnPlayer2() = 0x7d170;
    void startGame() = 0x726b0;
    void startMusic() = 0x72910;
    void startRecording() = 0x7fec0;
    void startRecordingDelayed() = 0x7fed0;
    void stopCameraShake() = 0x75900;
    void stopRecording() = 0x6d090;
    void storeCheckpoint(CheckpointObject*) = 0x7ef10;
    void switchToFlyMode(PlayerObject*, GameObject*, bool, int) = 0x7baf0;
    void switchToRobotMode(PlayerObject*, GameObject*, bool) = 0x7bc80;
    void switchToRollMode(PlayerObject*, GameObject*, bool) = 0x7bbe0;
    void switchToSpiderMode(PlayerObject*, GameObject*, bool) = 0x7bd20;
    void timeForXPos(float) = 0x7d120;
    void timeForXPos2(float, bool) = 0x293eb0;
    void toggleBGEffectVisibility(bool) = 0x7fe80;
    void toggleDualMode(GameObject*, bool, PlayerObject*, bool) = 0x7bf90;
    void toggleFlipped(bool, bool) = 0x7bdc0;
    void toggleGhostEffect(int) = 0x7fe40;
    void toggleGlitter(bool) = 0x70e00;
    void togglePracticeMode(bool) = 0x7f9e0;
    void toggleProgressbar() = 0x6eeb0;
    void tryStartRecord() = 0x7fe00;
    void unclaimParticle(char const*, cocos2d::CCParticleSystemQuad*) = 0x76e00;
    void unregisterActiveObject(GameObject*) = 0x77660;
    void unregisterStateObject(GameObject*) = 0x777f0;
    void update(float) = 0x77900;
    void updateAttempts() = 0x7fcd0;
    void updateCamera(float) = 0x6e2b0;
    void updateColor(cocos2d::_ccColor3B, float, int, bool, float, cocos2d::_ccHSVValue, int, bool, int, EffectGameObject*) = 0x7c7f0;
    void updateDualGround(PlayerObject*, int, bool) = 0x7caa0;
    void updateEffectPositions() = 0x7a6d0;
    void updateLevelColors() = 0x6f1e0;
    void updateMoveObjectsLastPosition() = 0x7a720;
    void updateProgressbar() = 0x6ed70;
    void updateReplay(float) = 0x78b60;
    void updateTimeMod(float, bool) = 0x786f0;
    void updateTweenAction(float, char const*) = 0x7ffb0;
    void updateVisibility() = 0x6fb90;
    void vfDChk() = 0x7fcb0;
    void visit() = 0x75ef0;
    void visitWithColorFlash() = 0x761f0;
    void willSwitchToMode(int, PlayerObject*) = 0x7b9e0;
    void xPosForTime(float) = 0x7d140;
@end

@interface PlayerCheckpoint
    void create() = 0x7e8c0;
@end

@interface PlayerObject
    void activateStreak() = 0x21aef0;
    void addAllParticles() = 0x2189b0;
    void addToTouchedRings(GameObject*) = 0x22b800;
    void animationFinished(char const*) = 0x22e9d0;
    void boostPlayer(float) = 0x21d6b0;
    void bumpPlayer(float, int) = 0x22d890;
    void buttonDown(PlayerButton) = 0x22b7e0;
    void checkSnapJumpToObject(GameObject*) = 0x2217f0;
    void collidedWithObject(float, GameObject*) = 0x21d880;
    void collidedWithObject(float, GameObject*, cocos2d::CCRect) = 0x21f0b0;
    void collidedWithSlope(float, GameObject*, bool) = 0x21d8d0;
    void convertToClosestRotation(float) = 0x21c860;
    void copyAttributes(PlayerObject*) = 0x22dc70;
    void create(int, int, cocos2d::CCLayer*) = 0x217260;
    void deactivateParticle() = 0x21a540;
    void deactivateStreak(bool) = 0x218b30;
    void fadeOutStreak2(float) = 0x225890;
    void flashPlayer(float, float, cocos2d::_ccColor3B, cocos2d::_ccColor3B) = 0x221c80;
    void flipGravity(bool, bool) = 0x21c090;
    void flipMod() = 0x21a4c0;
    void getActiveMode() = 0x22b950;
    void getModifiedSlopeYVel() = 0x21bff0;
    void getOldPosition(float) = 0x21a830;
    void getOrientedBox() = 0x22dee0;
    void getRealPosition() = 0x22d5f0;
    void getSecondColor() = 0x22cee0;
    void gravityDown() = 0x22e930;
    void gravityUp() = 0x22e900;
    void hardFlipGravity() = 0x22b860;
    void hitGround(bool) = 0x220a30;
    void incrementJumps() = 0x21c050;
    void init(int, int, cocos2d::CCLayer*) = 0x2172e0;
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
    void resetObject() = 0x223170;
    void resetPlayerIcon() = 0x22be00;
    void resetStateVariables() = 0x223760;
    void resetStreak() = 0x21ae10;
    void ringJump(GameObject*) = 0x22abf0;
    void runBallRotation(float) = 0x21ca10;
    void runBallRotation2() = 0x21cb10;
    void runNormalRotation() = 0x21c960;
    void runRotateAction(bool) = 0x21c570;
    void saveToCheckpoint(PlayerCheckpoint*) = 0x22e2f0;
    void setColor(cocos2d::_ccColor3B const&) = 0x22cdf0;
    void setFlipX(bool) = 0x22e720;
    void setFlipY(bool) = 0x22e7b0;
    void setOpacity(unsigned char) = 0x22d400;
    void setPosition(cocos2d::CCPoint const&) = 0x22c8b0;
    void setRotation(float) = 0x22e6e0;
    void setScale(float) = 0x22e870;
    void setScaleX(float) = 0x22e7f0;
    void setScaleY(float) = 0x22e830;
    void setSecondColor(cocos2d::_ccColor3B const&) = 0x219610;
    void setVisible(bool) = 0x22e8b0;
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
    void update(float) = 0x218bf0;
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
    void updatePlayerSpriteExtra(std::string) = 0x218440;
    void updateRobotAnimationSpeed() = 0x22df40;
    void updateRotation(float) = 0x2214b0;
    void updateRotation(float, float) = 0x221230;
    void updateShipRotation(float) = 0x221310;
    void updateShipSpriteExtra(std::string) = 0x218510;
    void updateSlopeRotation(float) = 0x221030;
    void updateSlopeYVelocity(float) = 0x22e920;
    void updateSpecial(float) = 0x21a790;
    void updateStateVariables() = 0x21a770;
    void updateTimeMod(float) = 0x2185e0;
    void usingWallLimitedMode() = 0x22df00;
    void yStartDown() = 0x22e9b0;
    void yStartUp() = 0x22e990;
@end

@interface PulseEffectAction
    void createFromString(std::string) = 0x179e90;
    void getSaveString() = 0x17a850;
@end

@interface RetryLevelLayer
    void create() = 0x28dd60;
@end

@interface SetGroupIDLayer
    void onNextGroupID1(cocos2d::CCObject*) = 0x1967a0;
    void textChanged(CCTextInputNode*) = 0x197af0;
    void updateGroupIDLabel() = 0x197260;
@end

@interface SetIDLayer
    void create(GameObject*) = 0x168f20;
@end

@interface SetItemIDLayer
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x5a830;
@end

@interface SetTargetIDLayer
    void create(EffectGameObject*, cocos2d::CCArray*, std::string) = 0x159d20;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x15aed0;
    void textChanged(CCTextInputNode*) = 0x15b6c0;
    void updateTargetID() = 0x15b4a0;
@end

@interface SetupAnimationPopup
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x208b70;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x209fc0;
    void textChanged(CCTextInputNode*) = 0x20ab30;
    void updateTargetID() = 0x20a910;
@end

@interface SetupCollisionTriggerPopup
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x1d6120;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x1d77b0;
    void textChanged(CCTextInputNode*) = 0x1d84d0;
    void updateTargetID() = 0x1d82b0;
@end

@interface SetupCountTriggerPopup
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x15c6c0;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x15dd40;
    void textChanged(CCTextInputNode*) = 0x15e9a0;
    void updateTargetID() = 0x15e8a0;
@end

@interface SetupInstantCountPopup
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x352c10;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x354520;
    void textChanged(CCTextInputNode*) = 0x355270;
    void updateTargetID() = 0x355170;
@end

@interface SetupInteractObjectPopup
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x29a400;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x29bbc0;
    void textChanged(CCTextInputNode*) = 0x29c2b0;
    void updateTargetID() = 0x29c120;
@end

@interface SetupObjectTogglePopup
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x1c0860;
    void init(EffectGameObject*, cocos2d::CCArray*) = 0x1c0a40;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x1c1c40;
    void textChanged(CCTextInputNode*) = 0x1c2660;
    void updateTargetID() = 0x1c2440;
@end

@interface SetupOpacityPopup
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x32b70;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x340a0;
    void textChanged(CCTextInputNode*) = 0x34a60;
    void updateTargetID() = 0x34760;
@end

@interface SetupPickupTriggerPopup
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x35e70;
    void onItemIDArrow(cocos2d::CCObject*) = 0x37100;
    void onNextItemID(cocos2d::CCObject*) = 0x37260;
    void textChanged(CCTextInputNode*) = 0x37ca0;
    void updateItemID() = 0x37ab0;
@end

@interface SetupPulsePopup
    void colorValueChanged(cocos2d::_ccColor3B) = 0x1ec680;
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x1e6d40;
    void init(EffectGameObject*, cocos2d::CCArray*) = 0x1e7010;
    void onSelectPulseMode(cocos2d::CCObject*) = 0x1eb020;
    void onSelectTargetMode(cocos2d::CCObject*) = 0x1eac30;
    void onUpdateCustomColor(cocos2d::CCObject*) = 0x1eaef0;
    void textChanged(CCTextInputNode*) = 0x1ec960;
    void updateCopyColorTextInputLabel() = 0x1ebf20;
    void updateEditorLabel() = 0x1ec310;
    void updateFadeOutLabel(bool) = 0x1eba20;
    void updateTargetID() = 0x1ebbe0;
    void updateTextInputLabel() = 0x1eb8d0;
@end

@interface SetupShakePopup
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x3adc00;
@end

@interface SetupSpawnPopup
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x139790;
    void createToggleButton(std::string, Cacao::CC_SEL, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCArray*) = 0x13b0e0;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x13ad80;
    void textChanged(CCTextInputNode*) = 0x13b990;
    void updateTargetID() = 0x13b770;
@end

@interface SetupTouchTogglePopup
    void create(EffectGameObject*, cocos2d::CCArray*) = 0x1576a0;
    void onTargetIDArrow(cocos2d::CCObject*) = 0x158b60;
    void textChanged(CCTextInputNode*) = 0x1596a0;
    void updateTargetID() = 0x159480;
@end

@interface SimplePlayer
    void create(int) = 0x1b6140;
    void setSecondColor(cocos2d::_ccColor3B const&) = 0x1bace0;
    void updateColors() = 0x1ba1f0;
    void updatePlayerFrame(int, IconType) = 0x1b62f0;
@end

@interface Slider
    void create(cocos2d::CCNode*, Cacao::CC_SEL, char const*, char const*, char const*, char const*, float) = 0x18dd80;
    void create(cocos2d::CCNode*, Cacao::CC_SEL, float) = 0x18dc40;
    void getValue() = 0x18e0c0;
    void setBarVisibility(bool) = 0x18e280;
    void setValue(float) = 0x18e170;
@end

@interface SliderThumb
    void getValue() = 0x18ce80;
@end

@interface SpawnTriggerAction
    void createFromString(std::string) = 0x17bf50;
@end

@interface SpeedObject
    void create(GameObject*, int, float) = 0x77450;
    void init(GameObject*, int, float) = 0x77400;
@end

@interface TeleportPortalObject
    void create(char const*) = 0xdaa50;
    void getTeleportXOff(cocos2d::CCNode*) = 0xdac20;
@end

@interface TextArea
    void create(std::string, char const*, float, float, cocos2d::CCPoint, float, bool) = 0x19eb40;
@end

@interface TextInputDelegate
    void allowTextInput(CCTextInputNode*) = 0x6210;
    void textInputOpened(CCTextInputNode*) = 0x6200;
@end

@interface ToggleTriggerAction
    void createFromString(std::string) = 0x1765e0;
@end

@interface TouchToggleAction
    void createFromString(std::string) = 0x177e10;
@end

@interface UILayer
    void create() = 0x27fd10;
    void disableMenu() = 0x280960;
    void enableMenu() = 0x280940;
    void pCommand(cocos2d::CCNode*) = 0x280830;
    void toggleCheckpointsMenu(bool) = 0x280430;
@end

@interface UndoObject
    void create(GameObject*, UndoCommand) = 0x94ea0;
    void createWithArray(cocos2d::CCArray*, UndoCommand) = 0x96ee0;
@end

@interface CCActionTween
    void create(float, char const*, float, float) = 0x447590;
@end

@interface CCAnimate
    void create(cocos2d::CCAnimation*) = 0x1f8fc0;
@end

@interface CCAnimation
    void createWithSpriteFrames(cocos2d::CCArray*, float) = 0x140df0;
@end

@interface CCArray
    void addObject(cocos2d::CCObject*) = 0x419f90;
    void addObjectNew(cocos2d::CCObject*) = 0x41a450;
    void addObjectsFromArray(cocos2d::CCArray*) = 0x41a2d0;
    void containsObject(cocos2d::CCObject*) = 0x41a3e0;
    void count() = 0x41a2f0;
    void create() = 0x419cb0;
    void createWithObject(cocos2d::CCObject*) = 0x419d50;
    void fastRemoveObject(cocos2d::CCObject*) = 0x41a520;
    void fastRemoveObjectAtIndex(unsigned int) = 0x41a500;
    void fastRemoveObjectAtIndexNew(unsigned int) = 0x41a510;
    void lastObject() = 0x41a360;
    void objectAtIndex(unsigned int) = 0x41a340;
    void removeAllObjects() = 0x41a4f0;
    void removeLastObject(bool) = 0x41a470;
    void removeObject(cocos2d::CCObject*, bool) = 0x41a490;
    void removeObjectAtIndex(unsigned int, bool) = 0x41a4b0;
    void stringAtIndex(unsigned int) = 0x41a320;
@end

@interface CCBezierTo
    void create(float, cocos2d::_ccBezierConfig const&) = 0x1f6c10;
@end

@interface CCCallFunc
    void create(int) = 0x454d90;
@end

@interface CCCopying
    void copyWithZone(cocos2d::CCZone*) = 0x250c90;
@end

@interface CCDelayTime
    void create(float) = 0x1f4380;
@end

@interface CCDictionary
    void allKeys() = 0x190450;
    void count() = 0x190430;
    void create() = 0x192650;
    void objectForKey(long) = 0x190bb0;
    void objectForKey(std::string const&) = 0x190870;
    void removeAllObjects() = 0x190220;
    void removeObjectForKey(long) = 0x1921d0;
    void setObject(cocos2d::CCObject*, long) = 0x191790;
    void setObject(cocos2d::CCObject*, std::string const&) = 0x190dc0;
    void valueForKey(long) = 0x190cf0;
    void valueForKey(std::string const&) = 0x1907a0;
@end

@interface CCDirector
    void getScreenBottom() = 0x24b210;
    void getScreenLeft() = 0x24b220;
    void getScreenRight() = 0x24b230;
    void getScreenScaleFactorH() = 0x24b1e0;
    void getScreenScaleFactorW() = 0x24b1f0;
    void getScreenTop() = 0x24b200;
    void getTouchDispatcher() = 0x24afa0;
    void getWinSize() = 0x24a0f0;
    void pushScene(cocos2d::CCScene*) = 0x24a620;
    void replaceScene(cocos2d::CCScene*) = 0x24a6d0;
    void resetSmoothFixCounter() = 0x249bc0;
    void sharedDirector() = 0x248cb0;
@end

@interface CCDrawNode
    void clear() = 0x379e80;
    void create() = 0x378d00;
    void drawPolygon(cocos2d::CCPoint*, unsigned int, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&) = 0x3797f0;
    void drawSegment(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&) = 0x3792d0;
    void getBlendFunc() = 0x379ea0;
    void init() = 0x378e00;
    void setBlendFunc(cocos2d::_ccBlendFunc const&) = 0x379eb0;
@end

@interface CCEaseElasticOut
    void create(cocos2d::CCActionInterval*, float) = 0x2a3080;
@end

@interface CCEaseIn
    void create(cocos2d::CCActionInterval*, float) = 0x2a1960;
@end

@interface CCEaseInOut
    void create(cocos2d::CCActionInterval*, float) = 0x2a1d80;
@end

@interface CCEaseOut
    void create(cocos2d::CCActionInterval*, float) = 0x2a1b70;
@end

@interface CCFadeOut
    void create(float) = 0x1f7d80;
@end

@interface CCFadeTo
    void create(float, unsigned char) = 0x1f7ff0;
@end

@interface CCHide
    void create() = 0x4543e0;
@end

@interface CCImage
    void initWithImageData(void*, int, cocos2d::CCImage::EImageFormat, int, int, int) = 0x24fcb0;
@end

@interface CCKeyboardDelegate
    void keyUp(cocos2d::enumKeyCodes) = 0x61a0;
@end

@interface CCLabelBMFont
    void create(char const*, char const*) = 0x347660;
    void limitLabelWidth(float, float, float) = 0x34a6e0;
    void setScale(float) = 0x34a5d0;
    void setString(char const*, bool) = 0x3489e0;
@end

@interface CCLayer
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2734d0;
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x273650;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x2735d0;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x273550;
    void ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x2736d0;
    void ccTouchesCancelled(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x273850;
    void ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x2737d0;
    void ccTouchesMoved(cocos2d::CCSet*, cocos2d::CCEvent*) = 0x273750;
    void create() = 0x272a00;
    void didAccelerate(cocos2d::CCAcceleration*) = 0x272ea0;
    void getTouchMode() = 0x272e10;
    void getTouchPriority() = 0x272e00;
    void init() = 0x2729a0;
    void isAccelerometerEnabled() = 0x272e20;
    void isKeyboardEnabled() = 0x273010;
    void isKeypadEnabled() = 0x272f70;
    void isMouseEnabled() = 0x273090;
    void isTouchEnabled() = 0x272ce0;
    void keyBackClicked() = 0x273160;
    void keyDown(cocos2d::enumKeyCodes) = 0x273280;
    void keyMenuClicked() = 0x273200;
    void onEnter() = 0x273300;
    void onEnterTransitionDidFinish() = 0x273490;
    void onExit() = 0x2733c0;
    void registerScriptTouchHandler(int, bool, int, bool) = 0x272bd0;
    void registerWithTouchDispatcher() = 0x272b40;
    void setAccelerometerEnabled(bool) = 0x272e30;
    void setAccelerometerInterval(double) = 0x272e70;
    void setKeyboardEnabled(bool) = 0x273020;
    void setKeypadEnabled(bool) = 0x272f80;
    void setMouseEnabled(bool) = 0x2730a0;
    void setTouchEnabled(bool) = 0x272cf0;
    void setTouchMode(cocos2d::ccTouchesMode) = 0x272d60;
    void setTouchPriority(int) = 0x272db0;
    void unregisterScriptTouchHandler() = 0x272c30;
@end

@interface CCLayerColor
    void create(cocos2d::_ccColor4B const&, float, float) = 0x2745e0;
    void draw() = 0x274b50;
    void getBlendFunc() = 0x274480;
    void init() = 0x274800;
    void initWithColor(cocos2d::_ccColor4B const&) = 0x2749a0;
    void initWithColor(cocos2d::_ccColor4B const&, float, float) = 0x274850;
    void setBlendFunc(cocos2d::_ccBlendFunc) = 0x2744a0;
    void setColor(cocos2d::_ccColor3B const&) = 0x274c20;
    void setContentSize(cocos2d::CCSize const&) = 0x2749f0;
    void setOpacity(unsigned char) = 0x274db0;
    void updateColor() = 0x274ae0;
@end

@interface CCLayerRGBA
    void getColor() = 0x273d60;
    void getDisplayedColor() = 0x273d80;
    void getDisplayedOpacity() = 0x273c00;
    void getOpacity() = 0x273be0;
    void isCascadeColorEnabled() = 0x274230;
    void isCascadeOpacityEnabled() = 0x2741f0;
    void isOpacityModifyRGB() = 0x6190;
    void setCascadeColorEnabled(bool) = 0x274250;
    void setCascadeOpacityEnabled(bool) = 0x274210;
    void setOpacityModifyRGB(bool) = 0x6180;
    void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x2740b0;
    void updateDisplayedOpacity(unsigned char) = 0x273f20;
@end

@interface CCMenu
    void alignItemsHorizontallyWithPadding(float) = 0x4393e0;
    void create() = 0x438720;
    void createWithArray(cocos2d::CCArray*) = 0x4387e0;
    void createWithItem(cocos2d::CCMenuItem*) = 0x438b80;
@end

@interface CCMotionStreak
    void reset() = 0x2ee190;
    void resumeStroke() = 0x2edb30;
    void stopStroke() = 0x2edb20;
@end

@interface CCMouseDelegate
    void rightKeyDown() = 0x61b0;
    void rightKeyUp() = 0x61c0;
    void scrollWheel(float, float) = 0x61d0;
@end

@interface CCMoveBy
    void create(float, cocos2d::CCPoint const&) = 0x1f50e0;
@end

@interface CCMoveTo
    void create(float, cocos2d::CCPoint const&) = 0x1f54d0;
@end

@interface CCNode
    void _setZOrder(int) = 0x122990;
    void addChild(cocos2d::CCNode*) = 0x1233d0;
    void addChild(cocos2d::CCNode*, int) = 0x1233b0;
    void addChild(cocos2d::CCNode*, int, int) = 0x1232a0;
    void addComponent(cocos2d::CCComponent*) = 0x124a40;
    void cleanup() = 0x123100;
    void convertToNodeSpace(cocos2d::CCPoint const&) = 0x124750;
    void convertToWorldSpace(cocos2d::CCPoint const&) = 0x124790;
    void create() = 0x1230a0;
    void draw() = 0x123840;
    void getActionByTag(int) = 0x123ee0;
    void getActionManager() = 0x123e50;
    void getAnchorPoint() = 0x122d80;
    void getAnchorPointInPoints() = 0x122d70;
    void getCamera() = 0x122cb0;
    cocos2d::CCNode* getChildByTag(int) = 0x123220;
    void getChildren() = 0x122c80;
    void getChildrenCount() = 0x122c90;
    void getContentSize() = 0x122e00;
    void getGLServerState() = 0x122f90;
    void getGrid() = 0x122d00;
    void getOrderOfArrival() = 0x122f50;
    void getParent() = 0x122ed0;
    void getPosition() = 0x122b60;
    void getPosition(float*, float*) = 0x122b90;
    void getPositionX() = 0x122be0;
    void getPositionY() = 0x122bf0;
    void getRotation() = 0x122a00;
    void getRotationX() = 0x122a50;
    void getRotationY() = 0x122a80;
    void getScale() = 0x122ab0;
    void getScaleX() = 0x122b00;
    void getScaleY() = 0x122b30;
    void getScaledContentSize() = 0x122e10;
    void getScheduler() = 0x123f70;
    void getShaderProgram() = 0x122f70;
    void getSkewX() = 0x122920;
    void getSkewY() = 0x122950;
    void getUserData() = 0x122f30;
    void getUserObject() = 0x122f80;
    void getVertexZ() = 0x1229e0;
    void getZOrder() = 0x122980;
    void ignoreAnchorPointForPosition(bool) = 0x122f00;
    void init() = 0x122910;
    void isIgnoreAnchorPointForPosition() = 0x122ef0;
    void isRunning() = 0x122ec0;
    void isVisible() = 0x122d50;
    void nodeToParentTransform() = 0x124210;
    void nodeToWorldTransform() = 0x124670;
    void onEnter() = 0x123a90;
    void onEnterTransitionDidFinish() = 0x123b90;
    void onExit() = 0x123ca0;
    void onExitTransitionDidStart() = 0x123c00;
    void parentToNodeTransform() = 0x1245d0;
    void pauseSchedulerAndActions() = 0x123d60;
    void registerScriptHandler(int) = 0x123d90;
    void removeAllChildren() = 0x123600;
    void removeAllChildrenWithCleanup(bool) = 0x123620;
    void removeAllComponents() = 0x124aa0;
    void removeChild(cocos2d::CCNode*) = 0x123460;
    void removeChild(cocos2d::CCNode*, bool) = 0x123480;
    void removeChildByTag(int) = 0x1235a0;
    void removeChildByTag(int, bool) = 0x1235c0;
    void removeComponent(char const*) = 0x124a60;
    void removeComponent(cocos2d::CCComponent*) = 0x124a80;
    void removeFromParent() = 0x1233f0;
    void removeFromParentAndCleanup(bool) = 0x123410;
    void removeMeAndCleanup() = 0x123440;
    void reorderChild(cocos2d::CCNode*, int) = 0x123760;
    void resumeSchedulerAndActions() = 0x123b60;
    void runAction(cocos2d::CCAction*) = 0x123e60;
    void schedule(Cacao::CC_SCHED) = 0x1240b0;
    void schedule(Cacao::CC_SCHED, float) = 0x124120;
    void scheduleUpdate() = 0x123f80;
    void setActionManager(cocos2d::CCActionManager*) = 0x123e00;
    void setAnchorPoint(cocos2d::CCPoint const&) = 0x122d90;
    void setContentSize(cocos2d::CCSize const&) = 0x122e50;
    void setGLServerState(cocos2d::ccGLServerState) = 0x122fa0;
    void setGrid(cocos2d::CCGridBase*) = 0x122d10;
    void setOrderOfArrival(unsigned int) = 0x122f60;
    void setParent(cocos2d::CCNode*) = 0x122ee0;
    void setPosition(cocos2d::CCPoint const&) = 0x122b70;
    void setPosition(float, float) = 0x122ba0;
    void setPositionX(float) = 0x122c00;
    void setPositionY(float) = 0x122c40;
    void setRotation(float) = 0x122a10;
    void setRotationX(float) = 0x122a60;
    void setRotationY(float) = 0x122a90;
    void setScale(float) = 0x122ac0;
    void setScale(float, float) = 0x122ae0;
    void setScaleX(float) = 0x122b10;
    void setScaleY(float) = 0x122b40;
    void setScheduler(cocos2d::CCScheduler*) = 0x123f20;
    void setShaderProgram(cocos2d::CCGLProgram*) = 0x122ff0;
    void setSkewX(float) = 0x122930;
    void setSkewY(float) = 0x122960;
    void setUserData(void*) = 0x122f40;
    void setUserObject(cocos2d::CCObject*) = 0x122fb0;
    void setVertexZ(float) = 0x1229f0;
    void setVisible(bool) = 0x122d60;
    void setZOrder(int) = 0x1229a0;
    void sortAllChildren() = 0x1237b0;
    void stopActionByTag(int) = 0x123ec0;
    void stopAllActions() = 0x123190;
    void unregisterScriptHandler() = 0x123dc0;
    void unschedule(Cacao::CC_SCHED) = 0x124180;
    void unscheduleAllSelectors() = 0x1231b0;
    void unscheduleUpdate() = 0x124060;
    void update(float) = 0x1241a0;
    void updateTransform() = 0x1249d0;
    void updateTweenAction(float, char const*) = 0x1249c0;
    void visit() = 0x123850;
    void worldToNodeTransform() = 0x124710;
@end

@interface CCNodeRGBA
    void getColor() = 0x125020;
    void getDisplayedColor() = 0x125040;
    void getDisplayedOpacity() = 0x124cf0;
    void getOpacity() = 0x124cd0;
    void isCascadeColorEnabled() = 0x125320;
    void isCascadeOpacityEnabled() = 0x124fe0;
    void setCascadeColorEnabled(bool) = 0x125340;
    void setCascadeOpacityEnabled(bool) = 0x125000;
@end

@interface CCObject
    void acceptVisitor(cocos2d::CCDataVisitor&) = 0x250f30;
    void autorelease() = 0x250ed0;
    void canEncode() = 0x250f90;
    void encodeWithCoder(DS_Dictionary*) = 0x250f70;
    void getTag() = 0x250f50;
    void isEqual(cocos2d::CCObject const*) = 0x250f20;
    void release() = 0x250ea0;
    void retain() = 0x250ec0;
    void setTag(int) = 0x250f60;
    void update(float) = 0x32660;
@end

@interface CCParticleSystem
    void resetSystem() = 0x46bd50;
    void resumeSystem() = 0x46bd40;
    void stopSystem() = 0x46bd10;
@end

@interface CCParticleSystemQuad
    void create(char const*) = 0x36b000;
@end

@interface CCPoint
    void equals(cocos2d::CCPoint const&) = 0x1371d0;
@end

@interface CCRect
    void containsPoint(cocos2d::CCPoint const&) = 0x1377b0;
    void equals(cocos2d::CCRect const&) = 0x1376a0;
    void getMaxX() = 0x137710;
    void getMaxY() = 0x137760;
    void getMinX() = 0x137750;
    void getMinY() = 0x1377a0;
    void intersectsRect(cocos2d::CCRect const&) = 0x137800;
@end

@interface CCRenderTexture
    void begin() = 0x35ce10;
    void create(int, int, cocos2d::CCTexture2DPixelFormat) = 0x35c720;
    void end() = 0x35d2c0;
    void newCCImage(bool) = 0x35d7d0;
@end

@interface CCRepeatForever
    void create(cocos2d::CCActionInterval*) = 0x1f3920;
@end

@interface CCRotateBy
    void create(float, float) = 0x1f4c50;
@end

@interface CCScaleTo
    void create(float, float) = 0x1f6ff0;
    void create(float, float, float) = 0x1f70f0;
@end

@interface CCScene
    void create() = 0x13c140;
@end

@interface CCScheduler
    void scheduleSelector(Cacao::CC_SCHED, cocos2d::CCObject*, float, unsigned int, float, bool) = 0x242b20;
    void scheduleUpdateForTarget(cocos2d::CCObject*, int, bool) = 0x2438d0;
    void unscheduleAllForTarget(cocos2d::CCObject*) = 0x243e40;
@end

@interface CCSprite
    void addChild(cocos2d::CCNode*) = 0x134190;
    void addChild(cocos2d::CCNode*, int) = 0x1341a0;
    void addChild(cocos2d::CCNode*, int, int) = 0x1341b0;
    void create() = 0x132df0;
    void create(char const*) = 0x132a80;
    void createWithSpriteFrame(cocos2d::CCSpriteFrame*) = 0x132cb0;
    void createWithSpriteFrameName(char const*) = 0x132dc0;
    void displayFrame() = 0x135760;
    void draw() = 0x134070;
    void getBatchNode() = 0x135910;
    void getBlendFunc() = 0x505a0;
    void getTexture() = 0x135c00;
    void ignoreAnchorPointForPosition(bool) = 0x134b60;
    void initWithFile(char const*) = 0x133180;
    void initWithFile(char const*, cocos2d::CCRect const&) = 0x133210;
    void initWithSpriteFrame(cocos2d::CCSpriteFrame*) = 0x133270;
    void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&) = 0x1330f0;
    void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool) = 0x132f10;
    void isDirty() = 0x505b0;
    void isFrameDisplayed(cocos2d::CCSpriteFrame*) = 0x1356d0;
    void isOpacityModifyRGB() = 0x135350;
    void refreshTextureRect() = 0x133520;
    void removeAllChildrenWithCleanup(bool) = 0x134340;
    void removeChild(cocos2d::CCNode*, bool) = 0x134300;
    void reorderChild(cocos2d::CCNode*, int) = 0x134270;
    void setAnchorPoint(cocos2d::CCPoint const&) = 0x134af0;
    void setBatchNode(cocos2d::CCSpriteBatchNode*) = 0x135920;
    void setBlendFunc(cocos2d::_ccBlendFunc) = 0x50590;
    void setChildOpacity(unsigned char) = 0x134f50;
    void setDirty(bool) = 0x505c0;
    void setDirtyRecursively(bool) = 0x1345b0;
    void setDisplayFrame(cocos2d::CCSpriteFrame*) = 0x135610;
    void setDisplayFrameWithAnimationName(char const*, int) = 0x135680;
    void setFlipY(bool) = 0x134c30;
    void setOpacityModifyRGB(bool) = 0x135200;
    void setPosition(cocos2d::CCPoint const&) = 0x134650;
    void setReorderChildDirtyRecursively() = 0x134550;
    void setRotationX(float) = 0x134740;
    void setRotationY(float) = 0x1347b0;
    void setSkewX(float) = 0x134820;
    void setSkewY(float) = 0x134890;
    void setTexture(cocos2d::CCTexture2D*) = 0x135a90;
    void setTextureCoords(cocos2d::CCRect const&) = 0x133910;
    void setTextureRect(cocos2d::CCRect const&) = 0x133560;
    void setTextureRect(cocos2d::CCRect const&, bool, cocos2d::CCSize const&) = 0x133580;
    void setVertexRect(cocos2d::CCRect const&) = 0x1338f0;
    void setVertexZ(float) = 0x134a80;
    void sortAllChildren() = 0x1343f0;
    void updateBlendFunc() = 0x135a20;
    void updateDisplayedColor(cocos2d::_ccColor3B const&) = 0x135370;
    void updateDisplayedOpacity(unsigned char) = 0x1354c0;
    void updateTransform() = 0x133b70;
@end

@interface CCSpriteBatchNode
    void createWithTexture(cocos2d::CCTexture2D*, unsigned int) = 0xbb310;
    void getUsedAtlasCapacity() = 0xbc6b0;
    void increaseAtlasCapacity(unsigned int) = 0xbc670;
@end

@interface CCSpriteFrameCache
    void addSpriteFramesWithFile(char const*) = 0x199a10;
    void sharedSpriteFrameCache() = 0x198970;
    void spriteFrameByName(char const*) = 0x19a7e0;
@end

@interface CCString
    void boolValue() = 0x44c810;
    void doubleValue() = 0x44c7f0;
    void floatValue() = 0x44c7d0;
    void getCString() = 0x44c470;
    void intValue() = 0x44c780;
@end

@interface CCTexture2D
    void initWithImage(cocos2d::CCImage*) = 0x246940;
    void setTexParameters(cocos2d::_ccTexParams*) = 0x247980;
@end

@interface CCTextureCache
    void addImage(char const*, bool) = 0x358120;
    void sharedTextureCache() = 0x356e00;
@end

@interface CCTintTo
    void create(float, unsigned char, unsigned char, unsigned char) = 0x1f82a0;
@end

@interface CCTouchDispatcher
    void decrementForcePrio(int) = 0x280f70;
    void incrementForcePrio(int) = 0x280f60;
@end

@interface CCTransitionFade
    void create(float, cocos2d::CCScene*) = 0x8ea30;
@end

@interface ZipUtils
    void compressString(std::string, bool, int) = 0xe9a50;
    void decompressString(std::string, bool, int) = 0xea380;
@end

@interface CCControlColourPicker
    void setColorValue(cocos2d::_ccColor3B const&) = 0x1aac10;
@end

@interface CCControlUtils
    void HSVfromRGB(cocos2d::extension::RGBA) = 0x1e6750;
    void RGBfromHSV(cocos2d::extension::HSV) = 0x1e6850;
@end

@interface CCScale9Sprite
    void create(char const*) = 0x2130d0;
    void create(char const*, cocos2d::CCRect) = 0x212ef0;
    void setContentSize(cocos2d::CCSize const&) = 0x2127c0;
@end

