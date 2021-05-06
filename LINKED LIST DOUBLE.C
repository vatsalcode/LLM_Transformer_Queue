//Doubly linked list(traversal)
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *previous;
};

void display_front(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
void display_back(struct node *last)
{
    struct node *ptr = last;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->previous;
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
    head->previous = NULL;

    second->data = 2;
    second->next = third;
    second->previous = head;

    third->data = 3;
    third->next = fourth;
    third->previous = second;

    fourth->data = 4;
    fourth->next = NULL;
    fourth->previous = third;
    printf("Front list: \n");
    display_front(head);
    printf("\nBack list: \n");
    display_back(fourth);

    return 0;
}
