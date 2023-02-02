//For a given number N. Print the pattern in the following form: 1 121 12321 1234321 for N = 4.
#include<stdio.h>
void main()
{
    int i,j,n,d,k,m;
    printf("enter the numer of rows:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        d=1;
        for(k=0;k<n-i;k++)
        {
        printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("%d",d+j);
        }
        for(m=1;m<i;m++)
        {
            printf("%d",d+j-m-1);
        }
        printf("\n");
    }
}