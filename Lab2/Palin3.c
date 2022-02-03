#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int main()
{
    int k,n,r1,r2,r3,rev;
    system("cls");
    printf("Enter a three digit number:\n");
    scanf("%d",&n);
    k=n;
    r1=n%10;
    n=n/10;
    r2=n%10;
    r3=n/10;
    rev=r1*100+r2*10+r3;
    if (k==rev)
    {
        printf("This number is palindrome:\n");
    }
    else{
        printf("This number is not palindrome");
    }
    getch();
    return 0;
}