#include <iostream>
using namespace std;

/* Enter a three-letter word that is definitely not 'cum' and the program will convert it to an ASCII string */

int main(){
    
    char c1,c2,c3;
    cout << "Enter a 3-letter word that definitely isn't 'cum': ";
    cin >> c1 >> c2 >> c3;

    cout << "ASCII word: " << int(c1) << " " << int(c2) << " " << int(c3) << endl;

}