// Write a C program to print all natural numbers from 1 to n.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number;
    int counter=1;
    printf("Enter the last number : \n");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input : \n");
        exit(1);
    }
    while (counter <= number)
    {
        printf("%d it's the number now  : \n", counter);
        counter++;
    }
}