// Static Variables: What is the output of this code?
//Static Variables:
#include<iostream>

using namespace std;

int returnValue()
{
    static int i = 0;
    i++;
    return i;
}


int main()
{
    cout<<"\ni = "<<returnValue();
    cout<<"\ni = "<<returnValue();
    cout<<"\ni = "<<returnValue();
    return 0;
}