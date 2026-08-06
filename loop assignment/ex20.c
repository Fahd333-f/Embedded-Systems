// write a C program to use a loop and a function together to calculate the factorial of each number from 1 to N .
#include <stdio.h>
#include <stdlib.h>
void calculate_factorial_number(int number);
int main()
{

    int number_x;
    printf("Enter the number : \n");
    if (scanf("%d", &number_x) != 1)
    {
        printf("Invalid number :\n");
        exit(1);
    }
    calculate_factorial_number(number_x);
    return 0;
}

void calculate_factorial_number(int number)
{
   
    for (int i = 1; i <= number; i++)
    {
         int result = 1;
        for (int j = i; j > 0; j--)
        {
            if (j == 1)
            {
                printf("the factorial of %d is %d \n", i, result);
                break;
            }
            result *= j;
        }
    }
}