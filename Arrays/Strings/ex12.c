#include <stdio.h>
void string_copy(char *source, char *dest);
char arr_1[50];
char arr_dest[50];
int main()
{
    printf("Enter your string : \n");
    scanf("%[^\n]", arr_1);
    string_copy(arr_1, arr_dest);
    printf("after copy the string in onther variable the new string is ::::  %s ::::", arr_dest);
}
void string_copy(char *source, char *dest)
{
    char *p = source;
    char *q = dest;
    while (*p != '\0')
    {

        *q = *p;
        p++;
        q++;
    }
    *q = '\0';
}
