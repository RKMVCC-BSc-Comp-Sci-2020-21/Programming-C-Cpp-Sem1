#include<iostream>

using namespace std;
int main(){
	float C,F;//C for celsius and F for fahrenheit
	
	cout<<"Enter the value of temperature in celsius :";
	cin>>C;
		F= (9/5*C)+32;
		cout<<"Temperature in Fahrenheit\n"<<F;
		
		return 0;
}
