#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a[100],n,sum=0;
printf("Enter the number of terms:");
scanf("%d",&n);
printf("Enter the data:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("Sum=%d",sum);
getch();
return 0;
}