//Insertion in linked list(It is insertion at begining)
//Time complexity will be O(1)
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insert_begininf(struct node *head, int data1)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data1;
    return ptr;
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

    printf("\nNew list is: ");
    head = insert_begininf(head, element);
    display(head);

    return 0;
}
