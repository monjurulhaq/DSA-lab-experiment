#include<iostream>
using namespace std;
#define MAX 7
int main()
{
    int arr[MAX] = {3,43,5,6,7,8,2};
    int indexmin,i,j;
    for(i=0;i<MAX;i++)
    {
        indexmin=i;
        for(j=i+1;j<MAX;j++)
        {
            if(arr[j]<arr[i])
            {
                indexmin=j;
            }
        }
        if(indexmin!=i)
        {
            int temp = arr[indexmin];
            arr[indexmin]=arr[i];
            arr[i]=temp;
        }
    }
    cout<<"The sorted list is: ";
    for(i=0; i<MAX; i++)
    {
        cout<<arr[i]<<endl;
    }

}