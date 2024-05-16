#include<stdio.h>

int main(){
    int a = 43;
    int b = 23;

    printf("Sum of %d and %d is %d\n", a,b,a+b);
    printf("Difference of %d and %d is %d\n", a,b,a-b);
    printf("Product of %d and %d is %d\n", a,b,a*b);
    printf("Quotient of %d and %d is %d\n", a,b,a/b);
    printf("Remainder of %d and %d is %d\n", a,b,a%b);

    // printing answers in decimals
    float c = 122.45;
    float d = 32.78;
    printf("%.2f divided by %.2f gives: %.2f\n", c, d, c/d);

    return 0;
}