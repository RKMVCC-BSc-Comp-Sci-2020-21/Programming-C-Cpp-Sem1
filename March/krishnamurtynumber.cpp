#include<iostream>
using namespace std;
 
//Function to calculate the factorial of any number
int factorial(int n)
{
int fact = 1;
while (n != 0)
{
   fact = fact*n;
   n--;
}
return fact;
}
 
//function to Check if number is krishnamurthy
void isKrishnamurthy(int n)
{
int sum = 0;

int temp = n;
while (temp != 0)
{
// calculate factorial of last digit
// of temp and add it to sum

sum += factorial(temp%10);

// replace value of temp by temp/10
temp = temp/10;
}

// Check if number is krishnamurthy

if(sum == n)
cout << "Yes. Input no is a Krishnamurthy";
else
cout << "No. Input no is not a Krishnamurthy";
}
 
int main()
{
int n;
cout<<"\n Input any no : ";
cin>>n;

isKrishnamurthy(n);

return 0;
}
