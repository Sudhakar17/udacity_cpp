// constructing vectors

#include <iostream>
#include <vector>

void printVector(std::vector<float> vIn);

void printVector(std::vector<float> vIn)
{ // printing the contents of vIns

    std::vector<float>::iterator it;
    std::cout<<"vFloats has these elements: \n";
    for(it= vIn.begin(); it!= vIn.end(); ++it)
    {
        std::cout<<*it<<" ";
    }

}