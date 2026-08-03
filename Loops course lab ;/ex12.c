// Write a C program to find a sum of first and last digit of a number.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number, sum;
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
    sum = first_digit + last_digit;

    printf("the sum of  first_digit %d and  last_digit %d is %d \n", first_digit, last_digit, sum);
    exit(0);
}
