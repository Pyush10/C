#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
 int sum_ind(int n);
 int main()
 {
    system("cls");
     int n1,s1;
     printf("Enter the number:");
     scanf("%d",&n1);
     s1=sum_ind(n1);
     printf("Sum of individual digit=%d",s1);
     getch();
     return 0;
 }
 int sum_ind(int n)
 {
if (n<=9)
{
    return(n);
}
else{
    return(n%10+sum_ind(n/10));
}
 }