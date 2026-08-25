#include <stdio.h>

void arrange_string(char *str, char *str2);
char arr[50] = {0};
char arr_2[50] = {0};

int main()
{
    printf("Enter the string : \n");
    scanf("%[^\n]", arr);
    
    arrange_string(arr, arr_2);
    
    printf("the new string is %s \n", arr_2);
}

void arrange_string(char *str, char *str2)
{
    char *q = str;

    while (*q != '\0')
    {
        char *p = str;
        char *h = str2;

        while (*p != '\0')
        {
            if (*q > *p || (*q == *p && q > p)) 
            {
                h++; 
            }
            p++;
        }
        
        *h = *q; 
        
        q++;
    }
}