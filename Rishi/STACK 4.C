#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size, top;
    char *arr;
};

int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}
void push(struct stack *ptr, char val)
{
    if (isfull(ptr))
    {
        printf("stack overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
void pop(struct stack *ptr)
{
    if (isempty(ptr))
    {
        printf("Stack underflow");
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
    }
}

int parenthesis_match(char *exp, int size)
{
    struct stack *s;
    s->size = size;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(s, exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (isempty(s))
            {
                return 0;
            }
            pop(s);
        }
    }
    if (isempty(s))
    {
        return 1;
    }
    return 0;
}

int main()
{
    char *s = "((3*(5)))";
    int size = sizeof(s) / sizeof(char);
    if (parenthesis_match(s, size) == 1)
    {
        printf("\nParenthesis matched");
    }
    else
    {
        printf("\nParenthesis not matched");
    }

    return 0;
}
