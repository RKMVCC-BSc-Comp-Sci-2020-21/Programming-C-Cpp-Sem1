#include<stdio.h>

int main()
{
	int i,j =1;
	printf("\t  Sun\t Mon\t Tue\t Wed\t Thu\t Fri\t Sat\t  \n\n\n");
	
	for(i=1;i<=31;i++)
	{
	
	  if(i<=31)
	  	{
	  		printf("\t %d",i);
	  		j++;
	  		
	  		if(j==8||j==15||j==22||j==29)
	  		{
	  			printf("\n");
	  			
			  }
		  }
	  }
	  printf("\n\n\n\n");
	  return 0;
}
