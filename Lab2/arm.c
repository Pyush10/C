#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,k,r1,r2,r3,res;
    system("cls");
    printf("Enter a 3-digit number:\n");
    scanf("%d",&n);
    k=n;
    r1=n%10;
    n=n/10;
    r2=n%10;
    r3=n/10;
    res=pow(r1,3)+pow(r2,3)+pow(r3,3);
    if (res==k)
    {
        printf("It is armstrong number\n");
    }
    else
    {
        printf("It is not armstrong number\n");
    }
    getch();
    return 0;
}