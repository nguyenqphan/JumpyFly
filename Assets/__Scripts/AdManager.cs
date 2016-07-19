using UnityEngine;
using System.Collections;
using admob;

public class AdManager : MonoBehaviour {


	private string bannerAdIOS = "ca-app-pub-8917790266468664/6100188632";
	private string interstitialAdIOS = "ca-app-pub-3940256099942544/4411468910";

	private string bannerAdAndroid = "ca-app-pub-8917790266468664/9193255838";
	private string interstitialAdAndroid = "ca-app-pub-8917790266468664/9114360633";

	private string bannerAd;
	private string interstitialAd;


	void Start()
	{

		#if UNITY_IOS
		bannerAd = bannerAdIOS;
		interstitialAd = interstitialAdIOS;
		#elif UNITY_ANDROID
		bannerAd = bannerAdAndroid;
		interstitialAd = interstitialAdAndroid;
		#endif

		Admob.Instance();
		Admob.Instance().interstitialEventHandler += onInterstitialEvent;
		Admob.Instance().initAdmob(bannerAd,interstitialAd);

//		Admob.Instance().initAdmob("ca-app-pub-3940256099942544/2934735716","ca-app-pub-3940256099942544/4411468910");
		Admob.Instance().loadInterstitial();
		Admob.Instance().loadInterstitial();
		Admob.Instance().setTesting(true);



	}

	public void ShowInterstitialAd()
	{
		if(Admob.Instance().isInterstitialReady())
		{
			Admob.Instance().showInterstitial();
		}
	}


	void onInterstitialEvent(string eventName, string msg)
	{
		Debug.Log("handler onAdmobEvent---" + eventName + "   " + msg);
		if (eventName == AdmobEvent.onAdLoaded)
		{
			//			Admob.Instance().showInterstitial();
		}
	}

}
