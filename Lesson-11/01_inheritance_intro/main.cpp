/*Goal : study a simple example of inheritance*/


#include "main.hpp"

int main()
{
    // create an instance of the derived class,
    // GradStudent
    GradStudent gs1;

    //set the degree of the grad student
    //using the function in the derived class
    gs1.setDegree("BSEE");

    std::cout<<gs1.getId()<<" "<<gs1.getDegree();

    return 0;

}