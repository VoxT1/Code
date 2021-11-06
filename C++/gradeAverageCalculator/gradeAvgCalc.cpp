#include <iostream>
using namespace std;

/* Enter the number of grades you need to average, and then enter each of those grades, and the program will average them together. */

int main(){
    
    int grade;
    int n;
    int sum = 0;

    cout << "How many grades do you need to average?\n";
    cin >> n;

    for(int i=0;i<n;i++){

        do {
            cout << "Enter grade " << i+1 <<": ";
            cin >> grade;
        } while(grade < 1 || grade > 100);
        sum += grade;
    }
    float avg = float(sum) / n;
    cout << "Your average is: " << avg << endl;
}