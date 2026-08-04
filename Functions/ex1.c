//"Write a C program that uses  separate functions
#include <stdio.h>
#include <stdlib.h>
int addition(int num1, int num2);
int subtraction(int num1, int num2);
int multply(int num1, int num2);
int cube(int num1);
int max(int num1, int num2);
int calc_odd_even_number(int num);
float my_div(int a, int b);
int is_prime(int number);
void print_prime_numbers(int number);
int power(int base, int exp);
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
int addition(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}
int subtraction(int num1, int num2)
{
    int answer = num1 - num2;
    return answer;
}
int multply(int num1, int num2)
{
    int re = num1 * num2;
    return re;
}
int cube(int num1)
{
    int result = num1 * num1 * num1;
    return result;
}
int max(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
int calc_odd_even_number(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
float my_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error : cannot divide by zero !\n");
        return 0.0;
    }
    else
    {
        return (float)a / b;
    }
}
int is_prime(int number)
{
    if (number <= 1)
        return 0;

    for (int i = 2; i < number; i++)

    {

        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
void print_prime_numbers(int number)
{
    printf("the prime numbers up to %d are :\n", number);

    for (int i = 1; i <= number; i++)
    {
        if (is_prime(i) == 1)
        {
            printf("%d is a prime number\n", i);
        }
    }
}
int power(int base, int exp)
{
    int result = 1;
    for (int i = 1; i <= exp; i++)
    {
        result *= base;
    }
    return result;
}