#include<stdio.h>
#include<math.h>
void main(){
int a[5]={1,2,56,77,99};
for(int i=0;i<5;i++)
{
  int *p=&a[i];
  printf(" %d\t%d",p,*p);
  printf("\n");
}
printf("the address of a[1] is %d",&a[1]);
}