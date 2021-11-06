// dont fucking touch this
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// touch this
namespace AddTwoThenMultiplyByThird{

    class Project{
    
        static void Main(string[] args){

            //start here
            Console.WriteLine("Enter three numbers to add the first two and multiply by the third.");
            Console.Write("Enter first number: ");
            double a = Convert.ToDouble(Console.ReadLine());
            Console.Write("Enter second number: ");
            double b = Convert.ToDouble(Console.ReadLine());
            Console.Write("Enter third number: ");
            double c = Convert.ToDouble(Console.ReadLine());

            Console.Write("Result: ");
            Console.WriteLine(AddMultiply(a, b, c));
        }
        
        static double AddMultiply(double x, double y, double z){
            return (x+y)*z;
        }
    }
}