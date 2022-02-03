#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    system("cls");
    char a[200],b[200],c[400];
    int l;
    printf("Enter the first string:\n");
    gets(a);
    printf("Enter the second string:\n");
    gets(b);
    strcpy(c,a);
    strcat(c," ");
    strcat(c,b);
    printf("The concatenated string is:%s",c);
    l=strlen(c);
    printf("\nstring length=%d",l);
    getch();
    return 0;
}