#include <iostream>
using namespace std;

int main(){
 
 double f=0,c=0;
  
  cout << " Program to Convert Celsius to Fahrenhite \n";
  cout << "------------------------------------------------\n";

  cout << "Input the temperature in Fahranhite: ";
  cin >> f;
  c=5*(f-32)/9;
  cout <<"The temperature in Fahremhite : "<< f ;
  cout <<"\nThe temperature in Celsius : "<< c ;
   
   return 0;

}