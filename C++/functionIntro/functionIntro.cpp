#include <iostream>
using namespace std;

/* Enter name for a greeting and an introduction; both are generated from their own functions. */

// these are the declarations of the functions, so they can be called in main()
void myNameIs(string myName);
void sayHello(string name);

// this is main(), where all code is executed and functions are called
int main(){
    
    string name;

    cout << "Enter your name: ";
    cin >> name;

    sayHello(name);
    myNameIs("Vox");

}

// these are the definitions of the functions
void myNameIs(string myName){
    cout << "My name is " << myName << ".\n";
}
void sayHello(string name){
    cout << "Hello, " << name << ".\n";
}