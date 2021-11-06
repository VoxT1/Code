// dont fucking touch this
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// touch this
namespace IntegerCalculator
{
    class Project
    {
        static void Main(string[] args)
        {
            Console.Write("Enter a number: ");
            int num1 = Convert.ToInt32(Console.ReadLine());
            
            Console.WriteLine("What do you wanna do with it, cunt? ");
            Console.WriteLine("+: add");
            Console.WriteLine("-: subtract");
            Console.WriteLine("*: multiply");
            Console.WriteLine("/: divide");
            Console.WriteLine("sqrt: square root");
            Console.WriteLine("^: exponent");

            string op = Console.ReadLine();

            if(op == "sqrt")
            {
                double s;
                s = Math.Sqrt(num1);
                Console.Write(s);
            }
            else{
            
            Console.Write("Enter another number: ");
            int num2 = Convert.ToInt32(Console.ReadLine());
            
            if(op == "^")
            {
                Console.Write(Exponent(num1, num2));
            }
            else if(op == "+")
            {
                Console.Write(num1 + num2);
            }
            else if(op == "-")
            {
                Console.Write(num1 - num2);
            }
            else if(op == "*")
            {
                Console.Write(num1 * num2);
            }
            else if(op == "/")
            {
                Console.Write(num1 / num2);
            }
            else
            {
                Console.Write("You fucked something up, retard.");
            }
            Console.ReadLine();
            }
        }
        
        static int Exponent(int x, int y)
        {
            int result = 1;

            for(int i = 0; i < y; i++)
            {
                result = result * x;
            }
            return result;        
        }   
    }
}