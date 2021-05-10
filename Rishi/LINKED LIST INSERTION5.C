//Insertion in linked list(It is insertion at end of a node)
//Time complexity will be O(1)
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insert_at_end_node(struct node *head,struct node *previous_node, int data1)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
  

   ptr->data=data1;
   ptr->next=previous_node->next;
   previous_node->next=ptr;

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
    head = insert_at_end_node(head, second,element);
    printf("\nNew list is: ");

    display(head);

    return 0;
}
