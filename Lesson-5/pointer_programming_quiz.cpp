/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include<iostream>
#include<string>
#include<sstream>
int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;
    int *pointerGivenInt;
    int **pointerPointerGivenInt;
    
    pointerGivenInt = &givenInt;
    pointerPointerGivenInt = &pointerGivenInt;
    
    std::cin>>givenInt;
    std::cin>>givenFloat;
    std::cin>>givenDouble;
    // we need to use cin.ignore so cin will ignore 
    // the characters in the buffer leftover from the givenDouble
    std::cin.ignore();
    std::cin>>givenChar;
    
    std::cin.ignore();
    
    std::getline (std::cin, givenString);
    
    //The value stored in the data
    std::cout << "givenInt is " << givenInt << '\n';
    std::cout << "givenFloat is " << givenFloat << '\n';
    std::cout << "givenDouble is " << givenDouble << '\n';
    std::cout << "givenString is " << givenString << '\n';
    std::cout << "givenChar is " << givenChar << '\n';
    
    // The address of the data
    std::cout << "address of givenInt is " << &givenInt << '\n';
    std::cout << "address of givenFloat is " << &givenFloat << '\n';
    std::cout << "address of givenDouble is " << &givenDouble << '\n';
    std::cout << "address of givenString is " << &givenString << '\n';
    std::cout << "address of givenChar is " << &givenChar << '\n';
    
    //Use indirection to get the value store
    std::cout << "The value stored in the pointer of givenInt is " << *pointerGivenInt << '\n';
    std::cout << "The value store in the pointer of pointer of givenInt is " << **pointerPointerGivenInt << '\n';

    return 0;
}
