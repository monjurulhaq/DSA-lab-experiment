#include<iostream>
using namespace std;
int main()
{
    int n, item, loc, a[30], i;
    cout << "How many numbers do you want: ";
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        cout << "Enter the number a[" << i << "]: ";
        cin >> a[i];
    }

    cout << "Which item do you want to search: ";
    cin >> item;
    a[n+1]=item;
    loc = 1;
    while(item!=a[loc])
    {
        loc+=1;
    }
    if(loc == n+1)
        cout << "The item is not found" << endl;
    else
        cout << item << " is the location of item at index " << loc << endl;

    return 0;
}