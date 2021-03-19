//2. C/C++ Program to convert the string from uppercase to lowercase
#include<iostream>

using namespace std;
int main()
{
	char str[100];
	int i;
	
	cout<<"\n\tEnter a string in upper case: ";
	gets(str);

	for(i = 0 ; str[i] != '\0' ; i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}

	cout<<"\n\tConverted string into lower case : "<<str;

	return 0;
}
