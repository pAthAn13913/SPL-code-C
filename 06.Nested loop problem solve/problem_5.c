#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= n - i + 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
