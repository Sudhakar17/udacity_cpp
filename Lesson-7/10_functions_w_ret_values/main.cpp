/*Goal: practice writing functions with parameters and return values.*/

#include "main.hpp"

int main()
{
    int a = 100;
    int b = 200;
    int result;
    result = sum(a,b);
    printEquation(a, b, result, '+');
    return 0;
}