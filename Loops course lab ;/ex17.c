// write a c program to print all ASCII character with their values
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch = 'a';

    do
    {
        printf(" %d is the value of this char %c :\n", ch, ch);
        ch++;

    } while (ch <= 'z');
    exit(0);
}