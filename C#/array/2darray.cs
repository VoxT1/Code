// dont fucking touch this
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// touch this
namespace Title{

    class Project{
    
        static void Main(string[] args){

            int[,] numberGrid = {
                {1, 2},
                {3, 4},
                {4, 5},
                {6, 7},
            };
            
            Console.WriteLine(numberGrid[2,1]);

            Console.WriteLine("Press enter to exit...");
            Console.ReadLine();
        }
    }
}