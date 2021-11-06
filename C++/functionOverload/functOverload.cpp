#include <iostream>
using namespace std;

/* Multiple functions can have the same name but different data type, so when theyre called,
they will automatically know which one to use based on the arguments provided. */

// function declarations
int sum(int x, int y);
double sum(double x, double y);
float sum(float x, float y, float z);

// main function
int main(){
    
    cout << sum(4,6) << endl; // the int overload will be called
    cout << sum(4.2,6.3) << endl; // the double overload will be called
    cout << sum(4.69,6.69,8.69) << endl; // the float overload will be called

}

// function definitions
int sum(int x, int y){
    return x + y;
}
double sum(double x, double y){
    return x + y;
}
float sum(float x, float y, float z){
    return x + y;
}