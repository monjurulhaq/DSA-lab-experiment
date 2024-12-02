#include <iostream>
using namespace std;
#define MAX 7
int arr[MAX] = {4, 6, 3, 2, 1, 9, 7};
void printline(int count)
{
    int i;
    cout<<endl;
    for (i = 0; i <= count - 1; i++)
    {
        cout << "=";
    }
}
void display()
{
    int i;
    cout << "[";
    for (i = 0; i < MAX; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
}
void selectionsort()
{
    int indexmin, i, j;
    for (i = 0; i < MAX - 1; i++)
    {
        indexmin = i;
        for (j = i + 1; j < MAX; j++)
        {
            if (arr[j] < arr[indexmin])
            {
                indexmin = j;
            }
        }
        if (indexmin != i)
        {
            cout <<endl<< "Item swapped: [" << arr[i] << ", " << arr[indexmin] << "]";
            int temp = arr[indexmin];
            arr[indexmin] = arr[i];
            arr[i] = temp;
        }
        cout <<endl<<"Iteration " << i + 1<<"#:";
        display();
    }
}
int main()
{
    cout << "Input array: ";
    display();
    printline(50);
    selectionsort();
    cout <<endl<<"Output Array: ";
    display();
    printline(50);
    return 0;
}