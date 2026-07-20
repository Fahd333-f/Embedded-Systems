// Write a C program to input a year and check whether it is a leap year using if-else
#include <stdio.h>
int main()
{

    int year_number;
    printf("Enter the year : \n");
    scanf("%d", &year_number);

    if (year_number < 0)
    {
        printf("Invalid input");
        return 0;
    }

    if (((year_number % 4 == 0) && (year_number % 100 != 0)) || (year_number % 400 == 0))
    {
        printf("%d is a leap year.\n", year_number);
    }
    else
    {
        printf("%d is a common/normal year.\n", year_number);
    }
    return 0;
}