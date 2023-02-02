// Program for comparing two strings (User defined function)
/* #include <stdio.h>
#include <string.h>
void main()
{
    char str[20],str2[20];
    printf("enter the name ");
    gets(str);
    printf("enter the name ");
    gets(str2);
    if(strcmp(str, str2)==0){

    printf("string is comparable ");
    }
    else
    printf("string is not comparable ");
}*/
#include<stdio.h>
void main()
{
    char str[20], str2[20];
    printf("enter the name ");
    gets(str);
    printf("enter the name ");
    gets(str2);
    int i=0,s=0;
    while(str[i]!='\0')
    {
        i++;
        s++;
    }
    int j=0,k=0;
    while(str2[j]!='\0')
    {
        j++;
        k++;
    }
    int f=0;
    for(i=0;i<s;i++)
    {
        if(str[i]==str2[f])
        {
          f++;
        }
    }
    if(f==k)
    {
        printf("string is comparable ");
    }
    else
        printf("string is not comparable ");
}