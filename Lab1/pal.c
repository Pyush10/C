#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,l=0,j;
    char a[100],b[100];
    printf("Enter the word\n");
    scanf("%s",&a); 
    for(i=0; i<100 ;i++);
    {
    if(a[i] != '\0' ){
    printf("%c\n",a[i]);
        l=l+1;
        printf("%d",l);
    }
    }
    for(i=0;i<l;i++)
    {
    
            b[i]=a[l-i];
            printf("\n\n%c\n",a[j]);
        
        
    }
    for ( i = 0; i < l; i++)
    {
        if (b[i] != a[i])
        {
            n=1;
        }
        else
        {
            n=0;
        }
        
    }
    if (n=1)
    {
        printf("It is not palindrome");
    }
    else
    {
        printf("It is palindrome");
    }
    getch();
    return 0;
}
    
    