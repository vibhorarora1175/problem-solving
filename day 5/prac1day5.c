#include<stdio.h>
#include<math.h>
void chocolate(int a[],int l , int r)
{
    while(l<r)
    {
        if(a[l]>a[r])
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    printf("the piece that goes to sister");
     printf("%d",a[l]);
}
int main()
{
int a[10],n,i,l,r;
printf("enter the number of chocolates pieces ");
scanf("%d",&n);
printf("enter the tastiest ranking");
for(i=0;i<n;i++)
scanf("%d", &a[i]);
l=0;
r=n-1;
chocolate(a,l,r);
return 0;
}