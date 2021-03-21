// Program to find the repeatative and unique letters in a given string //
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
	string sen;
	int len, c, i, j;
	
	cout<<"Enter a sentence__>";
	getline(cin, sen);
	len= strlen(sen.c_str());
	
	cout<<"\nRepeatative letters are:";
	for(i=0; i<len-1; i++)
	{
		if(sen[i]==sen[i+1])
		  cout<<sen[i]<<"";
	}
	cout<<"\n\nAll other characters are unique\n\n";
	
	return 0;
}
