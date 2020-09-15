#include <iostream>
#include <string>

class Patient
{
    private:
        std::string name;
    public:
        // The constructor accepts a name parameter
        Patient(std::string input);
        void setName(std::string input);
        std::string getName();
};


Patient::Patient(std::string input)
{
    // when an object is created, the name must be added as a param
    name = input;
}

void Patient::setName(std::string input)
{
    name = input;
}

std::string Patient::getName()
{
    return name;
}