#include <stdio.h>
void string_copy(char *source, char *dest);
int main()
{
    char arr[50];
    char arr_2[50];
    printf("Enter the string : \n");
    scanf("%[^\n]", arr);
    string_copy(arr, arr_2);
}
void string_copy(char *source, char *dest)
{
    char *p = source;
    char *c = dest;
    while (*p != '\0')
    {
        *c = *p;
        p++;
        c++;
    }
    printf("the copy of name is %s \n", dest);
}
