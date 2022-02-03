#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    system("cls");
    char a[200],k[200];
    printf("Enter the string:\n");
    gets(a);
    strcpy(k,a);
    strrev(a);
    if(strcmp(a,k)==0)
    {
       printf("It is palindrome\n");
    }
    else{
        printf("It is not palindrome\n");
    }
    getch();
    return 0;
}