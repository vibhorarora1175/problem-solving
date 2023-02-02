// Program for finding if the given string is a palindrome
#include <stdio.h>
void main()
{
    char str[20], str2[20];
    printf("enter the name ");
    gets(str);
    int i = 0, s = 0;
    while (str[i] != '\0')
    {
        s++;
        i++;
    }
    int k = 0;
    for (int j = s; j >= 0; j--)
    {
        str2[k] = str[j];
        k++;
    }
    int m=0,o=0;
    for(i=0;i<s;i++)
    {
        m++;
       if(str2[m]==str[i])
       {
         o++;
       }
    }
    if(o==s)
    {
        printf("pallindrone");
    }
    else
    {
        printf("not pallindrone");
    }
   
}