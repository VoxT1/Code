#include <iostream>
using namespace std;

/* Generates a multiplication table */

int main(){

    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            cout << i << " * " << j << " = " << i * j << endl;         
        }
        cout << endl;
    }
}