#include <iostream>
using namespace std;

/* Enter an integer and the program will count how many digits are in that integer */

int main(){
    
    int num;
    int i;
    cout << "Enter a number: ";
    cin >> num;

    if(num == 0){ // zero

        cout << "0 has 1 digit, smartass.\n";
    }
    else if(num < 0){ // negative number
        
        num *= -1; // neg number converts to pos

        for(i=1;i<num;i++){
        num /= 10;
        }
    }
    else{ // positive number

        for(i=1;i<num;i++){
            num /= 10;
        }
    }
    cout << "Your integer has " << i << " digits.\n";
}