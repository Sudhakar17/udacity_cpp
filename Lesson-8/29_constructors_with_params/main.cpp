/*Goal: examine constructors with parameters*/

#include "main.hpp"

int main()
{
    // an instance of Patient is instantiated with a name
    Patient p1("Tan Smith");
    std::cout<<p1.getName();
    return 0;
}