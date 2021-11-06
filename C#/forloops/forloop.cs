// dont fucking touch this
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// touch this
namespace ForLoop{

    class Project{
    
        static void Main(string[] args){

           /*as i is incremented with each whileloop, it also keeps track of the iteration that loop has passed through.
            *int i = 1;
            *while(i <= 5){
            *    Console.WriteLine(i);
            *   i++;
            *}
            */

            // a forloop can do the exact same thing:
            for(int i = 1; i<=5; i++){
                Console.WriteLine(i);
            }
            
            Console.WriteLine("Press enter to exit...");
            Console.ReadLine();
        }
    }
}