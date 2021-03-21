int main()
{
	int a[6]={32,46,25,87,69,21};
	int i;
	
	//original form
	for( i=0 ; i<5; i++)
	{
		printf("%d", a[i]);
	}
	
	printf("\n");
	
	//reverse form
	for( i = 4 ; i>=0 ; i--)
	{
		printf("%d", a[i]);
	}
	return 0;
}
