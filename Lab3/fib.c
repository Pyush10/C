#include<stdio.h>
#include<conio.h>
int main ()
{
    int sum=1,n,a=0,b=1,c,i;
    printf("Enter number of terms:\n");
    scanf("%d",&n);
    printf("%d\t %d\t",a,b);
    for ( i = 1; i <=n-2 ; i++)
    {
        c=a+b;
        printf("%d\t",c);
        sum=sum+c;
        a=b;
        b=c;
    }
    printf("\nsum=%d",sum);
    getch();
    return 0;
}