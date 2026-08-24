#include <stdio.h>
char arr_1[50] = {0};
char arr_2[50] = {0};
void string_concated(char *str1, char *str2);
int main()
{
    printf("Enter the two strings :\t");
    scanf("%[^\n]", arr_1);
    scanf(" %[^\n]", arr_2);
    string_concated(arr_1, arr_2);
}
void string_concated(char *str1, char *str2)
{
    char *p = str1;
    char *q = str2;
    while (*p != '\0')
    {
        p++;
    }
    *p = ' ';
    p++;
    while (*q != '\0')
    {

        *p = *q;
        p++;
        q++;
    }
    *q = '\0';
    printf("the result of concated two strings is :\t %s  ", str1);
}
