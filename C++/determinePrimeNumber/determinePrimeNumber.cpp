#include <iostream>
using namespace std;

/* Choose whether you want to determine if a number is prime, or if you want to print a list of primes between 1 and a given number. */

// function declarations
int primeCheck(int userNum);
int primeCount(int userNum);

// main function
int main(){
    
    int choice;
    int num;

    cout << "What would you like to do?\n";
    cout << "Check if a number is prime [1]\n";
    cout << "List prime numbers [2]\n";
    cin >> choice;

    switch(choice){
        case 1 : 
            cout << "Enter a number: ";
            cin >> num;

            if(primeCheck(num)){
                cout << num << " is a prime number.\n";
            }
            else{
                cout << num << " is not a prime number.\n";
            }
            break;
        case 2 : 
            cout << "Enter a number: ";
            cin >> num;

            cout << primeCount(num) << endl;
            break;
        default :
            cout << "That wasn't 1 or 2, idiot.\n";
    }
}

// function definitions
int primeCheck(int userNum){
    for(int i=2;i<userNum;i++){
        if(userNum % i == 0){
            return false;
        }
    }
    return true;
}

int primeCount(int userNum){
    int i;
    int j = 0;
    for(i=1;i<userNum;i++){
        bool isPrime = primeCheck(i);
        if(isPrime){
            cout << i << " is prime\n";
            j++;
        }
    }
    cout << "There are " << j << " primes between 1 and " << userNum << endl;

    return i;
}