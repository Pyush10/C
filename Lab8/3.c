#include<stdio.h>
#include<conio.h>

struct student 
{
    char name[20],add[20];
    int id,class;
};
int main()
{
    struct student s[5];
    FILE *fp;
    int i;
    fp=fopen("student5.txt","w");
    for(i=0;i<5;i++)
    {
    printf("Enter the name,address,id and class of the student %d\n",i+1);
    scanf("%s%s%d%d",&s[i].name,&s[i].add,&s[i].id,&s[i].class);
    fprintf(fp,"Name=%s\nAddress=%s\nId=%d\nClass=%d",s[i].name,s[i].add,s[i].id,s[i].class);
    }
    fclose(fp);
    fp=fopen("student5.txt","r");
    printf("The entered data is:\n");
    for ( i = 0; i < 5; i++)
    {
    fscanf(fp,"%s%s%d%d",&s[i].name,&s[i].add,&s[i].id,&s[i].class);
    printf("%s\n%s\n%d\n%d\n",s[i].name,s[i].add,s[i].id,s[i].class);
    }
    fclose(fp);
    getch();
    return(0);
}