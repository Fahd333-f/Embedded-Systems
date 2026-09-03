#include <stdio.h>
#include <stdlib.h>

typedef struct NEW
{
    int number;
    struct NEW *next;
} NEW;
int main()
{
    NEW *n1 = (NEW *)malloc(sizeof(NEW));
    NEW *n2 = (NEW *)malloc(sizeof(NEW));
    NEW *n3 = (NEW *)malloc(sizeof(NEW));
    n1->number = 12;
    n2->number = 17;
    n3->number = 19;
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;
    NEW *head = n1;
    while (head != NULL)
    {
        printf("%d\n", head->number);
        head = head->next;
    }
    free(n1);
    free(n2);
    free(n3);
    return 0;
}