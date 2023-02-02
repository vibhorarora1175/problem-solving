#include<stdio.h>
void main()
{
    int i,j,k,n,d,m;
    printf("enter the number of rows :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        
        for(k=1;k<n-i;k++)
        {
        printf(" ");
        }
        d=n-i;
        for(j=n;j>n-i;j--)
        {
            printf("%d",j-d);
        }
        d=1;
        for(m=1;m<i;m++)
        {
            printf("%d",d+m);

        }
        printf("\n");
    }
}