#include <stdio.h>
void check_postive_negative_function(int number);
int main()
{
    int number = 0;
    printf("Enter the number : \n");
    scanf("%d", &number);
    check_postive_negative_function(number);
    return 0;
}
void check_postive_negative_function(int number)
{
    if (number >= 0)
    {
        if (number > 0) // Nested if
        {
            printf("This number is postive : \n");
        }
        else
        {
            printf("This number is ZERO : \n");
        }
    }
    else
    {
        printf("This number is negative : \n");
    }
}
