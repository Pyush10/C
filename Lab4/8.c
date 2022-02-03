#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j,m1[5][5],r,c,min;
 printf("Enter the number of rows and columns:\n");
 scanf("%d%d",&r,&c);
 printf("Enter elements %d*%d matrix rowwise\n:",r,c);
 for(i=0;i<r;i++)
 {
    for(j=0;j<c;j++)
  {
    scanf("%d",&m1[i][j]);
  }
}
min=m1[0][0];
    for ( i = 0; i < r; i++)
    {
           for ( j = 0; j < c; j++)
        {
        if (m1[i][j]<min)
          {
            min=m1[i][j];
          }    
    }
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            if(i==j)
            {
                m1[i][j]=min;
            }
        }
    }
        printf("The matrix after substitution of min value is:\n");
    for ( i = 0; i < r; i++)
    {
      for ( j = 0; j < c; j++)
      {
          printf("%d\t",m1[i][j]);
      }
      printf("\n");
    }    
    getch();
    return 0;
}
}