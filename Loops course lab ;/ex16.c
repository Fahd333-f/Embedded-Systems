// write a C program to enter a number and print its reverse
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number, x;
    int reversed = 0;
    printf("Enter the number : \n");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input : \n");
        exit(1);
    }
    for (int i = 1; number > 0; i++)
    {
        x = number % 10;
        number = number / 10;
        reversed = (reversed * 10) + x;
    }
    printf("reserved is %d", reversed);
    exit(0);
}