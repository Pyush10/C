#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a[10];
printf("Enter 10 numbers:\n");
for(i=0;i<10;i++)
{
   scanf("%d",&a[i]);
}
for (i=0; i<10;i++)
{
    printf("%d\t",a[i]);
}
getch();
return 0;
}