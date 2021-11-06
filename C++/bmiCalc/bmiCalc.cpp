#include <iostream>
#include <cmath>
using namespace std;

/* Enter your height and weight, and the program will calculate your BMI and determine what range you fall into.
Underweight is < 18.5
Normal weight is 18.5 - 24.9
Overweight is 25 - 30
Obese is >30*/

int main(){
    
    float height, weight;

    cout << "Enter your height(m): ";
    cin >> height;
    cout << "Enter your weight(kg): ";
    cin >> weight;

    float bmi = (weight / pow(height, 2));

    cout << "Your BMI is: " << bmi << endl;
    
    if(bmi < 18.5){
        cout << "You are underweight.\n"; 
    }
    else if(bmi > 18.5 && bmi < 25){
        cout << "You are in the healthy range.\n";
    }
    else if(bmi > 25 && bmi < 30){
        cout << "You are overweight.\n";
    }
    else{
        cout << "You are obese.\n";   
    }
}