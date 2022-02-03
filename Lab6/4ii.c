#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
 int sum(int n,int x);
 int main()
 {
    system("cls");
     int n1,s1,x1;
     printf("Enter the no of terms:\n");
     scanf("%d",&n1);
     printf("Enter the value of x:\n");
     scanf("%d",&x1);
     s1=sum(n1,x1);
     printf("Sum=%d",s1);
     getch();
     return 0;
 }
 int sum(int n,int x)
 {
if (n==1)
{
    return(x);
}
else{

    return(pow(x,n)+sum(n-1,x));
    }
}