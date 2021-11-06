#include <iostream>
using namespace std;

/* Enter a, b and c sides of a triangle and the program will determine whether it is an equilateral, isoceles or scalene triangle. */

int main(){
    
    float a;
    float b;
    float c;
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter side c: ";
    cin >> c;

    // if all sides are equal, its an equilateral triangle
    if(a == b && b == c){
        cout << "The triangle is equilateral.\n";
    }
    // if only two sides are equal, its an isoceles triangle
    else if ( a == b || b == c || c == a){
        cout << "The triangle is isoceles.\n";
    }
    // if any side is equal to 0, then it's a line
    else if ( a == 0 || b == 0 || c == 0){
        cout << "That ain't a triangle, wise-ass.\n";
    }
    // otherwise, its a scalene triangle
    else{
        cout << "The triangle is scalene.\n";
    }
}   