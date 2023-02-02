/*Multiply left and right array sum: Pitsy needs help in the given task by her teacher. 
The task is to divide a array into two sub array (left and right) containing n/2 elements 
each and do the sum of the subarrays and then multiply both the subarrays. 
Input: First line contains N, Number of elements and 2nd line contains space separated N elements of array A.
Output: A number resulting multiplication of sum of left half elements to right half elements.*/
#include<stdio.h>
#include<math.h>
void sum(int a[],int n)
{
    int sum1=0,sum2=0,x,y;
    x=n/2;
    for(int j=0;j<x;j++)
    {
        sum1=sum1+a[j];
    }
    for(int j=x;j<n;j++)
    {
        sum2=sum2+a[j];
    }
    y=sum1*sum2;
    printf(" the answer is %d",y);
}
int main()
{
int a[10],n;
printf("Enter the number of elements of array:");
scanf("%d", &n);
printf("Enter the array");
for(int i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
sum(a,n);
return 0;
}