#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch = 'A';

    while (ch <= 'Z')
    {
        printf("%c \n", ch);
        ch++;
    }
    exit(0);
}