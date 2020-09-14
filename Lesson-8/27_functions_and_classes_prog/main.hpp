

//main.h 

class Student
{
    
    int studentID;
    int grades[10];
    public:
       void setStudentID(int);
       void setGrade(int, int);
       void printGrades();
       int getMin();
       int getMax();
       float getAverageGrade();
       int getGrade(int);
};

void Student::setStudentID(int studentNum)
{
    studentID = studentNum;
}

void Student::setGrade(int idx, int grade)
{
    grades[idx] = grade;
}

void Student::printGrades()
{   
    std::cout<<"StudentID = "<<studentID<<"\n";
    for (int i=0; i<10; i++)
    {
        std::cout<<grades[i]<< " ";
    }
}

int Student::getMin()
{   
    int minGrade = 100;
    for (int i=0; i<10; i++)
    {
        if (grades[i] < minGrade)
            minGrade = grades[i];
    }
    return minGrade;
}

int Student::getMax()
{
    int maxGrade = 0;
    for (int i=0; i<10; i++)
    {
        if (grades[i] > maxGrade)
            maxGrade = grades[i];
    }
}

float Student::getAverageGrade()
{
    int sum = 0;
    float average = 0;
    for (int i=0; i<10; i++)
    {
        sum += grades[i];
    }
    
    average = sum / 10.0;
    
    return average;
}

int Student::getGrade(int idx)
{
    return grades[idx];
}
//********************
class CourseEnrollment
{
    public:
    Student students[6];
    int courseMinGrade;
    int courseMaxGrade;
    float courseAvgGrade;
    int grades[60];
    
    void addStudents(Student* studentIn);
    int* getAllGrades();
    int* sortAllGrades();
    int getMinGrade();
    int getMaxGrade();
    float getAvgGrade();
};

void CourseEnrollment::addStudents(Student* studentIn)
{
    for (int i=0; i<6; i++)
    {
        students[i] = studentIn[i];
    }
}

int* CourseEnrollment::getAllGrades()
{
    int k=0;
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<10; j++)
        {
            grades[k]= students[i].getGrade(j);
            k++;
        }
    }
    
    return grades;
}

int* CourseEnrollment::sortAllGrades()
{
    for (int i=0; i<60; i++)
    {
        for (int j=0; j<59-i; j++)
        {
            if (grades[j]>grades[j+1])
            {
                int temp;
                temp = grades[j];
                grades[j] = grades[j+1];
                grades[j+1] = temp;
            }
        }
    }
    
    return grades;
}

int CourseEnrollment::getMinGrade()
{
    sortAllGrades();
    return grades[0];
}

int CourseEnrollment::getMaxGrade()
{
    sortAllGrades();
    return grades[59];
}

float CourseEnrollment::getAvgGrade()
{
    int sum=0;
    float avg;
    for(int i=0; i<60; i++)
    {
        sum += grades[i];
    }
    avg = sum / 60.0;
    return avg;
}

