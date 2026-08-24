#include <stdio.h>
void string_length(char arr[]);
void string_reverse(char *str);
char fahd[50];
int i = 0;
int main()
{
    printf("Enter your string : \n");
    scanf("%[^\n]", fahd);
    string_length(fahd);
    string_reverse(fahd);
}
void string_length(char arr[])
{

    char *p = arr;
    while (*p != '\0')
    {
        i += 1;
        p++;
    }
}
void string_reverse(char *str)
{
    char *p = str;
    while (*p != '\0')
    {
        p++;
    }
    p--;
    for (; i > 0; i--)
    {
        printf("%c", *p);
        p--;
        }
}
