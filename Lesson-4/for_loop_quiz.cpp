/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include<iostream>

int main()
{
    float sum = 0;
    float input;
    
    for (int i=0; i<5; i++)
    {
        std::cout<<"Please enter the integer";
        std::cin>> input;
        sum = sum + input;
        
    }
    
    std::cout<<"Sum is: "<<sum<<std::endl;
    std::cout<<"Average is: "<<sum/5 <<std::endl;
    
    return 0;
}