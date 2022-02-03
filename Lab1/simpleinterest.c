#include <stdio.h>
#include <conio.h>
int main()
{
    float p,t,r,i;
    printf("Enter principle, time and rate of interest\n");
    scanf("%f%f%f",&p,&t,&r);
    i= (p*t*r)/100;
    printf("Interest=%f\n",i);
    getch();
    return 0;
}