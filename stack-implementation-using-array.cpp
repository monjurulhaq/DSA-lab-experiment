#include <iostream>
using namespace std;
int stack[10];
int top =-1;
int MAX = 8;
int isfull()
{
    if (top==MAX-1)
    return 1;
    else
    return 0;
}
int isempty()
{
    if(top==-1)
    return 1;
    else 
    return 0;
}
int peek()
{
    return stack[top];
}
int pop()
{
    int data;
    if (!isempty())
    {
        data = stack[top];
        top = top - 1;
        return data;
    }
    else
    {
        cout<<"stack is empty";
    }
}
int push(int data)
{
    if(!isfull()){
    top+=1;
    stack[top]= data;
    }
    else
    cout<<"Stack is full";
}
int main()
{
    push(6);
    push(49);
    push(89);
    push(89);
    push(99);
    push(19);
    push(65);
    push(5);
    cout<<"Element at the top of the stack: "<<peek()<<endl;
    cout<<"Elements: "<<endl;
    for(int i=top; i>=0; i--)
    {
        cout<<stack[top]<<endl;
    }
    return 0;
}