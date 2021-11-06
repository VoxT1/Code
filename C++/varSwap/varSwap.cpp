#include <iostream>
using namespace std;

/* Enter two values stored in two variables, and the program will swap those two variables. */

int main(){
    
    int a;
    int b;
    int tmp;
    cout << "Enter number 'a': ";
    cin >> a;
    cout << "Enter number 'b': ";
    cin >> b;
    
    tmp = a; // number 'a' is "saved" as the variable 'tmp'
    a = b; // number 'a' is changed to equal number 'b'
    b = tmp; // number 'b' is changed to number 'a's value stored in 'tmp'

    cout << "Number 'a' is now: " << a << endl;
    cout << "Number 'b' is now: " << b << endl;

    cout << "That was done using the help of a third variable. Now let's do it with only two.\n";
    int c;
    int d;
    cout << "Enter number 'c': ";
    cin >> c;
    cout << "Enter number 'd': ";
    cin >> d;

    c = c + d; // c is now c + d
    d = c - d; // d becomes the new value of c minus d (which == c's original value)
    c = c - d;

    cout << "Number 'c' is now: " << c << endl;
    cout << "Number 'd' is now: " << d << endl;
}