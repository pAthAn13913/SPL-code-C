#include <stdio.h>

int main() {
    int n, i, j;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array with the given size
    int A[n];

    // Input elements for the array
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Bubble Sort
    for (i = 0; i < n; i++) {
        for (j = 0; j < n ; j++) {
            if (A[i] < A[j]) {
                // Swap elements if they are in the wrong order
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    // Display the sorted array
    printf("Array A after sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

