// gcd of two numbers

#include<stdio.h>
#include<math.h>
int gcd(int m , int n)
{
    int i,f;
    for(i=1;i<=m && i<=n;i++)
    {
        if(m%i==0 && n%i==0)
       f=i;
    }
    printf("gcd is %d\n",f);
    return 0;
}
void main()
{
int m,n;
printf("enter the first number:");
scanf("%d",&m);
printf("enter the second number:");
scanf("%d",&n);
gcd(m,n);
}
/*
#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}
*/
