#include <stdio.h>

void check_leap_year(int year);

int main()
{
    int year;

    printf("Input the year : ");
    scanf("%d", &year);

    check_leap_year(year);

    return 0;
}

void check_leap_year(int year)
{

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }
}