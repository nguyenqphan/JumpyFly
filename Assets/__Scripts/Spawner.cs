﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

public class Spawner : MonoBehaviour {

	private PanelController panelcontroller;

	private int CubeMatNum;
	private int currentColor;

	private bool isBlockShape = false;				//Move Cube Up when it is true;
	private bool isEmptyShape = false;				//EmptyShape() is is progress
	private bool isZigzag = false;					//Control the initial position. Make the distance bigger	
	private bool isMoveDown = false;				//Move Cube down when it is true
	private bool isSpike = false;					//Controle the spike shape
	private float currShape;						//Store the value of the current shape
	private float currLine;							//Store the value of the current line
	private bool isObstacle = false;				//if obstacle is on, create another the line in the mid

	private Transform spawnerTrans;					//reference to the Transform component
	private GoldParticles goldParticleScript;
		
	public GameObject cube;							//reference to the Long Cube prefab
	public GameObject smallCube;					//reference to the small cube prefab
	public GameObject tinyCube;
	public GameObject gold;
	public GameObject playerBreakingParticle;
	public GameObject goldParticles;

	private Cube cubeComponent;						//reference to the Long Cube script
	private Cube smallCubeComponent;				//refernce to the small Cube script
	private Cube tinyCubeComponent;

	private CubeSkin cubeSkinComponent;
	private SmallCubeSkin smallCubeSkinComponent;
	private SmallCubeSkin tinyCubeSkinComponent;

	private Transform cubeTrans;					//reference to the transform of the long cube script
	private Transform smallCubeTrans;				//reference to the transform of the small cube script
	private Transform tinyCubeTrans;
	private Transform goldTrans;
	private Transform playerBreakingPartilceTrans;
	private Transform goldParticlesTrans;

	private List<GameObject> cubeList;				//Store long cubes in a list
	private List<GameObject> smallCubeList;			//Store small cubes in a list 
	private List<GameObject> tinyCubeList;
	private List<GameObject> goldList;
	private List<GameObject> playerBreakingParticleList;
	private List<GameObject> goldParticleList;

	private List<Transform> cubeTransList;			//Store transform components of long cubes in a list
	private List<Transform> smallCubeTransList;		//Store transform components of small cubes in a list
	private List<Transform> tinyCubeTransList;
	private List<Transform> goldTransList;
	private List<Transform> playerBreakingParticleTransList;
	private List<Transform> goldParticleTransList;


	private List<Cube> cubeComponentList;			//Store the cube components of long cubes in a list
	private List<Cube> smallCubeComponentList;		//Store the cube components of small cubes in a list
	private List<Cube> tinyCubeComponentList;

	private List<CubeSkin> cubeSkinComponentList;
	private List<SmallCubeSkin> smallCubeSkinComponentList;
	private List<SmallCubeSkin> tinyCubeSkinComponentList;

	private List<GoldParticles> goldScriptList;

	private int tinyCubeAmount;
	private int cubeAmount;							//The amount of long and small cubes to generate
	private int InitialCubeNum;						
	private bool isFirst;							//Refernce to the first cube to instantiate out two.
	private int goldAmount;							//The amount of gold that will be spawned

	private int xPos;								//store the x position for the next spawn
	private int yPos = 0;							//store the y position

	private float unit = 0f;						//the distance that cubes move
	private bool switchPlusMinus = true;			//switch between plus and minus unit

	private int wideSize;							//

	private int shapeValue;

	private Vector3 currCubePos()
	{
		return new Vector3(xPos, yPos, 0);	
	}

	void Awake()
	{
		spawnerTrans = GetComponent<Transform>();
		panelcontroller = GameObject.FindWithTag("UI").GetComponent<PanelController>();
	}

	// Use this for initialization
	void Start () {
		cubeAmount = 34;
		tinyCubeAmount = 34;
		InitialCubeNum = 34;
		isFirst = true;
		goldAmount = 4;

		wideSize = 3;

		shapeValue = Random.Range(0,29);
//		shapeValue = 1;
		countShape = shapeValue;

		cubeList = new List<GameObject>();
		smallCubeList = new List<GameObject>();
		tinyCubeList = new List<GameObject>();
		goldList = new List<GameObject>();
		playerBreakingParticleList = new List<GameObject>();
		goldParticleList = new List<GameObject>();

		cubeTransList = new List<Transform>();
		smallCubeTransList = new List<Transform>();
		tinyCubeTransList = new List<Transform>();
		goldTransList = new List<Transform>();
		playerBreakingParticleTransList = new List<Transform>();
		goldParticleTransList = new List<Transform>();

		cubeComponentList = new List<Cube>();
		smallCubeComponentList = new List<Cube>();
		tinyCubeComponentList = new List<Cube>();

		cubeSkinComponentList = new List<CubeSkin>();
		smallCubeSkinComponentList = new List<SmallCubeSkin>();
		tinyCubeSkinComponentList = new List<SmallCubeSkin>();

		goldScriptList = new List<GoldParticles>();

		GameObject  newPlayerParticle = Instantiate(playerBreakingParticle, spawnerTrans.position, Quaternion.identity) as GameObject;
		newPlayerParticle.SetActive(false);

		playerBreakingParticleList.Add(newPlayerParticle);

		playerBreakingPartilceTrans = newPlayerParticle.GetComponent<Transform>();
		playerBreakingParticleTransList.Add(playerBreakingPartilceTrans);

		for(int i = 0; i < 4; i++)
		{
			GameObject  newGoldParticles = Instantiate(goldParticles, spawnerTrans.position, Quaternion.identity) as GameObject;
			newGoldParticles.transform.parent = spawnerTrans;

			newGoldParticles.SetActive(false);
			goldParticleList.Add(newGoldParticles);

			goldParticlesTrans = newGoldParticles.GetComponent<Transform>();
			goldParticleTransList.Add(goldParticlesTrans);

			goldParticleScript = newGoldParticles.GetComponent<GoldParticles>();
//			Debug.Log(goldParticleScript);
			goldScriptList.Add(goldParticleScript);

		}

		for(int i = 0; i < cubeAmount; i++)
		{
			GameObject newCube = Instantiate(cube, spawnerTrans.position, Quaternion.identity) as GameObject;

			newCube.transform.parent = spawnerTrans;

			newCube.SetActive(false);

			cubeList.Add(newCube);

			cubeTrans = newCube.GetComponent<Transform>();
			cubeTransList.Add(cubeTrans);

			cubeComponent = newCube.GetComponent<Cube>();
			cubeComponentList.Add(cubeComponent);

			cubeSkinComponent = newCube.GetComponent<CubeSkin>();
			cubeSkinComponentList.Add(cubeSkinComponent);

		}

		for(int i = 0; i < cubeAmount; i++)
		{
			GameObject newSmallCube = Instantiate(smallCube, spawnerTrans.position, Quaternion.identity) as GameObject;

			newSmallCube.transform.parent = spawnerTrans;

			newSmallCube.SetActive(false);

			smallCubeList.Add(newSmallCube);

			smallCubeTrans = newSmallCube.GetComponent<Transform>();
			smallCubeTransList.Add(smallCubeTrans);

			smallCubeComponent = newSmallCube.GetComponent<Cube>();
			smallCubeComponentList.Add(smallCubeComponent);

			smallCubeSkinComponent = newSmallCube.GetComponent<SmallCubeSkin>();
			smallCubeSkinComponentList.Add(smallCubeSkinComponent);
		}

		for(int i = 0; i < tinyCubeAmount; i++)
		{
			GameObject newTinyCube = Instantiate(tinyCube, spawnerTrans.position, Quaternion.identity) as GameObject;

			newTinyCube.transform.parent = spawnerTrans;

			newTinyCube.SetActive(false);

			tinyCubeList.Add(newTinyCube);

			tinyCubeTrans = newTinyCube.GetComponent<Transform>();
			tinyCubeTransList.Add(tinyCubeTrans);

			tinyCubeComponent = newTinyCube.GetComponent<Cube>();
			tinyCubeComponentList.Add(tinyCubeComponent);

			tinyCubeSkinComponent = newTinyCube.GetComponent<SmallCubeSkin>();
			tinyCubeSkinComponentList.Add(tinyCubeSkinComponent);
		}

		for(int i = 0; i < goldAmount; i++)
		{
			GameObject newGold = Instantiate(gold, spawnerTrans.position, Quaternion.identity) as GameObject;
			newGold.transform.parent = spawnerTrans;
			newGold.SetActive(false);

			goldList.Add(newGold);

			goldTrans = newGold.GetComponent<Transform>();
			goldTransList.Add(goldTrans);
		}


		colorNum = Random.Range(0,24);
		CubeMatNum = Random.Range(0,24);

		StartCoroutine(LayoutCube());
	}

	public void StartSpawnCube()
	{
		StartCoroutine(SpawnCube());
	}

	private IEnumerator SpawnCube( )
	{
		for(int i = 0; i < cubeList.Count; i++)
		{
			if(!cubeList[i].activeInHierarchy)
			{
				currShape = ChooseShape();
				cubeTransList[i].position = new Vector3(xPos, YPosition(), 0f);
				cubeTransList[i].rotation = Quaternion.Euler(0f,0f,0f);

				cubeList[i].SetActive(true);

//				CubeMatNum = twoColorSwitch();


				cubeSkinComponentList[i].ChooseColor(CubeMatNum);
				if(isFirst)
				{
					


					if (!isMoveDown || isEmptyShape) {
						cubeComponentList [i].StartMoveCube (currShape);
					}
					else{
						cubeComponentList [i].StartMoveDown (currShape);

					}
				}
				else{
					if(GameManager.Instance.NumSpawnedCube % 2== 0 && GameManager.Instance.NumSpawnedCube > 50)
					{
//						CubeMatNum = RandomOneColor();
						CubeMatNum = twoColorSwitch();
					}
					if (!isBlockShape || isEmptyShape ) {
						cubeComponentList [i].StartMoveDown (currShape);
					}
					else{
						cubeComponentList[i].StartMoveCube(currShape);
					}
				}

				isFirst = !isFirst;
				if(isFirst){
					xPos++;
					GameManager.Instance.NumSpawnedCube += 2;
					break;
				}
			}
		}

		if(isExtented)
		{
			xPos--;
			for(int i = 0; i < tinyCubeList.Count; i++)
			{
				if(!tinyCubeList[i].activeInHierarchy)
				{
//					currShape = ChooseShape();
					tinyCubeTransList[i].position = new Vector3(xPos, YSmallPosition(), 0f);
					tinyCubeTransList[i].rotation = Quaternion.Euler(0f,0f,0f);
					tinyCubeSkinComponentList[i].ChooseColor(GameManager.Instance.TinyCubeColorNum);






					if (isV4 && currShape == 2 || currShape == 4 ) {
						tinyCubeList [i].SetActive (true);
						if (isFirst) {
							if (!isMoveDown || isEmptyShape) {
								tinyCubeComponentList [i].StartMoveCube (currShape);
							} else {
								tinyCubeComponentList [i].StartMoveDown (currShape );
							
							}
						} else {
							if (!isBlockShape || isEmptyShape) {
								tinyCubeComponentList [i].StartMoveDown (currShape);
							} else {
								tinyCubeComponentList [i].StartMoveCube (currShape);
							}
						}
					}else{
						if (!isV4) {
							tinyCubeList [i].SetActive (true);
							if (isFirst) {
								if (!isMoveDown || isEmptyShape) {
									tinyCubeComponentList [i].StartMoveCube (currShape);
								} else {
									tinyCubeComponentList [i].StartMoveDown (currShape );
							
								}
							} else {
								if (!isBlockShape || isEmptyShape) {
									tinyCubeComponentList [i].StartMoveDown (currShape);
								} else {
									tinyCubeComponentList [i].StartMoveCube (currShape);
								}
							}
						}
					}
		

					isFirst = !isFirst;
					if(isFirst){
						xPos++;
						GameManager.Instance.NumSpawnedCube += 2;
						break;
					}
				}
			}
		}

		if(numOfSpace == 3)
		{
			for(int i = 0; i < goldList.Count; i++)
			{
				if(!goldList[i].activeInHierarchy)
				{
					goldTransList[i].position = new Vector3(xPos, 0, 0);
					goldTransList[i].rotation = Quaternion.Euler(0f,0f,0f);

					goldList[i].SetActive(true);
					break;
				}
			}
		}

		if(isObstacle){
			xPos--;
			for(int i =0; i < smallCubeList.Count; i++)
			{
				if(!smallCubeList[i].activeInHierarchy)
				{
					smallCubeTransList[i].position = new Vector3(xPos, YSmallPosition(), 0f);
					smallCubeTransList[i].rotation = Quaternion.Euler(0f,0f,0f);
					smallCubeSkinComponentList[i].ChooseColor(GameManager.Instance.SmallCubeColorNum);

					smallCubeList[i].SetActive(true);

					if(isFirst){
						smallCubeComponentList[i].StartMoveCube(isStraight? StraigtLine() :PatternPosition());
					}else{
						smallCubeComponentList[i].StartMoveDown(isStraight? StraigtLine() :PatternPosition());
					}

					isFirst = !isFirst;
					if(isFirst){
						xPos++;
						GameManager.Instance.NumSpawnedCube += 2;

						break;
					}

				}
			}
		}

		if(isMidLineShape){
			xPos--;
			for(int i =0; i < tinyCubeList.Count; i++)
			{
				if(!tinyCubeList[i].activeInHierarchy)
				{
					tinyCubeTransList[i].position = new Vector3(xPos, YSmallPosition(), 0f);
					tinyCubeTransList[i].rotation = Quaternion.Euler(0f,0f,0f);

					tinyCubeSkinComponentList[i].ChooseColor(GameManager.Instance.TinyCubeColorNum);

					tinyCubeList[i].SetActive(true);

					if(isFirst){
						tinyCubeComponentList[i].StartMoveCube(DeadLine());
					}else{
						tinyCubeComponentList[i].StartMoveDown(DeadLine());
					}

					isFirst = !isFirst;
					if(isFirst){
						xPos++;
						GameManager.Instance.NumSpawnedCube += 2;

						break;
					}

				}
			}
		}

		isV4 = false;
		isMidLineShape = false;
		isObstacle = false;
		isExtented = false;
		yield return 0;
	}


	private float ChooseShape()
	{
		switch(shapeValue)
		{
		case 0:  return EmptyShape();
		case 1: return SquareShape();
		case 2: return BlockShape();
		case 3: return BlockShape2();
		case 4: return VReverse4();
		case 5: return Spike();
		case 6: return VReverseShape2();
		case 7: return BlockShape();
		case 8: return ObstacleShape();
		case 9: return Spike();
		case 10: return VShape2();
		case 11: return BlockShape();
		case 12: return VSpike();
		case 13: return BlockShape();
		case 14: return VReverseShape3();
		case 15: return Spike();
		case 16: return VShape3();	
		case 17: return BlockShape2();
		case 18: return VSpike();
		case 19: return VReverseShape();
		case 20: return BlockShape3();
		case 21: return BlockShapeR3();
		case 22: return BlockShape3 ();
		case 23: return BlockShapeR3();
		case 24: return BlockShape3();
		case 25: return VShape();
		case 26: return BlockShape2();
		case 27: return VShape4();
		case 28: return Spike();
		case 29: return ObstacleShape();
		case 30: return BlockShape();
		case 31: return MidLineShape();				//Deadly Shape
		default: return EmptyShape();
		}
	}
		
	private int numOfSpace = 0;
	private int maxSpace = 4;
	private int countShape = 0;
	private bool isOneRound = false;
	private float EmptyShape()
	{
		isEmptyShape = true;
		isZigzag = false;
//		Debug.Log(shapeValue + "  "  + countShape);
		if (isFirst) {
			numOfSpace++;
		}
		else{
			if (numOfSpace > maxSpace) {

				countShape++;
				shapeValue = shapeValue + countShape;								//Change the shape

//				Debug.Log(shapeValue + "  "  + countShape);

				if(shapeValue == 31)
				{
					isStraight = !isStraight;
					if(!isOneRound){
						countShape = 1;
						shapeValue = 1;
						isOneRound = !isOneRound;
					}
				}
				if(shapeValue > 32){
					countShape = 1;
					shapeValue = 1;
				}


				numOfSpace = 0;								//reset numOfSpace
			}
		}

		return 6;
	}


	private float SquareShape(){
		isBlockShape = false;							//Make the bottom cubes go down
		if (isFirst) {
			if (switchPlusMinus) {
				unit = unit + 1f;
				if (unit > 5f) {
					switchPlusMinus = !switchPlusMinus;
				}
			} else {
				unit = unit - 1f;
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}
		}else{
			if (unit == 0) {
				shapeValue =0;								//change the shape, exit this function
			}
		}
		return unit;
	}


	private float VReverseShape(){
		isEmptyShape = false;
		isBlockShape = true;
		isMoveDown = false;
		isZigzag = true;


		if (isFirst) {
			if (switchPlusMinus) {
				unit = unit + 1f;
				if (unit > 5f) {
					switchPlusMinus = !switchPlusMinus;
				}
			} else {
				unit = unit - 1f;
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}

			return unit + 1;
		}else{
			if (unit == 0) {
				shapeValue =0;								//change the shape, exit this function
			}
		}
		return unit;
	}

	private float VReverseShape2(){
		isEmptyShape = false;
		isBlockShape = true;
		isMoveDown = false;
		isZigzag = true;
		if (isFirst) {
			if (switchPlusMinus) {
				unit = unit + 1f;
				if(unit == 6)
				{	
					if(flatUnit < 17)
					{
						unit--;
						flatUnit++;

					}
					else{
						flatUnit = 0;
					}
					flatUnit++;
					return unit;
				}

				if (unit > 5f) {
					switchPlusMinus = !switchPlusMinus;
				}
			} else {
				unit = unit - 1f;
				if(unit == 4)
				{	
					if(flatUnit < 18)
					{
						unit++;
						flatUnit++;

					}
					else{
						flatUnit = 0;
					}
					flatUnit++;
					return unit;
				}
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}
		}else{
			if (unit == 0) {
				shapeValue =0;								//change the shape, exit this function
			}
		}
		return unit;
	}
		
	private int pauseUnit = 2;
	private int flatUnit = 0; 
	private float VSpike(){
		isEmptyShape = false;
		isBlockShape = true;
		isMoveDown = false;
		isZigzag = true;
		if (isFirst) {
			if (switchPlusMinus) {
				unit = unit + 1f;
				if(unit == pauseUnit)
				{	
					if(flatUnit < 4)
					{
						unit--;
						flatUnit++;

					}
					else{
						flatUnit = 0;
						pauseUnit++;
					}
					flatUnit++;
//					return unit;
				}

				if (unit > 5f) {

					switchPlusMinus = !switchPlusMinus;
					pauseUnit = 5;
				}
			} else {
				unit = unit - 1f;
				if(unit == pauseUnit)
				{	
					if(flatUnit < 4)
					{
						unit++;
						flatUnit++;

					}
					else{
						flatUnit = 0;
						pauseUnit--;
					}
					flatUnit++;
//					return unit;
				}
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}
		}else{
			if (unit == 0) {
				shapeValue =0;								//change the shape, exit this function
			}
		}


		if(isFirst ){
			isSpike = !isSpike;
			if(isSpike){
				return unit;
			}else{
				return unit + Random.Range(1,3);
			}

		}else
		{
			if(isSpike){
				return unit;
			}else{
				return unit - Random.Range(2, 5);
			}
		}


	}

	private float VReverseShape3(){
//		Debug.Log("VReverseshape3");
		isEmptyShape = false;
		isBlockShape = true;
		isMoveDown = false;
		isZigzag = true;

		isExtented = true;
		if (isFirst) {
			if (switchPlusMinus) {
				if (!isDouble) {
					unit = unit + 1f;
					isDouble = !isDouble;
//					Debug.Log("Plus");
				}else{
					isDouble = !isDouble;
				}

				if (unit > 3f) {
					switchPlusMinus = !switchPlusMinus;
//					Debug.Log("Switch");
				}
			} else {
				if (!isDouble) {
					unit = unit - 1f;
					isDouble = !isDouble;
				}else{
					isDouble = !isDouble;
				}
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}
		}else{
			if (!isDouble) {
				if (unit == 0) {
					shapeValue = 0;								//change the shape, exit this function
				}
			}
		}
		return unit;
	}


	private float VReverse4(){
		//		Debug.Log("VReverseshape3");
		isV4 = true;
		isEmptyShape = false;
		isBlockShape = true;
		isMoveDown = false;
		isZigzag = true;

		isExtented = true;
		if (isFirst) {
			if (switchPlusMinus) {
				if (!isDouble) {
					unit = unit + 1f;
					isDouble = !isDouble;
					//					Debug.Log("Plus");
				}else{
					isDouble = !isDouble;
				}

				if (unit > 3f) {
					switchPlusMinus = !switchPlusMinus;
					//					Debug.Log("Switch");
				}
			} else {
				if (!isDouble) {
					unit = unit - 1f;
					isDouble = !isDouble;
				}else{
					isDouble = !isDouble;
				}
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}
		}else{
			if (!isDouble) {
				if (unit == 0) {
					shapeValue = 0;								//change the shape, exit this function
				}
			}
		}
		return unit;
	}


	private float VShape(){
		isMoveDown = true;
		isEmptyShape = false;
		isBlockShape = false;
		isZigzag = true;
		if (isFirst) {
			if (switchPlusMinus) {
				unit = unit + 1f;

				if (unit > 5f) {
					switchPlusMinus = !switchPlusMinus;
				}
			} else {
				unit = unit - 1f;
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}
			return unit;
		}else{
			if (unit == 0) {
				shapeValue =0;								//change the shape, exit this function
			}
		}
		return unit + 1;
	}

	private float VShape2(){


		isMoveDown = true;
		isEmptyShape = false;
		isZigzag = true;
		if (isFirst) {
			if (switchPlusMinus) {
				unit = unit + 1f;
				if(unit == 6)
				{	
					if(flatUnit < 17)
					{
						unit--;
						flatUnit++;

					}
					else{
						flatUnit = 0;
					}
					flatUnit++;
					return unit;
				}
				if (unit > 5f) {
					switchPlusMinus = !switchPlusMinus;
				}
			} else {
				unit = unit - 1f;
				if(unit == 4)
				{	
					if(flatUnit < 18)
					{
						unit++;
						flatUnit++;

					}
					else{
						flatUnit = 0;
					}
					flatUnit++;
					return unit;
				}
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}
		}else{
			if (unit == 0) {
				shapeValue =0;								//change the shape, exit this function
			}
		}
		return unit;
	}
		
	private bool isExtented = false;
	private bool isDouble = false;
	private float VShape3(){
//		Debug.Log("Vshape3");
		isMoveDown = true;
		isEmptyShape = false;
		isBlockShape = false;
		isZigzag = true;
		isExtented = true;
		if (isFirst) {
			if (switchPlusMinus) {
				if (!isDouble) {
					unit = unit + 1f;
					isDouble = !isDouble;
//					Debug.Log("Plus");
				}else{
					isDouble = !isDouble;
				}

				if (unit > 3f) {
					switchPlusMinus = !switchPlusMinus;
//					Debug.Log("Switch");
				}
			} else {
				if (!isDouble) {
					unit = unit - 1f;
					isDouble = !isDouble;
				}else{
					isDouble = !isDouble;
				}
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}
			return unit - 2;
		}else{
			if (!isDouble) {
				if (unit == 0) {
					shapeValue = 0;								//change the shape, exit this function
				}
			}
		}
		return unit;
	}

	private bool isV4 = false;
	private float VShape4(){
		//		Debug.Log("Vshape3");
		isV4 = true;
		isMoveDown = true;
		isEmptyShape = false;
		isBlockShape = false;
		isZigzag = true;
		isExtented = true;
		if (isFirst) {
			if (switchPlusMinus) {
				if (!isDouble) {
					unit = unit + 1f;
					isDouble = !isDouble;
					//					Debug.Log("Plus");
				}else{
					isDouble = !isDouble;
				}

				if (unit > 3f) {
					switchPlusMinus = !switchPlusMinus;
					//					Debug.Log("Switch");
				}
			} else {
				if (!isDouble) {
					unit = unit - 1f;
					isDouble = !isDouble;
				}else{
					isDouble = !isDouble;
				}
				if (unit  == 0) {
					switchPlusMinus = !switchPlusMinus;

				}
			}
		}else{
			if (!isDouble) {
				if (unit == 0) {
					shapeValue = 0;								//change the shape, exit this function
				}
			}
		}
		return unit;
	}

	private float BlockShape()
	{
		isMoveDown = false;
		isEmptyShape = false;
		isBlockShape = true;
		if(isFirst )
		{
			wideSize--;
			return 5f;
		}
		else
		{
			if(wideSize < 0)
			{
				shapeValue = 0;
				wideSize = 3;
			}	
		}

		return 4;
	}
	private float BlockShape3()
	{
		isMoveDown = false;
		isEmptyShape = false;
		isBlockShape = true;
		if(isFirst )
		{
			wideSize--;
			return 3f;
		}
		else
		{
			if(wideSize < 0)
			{
				shapeValue = 0;
				wideSize = 3;
			}	
		}

		return 3;
	}



	private float BlockShape2()
	{
		isEmptyShape = false;
		isBlockShape = false;
		isMoveDown = true;

		if(isFirst )
		{
			wideSize--;
			return 4f;
		}
		else
		{
			if(wideSize < 0)
			{
				shapeValue = 0;
				wideSize = 3;
			}	
		}



		return 5;
	}

	private float BlockShapeR3()
	{
		isEmptyShape = false;
		isBlockShape = false;
		isMoveDown = true;

		if(isFirst )
		{
			wideSize--;
			return 3f;
		}
		else
		{
			if(wideSize < 0)
			{
				shapeValue = 0;
				wideSize = 3;
			}	
		}



		return 4;
	}


	private int spikeSize  = 6;
	private float Spike()
	{
		isEmptyShape = false;
		isBlockShape = false;
		isMoveDown = true;
		isZigzag = true;

		if(isFirst )
		{
			spikeSize--;
			isSpike = !isSpike;
			if(isSpike)
				return 6f;
			else
				return 7f;
		}
		else
		{
			if(spikeSize < 0)
			{
				shapeValue = 0;
				spikeSize = 6;

			}	
		}

		if(isSpike)
			return 6f;
		else 
			return 7f;
	}
		


	private int numOfSpace1 = 0;
	private int maxSpace1 = 15;
//	private int countShape1 = 0;
	private float ObstacleShape()
	{
		isEmptyShape = true;
		isZigzag = false;
		isObstacle = true;
		if (isFirst) {
			numOfSpace1++;
		}
		else{
			if (numOfSpace1 > maxSpace1) {
				shapeValue = 0;	
				numOfSpace1 = 0;								//reset numOfSpace
//				Debug.Log(shapeValue);
			}
		}

		return 4;
	}

	private int countPat  = 0;
	private int countPattern = 0;
	private bool isPattern;
	private float PatternPosition()
	{	
		if (isFirst) {
			countPat++;

			if(countPat % 3 == 0)
			{
				countPattern++;
			}
//			isPattern = !isPattern;
			if (countPattern % 2 == 0)
				return 2f;
			else
				return 3f;
		}
		else{
			if (countPattern % 2 == 0)
				return 2f;
			else
				return 3f;
		}
	}

	private bool isStraight = false;
	private float StraigtLine()
	{
		return 2f;	
	}

	private float DeadLine()
	{
		if(isFirst)
			return 2f;
		else 
			return 1f;
	}

	private bool isMidLineShape;
	private float MidLineShape()
	{

//		Debug.Log("Here");
		isEmptyShape = true;
		isZigzag = false;
		isMidLineShape = true;
		isObstacle = false;
		if (isFirst) {
			numOfSpace1++;
		}
		else{
			if (numOfSpace1 > maxSpace1) {
				shapeValue = 0;	
				numOfSpace1 = 0;								//reset numOfSpace
			}
		}

		return 2;
	}
	IEnumerator LayoutCube()
	{
		for(int i = 0; i < InitialCubeNum; i += 2)
		{

			cubeTransList[i].position = new Vector3(xPos, yPos + 19f, 0f);
			cubeTransList[i].rotation = Quaternion.Euler(0f,0f,0f);
			cubeSkinComponentList[i].ChooseColor(CubeMatNum);


			cubeList[i].SetActive(true);

			cubeTransList[i + 1].position =  new Vector3(xPos, yPos - 19, 0f);
			cubeTransList[i + 1].rotation = Quaternion.Euler(0f,0f,0f);
			cubeSkinComponentList[i + 1].ChooseColor(CubeMatNum);
			cubeList[i + 1].SetActive(true);
			xPos++;
			yield return 0;
		}
	}

	public void StartClearScene()
	{
		StartCoroutine(ClearScene());
	}

	IEnumerator ClearScene()
	{
		for(int i = 0; i < cubeList.Count; i+= 2)
		{
			cubeComponentList[i].StartMoveCube(60f);
			cubeComponentList[i+ 1].StartMoveDown(60f);

			yield return 0;
		}

		for(int i = 0; i < smallCubeList.Count; i+= 2)
		{
			if(smallCubeList[i].activeInHierarchy)
			{
				smallCubeComponentList[i].StartMoveCube(30f);
				smallCubeComponentList[i+ 1].StartMoveDown(30f);
			}

			yield return 0;
		}

		for(int i = 0; i < tinyCubeList.Count; i+= 2)
		{
			if(tinyCubeList[i].activeInHierarchy)
			{
				tinyCubeComponentList[i].StartMoveCube(30f);
				tinyCubeComponentList[i+ 1].StartMoveDown(30f);
			}

			yield return 0;
		}


		SceneManager.LoadScene(0);
		panelcontroller.ShowX2DoubleButton();
	}

	private float YPosition()
	{

		if(isFirst)
		{
			if (!isExtented) {
				if (isZigzag || isObstacle)
					return 13f;
				else
					return 12f;
			}else{
				return 16f;
			}
		}
		else{
			if (!isExtented) {
				if (isZigzag || isObstacle)
					return -13f;
				else
					return -12f;
			}
			else{
				return -16f;
			}
		}
	}

	private float YSmallPosition()
	{

		if(isFirst){
			if (!isExtented) {
				if (isMidLineShape)
					return 0;
				else
					return 1;
			}else{
				return 4f;
			}
			
		}
		else{
			if (!isExtented) {
				return -1;
			}else{
				return -3f;
			}
		}
	}

	private bool isTwoColorSwitch = true;
//	private int countCube = 1;
	private int colorNum = 1;
	private int numOfSwitches = 0;
	private int twoColorSwitch()
	{
//		countCube++;
//		if(countCube % 2 == 0){
//			isTwoColorSwitch = !isTwoColorSwitch;
//
//		}
		numOfSwitches++;
		if(numOfSwitches > 48)
		{
			numOfSwitches = 0;
			colorNum = RandomOneColor();
		}
		isTwoColorSwitch = !isTwoColorSwitch;
		if(isTwoColorSwitch){
			return colorNum;
		}else{
			
			return colorNum + 1;
		}
	}


	private int RandomOneColor()
	{
		return Random.Range(0,24);
	}

	public void PlayPlayerBreaking(Transform trans)
	{
		playerBreakingParticleTransList[0].position = trans.position;
		playerBreakingParticleTransList[0].rotation = trans.rotation;

		playerBreakingParticleList[0].SetActive(true);

	}

	public void StartGoldBreaking(Transform trans)
	{
		StartCoroutine(PlayGoldBreaking(trans));
	}

	private IEnumerator PlayGoldBreaking(Transform trans)
	{
		for(int i = 0; i < goldParticleList.Count; i++)
		{
			if(!goldParticleList[i].activeInHierarchy)
			{
				goldParticleTransList[i].position = trans.position;

				goldParticleList[i].SetActive(true);
				goldScriptList[i].SetGoldDeactivate();
				break;
			}
		}

		yield return 0;

	}
}