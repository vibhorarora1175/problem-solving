// Program to remove whitespace from the beginning, end, or both beginning and end, of a string
#include<stdio.h>
#include<string.h>
int main()
{
char str[20],str2[20];
    printf("enter your string :");
    gets(str);
    int s = 0, i = 0, c=0;
    while (str[i] != '\0')
    {
        s++;
        i++;
    }
      int m=0;
    for(int j=0;j<s;j++)
    {
        if(str[j]==' ' || str[j]=='\t' || str[j]=='\n')
        {
         
           m++;
        }
        else 
        {
            str2[c]=str[j];
            c++;
        }
    }
    for(int d=0;d<c;d++)
    {
          printf("%c",str2[d]);
    }

   
}