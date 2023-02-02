#include<stdio.h>
void inter (int a[], int m , int b[] ,int n )
{
    int k,l,c[m+n],y=0,q,f=0;
for(k=0;k<m;k++)
{
    for(l=0;l<n;l++)
    {
        if(a[k]==b[l])
        {
            c[y]=a[k];
            f=1;
            y++;
        }
    }
}
    printf("intersection is:");
    if(f==0){
    printf("NULL");
    }
    for(q=0;q<y;q++)
    {
        printf("%d",c[q]);
    }

}
void main()
{
    int m,n,i,j,a[10],b[10];
    printf("enter the number of elelments of set A : ");
    scanf("%d",&m);
    printf("enter the number of elelments of set B : ");
    scanf("%d",&n);
    printf("enter the elements of set A:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements of set B:");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    inter(a,m,b,n);
    
}