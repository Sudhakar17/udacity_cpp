/* The header file for inheritance */

#include <iostream>
#include <string>

// The base class
class Student
{
    private:
        int id;
    public:
        Student();
        void setId(int idIn);
        int getId();

};


Student::Student()
{
    id = 0;
}

void Student::setId(int idIn)
{
    id = idIn;
}

int Student::getId()
{
    return id;
}

class GradStudent: public Student
{
    private:
        std::string degree;
    public:
        GradStudent();
        void setDegree(std::string degreeIn);
        std::string getDegree();
};


GradStudent::GradStudent()
{
    degree = "NA";
}

void GradStudent::setDegree(std::string degreeIn)
{
    degree = degreeIn;
}

std::string GradStudent::getDegree()
{
    return degree;
}