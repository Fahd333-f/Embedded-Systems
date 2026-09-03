#include <stdio.h>

typedef struct
{
    int day;
    int month;
    int year;
} Date;

int main()
{
    Date d;

    printf("Enter Day: ");
    scanf("%d", &d.day);

    printf("Enter Month: ");
    scanf("%d", &d.month);

    printf("Enter Year: ");
    scanf("%d", &d.year);

    printf("The date is: %02d/%02d/%04d\n", d.day, d.month, d.year);

    return 0;
}