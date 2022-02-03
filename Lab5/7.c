#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
void palindrome(int n);
int main()
{
    system("cls");
    int n1;
    printf("Enter the number:\n");
    scanf("%d", &n1);
    palindrome(n1);
    getch();
    return 0;
}
void palindrome(int n)
{
    int rev = 0, r, i, k, l;
    l = log10(n) + 1;
    k = n;
    for (i = 1; i <= l; i++)
    {
        r = n % 10;
        rev = rev*10 + r;
        n = n / 10;
    }
    if (k == rev)
    {
        printf("It is palindrome");
    }
    else
    {
        printf("It is not palindrome");
    }
}