#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int data;
    struct list *next;
} NODE;

NODE *cratenode(int data)
{
    NODE *N = (NODE *)malloc(sizeof(NODE));
    N->data = data;
    N->next = NULL;
    return N;
}

void printnode(NODE *ptr)
{
    NODE *HEAD = ptr;
    while (HEAD != NULL)
    {
        printf("%d -> ", HEAD->data);
        HEAD = HEAD->next;
    }
    printf("NULL\n");
}

NODE *insertatbeagn(int data, NODE *ptr)
{
    NODE *N = cratenode(data);
    N->next = ptr;
    return N;
}
NODE *insertatend(int data, NODE *ptr)
{
    NODE *N = createnode(200);
    ptr->next = N;
    N->next = NULL;
    N->data = data;
}

int main()
{
    printf(":::::WELCOME TO THE PROGRAM:::::\n");
    NODE *N1 = cratenode(1);
    NODE *N2 = cratenode(2);
    NODE *N3 = cratenode(3);

    NODE *head = N1;
    N1->next = N2;
    N2->next = N3;
    N3->next = NULL;

    printf("Before Insertion:\n");
    printnode(head);

    head = insertatbeagn(0, head);

    printf("SUCCEFULL CREATING\n");

    printf("After Insertion:\n");
    printnode(head);

    return 0;
}