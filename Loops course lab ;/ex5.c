// Write a C program to find sum of all natural numbers between 1 to n with for.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number;
    int sum = 0;

    printf("Enter natural  number : \n");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {

        sum = sum + i;
    }
    printf("%d \n", sum);
    exit(0);
}