#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int a[200],n1,i,j,temp;
    printf("Enter the value of n:\n");
    scanf("%d",&n1);
    printf("Enter the data:\n");
    for ( i = 0; i < n1; i++)
    {
        scanf("%d",a+i);
    }
    for ( i = 0; i < n1; i++)
    {   
       for ( j = i+1; j < n1; j++)
      {
           if (*(a+i)<*(a+j))
        {
        temp=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=temp;
        }
      }
    }
    printf("\nThe sorted data in descending order is:\n");
    for ( i = 0; i < n1; i++)
    {
        printf("%d\t",*(a+i));
    }
    getch();
    return 0;
}