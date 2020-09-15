#include <iostream>

template <class T>
class StudentRecord
{
    private:
        const int size=5;
        T grade;
        int studentID;
    public:

        StudentRecord(T gradeIn);
        void setId(int idIn);
        void printGrades();
};

template <class T>
StudentRecord<T>::StudentRecord(T gradeIn)
{
    grade = gradeIn;
}

template <class T>
void StudentRecord<T>::setId(int idIn)
{
    studentID = idIn;
}

template <class T>
void StudentRecord<T>::printGrades()
{
    std::cout<<"ID# "<<studentId<<": ";
    std::cout<<grade<<"\n ";
    std::cout<<"\n";
}