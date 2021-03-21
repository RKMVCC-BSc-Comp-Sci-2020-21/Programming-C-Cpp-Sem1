#include<iostream>

using namespace std;

int main()
{
	cout.fill(':');
	cout<<"\n";
	cout.setf(ios::left, ios::adjustfield);
	cout.width(10);
	cout<<1234;
	
	cout<<"\n";
	cout.setf(ios:: right, ios::adjustfield);
	cout<<1234;
	
	cout.unsetf(0);		//CANCELLS THE EFFECTS OF THE setf() FUCNTION
	
	return 0;
	
}



/*#include<iostream>

using namespace std;

int main()
{
	cout.fill(':');
	cout.width(10);
	cout<<1234;
	return 0;
}
*/
/*
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	cout.precision(3);
	cout<<"\n\t"<<sqrt(2);
	
	cout.precision(6);
	cout<<"\n\t"<<sqrt(2);
	
	return 0;
}
*/
/*
#include<iostream>

using namespace std;

int main()
{
	cout<<"*";
	cout.width(5);
	cout<<123;
	cout<<"*";
	return 0;
}
*/
/*#include<iostream>

using namespace std;

int main()
{
	char name[20];
	
	cout<<"\n\tEnter your name : ";
	cin.getline(name,20);	//EQUIVALENT TO cin>>name;
	
	cout<<"\n\tYour name is : ";
	cout.write(name,20);	//EQUIVALANT TO cout<<name;
	
	return 0;
}
*/

/*
#include<iostream>

using namespace std;

int main(){
	char ch;
	
	cout<<"\n\tEnter a character : ";
	cin.get(ch);	//EQUIVALENT TO cin>>ch;
	
	cout<<"\n\tYou have entered : ";
	cout.put(ch);	//EQUIVALENT TO cout<<ch;
	
	return 0;
}
*/


