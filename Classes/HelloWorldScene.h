#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__
#include <ui/UIWidget.h>
#include <ui/UIButton.h>
#include "VdopiaAdNativeAPI.h"
#include "cocos2d.h"

class HelloWorld : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    void interstitialAdLoaded();
    void interstitialAdFailed();
    void interstitialAdDismissed();
    void interstitialAdClicked();
    void interstitialAdShown();

    void rewardAdLoaded();

    void rewardAdFailed();

    void rewardAdDismissed();

    void rewardAdShownError();

    void rewardAdCompleted();

    void rewardAdShown();

    CREATE_FUNC(HelloWorld);
    void setButtonVisible(bool value, int tag);
};

#endif // __HELLOWORLD_SCENE_H__
