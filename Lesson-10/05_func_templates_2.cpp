/*Goal: learn to use templates with multiple variable types. 
*/

#include<iostream>

template<class T, class U>
T getBigger(T input1, U input2);

int main()
{
    int a = 5;
    float b = 6.334;
    int bigger;
    std::cout<<"Between "<<a<<" and "<<b<<" "<<getBigger(a,b)<<" is bigger.\n";

    std::cout<<"Between "<<a<<" and "<<b<<" "<<getBigger(b,a)<<" is bigger.\n";
    return 0;
}

template<class T, class U>
T getBigger(T input1, U input2)
{
    if (input1 > input2)
        return input1;
    else
    {
        return input2;
    }
    
}

