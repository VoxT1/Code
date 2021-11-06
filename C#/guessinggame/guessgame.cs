// dont fucking touch this
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

// touch this
namespace GuessingGame
{
    class Project
    {
        static void Main(string[] args)
        {
            string secretWord = "cum";
            string userGuess = String.Empty;
            int guessCount = 0;
            int guessLimit = 2;
            bool outOfGuesses = false;

            Console.WriteLine("I am white and sticky...What am I? Enter guess: ");
            userGuess = Console.ReadLine();

            while(userGuess != secretWord && !outOfGuesses)
            {
                if(guessCount < guessLimit)
                {
                guessCount++;
                int triesLeft = guessLimit - guessCount;
                Console.WriteLine("Wrong. " + (triesLeft+1) + " tries left. Enter guess: ");
                userGuess = Console.ReadLine();
                }
                else
                {
                    outOfGuesses = true;
                }                
            }

                if(!outOfGuesses)
                {
                    Console.WriteLine("You did it.");
                }
                else
                {
                    Console.WriteLine("You failed.");
                }
        
        }
    }
}