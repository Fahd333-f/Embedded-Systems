#include <stdio.h>

typedef struct
{
    int day;
    int month;
    int year;
} Date;

int main()
{
    Date d1, d2;

    printf("--- First Date ---\n");
    printf("Enter Day, Month, Year: ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

    printf("\n--- Second Date ---\n");
    printf("Enter Day, Month, Year: ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    printf("\n");

    if (d1.year < d2.year)
    {
        printf("The earlier date is: %02d/%02d/%04d\n", d1.day, d1.month, d1.year);
    }
    else if (d1.year > d2.year)
    {
        printf("The earlier date is: %02d/%02d/%04d\n", d2.day, d2.month, d2.year);
    }
    else
    {
        if (d1.month < d2.month)
        {
            printf("The earlier date is: %02d/%02d/%04d\n", d1.day, d1.month, d1.year);
        }
        else if (d1.month > d2.month)
        {
            printf("The earlier date is: %02d/%02d/%04d\n", d2.day, d2.month, d2.year);
        }
        else
        {
            if (d1.day < d2.day)
            {
                printf("The earlier date is: %02d/%02d/%04d\n", d1.day, d1.month, d1.year);
            }
            else if (d1.day > d2.day)
            {
                printf("The earlier date is: %02d/%02d/%04d\n", d2.day, d2.month, d2.year);
            }
            else
            {
                printf("Both dates are exactly the same.\n");
            }
        }
    }

    return 0;
}