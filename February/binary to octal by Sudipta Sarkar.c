        

#include<stdio.h>
#include<math.h>

int convert(long long bin);
                                        //  by using function...
int main()

{
    long long bin;

    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    printf("%lld in binary = %d in octal\n", bin, convert(bin));
    return 0;
}

    int convert(long long bin)


    {
        int oct = 0, dec = 0, i = 0;

                                                // octal to decimal
         while (bin != 0) {
        dec += (bin % 10) * pow(2, i);
        ++i;
        bin /= 10;
         }
         i = 1;

                                                // decimal to octal
        while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
            }
          return oct;
    }
