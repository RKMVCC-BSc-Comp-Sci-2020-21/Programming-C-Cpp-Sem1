#include <stdio.h>
#include <math.h>
int bin_to_dec(int bin); //function to convert binary to decimal
int dec_to_oct(int dec); //function to convert decimal to octal

int main()
{
    int bin, dec, oct;
    printf("Enter any binary number: ");
    scanf("%d", &bin);

    dec = bin_to_dec(bin);
    oct = dec_to_oct(dec);

    printf("The octal equivalent is: %d", oct);
    return 0;
}

int bin_to_dec(int bin)
{
    int rem, dec = 0, i = 0;
    while (bin != 0)
    {
        rem = bin % 10;
        dec += rem * pow(2, i);
        i++;
        bin /= 10;
    }
    return dec;
}

int dec_to_oct(int dec)
{
    int rem, place = 1, oct = 0;
    while (dec != 0)
    {
        rem = dec % 8;
        oct += rem * place;
        place *= 10;
        dec /= 8;
    }
    return oct;
}
