#include<stdio.h>
#include<string.h>

int main()
{
	char name[5] [10];	//5 STRINGS, EACH MAY CONTAIN 10 CHARACTERS
	char temp[10];
	int i,j;
	
	for(i=0;i<5;i++)
	{
		printf("\n\tENter name : ");
		gets(name[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				strcpy(temp, name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}
	printf("\n\tThe sorted names are : ");
	for(i=0;i<5;i++)
		printf("\n\t%s",name[i]);
    printf("\n\tBY SOUBHAGYA PAUL");
	return 0;
}
