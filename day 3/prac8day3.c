//1*2*3 + 2*3*4 +3*4*5+ 4*5*6 + . …... .+ n*(n+1)*(n+2).
#include<stdio.h>
void main()
{
    int i,n,s;
    printf("enter the value of n or enter the number of elements :");
    scanf("%d",&n);
    s=0;
    for(i=1;i<=n;i++)
    {
        s=s+i*(i+1)*(i+2);
        printf("%d ",s);
    }
    printf("sum of the series is :");
    printf("%d",s);
}