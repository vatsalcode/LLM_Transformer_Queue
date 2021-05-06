//Deletion in linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *deletion(struct node *head, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p, *q;
    if (index == 1)
    {
        //Deletion at begining
        p = head;
        head = head->next;
        free(p);
        return head;
    }
    else if (index == 4)
    {
        //Deletion at end
        p = head;
        q = head->next;
        while (q->next != NULL)
        {
            p = p->next;
            q = q->next;
        }
        q = p->next;
        p->next = NULL;
        free(q);
        return head;
    }

    else if (index > 1 && index < 4)
    {
        //Deletion in between
        int i = 1;
        p = head;
        while (i != index - 1)
        {
            p = p->next;
            i++;
        }
        q = p->next;
        p->next = q->next;
        free(q);
        return head;
    }
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
    int index;
    printf("Enter index to be deleted: ");
    scanf("%d", &index);
    head = deletion(head, index);
    printf("New list after deletion: \n");
    display(head);
    return 0;
}
