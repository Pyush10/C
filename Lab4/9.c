#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,m1[5][5],t[5][5],r,c;
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
printf("Entered matrix is:\n");
for ( i = 0; i < r; i++)
{
    for ( j = 0; j < c; j++)
    {
        printf("%d\t",m1[i][j]);
    }
    printf("\n");
}
for ( i = 0; i < r; i++)
{
    for ( j = 0; j < c; j++)
    {
      t[i][j]=m1[j][i];
    }    
}
printf("Transpose matrix is:\n");
for ( i = 0; i < r; i++)
{
    for ( j = 0; j < c; j++)
    {
        printf("%d\t",t[i][j]);
    }
    printf("\n");
}
getch();
return 0;
}
