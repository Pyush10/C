#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 int sum(int n);
 int main()
 {
    system("cls");
     int n1,s1;
     printf("Enter the no. of terms:\n");
     scanf("%d",&n1);
     s1=sum(n1);
     printf("sum=%d",s1);
     getch();
     return 0;
 }
 int sum(int n)
 {
  int s=0,x=1,i;
  for ( i = 1; i <= n ; i++)
  {    
      s=s+x;
      x=x*10+1;
  }
     return s;
 }