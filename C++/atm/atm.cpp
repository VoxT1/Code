#include <iostream>
using namespace std;

/* ATM application to check balance, deposit and withdraw money, show menu to user */

// function declarations
void showMenu();

// main function
int main(){
    
    int opt;
    double bal = 500.00;
    double dep;
    double withd;

    do{
        showMenu();
        cout << "Select option: ";
        cin >> opt;
        system("clear");

        switch(opt){
            case 1 :
                cout << "Vox's balance: $" << bal << endl;
                break;
            case 2 :
                cout << "Enter amount to deposit: $";
                cin >> dep;
                cout << "New balance: $" << bal + dep << endl;
                break;
            case 3 :
                cout << "Enter amount to withdraw: $";
                cin >> withd;
                if(withd >= bal){
                    cout << "Not enough money.\n";
                }
                else{
                    cout << "New balance: $" << bal - withd << endl;
                }
                break;
            case 4 :
                cout << "Goodbye." << endl;
                break;
            default :
                cout << "Somehow, you managed to fuck up.\n";
                break;
        }
    } while(opt != 4);
}

// function definitions
void showMenu(){
    cout << "====VOX'S ATM====" << endl;
    cout << "======MENU=======" << endl;
    cout << "1) Check balance" << endl;
    cout << "2) Deposit" << endl;
    cout << "3) Withdraw" << endl;
    cout << "4) Exit" << endl;
    cout << "=================" << endl;

}