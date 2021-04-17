//To add a element at any index entered by user
#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insertion(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;

    if (index == 1)
    {
        ptr->data = data;
        ptr->next = head;
        return ptr;
    }
    else if (index == 5)
    {
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = ptr;
        ptr->data = data;
        ptr->next = NULL;

        return head;
    }
    else if (index > 1 && index < 5)
    {
        int i = 1;
        while (i != index - 1)
        {
            p = p->next;
            i++;
        }
        ptr->next = p->next;
        p->next = ptr;
        ptr->data = data;
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

    int element, index;

    printf("Specify element to be added: ");
    scanf("%d", &element);
    printf("Specify index: ");
    scanf("%d", &index);

    head = insertion(head, element, index);
    printf("New List is:\n ");

    display(head);

    return 0;
}
