#include<stdio.h>
int main()
{
int i,j,d,n;
printf("pattern for N=4 \n");
d=1;
for(i=1;i<=4;i++)
{
     for(j=4-i;j>0;j--)
    {
        printf(" ");
      
    }
    for(j=0;j<i;j++)
    {
      printf("%d ",d);
      d++;
    }
    printf("\n");
}
}
