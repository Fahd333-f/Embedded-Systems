#include <stdio.h>
char arr[50];
char f;
int i = 0;
void find_frequency(char *str);
int main()
{
    printf("Enter the string : \n");
    scanf("%[^\n]", arr);
    printf("Enter the character to test it : \n");
    scanf(" %c", &f);
    find_frequency(arr);
}
void find_frequency(char *str)
{
    char *p = str;

    while (*p != '\0')
    {
        if (f == *p)
        {
            i += 1;
        }
        p++;
    }
    printf("The char %c have the frequency of %d : \n", f, i);
}