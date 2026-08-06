#include <stdio.h>
int natural_numbers(int number);
int main()
{
    int number;
    printf("Enter the number : \n ");
    scanf("%d", &number);
    printf("%d is sum of natural number : \n", natural_numbers(number));
    return 0;
}
int natural_numbers(int number)
{
    int sum = 0;
    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }
    return sum;
}