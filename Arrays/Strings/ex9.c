#include <stdio.h>

void count_digits_and_special(char *str);

int main()
{
    char arr[50];
    printf("Enter the string : \n");
    scanf(" %[^\n]", arr);
    count_digits_and_special(arr);
}

void count_digits_and_special(char *str)
{
    char *p = str;
    int digits_count = 0;
    int special_count = 0;

    while (*p != '\0')
    {
        if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
        {
            
        }
        else if (*p >= '0' && *p <= '9')
        {
            digits_count++;
        }
        else if (*p == ' ')
        {
            
        }
        else
        {
            special_count++;
        }
        p++;
    }
    
    printf("the number of digits is %d and the number of special characters is %d \n", digits_count, special_count);
}