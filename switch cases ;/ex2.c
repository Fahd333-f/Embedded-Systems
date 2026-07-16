#include <stdio.h>
#include<ctype.h>
int main()
{

    char ch;
    printf("enter the vowel character  : ");
    scanf("%c", &ch);
    ch = towlower(ch);
    switch (ch)
    {

    case 'a':
    case 'e':
    case 'u':
    case 'i':
    case 'o':
        puts("the character was vowel :   ");
        break;
    default:
        puts("the character not vowel");
        break;
    }
    return 0;
}