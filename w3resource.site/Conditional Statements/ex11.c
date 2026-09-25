#include <stdio.h>
#include <math.h>

void calculate_quadratic_roots(int a, int b, int c);

int main()
{
    int a, b, c;

    printf("Input the value of a, b & c : ");
    scanf("%d %d %d", &a, &b, &c);

    calculate_quadratic_roots(a, b, c);

    return 0;
}

void calculate_quadratic_roots(int a, int b, int c)
{
    double discriminant = (b * b) - (4 * a * c);

    if (discriminant < 0)
    {
        printf("Root are imaginary;\nNo solution.\n");
    }
    else if (discriminant == 0)
    {
        double root = -b / (2.0 * a);
        printf("Both roots are equal.\n");
        printf("First  Root Root1= %lf\n", root);
        printf("Second Root Root2= %lf\n", root);
    }
    else
    {
        double root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        double root2 = (-b - sqrt(discriminant)) / (2.0 * a);
        printf("Both roots are real and diff-2\n");
        printf("First  Root Root1= %lf\n", root1);
        printf("Second Root Root2= %lf\n", root2);
    }
}