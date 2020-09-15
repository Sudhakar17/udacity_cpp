#include <iostream>

class Shape
{
    private:
        // length and width of the box
        int length;
        int width;
    public:
        // constructor definition
        Shape(int l = 2, int w =2)
        {
            length = l;
            width = w;
        }

        double Area()
        {
            return length * width;
        }

        // use 'this' to compare areas
        int compareWithThis(Shape shape)
        {
            return this->Area() > shape.Area();
        }

        // 'this' is not necessary to comare shapes
        int compare(Shape shapeIn)
        {
            return Area() > shapeIn.Area();
        }
};

int main()
{
    Shape sh1(4, 4);
    Shape sh2(2, 6);

    if (sh1.compare(sh2))
    {
        std::cout<<"\n Shape 2 is smaller than Shape 1" << std::endl;
    }
    else
    {
        std::cout<< "\n Shape 2 is equal to or larger than Shape 1"<<std::endl;
    }
    
    if(sh1.compareWithThis(sh2))
    {
        std::cout<<"\n Shape 2 is smaller than Shape 1"<<std::endl;
    }

    else
    {
        
        std::cout<<"\n Shape 2 is equal to or larger than Shape 1"<<std::endl;
    }
    

    return 0;
}
