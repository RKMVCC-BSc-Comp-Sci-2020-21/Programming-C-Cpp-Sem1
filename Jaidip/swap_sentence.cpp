#include<iostream>
#include<string>
using namespace std;
int main()
{
    int size,size1,size2,size3;
    cout<<"ENTER THE SIZE OF THE FIRST ARRAY"<<endl;
    cin>>size1;
    cout<<"ENTER THE SIZE OF THE SECOND ARRAY"<<endl;
    cin>>size2;
    char ch[size1];
    char ch1[size2];
    if(size2>size1)
    {
        size3=size2;
        size=size1;
    }
    else
    {
        size3=size1;
        size=size2;

    }
    char swap[size3];
    fflush(stdin);
    cout<<"ENTER THE FIRST SENTENCE ";
    cin.getline(ch,3,'\n');
    cout<<"ENTER THE SECOND SENTENCE ";
    cin.getline(ch1,4,'\n');

    int p=0,i;
    for(i=0;i<size;i++)
    {
        swap[i]=ch[i];
        ch[i]=ch1[i];
        ch1[i]=swap[i];
    }
    for(i=0;i<size1;i++)
    {
        cout<<ch[i];
    }
    for(i=0;i<size1;i++)
    {
        cout<<ch1[i];
    }
    return 0;
}