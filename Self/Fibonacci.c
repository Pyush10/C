#include <stdio.h>
#include <stdlib.h>
int main()
{   system("cls");
    int n,i,t1=0,t2=1,result;
    printf("Enter the no of terms of fibonacci series required: \n");
    scanf("%d",&n);
    printf("The required series is %d,%d,",t1,t2);
    for ( i = 1; i = n; i++)
    {   t1=t2;
        t2=t1+t2;
        result= t1+t2;
        printf("%d,",result);
    }
    
    return 0;
}
