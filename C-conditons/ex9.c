#include <stdio.h>
int main()
{

    char ch;
    printf("enter the char : \n");
    scanf("%c", &ch);

    if ((ch == 'a') || (ch == 'A') || (ch == 'e') || (ch == 'E') || (ch == 'i') || (ch == 'I') || (ch == 'o') || (ch == 'O') || (ch == 'u') || (ch == 'U'))
    {

        printf("this is a vowel character : \n");
    }
    else
    {
        printf("this is a Consonant character  : \n");
    }
    return 0;
}