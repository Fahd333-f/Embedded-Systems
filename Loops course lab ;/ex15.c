// Write a C program to calculate product of digits of a number
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number, sum = 1;
    printf("Enter the number : \n");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input : \n");
        exit(1);
    }
    for (int i = 0; number > 0; i++)
    {
        sum *= number % 10;
        number = number / 10;
    }
    printf("%d is the products of digits : \n ", sum);
    exit(0);
}
