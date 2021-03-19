/*8. C/C++ Program to make such a pattern like a pyramid using number and a number will repeat for a row.*/ 
#include<iostream>

using namespace std;

class pattren{
	private :
		int r,n,space,star;
	public:
		void input ();
		void draw();
};
void pattren :: input()
{
	cout<<"\n\tEnter a numebr : ";
	cin>>n;
}
void pattren :: draw()
{
	for(r=1;r<=n;r++)
	{
			
		cout<<"\n\t";
		for(space=1;space<=n-r;space++)
			cout<<" ";
		for(star=1;star<=r;star++)
		cout<<star;
		for(star =r-1;star>=1;star--)
			cout<<star;
	}
}
int main()
{
	pattren obj;
	obj.input();
	obj.draw();
	return 0;
}
