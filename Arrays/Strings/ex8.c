#include <stdio.h>
void count_string_upper_lower_case(char *str);
int main()
{
    char arr[50];
    printf("Enter the  string : \n");
    scanf(" %[^\n]", arr);
    count_string_upper_lower_case(arr);
}
void count_string_upper_lower_case(char *str)
{
    char *p = str;
    int counter_1 = 0;
    int counter_2 = 0;

    while (*p != '\0')
    {
        if ((*p >= 'a') && (*p <= 'z')) // Lower case condition
        {
            counter_1++;
        }
        else if ((*p >= 'A') && (*p <= 'Z'))
        {
            counter_2++;
        }
        p++;
    }
    printf("the number of upper_case charachters is %d and the number of lower_case charachters is %d \n", counter_2, counter_1);
}
