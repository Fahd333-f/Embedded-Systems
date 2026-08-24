#include <stdio.h>
void print_lower_case(char *str);
char arr[50];
int main()
{
    printf("Enter the string : \n");
    scanf(" %[^\n]", arr);
    print_lower_case(arr);
}
void print_lower_case(char *str)
{
    char *p = str;
    while (*p != '\0')
    {
        if ((*p >= 'A') && (*p <= 'Z'))
        {
            *p += 32;
        }
        else
        {
        }
        p++;
    }
    printf("%s", str);
}