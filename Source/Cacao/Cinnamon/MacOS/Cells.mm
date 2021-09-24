class TableViewCell : cocos2d::CCLayer {
    TableViewCell(char const*, float, float) = 0x383de0;
    volatile char pad[0x1c0-0x170];
    float m_parentHeight;
    float m_height;
    cocos2d::CCLayerColor* m_backgroundLayer;
    cocos2d::CCLayer* m_mainLayer;
}

class ArtistCell : TableViewCell {
    ArtistCell(char const*, float, float) = 0x11c740;
    void draw() = 0x11c980;
    bool init() = 0x11c7c0;
    void loadFromObject(SongInfoObject*) = 0x1118b0;
    void onNewgrounds(cocos2d::CCObject*) = 0x11c7e0;
    void updateBGColor(int) = 0x110460;
    void* m_idk;
}

// class CommentCell : TableViewCell {
//     void loadFromComment(GJComment*) = 0x111c70;
// }

// class CustomSongCell : TableViewCell {
//     void loadFromObject(SongInfoObject*) = 0x110220;
// }


