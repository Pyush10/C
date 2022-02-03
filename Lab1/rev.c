#include <stdio.h>
#include <conio.h>
 int main ()
 {
     int a,r1,r2,r3,res;
     printf("Enter a 3-digit number: \n");
     scanf("%d",&a);
     r1=a%10;
     a=a/10;
     r2=a%10;
     r3=a/10;
     res= (r1*100) + (r2*10) + r3;
     printf("The reverse is %d\n",res);
     getch();
     return 0;
 }