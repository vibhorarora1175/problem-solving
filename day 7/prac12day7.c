// Program to find if the given string is a valid C language identifier
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
    for(i=0;i<s;i++)
    {
        if(str[0]=='_' || (str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z') )
        {
            if((str[i]=='_' || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')|| str[i]==' '))
            {
                 c++;
            }
        }
    }
    if(c>0)
    {
        printf("valid");
    }
    else 
    {
        printf("invalid");
    }
}