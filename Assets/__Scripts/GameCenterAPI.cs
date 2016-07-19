using UnityEngine;
using System.Collections;
using UnityEngine.SocialPlatforms;
using UnityEngine.SocialPlatforms.GameCenter;

public class GameCenterAPI : MonoBehaviour {

	private UpdateScore updateScore;
	private Spawner spawner;

	void Awake()
	{
		updateScore = GameObject.FindWithTag("UI").GetComponent<UpdateScore>();
		spawner = GameObject.FindWithTag("Spawner").GetComponent<Spawner>();
	}

	void Start()
	{
		Social.localUser.Authenticate (success => {
	});


	}

	void UniversalLBCallback(bool success)
	{
		//Callback from ReportScore
	}

	public void GCShowLeaderBoard()
	{
		Social.localUser.Authenticate (success => {
			if (success) {
				Social.ShowLeaderboardUI();
			}
		});

	}

	public void GCShowAchievement()
	{
		Social.localUser.Authenticate (success => {
			if (success) {
				Social.ShowAchievementsUI();
			}
		});
	}

	public void GCReportScore()
	{
		if(GameManager.Instance.Score < GameManager.Instance.BestScore){
			Social.ReportScore(GameManager.Instance.Score, "topplayers_ios", CallbackScore);
		}else{
			Social.ReportScore(GameManager.Instance.BestScore, "topplayers_ios", CallbackScore);
		}
	}


	void CallbackScore(bool success)
	{
		
	}

	public  void GCReportAchievement()
	{
		if (GameManager.Instance.Score > 99) {
			Social.ReportProgress ("expert_achivement", 100.0d, CallbackExpert);
		}

		if (GameManager.Instance.Score > 79) {
			Social.ReportProgress ("advance_achievement", 100.0d, CallbackAdvance);
		}

		if (GameManager.Instance.Score > 59) {
			Social.ReportProgress ("proficient_achivement", 100.0d, CallbackProficient);
		}
		if (GameManager.Instance.Score > 39) {
			Social.ReportProgress ("intermediate_achievement", 100.0d, CallbackIntermediate);
		}
		if (GameManager.Instance.Score > 19) {
			Social.ReportProgress ("newbie_achievement", 100.0d, CallbackNewbie);
		}
	}

	private void CallbackNewbie(bool success)
	{
		if (success) {
			GameManager.Instance.AmountOfDiamond += 30;
			updateScore.ChangeAmountOfDiamond ();
			GameManager.Instance.Save();
			spawner.PlayRewardedParticle ();
		}
	}

	private  void CallbackIntermediate(bool success)
	{
		if (success) {
			GameManager.Instance.AmountOfDiamond += 100;
			updateScore.ChangeAmountOfDiamond ();
			GameManager.Instance.Save();
			spawner.PlayRewardedParticle ();
		}
	}


	private  void CallbackProficient(bool success)
	{
		if (success) {
			GameManager.Instance.AmountOfDiamond += 200;
			updateScore.ChangeAmountOfDiamond ();
			GameManager.Instance.Save();
			spawner.PlayRewardedParticle ();
		}
		
	}

	private  void CallbackAdvance(bool success)
	{
		if (success) {
			GameManager.Instance.AmountOfDiamond += 400;
			updateScore.ChangeAmountOfDiamond ();
			GameManager.Instance.Save();
			spawner.PlayRewardedParticle ();
		}
	}
		

	public   void CallbackExpert(bool success)
	{
		if (success) {
			GameManager.Instance.AmountOfDiamond += 600;
			updateScore.ChangeAmountOfDiamond ();
			GameManager.Instance.Save();
			spawner.PlayRewardedParticle ();
		}
	}
}
