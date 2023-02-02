#include<stdio.h>
void main()
{
 int a[10],b[10],c[100],i,j,m,n,x,y,s,p,r=0,q=0,t=0,o=0;
 printf("enter the number of elements in first set ");
 scanf("%d",&m);
 printf("enter the first set ");
 for(i=0;i<m;i++)
 {
    scanf("%d",&a[i] );
 }   
  printf("enter the number of elements in first set ");
  scanf("%d",&n);
  printf("enter the second set ");
 for(j=0;j<n;j++)
 {
    scanf("%d",&b[j] );
 }   
for(x=0;x<m-1;x++)
{
    for(y=0;y<m-x;y++)
    {
        if(a[y]>a[y+1])
        {
            s=a[y];
            a[y]=a[y+1];
            a[y+1]=s;
        }
    }
}
x=0;
y=0;
for(x=0;x<n-1;x++)
{
    for(y=0;y<n-x;y++)
    {
        if(b[y]>b[y+1])
        {
            p=b[y];
            b[y]=b[y+1];
            b[y+1]=p;
        }
    }
}
while(r<m && q<n)
{
    if(a[r]<b[q])
    {
        c[t]=a[r];
        t++;
        r++;
    }
    else if(a[r]=b[q])
    {
        c[t]=b[q];
        t++;
        q++;
        r++;
    }
}
printf("the union of the set is");
for(o=0;o<t;o++)
{
    printf("%d", c[o]);
}

}