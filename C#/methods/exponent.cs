// dont fucking touch this
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// touch this
namespace Exponent{

    class Project{
    
        static void Main(string[] args){

            int x;
            int y;

            // user inputs base and exponent
            Console.WriteLine("Enter a base number: ");
            x = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Enter an exponent: ");
            y = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Result: " + Power(x, y));

        }
        static int Power(int baseNum, int powNum){
            int result = 1;

            for(int i = 0; i < powNum; i++){
                result = result * baseNum;
            }


            return result;
        }
    }
}