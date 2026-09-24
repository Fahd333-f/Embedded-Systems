#include <stdio.h>
void print_Rectangle_Perimeter_function(float width, float height);
int main()
{
    float width, height;
    printf("Enter in first the width and in second the height : \n");
    scanf("%f%f", &width, &height);

    print_Rectangle_Perimeter_function(width, height);

    return 0;
}
void print_Rectangle_Perimeter_function(float width, float height)

{
    printf("The Perimeter of rectangle is %f: \n", 2 * (width + height));
}