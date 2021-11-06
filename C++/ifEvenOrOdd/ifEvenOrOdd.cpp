#include <iostream>
using namespace std;

/* Enter a number, and the program will determine if it is even or odd.*/

int main(){
    
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num % 2 == 0){
        cout << num << " is an even number.\n";
    }
    else{
        cout << num << " is an odd number.\n";
    }
}