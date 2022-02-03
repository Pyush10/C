#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char name[]="nepal";
    int i,j,l;
    l=strlen(name);
    for(i=0;i<l;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(i%2==0)
            {
                name[i]=toupper(name[i]);
            }
            printf("%c\t",name[j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}