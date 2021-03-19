#include<iostream>
using namespace std;
int main()
{
    int i, Num_arr[50], sum, num;

    cout << "Enter size of array : ";
    cin >> num;
    cout << "\nEnter array elements : ";
    for (i = 0; i < num; i++)
    {
        cin >> Num_arr[i];
    }
    sum = 0;
    for (i = 0; i < num; i++)
    {
        sum = sum + Num_arr[i];
    }
    cout << "\nSum of array element is : " << sum;
    return 0;
}
