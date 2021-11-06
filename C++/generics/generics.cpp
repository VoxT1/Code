#include <iostream>
using namespace std;

/* The swap function here is defined as a template, allowing a generic data type to automatically determine
whether an integer or character will be used. */

// function declarations

// main function
int main(){
    
    int opt;

    cout << "Swap numbers [1] or characters? [2]" << endl;
    cin >> opt;

    switch(opt){
        case 1:
            int a;
            int b;

            cout << "Enter a number 'a': ";
            cin >> a;
            cout << "Enter a number 'b': ";
            cin >> b;

            swap<int>(a, b);

            cout << "'a' is: " << a << endl;
            cout << "'b' is: " << b << endl;
            break;
        case 2:
            char c;
            char d;
            cout << "Enter a character '1': ";
            cin >> c;
            cout << "Enter a character '2': ";
            cin >> d;

            swap<char>(c, d);

            cout << "'1' is: " << c << endl;
            cout << "'2' is: " << d << endl;
            break;
        default:
            cout << "Not an option.\n";
            break;
    }

}

// templates
template<typename T>
void swap(T& a, T& b){
    T tmp = a;
    a = b;
    b = tmp;
}

// function definitions