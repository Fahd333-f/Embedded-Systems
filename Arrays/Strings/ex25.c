#include <stdio.h>
char arr[50] = {0};

void find_frequency(char *str);
int main()
{
    printf("Enter the string : \n");
    scanf("%[^\n]", arr);

    find_frequency(arr);
}
void find_frequency(char *str)
{
    char *p = str;
    char *q = str;
    while (*q != '\0')
    {
        int i = 0;
        while (*p != '\0')
        {
            if (*q == *p)
            {
                i += 1;
            }
            else if ((*p == ' ') || (*q == ' '))
            {
            }
            p++;
        }
        p = str;
        printf("the frequency of the char %c \t is  \t %d \n", *q, i);
        q++;
    }
}