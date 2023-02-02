// Given two numbers A and B, find Kth digit from right of A to the power B.
#include<stdio.h>
#include<math.h>
int main(){
int a,b,x,k,n;
int m=0;
printf("enter the number a and b:");
scanf("%d %d", &a ,&b);
x=pow(a,b);
printf("%d",x);
printf("\nenter the kth digit \n");
scanf("%d",&k);
int z;
z=x;
while(z>0)
{
    z=z/10;
    m++;
}
for(int i=0;i<m-k+1;i++)
{
    n=x%10;
    x=x/10;
}
printf("The %dth digit is %d",k,n);
return 0;
}