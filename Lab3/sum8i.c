#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    float n,sum=0,i,x;
    printf("Enter number of terms and value of x:\n");
    scanf("%f%f",&n,&x);
    for ( i = 1; i <=n ; i++)
    {
        sum=sum+pow(x,i);
    }
    printf("sum=%f",sum);
    getch();
    return 0;
}