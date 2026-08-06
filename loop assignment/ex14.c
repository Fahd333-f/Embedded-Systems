#include <stdio.h>

int factorial(int num);

int main()
{
    int result = factorial(5);
    printf("%d\n", result);
    return 0;
}

int factorial(int num)
{
    int fact = 1;
    int i = 1;
    while (i <= num)
    {
        fact *= i;
        i++;
    }
    return fact;
}