using UnityEngine;
using System.Collections;

public class PlayerManager : MonoBehaviour {

	private Transform thisTransform;

	void Awake()
	{
		thisTransform = GetComponent<Transform>();
		GameObject instance = Instantiate(Resources.Load(GameManager.Instance.CurPlayerName, typeof(GameObject))) as GameObject;
		instance.transform.parent = thisTransform;

	}

	// Use this for initialization
	void Start () {
		
	}
		
}
