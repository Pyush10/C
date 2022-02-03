#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b, c, root1, root2, d;
    system("cls");
    printf("Enter the values of a,b and c of the quadratic equation ax^2+bx+c=0\n");
    scanf("%d%d%d", &a, &b, &c);
    d = sqrt(pow(b,2) - 4 * a * c);
    if (d > 0)
    {
        root1 = (-b + d) / (2 * a);
        root2 = (-b - d) / (2 * a);
        printf("The required roots are:%d,%d\n", root1, root2);
    }
    else if (d == 0)
    {
        root1 = -b / (2 * a);
        root2 = -b / (2 * a);
        printf("The required roots are:%d,%d\n", root1, root2);

     }
    getch();
    return 0;
}