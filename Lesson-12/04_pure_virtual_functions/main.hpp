// header file for main.cpp

#include <iostream>
#include <string>

class Animal
{
    private:
        std::string name;
        float baseRate;
        std::string type;
    public:
        Animal(std::string nameIn, float baseRateIn, std::string typeIn);
        float getBaseRate();
        // this is virtual function
        virtual float calcDailyRate();

};

Animal::Animal(std::string nameIn, float baseRateIn, std::string typeIn)
{
    name = nameIn;
    baseRate = baseRateIn;
    type = typeIn;
}

// we dont actually calcualte a daily rate for an
// "animal" so we dont really need this function
float Animal::calcDailyRate()
{
    return 1.0 * baseRate;
}

float Animal::getBaseRate()
{
    return baseRate;
}

class Cat: public Animal
{
    public:
        Cat(std::string nameIn, float baseRateIn, std::string typeIn);
        float calcDailyRate();
};

Cat::Cat(std::string nameIn, float baseRateIn, std::string typeIn): 
    Animal(nameIn, baseRateIn,typeIn)
{
    std::cout<<"\n in cat constructor";
}

float Cat::calcDailyRate()
{
    return 1.5 * Animal::getBaseRate();
}


class Dog: public Animal
{
    public:
        Dog(std::string nameIn, float baseRateIn, std::string typeIn);
        float calcDailyRate();

};

Dog::Dog(std::string nameIn, float baseRateIn, std::string typeIn):
    Animal(nameIn, baseRateIn, typeIn)
{
    std::cout<<"\n in dog constructor";
}

float Dog::calcDailyRate()
{
    return 2.0 * Animal::getBaseRate();
}