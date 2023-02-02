// x- x3/3! + x5/5! - x7/7!........ 
#include<stdio.h>
#include<math.h>
int fac(int n)
{
    int fac,i;
    fac=1;
    for(i=1;i<=n;i++)
    {
    fac=fac*i;
    }
    return fac;
}
int main()
{
    int n,x,k,s,m;
    printf("enter the value of x :");
    scanf("%d",&x);
    printf("enter the number of elements :");
    scanf("%d",&n);
    s=0;
    m=1;
    for(k=1;k<=n;k++)
    { 
        s=s+pow(x,2*m-1)*(pow(-1,m+1))/fac(2*m-1) ;
        m++;
        printf("%d ",s);
    }
    printf(" the sum of series is %d ",s);

}