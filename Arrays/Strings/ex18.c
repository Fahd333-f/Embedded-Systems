#include <stdio.h>

char arr_1[50] = {0};

void count_upper_lower(char *str1);

int main()
{
    printf("Enter your string : \n");
    scanf("%[^\n]", arr_1);
    count_upper_lower(arr_1);
    return 0;
}

void count_upper_lower(char *str1)
{
    char *p = str1;

    int lower_count = 0;
    int upper_count = 0;

    while (*p != '\0')
    {
        if ((*p >= 'a') && (*p <= 'z'))
        {
            lower_count++;
        }
        else if ((*p >= 'A') && (*p <= 'Z'))
        {
            upper_count++;
        }

        p++;
    }
    printf("The number of capital chars is \t %d \t and the small chars is \t %d \n", upper_count, lower_count);
}