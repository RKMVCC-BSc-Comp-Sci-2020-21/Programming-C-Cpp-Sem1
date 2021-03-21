#include <iostream> 
using namespace std; 

class Point 
{ 
	int x, y; 
public: 
Point(int i, int j) { x = 10; y = 20; } 
int getX() { return x; } 
int getY() { return y; } 
}; 

int main() 
{ 
	Point p1(10, 20); 
	Point p2 = p1; // This compiles fine 
	cout << "x = " << p2.getX() << " y = " << p2.getY(); 
	return 0; 
}
