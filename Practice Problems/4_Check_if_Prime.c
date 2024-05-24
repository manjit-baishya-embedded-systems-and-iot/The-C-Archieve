#include <stdio.h>

// function to check if a number is prime
int isPrime(int n) {
    // 0 and 1 are not prime
    if (n <= 1) {
        return 0;
    }
    
    // check from 2 to n/2
    for (int i = 2; i <= n/2; i++) {
        // if n is divisible by any number between 2 to n/2, it is not prime
        if (n % i == 0) {
            return 0;
        }
    }
    // if no divisor found, number is prime
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // check if num is prime
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}
