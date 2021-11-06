#include <iostream>
using namespace std;

/* Pointers hold addresses of variables in memory; only match with same data type variables (except void pointers). */
// using the & before the variable means it will show the physical address of the variable inside of memory

// function declarations
void printNum(int*numPtr);
void printChar(char*charPtr);
void print(void*ptr,char type);

// main function
int main(){
    
    int cum = 69;
    char nuts = 'e';

    print(&cum, 'i'); // void pointer takes the address of 'cum' and 'i' as parameters, since 'cum' is an integer
    printChar(&nuts);
}

// function definitions
void printNum(int*numPtr){
    cout << *numPtr << endl;
}
void printChar(char*charPtr){
    cout << *charPtr << endl;
}
void print(void*ptr,char type){
    switch(type){
        case 'i': // handle int*
            cout << *((int*)ptr) << endl;
            break;
        case 'c': // handle char*
            cout << *((char*)ptr) << endl;
            break;
        case 'f': // handle float*
            cout << *((float*)ptr) << endl;
            break;
        case 'd': // handle double*
            cout << *((double*)ptr) << endl;
            break;

    }
}