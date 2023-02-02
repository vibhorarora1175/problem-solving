// 1- x + x2/2! - x3/3! + x4/4!......

#include<stdio.h>
#include<math.h>
int fact(int n)
{
    int i,fact;
    fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,i,j,s,x,k;
    printf("enter the number of elements");
    scanf("%d",&n);
     printf("enter the value of x");
    scanf("%d",&x);
    k=1;
    s=1;
    for(i=1;i<n;i++)
    {
        s=s+pow(-x,k)/fact(i);  
        k++;
    }
    printf("%d",s);
}