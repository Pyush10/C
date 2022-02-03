#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    float n,sum=0,i;
    printf("Enter number of terms:\n");
    scanf("%f",&n);
    for ( i = 1; i <=n ; i++)
    {
      sum=sum+(1/pow(i,3));     
    }
    printf("Sum=%f",sum);
    getch();
    return 0;
}