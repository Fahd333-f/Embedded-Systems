// Write a C program to input a number and check whether it is divisible by both 5 and 11 using if-else
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Enter the number : ");

    if (scanf("%d", &num) != 1)
    {
        printf("invalid input : \n");
        exit(1);
    }
    if ((num % 5 == 0) && (num % 11 == 0))
    {
        printf(" %d : is divisible by both 5 and 11 \n", num);
    }
    else
    {
        printf("%d  : is not  divisible by both 5 and 11 \n", num);
    }
    exit(0);
}