//Traversal of linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linked_list_treansversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    //Allocate memory for nodes in linked list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    //Linked head node with ssecond node
    head->data = 7;
    head->next = second;

    //Linked second node with third node
    second->data = 10;
    second->next = third;

    //Terminate list at third node
    third->data = 12;
    third->next = NULL;
    //NULL should be all uppercase and it means that the list is terminated

    //Printing the list
    linked_list_treansversal(head);
    return 0;
}
