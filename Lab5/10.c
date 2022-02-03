#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void swap(int *a,int *b);
int main()
{
    system("cls");
    int a1,b1;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a1,&b1);
    printf("Before swapping\n a=%d,b=%d\n",a1,b1);
    swap(&a1,&b1);
    printf("After swapping\n a=%d,b=%d\n",a1,b1);
    getch();
    return 0;
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
} 