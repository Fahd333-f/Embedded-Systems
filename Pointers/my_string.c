#include <stdio.h>
#include <stdlib.h>
#include "my_string.h"

void print_string(char *str)
{
    char *p = str;
    while (*p != '\0')
    {
        putchar(*p++);
    }
    printf("\n");
}
void string_copy(char *str)
{
}
void string_length(const char *str)
{
    int i = 0;
    const char *p = str;
    while (*p != '\0')
    {
        i++;
        p++;
    }
    printf("%d", i);
}
void to_upper(const char *str)
{
    const char *pointer = str;
    while (*pointer != '\0')
    {
        if ((*pointer >= 'a') && (*pointer <= 'z'))
        {
            printf("%c", *pointer - 32);
        }
        else
        {
            printf("%c", *pointer);
        }
        pointer++;
    }
    printf("\n");
}
void to_lower(const char *str)
{
    const char *p = str;
    while (*p != '\0')
    {
        if ((*p >= 'A') && (*p <= 'Z'))
        {
            printf("%c", *p + 32);
        }
        else
        {
            printf("%c", *p);
        }
        p++;
    }
    printf("\n");
}
void toggle_string(const char *str)
{
    const char *ptr = str;
    while (*ptr != '\0')
    {
        if ((*ptr >= 'a') && (*ptr <= 'z'))
        {
            printf("%c", *ptr - 32);
        }
        else if ((*ptr >= 'A') && (*ptr <= 'Z'))
        {
            printf("%c", *ptr + 32);
        }
        else
        {
            printf("%c", *ptr);
        }
        ptr++;
    }
    printf("\n");
}