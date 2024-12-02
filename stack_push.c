#include <stdio.h>
#include <stdlib.h>
int stack[8];
int max = 8;
int top;
int isfull();
int peek()
{
    return stack[top];
}
int isfull()
{
    if (top == max)
        return 1;
    else
        return 0;
}
int isempty()
{
    if (top == 0)
        return 1;
    else
        return 0;
}
int push(int data)
{
    if (!isfull())
    {
        top += 1;
        stack[top] = data;
    }
    else
        printf("Couldn't insert data, Stack is full.");
}
int main()
{
    int i;
    push(12);
    push(34);
    push(15);
    push(75);
    push(19);
    push(67);
    push(89);
    push(75);
    printf("element at the top of the stack: %d\n", stack[top]);
    printf("Elements: \n");
    for (i = top; i > 0; i--)
    {
        printf("%d\n", stack[i]);
    }
    printf("Stack full: %s\n", isfull() ? "true" : "false");
    printf("Stack empty: %s\n", isempty() ? "true" : "false");

    return 0;
}