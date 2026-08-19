#include <stdio.h>
void string_compare(char *str1, char *str2);
int main()
{
    char arr[50];
    char arr_2[50];
    printf("Enter the two strings : \n");
    scanf("%[^\n]", arr);
    scanf(" %[^\n]", arr_2);
    string_compare(arr, arr_2);
}

void string_compare(char *str1, char *str2)
{
    char *p = str1;
    char *f = str2;
    int point = 1;
    while ((*p != '\0') || (*f != '\0'))
    {
        if (*p != *f)
        {
            point = 0;
            break;
        }

        p++;
        f++;
    }
    if (point == 1)
    {
        printf("the two strings ara the same : \n");
    }
    else
    {
        printf("the two strings are not the same : \n");
    }
}