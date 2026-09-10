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

void insertatend(int data, NODE *ptr)
{
    NODE *HEAD = ptr;
    NODE *N = cratenode(data);
    if (ptr == NULL)
    {
        printf("Error: List is empty.\n");
        return;
    }
    while (1)
    {
        if (HEAD->next == NULL)
        {
            N->next = NULL;
            HEAD->next = N;
            break;
        }
        HEAD = HEAD->next;
    }
}

NODE *Insert_at(int data, NODE *head, int index)
{
    if (index == 1)
        return insertatbeagn(data, head);

    NODE *ptr = head;
    for (int i = 1; i < index - 1 && ptr != NULL; i++)
    {
        ptr = ptr->next;
    }

    if (ptr == NULL)
        return head;

    NODE *new = cratenode(data);
    new->next = ptr->next;
    ptr->next = new;

    return head;
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
    printf("\n--------------------------------------------\n");

    printf("Before Insertion:\n");
    printnode(head);
    insertatend(20000232, head);
    printf("SUCCEFULL CREATING\n");
    printf("After Insertion:\n");
    printnode(head);
    printf("\n--------------------------------------------\n");

    printf("Before Insertion:\n");
    printnode(head);
    head = Insert_at(99, head, 3);
    printf("SUCCEFULL CREATING\n");
    printf("After Insertion:\n");
    printnode(head);

    return 0;
}