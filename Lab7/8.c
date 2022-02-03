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
   system("cls");
    struct student s[100],temp;
    int i,j,n;
    printf("Enter the number of students:\n");
    scanf("%d",&n);
    printf("Enter the name, address and id of %d the student\n",n);
    for ( i = 0; i < n; i++)
    {
     scanf("%s%s%d",&s[i].name,&s[i].add,&s[i].id);   
    }
    for ( i = 0; i < n ; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (strcmp(s[i].name,s[j].name)>0)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
            
        }
        
    }
    printf("\nThe sorted data is:\n\n");
    for ( i = 0; i < n; i++)
    {
        printf("Name=%s\nAddress=%s\nID=%d\n\n",s[i].name,s[i].add,s[i].id);
    }
    getch();
    return 0;
} 