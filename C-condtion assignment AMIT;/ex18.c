//. Write a C program to input a character and display whether it is a lowercase alphabet, uppercase
// alphabet, digit, or special character using switch using if else.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char input;
    printf("Enter the lowercase alphabet, uppercase alphabet, digit, or special character : \n");

    if (scanf(" %c", &input) != 1)
    {
        printf("Invalid input : \n");
        exit(1);
    }
    if (isupper(input))
    {
        printf("%c is upper case character : \n", input);
    }
    else if (islower(input))
    {
        printf("%c is lower case character : \n", input);
    }
    else if (isdigit(input))
    {
        printf("%c its a  digit : \n", input);
    }
    else
    {
       printf("%c is a special character : \n", input);
    }
    exit(0);
}