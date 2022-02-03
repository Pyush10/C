#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,m1[5][5],m2[5][5],m3[5][5]={0},r,c;
printf("Enter the number of rows and columns:\n");
scanf("%d%d",&r,&c);
printf("Enter elements of one %d*%d matrix rowwise\n:",r,c);
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
  {
    scanf("%d",&m1[i][j]);
  }
}
printf("Enter elements of another %d*%d matrix\n",r,c);
for ( i = 0; i < r; i++)
{
    for ( j = 0; j < c; j++)
    {
        scanf("%d",&m2[i][j]);
    }
    
}
for ( i = 0; i < r; i++)
{
    for ( j = 0; j < c; j++)
    {
        m3[i][j]=m1[i][j]+m2[i][j];
    }
    
}
for ( i = 0; i < r; i++)
{
    for ( j = 0; j < c; j++)
    {
        printf("%d\t",m3[i][j]);
    }
    printf("\n");
}
getch();
return 0;
}