#include <stdio.h>

int main()
{
    int num, ones, tens, hundreds, thousands, reverse;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    ones = num % 10;
    tens = (num / 10) % 10;
    hundreds = (num / 100) % 10;
    thousands = num / 1000;

    reverse = ones * 1000 + tens * 100 + hundreds * 10 + thousands;

    printf("The reversed number is: %d\n", reverse);

    return 0;
}