#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b;
    printf("Put the number: ");
    scanf("%d",&a); 
    b = a % 2;
    if( b >= 1 ) {
        printf("This number is odd\n");}
        else {
        printf("This number is even\n");
    }
        getch();
            return 0;
}
