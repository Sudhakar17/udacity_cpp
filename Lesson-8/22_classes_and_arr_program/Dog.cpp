//You may use this file as a header file for the Dog class. 
//Make sure to include it in main.hpp file
#include<iostream>
class Dog
{
    std::string name;
    int licenseNumber;
public:
    Dog();
    void setName(std::string nameIn);
    void setLicenseNumber(int licenseNumberIn);
    std::string getName();
    int getLicenseNumber();
    void printInfo();
};

Dog::Dog()
{
    name="Unknown";
}

void Dog::setName(std::string nameIn)
{
    name = nameIn;
}

void Dog::setLicenseNumber(int licenseNumberIn)
{
    licenseNumber = licenseNumberIn;
}

std::string Dog::getName()
{
    return name;
}

int Dog::getLicenseNumber()
{
    return licenseNumber;
}
 
void Dog::printInfo()
{
    std::cout<<name<<" "<<licenseNumber;
}
    
