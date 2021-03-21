#include<iostream>
using namespace std;
class Car
{
//private:
public:
    int price;
    int rank;
    string model;
//public:
    void data()
    {
        cout<<"Enter the Model no = ";
        cin>>model;
        cout<<"Enter the Price of this Car = ";
        cin>>price;
        cout<<"Enter the Rank of this Car = ";
        cin>>rank;
    }

    void putdata()
    {
        cout<<"The Model no of the Car = "<<model<<endl;
        cout<<"The Price of this Car = "<<price<<endl;
        cout<<"The Rank of this Car = "<<rank<<endl;
    }
};
class Super_Car:public Car
{
public:
    float max_speed;
    float power;
    float rpm;
    string win;

    virtual void data()
    {
        cout<<"Enter the Model no = ";
        cin>>model;
        cout<<"Enter the Price of this Car = ";
        cin>>price;
        cout<<"Enter the Rank of this Car = ";
        cin>>rank;
        cout<<"Enter the Maximum Speed of this Car = ";
        cin>>max_speed;
        cout<<"Enter the Power of this Car = ";
        cin>>power;
        cout<<"Enter the Last wining place = ";
        cin>>win;
    }
    virtual void putdata()
    {
        cout<<"The Model no of the Car = "<<model<<endl;
        cout<<"The Price of this Car = "<<price<<endl;
        cout<<"The Rank of this Car = "<<rank<<endl;
        cout<<"The Maximum speed of this Car = "<<max_speed<<endl;
        cout<<"The Power of this Car = "<<power<<endl;
        cout<<"The Last Wining place = "<<win<<endl;

    }

    void f1();

};
void Super_Car ::f1()
{
  cout<<"\n\n\n\n\n";
}

int main()
{
   Super_Car c1;
    c1.data();
    c1.f1();
    c1.putdata();
    return 0;
}
