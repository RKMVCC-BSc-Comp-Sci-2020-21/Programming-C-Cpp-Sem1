/*7. C/C++ Program to display the pattern like right angle triangle with number.*/
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
		for(star=1;star<=r;star++)
		cout<<star;
		for(space=1;space<=n-r;space++)
			cout<<" ";
	}
}
int main()
{
	pattren obj;
	obj.input();
	obj.draw();
	return 0;
} 
