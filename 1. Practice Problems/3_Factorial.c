#include <stdio.h>

// function to calculate factorial
int factorial(int n) {
    // base case
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // recursive case
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // calculate factorial
    int result = factorial(num);
    
    // print result
    printf("Factorial of %d is %d\n", num, result);
    
    return 0;
}
