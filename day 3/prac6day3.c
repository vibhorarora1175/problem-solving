// 1- x2/2! + x4/4! - x6/6!........
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
    s=1;
    m=1;
    for(k=1;k<=n;k++)
    { 
        s=s+pow(x,2*m)*(pow(-1,m))/fac(2*m) ;
        m++;
        printf("%d ",s);
    }
    printf(" the sum of series is %d ",s);

}