// header file for main.cpp

#include<iostream>

class Student
{
    int grade[5];
    int id;
    public:
        Student();
        void setId(int idIn);
        void setGrade(int index, int gradeIn);
        int getId();
        int getGrade(int index);
        float getAvg();
        void printInfo();

};


Student::Student()
{
    for (int i=0; i<5; i++)
    {
        grade[i] = 0;
    }
    id = 0;
}

void Student::setId(int idIn)
{
    id = idIn;
}


void Student::setGrade(int index, int gradeIn)
{
    grade[index] = gradeIn;
}

int Student::getId()
{
    return id;
}

int Student::getGrade(int index)
{
    return grade[index];
}

float Student::getAvg()
{
    float sum=0;
    float avg=0;
    for (int i=0; i<5; i++)
    {
        sum += grade[i];
    }
    avg = sum / 5.0;
    return avg; 
}

void Student::printInfo()
{
    std::cout << id << "\n";
    for (int i=0; i<5; i++)
        std::cout << grade[i] << " ";
}