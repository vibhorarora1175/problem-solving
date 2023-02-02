// Fighting the darkness: Given an array arr[] of size N representing the size of candles which reduce by 1 unit each day. 
//The room is illuminated using the given N candles.
// Find the maximum number of days the room is without darkness.Input:
// First line contains N, Number of candles and 2nd line contains space separated N elements as height of all candles as array A.
// Output: Number of days the room can be illuminated.
#include<stdio.h>
#include<math.h>
void max(int a[],int n)
{
    int max;
    for(int j=0;j<n;j++)
    {
        if(a[j]>a[j+1])
        {
            max=a[j];
        }
    }
    printf(" the maximum number of days is %d",max);
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
max(a,n);
return 0;
}