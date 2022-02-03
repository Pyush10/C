#include<stdio.h>
#include<conio.h>
#include<math.h>
float Sum(float n, float x);
int main()
{
    float s1,n1,x1;
    printf("Enter the value of n and x:\n");
    scanf("%f%f",&n1,&x1);
    s1=Sum(n1,x1);
    printf("Sum=%f",s1);
    getch();
    return(0);
}
float Sum(float n,float x)
{
    float s=0,i,j,fact;
    for ( i = 1; i <= n; i++)
    { fact=1;
        for ( j = 1; j <=(2*i-1); j++)
        {
            fact=fact*j;
        }
        s=s+pow(x,(2*i-1))/fact;
    }
    return(s);
}