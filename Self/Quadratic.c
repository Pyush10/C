// Author:Pyush Singh Kunwar
// Date: 2021/4/26
// Project for determining roots of given quadratic equation
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    system("cls");
    float a, b, c, root1, root2;
    printf("Enter the value of coefficient of x^2 (a), coeffient of x (b) and constant term of the quadratic equation:");
    scanf("%f%f%f", &a, &b, &c);
    root1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    root2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
    printf("Required roots of the given equation are:%f and %f\n", root1, root2);
    getch();
    return 0;
}
