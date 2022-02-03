#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct employee
{
    char name[20], add[20], cname[20], post[20];
    long id;
};
int main()
{
    system("cls");
    struct employee e[200];
    int i, n;
    printf("Enter the number of employee:\n");
        scanf("%d", &n);
    printf("Enter the name, address, company name, post and ID of %d the employee\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s%s%s%s%ld", &e[i].name, &e[i].add, &e[i].cname, &e[i].post, &e[i].id);
    }
    printf("The details of the %d employee are\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Name=%s\nAddress=%s\ncompany name=%s\npost=%s\nID=%ld", e[i].name, e[i].add, e[i].cname, e[i].post, e[i].id);
        printf("\n\n");
    }
    getch();
    return 0;
}