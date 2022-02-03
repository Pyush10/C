#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int sum(int n);
int main()
{
    system("cls");
    int n1,s1;
    printf("Enter the value of n:\n");
    scanf("%d",&n1);
    s1=sum(n1);
    printf("Sum=%d",s1);
    getch();
    return 0;
}
int sum(int n)
{
    int s=0,i;
    for ( i = 1; i <= n; i++)
    {
        s=s+i;
    }
    return(s);
}