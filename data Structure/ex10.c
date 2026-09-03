#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float real;
    float imag;
} Complex;

void scan_function(Complex *ptr);

int main()
{
    float total_real = 0;
    float total_imag = 0;

    Complex *ptr = (Complex *)malloc(2 * sizeof(Complex));
    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    scan_function(ptr);

    total_real = ptr[0].real + ptr[1].real;
    total_imag = ptr[0].imag + ptr[1].imag;

    if (total_imag >= 0)
    {
        printf("The total complex number is: %.2f + %.2fi\n", total_real, total_imag);
    }
    else
    {
        printf("The total complex number is: %.2f - %.2fi\n", total_real, -total_imag);
    }

    free(ptr);
    ptr = NULL;

    return 0;
}

void scan_function(Complex *ptr)
{
    for (int i = 0; i < 2; i++)
    {
        printf("\n--- Complex Number [%d] ---\n", i + 1);
        printf("Enter the Real part: ");
        scanf("%f", &ptr[i].real);
        printf("Enter the Imaginary part: ");
        scanf("%f", &ptr[i].imag);
    }
}