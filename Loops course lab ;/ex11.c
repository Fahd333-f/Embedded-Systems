// Write a C program to find first and last digit of a number.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number;
    int first_digit, last_digit;

    printf("Enter the number : \n");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input : \n");
        exit(1);
    }
    last_digit = number % 10;
    for (int i = 1; number > 0; i++)
    {
        if (number < 10)
        {
            first_digit = number;
            break;
        }

        number = number / 10;
    }

    printf("this is a first_digit %d and this is a last_digit %d \n", first_digit, last_digit);
    exit(0);
}