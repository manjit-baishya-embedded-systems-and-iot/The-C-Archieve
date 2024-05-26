#include <stdio.h>

int findSmallest(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[] = {3, 5, 7, 2, 8, -1, 4, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int smallest = findSmallest(arr, n);
    printf("The smallest element in the array is: %d\n", smallest);
    return 0;
}