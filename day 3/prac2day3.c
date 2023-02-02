#include<stdio.h>
void main()
{
    int n,i,j,s=1,c;
    printf("enter the number of elements");
    scanf("%d",&n);
    c=0;
    for(i=1;i<=n;i++)
    {
        s=s*i;  
        printf("%d \n",s);
        c=c+s;
    }
    printf("%d",c);
}