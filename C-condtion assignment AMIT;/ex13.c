// Write a C program to input a day number from 1 to 7 and display the day name using switch
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int day;
    printf("Enter the day number : \n");

    if (scanf("%d", &day) != 1)
    {
        printf("Invalid input\n");
        exit(1);
    }
    switch (day)
    {
    case 1:
        printf("Saturday\n");
        break;
    case 2:
        printf("Sunday\n");
        break;
    case 3:
        printf("Monday\n");
        break;
    case 4:
        printf("Tuesday\n");
        break;
    case 5:
        printf("Wendsday\n");
        break;
    case 6:
        printf("Thursday\n");
        break;
    case 7:
        printf("Friday\n");
        break;
    default:
        printf("invalid day number input : \n");
        break;
    }
    exit(0);
}