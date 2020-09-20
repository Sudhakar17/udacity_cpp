#include <iostream>
#include <vector>

int main()
{
    // Creating a vector of integers
    std::vector<int> vectorInts;

    // Creating an iterator for the vector
    std::vector<int>::iterator it;

    std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
    std::cout<<"\n\n Adding four elements to the vector";

    // assigning the value 3 to 4 elements of the vector
    vectorInts.assign(4,3);

    // printing the contents of vectorInts
    std::cout<<"VectorInts has these elements: \n";
    for (it=vectorInts.begin(); it!= vectorInts.end(); ++it)
    {
        std::cout<<*it<<" ";
    }

    return 0;
}