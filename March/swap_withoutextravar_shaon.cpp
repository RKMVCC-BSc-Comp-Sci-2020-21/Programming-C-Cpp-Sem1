// C++ program to check if two numbers are equal 
#include<iostream> 

int main() 
{ 
int x = 10; 
int y = 70; 

x = x + y; 
y = x - y; 
x = x - y; 

cout << "X : " << x << "\n"; 
cout << "Y : " << y << "\n"; 
	
return 0; 
} 
