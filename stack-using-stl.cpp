#include<iostream>
#include<stack>
using namespace std;
void showstack(stack<int>s)
{
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}

int main()
{
    stack<int> s;
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout<<"After implementation the stack is: "<<endl;
    showstack(s);
    cout<<"Stack size is: "<<s.size()<<endl;
    cout<<"Stack top is: "<<s.top()<<endl;
    s.pop();
    s.pop();
    cout<<"After two pop operation stack is: "<<endl;
    showstack(s);
    cout<<"Stack size is: "<<s.size()<<endl;
    cout<<"Stack top is: "<<s.top()<<endl;
    if(s.empty())
    cout<<"Stack is empty";
    else
    cout<<"Stack is not empty";

    return 0;
}