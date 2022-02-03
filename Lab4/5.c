#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a[100],j,n,temp;
printf("Enter the number of terms:");
scanf("%d",&n);
printf("Enter the data:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for ( i = 0; i < n; i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
    }    
}
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
getch();
return 0;
}