//Insertion at begining in circular linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insertion(struct node *head, int element)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    //At this point p points towards last element
    ptr->next = head;
    p->next = ptr;
    ptr->data = element;
    head = ptr;
    return head;
}

void display(struct node *head)
{
    //Traversal of circular linked list using do while loop
    struct node *ptr = head;
    do
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
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
    fourth->next = head;
    printf("Previous list:\n");
    display(head);
    int element;
    printf("Enter element: ");
    scanf("%d", &element);
    printf("New list:\n");
    head = insertion(head, element);
    display(head);

    return 0;
}
