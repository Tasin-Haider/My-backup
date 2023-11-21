#include <stdio.h>
#include <math.h>
int main() {
    double a;
    printf("Enter first Value: ");
    scanf("%Lf",&a);
    double b;
    printf("Enter second Value: ");
    scanf("%Lf",&b);
    double c = a*pow(10,17);
    double d = b*pow(10,17);
    double e = c+d;
    double f = e/pow(10,17);
    double g = f+0.00000000000000010;
    printf("Summation of %.1Lf and %.1Lf is %.19Lf",a,b,g);
    return 0;
}
