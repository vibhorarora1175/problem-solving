#include<stdio.h>
void main()
{
    int i,j,n;
    printf("ENTER THE NUMBER OF ROWS:");
    scanf("%d",&n);
     for(i=n-1;i>0;i--)
    {
     for(j=0;j<n-i;j++)
        {
           printf(" ");
        }
        for(j=0;j<2*i-1;j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    for(i=1;i<n+1;i++)
    {
        for(j=0;j<n-i;j++)
        {
           printf(" ");
        }
        for(j=0;j<2*i-1;j++)
        {
           printf("*");
        }
         printf("\n");
    }
}