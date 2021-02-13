# include <iostream>
# include <cmath>
# include <ctime>
# include <iomanip>
using namespace std ;

int main()
{
    int i,j,size,w,e;
    double r ,mean,standarddeviation;
    srand((unsigned)(time(0)));
    cout<<"ENTER THE SIZE OF THE MATRIX"<<endl;
    cin>>size;
    double arr[size][size];
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            arr[i][j]=rand()%100;
            r= r+arr[i][j];
        }
    }
    cout<<"THE REQUIRED MATRIX IS"<<endl;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cout<<setw(5)<<arr[i][j];
        }
        cout<<endl;
    }
    mean=r/(size*size);
    cout<<"THE MEAN OF THE ABOVE MATRIX IS"<<endl;
    cout<<mean<<endl;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            arr[i][j]=(arr[i][j]-mean)*(arr[i][j]-mean);
            w=w+arr[i][j];
        }
    }
    cout<<"THE REQUIRED MATRIX IS"<<endl;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cout<<setw(20)<<arr[i][j];
        }
        cout<<endl;
    }
    standarddeviation=w/(size*size);
    cout<<"THE STANDARD DEVIATION IS"<<endl;
    cout<<standarddeviation<<endl;
    return 0;
}
