#include <iostream>
using namespace std;
void printArray(int arr[5]);
int main()
{
int arr1[5] = {1, 2, 3, 4, 5};
int arr2[5] = {6, 7, 8, 9, 0};
printArray(arr1);
printArray(arr2);
}
void printArray(int arr[5])
{
cout << "Array elements:" << endl;
for (int i = 0; i < 5; i++)
{
cout << arr[i]<<" ";
}
cout << endl;
}
