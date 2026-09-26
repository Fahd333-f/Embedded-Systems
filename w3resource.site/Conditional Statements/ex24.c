#include <stdio.h>

int main()
{
    int choice;
    float r, l, w, b, h, area;

    printf("1. Circle\n2. Rectangle\n3. Triangle\nInput your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Input radius of the circle : ");
        scanf("%f", &r);
        area = 3.14 * r * r;
        printf("The area is : %f\n", area);
        break;
    case 2:
        printf("Input length and width of the rectangle : ");
        scanf("%f %f", &l, &w);
        area = l * w;
        printf("The area is : %f\n", area);
        break;
    case 3:
        printf("Input base and height of the triangle : ");
        scanf("%f %f", &b, &h);
        area = 0.5 * b * h;
        printf("The area is : %f\n", area);
        break;
    default:
        printf("Invalid choice\n");
    }
    return 0;
}