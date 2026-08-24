#include <stdio.h>
char arr_1[50] = {0};
void print_reverse_case(char *str1);
int main()
{
    printf("Enter your string : \n");
    scanf("%[^\n]", arr_1);
    print_reverse_case(arr_1);
}
void print_reverse_case(char *str1)
{
    char *p = str1;
    while (*p != '\0')
    {
        if ((*p >= 'a') && (*p <= 'z'))
        {
            *p -= 32;
        }
        else if ((*p >= 'A') && (*p <= 'Z'))
        {
            *p += 32;
        }
        else
        {
        }
        p++;
    }
    printf("The new string is :::: \t %s  ::::: ", str1);
}