using AOT;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public class CubeScript : MonoBehaviour {

	private delegate void CalculationCallback(int x);

	[DllImport ("__Internal")] private static extern int square(int x);
	[DllImport("__Internal")] private static extern void setCubeCallback(int x, CalculationCallback callback);

	int toSquare = 2;
	int squared = -1;
	int toCube = 3;
	static int cubed = -1;

	void Start () {
		squared = square(toSquare);
		setCubeCallback(toCube, calculationCallback);
	}

	[MonoPInvokeCallback(typeof(CalculationCallback))]
	static void calculationCallback(int x) {
		cubed = x;
	}
	
	void Update () {
		if (squared == toSquare * toSquare) {
			if (cubed == toCube * toCube * toCube) {
				GetComponent<Renderer>().material.color = Color.magenta;
			} else {
				GetComponent<Renderer>().material.color = Color.green;
			}
		} else if (squared == -1) {
			GetComponent<Renderer>().material.color = Color.black;
		} else {
			GetComponent<Renderer>().material.color = Color.red;
		}
	}
}