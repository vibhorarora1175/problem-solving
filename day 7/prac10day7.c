// Program for character by character frequency count
#include <stdio.h>
#include <string.h>
void main()
{
    char str[20];
    printf("enter your string :");
    gets(str);
    int s = 0, i = 0, c=0;
    while (str[i] != '\0')
    {
        s++;
        i++;
    }
    for (i = 0; i <= s; i++)
    {
        c=1;
        for (int j = i+1; j <= s; j++)
        {
            if (str[i] == str[j])
            {
               c++;
               str[j]='\0';
            }
        }
        if(str[i]!='\0')
        printf("'%c'=%d\n",str[i],c);
    }

}
