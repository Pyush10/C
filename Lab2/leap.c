#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int main()
{
    int yr;
    system("cls");
    printf("Enter a year to check:\n");
    scanf("%d",&yr);
    if (yr%4==0 && yr%100!=0 || yr%100==0 && yr%400==0 )
    {
        printf("%d year is leap year\n",yr);
    }
    else
    {
        printf("%d year is not leap year\n",yr);
    }
    getch();
    return 0;
}