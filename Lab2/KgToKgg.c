#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int g,kgg;
    system("cls");
    printf("Enter the mass in gm\n");
    scanf("%d",&g);
    kgg=g/1000;
    g=g%1000;
    printf("It is equal to %d kg %d g\n",kgg,g);
    getch();
    return 0;
}