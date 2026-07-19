// Write a C program to input three numbers and display the largest number using nested if statements.
#include <stdio.h>
int main()
{

    int num1, num2, num3;
    printf("enter three numbers \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d is the maximum ", num1);
        }
        else
        {
            printf("%d is the maximum ", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("%d is the maximum ", num2);
        }
        else
        {
            printf("%d is the maximum ", num3);
        }
    }
    return 0;
}