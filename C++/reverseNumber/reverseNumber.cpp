#include <iostream>
using namespace std;

/* Enter a number and it'll flip it I guess I still dont know how the fuck it works */

int main(){
    
    int num, revNum=0;
    cout << "Enter a number: ";
    cin >> num;

    while(num != 0){
        revNum *= 10;
        //int lastDigit = num % 10;
        revNum += num % 10;
        num /= 10;
    }

    cout << "Reversed number: " << revNum << endl;
}