#include <iostream>
using namespace std;

/* Given a character, the int() function can convert it to its ASCII value,
while the char() function can convert an ASCII value to its character equivalent. */

int main(){
    
    // convert character to ascii value
    cout << (int)'a' << endl;
    cout << int('A') << endl;

    // convert ascii value to character
    cout << char(97) << endl;
    cout << char(65) << endl;

}