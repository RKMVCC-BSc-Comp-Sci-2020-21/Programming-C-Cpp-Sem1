/* inline.cpp */
// using an inline function to calculate the volume of a cube
#include <iostream>
using namespace std;

inline double cube (double);

int main(){
  double side;
  for (int i = 1; i <= 3; i++){
    cout << "Enter cube's side: ";
    cin >> side;
    cout << "The volume of cube with side " << side
	<< " is " << cube(side) << endl;
  }
  return 0;
}

inline double cube(double side){
  return side * side * side;
}

