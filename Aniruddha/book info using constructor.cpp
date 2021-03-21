#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class Book
{
	private:
		double bid,edition;
		char bname[100],editor[100];
		double price;
	public:
		Book()
		{
			bid=0.0;
			strcpy(bname,"");
			price=0.0;
			strcpy(editor,"");
		    edition=0.0;
		}
		void takedata()
		{
			cout<<"\n\nEnter the book id : ";
			cin>>bid;
			cout<<"\n\nEnter the book name : ";
			fflush(stdin);
			gets(bname);
			cout<<"\n\nEnter the book editor : ";
			fflush(stdin);
			gets(editor);
			cout<<"\n\nEnter the edition of the book : ";
			cin>>edition;
			cout<<"\n\nEnter the price pf the book :  ";
			cin>>price;
		}
		void showinfo()
		{
			cout<<"\nBOOK ID NUMBER : "<<bid;
			cout<<"\nBOOK NAME : "<<bname;
			cout<<"\nBOOK EDITOR NAME : "<<editor;
			cout<<"\nBOOK EDITION : "<<edition;
			cout<<"\nBOOK PRICE : "<<price;
		}
		
};
int main()
{
	Book obj;
	obj.showinfo();
	obj.takedata();
	obj.showinfo();
	return 0;
}
