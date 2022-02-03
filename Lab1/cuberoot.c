#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{   
    float num, cuberoot;
    printf("Enter the number:\n");
    scanf("%f",&num);
    cuberoot=pow(num,1/3.0);
    printf("Its cuberoot is %f",cuberoot);
    getch();
    return 0;
}