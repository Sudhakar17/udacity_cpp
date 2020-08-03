/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

#include<iostream>

int main()
{
    int userInput = 0;
    int minNumber = 100;
    int maxNumber = 0;
    int sumTotal = 0;
    float average;
    
    for (int i=0; i<15; i++)
    {
        std::cout << "Enter a number ";
        std::cin >> userInput;
        std::cout << userInput << std::endl;
        
        if (userInput < minNumber) 
            minNumber = userInput;
        if (userInput > maxNumber)
            maxNumber = userInput;
            
        sumTotal += userInput;
        
    }
    
    average = sumTotal / 15.0 ;
    std::cout << "The min of the numbers is " << minNumber << std::endl;
    std::cout << "The max of the numbers is " << maxNumber << std::endl;
    std::cout << "The average of the numbers is " << average << std::endl;
    
    return 0;
    
}