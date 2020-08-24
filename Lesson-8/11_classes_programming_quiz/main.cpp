/*Goal: practice creating and using a class
**Use the class 'Dog' to create to 
**instances of the class, dog1 and dog2.
**Assign dog1 the name: Trixie
**Assign dog2 the name: Kali
**Assign dog1 the license #1234
**Assign dog2 the license #5678
*/


#include"main.hpp"

int main()
{
    std::string name1 = "Trixie";
    int licNum1 = 1234;

    std::string name2 = "Kali";
    int licNum2  = 5678;
    
    Dog dog1;
    Dog dog2;

    dog1.setName(name1);
    dog1.setLicenseNumber(licNum1);
    dog1.printInfo();
    std::cout << "\n";

    dog2.setName(name2);
    dog2.setLicenseNumber(licNum2);
    dog2.printInfo();

    return 0;
}