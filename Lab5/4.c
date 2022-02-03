#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    system("cls");
    char name[5][200],i,j,temp[200];
    printf("Enter the names of 5 cities:\n");
    for ( i = 0; i < 5; i++)
    {
      scanf("%s",&name[i]);
    }  
    for ( i = 0; i < 5; i++)
    {
        for ( j = i+1; j < 5 ; j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
              strcpy(temp,name[i]);
              strcpy(name[i],name[j]);
              strcpy(name[j],temp);
            }
        }
        
    }
    printf("The sorted list of the cities is:\n");
     for ( i = 0; i < 5; i++)
     {
        printf("%s\n",name[i]);
     }
    getch();
    return 0;
}