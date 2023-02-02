#include<stdio.h>
int main()
{
int i,j;
char d='A'-1;
for(i=1;i<=4;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%c",d+j);
        
    }
    printf("\n");
    d++;
}
}
