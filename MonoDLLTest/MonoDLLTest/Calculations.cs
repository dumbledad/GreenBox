using System;
//using System.Runtime.InteropServices;

namespace MonoDLLTest
{
	public class Calculations
	{
		//[DllImport("__Internal")]
		//private static extern int square(int x);

		//int toSquare = 2;
		//int squared = -1;

		public bool isSquared
		{
			get
			{
				//return squared == (int)Math.Pow(toSquare, 2);
				return true;
			}
		}

		public void Init()
		{
			//squared = square(toSquare);
		}
	}
}
