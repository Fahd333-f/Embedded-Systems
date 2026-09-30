#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secret_number;
    int guess = 0;

    srand(time(NULL));

    secret_number = (rand() % 20) + 1;

    printf("I picked a number between 1 and 20. Try to guess it!\n");

    while (guess != secret_number)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > secret_number)
        {
            printf("Too high! Try again.\n");
        }
        else if (guess < secret_number)
        {
            printf("Too low! Try again.\n");
        }
    }

    printf("BINGO! The number is exactly %d.\n", secret_number);

    return 0;
}