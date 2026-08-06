#include <stdio.h>

int is_prime(int number);

int main()
{
    int result = is_prime(7);
    printf("%d\n", result);
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