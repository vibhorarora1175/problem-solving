#include<stdio.h>
int main()
{
int i,j,d,n,k,p;
printf("ENTER THE NUMBER OF ROWS : \n");
scanf("%d",&n);
for(i=n;i>0;i--)
{
  d=1;
    for(j=0;j<i;j++)
    {
      printf("%d",d);
      d++;
    }
     for(k=n;k>i;k--)
  {
    printf(" ");

  }
 for(k=n;k>i;k--)
  {
    printf(" ");

  }
  d=n-i;
  for(p=n;p>n-i;p--)
  {
    printf("%d",p-d);
  }

    printf("\n");
}
}
