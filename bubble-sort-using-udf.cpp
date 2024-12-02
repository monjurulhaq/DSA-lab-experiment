#include<iostream>
using namespace std;
int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}
int main()
{
    int n, i, j, arr[30], temp;
    cout << "How many data do you want: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "enter the num: a[" << i << "]: ";
        cin >> arr[i];
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout << "sorted sequence is: " << endl;
    for (i = 1; i <= n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}