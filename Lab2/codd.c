#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int main()
{
    int n;
    system("cls");
    printf("Enter the number:\n");
    scanf("%d",&n);
    if(n%2!=0)
    {
        printf("The given number is odd\n");
    }
    getch();
    return 0;
}