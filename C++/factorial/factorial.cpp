#include <iostream>
using namespace std;

/* Enter a number and the program will calculate the factorial of that number. */

// the factorial function is declared here
int loopFactorial(int n);
int recursFactorial(int n);

// main function
int main(){
    
    int x;
    cout << "Enter a number: ";
    cin >> x;
//    cout << loopFactorial(x) << endl; // uses for loop
    cout << x << "! is " << recursFactorial(x) << endl; // uses recursion
}

// the factorial function is defined here
int loopFactorial(int n){
    int i;
    // 'i' is set equal to one less than 'n', decrements each iteration to 0
    for(i=(n-1);i>0;i--){
        n *= i;
    }
    return n;
}
int recursFactorial(int n){
    if(n == 1){
        return n;
    }
    else{
        return n * recursFactorial(n-1);
    }
}