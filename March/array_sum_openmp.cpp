#include <iostream>
# include <omp.h>
using namespace std;
int main()
{
	 long double  p = 10000;
int i;
	int arr [10000];
	  for (i = 0; i < 10000; i++)
	  {
		arr [ i ] = 1;
	  }
	  int   j, sum = 0;
	  double t1, t2;
	  t1 = omp_get_wtime ();
# pragma omp parallel for default (shared) reduction (+:sum)
	  
		  for (i = 0; i < 10000; i++)
			  sum += arr[i];
	  
	  t2 = omp_get_wtime();
	  cout << (t2 - t1) << endl;
	  cout << sum << endl;
	return 0;
}
