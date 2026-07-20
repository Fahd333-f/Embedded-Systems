// Write a C program to input a month number from 1 to 12 and display the month name using switch.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int month;
    printf("Enter the month number from 1 to 12 : \n");
    if (scanf("%d", &month) != 1)
    {
        printf("Invalid input\n");
        exit(1);
    }
    switch (month)
    {
    case 1:
        printf("January\n");
        break;
    case 2:
        printf("February\n");
        break;
    case 3:
        printf("March\n");
        break;
    case 4:
        printf("April\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("June\n");
        break;
    case 7:
        printf("July\n");
        break;
    case 8:
        printf("August\n");
        break;
    case 9:
        printf("September\n");
        break;
    case 10:
        printf("October\n");
        break;
    case 11:
        printf("November\n");
        break;
    case 12:
        printf("December\n");
        break;
    default:
        printf("invalid month number input :\n ");
        break;
    }
    exit(0);
}