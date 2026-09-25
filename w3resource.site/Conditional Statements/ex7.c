#include <stdio.h>

void Height_Categorization_function(int height);

int main()
{
    int height = 0;
    printf("Input the height of the person (in centimetres) :");
    scanf("%d", &height);

    Height_Categorization_function(height);

    return 0;
}

void Height_Categorization_function(int height)
{
    if (height < 150)
    {
        printf("The person is Dwarf.\n");
    }
    else if ((height >= 150) && (height < 165))
    {
        printf("The person is average heighted.\n");
    }
    else if ((height >= 165) && (height < 195))
    {
        printf("The person is taller.\n");
    }
    else
    {
        printf("Abnormal height.\n");
    }
}