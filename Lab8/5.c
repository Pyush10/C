#include<stdio.h>
#include<conio.h>
struct employee
{
    char name[20],add[20];
    int id;
};
int main()
{
    struct employee e[5];
    FILE *fp;
    int i;
    fp=fopen("employee5.txt","w");
    for(i=0;i<5;i++)
    { 
     printf("Enter the name, address and id of the %d employee\n",i+1);
     scanf("%s%s%d",&e[i].name,&e[i].add,&e[i].id);
     fprintf(fp,"Name=%s\nAddress=%s\nID=%d",e[i].name,e[i].add,e[i].id);
    }
    fclose(fp);
    fp=fopen("employee5.txt","r");
    printf("The entered data is:\n");
    for ( i = 0; i < 5; i++)
    {    
    fscanf(fp,"%s%s%d",&e[i].name,&e[i].add,&e[i].id);
    printf("%s\n%s\nID=%d\n",e[i].name,e[i].add,e[i].id); 
    }
    fclose(fp);
    getch();
    return(0);
}