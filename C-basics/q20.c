#include <stdio.h>

int main() {
    float a, b, c, d, e, result;

    printf("Enter value of a: ");
    scanf("%f", &a);
    printf("Enter value of b: ");
    scanf("%f", &b);
    printf("Enter value of c: ");
    scanf("%f", &c);
    printf("Enter value of d: ");
    scanf("%f", &d);
    printf("Enter value of e: ");
    scanf("%f", &e);

    result = (a + b) * c / d - e;
    printf("Result = %.2f\n", result);

    return 0;
}