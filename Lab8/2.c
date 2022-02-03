#include<stdio.h>
#include<conio.h>
struct employee
{
    char name[20],add[20];
    int id;
};
int main()
{
    struct employee e;
    FILE *fp;
    fp=fopen("employee.txt","w");
    printf("Enter the name, address and id of the employee\n");
    scanf("%s%s%d",&e.name,&e.add,&e.id);
    fprintf(fp,"Name=%s\nAddress=%s\nID=%d",e.name,e.add,e.id);
    fclose(fp);
    fp=fopen("employee.txt","r");
    fscanf(fp,"%s%s%d",&e.name,&e.add,&e.id);
    printf("The entered data is:\n");
    printf("%s\n%s\nID=%d",e.name,e.add,e.id);
    fclose(fp);
    getch();
    return(0);
}