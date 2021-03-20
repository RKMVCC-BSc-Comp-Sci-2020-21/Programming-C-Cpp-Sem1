//WAP using a function that removes an element from an array

#include <iostream>
#include <ctime>
using namespace std;

void Pop(int x, int arr[])
{
    for(int i=0; i<5; i++)
    {
        if(i==x-1)
            continue;
        else
            cout<<arr[i]<<", ";
    }
    cout<<"\b\b}\n";
}

int main()
{
    int arr[5], n;
    srand(time(0));

    for(int i=0; i<5; i++)
        arr[i] = rand()%100;

    cout<<"\nArray = {"<<arr[0];
    for(int i=1; i<5; i++)
        cout<<", "<<arr[i];
    cout<<"}\n";

    cout<<"\nWhich element do you want to remove? ";
    cout<<"\n\n\tEnter Your Choice (1-5) --> ";
    cin>>n;

    if(n>5)
        cout<<"\n\tInvalid Input!!\n\n\n";
    else
    {
        cout<<"\n\nThe "<<n;
        switch(n)
        {
         case 1: cout<<"st "; break;
         case 2: cout<<"nd "; break;
         case 3: cout<<"rd "; break;
        default: cout<<"th "; break;
        }
        cout<<"element of the Array has been removed! ";
        cout<<"\n\n\tRemaining elements of the array are = {";
        Pop(n, arr);
    }

cout<<"\n\n\n";
return 0;
}
