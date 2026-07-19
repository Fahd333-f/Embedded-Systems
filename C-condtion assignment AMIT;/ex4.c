// Write a C program to input a number and check whether it is even or odd using if-else.
#include <stdio.h>
int main()
{

    int num;
    printf("enter the number : ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        puts("even number : ");
    }
    else
    {
        puts("odd number : ");
    }
    return 0;
}