// Author:Pyush Singh Kunwar
// Date: 2021/4/13
// Project to distinguish whether a number is odd or even
#include <stdio.h>
#include <conio.h>
#include <string.h> 
int main()
{
    int a,b;
    printf("Put the number: ");
    scanf("%d",&a); 
    b = a % 2;
    printf("Remainder when divided by 2: %d \n",b);
    if( b >= 1 ) {
        printf("This number is odd\n");}
        else {
        printf("This number is even\n");
    }
        getch();
            return 0;
}
