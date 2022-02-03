#include<stdio.h>
#include<conio.h>
int main()
{
    int i,fact=1,n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for ( i = 1; i <= (2*n) ; i++)
    {
        fact=fact*i;
    }
    printf("Factorial=%d",fact);
}