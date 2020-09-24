#include <iostream>
#include "Factorial.h"

int main() {

  int value = Factorial(6);
  std::cout << "6! should equal 720. Your Factorial method returned:" 
            << std::endl;
  std::cout << value << std::endl;
}
