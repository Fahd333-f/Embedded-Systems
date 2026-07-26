// Write a C program to count number of digits in a number.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number;
    int i;
    printf("Enter the number : \n");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid Error : \n");
        exit(1);
    }
    for (int counter = 1; (number > 0); counter++)
    {
        number = number / 10;
        i = counter;
    }
    printf("%d\n", i);
    exit(0);
}