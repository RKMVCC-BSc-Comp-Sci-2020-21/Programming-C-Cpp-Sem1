# include<iostream>
#define s 3

using namespace std;

int main()
{
    int i,j;

    int a[s][s], arr1[s][s],arr2[s][s];


    cout<<"Enter the elements of this MATRIX"<<endl;

    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            cin>>a[i][j];
        }
    }
   cout<<"\n------MY MATRIX IS----\n\n"<<endl;
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<endl;
    }
    cout<<"\n \t Mirror Images Of The MATRIX [ ROWS ] \n\n"<<endl;


    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            arr1[i][j]=a[s-1-i][j];
        }
    }
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            cout<<"\t"<<arr1[i][j];
        }
        cout<<endl;
    }
    cout<<"\n \t MIRROR Images Of The MATRIX [ COLLMS ] \n\n"<<endl;


    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            arr2[i][j]=a[i][s-1-j];
        }
    }
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            cout<<"\t"<<arr2[i][j];
        }
        cout<<endl;
    }
    return 0;
}
