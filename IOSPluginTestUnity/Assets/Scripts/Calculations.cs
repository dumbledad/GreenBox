using AOT;
using System;
using System.Runtime.InteropServices;

namespace MonoDLLTest
{
	public class Calculations
	{
		private delegate void CalculationCallback(int x);

		[DllImport("__Internal")]
		private static extern int square(int x);
		[DllImport("__Internal")]
		private static extern void setCubeCallback(int x, CalculationCallback callback);

		int toSquare = 2;
		int squared = -1;
		int toCube = 3;
		static int cubed = -1;

		public bool isSquared
		{
			get
			{
				return squared == (int)Math.Pow(toSquare, 2);
			}
		}

		public bool isCubed
		{
			get
			{
				return cubed == (int)Math.Pow(toCube, 3);
			}
		}

		public void Init()
		{
			squared = square(toSquare);
			setCubeCallback(toCube, calculationCallback);
		}


		[MonoPInvokeCallback(typeof(CalculationCallback))]
		static void calculationCallback(int x)
		{
			cubed = x;
		}
	}
}
