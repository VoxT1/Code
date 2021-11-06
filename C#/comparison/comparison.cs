// dont fucking touch this
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// touch this
namespace Thing
{
    class Project
    {
        static void Main(string[] args)
        {
            Console.WriteLine(GetMax(420, 69, 80085));
            Console.ReadLine();
        }
        static int GetMax(int num1, int num2, int num3)
        {
            int maxNumber;

            if(num1 > num2 && num1 > num3)
            {
                maxNumber = num1;
            }
            else if(num2 > num1 && num2 > num3)
            {
                maxNumber = num2;
            }
            else
            {
                maxNumber = num3;
            }
            return maxNumber;

        }
    
    }
}