// dont fucking touch this
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// touch this
namespace PickDay
{
    class Project
    {
        static void Main(string[] args)
        {
            //start here
            Console.Write("Pick a number that corresponds to a day of the week, 0-6: ");
            int x = Convert.ToInt32(Console.ReadLine());

            if(-1 < x && x < 7)
            {
            Console.WriteLine(GetDay(x));
            }
            else
            {
                Console.WriteLine("0-6, retard.");
            }
        }
        
        static string GetDay(int dayNum)
        {
            string dayName = String.Empty;

            switch(dayNum)
            {
                case 0:
                    dayName = "Sunday";
                    break;
                case 1:
                    dayName = "Monday";
                    break;
                case 2:
                    dayName = "Tuesday";
                    break;
                case 3:
                    dayName = "Wednesday";
                    break;
                case 4:
                    dayName = "Thursday";
                    break;
                case 5:
                    dayName = "Friday";
                    break;
                case 6:
                    dayName = "Saturday";
                    break;
            }

            return dayName;
        }
    }
}