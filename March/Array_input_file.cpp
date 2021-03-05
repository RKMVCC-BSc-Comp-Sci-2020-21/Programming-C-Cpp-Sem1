#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h;
    cout<<"ENTER THE LENGTH OF THE ARRAY"<<endl;
    cin>>a;
    int arr[a];
    for(d=0;d<a;d++)
        arr[d]=d;
    ofstream outputfile;
    outputfile.open("array.txt");
    for(d=0;d<a;d++)
        outputfile<<arr[d]<<endl;
    outputfile.close();
    return 0;
}
