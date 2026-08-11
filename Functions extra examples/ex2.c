#include <stdio.h>
#include <stdlib.h>
int add_numbers(int num1, int num2);
int main()
{
    int x, y;

    printf("Enter the two number to print thier sum : \n");
    if ((scanf("%d %d", &x, &y)) != 2)
    {
        printf("Invalid input : \n");
        exit(1);
    }
    printf("the sum is %d \n", add_numbers(x, y));
    return 0;
}
int add_numbers(int num1, int num2)
{
    return num1 + num2;
}