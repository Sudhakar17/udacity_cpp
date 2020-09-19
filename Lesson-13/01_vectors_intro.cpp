// constructing vectors

#include <iostream>
#include <vector> // need to include the vector library

int main()
{
    // creating a vector of integers
    std::vector<int> vectorInts;
    std::cout<<"VectorInts has " <<vectorInts.size()<<" elements \n";

    // changing the size of vectorInts to 6
    vectorInts.resize(6);
    std::cout<<"\n\n vectorInts now has "<<vectorInts.size()<<" elements\n";
    return 0;
}