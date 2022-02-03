#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void sort(int *a,int n);
int main()
{
    system("cls");
    int a[200],n1,i;
    printf("Enter the value of n:\n");
    scanf("%d",&n1);
    printf("Enter the data:\n");
    for ( i = 0; i < n1; i++)
    {
        scanf("%d",a+i);
    }
    sort(a,n1);
    printf("\nThe sorted data in descending order is:\n");
    for ( i = 0; i < n1; i++)
    {
        printf("%d\t",*(a+i));
    }
    getch();
    return 0;
}
void sort(int *a,int n)
{
  int i,j,temp;
     for ( i = 0; i < n; i++)
    {   
       for ( j = i+1; j < n; j++)
      {
           if (*(a+i)<*(a+j))
        {
        temp=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=temp;
        }
      }
    }
}