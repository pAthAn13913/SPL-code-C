#include <stdio.h>

int main() {
    printf("Size of int: %ld bytes\n", sizeof(int));
    printf("Size of float: %Ld bytes\n", sizeof(float));
    printf("Size of double: %d bytes\n", sizeof(double));
    printf("Size of char: %d byte\n", sizeof(char));

    return 0;
}

