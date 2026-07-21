//Write a C program to input a number from 1 to 5 and display the corresponding Roman numeral using switch.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Enter the number from 1 to 5  : \n");
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input : \n");
        exit(1);
    }
    if ((num < 1) || (num > 5))
    {
        printf("Invalid input please enter number from 1 to 5 : \n");
        exit(1);
    }
    switch (num)
    {
    case 1:
        printf(" I  its roman numeral : \n");
        break;
    case 2:
        printf(" II its roman numeral : \n");
        break;
    case 3:
        printf(" III its roman numeral : \n");
        break;
    case 4:
        printf(" IV its roman numeral : \n");
        break;
    case 5:
        printf(" V its roman numeral : \n");

        break;
    }
    exit(0);
}