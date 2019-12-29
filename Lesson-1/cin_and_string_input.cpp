/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    string address;
    string phno;
    
    getline (cin,name);
    getline (cin,address);
    getline (cin,phno);
    
    cout <<'\t'<<name<<endl;
    cout <<'\t'<<address<<endl;
    cout <<'\t'<<phno<<endl;

    
}