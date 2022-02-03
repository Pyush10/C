// Author: Pyush Singh Kunwar
// Date: 2021/02/03
// Program to find out the distance between any two points on a plane.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
void main()
{   system("cls");
    float x1, y1, x2, y2, distance;
    printf("Enter the value of x1: \n");
    scanf("%f", &x1);
    printf("Enter the value of y1: \n");
    scanf("%f", &y1);
    printf("Enter the value of x2: \n");
    scanf("%f", &x2);
    printf("Enter the value of y2: \n");
    scanf("%f", &y2);
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("The distance between these two points is: %f", distance);
    getch();
}