/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

int main()
{
    int userInput[40];
    
    // Get the inputs and stored in the array; print the array
    std::cout << "printing the array" << std::endl;
    for(int i = 0; i < 40; i++)
    {
        std::cin >> userInput[i];
        std::cout << userInput[i] << " "; // print the array
    }
    
    // print the array in reverse order.
    std::cout << "\nprint the array in reverse order" << std::endl;
    for(int i=40; i>0; i--)
    {
        std::cout << userInput[i-1] << " ";
    }
    
    // sort the array 
    
    for (int i=0; i<40; i++)
    {
        for (int j=0; j<40-i-1; j++)
        {
            if (userInput[j] > userInput[j+1])
            {
                int temp;
                temp = userInput[j];
                userInput[j] = userInput[j+1];
                userInput[j+1] = temp;
            }
            
        }
    }
    
    std::cout << "\nprint the sorted array" << std::endl;
    for(int i = 0; i < 40; i++)
    {
        std::cout << userInput[i] << " "; // print the array
    }
    return 0;
}