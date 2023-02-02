#include<stdio.h>
void main()
{
    int i,j,k,n,p;
    printf("enter the element :");
    scanf("%d",&n);
    p=n;
    printf("%d ",n);
    while(n>0)
    {
        
         n=n-5;
         printf("%d ",n);
    }
    while(n<0)
    {
       n=n+5;
       printf("%d ",n); 
    }
    while(n>0)
    {
       n=n+5;
       printf("%d ",n); 
       if(n==p)
       break;
    }
}