#include <iostream>
using namespace std;

/* A host enters a word for another person to guess, the screen is cleared, and then the guest must guess what word the host picked.
The guest gets a total of 4 tries.*/

int main(){
    
    string host, guest;
    int guessCount = 0;

    cout << "Host, type your word: ";
    cin >> host;
    system("clear"); // this clears the screen

    cout << "Attempt #1\n";
    cout << "Guest, guess what word the host picked: ";
    cin >> guest;

    while(guest != host && guessCount < 3){
        cout << "Attempt #" << guessCount + 2 << endl;
        cout << "Incorrect. Try again: ";
        cin >> guest;
        guessCount++;
    }

    if(guest == host){
        cout << "Conglaturation.\n";
    }
    else{
        cout << "You failed.\n";
    }

}