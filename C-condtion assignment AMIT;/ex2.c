// Write a C program to input an integer and check whether it is positive, negative, or zero using Nested if.
#include <stdio.h>
int main()
{
    int num;
    printf("enter the number : \n");
    scanf("%d", &num);
    if (num >= 0)
    {
        if (num == 0)
        {
            puts("Zero");
        }
        else
        {
            puts("Positive");
        }
    }
    else
    {
        if (num <= 0)
        {
            puts("negative");
        }
        else
        {
            puts("Zero");
        }
    }
    return 0;
}
