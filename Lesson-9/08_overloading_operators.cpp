#include <iostream>

class Shape
{
    private:
        int length;
        int width;
    public:
        // Constructor definition
        Shape(int l = 2, int w =2)
        {
            length = l;
            width = w;
        }

        double Area()
        {
            return length * width;
        }

        int operator + (Shape shapeIn)
        {
            return Area() + shapeIn.Area();
        }
};


int main()
{
    Shape sh1(4, 4); // declare shape1
    Shape sh2(2, 6); // declare shape2

    int total = sh1 + sh2;

    std::cout<<"\n sh1.Area() = "<<sh1.Area();
    std::cout<<"\n sh2.Area() = "<<sh2.Area();
    std::cout<<"\Total ="<<total;

    return 0;
}