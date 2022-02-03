#include<stdio.h>
#include<conio.h>
int main()
{
int i,a[100],j,n,max,min;
printf("Enter the number of terms:");
scanf("%d",&n);
printf("Enter the data:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for ( i = 0; i < n; i++)
{
 if(a[i]>max)
 {
  max=a[i];
 }
}
min=a[0];
for ( i = 0; i < n; i++)
{
    if (a[i]<min)
    {
        min=a[i];
    }    
}
printf("max=%d,min=%d",max,min);
getch();
return 0;
}