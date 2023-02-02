// Input:S = Geeks Output:Geeks .eeks ..eks ...ks ....s
#include<stdio.h>
void main()
{
    int i,j,n,k;
    char a[5];
    printf("enter the lenght of the word");
    scanf("%d",&n);
    printf("enter the word for the pattern");
    for(i=0;i<n;i++)
    {
      scanf("%c",&a[i]);
    }
    for(j=0;j<n;j++)
    {
      for(k=0;k<n;k++)
      {
      printf("%c",a[k]);
      a[j]='*';

      }
      printf("\n");
    }
}