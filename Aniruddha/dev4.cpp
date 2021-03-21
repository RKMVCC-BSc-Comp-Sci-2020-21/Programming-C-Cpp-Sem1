//line of text using getchar & putchar function
//vowel consonant and character//
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch=' ';
	int lowcount= 0, upcount=0;
	int vowelcount=0;
	
	printf("Enter a line of text: ");
	while (ch != '\n')
	{
		ch=getchar();
		putchar(ch);
	
	if (islower(ch))
	lowcount++;
	if (isupper(ch))
	upcount++;
	if(ch=='A'|| ch=='E'|| ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	vowelcount++;
}
printf("number of lower case character:%d\n",lowcount);
printf("number of upper case character:%d\n",upcount);
printf("number of vowel count:%d\n",vowelcount);
	return 0;
}
