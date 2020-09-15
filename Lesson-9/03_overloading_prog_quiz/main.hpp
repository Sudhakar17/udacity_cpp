#include<iostream>

//C++ allows us to 'overload' the same function name as long as
//the variable types in the function inputs are different.

class Compare
{
public:
    int findSmaller(int input1, int input2);
    float findSmaller(float input1, float input2);
    char findSmaller(char input1, char input2);
    
    int findSmaller(int input1, int input2, int input3);
    float findSmaller(float input1, float input2, float input3);
    char findSmaller(char input1, char input2, char input3);
    
    int findSmaller(int arrayInt[], int size);
    float findSmaller(float arrayInF[], int size);
    char findSmaller(char arrayInC[], int size);
};

int Compare::findSmaller(int input1, int input2)
{
    if(input1<input2)
        return input1;
    return input2;
}
float Compare::findSmaller(float input1, float input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

char Compare::findSmaller(char input1, char input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

int Compare::findSmaller(int input1, int input2, int input3)
{
    return input1 < input2 ? (input1 < input3 ? input1 : input3) : (input2 < input3 ? input2 : input3);
}


float Compare::findSmaller(float input1, float input2, float input3)
{
    return input1 < input2 ? (input1 < input3 ? input1 : input3) : (input2 < input3 ? input2 : input3);
}

char Compare::findSmaller(char input1, char input2, char input3)
{
    return input1 < input2 ? (input1 < input3 ? input1 : input3) : (input2 < input3 ? input2 : input3);
}

int Compare::findSmaller(int arrayInt[], int size)
{
    int small = arrayInt[0];
    for(int i=1; i<size; i++)
    {
        if(arrayInt[i] < small)
        {
            small = arrayInt[i];
        }
    }
    return small;
}

float Compare::findSmaller(float arrayInF[], int size)
{
    float small = arrayInF[0];
    for(int i=1; i<size; i++)
    {
        if(arrayInF[i] < small)
        {
            small = arrayInF[i];
        }
    }
    return small;
}

char Compare::findSmaller(char arrayInC[], int size)
{
    char small = arrayInC[0];
    for(int i=1; i<size; i++)
    {
        if(arrayInC[i] < small)
        {
            small = arrayInC[i];
        }
    }
    return small;
    
}