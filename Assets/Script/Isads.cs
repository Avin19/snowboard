using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Isads : MonoBehaviour
{

    [SerializeField] string appKey ="14b6e9219";
    // Start is called before the first frame update
    void Start()
    {
        IronSource.Agent.init (appKey, IronSourceAdUnits.BANNER);
    }
    private void OnEnable() {
        IronSourceEvents.onSdkInitializationCompletedEvent += SdkInitializationCompletedEvent;
        // banner

        IronSourceBannerEvents.onAdLoadedEvent += BannerOnAdLoadedEvent;
        IronSourceBannerEvents.onAdLoadFailedEvent += BannerOnAdLoadFailedEvent;
        IronSourceBannerEvents.onAdClickedEvent += BannerOnAdClickedEvent;
        IronSourceBannerEvents.onAdScreenPresentedEvent += BannerOnAdScreenPresentedEvent;
        IronSourceBannerEvents.onAdScreenDismissedEvent += BannerOnAdScreenDismissedEvent;
        IronSourceBannerEvents.onAdLeftApplicationEvent += BannerOnAdLeftApplicationEvent;
    }

    void OnApplicationPause(bool isPaused) 
    {                 
        IronSource.Agent.onApplicationPause(isPaused);
    }

     private void SdkInitializationCompletedEvent(){
        IronSource.Agent.validateIntegration();
        IronSource.Agent.loadBanner(IronSourceBannerSize.BANNER, IronSourceBannerPosition.BOTTOM);

    }

    // Banner Callback

    void BannerOnAdLoadedEvent(IronSourceAdInfo adInfo) 
{

    Debug.Log("banner Loaded");
}
//Invoked when the banner loading process has failed.
void BannerOnAdLoadFailedEvent(IronSourceError ironSourceError) 
{
}
// Invoked when end user clicks on the banner ad
void BannerOnAdClickedEvent(IronSourceAdInfo adInfo) 
{
}
//Notifies the presentation of a full screen content following user click
void BannerOnAdScreenPresentedEvent(IronSourceAdInfo adInfo) 
{
}
//Notifies the presented screen has been dismissed
void BannerOnAdScreenDismissedEvent(IronSourceAdInfo adInfo) 
{
}
//Invoked when the user leaves the app
void BannerOnAdLeftApplicationEvent(IronSourceAdInfo adInfo) 
{
}
   
}
