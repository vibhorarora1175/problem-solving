#include<stdio.h>
#include<math.h>
int power(int n , int x , int a[])
{
    int flag=0;

  for (int i = 0; i < x; i++)
  {
    for (int j = 0; j < n; j++)
    {
       if(i&(1<<j))
       {
        printf("%d",a[j]);
       } 
    }
    printf("\n");
  }
}
int main()
{
int n,a[10],i,x;
printf("enter the number of elements:");
scanf("%d", &n);
printf("enter the elements");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
x=pow(2,n);
printf("number of elements in power sets are:");
printf("%d\n",x);
printf("elements in power sets are:\n");
power(n,x,a);
return 0;
}
