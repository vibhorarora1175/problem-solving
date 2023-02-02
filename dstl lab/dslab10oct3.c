#include<stdio.h>
#include<math.h>
int main(){
int a[5][5][5],r,t,c,i,j,k;
printf("enter the nubmer of rows,columns and thickness");
scanf("%d %d %d",&r,&c,&t);
printf("input the array ");
for(i=0;i<r;i++)
{
    for (j = 0; j < c; j++)
    {
        for(k=0;k<t;k++)
        {
          scanf("%d",&a[i][j][k]);
        }
    }
}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        for(k=0;k<t;k++)
        {
           printf("%d\t",&a[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}

return 0;
}