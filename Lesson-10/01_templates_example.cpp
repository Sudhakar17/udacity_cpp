#include <iostream>

// our generic function
template <typename T> // tell the compiler we are using a template
T findSmaller(T input1, T input2);

int main()
{
    int a = 54; 
    int b = 89;
    float f1 = 7.8;
    float f2 = 9.1;
    char c1 = 'f';
    char c2 = 'h';
    std::string s1 = "Hello";
    std::string s2 = "Bots are fun";
    
    //We can use one function for different variable types
    std::cout<<"\nIntegers compared: "<<findSmaller(a,b);
    std::cout<<"\nFloats compared: "<<findSmaller(f1,f2);
    std::cout<<"\nChars compared: "<<findSmaller(c1,c2);
    std::cout<<"\nStrings compared: "<<findSmaller(s1,s2);
    return 0;
}


template <typename T>
T findSmaller(T input1, T input2)
{
    if (input1 < input2)
        return input1;
    return input2;
    
}
