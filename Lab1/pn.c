#include <stdio.h>
#include <conio.h>
#include <string.h> 
int main()
{
    int a;
    printf("Put the number: ");
    scanf("%d",&a); 
    if( a > 0 ) {
        printf("This number is positive\n");}
        else {
        printf("This number is negative\n");
    }
  getch();
  return 0;
}
