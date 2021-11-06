#include <iostream>
using namespace std;

/* Self explanatory */

int main(){

    double yearlyCum;
    cout << "Enter yearly cum: " << "\n";
    cin >> yearlyCum;
    double monthlyCum = yearlyCum/12;
    double tenYearCum = yearlyCum*10;

    cout << "Yearly cum is: " << yearlyCum << " mL\n";
    cout << "Monthly cum is: " << monthlyCum << " mL\n";
    cout << "In ten years, you will produce " << tenYearCum << " mL of cum.\n";


}