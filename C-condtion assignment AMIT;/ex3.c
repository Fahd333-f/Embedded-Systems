// Write a C program to input an integer and check whether it is positive, negative, or zero using else-if
#include <stdio.h>
int main()
{
    int num;
    printf("enter the number : ");
    scanf("%d", &num);
    if (num > 0)
    {
        puts("Positive");
    }
    else if (num < 0)
    {
        puts("negative");
    }
    else
    {
       puts("Zero");
    }
    return 0;
}