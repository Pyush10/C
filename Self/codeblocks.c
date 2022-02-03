#include<stdio.h>
#include<conio.h>
int main()
{
    char a[9]="pulchowk";
    int i,j;
    for(i=8;i>=0;i--)
    {
        for(j=8;j>=i;j--)
        {
            printf("%c\t",a[j]);
        }
        printf("\n");
    }
    getch();
    return(0);
}
