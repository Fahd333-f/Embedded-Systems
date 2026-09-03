#include <stdio.h>
#include <stdlib.h>
typedef struct
{

    float price;
    float total_cost;
    int item_quantity;
} Product;

void scan_function(Product *x, int product_number);
void print_function(Product *x, int product_number);

int main()
{
    int product_number = 0;
    printf("Enter the NUMBER of  PRODUCTS  : \n");
    scanf("%d", &product_number);
    Product *ptr = (Product *)calloc(product_number, sizeof(Product));
    if (ptr == NULL)
    {
        printf("allocation failed : \n");
        return 1;
    }
    scan_function(ptr, product_number);
    print_function(ptr, product_number);
    free(ptr);
    ptr = NULL;
    return 0;
}
void scan_function(Product *x, int product_number)
{

    for (int i = 0; i < product_number; i++)
    {
        printf("Enter the QUANTITY of the PRODUCT number[%d]  : ", i + 1);
        scanf("%d", &x[i].item_quantity);

        printf("Enter the PRICE of the PRODUCT number[%d]  : ", i + 1);
        scanf("%f", &x[i].price);
    }
}
void print_function(Product *x, int product_number)
{

    for (int i = 0; i < product_number; i++)
    {
        x[i].total_cost = (x[i].price) * (x[i].item_quantity);
        printf("The total cost of the product_number number [%d] : is %.2f : \n", i + 1, x[i].total_cost);
    }
}