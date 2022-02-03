#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 int fibonacci(int n);
 int main()
 {
    system("cls");
     int n1,fibo1,i;
     printf("Enter the no of terms:\n");
     scanf("%d",&n1);
     printf("The fibonacci series is:\n");
     for ( i = 1; i <= n1; i++)
     {
         fibo1=fibonacci(i);
         printf("%d\t",fibo1);
     }
     getch();
     return 0;
 }
 int fibonacci(int n)
 {
if (n==1)
{
    return(0);
}
else if(n==2){
    return(1);
}
else{
    return(fibonacci(n-1)+fibonacci(n-2));
}
 }