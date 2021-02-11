//sayankp
//you can find factorail upto number 65.

#include <iostream>

using namespace std;

int main()
{
     
    unsigned long long n=0, factorial = 1;

    cout << "Enter a integer: ";                                            
    cin >> n;

    for(int i = 1; i <=n; ++i)
    
    {
        factorial *= i;
    }

   
   cout << "Factorial of " << n << " = " << factorial;    
   
   return 0;
}
