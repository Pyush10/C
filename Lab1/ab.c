
#include<stdio.h>
#include<conio.h>
int main(){
    int n; 
    printf("Enter any no:\n");
    scanf("%d",&n);
    int fact=n;
    for (int i = n-1; i; i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}