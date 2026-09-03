#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int price;
} book;

int main()
{
    int Book = 0;
    printf("Enter the number of books : \n");
    scanf("%d", &Book);

    book *ptr = (book *)malloc(sizeof(book) * Book);
    for (int i = 0; i < Book; i++)
    {
        printf("Enter the price of book number %d \n", i + 1);
        scanf("%d", &ptr[i].price);
    }
    int salary = 0;
    printf("Give me the amount of money you have so I can see what suits you.\n");
    scanf("%d", &salary);
    int flag = 0;
    for (int i = 0; i < Book; i++)
    {
        if (salary == ptr[i].price)
        {

            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("We found the book that suits you in this price range.\n");
    }
    else
    {
        printf("Sorry we dont found your order");
    }

    free(ptr);
    ptr = NULL;
    return 0;
}