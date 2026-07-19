// Write a C program to input two numbers and display the larger number using if-else.
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two different numbers: \n");
    scanf("%d %d", &num1, &num2);
    if (num1 == num2)
    {
        printf(" error invaild  input :   ");
        return 0;
    }
    else
    {
    }

    if (num1 > num2)
    {
        printf("the %d larger than %d \n", num1, num2);
    }
    else
    {
        printf("the %d larger than %d", num2, num1);
    }
    return 0;
}