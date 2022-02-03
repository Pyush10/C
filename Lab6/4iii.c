#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
 float sum(float n,float fact);
 int main()
 {
    system("cls");
     float n1,s1,i,fact1=1;
     printf("Enter the no of terms:\n");
     scanf("%f",&n1);
     for ( i = 1; i <= n1; i++)
     {
         fact1=fact1*i;
     }
     s1=sum(n1,fact1);
     printf("Sum=%f",s1);
     getch();
     return 0;
 }
 float sum(float n,float fact)
 {
if (n==1)
{
    return(1);
}
else{
    return(n/fact+sum(n-1,fact/n));
}
 }