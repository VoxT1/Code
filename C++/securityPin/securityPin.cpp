#include <iostream>
using namespace std;

/* Set a PIN, and then enter that PIN. */

int main(){
    
    int pin, guessedPin, e = 0;

    cout << "Set your PIN: ";
    cin >> pin;
    system("clear");

    do {
        cout << "Please enter your PIN: ";
        cin >> guessedPin;
        if(guessedPin != pin){
            e++;
        }
    } while(e < 3 && guessedPin != pin); 

    if(guessedPin == pin){
        cout << "Accepted\n";
    }
    else{
        cout << "Denied\n";
    }
}