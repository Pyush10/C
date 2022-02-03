#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
void fibonacci(int n);
int main()
{
    system("cls");
    int n1;
    printf("Enter the number of terms:\n");
    scanf("%d", &n1);
    fibonacci(n1);
    getch();
    return 0;
}
void fibonacci(int n)
{
 int a=0,b=1,i,c,temp;
 printf("%d\t%d\t",a,b);
 for ( i = 1; i <= n-2 ; i++)
 {
     c=a+b;
     printf("%d\t",c);
     temp=a;
     a=b;
     b=c;
 }
}
 