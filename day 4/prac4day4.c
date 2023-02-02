// Write a program to print all perfect numbers in given range using the function.
#include<stdio.h>
int perf(int n)
{
    if(n==0)
    {
        return 1;
    }

    perf(n-1);
}
void main()
{
    int n,x;
    printf("enter the number of perfect number you want to print");
    scanf("%d",&n);
x=2*n-1;
    perf(x);

}