#include <iostream>
using namespace std;
float getAverage(int *arr, int size); 
int main () 
{
int balance[5] = {1432, 232, 3232, 17, 502};
float avg;
avg = getAverage( balance, 5 ) ;
cout << "Average value is: " << avg << endl; 
return 0;
}
float getAverage(int *arr, int size) {
int i, sum = 0;       
double avg;          
for (i = 0; i < size; ++i) {
sum += arr[i];
}
avg = double(sum) / size; 
return avg;
}
