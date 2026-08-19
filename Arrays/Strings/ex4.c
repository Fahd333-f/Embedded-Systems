#include <stdio.h>
char *stracat(char *str1, char *str2);
int main()
{
    char arr[50];
    char arr_2[50];
    printf("Enter the two strings : \n");
    scanf("%[^\n]", arr);
    scanf(" %[^\n]", arr_2);
    printf(" the new string is %s \n", stracat(arr, arr_2));
}
char *stracat(char *str1, char *str2)
{
    char *x = str1;
    while (*str1 != '\0')
    {
        str1++;
    }
    char *p = str1;
    *p = ' ';
    p++;
    while (*str2 != '\0')
    {
        *p = *str2;
        p++;
        str2++;
    }
    *p = '\0';
    return x;
}