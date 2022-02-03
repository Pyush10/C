#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct time
{
    int hr,m,s;
};
int main()
{
    system("cls");
    struct time t1,t2,t3;
    printf("Enter the first time in hour,minute and second\n");
    scanf("%d%d%d",&t1.hr,&t1.m,&t1.s);
    printf("Enter the second time in hour,minute and second\n");
    scanf("%d%d%d",&t2.hr,&t2.m,&t2.s);
    t1.s=t1.hr*3600+t1.m*60+t1.s;
    t2.s=t2.hr*3600+t2.m*60+t2.s;
    t3.s=t1.s+t2.s;
    t3.m=t3.s/60;
    t3.hr=t3.m/60;
    t3.m=t3.m%60;
    t3.s=t3.s%60;
    printf("The sum of the time is %d hour %d minute and %d second",t3.hr,t3.m,t3.s); 
    getch();
    return 0;
}