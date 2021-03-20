//WAP using a function that returns the frequency of X among the first N elements of the array A[]

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int FindFreq(int x, int n, int arr[])
{
    int count=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
            count++;
    }

    return count;
}

int main()
{
    int A[30], n, x;
    srand(time(0));

    for(int i=0; i<30; i++)
        A[i] = rand()%10;

    cout<<"\nArray = {"<<A[0];
    for(int i=1; i<30; i++)
        cout<<", "<<A[i];
    cout<<"}\n";

    cout<<"\n\nFind frequency of ";
    cin>>x;

    cout<<"\nCheck for how many terms? ";
    cin>>n;

    cout<<"\nThe frequency of "<<x<<" among the first "<<n<<" elements of the array is = "<<FindFreq(x, n, A);

    cout<<"\n\n\n";
	return 0;
}
