#include <iostream>
#include <vector>

/* Given a vector, this will print out the sum of the even numbers and the product of the odds. */

int main(){

int x;
int y;
int z;
int A;
int B;
int C;

std::cout << "Enter a number: " << "\n";
std::cin >> x;
std::cout << "Enter another number: " << "\n";
std::cin >> y;
std::cout << "Enter third number: " << "\n";
std::cin >> z;
std::cout << "Enter fourth number: " << "\n";
std::cin >> A;
std::cout << "Enter fifth number: " << "\n";
std::cin >> B;
std::cout << "Enter sixth number: " << "\n";
std::cin >> C;

  int evenSum = 0;
  int oddProduct = 0;
  
  std::vector<int> numbers = {x,y,z,A,B,C};

  for(int i = 0; i < numbers.size(); i++){

    if(numbers[i] % 2 == 0){

      evenSum = evenSum + numbers[i];
    }
    else{

      oddProduct = oddProduct + numbers[i];
    }
  }

std::cout << "The sum of even numbers is: " << evenSum << "\n";
std::cout << "The product of odd numbers is: " << oddProduct << "\n";

}