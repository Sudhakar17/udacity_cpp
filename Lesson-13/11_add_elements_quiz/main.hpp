#include <iostream>
#include <vector>

void printVector(std::vector<int> vInts);
void assignFunction(std::vector<int> vInts, int);
void pushBackFunction(std::vector<int> vInts, int);
void emplaceFunction(std::vector<int> vInts, int, int);

void printVector(std::vector<int> vInts)
{
    std::vector<int>::iterator it;
    for(it=vInts.begin(); it<vInts.end(); ++it)
        std::cout<<*it<<" ";
}

void assignFunction(std::vector<int> vInts, int num)
{
    std::cout<<"\nassigning "<<num<<" and printing the vector\n";
    int n;
    n = vInts.size();
    vInts.assign(n, num);
    printVector(vInts);

}

void pushBackFunction(std::vector<int> vInts, int num)
{
    std::cout<<"\npush back "<<num<<" and printing the vector\n";
    vInts.push_back(num);
    printVector(vInts);
}

void emplaceFunction(std::vector<int> vInts, int loc, int num)
{
    std::cout<<"\nemplacing "<<num<<" and printing the vector\n";
    std::vector<int>::iterator it;
    it = vInts.begin() + loc;
    vInts.emplace(it, num);
    std::cout<<"\n\nAfter the insert\n";
    printVector(vInts);

}
