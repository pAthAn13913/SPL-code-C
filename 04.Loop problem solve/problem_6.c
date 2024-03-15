#include <stdio.h>

int main() {
    int X, N, guess, triesLeft;
    printf("Enter the number given by Player-1: ");
    scanf("%d", &X);
    printf("Enter the number of tries given for Player-2: ");
    scanf("%d", &N);
    triesLeft = N;

    while (triesLeft > 0) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == X) {
            printf("Right, Player-2 wins!\n");
            break;
        } else {
            triesLeft--;
            printf("Wrong, %d Choice(s) Left!\n", triesLeft);
        }
    }

    if (triesLeft == 0) {
        printf("Player-1 wins!\n");
    }

    return 0;
}

