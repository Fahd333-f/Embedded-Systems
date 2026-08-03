// write a C program to find frequency of each digit in a given integer .
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, last;
    int sum = 0;
    printf("Enter the first and second number : \n");
    if ((scanf("%d%d", &num1, &num2)) != 2)
    {
        printf("Invalid input : \n ");
        exit(1);
    }

    for (int i = 1; num1 > 0; i++)
    {
        last = num1 % 10;
        if (last == num2)
        {
            sum += 1;
        }
        num1 = num1 / 10;
    }
    printf("%d ", sum);
    exit(0);
}