using System;
using System.IO;
using Sce.PlayStation.Core.Services;
namespace DeviceID
{
	public class AppMain
	{		
		public static void Main (string[] args)
		{
			string uid = BitConverter.ToString(AccountInformation.UniqueID).Replace("-", "");
			File.WriteAllText("/Documents/UniqueID.txt", uid);
			
			// Windows PSM : gives you your username padded out with 0s,
		}
	}
}
