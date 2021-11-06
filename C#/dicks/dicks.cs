// dont fucking touch this
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// you can touch this
namespace dicks
{
	class Cock
	{
		static void Main(string[] args)
		{
			Console.WriteLine("What dick size you wear?");
			Console.WriteLine();
			Console.Write("Dick Size (inches): ");
			
			double dickSize = Convert.ToDouble(Console.ReadLine());

			if(dickSize > 6.3){
				Console.WriteLine(dickSize + " inches...Impressive...");
			}
			else{
				Console.WriteLine(dickSize + " inches...Pathetic.");
			}
		}
	}
}
