/*Goal: Practice writing generic functions*/

#include "main.hpp"

int main()
{
    int a = 90;
    int b = 1;
    float f1 = 7.8;
    float f2 = 9.1;
    std::cout<<a <<" + "<<b<<" = "<< sumTwo(a,b)<<std::endl;
    std::cout<<f1 <<" + "<<f2<<" = "<< sumTwo(f1,f2);
    return 0;
}