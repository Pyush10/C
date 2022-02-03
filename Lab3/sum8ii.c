#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    int n,sum=0,i,x=1;
    printf("Enter number of terms:\n");
    scanf("%d",&n);
    for ( i = 1; i <=n ; i++)
    {
        sum=sum+x;
        x=(x*10)+1;
    }
    printf("sum=%d",sum);
    getch();
    return 0;
}