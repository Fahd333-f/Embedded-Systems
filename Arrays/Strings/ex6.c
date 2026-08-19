#include <stdio.h>
void string_vowel(char *str);
int main()
{
    char arr[50];
    // char arr_2[50];
    printf("Enter the  string : \n");
    scanf(" %[^\n]", arr);
    // scanf(" %[^\n]", arr_2);
    string_vowel(arr);
}
void string_vowel(char *str)
{
    int i = 0;
    char *p = str;
    while (*p != '\0')
    {
        if ((*p == ('a') || *p == ('A') || *p == ('e') || *p == ('E') || *p == ('i') || *p == ('I') || *p == ('o') || *p == ('O') || *p == ('u') || *p == ('U')))
        {
            i += 1;
        }
        p++;
    }

    printf("the number of vowel charachters is %d : \n", i);
}
