#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int status;
    char fileName[20];
    cout<<"Enter the Name of File: ";
    cin>>fileName;
    status = remove(fileName);
    if(status==0)
        cout<<"\nFile Deleted Successfully!";
    else
        cout<<"\nErorr Occurred!";
    cout<<endl;
    return 0;
}
