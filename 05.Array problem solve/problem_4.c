#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    float arr[n];
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
    float sum = 0
    for (i = 0; i < n; i++) {
        sum += arr[i]
    }
    float average = sum / n;
    printf("Average is: %.2f\n", average);
    return 0;
}

