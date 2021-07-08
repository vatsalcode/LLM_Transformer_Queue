//Deletion in linked list (removing a node)
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *deletion(struct node *head, struct node *ptr)
{
    struct node *p;
    p = head;
    while (p->next != ptr)
    {
        p = p->next;
    }
    p->next = ptr->next;
    free(ptr);
    return head;
}

void display(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head, *second, *third, *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 12;
    third->next = fourth;

    fourth->data = 23;
    fourth->next = NULL;
    printf("Old list: \n");
    display(head);

    head = deletion(head, second);
    printf("New list after deletion: \n");
    display(head);
    return 0;
}
