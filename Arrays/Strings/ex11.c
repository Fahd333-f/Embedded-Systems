#include <stdio.h>
void string_length(char arr[]);
char fahd[50];
int main()
{
    printf("Enter your string : \n");
    scanf("%[^\n]", fahd);
    string_length(fahd);
}
void string_length(char arr[])
{
    int i = 0;
    char *p = arr;
    while (*p != '\0')
    {
        i++;
        p++;
    }
    printf("the length of the stirng is %d : \n", i);
}