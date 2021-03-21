#include <iostream>
#include <cmath>
using namespace std;
int OctalToBinary(int octalNum) {
int decimalNum = 0, binaryNum = 0, count = 0;

while(octalNum != 0) {
decimalNum += (octalNum%10) * pow(8,count);
++count;
octalNum/=10;
}
count = 1;
while (decimalNum != 0) {
binaryNum += (decimalNum % 2) * count;
decimalNum /= 2;
count *= 10;
}
return binaryNum;
}
int main() {
int octalNum;
cout<<"Enter a Octal Number: ";
cin>>octalNum;
cout<<"Octal number: "<<octalNum<<endl;
cout<<"Binary number: "<<OctalToBinary(octalNum)<<endl;
return 0;
}
