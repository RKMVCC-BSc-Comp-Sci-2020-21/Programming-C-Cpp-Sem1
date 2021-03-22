#include <stdio.h>
int main()
{
	char suite = 3 ;
	switch ( suite )
	{
		case 1 :
		printf ( "\n case 1" ) ;
		case 2 :
		printf ( "\n case 2" ) ;
		default :
		printf ( "\n inside default ") ;	
	}
	printf ( "\n Outside switch case" );
}
