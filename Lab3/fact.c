#include<stdio.h>
#include<conio.h>
int main ()
{
    int n,i,fact=1;
    printf("Enter any number:\n");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        fact=fact*i;
        i++;
    }
      printf("Factorial=%d",fact);
    getch();
    return 0;
}