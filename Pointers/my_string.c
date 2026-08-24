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
char *string_copy(const char *source, char *dest)
{
    int i = 0;
    char *start = dest;
    while ((*source != '\0'))
    {
        *dest = *source;
        source++;
        dest++;
        i++;
    }
    *dest = '\0';

    printf("the number of characters is %d : \n", i);
    return start;
}
int string_compare(char *str1, char *str2)
{
    while ((*str1 != '\0') && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

void take_struct(struct employee *emp)
{
    struct employee *s1 = emp;
    printf("Enter the id of  employee : \n");
    scanf("%d", &s1->id);
    printf("Enter the salary of  employee : \n");
    scanf("%f", &s1->salary);

    printf("Enter the name  of  employee : \n");

    scanf(" %s", s1->name);
}
void print_struct(struct employee *emp)
{
    printf("the id of the employee is  :\t%d \n", emp->id);
    printf("the salary of the employee is :\t%.2f  \n", emp->salary);

    printf("the name of the employee is  :\t%s \n", emp->name);
}
