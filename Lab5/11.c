#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<math.h>
int sum(int n);
int main()
{
    system("cls");
    int n1,s1;
    printf("Enter the number of terms:\n");
    scanf("%d",&n1);
    s1=sum(n1);
    printf("sum=%d",s1);
    getch();
    return 0;
}
int sum(int n)
{
    int i,s=0;
    for ( i = 1; i <= n; i++)
    {
        s=s+(i*i);
    }
    return(s);
}
