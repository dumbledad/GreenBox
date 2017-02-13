using AOT;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public class CubeScript : MonoBehaviour {

	[DllImport ("__Internal")] private static extern int square(int x);

	int toSquare = 2;
	int squared = -1;

	void Start () {
		squared = square(toSquare);
	}
	
	void Update () {
		if (squared == toSquare * toSquare) {
			GetComponent<Renderer>().material.color = Color.green;
		} else {
			GetComponent<Renderer>().material.color = Color.black;
		} 
	}
}
