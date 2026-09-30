#include <stdio.h>
void duplicate_check_function(int arr[]);

int main()
{
    int arr[50] = {0};
    duplicate_check_function(arr);
}
void duplicate_check_function(int arr[])
{
    int size = 0;
    while (1)
    {
        printf("ENTER THE NUMBER : \n");
        scanf("%d", &arr[size]);
        size += 1;
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[size - 1] == arr[j])
            {
                printf("SORRY WE HAVE DUPLICATE THEN NOW WE PRINT THE LASTET NUMBER AND STOP : \n");

                for (int x = 0; x <= size - 1; x++)
                {
                    printf("THE NUMBER OF INDEX[%d]is%d :\n", x, arr[x]);
                }
                return;
            }
        }
    }
}