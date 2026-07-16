#include <stdio.h>
int main()
{

    char ch;
    printf("enter the vowel character  : ");
    scanf("%c", &ch);

    switch (ch)
    {
        case 'a': case'A':
        case 'e': case'E':
        case 'u': case'U':
        case 'i': case'I':
        case 'o': case'O':
        
        puts("vowel \n");
        break;
    default:
        puts("this is not a vowel character : ");

        break;
    }
    return 0;
}