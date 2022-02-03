#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
 int arm(int a, int l);
 int main()
 {
    system("cls");
     int a1,b1,l1;
     printf("Enter the number\n");
     scanf("%d",&a1);
     l1=log10(a1)+1;
     b1=arm(a1,l1);
     if (b1==a1)
     {
        printf("It is armstrong no");
     }
     else{
         printf("It is not armstrong no");
     }
     getch();
     return 0;
 }
 int arm(int a,int l)
 {
if (a==0)
{
    return(0);
}
else{
    return(pow(a%10,l)+arm(a/10,l));
}
 }