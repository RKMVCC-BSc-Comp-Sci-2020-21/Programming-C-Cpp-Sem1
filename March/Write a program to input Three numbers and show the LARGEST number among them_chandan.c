//Write a program to input Three numbers and show the LARGEST number among them.

 #include <stdio.h>  
   
main()
{  
    int a, b,c;  
    printf("Please Enter Three different values\n");  
    scanf("%d%d %d", &a, &b,&c);  
    
    if(a > b && a > c) 
    {
        printf("%d is Largest\n", a);          
    } 
    else  if(b > c)
    { 
        printf("%d is Largest\n", b);  
    } 
  else  if(c > b)
    { 
        printf("%d is Largest\n", c);  
    } 
    else                                                               [// No condition hold after 'ELSE' statement.]
    {
	printf("They are Equal\n");
    }
 
}
