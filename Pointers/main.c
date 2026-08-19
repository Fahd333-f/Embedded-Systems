#include <stdio.h>
#include "my_string.h"
int main()
{
    char dest[50];
    char arr2[50];
    printf("Enter the two  strings name : \n");
    scanf("%s %s", arr2, dest);

    to_upper(arr2);
    to_lower(arr2);
    toggle_string(arr2);
    // printf("%s\n", string_copy(arr2, dest));
    if (string_compare(arr2, dest) == 0)
    {
        printf("are the same strings");
    }
    else
    {
        printf("are not  the same strings");
    }
}