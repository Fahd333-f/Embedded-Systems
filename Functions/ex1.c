#include <stdio.h>
#include <stdlib.h>
#include "my_lib.h"
int main()
{
    int num1, num2;
    printf("Enter two numbers : \n");
    if (scanf("%d%d", &num1, &num2) != 2)
    {
        printf("Invalid input : \n");
        exit(1);
    }
    printf("%d is the addition of two number :\n", addition(num1, num2));
    printf("%d is the subtraction of two numbers : \n", subtraction(num1, num2));
    printf("%d is the multyplication of two numbers : \n", multply(num1, num2));
    printf("%d the cube of num1 : \n", cube(num1));
    printf("%d is the max number : \n", max(num1, num2));
    if (calc_odd_even_number(num1) == 1)
    {
        printf("%d is an even number.\n", num1);
    }
    else
    {
        printf("%d is an odd number.\n", num1);
    }

    if (calc_odd_even_number(num2) == 1)
    {
        printf("%d is an even number.\n", num2);
    }
    else
    {
        printf("%d is an odd number.\n", num2);
    }
    printf("%.2f is_division : \n", my_div(num1, num2));
    if ((is_prime(num1)) == 0)
    {
        printf("%d not prime : \n", num1);
    }
    else
    {
        printf("%d is prime : \n", num1);
    }
    print_prime_numbers(num1);
    print_prime_numbers(num2);
    printf("%d : \n", power(num1, num2)); // num1 base and num2 exp
    return 0;
}
