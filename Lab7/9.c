#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student
{
    char name[20], address[20];
    int id;
};
void sort(struct student s[], int n);
int main()
{
    system("cls");
    struct student s[100], temp;
    int i,j,n;
    printf("Enter the no of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the name, address and id of student %d\n",i+1);
        scanf("%s%s%d",&s[i].name,&s[i].address,&s[i].id);
    }
    sort(s,n);
    printf("the details of %d student in sorted order ascending to id is\n",n);
     for(i=0;i<n;i++)
     {
         printf("name=%s\n address=%s\n id=%d\n",s[i].name,s[i].address,s[i].id);
     }
     getch();
     return(0);
}
void sort(struct student s[], int n)
{
    struct student temp;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i].id>s[j].id)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}