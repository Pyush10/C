#include <stdio.h>
#include <conio.h>
int main()
{
    float f, m;
    printf("Enter value in feet\n");
    scanf("%f", &f);
    m = f/ 3.28;
    printf("%f feet is equal to %f metre", f, m);
    getch();
    return 0;
}