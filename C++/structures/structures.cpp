#include <iostream>
using namespace std;

/* Structures can declare attributes of a larger logical 'object' to be defined later; a blueprint or model. */

// structure
struct Smartphone{
    string name;
    int storage;
    string color;
    float price;
};

// main function
int main(){
    
    Smartphone smartphone;
    smartphone.name = "iPhone 12 Pro";
    smartphone.color = "blue";
    smartphone.price = "999.99";
    smartphone.storage = 64;

    cout << "name: " << smartphone.name << endl;

}