#include <stdio.h>

void check_character_type(char ch);

int main()
{
    char ch;

    printf("Input a character: ");
    scanf("%c", &ch);

    check_character_type(ch);

    return 0;
}

void check_character_type(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("This is an alphabet.\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("This is a digit.\n");
    }
    else
    {
        printf("This is a special character.\n");
    }
}