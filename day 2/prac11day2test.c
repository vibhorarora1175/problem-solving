#include<stdio.h>
int main()
{
int i,j,d,n,k;
printf("ENTER THE NUMBER OF ROWS : \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  d=1;
    for(j=0;j<i;j++)
    {
      printf("%d",d);
      d++;
    }
    printf("\n");
}
for(i=1;i<=n;i++)
{
  for(k=n;k>i;k--)
  {
    printf(" ");

  }
  d=n-i;
  for(j=n;j>n-i;j--)
  {
    printf("%d",j-d);
  }

  printf("\n");
}
}
