#include <stdio.h>

int main() {
    int number,digit, reversedNumber = 0;
    printf("Enter the Number: ");
    scanf("%d", &number);

    while (number != 0) {
         digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversedNumber);
    return 0;
}

