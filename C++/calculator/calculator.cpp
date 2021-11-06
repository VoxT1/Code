#include <iostream>
#include <cmath>
using namespace std;

/* Enter a number, an operator and then another number, and the program will perform the calculation */

int main(){

    // declaration of number, operator and counter variables
    float num1, num2;
    char op;
    int i;

    // user enters their two numbers and operator
    for(i = 0;i < 1000;i++){
        
        cout << "Enter <num> <op> <num>: ";
        cin >> num1 >> op >> num2;
        
        // the calculation is performed
        cout << "Result: ";
        switch(op){
            case '^' : // power
                cout << pow(num1, num2) << endl;
                break;
            case '+' : // addition
                cout << num1 + num2 << endl;
                break;
            case '-' : // subtraction
                cout << num1 - num2 << endl;
                break;
            case '*' : // multiplication
                cout << num1 * num2 << endl;
                break;
            case '/' : // division
                cout << num1 / num2 << endl;
                break;
            case '%' : // modulo
                bool isNum1Int, isNum2Int;
                isNum1Int = (int(num1) == num1); // ex: 5 == 5.0
                isNum2Int = (int(num2) == num2);

                if(isNum1Int && isNum2Int){
                    cout << int(num1) % int(num2) << endl;
                    break;
                }
                else{
                    cout << "Cannot perform modulation.\n";
                    break;
                }
            default : // user fucked up
                cout << "You fucked up.\n";
        }
    }
}