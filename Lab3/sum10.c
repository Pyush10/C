#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float n, sum = 0.0, i, j, fact;
    printf("Enter number of terms:\n");
    scanf("%f", &n);
    for (i = 1; i <= n; i++)
    {
        fact=1.0;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }

        sum = sum + (i / fact);
    }
    printf("sum=%f", sum);
    getch();
    return 0;
}