#include <stdio.h>
#include <string.h>
void validation_function(char arr[]);
int main()
{
    char str[50] = {0};
    validation_function(str);
}
void validation_function(char arr[])
{

    while (1)
    {
        printf("ENTER THE USER NAME : \n");
        scanf("%s", arr);
        if (strlen(arr) >= 8)
        {
            printf("VALID USERNAME! WELCOME.\n");
            break;
        }
        else
        {
            printf("ERROR : USERNAME MUST BE AT LEAST 8 CHARACTERS. TRY AGAIN!\n");
        }
    }
}