#include <stdio.h>

char arr[50];
void replace_occurrence(char *str);
char old_char;
char new_char;
int main()
{

    printf("Enter the string : \n");
    scanf("%[^\n]", arr);
    printf("enter the character you want to replace it \n");
    scanf(" %c", &old_char);
    printf("enter the replaced char : \n");
    scanf(" %c", &new_char);
    replace_occurrence(arr);
    printf("the new char is : %s \n", arr);

    return 0;
}
void replace_occurrence(char *str)
{
    char *p = str;
    while (*p != '\0')
    {
        if (*p == old_char)
        {
            *p = new_char;
        }
        p++;
    }
}
