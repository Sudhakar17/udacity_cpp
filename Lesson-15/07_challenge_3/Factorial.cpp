#include "Factorial.h"



int Factorial(int n)
{
    int result=0;
    if (n==1 || n==0)
        return 1;
    if (n>1)
       return n * Factorial(n-1);
}