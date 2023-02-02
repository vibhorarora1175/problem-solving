#include<stdio.h>
int main()
{
int i,j;
char d='E';
for(i=1;i<=5;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%c",d+j-1); 
    }
    d--;
    printf("\n");
}
}
