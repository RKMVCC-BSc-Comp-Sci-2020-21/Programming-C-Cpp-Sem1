//3. C/C++ Program to convert the string from lowercase to uppercase
#include<iostream>

using namespace std;


int main()
{
	char str[100];
	int i;
	
	cout<<"\n\tEnter a string in lower case: ";
	gets(str);

	for(i = 0 ; str[i] != '\0' ; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	cout<<"\n\tConverted string into upper case : "<<str;

	return 0;
}
