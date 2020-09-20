#include <iostream>
#include <vector>

int main()
{
    // creating a vector of integers
    std::vector<int> vectorInts;
    // creating an iterator for the vector
    std::vector<int>::iterator it;

    std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

    std::cout<<"Adding 23 to the vector \n";
    vectorInts.assign(1,23);
    for(it = vectorInts.begin(); it < vectorInts.end(); ++it)
        std::cout<<*it<<" ";

    std::cout<<"\n\nAdding four elements to the vector \n";
    // push back the elements to the vectorInts
    vectorInts.push_back(24);
    vectorInts.push_back(25);
    vectorInts.push_back(26);
    vectorInts.push_back(27);

    std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
    for(it = vectorInts.begin(); it < vectorInts.end(); ++it)
        std::cout<<*it<<" ";
    
    return 0;

}