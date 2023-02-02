// lcm of two numbers
#include<stdio.h>
#include<math.h>
int lcm(int m , int n)
{
    int i,f;
    for(i=1;i<=m && i<=n;i++)
    {
        if(m%i==0 && n%i==0)
       f=i;
    }
    printf("lcm is %d\n",f);
    return 0;
}
void main()
{
int m,n;
printf("enter the first number:");
scanf("%d",&m);
printf("enter the second number:");
scanf("%d",&n);
lcm(m,n);
}