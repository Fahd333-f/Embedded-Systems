#include <stdio.h>
#include "my_string.h"
int main()
{

    char arr2[50];
    printf("Enter the string name : \n");
    scanf("%[^\n]", arr2);

    to_upper(arr2);
    to_lower(arr2);
    toggle_string(arr2);
}