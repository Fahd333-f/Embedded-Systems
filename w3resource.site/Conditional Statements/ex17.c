#include <stdio.h>

void check_vowel_consonant(char ch);

int main()
{
    char ch;

    printf("Input an alphabet : ");
    scanf("%c", &ch);

    check_vowel_consonant(ch);

    return 0;
}

void check_vowel_consonant(char ch)
{

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("The alphabet is a vowel.\n");
    }
    else
    {

        printf("The alphabet is a consonant.\n");
    }
}