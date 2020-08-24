/*Goal: Practice using a class*/

#include<iostream>
//using namespace std;


class Student
{
        std::string name;
        int id;
        int gradDate;

    public:
        void setName(std::string nameIn);
        void setId(int idIn);
        void setGradDate(int dateIn);
        std::string getName();
        int getId();
        int getGradDate();
        void print();
};

void Student::setName(std::string nameIn)
{
     name = nameIn;
}

void Student::setId(int idIn)
{
     id = idIn;
}

void Student::setGradDate(int gradDateIn)
{
     gradDate = gradDateIn;
}

void Student::print()
{
     std::cout<<name<<" "<<id<<" "<<gradDate;
}

std::string Student::getName()
{
     return name;
}

int Student::getId()
{
     return id; 
}

int Student::getGradDate()
{
     return gradDate;
}

int main()
{
    int integer1; 
    float float1;
    Student student1; 
    
    integer1 = 4; //assign a value to integer1
    float1 = 4.333; //assign a value to float1

    student1.setName("Catherine Gamboa"); //assign a value to the student name
    student1.setId(54345); //assign a value to the student id number
    student1.setGradDate(2017); //assign a value to the student grad date
    
    //Let's print the values of our variables
    std::cout<<"integer1 = "<<integer1<<"\n";
    std::cout<<"float1 = "<<float1<<"\n\n";
    
    //There are two ways we can print the values of our class:
    //The first is to call the print function we created.
    std::cout<<"Using the Student::print function\n";
    std::cout<<"Student1 = ";
    student1.print();
    std::cout<<"\n\n";
    
    //The second is to access each member of the class using the get functions
    std::cout<<"Using the student access functions\n";
    std::cout<<"Student1 name = "<<student1.getName()<<"\n";
    std::cout<<"Student1 ID = "<<student1.getId()<<"\n";
    std::cout<<"Student1 Grad Date = "<<student1.getGradDate()<<"\n";
    
    
    return 0; 
}