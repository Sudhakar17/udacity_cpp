/*According to MicroSoft C++ Language Reference:

A virtual function is a member function that you expect to be redefined in derived classes.
When you refer to a derived class object using a pointer or a reference to the base class,
you can call a virtual function for that object and execute the derived class's version of the function */

#include "main.hpp"

int main()
{
    const std::string status = "salary"; //hourly or salary options
    std::string level;

    //assign an manager to e1
    level = "salary";
    Employee* e1; //e1 is now a pointer to Employee object

    if(status != level)
    {
        e1 = new Employee(); // we define an hourly employee
    }

    else
    {
        e1 = new Manager(); // we define a salaried employee
    }
    
    e1->setPayRate(12000.0);
    std::cout<<"e1 pay: $"<<e1->calcWeeklyPay();

    // assign an employee to e2
    level = "hourly";
    Employee* e2; //e2 is now a pointer to Employee object

    if(status != level)
    {
        e1 = new Employee(); // we define an hourly employee
    }

    else
    {
        e1 = new Manager(); // we define a salaried employee
    }

    e1->setPayRate(10.0);
    std::cout<<"\ne2 pay: $"<<e1->calcWeeklyPay();

    return 0;
}