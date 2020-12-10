//Write a program to generate a table of conversions from Fahrenheit to Celsius for values from 0 degrees F to 100 degrees F. 
//Print a line in the table for each 5-degree change.
//Solution by Srijan Dutta

#include <iostream>

using namespace std;

double FtoC(double a);

int main(void){
    for(int n=0; n<=100;n++)
    cout<<"Farenheit\t\tCelsius\n"<<n<<"\t\t\t\t"<<FtoC(n)<<"\n";

}
double FtoC(double a){
    double c=0.0;
    c=(5*(a-32))/9.0;
    return c;
}
