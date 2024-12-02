#include<iostream>
using namespace std;
int fib(int i)
{
    if(i==0)
    return 0;
    else if(i==1)
    return 1;
    else
    return fib(i-1)+fib(i-2);
}
int main()
{
    int i;
    for(i = 0; i<10; i++)
    {
        cout<<"\t"<<fib(i);
    }
    return 0;
}