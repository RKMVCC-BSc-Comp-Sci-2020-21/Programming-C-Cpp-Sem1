// Name:- Avirup Dutta  ,  Roll no:- 721


#include <iostream>
using namespace std;

//Base class shape

class shape
{
public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }

protected:
    int width;
    int height;
};

//Base class Paint cost

class Paintcost
{
public:
    int getcost(int area)
    {
        return area * 70;
    }
};

//Derived class

class Rectangle : public shape, public Paintcost
{
public:
    int getArea()
    {
        return (width * height);
    }
};
main()
{
    Rectangle Rect;
    int area;
    Rect.setWidth(5);
    Rect.setHeight(7);
    area = Rect.getArea();
    cout << "Total Area :" << Rect.getArea() << endl;
    cout << "Total Paint cost:" << Rect.getcost(area) << endl;
}
