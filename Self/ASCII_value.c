#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    char a;
    system("cls");
    printf("Enter a character: \n");
    scanf("%c",&a);
    printf("The ASCII value of %c is %d",a,a);
    getch();
    return 0;
}
