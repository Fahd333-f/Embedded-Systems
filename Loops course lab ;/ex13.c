#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int number, counter, First_digit, Last_digit, power, middle;
    int old_number, swapped;

    printf("Enter the number : \n");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid error : \n");
        exit(1);
    }
    Last_digit = number % 10;
    old_number = number;

    for (int i = 1; number > 0; i++)
    {

        if (number < 10)
        {
            First_digit = number;
            counter = i;
            break;
        }
        number = number / 10;
    }
    power = round(pow(10, counter - 1));
    middle = (old_number - (First_digit * power) - Last_digit);
    swapped = (Last_digit * power) + middle + First_digit;
    printf("%d", swapped);
    exit(0);
}