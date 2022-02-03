#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
 int sum(int n);
 int main()
 {
    system("cls");
     int n1,s1;
     printf("Enter the no of terms:\n");
     scanf("%d",&n1);
     s1=sum(n1);
     printf("Sum=%d",s1);
     getch();
     return 0;
 }
 int sum(int n)
 {
if (n==1)
{
    return(1);
}
else{
    return(pow(n,2)+sum(n-1));
}
 }