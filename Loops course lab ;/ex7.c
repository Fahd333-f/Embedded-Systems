// Write a C program to find sum of all even numbers between 1 to n with for;
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number;
    int sum = 0;
    printf("Enter the number : \n");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
}