#include<stdio.h>
#include<conio.h>
#include<math.h>
int sum(int n);
int main()
{
    int n1,s1;
    printf("Enter the number\n");
    scanf("%d",&n1);
    s1=sum(n1);
    printf("Sum=%d",s1);
    getch();
    return(0);
}
int sum(int n)
{
    int s=0,r,l,i;
    l=log10(n)+1;
    for ( i = 1; i <= l; i++)
    {
      r=n%10;
      s=s+r;
      n=n/10;
    }
    return(s);
}