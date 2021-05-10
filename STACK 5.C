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

int is_operator(char a)
{
    if (a == '+' || a == '-' || a == '*' || a == '/')
    {
        return 1;
    }
    return 0;
}

int check_prescedence(char a)
{
    if (a == '*' || a == '/')
    {
        return 2;
    }
    else if (a == '+' || a == '-')
    {
        return 1;
    }
    else if (a = '0')
    {
        return 0;
    }
    
}

int stacktop(struct stack *s)
{
    if (s->top == -1)
    {
        return 0;
    }

    return s->arr[s->top];
}

void push(struct stack *s, char val)
{
    if (isfull(s))
    {
        printf("stack overflow");
    }
    else
    {
        s->top++;
        s->arr[s->top] = val;
    }
}

char pop(struct stack *s)
{
    if (isempty(s))
    {
        printf("Stack underflow");
    }
    else
    {
        char val = s->arr[s->top];
        s->top--;
        return val;
    }
}

char *inflix_to_postflix(char *exp, int size)
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = size;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char *postfix = (char *)malloc((s->size + 1) * sizeof(char));
    int i = 0; //Infix scanner
    int j = 0; //Postfix filler

    while (exp[i] != '\0')
    {
        if (is_operator(exp[i]) == 0)
        {
            postfix[j] = exp[i];
            j++;
            i++;
        }
        else
        {
            if (check_prescedence(exp[i]) > check_prescedence(stacktop(s)))
            {
                push(s, exp[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(s);
                j++;
            }
        }
    }
    while (isempty(s) != 1)
    {
        postfix[j] = pop(s);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char *infix = "p-q-r/a";
    int size = sizeof(infix) / sizeof(char);
    printf("Postfix is %s", inflix_to_postflix(infix, size));
    return 0;
}
