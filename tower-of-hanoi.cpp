#include<iostream>
#include<cmath>
using namespace std;
void han(int n, char sor, char aux, char des)
{
    if(n==1)
    {
        cout<<sor<<" -> "<<des<<endl;
    }
    else
    {
        han(n-1, sor, des, aux);
        han(1, sor, aux, des);
        han(n-1, aux, sor, des);
    }
}
int main()
{
    int n, moves;
    cout<<"enter the number of disk: ";
    cin>>n;
    moves = pow(2, n)-1;
    cout<<"Moves required: "<<moves<<endl;
    han(n,'A','B','C');
    return 0;
}