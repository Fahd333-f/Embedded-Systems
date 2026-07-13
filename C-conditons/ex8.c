#include <stdio.h>
int main()
{
    char ch;

    printf("enter the char : \n");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("this is an alphabet : \n");
    }
    else
    {
        printf("this not an alphabet  :  \n");
    }
    return 0;
}