#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[20],add[20];
    int id;
};
int main()
{
    struct student s[5],temp;
    int i,j;
    printf("Enter the name, address and id of 5 the student\n");
    for ( i = 0; i < 5; i++)
    {
     scanf("%s%s%d",&s[i].name,&s[i].add,&s[i].id);   
    }
    for ( i = 0; i < 5 ; i++)
    {
        for ( j = i+1; j < 5; j++)
        {
            if (strcmp(s[i].add,s[j].add)>0)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
            
        }
        
    }
    printf("\nThe sorted data is:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("Name=%s\nAddress=%s\nID=%d\n\n",s[i].name,s[i].add,s[i].id);
    }
    getch();
    return 0;
} 