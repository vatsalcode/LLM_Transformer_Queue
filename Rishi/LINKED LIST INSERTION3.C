//Insertion in linked list(It is insertion in between)
//Time complexity will be O(n)
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insert_between(struct node *head, int data1, int index)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = data1;

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
    int element, index;
    printf("Specify element to be added : ");
    scanf("%d", &element);
    printf("Specify index at which element is to be added: ");
    scanf("%d", &index);
    printf("Prevois list was: ");
    display(head);
    head = insert_between(head, element, index);
    printf("\nNew list is: ");
    display(head);

    return 0;
}
