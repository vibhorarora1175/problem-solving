/*
Input:
N = 3
Output:
33333
32223
32123
32223
33333

Explanation:
When N = 3 then there will be three boundaries.
Outer boundary contains only 3.
Middle boundary contains only 2.
And the inner boundary contains only 1.
*/
#include<stdio.h>
void main()
{
    int i,j,d,n,k;
    printf("enter the value of N:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>0;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=0;i<n-1;i++)
    {
        for(k=0;k<2*n-1;k++)
        {
            printf("%d",d);
        }
        printf("\n");
    }
}