//READING AND SHOWING OF THE ELEMENTS IN AN ARRAY
//CODE BY ANI\\
#include <iostream>
using namespace std;
class number
{
	private:
		char n[10];
	public:
		void getdata()
		{
			cout<<"Enter 10 numbers : ";
			gets(n);
		}	
		void showdata()
		{
			cout << "The numbers are: "<<"\n"<<n<<endl;
		}
};
int main()
{
	number obj;
	obj.getdata();
	obj.showdata();
	return 0;				
}
