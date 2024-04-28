#include <stdio.h>
#include <ctype.h>
#include <math.h>

typedef struct
{
    int top;
    int val[100];
} stack;

void push(stack *s, int val)
{
    if (s->top == 100 - 1)
    {
        printf("stack Overflow\n");
        return;
    }
    s->val[++s->top] = val;
}

int pop(stack *s)
{
    if (s->top == -1)
    {
        printf("stack is empty\n");
        return -1;
    }
    return s->val[s->top--];
}

int solve(char *c)
{
    stack s;
    s.top = -1;

    for (int i = 0; c[i] != '\0'; i++)
    {
        if (isdigit(c[i]))
        {
            push(&s, c[i] - '0');
        }
        else
        {
            int op2 = pop(&s);
            int op1 = pop(&s);
            long long result;
            switch (c[i])
            {
            case '+':
                result = op1 + op2;
                break;
            case '-':
                result = op1 - op2;
                break;
            case '*':
                result = op1 * op2;
                break;
            case '/':
                if (op2 == 0)
                {
                    printf("Cannnot divide by zero\n");
                    return 0;
                }
                result = op1 / op2;
                break;
            case '%':
                result = op1 % op2;
                break;
            case '^':
                result = pow(op1, op2);
                break;
            default:
                printf("Invalid operator\n");
                return 0;
            }
            push(&s, result);
        }
    }
    if (s.top == -1)
    {
        printf("Invalid expression\n");
        return 0;
    }
    return pop(&s);
}

int main()
{
    char c[] = "224+65*456-898";
    int ans = solve(c);
    if (ans != 0)
    {
        printf("\nAns: %d\n", ans);
    }
    return 0;
}
