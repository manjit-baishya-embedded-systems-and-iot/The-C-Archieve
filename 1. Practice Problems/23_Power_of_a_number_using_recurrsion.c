#include <stdio.h>

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    if (exponent < 0) {
        return 1 / power(base, -exponent);
    }
    return base * power(base, exponent - 1);
}

int main() {
    double base = 2.0;
    int exponent = 3;
    printf("%.2f to the power of %d is %.2f\n", base, exponent, power(base, exponent));
    return 0;
}
