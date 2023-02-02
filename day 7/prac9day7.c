// Program for finding all suffixes of a string
#include <stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("enter your string :");
    gets(str);
    int s=0,i=0;
    while(str[i]!='\0')
    {
        s++;
        i++;
    }
    printf("the prefixes of the string are :\n");
    for(int i=s;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }

}
