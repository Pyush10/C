// Author: Pyush Singh Kunwar
// Date:2021/04/29
// Project to make a unit converter
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char input;
    float kmsTOfeet = 3280.84;
    float inchesTOfeet = 0.0833333;
    float cmsTOinches = 0.393701;
    float poundsTOkg = 0.453592;
    float inchesTOmeters = 0.0254;
    float first;
    float second;
    system("cls");
    while (1)
    {
        printf("Choose the required conversion:\n  1. kmsTOfeet\n  2. inchesTOfeet\n  3. cmsTOinches\n  4. poundsTOkg\n  5. inchesTOmeters\n  q. quit\n");
        scanf("%c", &input);
        switch (input)
        {
        case 'q':
            printf("Quitting the program...");
            goto end;
            break;
        case '1':
            printf("Enter first unit number:\n");
            scanf("%f", &first);
            second = first * kmsTOfeet;
            printf("%f kms is equal to %f feet", first, second);
            break;
        case '2':
            printf("Enter first unit number:\n");
            scanf("%f", &first);
            second = first * inchesTOfeet;
            printf("%f inches is equal to %f feet", first, second);
            break;
        case '3':
            printf("Enter first unit number:\n");
            scanf("%f", &first);
            second = first * cmsTOinches;
            printf("%f cms is equal to %f inches", first, second);
            break;
        case '4':
            printf("Enter first unit number:\n");
            scanf("%f", &first);
            second = first * poundsTOkg;
            printf("%f pounds is equal to %f kg", first, second);
            break;
        case '5':
            printf("Enter first unit number:\n");
            scanf("%f", &first);
            second = first * inchesTOmeters;
            printf("%f inches is equal to %f meters", first, second);
            break;
        default:
            break;
        }

        break;
       
    }
     end:
     getch();
         return 0;
}
