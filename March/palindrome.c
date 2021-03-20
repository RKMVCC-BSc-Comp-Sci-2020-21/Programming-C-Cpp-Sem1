#include <stdio.h>
int main()
{
	int n,p,q,rev=0;
	printf ("Enter the number :");
	scanf ("%d",&n);
	p=n;
	while (p>0)
        	{ q=p%10;
              rev=rev*10+q;
              p=p/10;
          }
          if (n!=rev)
          { printf ("The number is not palindrome .");
		  }
		  else {
		  	printf ("The number is palindrome .");
		}
		return 0;
}
