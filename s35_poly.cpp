#include <iostream>
using namespace std;
class Shape
{
public:
virtual void draw()
{
cout << "drawing..." << endl;
}
};
class Rectangle : public Shape
{
public:
void draw()
{
cout << "drawing rectangle..." << endl;
}
};
class Circle : public Shape

{
public:
void draw()
{
cout << "drawing circle..." << endl;
}
};
int main(void)
{
Shape *s;
Shape sh;
Rectangle rec;
Circle cir;
s = &sh;
s->draw();
s = &rec;
s->draw();
s->draw();
}
