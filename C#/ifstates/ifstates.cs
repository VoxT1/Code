// dont fucking touch this
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// touch this
namespace IfStatements
{
    class Project
    {
        static void Main(string[] args)
        {
            
            bool isDragon = true;
            bool isFluffy = true;

            if (isDragon && isFluffy)
            {
                Console.WriteLine("You are a fluffy Dragon. Smother me.");
            }
            else if (!isDragon && !isFluffy)
            {
                Console.WriteLine(":|");
            }
            else if (!isDragon && isFluffy)
            {
                Console.WriteLine("You are not a Dragon, but you are fluffy. Hot.");
            }
            else if (!isFluffy && isDragon)
            {
                Console.WriteLine("You are not fluffy, but you are a Dragon. Hot.");
            }
        }    
        
    }
}