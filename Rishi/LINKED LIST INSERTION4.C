//Insertion in linked list(It is insertion at end)
//Time complexity will be O(n)
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insert_at_end(struct node *head, int data1)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->data = data1;
    ptr->next = NULL;

    return head;
}

void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head, *second, *third, *new_element;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    new_element = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    int element;
    printf("Specify element to be added: ");
    scanf("%d", &element);
    printf("Prevois list was: ");
    display(head);
    head = insert_at_end(head, element);
    printf("\nNew list is: ");

    display(head);

    return 0;
}
