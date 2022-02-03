#include<stdio.h>
#include<conio.h>
struct student 
{
    char name[20],add[20];
    int id;
};
int main()
{
    struct student s[100];
    int n,i;
    printf("Enter the number of students:");
    scanf("%d",&n);
    FILE *fp;
    fp=fopen("studentn.bin","wb");
    printf("Enter the name,address and id of the students\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%s%s%d",&s[i].name,&s[i].add,&s[i].id);
        fwrite(&s[i].name,sizeof(s[i].name),1,fp);    
        fwrite(&s[i].add,sizeof(s[i].add),1,fp);
        fwrite(&s[i].id,sizeof(s[i].id),1,fp);
    }
    fclose(fp);
    fp=fopen("studentn.bin","rb");
    printf("The entered data is:\n");
    for ( i = 0; i < n; i++)
    {
        fread(&s[i].name,sizeof(s[i].name),1,fp);
        fread(&s[i].add,sizeof(s[i].add),1,fp);
        fread(&s[i].id,sizeof(s[i].id),1,fp);
        printf("Name=%s\nAddress=%s\nClass=%d\n",s[i].name,s[i].add,s[i].id);
    }
    fclose(fp);
    getch();
    return(0);
}