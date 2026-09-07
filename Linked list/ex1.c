#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} n;
n *createnode(int data)
{
    n *n1 = (n *)malloc(sizeof(n));
    n1->data = data;
    n1->next = NULL;
    return n1;
}
void printlinkedlist(n *head)
{

    while (head != NULL)
    {
        printf("%d->", head->data);
        head = head->next;
    }
    puts("NULL");
}
int main()
{

    n *N1 = createnode(44);
    n *N2 = createnode(49);
    n *N3 = createnode(40);

    N1->next = N2;
    N2->next = N3;

    n *head = N1;
    printlinkedlist(head);
}