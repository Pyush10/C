#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
    int n,t,i;
    printf("Enter number of terms:\n");
    scanf("%d",&n);
    for(i = 1; i <=n ; i++)
    {
        t = pow(i,2); 
    if(t<500)    
        printf("%d\t",t);
    }
    getch();
    return 0;
}