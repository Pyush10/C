#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 struct student 
 {
    char name[20],add[20];
    long id, class;
    float m[5];
 };
 int main()
 {
    system("cls");
     struct student s1;
    int i;
    printf("Enter the name, address, class and ID of the student\n");
    scanf("%s%s%ld%ld",&s1.name,&s1.add,&s1.id,&s1.class);
    printf("Enter the marks of 5 subjects\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%f",&s1.m[i]);
    }
    printf("The details of the student are:\n Name=%s\nAddress=%s\nclass=%ld\nId=%ld",s1.name,s1.add,s1.id,s1.class);
    printf("\nMarks Obtained in 5 subjects are:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%f\t",s1.m[i]);
    }
    getch();
    return 0;
 }