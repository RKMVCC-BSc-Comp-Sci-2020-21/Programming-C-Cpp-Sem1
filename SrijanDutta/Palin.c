#include <stdio.h>
int main() {
        int n=0, r=0;
        printf("Enter an integer: ");
        scanf("%d", &n);
        for(int i = n; i > 0 ; i/= 10){
	int d= i%10 ;
	r= r*10 + d ;
}
        if (n == r)
                printf("%d is a palindrome.", n);
        else
                printf("%d is not a palindrome.", n);
        return 0;
}
