#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    const int rows=3;
    const int cols =3;
    int nums[rows][cols]={2897,5,837,34,7,1623,390,3456,12};
    fstream outputfile("table.txt",ios::out);
    for(int Rows=0;Rows<rows;Rows++)
    {
        for(int Cols=0;Cols<cols;Cols++)
        {
            outputfile<<"   "<<nums[Rows][Cols];
        }
        outputfile<<endl;
    }
    outputfile.close();
    cout<<endl;
   fstream output("table.txt",ios::out|ios::app);
   output<<"I LOVE C++ PROGRAMMING"<<endl;
   outputfile.close();
    return 0;
}
