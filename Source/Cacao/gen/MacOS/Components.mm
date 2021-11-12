class ButtonSprite : cocos2d::CCSprite {
    static ButtonSprite* create(char const*) = 0x4fa10;
    static ButtonSprite* create(char const*, int, int, float, bool) = 0x4fa40;
    void updateBGImage(char const*) = 0x502d0;
    static ButtonSprite* create(char const*, float) = 0x4fa60;
    static ButtonSprite* create(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool) = 0x4fa90;
}

class CCTextInputNode : cocos2d::CCLayer, cocos2d::CCIMEDelegate, cocos2d::CCTextFieldDelegate {
    static CCTextInputNode* create(float, float, char const*, char const*, int, char const*) = 0x5cfb0;

    gd::string getString() = 0x5d6f0;
    void refreshLabel() = 0x5d730;
    void setAllowedChars(gd::string) = 0x5d360;
    void setLabelNormalColor(cocos2d::_ccColor3B) = 0x5dab0;
    void setLabelPlaceholderColor(cocos2d::_ccColor3B) = 0x5da90;
    void setLabelPlaceholderScale(float) = 0x5da70;
    void setMaxLabelScale(float) = 0x5da30;
    void setMaxLabelWidth(float) = 0x5da50;
    void setString(gd::string) = 0x5d3e0;
    void updateLabel(gd::string) = 0x5d4a0;
    void forceOffset() = 0x5ec70;
    
    virtual void registerWithTouchDispatcher() = 0x5eec0;

    bool init(float, float, char const*, char const*, int, char const*) = 0x5d180;
    virtual ~CCTextInputNode() = 0x5ceb0;
    virtual void visit() = 0x5d380;
    virtual bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x5ec80;
    virtual void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x5ee80;
    virtual void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x5ee60;
    virtual void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) = 0x5eea0;
    virtual void textChanged() = 0x5dd70;
    virtual void onClickTrackNode(bool) = 0x5dd40;
    virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5dad0;
    virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5dc20;
    virtual bool onTextFieldInsertText(cocos2d::CCTextFieldTTF*, char const*, int) = 0x5de50;
    virtual bool onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF*) = 0x5e2c0;
    virtual bool onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF*) = 0x5e610;

    void* m_unknown0;
    gd::string m_caption; // 0x188
    int m_unknown1;
    bool m_selected; // 0x194
    gd::string m_allowedChars; // 0x198
    float m_maxLabelWidth;
    float m_maxLabelScale;
    float m_placeholderScale;
    cocos2d::ccColor3B m_placeholderColor;
    cocos2d::ccColor3B m_textColor;
    cocos2d::CCLabelBMFont* m_cursor;
    cocos2d::CCTextFieldTTF* m_textField; // 0x1c0
    TextInputDelegate* m_delegate; // TextInputDelegate vtable
    int m_maxLabelLength;
    cocos2d::CCLabelBMFont* m_placeholderLabel;
    bool m_unknown2;
    bool m_unknown3;
    bool m_forceOffset;
}


class TextArea : ButtonSprite {
    virtual ~TextArea() = 0x19faa0;
    virtual void draw() = 0x19f890;
    virtual void setOpacity(unsigned char) = 0x19f760;

    static TextArea* create(gd::string, char const*, float, float, cocos2d::CCPoint, float, bool) = 0x19eb40;
}

class Slider : cocos2d::CCLayer {
    static Slider* create(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float) = 0x18dd80;
    static Slider* create(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, float) = 0x18dc40;
    void getValue() = 0x18e0c0;
    void setBarVisibility(bool) = 0x18e280;
    void setValue(float) = 0x18e170;
}

class SliderThumb {
    void getValue() = 0x18ce80;
}

class BoomScrollLayer {
    BoomScrollLayer() = 0x1e42f0;
}

class TableView : CCScrollLayerExt, CCScrollLayerExtDelegate {
    static TableView* create(TableViewDelegate*, TableViewDataSource*, cocos2d::CCRect) = 0x37eb30;
    void reloadData() = 0x37f970;

    float m_unknown = 0x1c8;
}

class BoomListView : cocos2d::CCLayer, TableViewDataSource, TableViewDelegate {
    static BoomListView* create(cocos2d::CCArray*, float, float, int, BoomListType) = 0x18ecb0;
    bool init(cocos2d::CCArray*, float, float, int, BoomListType) = 0x18ee00;
    void draw() = 0x18f790;
    
    virtual void setupList() = 0x18ef90;
    virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) = 0x18f030;
    virtual void cellHeightForRowAtIndexPath(CCIndexPath&, TableView*) = 0x18f070;
    virtual void didSelectRowAtIndexPath(CCIndexPath&, TableView*) = 0x18f090;
    virtual int numberOfRowsInSection(unsigned int, TableView*) = 0x18f0b0;
    virtual void numberOfSectionsInTableView(TableView*) = 0x18f0e0;
    virtual void cellForRowAtIndexPath(CCIndexPath&, TableView*) = 0x18f100;
    virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView*, TableViewCellEditingStyle, CCIndexPath&) = 0x18f770;
    virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*) = 0x18f050;
    virtual TableViewCell* getListCell(char const*) = 0x18f200;
    virtual void loadCell(TableViewCell*, int) = 0x18f4a0;

    TableView* m_tableView;
    cocos2d::CCArray* m_content;
    BoomListType m_type; 
    float m_width;
    float m_height;
    float m_cellHeight;
    int m_page;
}

class CreateMenuItem : CCMenuItemSpriteExtra {
    static CreateMenuItem* create(cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler) = 0x1c580;
}

class CustomListView : cocos2d::CCLayerColor {
    static CustomListView* create(cocos2d::CCArray*, float, float, int, BoomListType) = 0x10d410;
    void getListCell(char const*) = 0x10d560;
    void loadCell(TableViewCell*, int) = 0x10e610;
    void setupList() = 0x116e70;
}

class InheritanceNode : cocos2d::CCObject {

}

class HardStreak : cocos2d::CCDrawNode {
    virtual ~HardStreak() = 0x5bf00;
    virtual bool init() = 0x5c090;
    
    void addPoint(cocos2d::CCPoint) = 0x5c950;
    void reset() = 0x5c930;
    void resumeStroke() = 0x5c210;
    void stopStroke() = 0x5c8f0;

    cocos2d::CCArray* m_pointsArr; // 0x0160
    cocos2d::CCPoint m_currentPoint; // 0x0168
    float m_waveSize; // 0x0170
    float m_pulseSize; // 0x0174
    bool m_isSolid; // 0x0178
}
