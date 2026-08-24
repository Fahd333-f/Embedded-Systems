#include <stdio.h>

char arr[50];
void remove_spaces(char *str);

int main()
{
    printf("Enter the string : \n");
    scanf(" %[^\n]", arr);

    remove_spaces(arr);
    
    printf("String after removing spaces: %s\n", arr);
    
    return 0;
}

void remove_spaces(char *str)
{
    char *read_p = str;
    char *write_p = str;

    while (*read_p != '\0')
    {
        if (*read_p != ' ')
        {
            *write_p = *read_p;
            write_p++;
        }
        read_p++;
    }
    
    
    *write_p = '\0';
}