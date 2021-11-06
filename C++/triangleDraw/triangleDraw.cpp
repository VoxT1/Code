#include <iostream>
#include <iomanip>
using namespace std;

/* Enter the length and symbol of a triangle, and the program will draw it. */

int main(){
    
    int l;
    char sym;
    cout << "Enter the length: ";
    cin >> l;
    cout << "Enter the symbol you wish to draw with: ";
    cin >> sym;

    for(int i=0;i<l;i++){
        for(int j=1;j<=i;j++){
            cout << setw(2) << sym;
        }
        cout << endl;
    }

/*  For an inverted triangle: */
    
    for(int i=l;i>0;i--){
        for(int j=1;j<=i;j++){
            cout << setw(2) << sym;
        }
        cout << endl;
    }

}