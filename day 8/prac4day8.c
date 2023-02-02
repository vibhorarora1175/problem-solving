// Given an odd-digit-number N, you need to find whether the given number is a balanced-number or not. 
// An odd digit number is called a balanced number if the sum of all digits to the left of the middle digit
// and the sum of all  digits to the right of the middle digit is equal.
// Note:- The number of digits of 1234006. is 7, i.e. odd digits. 
// The middle digit is 4. LHS sum is 1+2+3=6, and RHS sum is 0+0+6=6.
#include<stdio.h>
#include<math.h>
int count(int n, int c)
{
    int m;
    while (n > 0)
    {
        m = n % 10;
        n = n / 10;
        c++;
    }
    printf("count is %d\n", c);
    return c;
}
int sumfirst(int n, int c)
{
    int k=0;
    int m,b;
    int x=(c/2)+1;
    for(int i=0;i<x;i++)
    {
        m = n % 10;
        n = n / 10;
        b=b+m;
        
    }
    printf("%d",b);
    return b;

}

int main(){
int n,c=0,m=0;
printf("enter the odd digit number :\n");
scanf("%d", &n);
c=count(n,c);
m=sumfirst(n,c);

return 0;
}
