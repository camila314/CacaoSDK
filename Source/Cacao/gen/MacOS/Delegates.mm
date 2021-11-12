class AppDelegate {
    void bgScale() = 0x3aaab0;
    virtual bool applicationDidFinishLaunching() = 0x3aa900;
    virtual void applicationDidEnterBackground() = 0x3aabe0;
    virtual void applicationWillEnterForeground() = 0x3aac80;
    virtual bool applicationWillBecomeActive() = 0x3aab30;
    virtual bool applicationWillResignActive() = 0x3aab50;
    virtual void trySaveGame() = 0x3aaf10;
    virtual void willSwitchToScene(cocos2d::CCScene*) = 0x3aaf40;
    static AppDelegate* get() = 0x3aab10;

    cocos2d::CCScene* m_runningScene = 0x28;
}

class CCCircleWaveDelegate {

}

class TableViewDelegate {
    volatile virtual int numberOfRowsInSection(unsigned int, TableView*) {return 0;};
    volatile virtual void numberOfSectionsInTableView(TableView*) {};
    volatile virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView*, TableViewCellEditingStyle, CCIndexPath&) {};
    volatile virtual void cellForRowAtIndexPath(CCIndexPath&, TableView*) {};
}

class TableViewDataSource {
    volatile virtual void willTweenToIndexPath(CCIndexPath&, TableViewCell*, TableView*) {};
    volatile virtual void didEndTweenToIndexPath(CCIndexPath&, TableView*) {};
    volatile virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) {};
    volatile virtual void TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) {};
    volatile virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) {};
    volatile virtual void cellHeightForRowAtIndexPath(CCIndexPath&, TableView*) {};
    volatile virtual void didSelectRowAtIndexPath(CCIndexPath&, TableView*) {};
}

class CCScrollLayerExtDelegate {

}

class GJSpecialColorSelectDelegate {

}

class TextInputDelegate {
    volatile virtual void textChanged(CCTextInputNode*) {};
    volatile virtual void textInputOpened(CCTextInputNode*) {};
    volatile virtual void textInputClosed(CCTextInputNode*) {};
    volatile virtual void textInputShouldOffset(CCTextInputNode*, float) {};
    volatile virtual void textInputReturn(CCTextInputNode*) {};
    volatile virtual bool allowTextInput(CCTextInputNode*) {return true;};
}

class FLAlertLayerProtocol {
    volatile virtual void FLAlert_Clicked(FLAlertLayer*, bool) {};
}
