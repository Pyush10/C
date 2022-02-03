#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
void armstrong(int n);
int main()
{
    system("cls");
    int n1;
    printf("Enter the number:\n");
    scanf("%d", &n1);
    armstrong(n1);
    getch();
    return 0;
}
void armstrong(int n)
{
    int arm = 0, r, i, k, l;
    l = log10(n) + 1;
    k = n;
    for (i = 1; i <= l; i++)
    {
        r = n % 10;
        arm = arm + pow(r,l);
        n = n / 10;
    }
    if (k == arm)
    {
        printf("It is armstrong number");
    }
    else
    {
        printf("It is not armstrong number");
    }
}