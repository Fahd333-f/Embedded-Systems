#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int array = 0;
    char arr[50] = {0};
    printf("Enter the number of elemnts : \n");
    scanf(" %d", &array);
    int x = array;
    int *p = (int *)calloc(array, sizeof(int));
    if (p == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (int i = 0; i < array; i++)
    {
        printf("Enter the number of p[%d] :  ", i);
        scanf("%d", &p[i]);
    }

    for (int i = 0; i < array; i++)
    {
        printf("the elemnt if p[%d] : \t %d \n", i, p[i]);
    }

    printf("Do you to resize array : \n");
    scanf("%s", arr);
    if ((strcmp(arr, "yes") == 0))
    {
        printf("Enter the new size : \n");
        scanf("%d", &array);

        int *temp = (int *)realloc(p, array * sizeof(int));
        if (temp == NULL)
        {
            printf("Reallocation failed!\n");
        }
        else
        {

            p = temp;
            for (int i = x; i < array; i++)
            {
                printf("Enter the number of p[%d] :  ", i);
                scanf("%d", &p[i]);
            }
            for (int i = x; i < array; i++)
            {
                printf("the elemnt if p[%d] : \t %d \n", i, p[i]);
            }
            printf("Successfully resized.\n");
        }
    }
    else
    {
        printf("You are welcome : \n");
    }

    free(p);
    p = NULL;

    return 0;
}