#include <stdio.h>
void calculate_how_many_digits(int number);
int main()
{
    int number;
    printf("Enter the number : \n");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid number :\n");
        return 1;
    }
    calculate_how_many_digits(number);
    return 0;
}
void calculate_how_many_digits(int number)
{

    int sum = 0;
    for (int i = 1; number > 0; i++)
    {
        number = number / 10;
        sum = sum + 1;
    }
    printf("%d is the number of digits : \n", sum);
}