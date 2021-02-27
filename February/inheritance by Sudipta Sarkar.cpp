#include<iostream>
using namespace std;
class Car{

    int p;
    int m;
    int cc;
    char n[10];
    char c[10];
public:

    void in()
    {
        cout<<"Enter the name of the Car ";
        cin>>n;
        cout<<"Enter the price of the car ";
        cin>>p;
        cout<<"Enter the power of the car in CC ";
        cin>>cc;
        cout<<"Enter the mailage of the car ";
        cin>>m;
        cout<<"Enter the coular of the car ";
        cin>>c;

    }
            void out()
            {
              cout<<"The name of this car "<<n<<endl;
                 cout<<"The price is "<<p<<endl;
                 cout<<"The power is "<<cc<<endl;
                 cout<<"The mailage of this car "<<m<<endl;
                cout<<"The coular of this car "<<c<<endl;

            }

};

    class Super_Car : public Car            // Inherited class Super_Car it is in buld boths propertys
    {

        char model[10];
        int s;
        int l;

    public:

        void in1()
        {
            cout<<"Enter the model no of this Car ";
            cin>>model;
            cout<<"Enter the maximum speed of this car ";
            cin>>s;
            cout<<"Enter the lowes speed ";
            cin>>l;
        }

      void out1()
      {
          cout<<"The Model No Of This Car "<<model<<endl;
          cout<<"The Maximum Speed of This Car "<<s<<endl;
          cout<<"The Lowest Speed of this Car "<<l<<endl;
      }
    };
    int main()
    {
        Super_Car s1;
       s1.in();
      s1.in1();

      cout<<"_______________\n\n\n\n";
      s1.out();
      s1.out1();

       cout<<"___________________\n\n\n\n";
      Car c1;
      c1.in();
      cout<<"______________\n\n\n\n\n\n\n";
      c1.out();

        return 0;
    }
