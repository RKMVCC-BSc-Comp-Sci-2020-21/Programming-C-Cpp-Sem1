#include<iostream>
#include<string.h>
using namespace std;
class Product
{
	private:
		char pname[20];
		float mrp;
		int qt;
	public:
	  getdata();
	  showdata();
};
Product::getdata()
{

	 	cout<<"\n\nEnter the product name : ";
	 	cin>>pname;
	 	cout<<"\n\nEnter the mrp : ";
	 	cin>>mrp;
	 	cout<<"\n\nEnter the quantity : ";
	 	cin>>qt;
}
Product::showdata()
	 {
	 	cout<<"\n\nProduct name is "<<pname;
	 	cout<<"\n\nMrp of the product "<<mrp;
	 	cout<<"\n\nQuantity of the product "<<qt;
	 }
Product::Product
	 {
	 	strcpy(pname,"");
	 	mrp=0.0;
	 	qt=0;
	  }
Product::Product(char s[],float a , int p )//parameterised constructor
	  {
	  	strcpy(pname,s);
	  	mrp=a;
	  	qt=p;
	  }
	  
};
int main()
{
	Product obj;
	obj.showdata();
	obj.getdata();
	obj.showdata();
	Product obj1("Sunlight",20.0,6);
	obj1.showdata();
	return 0;
}
