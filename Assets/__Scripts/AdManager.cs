using UnityEngine;
using System.Collections;
using admob;


public class AdManager : MonoBehaviour {

	private PanelController panelcontroller;

	public static AdManager Instance{set;get;}



	#if UNITY_ANDROID
	private string bannerAdUnitID = "ca-app-pub-8917790266468664/9193255838";
	private string interAddUnitId = "ca-app-pub-8917790266468664/9114360633";
	private string videoAdUnitId = "ca-app-pub-8917790266468664/2928226231";
	#elif UNITY_IOS
	private string bannerAdUnitID = "ca-app-pub-8917790266468664/6100188632";
	private string interAddUnitId = "ca-app-pub-8917790266468664/9760162231";
	private string videoAdUnitId = "ca-app-pub-8917790266468664/5190361837";
	#endif

	void Awake()
	{
		panelcontroller = GameObject.FindWithTag("UI").GetComponent<PanelController>();
	}

	void Start () {
		Instance = this;
		DontDestroyOnLoad(gameObject);


		Admob.Instance().setTesting(true);
		Admob.Instance().initAdmob(bannerAdUnitID,interAddUnitId);
	

		Admob.Instance().loadInterstitial();
		Admob.Instance().loadRewardedVideo(videoAdUnitId);
		Admob.Instance().setTesting(true);
	}


	public void ShowInterstitialAd()
	{
		if(Admob.Instance().isInterstitialReady())
		{
			Admob.Instance().showInterstitial();
		}
	}

	public void ShowRewardedAd()
	{
		if(Admob.Instance().isRewardedVideoReady())
		{
			Admob.Instance().showRewardedVideo();
			GameManager.Instance.AmountOfDiamond+= 30;
			GameManager.Instance.Save();
			panelcontroller.HideAdButton();

		}
	}
		

}
