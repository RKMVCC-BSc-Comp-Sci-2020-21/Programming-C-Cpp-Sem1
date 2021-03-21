#include <bits/stdc++.h> 
using namespace std; 
void swap(int *xp, int *yp) 
{ 
int temp = *xp; 
*xp = *yp; 
*yp = temp; 
} 

void bubbleSort(int arr[], int n) 
{ 
int i, j; 
for (i = 0; i < n-1; i++) 

for (j = 0; j < n-i-1; j++) 
if (arr[j] > arr[j+1]) 
swap(&arr[j], &arr[j+1]); 
} 

void Display(int arr[], int size) 
{ 
int i; 
for (i = 0; i < size; i++) 
cout << arr[i] << " "; 
cout << endl; 
} 

int main() 
{ 
int arr[] = {3,5,2,6,2,5,7,4,1,6,8,9,4,0,2,4,3,7,9,3,7,3,7,8,2,7,9,3,8,2}; 
int n = sizeof(arr)/sizeof(arr[0]); 
bubbleSort(arr, n); 
cout<<"Sorted array: \n"; 
Display(arr, n); 
return 0; 
}
