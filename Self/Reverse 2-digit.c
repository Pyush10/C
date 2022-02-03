// Author:Pyush Singh Kunwar
// Date: 2021/4/26
// Project for reversal of two digit number
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int a, b, num;
    system("cls");
    printf("Enter a two digit number:");
    scanf("%d", &num);
    a = num / 10;
    b = num % 10;
    num = 10 * b + a;
    printf("The reverse of the given number is:%d\n", num);
    getch();
    return 0;
}
