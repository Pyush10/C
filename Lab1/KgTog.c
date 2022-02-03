#include <stdio.h>
#include <conio.h>
int main()
{
    float kg,g;
    printf("Enter mass in kg\n");
    scanf("%f", &kg);
    g = kg*1000;
    printf("%f kg is equal to %f gram", kg, g);
    getch();
    return 0;
}