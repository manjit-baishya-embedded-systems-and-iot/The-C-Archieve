#include <stdio.h>

// function to calculate Fibonacci series up to n terms
void fibonacci(int n) {
    int first = 0, second = 1, next;
    
    printf("Fibonacci Series up to %d terms: ", n);
    
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    
    fibonacci(terms);
    
    return 0;
}
