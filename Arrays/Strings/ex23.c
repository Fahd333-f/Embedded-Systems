#include <stdio.h>
void count_words(char *str);
char arr[50] = {0};
int main()
{
    printf("Enter the string : \n");
    scanf(" %[^\n]", arr);
    count_words(arr);
}
void count_words(char *str)
{
    char *p = str;
    int i = 1;
    while (*p != '\0')
    {

        if (*p == ' ' && *(p + 1) != ' ' && *(p + 1) != '\0')
        {
            i++;
        }
        p++;
    }
    printf("the number of words is : %d ", i);
}