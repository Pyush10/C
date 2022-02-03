#include<stdio.h>
#include<conio.h>

struct student 
{
    char name[20],add[20];
    int id,class;
};
int main()
{
    struct student s;
    FILE *fp;
    fp=fopen("student.txt","w");
    printf("Enter the name,address,id and class of the student\n");
    scanf("%s%s%d%d",&s.name,&s.add,&s.id,&s.class);
    fprintf(fp,"Name=%s\nAddress=%s\nId=%d\nClass=%d",s.name,s.add,s.id,s.class);
    fclose(fp);
    getch();
    return(0);
}