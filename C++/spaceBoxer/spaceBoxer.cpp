#include <iostream>

/* You are an interplanetary space boxer and want to keep track of your weight on other planets.
Enter your Earth weight, then the numeric value corresponding to the planet you wish to visit
to calculate your weight on that planet. */

int main() {
  
  double weight;
  int planet;

  std::cout << "Enter Earth weight (kg): \n";
  std::cin >> weight;
  std::cout << "Enter the numeric value of the planet you wish to visit: \n";
  std::cin >> planet;

  switch(planet){
    case 1 :
      std::cout << "Your weight will be: " << weight*0.38 << "kg\n";
      break;
    case 2 :
      std::cout << "Your weight will be: " << weight*0.91 << "kg\n";
      break;
    case 3 :
      std::cout << "Your weight will be: " << weight << "kg\n";
      break;
    case 4 :
      std::cout << "Your weight will be: " << weight*0.38 << "kg\n";
      break;
    case 5 :
      std::cout << "Your weight will be: " << weight*2.34 << "kg\n";
      break;
    case 6 :
      std::cout << "Your weight will be: " << weight*1.06 << "kg\n";
      break;
    case 7 :
      std::cout << "Your weight will be: " << weight*0.92 << "kg\n";
      break;
    case 8 :
      std::cout << "Your weight will be: " << weight*1.19 << "kg\n";
      break;
  }
}