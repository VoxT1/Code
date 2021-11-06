// dont fucking touch this
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// touch this
namespace Methods
{
    class Project
    {
        static void Main(string[] args)
        {
            Console.WriteLine("This is the Main method being executed.");
            Console.Write("Enter your name to continue: ");
            string name = Console.ReadLine();

            Console.Write("Enter your age to continue: ");
            int age = Convert.ToInt32(Console.ReadLine());

            Insult(name, age);
            
            Console.Write("Press enter to cube your age: ");
            Console.ReadLine();
            
            Console.WriteLine("Your age cubed is " + Cube(age) + ", and it was pulled from the Cube method.");
        }
        static void Insult(string name, int age)
        {
            Console.WriteLine("Fuck you, " + name + ", who is " + age + " years old, this is from the Insult method, and I hate you.");
        }
        static int Cube(int age)
        {
            int cubeAge = age * age * age;
            return cubeAge;
        }
    }
}