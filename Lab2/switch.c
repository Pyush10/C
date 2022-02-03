#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main ()
{
    int n;
    system("cls");
    printf("Enter the number to get corresponding day\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
          printf("Sunday");
        break;
    case 2:
          printf("Monday");
        break;
    case 3:
          printf("Tuesday");
        break;
    case 4:
          printf("Wednesday");
        break;
    case 5:
          printf("Thursday");
        break;
    case 6:
          printf("Friday");
        break;
    case 7:
          printf("Saturday");
        break;
    
    default:
        printf("You have entered invalid value. Enter value from 1-7");
        break;
    }
}