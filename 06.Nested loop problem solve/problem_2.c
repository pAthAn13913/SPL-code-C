#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < i + n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

