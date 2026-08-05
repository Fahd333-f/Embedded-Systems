#include <stdio.h>
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