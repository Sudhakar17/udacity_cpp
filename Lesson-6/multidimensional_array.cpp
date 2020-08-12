/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>

int main()
{
    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector
    int array2Dim[4][4] = {};
    int array1Dim[4] = {};
    int resultArr[4] = {};
    
    // Get the 2D array
    for (int i=0; i<4; i++)
        for (int j=0; j<4; j++)
            std::cin >> array2Dim[i][j];
    
    // Get the 1D array
    for (int i=0; i<4; i++)
        std::cin >> array1Dim[i];
    
    // Dot product between 2D array and 1D vector; store the resultant vector    
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            resultArr[i] += array2Dim[i][j] * array1Dim[j];
        }
    }
    
    // print the resultant vector
    for (int i=0; i<4; i++)
        std::cout << resultArr[i] << std::endl;
    return 0;
}