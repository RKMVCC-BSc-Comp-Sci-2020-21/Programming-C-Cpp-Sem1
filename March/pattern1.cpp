#include<iostream>
using namespace std ;
int main()
{
    int limit;
    cout<<"ENTER THE LIMIT UPTO WHICH YOU WILL PRINT"<<endl;
    cin>>limit;
    int i,j,k;
    for(i=1;i<=limit;i++)
    {
        if(i!=1)
        {
            //PRINTING THE FIRST SPACES AFTER THE FIRST ITERATION OF i
            for(k=1;k<i;k++)
                cout<<" ";
        }
        //PRINTING THE FIRST SET OF THE STARS FORMING THE TRIANGLE
        for(j=limit;j>=i;j--)
        {
            cout<<""<<"*"<<" ";
        }
        if(i!=1)
        {
            //PRINTING THE NEXT SET OF THE SPACE WHICH RESEMBLES THE TRIANGLE
            for(k=1;k<i;k++)
            {
                cout<<" "<<" "<<"";
            }
        }
        //PRINTING THE NEXT SET OF THE TRIANGLE
        for(j=limit;j>=i;j--)
        {
            cout<<""<<"*"<<" ";
        }
        cout<<endl;
    //END OF THE FIRST ROW
    }
    //BEGINNING OF THE SECOND ROW
    for(i=2;i<=limit;i++)
    {
        //PRINTING THE SECOND SET OF THE SPACES BEFORE THE LAST ITERATION
        if(i!=limit)
        {
            for(k=limit;k>i;k--)
                cout<<" ";
        }
        //PRINTING THE FIRST SET OF THE TRIANGLE PRESENT IN THE SECOND ROW
        for(j=1;j<=i;j++)
        {
            cout<<""<<"*"<<" ";
        }
        //PRINTING THE SECOND SET OF THE SPACES BEFORE THE SECOND SET OF THE TRIANGLE OF THE SECOND ROW
       if(i!=limit)
        {
            for(k=limit;k>i;k--)
            {
                cout<<" "<<" "<<"";
            }
        }
       //PRINTING THE SECOND SET OF THE TRIANGLE
        for(j=1;j<=i;j++)
        {
            cout<<""<<"*"<<" ";
        }
       cout<<endl;
    }
    for(i=1;i<=limit;i++)
    {
        if(i!=1)
        {
            //PRINTING THE FIRST SPACES AFTER THE FIRST ITERATION OF i
            for(k=1;k<i;k++)
                cout<<" ";
        }
        //PRINTING THE FIRST SET OF THE STARS FORMING THE TRIANGLE
        for(j=limit;j>=i;j--)
        {
            cout<<""<<"*"<<" ";
        }
        if(i!=1)
        {
            //PRINTING THE NEXT SET OF THE SPACE WHICH RESEMBLES THE TRIANGLE
            for(k=1;k<i;k++)
            {
                cout<<" "<<" "<<"";
            }
        }
        //PRINTING THE NEXT SET OF THE TRIANGLE
        for(j=limit;j>=i;j--)
        {
            cout<<""<<"*"<<" ";
        }
        cout<<endl;
    //END OF THE FIRST ROW
    }
    //BEGINNING OF THE SECOND ROW
    for(i=2;i<=limit;i++)
    {
        //PRINTING THE SECOND SET OF THE SPACES BEFORE THE LAST ITERATION
        if(i!=limit)
        {
            for(k=limit;k>i;k--)
                cout<<" ";
        }
        //PRINTING THE FIRST SET OF THE TRIANGLE PRESENT IN THE SECOND ROW
        for(j=1;j<=i;j++)
        {
            cout<<""<<"*"<<" ";
        }
        //PRINTING THE SECOND SET OF THE SPACES BEFORE THE SECOND SET OF THE TRIANGLE OF THE SECOND ROW
       if(i!=limit)
        {
            for(k=limit;k>i;k--)
            {
                cout<<" "<<" "<<"";
            }
        }
       //PRINTING THE SECOND SET OF THE TRIANGLE
        for(j=1;j<=i;j++)
        {
            cout<<""<<"*"<<" ";
        }
       cout<<endl;
    }
    return 0;
}
