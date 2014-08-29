#ifndef __MENU_SELECT_SCENE_H__
#define __MENU_SELECT_SCENE_H__

#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "cocosbuilder/CocosBuilder.h"

USING_NS_CC;
USING_NS_CC_EXT;
using namespace cocosbuilder;

class MenuSelectScene : public Layer
, public CCBSelectorResolver
{
    virtual SEL_MenuHandler onResolveCCBCCMenuItemSelector(Ref* pTarget, const char* pSelectorName);
    virtual Control::Handler onResolveCCBCCControlSelector(Ref* pTarget, const char* pSelectorName);
    
    void tappedStartButton(Ref* pTarget, Control::EventType pControlEventType);
    
public:
    MenuSelectScene();
    virtual ~MenuSelectScene();
    
    CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(MenuSelectScene, create);

    void pushBack(Ref* pSender);
};

#endif /* defined(__MENU_SELECT_SCENE_H__) */