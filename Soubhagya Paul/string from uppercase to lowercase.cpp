
2. C/C++ Program to convert the string from uppercase to lowercase

void main(void)
{
	char str[100];
	int i;
	
	clrscr();

	cout<<"\n\tEnter a string : ";
	cin>>str;

	for(i = 0 ; str[i] != '\0' ; i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}

	cout<<"\n\tConverted string : "<<str;

	getch();
}

