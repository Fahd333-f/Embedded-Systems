#include <stdio.h>
int calculate_factorial_numbers(int number);
int safety(int number);
int main()
{

    int number;
    printf("Enter the number : \n");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input : \n");
        return 1;
    }
    if (safety(number) == 0)
    {
        printf("invalid input please try again : \n");
    }
    else
    {
        printf("%d is the factorial of the number : \n", calculate_factorial_numbers(number));
    }
    return 0;
}
int calculate_factorial_numbers(int number)
{
    int result = 1;
    for (int i = number; i > 0; i--)
    {
        result *= i;
    }
    return result;
}
int safety(int number)
{
    if (number <= 0)
    {
        return 0;
    }
    return 1;
}