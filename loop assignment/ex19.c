#include <stdio.h>

int is_prime(int number);
void print_prime_numbers(int number);

int main()
{
    print_prime_numbers(20);
    return 0;
}

int is_prime(int number)
{
    if (number <= 1)
    {
        return 0;
    }
    int i = 2;
    while (i <= number / 2)
    {
        if (number % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

void print_prime_numbers(int number)
{
    int i = 2;
    while (i <= number)
    {
        if (is_prime(i) == 1)
        {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
}