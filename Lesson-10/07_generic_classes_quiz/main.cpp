
/*Goal: create a generic class.
**Create a class called Multiplier. 
**It multiplies two numbers - integers
**or floats. */

#include "main.hpp"


int main()
{
    Multiplier<int> multi1;
    Multiplier<float> multi3;
    
    int input1,input2;
    std::cin>>input1;
    std::cin>>input2;
    
    multi1.setM1(input1);
    multi1.setM2(input2);
    multi1.setProduct();
    multi1.printEquation();
    
    std::cout<<"\n";
    float input3, input4;
    std::cin>>input3;
    std::cin>>input4;
    multi3.setM1(input3);
    multi3.setM2(input4);
    multi3.setProduct();
    multi3.printEquation();
    return 0;
}
