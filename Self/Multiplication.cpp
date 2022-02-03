// Author:Pyush Singh Kunwar
// Date: 2021/4/18
// Project to print multiplication table of given number
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int a, i = 1, b;
    printf("Put the number: \n");
    scanf("%d", &a);
    printf("Multiplication table of %d is\n", a);
    do
    {
        b = a * i;

        printf("%d x %d : %d\n",a,i,b);
        i++;
    } while (i <= 10);
    getch();
    return 0;
}