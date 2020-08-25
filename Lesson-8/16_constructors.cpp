/*Goal: learn to use constructors*/

#include<iostream>

//using namespace std;

// The cats class that we used earlier in the lesson.

class Cats
{
    std::string name;
    std::string breed;
    int age;

    public:
        Cats(); // declaring the constructor
        void setName(std::string nameIn);
        void setBreed(std::string breedIn);
        void setAge(int ageIn);
        std::string getName();
        std::string getBreed();
        int getAge();
        void printInfo();
};

// defining the constructor
Cats::Cats()
{
    std::cout << "Assigning Initial Values in the constructor \n";
    name = "Unknown";
    breed = "Unknown"; // the initial value of the breed
    age = 99; // the initial value of the age
}

void Cats::setName(std::string nameIn)
{
    name = nameIn;
}

void Cats::setBreed(std::string breedIn)
{
    breed = breedIn;
}

void Cats::setAge(int ageIn)
{
    age = ageIn;
}

std::string Cats::getName()
{
    return name;
}

std::string Cats::getBreed()
{
    return breed;
}

int Cats::getAge()
{
    return age;
}

void Cats::printInfo()
{
    std::cout<<name<< " "<<breed << " "<<age;
}

// main 

int main()
{
    Cats cat1;
    std::cout<< "Cat 1 Information: ";
    cat1.printInfo();
    return 0;
}