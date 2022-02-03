#include<stdio.h>
#include<conio.h>
int main()
{
int m1[10][10],m2[10][10],m3[10][10]={0},r1,c1,r2,c2,i,j,k;
    printf("enter the row and column of first and second matrix\n");
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    if(c1!=r2)
    {
        printf("matrix multiplication cannot be performed\n");
    }

    else
    {
        printf("enter the element of first matrix\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }
        printf("enter the element of second matrix\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&m2[i][j]);
            }
}
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++) //k<c1 or k<r2
                {
                 m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];
                }
            }
        }
printf("the resultant matrix is \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",m3[i][j]);
            }
            printf("\n");
        }

    }
    getch();
    return(0);
}
