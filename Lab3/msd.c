#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,x,sum=0,i,mean,sq=0;
	float sd;
	printf("Enter the value of n\n");
	scanf("%d",&n);
    printf("Enter the data\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		sum=sum+x;
		sq=sq+x*x;
	}
	mean=sum/n;
	sd=sqrt(sq/n-mean*mean);
	printf("The mean and standard deviation is %d and %f",mean,sd);
	getch();
	return(0);
}