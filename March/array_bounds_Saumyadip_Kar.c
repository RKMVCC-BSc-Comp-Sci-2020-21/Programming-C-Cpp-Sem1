#include <stdio.h>

int main(void)

{

    int array[25], b, c;

    for (b = 0; b < 20 && (scanf("%d", &c)); b++)

        array[b] = c;

    for (b = 0; b < 20; b++)

        printf("%d ", array[b]);

    return 0;
}