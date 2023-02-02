#include<stdio.h>
#include<math.h>
// int main(){
// int a[50][50],r,c,i,j;
// printf("enter the nubmer of rows nd columns");
// scanf("%d %d",&r,&c);
// printf("input the array ");
// for(i=0;i<r;i++)
// {
//     for (j = 0; j < c; j++)
//     {
//       scanf("%d",&a[i][j]);
//     }
// }
// for(i=0;i<r;i++)
// {
//     for(j=0;j<c;j++)
//     {
//       printf("%d\t",&a[i][j]);
//     }
//     printf("\n");
// }
// return 0;
// }
void main()
{
    int a[3][3],r,c,i,j,*p;
printf("enter the nubmer of rows and columns");
scanf("%d %d",&r,&c);
printf("input the array ");
for(i=0;i<r;i++)
{
    for (j = 0; j < c; j++)
    {
      scanf("%d",&a[i][j]);
    }
}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        p=&a[i][j];
        printf("%d \t %d\n",p,*p);
    }
}
}