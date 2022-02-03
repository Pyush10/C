#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct person
{
    char name[20],add[20];
    int id;
};
int main()
{
    struct person p;
    FILE *fp,*fp1;
    fp=fopen("student.txt","r");
    if (fp==NULL)
    {
        printf("File doesn't exist\n");
        exit(0);
    }
    fscanf(fp,"%s%s%d",&p.name,&p.add,&p.id);
    fclose(fp);
    fp1=fopen("Person.txt","w");
    fprintf(fp1,"%s\n%s\nClass=%d\n",p.name,p.add,p.id);
    fclose(fp1);
    getch();
    return(0);
}