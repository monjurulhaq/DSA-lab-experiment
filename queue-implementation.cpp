#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 50
int queue_arr[MAX];
int rear = -1;
int front = -1;
void insert()
{
    int added_item;
    if(rear==MAX-1)
    {
        cout<<"\nQueue overflow\n";
        return;
    }
    else
    {
        if(front == -1)
            front = 0;
        cout<<"inpute the element for adding in queue: ";
        cin>>added_item;
        rear = rear+1;
        queue_arr[rear] = added_item;
    }
}
void del()
{
    if(front == -1 || front>rear)
    {
        cout<<"\nQueue underflow\n";
        return;
    }
    else
    {
        cout<<"\nElement deleted from queue is: \n"<<queue_arr[front];
        front = front+1;
    }

}
void display()
{
    int i;
    if(front == -1|| front>rear)
    {
        cout<<"\nQueue is empty\n";
        return;
    }
    else
    {
        cout<<"\nQueue is: \n";
        for(i=front; i<=rear; i++)
            cout<< queue_arr[i]<<" ";
        cout<<"\n";
    }
}
int main()
{
    int choice;
    while(1)
    {
        cout<<"\n1.Insert\n";
        cout<<"\n2.Delete\n";
        cout<<"\n3.Display\n";
        cout<<"\n4.Quit\n";
        cout<<"\nEnter your choice:";
        cin>>choice;
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
            break;
        
        default:
            cout<<"\nWrong choice\n";
        }
    }
    return 0;
}