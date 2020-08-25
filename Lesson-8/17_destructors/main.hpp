#include<iostream>

class Dog
{
    private:
        int license;
    public:
        Dog();
        ~Dog();
        Dog(int licenseIn);
        void setLicense(int LicenseIn);
        int getLicense();
};

Dog::Dog()
{
    license = 0;
}

Dog::~Dog()
{
    std::cout << "\n Deleting the dog";
}

Dog::Dog(int licenseIn)
{
    license = licenseIn;
}

int Dog::getLicense()
{
    return license;
}