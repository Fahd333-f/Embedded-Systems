#include <stdio.h>
void check_prime(int number);
int main()
{
    int number_x;
    printf("Enter the number : \n");
    if (scanf("%d", &number_x) != 1)
    {
        printf("Invalid input : \n");
        return 1;
    }
    check_prime(number_x);
    return 0;
}
void check_prime(int number)
{
    int is_prime = 1;
    
    if (number <= 1)
    {
        is_prime = 0;
    }
    
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            is_prime = 0;
            break;
        }
    }
    
    if (is_prime == 1)
    {
        printf("%d is a prime number \n", number);
    }
    else
    {
        printf("%d is not a prime number \n", number);
    }
}
