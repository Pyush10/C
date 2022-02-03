#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char c;
    system("cls");
    printf("Enter a chracter:\n");
    scanf("%c",&c);
    if (c>=97 && c<=122)
    {
     printf("Given character is lowercase\n");
     c=c-32;
     printf("Its uppercase is %c\n",c);
    }
    else
    {
        printf("Given charater is uppercase\n");
        c=c+32;
        printf("Its lowercase is %c\n ",c);
    }
    
}