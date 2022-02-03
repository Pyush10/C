#include<stdio.h>
#include<conio.h>
int main()
{
    int i,len=5,j;
    char str[]="HELLO";
    for ( i = 0; i < len; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    for ( i = len-1; i >=0 ; i--)
    {
        for ( j = 0; j<=i ; j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    
    
    
}