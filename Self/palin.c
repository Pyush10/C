#include<stdio.h>
#include<conio.h>
#include<math.h>
int palin(int n,int l);
int main()
{
    int n1,rev,l1,temp;
    printf("Enter the number:\n");
    scanf("%d",&n1);
    l1=log10(n1)+1;
    temp=n1;
    rev=palin(n1,l1);
    if (temp==rev)
    {
        printf("It is palindrome");
    }
    else
    {
        printf("It is not palindrome");
    }
    getch();
    return(0);
}
int palin(int n,int l)
{
    if(l==1)
    {
        return(n%10);
    }
    else
    {
        return(((n%10)*pow(10,l-1))+palin(n/10,l-1));
    } 
}