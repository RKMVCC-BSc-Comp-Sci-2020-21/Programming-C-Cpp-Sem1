#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, dis, r1, r2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    dis = b * b - 4 * a * c;

    // condition for real and different roots
    if (dis > 0) {
        r1 = (-b + sqrt(dis)) / (2 * a);
        r2 = (-b - sqrt(dis)) / (2 * a);
        printf("Root1 = %.2lf and Root2 = %.2lf", r1, r2);
    }

    // condition for real and equal roots
    else if (dis == 0) {
        r1 = r2 = -b / (2 * a);
        printf("Root1 = Root2 = %.2lf;", r1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-dis) / (2 * a);
        printf("Root1 = %.2lf+%.2lfi and Root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 
