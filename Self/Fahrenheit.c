// Author:Pyush Singh Kunwar
// Date: 2021/4/25
// Project to convert celsius scale to fahrenheit scale
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float c, f;
    system("cls");
    printf("Enter the temperature in Centigrade:");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("centigrade to Fahrenheit: %f\n", f);
    getch();
    return 0;
}
