#include<iostream>
using namespace std;
int main()
{
    int high,low,mid,n,item,a[30];
    cout<<"How many data: ";
    cin>>n;
    for(int i =1; i<=n; i++)
    {
        cin>>a[i];
    }
    low = 1;
    high = n;
    mid = (high+low)/2;
    cout<<"Which item: ";
    cin>>item;
    for(int i = 1; i<=n; i++)
    {
        if(a[mid]>item)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
        mid = (low+high)/2;
    }
    if (a[mid]==item)
    {
        cout<<"Item at "<<mid;
    }
    else
    cout<<"NOt found";
    return 0;
}