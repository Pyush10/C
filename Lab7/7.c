#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void max(int *a,int n,int *m);
int main()
{
    system("cls");
    int a[200],n1,i,m;
    printf("Enter the value of n:\n");
    scanf("%d",&n1);
    printf("Enter the data:\n");
    for ( i = 0; i < n1; i++)
    {
        scanf("%d",a+i);
    }
    max(a,n1,&m);
    printf("max value=%d",m);
    getch();
    return 0;
}
void max(int *a,int n,int *m)
{
  int i,j,temp;
     *m=*(a+0);
     for ( i = 0; i < n; i++)
    {         
           if (*m<*(a+i))
        {
        *m=*(a+i);
        }
    }
}