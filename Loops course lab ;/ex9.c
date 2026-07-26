// Write a C program to print multiplication table of any number
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number;
    printf("Enter the number : \n");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid Error : \n");
        exit(1);
    }
    for (int i = 0; i <= 10; i++)
    {
        printf("%d * %d = %d \n", number, i, number * i);
    }
    exit(0);
}
