//Write a C++ function to swap two integers without
//using a temp variable. 

//Hint: think about pointers

#include<iostream>

void swap(int *x, int *y);

void swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main()
{
    int a = 10;
    int b = 20;
    std::cout<<"Before swapping a and b are "<<a<<","<<b<<std::endl;
    swap(&a, &b);
    std::cout<<"after swapping a and b are "<<a<<","<<b<<std::endl;
    return 0;
}

