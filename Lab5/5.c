#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
float interest(float p,float t,float r);
int main()
{
    system("cls");
    float p1,t1,r1,SI;
    printf("Enter the principle, rate of interest and time:\n");
    scanf("%f%f%f",&p1,&r1,&t1);
    SI=interest(p1,t1,r1);
    printf("Simple Interest=%f",SI);
    getch();
    return 0;
}
float interest(float p,float t, float r)
{
    return((p*t*r)/100);
}