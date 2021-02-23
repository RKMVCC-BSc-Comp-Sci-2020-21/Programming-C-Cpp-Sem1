#include<iostream>
using namespace std;

class Complex
{
private:
    int x,y;
public:
    void putdata(int a,int b)
    {
        x=a;
        y=b;
    }
    void printdata()
    {
        cout<<"\t Result is =>> ( " <<x<<" + "<<y<<" i )"<<endl;
    }

    Complex operator +(Complex i)           // operator Overloading
    {
        Complex t;
        t.x = x + i.x;
        t.y = y + i.y;

        return (t);
    }
};

int main()
{
    Complex c1,c2,c3;
    float q,w,e,r;

    cout<<"Enter First Complex Number[real and imag] \n";
   cin>>q>>w;

   cout<<"\n Enter Second Complex Number[real and imag] \n";
  cin>>e>>r;


    c1.putdata(q,w);
    c2.putdata(e,r);

    c3 = c1 + c2;

    c3.printdata();

    return 0;
}

