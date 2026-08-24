#include <stdio.h>
void take_string();
void print_string(char arr[]);
char arr[50];
int main()
{
    take_string();
    print_string(arr);
    return 0;
}
void take_string()
{
    printf("Enter your string array :   ");
    scanf("%[^\n]", arr);
}
void print_string(char arr[])
{
    char *p = arr;
    while (*p != '\0')
    {

        p++;
    }
    printf(" %s", arr);
}
