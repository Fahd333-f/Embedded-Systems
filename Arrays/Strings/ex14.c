#include <stdio.h>
char arr_1[50] = {0};
char arr_2[50] = {0};
void string_compare(char *str1, char *str2);
int main()
{
    printf("Enter the two strings :\t");
    scanf("%[^\n]", arr_1);
    scanf(" %[^\n]", arr_2);
    string_compare(arr_1, arr_2);
}
void string_compare(char *str1, char *str2)
{
    char *p = str1;
    char *q = str2;
    int same = 1;
    while ((*p != '\0') || (*q != '\0'))
    {
        if (*p == *q)
        {
            p++;
            q++;
        }
        else if (*p != *q)
        {

            same = 0;
            break;
        }
    }
    if (same == 0)
    {
        printf("are not the same : \n");
    }
    else
    {
        printf("are the same : \n");
    }
}
