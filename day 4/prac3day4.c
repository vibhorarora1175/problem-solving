// Factorial of a number using tail recursion
#include<stdio.h>
int fact(int n)
{
 if(n==0)
 return 1;
 return n*fact(n-1);
 
}
void main()
{
    int n,x;
    printf("enter the number ");
    scanf("%d",&n);
    x=fact(n);
    printf("the factorial of the number is %d",x);
    
}