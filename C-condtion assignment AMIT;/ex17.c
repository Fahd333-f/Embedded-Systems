//. Write a C program to input a character and display whether it is a lowercase alphabet, uppercase
// alphabet, digit, or special character using switch .
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char input;
    printf("Enter the lowercase alphabet, uppercase alphabet, digit, or special character : \n");

    if (scanf(" %c", &input) != 1)
    {
        printf("Invalid input : \n");
        exit(1);
    }
    switch (input)
    {
    case 'A' ... 'Z':
        printf("%c its upper case alphabet : \n", input);
        break;
    case 'a' ... 'z':
        printf("%c its lower case alphabet : \n", input);
        break;
    case '0' ... '9':
        printf("%c its digit : \n", input);
        break;
    default:
        printf("its a special character : \n");
        break;
    }
    exit(0);
}
