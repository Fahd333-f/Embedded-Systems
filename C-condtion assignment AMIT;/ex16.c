// Write a C program to create a simple menu for area calculation of a circle, rectangle, or triangle using switch.
#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
int main()
{
    float base, width, height, radius;

    int number;

    printf("Select the shape number from this menu :\n 1-circle \n 2-rectangle \n 3-triangle \n ");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input : \n");
        exit(1);
    }
    switch (number)
    {
    case 1:
        printf("Enter the radius of the circle : \n");
        if (scanf("%f", &radius) != 1)
        {
            printf("Invalid input :");
                exit(1);
        }
        else
        {
            printf("%.2f  is the area of circle \n", pi * radius * radius);
        }
        break;

    case 2:

        printf("Enter the base and width of rectangle : \n ");

        if (scanf("%f %f", &base, &width) != 2)
        {
            printf("Invalid input : \n");
            exit(1);
        }
        else
        {

            printf("%.2f is the area of rectangle \n", base * width);
        }
        break;
    case 3:

        printf("enter the base and height of triangle : \n");

        if (scanf("%f %f", &base, &height) != 2)
        {
            printf("Invalid input : \n");
            exit(1);
        }
        else
        {
            printf("%.2f is the area of triangle : \n", 0.5 * base * height);
        }

        break;
    default:
        printf("invalid input  : \n");
        break;
    }
    return 0;
}