// Program for finding length of a string (User defined function)
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
printf("the length of string is :%d",s);
}