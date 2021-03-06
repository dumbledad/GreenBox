﻿using UnityEngine;
using MonoDLLTest;

public class CubeScript : MonoBehaviour {

	Calculations calculations = new Calculations();

	void Start () {
		calculations.Init();
	}
	
	void Update () {
		if (calculations.isSquared) {
			if (calculations.isCubed) {
				GetComponent<Renderer>().material.color = Color.magenta;
			} else {
				GetComponent<Renderer>().material.color = Color.green;
			}
		} else {
			GetComponent<Renderer>().material.color = Color.black;
		}
	}
}