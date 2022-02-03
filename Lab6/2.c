#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 int factorial(int n);
 int main()
 {
    system("cls");
     int n1,fact1;
     printf("Enter the no:\n");
     scanf("%d",&n1);
     fact1=factorial(n1);
     printf("Factorial=%d",fact1);
     getch();
     return 0;
 }
 int factorial(int n)
 {
if (n==1 || n==0)
{
    return(1);
}
else{
    return(n*factorial(n-1));
}
 }