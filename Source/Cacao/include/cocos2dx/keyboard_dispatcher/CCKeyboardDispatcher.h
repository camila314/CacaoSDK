#ifndef __CCKEYBOARD_DISPATCHER_H__
#define __CCKEYBOARD_DISPATCHER_H__

#include "custom/Delegates/CCKeyboardDelegate.h"
#include "cocoa/CCArray.h"

NS_CC_BEGIN

class CC_DLL CCKeyboardDispatcher : public CCObject 
{
public:
	CCKeyboardDispatcher();
	CCKeyboardDispatcher(const CCKeyboardDispatcher&);
	virtual ~CCKeyboardDispatcher();

	CCKeyboardDispatcher& operator=(const CCKeyboardDispatcher&);

	void addDelegate(CCKeyboardDelegate* pDelegate);

	void removeDelegate(CCKeyboardDelegate* pDelegate);

	void forceAddDelegate(CCKeyboardDelegate* pDelegate);

	void forceRemoveDelegate(CCKeyboardDelegate* pDelegate);

	enumKeyCodes convertKeyCode(enumKeyCodes key);

	bool dispatchKeyboardMSG(enumKeyCodes key, bool);
	
	inline bool getAltKeyPressed() const {return m_alt;}

	inline bool getCommandKeyPressed() const;

	inline bool getControlKeyPressed() const {return m_ctrl;}

	inline bool getShiftKeyPressed() const {return m_shift;}

	const char* keyToString(enumKeyCodes key);

	void updateModifierKeys(bool, bool, bool, bool);

protected:
	CCArray* m_pDelegates;
	bool m_bLocked;
	bool m_bToAdd;
	bool m_bToRemove;
	char m_unknown;
	ccCArray* m_pHandlersToAdd;
	ccCArray* m_pHandlersToRemove;
	bool m_shift;
	bool m_ctrl;
	bool m_alt;
	bool m_cmd;
	//there's more here, check the initializer
};

NS_CC_END

#endif