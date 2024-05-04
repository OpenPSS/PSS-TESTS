using System;
using System.Collections.Generic;

using Sce.PlayStation.Core;
using Sce.PlayStation.Core.Environment;
using Sce.PlayStation.Core.Graphics;
using Sce.PlayStation.Core.Input;

namespace TextureTest
{
	public class AppMain
	{
		public static void Main (string[] args)
		{
			Initialize ();
		}

		public static void Initialize ()
		{
			GraphicsContext ctx = new GraphicsContext();
			Texture2D tex = new Texture2D("/Application/image.png", true, PixelFormat.Rgba);
		}

	}
}
