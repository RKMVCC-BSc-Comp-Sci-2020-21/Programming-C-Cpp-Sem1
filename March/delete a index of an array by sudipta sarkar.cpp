#include<iostream>
using namespace std;
int main()
{
    int i = 0,m,x;

    cout<<"Enter the numbers of the Elements of this Array = ";
    cin>>m;
    int a[m];
    cout<<"Enter the Elements of this Array \n";

    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }

    cout<<"\n\n\n";

    for(i=0;i<m;i++)
    {
        cout<<"\t "<<(i+1)<<"\t"<<"Element is = "<<a[i]<<endl;
    }

    cout<<"Enter the point which is delete by you = ";
    cin>>x;



    cout<<"\n\n After Delete the array point \n\n";

    for(i=0;i<m;i++)
    {
        if((x-1)==i)
        {

        }
        else{
        cout<<"\t "<<(i+1)<<"\t"<<"Element is = "<<a[i]<<endl;
        }
    }

    return 0;
}
