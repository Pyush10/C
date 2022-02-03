#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x,n,sum=1.0,fact;
    int i,j;
    printf("Enter the no. of terms:\n");
    scanf("%f",&n);
    printf("Enter the value of x\n");
    scanf("%f",&x);
    for ( i = 1.0; i <= (n-1); i++)
    {
        fact=1.0;
        for(j=1.0;j<=(2*i);j++)
        {
            fact=fact*j;
        }
        sum=sum+(pow(x,2*i)/fact);
    }
    printf("sum=%f",sum);
    getch();
    return 0;
}