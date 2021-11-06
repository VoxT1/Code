#include <iostream>
#include <iomanip>
using namespace std;

/* Enter the height, width and symbol of a rectangle, and the program will draw it. */

int main(){
    
    int h;
    int w;
    char sym;
    cout << "Enter the height: ";
    cin >> h;
    cout << "Enter the width: ";
    cin >> w;
    cout << "Enter the symbol you wish to draw with: ";
    cin >> sym;

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout << setw(2) << sym;
        }
        cout << endl;
    }
}