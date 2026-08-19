#include <stdio.h>
void string_legnth(char *str);
int main()
{
    char arr[50];
    printf("Enter the string : \n");
    scanf("%[^\n]", arr);
    string_legnth(arr);
}
void string_legnth(char *str)
{
    int i = 0;
    char *p = str;
    while (*p != '\0')
    {
        i++;
        p++;
    }
    printf("The legnth of the string is %d characters \n", i);
}