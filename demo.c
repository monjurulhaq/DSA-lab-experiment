#include <stdio.h>
#include <conio.h>
#include <math.h>
void han(int n, char sor, char aux, char des)
{
    if (n == 1)
        printf("%c -> %c\n", sor, des);
    else
    {
        han(n - 1, sor, des, aux);
        han(1, sor, aux, des);
        han(n - 1, aux, sor, des);
    }
}
int main()
{
    int n, moves;
    printf("Enter the numbeer of disk you want to insert:");
    scanf("%d", &n);
    moves = pow(2, n) - 1;
    printf("\nThe no. of moves required is=%d\n", moves);
    han(n, 'A','B','C');
}