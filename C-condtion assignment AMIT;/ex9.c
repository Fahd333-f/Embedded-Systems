// Write a C program to input a character and check whether it is a vowel or consonant using if-else.
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter the character \n");
    scanf(" %c", &ch);
    if (!isalpha(ch))
    {
        printf("Error : invalid input! '%c' is not a letter. \n",ch);
        return 0;
    }
    ch = tolower(ch);
    if ((ch == 'a') || (ch == 'u') || (ch == 'e') || (ch == 'o') || (ch == 'i'))
    {

        printf("%c its a vowel character : \n", ch);
    }
    else
    {
        printf("%c its a consonant : \n", ch);
    }
    return 0;
}