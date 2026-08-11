#include <stdio.h>
int factorial(int n);
int main()
{
    int number;
    printf("Enter the number : \n");
    scanf("%d", &number);
    printf("the number is %d \n", factorial(number));
    return 0;
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}