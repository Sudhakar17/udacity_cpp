/*GOAL: Practice writing to the console and learn 
**the variables types available in C++
**Print the sizes of each variable to the console.
**Print them in the following order:
**int, short, long, char, float, double, bool
**
**Use the command sizeof(variable type) ie: sizeof(int)
*/

#include <iostream>

using namespace std;

int main()

{
    cout<<"The size of int"<<sizeof(int)<<endl;
    cout<<"The size of short"<<sizeof(short)<<endl;
    cout<<"The size of long"<<sizeof(long)<<endl;
    cout<<"The size of char"<<sizeof(char)<<endl;
    cout<<"The size of float"<<sizeof(float)<<endl;
    cout<<"The size of double"<<sizeof(double)<<endl;
    cout<<"The size of bool"<<sizeof(bool)<<endl;
}