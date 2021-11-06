// dont fucking touch this
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Madlibs{
    class Project{
        static void Main(string[] args){

            string color, pluralNoun, celebrity;

            Console.WriteLine("Enter a color.");
            color = Console.ReadLine();

            Console.WriteLine("Enter a plural noun.");
            pluralNoun = Console.ReadLine();
        
            Console.WriteLine("Enter a celebrity. ");
            celebrity = Console.ReadLine();

            Console.WriteLine("roses are "+color);
            Console.WriteLine(pluralNoun+" are blue");
            Console.WriteLine("i wanna fuck "+celebrity);

        }
    }
}