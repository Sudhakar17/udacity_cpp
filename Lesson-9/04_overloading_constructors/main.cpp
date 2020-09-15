/*Goal: learn about overloading constructors*/

#include "main.hpp"

int main()
{
    Square s1;
    Square s2(4,3);
    std::cout<<"s1 dimensions are: "<<s1.getWidth()<<","<<s1.getLength();
    std::cout<<"\ns2 dimensions are: "<<s2.getWidth()<<","<<s2.getLength();
    return 0;
}