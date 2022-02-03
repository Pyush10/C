#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    system("cls");
    char a[200],i,j,temp,l;
    printf("Enter the string:\n");
    gets(a);
    l=strlen(a);
    for ( i = 0; i < l; i++)
    {
        for ( j = i+1; j < l; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
        
    }
    printf("The sorted string is: %s\n",a);
    getch();
    return 0;
}