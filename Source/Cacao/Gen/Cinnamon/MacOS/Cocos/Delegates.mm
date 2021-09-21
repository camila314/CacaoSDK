class cocos2d::CCMouseDelegate {
    volatile void cocos2d::CCMouseDelegate::rightKeyDown() {};
    volatile void cocos2d::CCMouseDelegate::rightKeyUp() {};
    volatile void cocos2d::CCMouseDelegate::scrollWheel(float, float) {};

    // volatile cocos2d::CCMouseDelegate::CCMouseDelegate() {};
}

class cocos2d::CCKeyboardDelegate {
    volatile void cocos2d::CCKeyboardDelegate::keyDown(cocos2d::enumKeyCodes) {};
    volatile void cocos2d::CCKeyboardDelegate::keyUp(cocos2d::enumKeyCodes) {};

    volatile cocos2d::CCKeyboardDelegate::CCKeyboardDelegate() {};
}

class cocos2d::CCIMEDelegate {
    virtual ~CCIMEDelegate() = 0x277670;
    virtual bool attachWithIME() = 0x2776a0;
    virtual bool detachWithIME() = 0x277880;
    // virtual bool canAttachWithIME() = 0x5ef30;
    // virtual bool didAttachWithIME() = 0x5ef40;
    // virtual bool canDetachWithIME() = 0x5ef50;
    // virtual bool didDetachWithIME() = 0x5ef60;
    // virtual void insertText(char const*, int) = 0x5ef70;
    // virtual void deleteBackward() = 0x5ef80;
    // virtual void getContentText() = 0x5ef90;
    // virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x126e80;
    // virtual void keyboardDidShow(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5efa0;
    // virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x126e90;
    // virtual void keyboardDidHide(cocos2d::CCIMEKeyboardNotificationInfo&) = 0x5efb0;

    CCIMEDelegate() = 0x277310;
}
