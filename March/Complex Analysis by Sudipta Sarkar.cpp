#include<iostream>
#include<cmath>
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

    Complex operator -(Complex i)
    {
        Complex t;
        t.x = x - i.x;
        t.y = y - i.y;


        return (t);


    }

    Complex operator *(Complex i)
    {
        Complex t;
        t.x = x*i.x - y*i.y;
        t.y = x*i.y + y*i.x;


        return (t);


    }


    void mod(int c, int d)
    {
        x = c;
        y = d;
        cout<<"The Modulus of The Complex Number is = "<<sqrt(x*x + y*y)<<endl;
    }


};

int main()
{
    Complex c1,c2,c3,c4,c5;
    float q,w,e,r;

    cout<<"Enter First Complex Number[real and imag] \n";
   cin>>q>>w;

   cout<<"\t The Complex Number = ( " <<q<<" + "<<w<<" i )"<<endl<<endl;
   c1.mod(q,w);

   cout<<"\n Enter Second Complex Number[real and imag] \n";
  cin>>e>>r;
  cout<<"\t The Complex Number = ( " <<e<<" + "<<r<<" i )"<<endl<<endl;
  c2.mod(e,r);

    c1.putdata(q,w);
    c2.putdata(e,r);

    cout<<"\n\n\n";



    c3 = c1 + c2;
    c4 = c1 - c2;
    c5 = c1 * c2;

     cout<<"The Addition    "; c3.printdata();
     cout<<"The Subtraction " ; c4.printdata();
     cout<<"The Multiplication " ; c5.printdata();

    return 0;
}

