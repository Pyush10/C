#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    int n,sum=0,i;
    printf("Enter number of terms:\n");
    scanf("%d",&n);
    for ( i = 1; i <=n ; i++)
    {
        sum=sum+ (pow(-1,i)*pow(i,2));
    }
    printf("sum=%d",sum);
    getch();
    return 0;
}