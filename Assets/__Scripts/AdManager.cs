using UnityEngine;
using System.Collections;
using admob;

public class AdManager : MonoBehaviour {

	void Start()
	{

		Admob.Instance();
		Admob.Instance().interstitialEventHandler += onInterstitialEvent;
		//		Admob.Instance().initAdmob("ca-app-pub-8917790266468664/6100188632","ca-app-pub-8917790266468664/9760162231");

		Admob.Instance().initAdmob("ca-app-pub-3940256099942544/2934735716","ca-app-pub-3940256099942544/4411468910");
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
