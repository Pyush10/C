#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 struct student 
 {
    char name[20],add[20],faculty[20];
    long id;
 };
 int main()
 {
    system("cls");
     struct student s1;
    printf("Enter the name, address, faculty and id of the student\n");
    scanf("%s%s%s%ld",&s1.name,&s1.add,&s1.faculty,&s1.id);
    printf("The details of the student are:\n Name=%s\nAddress=%s\nfaculty=%s\nId=%ld",s1.name,s1.add,s1.faculty,s1.id);
    getch();
    return 0;
 }