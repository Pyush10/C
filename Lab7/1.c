#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct person
{
    char name[20];
    int age;
};
struct student
{
    int rollno,class;
    struct person p;
    char add[20];
};
int main()
{
    system("cls");
    struct student s;
    printf("Enter the name,age,roll no,class,address of the student\n");
    scanf("%s%d%d%d%s",&s.p.name,&s.p.age,&s.rollno,&s.class,&s.add);
    printf("The details of the student are:\n Name=%s\nAge=%d\nRoll No.=%d\nclass=%d\naddress=%s\n",s.p.name,s.p.age,s.rollno,s.class,s.add);
    getch();
    return 0;
}