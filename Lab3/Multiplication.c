#include<stdio.h>
#include<conio.h>
int main ()
{
    int n,p,i;
    printf("Enter any number to show its multiplication table:\n");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        p = n * i;
        printf("%d*%d=%d\n",n,i,p);
        i++;
    }
    getch();
    return 0;
}
