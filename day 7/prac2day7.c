// Program for reversing the given string (User defined function)
#include<stdio.h>
void main(){
char str[20];
printf("enter the name ");
gets(str);
int i=0,s=0;
while(str[i]!='\0')
{
    s++;
    i++;
}
for(int j=s;j>=0;j--)
{
    printf("%c",str[j]);
}
}