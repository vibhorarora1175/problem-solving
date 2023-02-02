/** Given an array arr of size n. Print all the numbers less than k and should be such that the difference between every adjacent digit should be 1 in the array.

Note: Return empty list if no such number present, driver code will automatically print -1.

Example 1:

Input:
n = 8, k = 54
arr[] = {7, 98, 56, 43, 45, 23, 12, 8}
Output: 43 45 23 12
Explanation: 43 45 23 12 all these numbers have adjacent 
digits diff as 1 and they areless than 54.
**/
#include<stdio.h>
#include<math.h>
void mast(int a[],int n,int k)
{
    int num;
   for(int i=0;i<n;i++)
   {
    int temp=0;
    num=a[i];
     while(a[i]<k && num>9)
     {
        int b=num%10;
        num=num/10;
        int c=num%10;
        int x=b-c;
        if(x==1 || x==-1)
        {
            temp=1;
        }
     }
     if(temp==1)
     printf("%d ",a[i]);
   }

}
int main()
{
int n,a[10],k;
printf("enter the value of n");
scanf("%d", &n);
printf("enter the array ");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the element to compare ");
scanf("%d",&k);
mast(a,n,k);
return 0;
}