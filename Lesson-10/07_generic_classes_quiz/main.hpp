/*header file*/

#include <iostream>

template <class T>
class Multiplier
{
  private:
    T inp1;
    T inp2;
    T product;
  public:

    void setM1(T input);
    void setM2(T input);
    void setProduct();
    void printEquation();
};


template <class T>
void Multiplier<T>::setM1(T input)
{
    inp1 = input;
}

template <class T>
void Multiplier<T>::setM2(T input)
{
    inp2 = input;
}

template <class T>
void Multiplier<T>::setProduct()
{
    product = inp1 * inp2;
}

template <class T>
void Multiplier<T>::printEquation()
{
    std::cout<<inp1<<"*"<<inp2<<"="<<product<<std::endl;
}