#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,a[10][10],b[10][10],c[10][10],row,col;
	printf("\nenter the row of the matrix: ");
	scanf("%d",&row);
	printf("\nenter the col of the matrix: ");
	scanf("%d",&col);
	printf("\nenter the eliment of the first matrix\n");
	for(i=0;i<row;i++)
	   {
		   
		   for(j=0;j<col;j++)
		      
			  {
			     
				 scanf("%d",&a[i][j]);
	    	  
			  }
	   
	   }
	
	printf("\nenter the eliment of the second matrix\n");
	for(i=0;i<row;i++)
	    {
		   
		   for(j=0;j<col;j++)
		    
			  {
			 
			       scanf("%d",&b[i][j]);
              }
        
		}
	printf("\nthe eliment of the first matrix are\n");
	for(i=0;i<row;i++)
	    {
	    	
		     for(j=0;j<col;j++)
	        
		      {
			
			       printf("%d\t",a[i][j]);
		      
			  }
			  
	       printf("\n");
        }
    printf("\nthe eliment of the second matrix are\n");
	for(i=0;i<row;i++)
	    {
	    	
	     	for(j=0;j<col;j++)
	     
		      {
			
		        	printf("%d\t",b[i][j]);
		      }
		      
	       printf("\n");
         }
    for(i=0;i<row;i++)
	    {
	    	
		    for(j=0;j<col;j++)
		   
		   {
		   	
			   c[i][j]=a[i][j]+b[i][j];
		 
		   }
	
	    }
	printf("\nthe eliment of the result matrix are\n");
	for(i=0;i<row;i++)
	    {
	    	
		    for(j=0;j<col;j++)
	        
			{
			
			     printf("%d\t",c[i][j]);
		    
			}
			
	        printf("\n");
       
	   }    
}
	
