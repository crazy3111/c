#include <stdio.h>
#define N 5
int stack[N];
int top = -1;
void push();
void pop();
// void peek();
void display();
int main()
{
    int ch;
    while (1)
    {
        printf("\n1.push\n2pop\n3.display");
        printf("\n\nenter the choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("invalid input\n");
        }
    }
}
void push()
{
    int n;
    if (top == N - 1)
    {
        printf("overflow");
    }
    else
    {
        printf("enter data you wnat to push");
        scanf("%d", &n);
        top++;
        stack[top] = n;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("under flow");
    }
    else
    {
        printf("poped element is %d", stack[top]);
        top--;
    }
}
void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d", stack[i]);
    }
}