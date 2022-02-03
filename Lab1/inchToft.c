#include<stdio.h>
#include<conio.h>
int main()
{
    float i,f;
    printf("Enter the value in inches:\n");
    scanf("%f",&i);
    f=i/12.0;
    printf("%f inch is equal to %f ft",i,f);
    getch();
    return 0;
}
