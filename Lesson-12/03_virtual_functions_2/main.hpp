// header file for main.cpp

#include <iostream>
#include <string>

// Employee is a class for calculating the
// pay for an hourly employee

class Employee
{
    private:
        float payrate;
        std::string name;
        int employeeNumber;
    public:
        void setPayRate(float rateIn);
        float getPayRate();
        // This is now a virtual function
        virtual float calcWeeklyPay();
};

void Employee::setPayRate(float rateIn)
{
    payrate = rateIn;
}

float Employee::getPayRate()
{
    return payrate;
}

float Employee::calcWeeklyPay()
{
    return 40 * payrate;
}

// The class manager inherits from Employee
// The only difference.. managers are salary employees
// So the pay is calculated differently.

class Manager: public Employee
{
    public:
        float calcWeeklyPay();
};

float Manager::calcWeeklyPay()
{
    // weekly pay is based on the yearly salary
    // divided by 52 weeks
    return Employee::getPayRate() / 52;
}