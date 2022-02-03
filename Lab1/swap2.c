#include <stdio.h>
#include <conio.h>
int main ()
{
    int a,b,temp;
    printf("Enter any two numbers:");
    scanf("%d%d",&a,&b);
    printf("Before swap a=%d b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swap a=%d b=%d",a,b);
    getch();
}