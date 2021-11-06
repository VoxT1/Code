#include <iostream>
using namespace std;

/* Using recursion, the program will sum all numbers between 'a' and 'b'. */

// function declarations
int recurSum(int a, int b);

// main function
int main(){
    
    int a;
    int b;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a bigger number: ";
    cin >> b;

    cout << "Sum: " << recurSum(a,b) << endl;

/* This uses a for loop to sum all the numbers:

    for(int i=a;i<b;i++){
        sum += i;
    }
    cout << "Sum: " << sum << endl;
*/
}

// function definitions
int recurSum(int a, int b){
    if(a == b){ // if they are equal, the function halts
        return a;
    }
    else{
        return a + recurSum(a+1,b);
    }
}