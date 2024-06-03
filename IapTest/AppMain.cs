using System;
using System.Collections.Generic;

using Sce.PlayStation.Core;
using Sce.PlayStation.Core.Services;
using Sce.PlayStation.Core.Environment;

namespace IapTest
{
	public class AppMain
	{
		private static InAppPurchaseDialog dialog;
		
		public static void Main (string[] args)
		{
			dialog = new InAppPurchaseDialog();
			TestIap();
			
		}
		
		public static CommonDialogResult getResult () {
			while(dialog.State != CommonDialogState.Finished) { SystemEvents.CheckEvents (); };
			return dialog.Result;
		}
		
		public static void TestIap() 
		{
			dialog.GetProductInfo(null);
			if(getResult() == CommonDialogResult.OK) {
				dialog.GetTicketInfo();
				if(getResult() == CommonDialogResult.OK) {
					foreach(InAppPurchaseProduct product in dialog.ProductList) {
						Console.WriteLine ("product.Label "+ product.Label);	
						Console.WriteLine ("product.Name "+ product.Name);	
						Console.WriteLine ("product.Price "+ product.Price);
						Console.WriteLine ("product.TicketType "+ product.TicketType);
						Console.WriteLine ("product.IsTicketValid "+ product.IsTicketValid);
						Console.WriteLine ("product.ConsumableTicketCount  "+ product.ConsumableTicketCount);


						Console.WriteLine ("Test Purchase");
						dialog.Purchase(product.Label);
						if(getResult() == CommonDialogResult.OK) {
							if(product.TicketType == InAppPurchaseTicketType.Consumable) {
								Console.WriteLine ("Test Consume");	
								dialog.Consume(product.Label);
							}
							else{
								break;	
							}
						}
						else {
							break;	
						}
					}
				}
			}
		}
		
	}
}
