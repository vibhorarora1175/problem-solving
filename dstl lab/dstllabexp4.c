#include<stdio.h>
void sysm(int a[],int m ,int b[],int n)
{
int c[m],k,l,p=0,f;
for(k=0;k<m;k++)
{
    f=0;
    for(l=0;l<n;l++)
    {
        if(a[k]==b[l])
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        c[p]=a[k];
        p++;
    }
}
for(k=0;k<p;k++)
{
    printf("%d ",c[k]);
}
}
void main()
{
    int m,n,a[10],b[10],i,j;
    printf("enter the number of elements of set A :");
    scanf("%d",&m);
    printf("enter the elements of set A :");
    for(i=0;i<m;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter the number of elements of set B :");
    scanf("%d",&n);
    printf("enter the elements of set B :");
    for(j=0;j<n;j++)
    {
    scanf("%d",&b[j]);
    }
    printf("symetric difference is:");
    sysm(a,m,b,n);
    sysm(b,n,a,m);
}
