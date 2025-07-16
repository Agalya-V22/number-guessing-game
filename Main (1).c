#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 42; // Fixed number for demo
    int guesses[] = {20, 60, 42};  // Simulated user input
    int guess, attempts = 0;
    int i;

    printf("=====================================\n");
    printf("     Welcome to the Guessing Game!   \n");
    printf("=====================================\n");
    printf("I'm thinking of a number between 1 and 100.\n");

    for (i = 0; i < 3; i++) {
        guess = guesses[i];
        printf("\nGuess %d: %d\n", i + 1, guess);
        attempts++;

        if (guess > number) {
            printf("Too high!\n");
        } else if (guess < number) {
            printf("Too low!\n");
        } else {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}
