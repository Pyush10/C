#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void circle(float *r,float *a,float *p);
int main()
{
    system("cls");
    float r1,a1,p1;
    printf("Enter the value of radius of the circle\n");
    scanf("%f",&r1);
    circle(&r1,&a1,&p1);
    printf("Area=%f\nPerimeter=%f",a1,p1);
    getch();
    return 0;
}
void circle(float *r,float *a,float *p)
{
    *a=3.14*(*r)*(*r);
    *p=2*3.14*(*r);
}