#include<stdio.h>
int digits(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    return count;
}
int max(int n)
{
    int dig,m,j;
    int i;
    dig=digits(n);
    m=n%10;
    for(i=1;i<=dig;i++)
    {
        j=n%10;
        if(j>m)
        m=j;
        n=n/10;
    }
   return m;
}
int min(int n)
{
  int dig,m,j;
  int i;
    dig=digits(n);
    m=n%10;
    for( i=1;i<=dig;i++)
    {
        j=n%10;
        if(j<m)
        m=j;
        n=n/10;
    }
   return m;
}

 void sequence(int a, int k)
 {
     int r=0,mindigit,maxdigit;
     int i;

     for(i=0;i<k-1;i++)
     {
         mindigit=min(a);
         maxdigit=max(a);
         r=a+(maxdigit*mindigit);
     }
     printf("%d",r);
 }

void main()
{
    int a,k,i,t;
    scanf("%d",&t);
    scanf("%d %d",&a,&k);
    sequence(a,k);

}
