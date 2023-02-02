#include<stdio.h>
int main()
{
int i,j,d,k,m,n,l;
printf("enter the number of rows :");
scanf("%d",&n);
d=0;
l=0;
for(i=0;i<n;i++)
{
    for(k=1;k<n-i;k++)
    {
        printf(" ");
    }
    for(j=1;j<=i;j++)
    {
        printf("%d",d+j-1); 
    }
    d++;
    
    for(m=1;m<i;m++)
    {
        printf("%d",m+l-1);
    }
    l++;
    printf("\n");
}
}
