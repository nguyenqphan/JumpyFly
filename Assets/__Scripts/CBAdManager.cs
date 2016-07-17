using UnityEngine;
using System.Collections;
using ChartboostSDK;
public class CBAdManager : MonoBehaviour {

	private PanelController panelController;
	private UpdateScore updateScore;
	private Spawner spawner;
	private SoundManager soundManager;

	void OnEnable()
	{
		Chartboost.didCompleteRewardedVideo += DidCompleteRewaredVideo;
	}



	void OnDisable()
	{
		Chartboost.didCompleteRewardedVideo -= DidCompleteRewaredVideo;
	}

	void Awake()
	{
		soundManager = GameObject.FindWithTag("GameManager").GetComponent<SoundManager>();
		updateScore = GameObject.FindWithTag("UI").GetComponent<UpdateScore>();
		panelController = GameObject.FindWithTag("UI").GetComponent<PanelController>();
	}

	void Start()
	{
//		Chartboost.cacheRewardedVideo(CBLocation.Default);			//grap a video to show later
	
	}

	public void ShowRewardedVideo()
	{
		Chartboost.showRewardedVideo(CBLocation.Default);
	}

	void DidCompleteRewaredVideo(CBLocation cbLocation, int reward)
	{
		spawner = GameObject.FindWithTag("Spawner").GetComponent<Spawner>();
		GameManager.Instance.AmountOfDiamond+= 30;
		GameManager.Instance.IsRewarded = true;
		updateScore.ChangeAmountOfDiamond();
		panelController.adsButton.SetActive(false);

		GameManager.Instance.Save();
		spawner.PlayRewardedParticle();
		soundManager.PlayAwardClip();
		
	}
}
