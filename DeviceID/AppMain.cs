using System;
using System.Collections.Generic;
using Sce.PlayStation.Core.Services;
namespace DeviceID
{
	public class AppMain
	{		
		public static void Main (string[] args)
		{
			Console.WriteLine(BitConverter.ToString(AccountInformation.UniqueID).Replace("-", ""));
			
			// Windows PSM : gives you your username padded out with 0s,
		}
	}
}
